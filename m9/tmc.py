"""TMC202 global tone curve (the ADRC realisation of the M9 path), reimplemented from
libhwliqinterface2.so (tmc202interpolation_v2.cpp) and verified against the original code
run under qemu (emu/tmc, tools/verify_tmc.py).

  CalculateAnchorKneePoints (0xd9c940) -> anchor gains, knee points (FUN 0xd9fd50)
  knee points -> monotone cubic Hermite coefficients (FUN 0xd9fa30)
GTM curve: x in [0, X1]: y = (Y1/X1) x ; x in [Xk, Xk+1] (k=1..5): Hermite.
M9 (Legend) tmc202: gtm_percentage = 1, hist mode 0 (no ihist curve), chromatix
header +0x58 = 0, +0x5c = 1, +0x60 = 0, +0x68 = 256.

Applied by the OFE GTM (gtm133) as a Y-ratio gain curve(Y)/Y on RGB.
"""
from __future__ import annotations

import numpy as np

CHROMATIX_GAIN_CAP = 256.0      # tmc202 node +0x68
CLAMP_HI = (0.9995, 0.9996, 0.9997, 0.9998, 0.9999)


def _clamp_seq(vals):
    out, prev = [], 0.0
    for v, hi in zip(vals, CLAMP_HI):
        lo = prev + 0.0001 if out else 0.0001
        v = min(v, hi) if v > lo else lo
        out.append(v)
        prev = v
    return out


def anchor_knees(leaf: np.ndarray, drc_gain: float, drc_dark: float = 1.0):
    """Return (X knots[7], Y knots[7]) of the GTM curve (CalculateAnchorKneePoints, M9 path)."""
    p = np.asarray(leaf, np.float64).copy()
    p[4] = 0.0                                   # node +0x58 == 0
    p[12:16] = 0.0                               # node +0x5c == 1 -> memset(p+48, 0, 16)
    g = 1.0 + (drc_gain - 1.0) * p[0x10] + p[0x11]
    g = min(max(g, 1e-6), 1023.0) if g > 1e-6 else 1e-6
    gd = 1.0 + (drc_dark - 1.0) * p[0x13] + p[0x14]
    gd = min(gd, 1023.0) if gd > 1e-6 else 1e-6
    lim = min(g * gd, CHROMATIX_GAIN_CAP)
    r, q = g - 1.0, (p[0x2a] - p[0x26]) * 0.25
    g3, g4, g5 = 1 + r * p[0x27], 1 + r * p[0x28], 1 + r * p[0x29]
    # anchor X (inputs of the curve), clamped increasing
    x1 = p[0x25] / lim
    x1 = min(x1, 0.9995) if x1 > p[0x24] + 0.0001 else p[0x24] + 0.0001
    x2 = p[0x26] / g
    x2 = min(x2, 0.9996) if x2 > x1 + 0.0001 else x1 + 0.0001
    x3 = (p[0x26] + q) / g3
    x3 = min(x3, 0.9997) if x3 > x2 + 0.0001 else x2 + 0.0001
    x4 = (p[0x26] + 2 * q) / g4
    x4 = min(x4, 0.9998) if x4 > x3 + 0.0001 else x3 + 0.0001
    x5 = (p[0x26] + 3 * q) / g5
    x5 = min(x5, 0.9999) if x5 > x4 + 0.0001 else x4 + 0.0001
    # FUN_00e9fd50(percentage = p[0]): X re-clamped, Y = X * gain^percentage
    X = [0.0] + _clamp_seq([x1, x2, x3, x4, x5]) + [1.0]
    pc = p[0]
    gains = [lim, g, g3, g4, g5]
    Y = [0.0] + _clamp_seq([X[i + 1] * gains[i] ** pc for i in range(5)]) + [1.0]
    return np.array(X), np.array(Y)


def hermite_coeffs(X, Y):
    """FUN_00e9fa30: slopes d1..d5 (weighted harmonic), end slope d6 (3-point), cubic coeffs."""
    h = np.diff(X)
    dl = np.diff(Y) / h
    d = np.zeros(7)
    for k in range(1, 6):
        w1, w2 = 2 * h[k] + h[k - 1], h[k] + 2 * h[k - 1]
        d[k] = (w1 + w2) / (w1 / dl[k - 1] + w2 / dl[k])
    e = ((h[4] + 2 * h[5]) * dl[5] - h[5] * dl[4]) / (h[4] + h[5])
    if dl[4] * dl[5] >= 0 or abs(e) <= abs(3 * dl[5]):
        e = e if dl[5] * e >= 0 else 0.0
    else:
        e = 3 * dl[5]
    d[6] = e
    c2 = np.zeros(7)
    c3 = np.zeros(7)
    for k in range(1, 6):
        c2[k] = (3 * dl[k] - 2 * d[k] - d[k + 1]) / h[k]
        c3[k] = (d[k] - 2 * dl[k] + d[k + 1]) / h[k] / h[k]
    return d, c2, c3


def gtm_curve(x: np.ndarray, X, Y) -> np.ndarray:
    d, c2, c3 = hermite_coeffs(X, Y)
    x = np.clip(np.asarray(x, np.float64), 0.0, 1.0)
    y = x * (Y[1] / X[1])
    for k in range(1, 6):
        m = (x >= X[k]) & (x <= X[k + 1])
        t = x[m] - X[k]
        y[m] = Y[k] + d[k] * t + c2[k] * t * t + c3[k] * t * t * t
    return y
