"""RAW front end: DNG -> scene-linear camera-neutral RGB -> display-referred
sRGB-ish image comparable to what the 17U IPE (offcamb2y) hands to StyleTrans.

Colour/tone follow the intent decoded from the M9 chromatix (weak colour
matrix, saturation shoulder, no local tone mapping, flatter bright scenes),
implemented as our own global operators rather than transplanted tables.
"""
from __future__ import annotations

from dataclasses import dataclass, field

import numpy as np
import rawpy

XYZ_TO_SRGB = np.array([[3.2404542, -1.5371385, -0.4985314],
                        [-0.9692660, 1.8760108, 0.0415560],
                        [0.0556434, -0.2040259, 1.0572252]], np.float32)


@dataclass
class RawInfo:
    exposure_time: float = 0.0
    iso: float = 0.0
    fnumber: float = 0.0
    as_shot_neutral: np.ndarray | None = None
    cct: float = 5000.0
    ev100: float = 0.0
    make: str = ""
    model: str = ""
    extra: dict = field(default_factory=dict)


def _xy_to_cct(x: float, y: float) -> float:
    # McCamy
    n = (x - 0.3320) / (0.1858 - y)
    return float(449 * n ** 3 + 3525 * n ** 2 + 6823.3 * n + 5520.33)


def _num(v) -> float:
    """tifffile rational (num, den) / scalar / sequence -> float."""
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
    return a[0::2] / a[1::2]


def dng_tags(path: str) -> dict:
    """IFD0 + EXIF tags of a DNG as {name: value}."""
    import tifffile
    out = {}
    with tifffile.TiffFile(path) as tf:
        p = tf.pages[0]
        for t in p.tags.values():
            out[t.name] = t.value
        exif = out.get("ExifTag")
        if isinstance(exif, dict):
            out.update(exif)
    return out


def load_dng(path: str, half: bool = False) -> tuple[np.ndarray, RawInfo]:
    """Return linear sRGB-primaries image (white balanced, 1.0 = sensor white) + info."""
    info = RawInfo()
    with rawpy.imread(path) as raw:
        rgb = raw.postprocess(
            gamma=(1, 1), no_auto_bright=True, output_bps=16, use_camera_wb=True,
            output_color=rawpy.ColorSpace.sRGB, demosaic_algorithm=rawpy.DemosaicAlgorithm.AHD,
            half_size=half, highlight_mode=rawpy.HighlightMode.Clip)
        rgb = rgb.astype(np.float32) / 65535.0
        wb = np.array(raw.camera_whitebalance[:3], np.float64)
        neutral = wb[1] / np.maximum(wb, 1e-6)
    tags = dng_tags(path)
    if "AsShotNeutral" in tags:
        neutral = _rationals(tags["AsShotNeutral"]) if np.asarray(tags["AsShotNeutral"]).size == 6 \
            else np.asarray(tags["AsShotNeutral"], np.float64)
    info.as_shot_neutral = neutral
    # CCT from the neutral through the D65-ish ColorMatrix (XYZ -> camera)
    for key in ("ColorMatrix2", "ColorMatrix1"):
        if key in tags:
            cm = np.asarray(tags[key], np.float64)
            cm = (cm.reshape(-1, 2)[:, 0] / cm.reshape(-1, 2)[:, 1]) if cm.size == 18 else cm
            try:
                xyz = np.linalg.solve(cm.reshape(3, 3), neutral)
                s = xyz.sum()
                info.cct = _xy_to_cct(xyz[0] / s, xyz[1] / s)
            except np.linalg.LinAlgError:
                pass
            break
    info.exposure_time = _num(tags.get("ExposureTime"))
    info.fnumber = _num(tags.get("FNumber"))
    info.iso = _num(tags.get("ISOSpeedRatings") or tags.get("PhotographicSensitivity"))
    info.make = str(tags.get("Make", "")).strip()
    info.model = str(tags.get("Model", "")).strip()
    if info.exposure_time > 0 and info.fnumber > 0 and info.iso > 0:
        info.ev100 = float(np.log2(info.fnumber ** 2 / info.exposure_time) - np.log2(info.iso / 100.0))
    return rgb, info


def lux_index_from_ev(ev100: float) -> float:
    """Approximate Qualcomm AEC lux index from scene EV100.

    lux index grows ~ 1/log10(1.03) ≈ 77.9 per decade of exposure, i.e. ≈ 23.45/EV.
    Anchored so that EV100 ≈ 7.5 (bright indoor) -> ≈ 300 and EV100 ≈ 13 (daylight)
    -> ≈ 170, matching the bin layout of the LeicaFilter/StyleTrans tables
    (daytime threshold 260). Uncalibrated: override from the CLI when known.
    """
    return float(np.clip(476.0 - 23.45 * ev100, 0, 999))


# --- M9 B2Y-intent rendering (own design, guided by the decoded chromatix; see
# M9-style-analysis.md). Nothing here is copied live from tuning tables: the curve
# knots are a smooth read of the M9 gamma152 shape, the colour numbers are ratios
# between the M9 and normal-photo CC/CV/TDL instances.

# Global tone curve (display-referred, input = linear after exposure). Linear toe,
# no sRGB shadow lift, slightly fuller mids than sRGB - the shape of M9 gamma152.
_TONE_X = np.array([0, .05, .10, .15, .20, .25, .30, .40, .50, .60, .70, .80, .90, 1.0], np.float32)
_TONE_Y = np.array([0, .15, .29, .39, .47, .54, .60, .70, .79, .86, .91, .95, .98, 1.0], np.float32)
# Bright scenes (lux index < ~207, low DRC): M9 lifts shadows ~+30/1023 and
# lowers mids/highs ~-22/1023 -> lower contrast. Applied as a bump on the curve.
_BRIGHT_DY = np.array([0, .02, .03, .03, .02, .0, -.01, -.02, -.022, -.022, -.02, -.015, -.008, 0], np.float32)

# Colour: M9 CC matrix is much weaker than normal (mean |off-diag| ratio ~0.58,
# diagonal 1.07-1.51 vs 1.61-1.86) and CV chroma gain is 0.49/0.53 = 0.925.
BASE_SATURATION = 0.85 * 0.925
# TDL: saturation reduced progressively with saturation, ~-1% (low) to ~-10% (high).
SAT_SHOULDER = (0.01, 0.09)


def _oklab(rgb):
    m1 = np.array([[0.4122214708, 0.5363325363, 0.0514459929],
                   [0.2119034982, 0.6806995451, 0.1073969566],
                   [0.0883024619, 0.2817188376, 0.6299787005]], np.float32)
    m2 = np.array([[0.2104542553, 0.7936177850, -0.0040720468],
                   [1.9779984951, -2.4285922050, 0.4505937099],
                   [0.0259040371, 0.7827717662, -0.8086757660]], np.float32)
    return np.cbrt(rgb @ m1.T) @ m2.T


def _oklab_inv(lab):
    m2i = np.array([[1.0, 0.3963377774, 0.2158037573],
                    [1.0, -0.1055613458, -0.0638541728],
                    [1.0, -0.0894841775, -1.2914855480]], np.float32)
    m1i = np.array([[4.0767416621, -3.3077115913, 0.2309699292],
                    [-1.2684380046, 2.6097574011, -0.3413193965],
                    [-0.0041960863, -0.7034186147, 1.7076147010]], np.float32)
    return (lab @ m2i.T) ** 3 @ m1i.T


def m9_colour(rgb_lin: np.ndarray) -> np.ndarray:
    """Low base saturation + saturation shoulder (no hue-selective boosts)."""
    lab = _oklab(np.maximum(rgb_lin, 0.0))
    ab = lab[..., 1:] * BASE_SATURATION
    c = np.linalg.norm(ab, axis=-1, keepdims=True)
    lo, hi = SAT_SHOULDER
    ab *= 1.0 - lo - hi * np.clip(c / 0.25, 0.0, 1.0)
    lab = np.concatenate([lab[..., :1], ab], -1)
    return np.maximum(_oklab_inv(lab), 0.0).astype(np.float32)


def tone(rgb_lin: np.ndarray, exposure: float = 1.0, lux_index: float = 300.0) -> np.ndarray:
    """Global-only tone mapping (M9: LTM/LCE strength 0, TMC 100% to the global curve).

    Highlights above 1.0 are compressed hue-preservingly before the curve; no
    local/spatially varying operators are used anywhere.
    """
    x = np.maximum(rgb_lin * exposure, 0.0)
    m = np.max(x, -1, keepdims=True)
    k = 0.25
    shoulder = np.where(m > 1 - k, (1 - k) + k * np.tanh((m - (1 - k)) / k), m)
    x = x * (shoulder / np.maximum(m, 1e-6))
    y = _TONE_Y + (_BRIGHT_DY if lux_index < 207 else 0.0)
    return np.clip(np.interp(x, _TONE_X, y), 0.0, 1.0).astype(np.float32)


def auto_exposure(rgb_lin: np.ndarray, target: float = 0.18, pct: float = 50.0) -> float:
    y = rgb_lin @ np.array([0.2126, 0.7152, 0.0722], np.float32)
    med = float(np.percentile(y[::4, ::4], pct))
    return float(np.clip(target / max(med, 1e-5), 0.25, 16.0))
