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
from functools import lru_cache

import os

import numpy as np
import rawpy

from . import dcp, tuning
from .ae import AEResult, meter

SRGB_TO_XYZ = dcp.SRGB_TO_XYZ
XYZ_D65 = dcp.XYZ_D65
XYZ_D50 = dcp.XYZ_D50
D50_TO_D65 = dcp.D50_TO_D65


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


LEGEND_CCT = dcp.LEGEND_CCT   # libawbcore MiAwbAlgo::CalLegendModeGain: "Legend CCT:5000" (D50 point)


def default_dcp(camera: str) -> str | None:
    return dcp.default_target_dcp(camera)


@lru_cache(maxsize=8)
def dcp_srgb2cam(dcp_path: str, cct: float = LEGEND_CCT) -> np.ndarray:
    """Linear sRGB (D65) -> D50-WB'd target sensor linear RGB via DCP ColorMatrix + Bradford."""
    return dcp.load_dcp(dcp_path).srgb2cam_cm(cct)


def _cm_at(tags: dict, cct: float) -> np.ndarray:
    cm1, cm2 = _mat(tags.get("ColorMatrix1")), _mat(tags.get("ColorMatrix2"))
    if cm2 is None:
        return cm1
    t1 = _ILLUM_CCT.get(int(_num(tags.get("CalibrationIlluminant1"))), 6504.0)
    t2 = _ILLUM_CCT.get(int(_num(tags.get("CalibrationIlluminant2"))), 2856.0)
    w = np.clip((1 / cct - 1 / t2) / (1 / t1 - 1 / t2), 0, 1) if t1 != t2 else 1.0
    return w * cm1 + (1 - w) * cm2


def _resolve_source_dcp(tags: dict, source_dcp: str | None) -> str | None:
    if source_dcp is None or str(source_dcp).lower() in ("", "none"):
        return None
    if str(source_dcp).lower() == "auto":
        return dcp.find_source_dcp(tags)
    return source_dcp


def load_dng(path: str, half: bool = False,
             source_dcp: str | None = "auto") -> tuple[np.ndarray, np.ndarray, RawInfo]:
    """Return (linear camera RGB white-balanced to the M9 locked D50 point, 1.0 = clip;
    that camera space -> linear sRGB; info with the *scene* CCT from AsShotNeutral).

    When `source_dcp` resolves to an Adobe DCP, ignores the DNG's embedded ColorMatrix and uses
    the DCP profile instead.
    """
    info = RawInfo()
    tags, code_tags = dcp.read_dng_tags(path)
    if "AsShotNeutral" in tags:
        neutral = _rationals(tags["AsShotNeutral"])
    else:
        with rawpy.imread(path) as raw:
            wb = np.array(raw.camera_whitebalance[:3], np.float64)
        neutral = wb[1] / np.maximum(wb, 1e-6)
    info.as_shot_neutral = neutral

    info.exposure_time = _num(tags.get("ExposureTime"))
    info.fnumber = _num(tags.get("FNumber"))
    info.iso = _num(tags.get("ISOSpeedRatings") or tags.get("PhotographicSensitivity"))
    info.baseline_exposure = _num(tags.get("BaselineExposure"))
    info.make = str(tags.get("Make", "")).strip()
    info.model = str(tags.get("Model", "")).strip()

    src_dcp_path = _resolve_source_dcp(tags, source_dcp)
    src_prof = (dcp.load_dcp(src_dcp_path) if src_dcp_path
                else dcp.DCPProfile.from_tags(code_tags, name=info.model))
    info.cct = src_prof.cct_from_neutral(neutral)
    info.extra["source_dcp"] = src_dcp_path
    info.extra["source_profile"] = src_prof

    n50 = src_prof.n50()
    mul = 1.0 / n50
    with rawpy.imread(path) as raw:
        rgb = raw.postprocess(
            gamma=(1, 1), no_auto_bright=True, output_bps=16, user_wb=[mul[0], mul[1], mul[2], mul[1]],
            output_color=rawpy.ColorSpace.raw, demosaic_algorithm=rawpy.DemosaicAlgorithm.AHD,
            half_size=half, highlight_mode=rawpy.HighlightMode.Clip)
    rgb = rgb.astype(np.float32) / 65535.0
    cam2srgb = np.linalg.inv(src_prof.srgb2cam_cm(LEGEND_CCT))

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


# camera -> (IPE table tag in Legend mode, IPE tag of the normal photo mode on the same camera).
# main: ovx10500u wide_i (Legend sensor modes 37/42, tables identical in modes 1/2/4/11);
# tele: s5khpe Legend nodes at sensor mode 4.
CAMERAS = {"main": ("m9", "normal"), "tele": ("tele", "tele_normal")}


def tmc_lut(gain: float, lux: float, n: int = 4096, tag: str = "m9") -> np.ndarray:
    """TMC202 GTM curve (m9.tmc, original knee/Hermite code) sampled on [0,1]."""
    from . import tmc
    leaf = tuning.lookup(tag, "tmc202_sw_v2", drc=max(gain, 1.0), gain=1.0, lux=lux)
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


def cc_m9(cam2srgb: np.ndarray, lux: float, cct: float, drc: float, camera: str = "main",
          target_dcp: str | None = None, native_sensor: bool = False) -> np.ndarray:
    """Source camera -> M9 output matrix.

    When `native_sensor` is True (input already converted to target 17U camera space via full DCP),
    applies the native 17U CC_m9 directly. With `target_dcp` only, maps through DCP ColorMatrix.
    Otherwise falls back to the relative transform CC_m9 * CC_normal^-1 on top of cam2srgb.
    """
    cond = dict(drc=max(drc, 1.0), lux=lux, cct=cct, flag=0.0)
    tag, ref = CAMERAS[camera]
    m9_mat = tuning.cc_matrix(tag, **cond)
    if native_sensor:
        return m9_mat.astype(np.float32)
    if target_dcp:
        return (m9_mat @ dcp_srgb2cam(target_dcp) @ cam2srgb).astype(np.float32)
    rel = m9_mat @ np.linalg.inv(tuning.cc_matrix(ref, **cond))
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


def cv_yuv(rgb: np.ndarray, p: np.ndarray):
    """cv122 RGB -> YCbCr: Y = ry R + gy G + by B ; Cb = a[(B-G) + b(R-G)], Cr = c[(R-G) + d(B-G)]
    (p/m pairs by sign of the result). Returns (Y, Cb, Cr), Cb/Cr centred on 0."""
    r, g, b = rgb[..., 0], rgb[..., 1], rgb[..., 2]
    y = p[0] * r + p[1] * g + p[2] * b
    cb_ = (b - g) + np.where((b - g) >= 0, p[6], p[7]) * (r - g)
    cr_ = (r - g) + np.where((r - g) >= 0, p[10], p[11]) * (b - g)
    cb = np.where(cb_ >= 0, p[4], p[5]) * cb_
    cr = np.where(cr_ >= 0, p[8], p[9]) * cr_
    return y, cb, cr


def cv_apply(rgb: np.ndarray, p: np.ndarray) -> np.ndarray:
    """cv122, re-expanded with the BT.601 full-range inverse, i.e. the RGB a downstream NV12
    consumer sees."""
    y, cb, cr = cv_yuv(rgb, p)
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
    lin: np.ndarray | None = None        # linear WB'd camera RGB (input of the B2Y nodes)
    cam2srgb: np.ndarray | None = None
    camera: str = "main"
    target_dcp: str | None = None
    source_dcp: str | None = None
    native_sensor: bool = False


def _resolve_dcp(camera: str, target_dcp: str | None) -> str | None:
    if target_dcp is None or str(target_dcp).lower() in ("", "none"):
        return None
    if str(target_dcp).lower() == "auto":
        return default_dcp(camera)
    return target_dcp


def _ipe_prep_torch(dev, drc: float, gtm: np.ndarray | None, ccm: np.ndarray,
                    hue_tab: np.ndarray, sat_tab: np.ndarray,
                    glut: np.ndarray, cvp: np.ndarray):
    import torch
    ccm_t = torch.from_numpy(np.ascontiguousarray(ccm, np.float32)).to(dev)
    gtm_t = torch.from_numpy(np.ascontiguousarray(gtm, np.float32)).to(dev) if gtm is not None else None
    glut_t = torch.from_numpy(np.ascontiguousarray(glut, np.float32)).to(dev)
    ht_t = torch.from_numpy(np.ascontiguousarray(hue_tab, np.float32)).to(dev).reshape(-1)
    st_t = torch.from_numpy(np.ascontiguousarray(sat_tab, np.float32)).to(dev).reshape(-1)
    p_t = torch.from_numpy(np.ascontiguousarray(cvp, np.float32)).to(dev)
    return (float(drc), ccm_t, gtm_t, glut_t, ht_t, st_t, p_t,
            gtm_t.numel() - 1 if gtm_t is not None else 0, glut_t.numel() - 1)


def _ipe_chunk_torch(torch, x_chunk, gain: float, state, output_yuv: bool = False):
    drc, ccm_t, gtm_t, glut_t, ht_t, st_t, p_t, gn, ln = state

    def _interp1(val, tbl, nmax):
        idx = val * nmax
        i0 = torch.clamp(torch.floor(idx).to(torch.int64), 0, nmax - 1)
        f = idx - i0
        return tbl[i0] + f * (tbl[i0 + 1] - tbl[i0])

    x = x_chunk * gain
    y = 0.299 * x[..., 0] + 0.587 * x[..., 1] + 0.114 * x[..., 2]
    yc = torch.clamp(y, 0.0, 1.0)
    if gtm_t is not None:
        c = _interp1(yc, gtm_t, gn)
    else:
        c = yc if drc <= 1.0 + 1e-6 else drc * yc / (1.0 + (drc - 1.0) * yc)
    x = x * (c / torch.clamp(y, min=1e-6)).unsqueeze(-1)
    x = torch.clamp(x @ ccm_t, min=0.0)
    r, g, b = x[..., 0], x[..., 1], x[..., 2]
    v = torch.maximum(torch.maximum(r, g), b)
    mn = torch.minimum(torch.minimum(r, g), b)
    d = v - mn
    ds = torch.where(d > 1e-6, d, 1.0)
    h = torch.where(v == r, 60.0 * ((g - b) / ds),
                    torch.where(v == g, 120.0 + 60.0 * ((b - r) / ds),
                                240.0 + 60.0 * ((r - g) / ds)))
    h = torch.where(d > 1e-6, torch.remainder(h, 360.0), 0.0)
    s = torch.where(v > 1e-6, d / torch.where(v > 1e-6, v, 1.0), 0.0)
    hi = h / 15.0
    si = s * 15.0
    h0 = torch.remainder(torch.floor(hi).to(torch.int64), 24)
    h1 = torch.remainder(h0 + 1, 24)
    fh = hi - torch.floor(hi)
    s0 = torch.clamp(torch.floor(si).to(torch.int64), 0, 15)
    s1 = torch.clamp(s0 + 1, 0, 15)
    fs = torch.clamp(si - s0, 0.0, 1.0)
    w00, w01 = (1.0 - fh) * (1.0 - fs), (1.0 - fh) * fs
    w10, w11 = fh * (1.0 - fs), fh * fs
    i00, i01, i10, i11 = h0 * 16 + s0, h0 * 16 + s1, h1 * 16 + s0, h1 * 16 + s1
    dh = w00 * ht_t[i00] + w01 * ht_t[i01] + w10 * ht_t[i10] + w11 * ht_t[i11]
    dsat = w00 * st_t[i00] + w01 * st_t[i01] + w10 * st_t[i10] + w11 * st_t[i11]
    h2 = torch.remainder(h + dh, 360.0) / 60.0
    s2 = torch.clamp(s * (1.0 + dsat), 0.0, 1.0)
    i = torch.floor(h2).to(torch.int64) % 6
    f = h2 - torch.floor(h2)
    pv, qv, tv = v * (1.0 - s2), v * (1.0 - s2 * f), v * (1.0 - s2 * (1.0 - f))
    ro = torch.where(i == 0, v, torch.where(i == 1, qv, torch.where(i == 2, pv, torch.where(i == 3, pv, torch.where(i == 4, tv, v)))))
    go = torch.where(i == 0, tv, torch.where(i == 1, v, torch.where(i == 2, v, torch.where(i == 3, qv, pv))))
    bo = torch.where(i == 0, pv, torch.where(i == 1, pv, torch.where(i == 2, tv, torch.where(i == 3, v, torch.where(i == 4, v, qv)))))
    r_g = _interp1(torch.clamp(ro, 0.0, 1.0), glut_t, ln)
    g_g = _interp1(torch.clamp(go, 0.0, 1.0), glut_t, ln)
    b_g = _interp1(torch.clamp(bo, 0.0, 1.0), glut_t, ln)
    yv = p_t[0] * r_g + p_t[1] * g_g + p_t[2] * b_g
    bg = b_g - g_g
    rg = r_g - g_g
    cb_ = bg + torch.where(bg >= 0, p_t[6], p_t[7]) * rg
    cr_ = rg + torch.where(rg >= 0, p_t[10], p_t[11]) * bg
    cb = torch.where(cb_ >= 0, p_t[4], p_t[5]) * cb_
    cr = torch.where(cr_ >= 0, p_t[8], p_t[9]) * cr_
    if output_yuv:
        return torch.stack([yv, cb, cr], -1)
    R = yv + 1.402 * cr
    G = yv - 0.344136 * cb - 0.714136 * cr
    B = yv + 1.772 * cb
    return torch.clamp(torch.stack([R, G, B], -1), 0.0, 1.0)


def _ipe_torch(lin: np.ndarray, gain: float, drc: float, gtm: np.ndarray | None,
               ccm: np.ndarray, hue_tab: np.ndarray, sat_tab: np.ndarray,
               glut: np.ndarray, cvp: np.ndarray, output_yuv: bool = False) -> np.ndarray | None:
    try:
        import torch
        if not torch.cuda.is_available():
            return None
    except ImportError:
        return None
    H, W = lin.shape[:2]
    out = np.empty(lin.shape, np.float32)
    step = max(1, (1 << 22) // max(1, W))
    with torch.no_grad():
        state = _ipe_prep_torch("cuda", drc, gtm, ccm, hue_tab, sat_tab, glut, cvp)
        for y0 in range(0, H, step):
            y1 = min(y0 + step, H)
            x = torch.from_numpy(np.ascontiguousarray(lin[y0:y1], np.float32)).to("cuda")
            out[y0:y1] = _ipe_chunk_torch(torch, x, gain, state, output_yuv=output_yuv).cpu().numpy()
    return out


def ipe_run(lin: np.ndarray, gain: float, drc: float, gtm: np.ndarray | None,
            ccm: np.ndarray, hue_tab: np.ndarray, sat_tab: np.ndarray,
            glut: np.ndarray, cvp: np.ndarray, output_yuv: bool = False) -> np.ndarray:
    """Run the 5 pointwise B2Y IPE stages (LTM -> CC -> 2D LUT -> Gamma -> CV) on GPU if available."""
    gpu_out = _ipe_torch(lin, float(gain), float(drc), gtm, ccm, hue_tab, sat_tab,
                         glut, cvp, output_yuv=output_yuv)
    if gpu_out is not None:
        return gpu_out

    def strip(x):
        x = ltm_global(x * gain, drc, gtm)
        x = np.clip(x @ ccm, 0, None)
        x = tdl_apply(x, hue_tab, sat_tab)
        x = gamma_apply(x, glut)
        if output_yuv:
            return np.stack(cv_yuv(x, cvp), -1).astype(np.float32)
        return np.clip(cv_apply(x, cvp), 0, 1)

    from concurrent.futures import ThreadPoolExecutor
    n = os.cpu_count() or 4
    bounds = np.linspace(0, lin.shape[0], 2 * n + 1).astype(int)
    out = np.empty(lin.shape, np.float32)

    def run(i):
        out[bounds[i]:bounds[i + 1]] = strip(lin[bounds[i]:bounds[i + 1]])
    with ThreadPoolExecutor(n) as ex:
        list(ex.map(run, range(2 * n)))
    return out


def b2y(path: str, lux_index: float | None = None, cct: float | None = None, ev: float = 0.0,
        half: bool = False, camera: str = "main", zoom: float | None = None,
        target_dcp: str | None = "auto", source_dcp: str | None = "auto") -> FrontEndResult:
    tag = CAMERAS[camera][0]
    resolved_dcp = _resolve_dcp(camera, target_dcp)
    lin, cam2srgb, info = load_dng(path, half=half, source_dcp=source_dcp)
    li = float(lux_index) if lux_index is not None else (lux_index_from_ev(info.ev100) if info.ev100 else 300.0)
    k = float(cct) if cct is not None else info.cct

    src_dcp_path = info.extra.get("source_dcp")
    native_sensor = False
    if resolved_dcp:
        src_prof = info.extra["source_profile"]
        dst_prof = dcp.load_dcp(resolved_dcp)
        if src_dcp_path != resolved_dcp:
            lin = dcp.convert_camera(lin, src_prof, dst_prof, k,
                                     src_path=src_dcp_path, dst_path=resolved_dcp)
        native_sensor = True

    ae = meter(lin, li, camera, zoom=zoom)
    gain = np.float32(ae.exp_short * 2.0 ** ev)
    cond = dict(drc=ae.adrc_gain, lux=li, cct=k)
    ccm = cc_m9(cam2srgb, li, k, ae.adrc_gain, camera,
                target_dcp=resolved_dcp, native_sensor=native_sensor).T
    hue_tab, sat_tab = tuning.tdl_tables(tag, flag=0.0, **cond)
    glut = tuning.gamma_lut(tag, **cond)
    cvp = tuning.cv_params(tag, flag=0.0, **cond)
    gtm = tmc_lut(ae.adrc_gain, li, tag=tag)
    out = ipe_run(lin, gain, ae.adrc_gain, gtm, ccm, hue_tab, sat_tab, glut, cvp, output_yuv=False)
    return FrontEndResult(out, ae, info, li, k, lin, cam2srgb, camera,
                          resolved_dcp, src_dcp_path, native_sensor)
