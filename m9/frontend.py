"""RAW front end: DNG -> scene-linear camera-neutral RGB -> display-referred
sRGB-ish image comparable to what the 17U IPE (offcamb2y) hands to StyleTrans.

The IPE tuning (chromatix) is not reproduced yet; this stage uses DNG colour
metadata plus a parametric tone curve, kept deliberately simple so it can be
swapped for the chromatix-derived gamma/LTM later.
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


def tone(rgb_lin: np.ndarray, exposure: float = 1.0, contrast: float = 1.0) -> np.ndarray:
    """Placeholder display rendering: exposure, highlight roll-off, sRGB OETF.

    Will be replaced by the 17U chromatix gamma + LTM once parsed.
    """
    x = np.maximum(rgb_lin * exposure, 0.0)
    # Reinhard-style shoulder on max channel, hue preserving
    m = np.max(x, -1, keepdims=True)
    k = 0.25
    shoulder = np.where(m > 1 - k, (1 - k) + k * np.tanh((m - (1 - k)) / k), m)
    x = x * (shoulder / np.maximum(m, 1e-6))
    srgb = np.where(x <= 0.0031308, 12.92 * x, 1.055 * np.power(np.maximum(x, 1e-12), 1 / 2.4) - 0.055)
    if contrast != 1.0:
        srgb = 0.5 + (srgb - 0.5) * contrast
    return np.clip(srgb, 0.0, 1.0).astype(np.float32)


def auto_exposure(rgb_lin: np.ndarray, target: float = 0.18, pct: float = 50.0) -> float:
    y = rgb_lin @ np.array([0.2126, 0.7152, 0.0722], np.float32)
    med = float(np.percentile(y[::4, ::4], pct))
    return float(np.clip(target / max(med, 1e-5), 0.25, 16.0))
