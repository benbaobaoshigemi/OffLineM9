"""RAW front end = the 17U M9 snapshot path up to the StyleTrans input (B2Y "ForRGB" node).

17U chain (odm/etc/camera/xiaomi/legendsnapshot.json):
  Anchor -> MFNR -> B2Y(SigFrame) -> FormatConvertor -> AllinOne(AISP, RAW16 -> linear RGB16,
  BLC/LSC/WB, dgain_apply_adrc=0) -> B2Y ForRGB (IPE: LTM, CC, 2D-LUT, gamma, CV) -> StyleTrans ...

Here:
  DNG -> linear white-balanced camera RGB (rawpy)          ~ AllinOne output (offline: the DNG is
                                                              already merged/denoised by its camera)
  M9 AE re-metering (m9.ae)                                 -> short exposure + ADRC gain
  LTM: ADRC applied as a global luma curve                  (M9: ltm/lce strength 0, TMC 100 % global)
  CC : DNG colour matrix x M9 relative matrix               (sensor-specific -> relative transform)
  2D LUT (tdl13), gamma152, CV (cv122)                      M9 tables, used as decoded
Output: display-referred RGB in [0,1] (what B2Y writes as BT.601 full-range NV12).
"""
from __future__ import annotations

from dataclasses import dataclass, field

import os

import numpy as np
import rawpy

from . import tuning
from .ae import AEResult, meter

SRGB_TO_XYZ = np.array([[0.4124564, 0.3575761, 0.1804375],
                        [0.2126729, 0.7151522, 0.0721750],
                        [0.0193339, 0.1191920, 0.9503041]])


@dataclass
class RawInfo:
    exposure_time: float = 0.0
    iso: float = 0.0
    fnumber: float = 0.0
    as_shot_neutral: np.ndarray | None = None
    cct: float = 5000.0
    ev100: float = 0.0
    baseline_exposure: float = 0.0
    make: str = ""
    model: str = ""
    extra: dict = field(default_factory=dict)


def _xy_to_cct(x: float, y: float) -> float:
    n = (x - 0.3320) / (0.1858 - y)  # McCamy
    return float(449 * n ** 3 + 3525 * n ** 2 + 6823.3 * n + 5520.33)


def _num(v) -> float:
    if v is None:
        return 0.0
    if isinstance(v, (tuple, list)):
        if len(v) == 2 and all(isinstance(t, int) for t in v):
            return float(v[0]) / float(v[1]) if v[1] else 0.0
        return _num(v[0])
    try:
        return float(v)
    except (TypeError, ValueError):
        return 0.0


def _rationals(v) -> np.ndarray:
    a = np.asarray(v, np.float64).ravel()
    return a[0::2] / a[1::2] if a.size % 2 == 0 and a.size >= 6 else a


def dng_tags(path: str) -> dict:
    import tifffile
    out = {}
    with tifffile.TiffFile(path) as tf:
        for t in tf.pages[0].tags.values():
            out[t.name] = t.value
        exif = out.get("ExifTag")
        if isinstance(exif, dict):
            out.update(exif)
    return out


_ILLUM_CCT = {17: 2856.0, 21: 6504.0, 20: 5503.0, 22: 7504.0, 23: 5003.0, 1: 5500.0, 2: 4200.0,
              3: 2856.0, 10: 6500.0, 11: 7500.0, 12: 6400.0, 13: 5000.0, 14: 4150.0, 15: 3450.0,
              18: 4874.0, 19: 6774.0, 24: 3200.0}


def _mat(v):
    return _rationals(v).reshape(3, 3) if v is not None else None


def dng_color(tags: dict, neutral: np.ndarray):
    """DNG colour model: ColorMatrix1/2 blended by 1/CCT; CCT solved iteratively from the
    as-shot neutral. Returns (XYZ->camera matrix, cct)."""
    cm1, cm2 = _mat(tags.get("ColorMatrix1")), _mat(tags.get("ColorMatrix2"))
    if cm1 is None:
        raise ValueError("DNG without ColorMatrix1")
    if cm2 is None:
        return cm1, 5000.0
    t1 = _ILLUM_CCT.get(int(_num(tags.get("CalibrationIlluminant1"))), 6504.0)
    t2 = _ILLUM_CCT.get(int(_num(tags.get("CalibrationIlluminant2"))), 2856.0)
    cct = 5000.0
    for _ in range(30):
        w = np.clip((1 / cct - 1 / t2) / (1 / t1 - 1 / t2), 0, 1) if t1 != t2 else 1.0
        cm = w * cm1 + (1 - w) * cm2
        xyz = np.linalg.solve(cm, neutral)
        new = _xy_to_cct(xyz[0] / xyz.sum(), xyz[1] / xyz.sum())
        if abs(new - cct) < 1:
            cct = new
            break
        cct = float(np.clip(new, 1500, 20000))
    return cm, cct


XYZ_D50 = np.array([0.96422, 1.0, 0.82521])
LEGEND_CCT = 5003.0   # libawbcore MiAwbAlgo::CalLegendModeGain: "Legend CCT:5000" (D50 point)


def _cm_at(tags: dict, cct: float) -> np.ndarray:
    cm1, cm2 = _mat(tags.get("ColorMatrix1")), _mat(tags.get("ColorMatrix2"))
    if cm2 is None:
        return cm1
    t1 = _ILLUM_CCT.get(int(_num(tags.get("CalibrationIlluminant1"))), 6504.0)
    t2 = _ILLUM_CCT.get(int(_num(tags.get("CalibrationIlluminant2"))), 2856.0)
    w = np.clip((1 / cct - 1 / t2) / (1 / t1 - 1 / t2), 0, 1) if t1 != t2 else 1.0
    return w * cm1 + (1 - w) * cm2


def load_dng(path: str, half: bool = False) -> tuple[np.ndarray, np.ndarray, RawInfo]:
    """Return (linear camera RGB white-balanced to the M9 locked D50 point, 1.0 = clip;
    that camera space -> linear sRGB; info with the *scene* CCT from AsShotNeutral).

    17U Legend AWB (libawbcore CalLegendModeGain): gains are fixed to the sensor's calibrated
    D50 point times the AWBPreference shift, which is 1.0 for Legend; the AWB statistics
    still run and report the scene CCT used by the IQ tables and StyleTrans model choice."""
    info = RawInfo()
    tags = dng_tags(path)
    if "AsShotNeutral" in tags:
        neutral = _rationals(tags["AsShotNeutral"])
    else:
        with rawpy.imread(path) as raw:
            wb = np.array(raw.camera_whitebalance[:3], np.float64)
        neutral = wb[1] / np.maximum(wb, 1e-6)
    info.as_shot_neutral = neutral
    _, info.cct = dng_color(tags, neutral)

    xyz2cam = _cm_at(tags, LEGEND_CCT)
    n50 = xyz2cam @ XYZ_D50
    n50 = n50 / n50[1]
    mul = 1.0 / n50
    with rawpy.imread(path) as raw:
        rgb = raw.postprocess(
            gamma=(1, 1), no_auto_bright=True, output_bps=16, user_wb=[mul[0], mul[1], mul[2], mul[1]],
            output_color=rawpy.ColorSpace.raw, demosaic_algorithm=rawpy.DemosaicAlgorithm.AHD,
            half_size=half, highlight_mode=rawpy.HighlightMode.Clip)
    rgb = rgb.astype(np.float32) / 65535.0
    # WB'd camera space: camWB = diag(1/n50) cam ; rows normalised so D50 white -> (1,1,1)
    srgb2cam = np.diag(1.0 / n50) @ xyz2cam @ SRGB_TO_XYZ
    srgb2cam /= srgb2cam.sum(axis=1, keepdims=True)
    cam2srgb = np.linalg.inv(srgb2cam)

    info.exposure_time = _num(tags.get("ExposureTime"))
    info.fnumber = _num(tags.get("FNumber"))
    info.iso = _num(tags.get("ISOSpeedRatings") or tags.get("PhotographicSensitivity"))
    info.baseline_exposure = _num(tags.get("BaselineExposure"))
    info.make = str(tags.get("Make", "")).strip()
    info.model = str(tags.get("Model", "")).strip()
    if info.exposure_time > 0 and info.fnumber > 0 and info.iso > 0:
        info.ev100 = float(np.log2(info.fnumber ** 2 / info.exposure_time) - np.log2(info.iso / 100.0))
    return rgb, cam2srgb.astype(np.float32), info


def lux_index_from_ev(ev100: float) -> float:
    """Qualcomm lux index from scene EV100: +1 index per 1.03x exposure (23.45 / EV),
    anchored at EV100 13 -> 170 (bright daylight bins of the 17U tables start below 173)."""
    return float(np.clip(474.9 - 23.45 * ev100, 0, 999))


# ---------------------------------------------------------------- IPE stages

def drc_curve(x: np.ndarray, gain: float) -> np.ndarray:
    """Global ADRC curve: slope `gain` in shadows/mids, rolls off to 1.0 at 1.0."""
    if gain <= 1.0 + 1e-6:
        return x
    return gain * x / (1.0 + (gain - 1.0) * x)


def tmc_lut(gain: float, lux: float, n: int = 4096) -> np.ndarray:
    """TMC202 GTM curve (m9.tmc, original knee/Hermite code) sampled on [0,1]."""
    from . import tmc
    leaf = tuning.lookup("m9", "tmc202_sw_v2", drc=max(gain, 1.0), gain=1.0, lux=lux)
    X, Y = tmc.anchor_knees(leaf, max(gain, 1.0))
    return tmc.gtm_curve(np.linspace(0, 1, n), X, Y).astype(np.float32)


def ltm_global(rgb_lin: np.ndarray, gain: float, lut: np.ndarray | None = None) -> np.ndarray:
    """LTM block with ltm/lce strength 0: only the global (TMC/GTM) luma curve, applied as the
    OFE gtm133 Y-ratio gain curve(Y)/Y (hue-preserving)."""
    y = rgb_lin @ np.array([0.299, 0.587, 0.114], np.float32)
    yc = np.clip(y, 0.0, 1.0)
    c = drc_curve(yc, gain) if lut is None else np.interp(yc, np.linspace(0, 1, lut.size), lut)
    g = c / np.maximum(y, 1e-6)
    return rgb_lin * g[..., None].astype(np.float32)


def cc_m9(cam2srgb: np.ndarray, lux: float, cct: float, drc: float) -> np.ndarray:
    """Camera -> M9 output matrix: DNG colorimetric matrix with the 17U M9/normal relation
    M_rel = CC_m9 * CC_normal^-1 (both act on the same 17U camera RGB) applied on top."""
    cond = dict(drc=max(drc, 1.0), lux=lux, cct=cct, flag=0.0)
    rel = tuning.cc_matrix("m9", **cond) @ np.linalg.inv(tuning.cc_matrix("normal", **cond))
    return (rel @ cam2srgb).astype(np.float32)


def tdl_apply(rgb: np.ndarray, hue_tab: np.ndarray, sat_tab: np.ndarray) -> np.ndarray:
    """2D LUT: HSV hue/sat grid, 24 hue knots (15 deg) x 16 sat knots."""
    import cv2
    x = np.clip(rgb, 0, None).astype(np.float32)
    v = x.max(-1)
    scale = np.maximum(v, 1e-6)
    hsv = cv2.cvtColor(x / scale[..., None], cv2.COLOR_RGB2HSV)
    h, s = hsv[..., 0], hsv[..., 1]
    hi = h / 15.0
    si = s * 15.0
    h0 = np.floor(hi).astype(int) % 24
    h1 = (h0 + 1) % 24
    fh = hi - np.floor(hi)
    s0 = np.clip(np.floor(si).astype(int), 0, 15)
    s1 = np.clip(s0 + 1, 0, 15)
    fs = np.clip(si - s0, 0, 1)

    def bil(t):
        return ((1 - fh) * ((1 - fs) * t[h0, s0] + fs * t[h0, s1])
                + fh * ((1 - fs) * t[h1, s0] + fs * t[h1, s1]))
    hsv[..., 0] = np.mod(h + bil(hue_tab), 360.0)
    hsv[..., 1] = np.clip(s * (1.0 + bil(sat_tab)), 0, 1)
    out = cv2.cvtColor(hsv, cv2.COLOR_HSV2RGB) * scale[..., None]
    return out


def gamma_apply(rgb_lin: np.ndarray, lut: np.ndarray) -> np.ndarray:
    xs = np.linspace(0.0, 1.0, lut.size)
    return np.interp(np.clip(rgb_lin, 0, 1), xs, lut).astype(np.float32)


def cv_apply(rgb: np.ndarray, p: np.ndarray) -> np.ndarray:
    """cv122: Y = ry R + gy G + by B ; Cb = a[(B-G) + b(R-G)], Cr = c[(R-G) + d(B-G)]
    (p/m pairs by sign of the result). Output re-expanded with the BT.601 full-range inverse,
    i.e. the RGB a downstream NV12 consumer sees."""
    r, g, b = rgb[..., 0], rgb[..., 1], rgb[..., 2]
    y = p[0] * r + p[1] * g + p[2] * b
    cb_ = (b - g) + np.where((b - g) >= 0, p[6], p[7]) * (r - g)
    cr_ = (r - g) + np.where((r - g) >= 0, p[10], p[11]) * (b - g)
    cb = np.where(cb_ >= 0, p[4], p[5]) * cb_
    cr = np.where(cr_ >= 0, p[8], p[9]) * cr_
    R = y + 1.402 * cr
    G = y - 0.344136 * cb - 0.714136 * cr
    B = y + 1.772 * cb
    return np.stack([R, G, B], -1).astype(np.float32)


@dataclass
class FrontEndResult:
    rgb: np.ndarray           # display-referred RGB [0,1], B2Y output
    ae: AEResult
    info: RawInfo
    lux_index: float
    cct: float


def b2y(path: str, lux_index: float | None = None, cct: float | None = None, ev: float = 0.0,
        half: bool = False) -> FrontEndResult:
    lin, cam2srgb, info = load_dng(path, half=half)
    li = float(lux_index) if lux_index is not None else (lux_index_from_ev(info.ev100) if info.ev100 else 300.0)
    k = float(cct) if cct is not None else info.cct

    ae = meter(lin, li)
    gain = np.float32(ae.exp_short * 2.0 ** ev)
    cond = dict(drc=ae.adrc_gain, lux=li, cct=k)
    ccm = cc_m9(cam2srgb, li, k, ae.adrc_gain).T
    hue_tab, sat_tab = tuning.tdl_tables("m9", flag=0.0, **cond)
    glut = tuning.gamma_lut("m9", **cond)
    cvp = tuning.cv_params("m9", flag=0.0, **cond)
    gtm = tmc_lut(ae.adrc_gain, li)

    def strip(x):                      # per-pixel IPE chain; strips run in parallel threads
        x = ltm_global(x * gain, ae.adrc_gain, gtm)
        x = np.clip(x @ ccm, 0, None)
        x = tdl_apply(x, hue_tab, sat_tab)
        x = gamma_apply(x, glut)
        return np.clip(cv_apply(x, cvp), 0, 1)

    from concurrent.futures import ThreadPoolExecutor
    n = os.cpu_count() or 4
    bounds = np.linspace(0, lin.shape[0], 2 * n + 1).astype(int)
    out = np.empty(lin.shape, np.float32)

    def run(i):
        out[bounds[i]:bounds[i + 1]] = strip(lin[bounds[i]:bounds[i + 1]])
    with ThreadPoolExecutor(n) as ex:
        list(ex.map(run, range(2 * n)))
    return FrontEndResult(out, ae, info, li, k)
