"""17U chromatix tables (exported by tools/export_ipe.py) and camx-style trigger interpolation.

Every module is a trigger tree. Each level selects a region [start, end] of one control
variable; between two regions the result is blended linearly, outside all regions the
nearest region is used (camx IQInterpolation behaviour).

The tree level index is not a variable id, so the variable of every level is given here.
It was identified from the region ranges of the 17U tuned bin (see M9-style-analysis.md):
  drc   ADRC gain           (1-1.5 / 3-1000 ...)
  gain  sensor real gain    (1-64)
  lux   AEC lux index       (0-1000)
  cct   AWB colour temp     (1-10000)
  flag  0/1 switch (LED / AI CC); the 1 branch is a single catch-all used with the flash
  one   single-region levels whose variable never changes the result
"""
from __future__ import annotations

import json
import os
from functools import lru_cache

import numpy as np

_ASSET = os.path.join(os.path.dirname(__file__), "assets", "ipe_tables.json")

LEVEL_VARS = {
    "gamma152_ipe_v2": ("one", "drc", "gain", "one", "lux", "cct"),
    "cc15_ipe_v2": ("drc", "flag", "lux", "cct"),
    "cv122_ipe_v2": ("drc", "gain", "flag", "lux", "cct"),
    "tdl13_ipe_v2": ("drc", "flag", "lux", "cct"),
    "ltm21_ipe_v2": ("drc", "lux"),
    "tmc202_sw_v2": ("drc", "gain", "lux"),
}


@lru_cache(maxsize=1)
def tables() -> dict:
    return json.load(open(_ASSET))


def _build(leaves):
    """Nested list: node = list of (start, end, child) ; leaf child = np.ndarray."""
    root: list = []
    for lf in leaves:
        node = root
        path = lf["path"]
        for k, (_, s, e) in enumerate(path):
            hit = next((c for c in node if c[0] == s and c[1] == e), None)
            if hit is None:
                hit = [s, e, [] if k < len(path) - 1 else np.asarray(lf["data"], np.float64)]
                node.append(hit)
            node = hit[2]
    return root


def _eval(node, vals, k):
    if isinstance(node, np.ndarray):
        return node
    v = vals[k]
    regs = sorted(node, key=lambda c: (c[0], c[1]))
    inside = [c for c in regs if c[0] <= v <= c[1]]
    if inside:
        return _eval(inside[0][2], vals, k + 1)
    lo = [c for c in regs if c[1] < v]
    hi = [c for c in regs if c[0] > v]
    if not lo:
        return _eval(hi[0][2], vals, k + 1)
    if not hi:
        return _eval(lo[-1][2], vals, k + 1)
    a, b = lo[-1], hi[0]
    t = (v - a[1]) / max(b[0] - a[1], 1e-9)
    return (1 - t) * _eval(a[2], vals, k + 1) + t * _eval(b[2], vals, k + 1)


@lru_cache(maxsize=None)
def _tree(tag: str, module: str):
    return _build(tables()[tag][module])


def lookup(tag: str, module: str, drc: float = 1.0, gain: float = 1.0, lux: float = 300.0,
           cct: float = 5000.0, flag: float = 0.0) -> np.ndarray:
    """Interpolated leaf (float array) of `module` for tag 'm9' or 'normal'."""
    m = {"drc": drc, "gain": gain, "lux": lux, "cct": cct, "flag": flag}
    vals = [m.get(name, 0.5) if name != "one" else 0.5 for name in LEVEL_VARS[module]]
    # single-region 'one' levels: any value inside works; 0.5 lies in [0,2] / [0,64] / [0,1000]
    return _eval(_tree(tag, module), vals, 0)


# ---- per-module decoders (field layout verified in M9-style-analysis.md / FINDINGS.md) ----

def gamma_lut(tag, **cond) -> np.ndarray:
    """gamma152: 257-entry curve, linear [0,1] in -> 10-bit out; returned normalised to [0,1]."""
    g = lookup(tag, "gamma152_ipe_v2", **cond)[:257]
    return g / 1023.0


def cc_matrix(tag, **cond) -> np.ndarray:
    """cc15: first 3x3 (c_tab). The second matrix + weights #30-62 are the AI-category CCM."""
    return lookup(tag, "cc15_ipe_v2", **cond)[:9].reshape(3, 3)


def cv_params(tag, **cond) -> np.ndarray:
    """cv122: [ry gy by 0 | ap am | bp bm | cp cm | dp dm | k_cb k_cr]."""
    return lookup(tag, "cv122_ipe_v2", **cond)[:14]


def tdl_tables(tag, **cond):
    """tdl13: hue shift (deg, 24 hue x 16 sat) and saturation gain (relative, 24 x 16)."""
    d = lookup(tag, "tdl13_ipe_v2", **cond)
    return d[:384].reshape(24, 16), d[384:768].reshape(24, 16)
