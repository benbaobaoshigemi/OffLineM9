"""Leica Moment M9 auto exposure, re-metered offline with the 17U Xiaomi AEC tuning.

The 17U AEC (libmiaec.so, tuning in odm/etc/camera/mi_tuning) computes, for Legend:
  * a mid target   = Metering.base_target(lux, dr_b2d) * Stylization.base_target_scale(lux)
    on the 16x16 centre-weighted luma of the linear 8-bit stats, bright blocks de-weighted
    (LumaCalculation.bright_start/end/weight by lux);
  * a short target = exposure at which the bright-tone average (histogram percentile
    [bright_start_pct, 1]) reaches hist_bright_tone_ref_target(dr, lux)  -> highlight safety;
  * mid_tone_gain (ADRC) = mid / short, capped by DrcConfig.max_drc_gain(lux).
The sensor is exposed for `short`; TMC turns ADRC into the tone curve (M9: 100 % global).

Offline choice (necessary): the RAW comes from another camera whose AE already ran, so the
image is re-metered here on its own linear data instead of on 17U sensor stats.
Not reproduced yet (see FINDINGS.md): hist adaptive / mid-tone / night / dark-prevent /
flat-scene / colour-scene / face sub-adjusters of hist_target_by_lux, ASD and white-black.
"""
from __future__ import annotations

import json
import os
from dataclasses import dataclass
from functools import lru_cache

import numpy as np

_ASSET = os.path.join(os.path.dirname(__file__), "assets", "ae_m9.json")


@lru_cache(maxsize=1)
def _t() -> dict:
    return json.load(open(_ASSET))


def _i1(x, xs, ys):
    return float(np.interp(x, xs, ys))


def _i2(x, y, xs, ys, z):
    """z[len(ys)][len(xs)] bilinear, clamped (rows = second node list)."""
    z = np.asarray(z, np.float64)
    col = np.array([np.interp(x, xs, r) for r in z])
    return float(np.interp(y, ys[:len(col)], col))


@dataclass
class AEResult:
    lux_index: float
    luma_unit: float          # centre-weighted 8-bit luma at exposure 1
    dr_b2d: float
    base_target: float
    style_scale: float
    mid_target: float
    exp_mid: float            # exposure that puts the weighted luma on mid_target
    bright_avg_unit: float
    bright_ref: float
    exp_short: float          # highlight-safe exposure (what the sensor would get)
    adrc_gain: float          # mid_tone_gain, applied by the global tone curve


def _stats(lin_wb: np.ndarray):
    """16x16 block luma (8-bit linear scale, exposure 1) + pixel luma sample for histograms."""
    y = lin_wb @ np.array([0.299, 0.587, 0.114], np.float32)
    h, w = y.shape
    bh, bw = h // 16, w // 16
    blocks = y[:bh * 16, :bw * 16].reshape(16, bh, 16, bw).mean(axis=(1, 3)) * 255.0
    step = max(1, int(np.sqrt(h * w / 400_000)))
    pix = np.sort(y[::step, ::step].ravel()) * 255.0
    return blocks, pix


def _pct_avg(pix_sorted, lo, hi):
    n = len(pix_sorted)
    a, b = int(lo * n), max(int(hi * n), int(lo * n) + 1)
    return float(pix_sorted[a:b].mean())


def _weighted_luma(blocks, exposure, lux):
    t = _t()["luma"]
    w = np.asarray(t["weight_luma_calculation.center_wghted_mtr_tbl"], np.float64).reshape(16, 16).copy()
    ln = t["weight_luma_calculation.lux_node"]
    bs = _i1(lux, ln, t["weight_luma_calculation.bright_start"])
    be = _i1(lux, ln, t["weight_luma_calculation.bright_end"])
    bw = _i1(lux, ln, t["weight_luma_calculation.bright_weight"])
    b = blocks * exposure
    ramp = np.clip((b - bs) / max(be - bs, 1e-6), 0, 1)
    w *= 1.0 + (bw - 1.0) * ramp
    return float((w * b).sum() / w.sum())


def meter(lin_wb: np.ndarray, lux_index: float) -> AEResult:
    """lin_wb: linear, white-balanced camera RGB, 1.0 = sensor saturation."""
    t = _t()
    m = t["metering"]
    blocks, pix = _stats(lin_wb)
    lux = float(lux_index)

    # dynamic range bright/dark (percentile averages of the short/long hist bands)
    hl = m["hist_target_by_lux.hist_short_long_adjustment.hist_lux_node"]
    bt_st = _i1(lux, hl, m["hist_target_by_lux.hist_short_long_adjustment.hist_base_bright_start_pct"])
    dt_en = _i1(lux, hl, m["hist_target_by_lux.hist_short_long_adjustment.hist_dark_tone_end_pct"])
    bright_avg = _pct_avg(pix, bt_st, 1.0)
    dark_avg = _pct_avg(pix, 0.0, dt_en)
    dr = bright_avg / max(dark_avg, 1e-3)

    # mid target
    bl = m["base_target_by_lux.base_target_lux_node"]
    base = _i2(lux, dr, bl, m["base_target_by_lux.base_target_dr_node"], m["base_target_by_lux.base_target"])
    s = t["stylization"]
    style = _i1(lux, s["style_base.style_base_target_lux_node"], s["style_base.style_base_target_scale"][0]) \
        if s.get("enable_stylization.value", s.get("enable_stylization", False)) else 1.0
    mid = base * style

    # converge: weighted luma(E) == mid   (weights depend on E through the bright ramp)
    e = mid / max(_weighted_luma(blocks, 1.0, lux), 1e-6)
    for _ in range(20):
        e_new = e * mid / max(_weighted_luma(blocks, e, lux), 1e-6)
        if abs(e_new / e - 1) < 1e-4:
            e = e_new
            break
        e = e_new

    # short (highlight-safe) target from the bright-tone reference
    ref = _i2(lux, dr, hl, m["hist_target_by_lux.hist_short_long_adjustment.hist_dr_node"],
              m["hist_target_by_lux.hist_short_long_adjustment.hist_bright_tone_ref_target"])
    e_short = ref / max(bright_avg, 1e-6)

    d = t["drc"]
    cap = _i1(lux, d["normal_drc_ctrl.nor_drc_lux_node"], d["normal_drc_ctrl.max_drc_gain"][0])
    adrc = float(np.clip(e / max(e_short, 1e-9), 1.0, cap))
    e_short = e / adrc
    return AEResult(lux, _weighted_luma(blocks, 1.0, lux), dr, base, style, mid, e,
                    bright_avg, ref, e_short, adrc)
