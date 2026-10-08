"""LeicaFilter stage of the 17 Ultra "Leica Moment M9" snapshot pipeline.

Reimplements com.xiaomi.plugin.mileicafilter.so + libMiPhotoFilter.so (GLES):

  * ParamUtil       - parse /odm/etc/camera/leica_filter_param_m9_*.bin
  * ParamTrigger    - pick & blend 4 LUTs (lux-index x CCT) and the CvStyle
                      shading parameters (zoom -> lux-index x CCT)
  * CubeLutEffect   - "CubeLutEffect;cube_strength=1.0;lut_type=1.0;"
  * CvStyleEffect   - luminance-only vignette with light/dark preservation

Parameter file layout (all little endian):
  0x000 u16 n_scene, u16 scene_size[n_scene], u16 param_off(0x400),
        u16 lut_off(0x1000), u16 lut_size(17), u16 n_zoom, u16 zoom_size[n_zoom]
  0x020 char trigger_control[256]  "aiscene-lux-cct"
  0x120 char param_type[256]       "uint16_t"
  0x220 char param_range[256]      "0-1023"
  0x320 char param_version[64]
  0x360 u16 lut_preview_en, lut_snapshot_en, shading_preview_en, shading_snapshot_en
  param_off: per scene { char name[64]; u16 n_lux; n_lux x { u16 lo, hi, n_cct;
             n_cct x { u16 lo, hi, idx } } }                       (scene_size bytes)
  then per zoom { f32 zoom; u16 n_lux; ... same lux/cct tree ... } (zoom_size bytes)
  lut_off:   n_lut x u8[17][17][17][3]   index [r][g][b], texel = (B, G, R)
  tail:      n_shading x f32[8]  (SmoothStart, SmoothEnd, SmoothCoordScale,
             SmoothValueScale, LightDarkPreserveK, B, V, T)
"""
from __future__ import annotations

import os
import struct
from dataclasses import dataclass

import numpy as np

ASSETS = os.path.join(os.path.dirname(__file__), "assets")


@dataclass
class Bin:
    lo: int
    hi: int
    idx: int = -1
    sub: list | None = None


def _read_tree(u16: np.ndarray, pos: int):
    """Parse { n_lux; n_lux x { lo, hi, n_cct; n_cct x {lo, hi, idx} } }."""
    n_lux = int(u16[pos]); pos += 1
    lux = []
    for _ in range(n_lux):
        lo, hi, n_cct = (int(x) for x in u16[pos:pos + 3]); pos += 3
        ccts = []
        for _ in range(n_cct):
            clo, chi, idx = (int(x) for x in u16[pos:pos + 3]); pos += 3
            ccts.append(Bin(clo, chi, idx))
        lux.append(Bin(lo, hi, sub=ccts))
    return lux


def _find(bins: list[Bin], v: int) -> tuple[Bin, Bin]:
    """findElementAndPrevious: (bin containing v, same) or the two bins around a gap.

    Below the first / above the last bin clamps to that bin.
    """
    for i, b in enumerate(bins):
        if v <= b.hi:
            if v >= b.lo or i == 0:
                return b, b
            return bins[i - 1], b
    return bins[-1], bins[-1]


def _frac(v: float, e: Bin, p: Bin) -> float:
    # weight of `p`; exactly the plugin's (v - e.hi) / (p.lo - e.hi).  Inside a single
    # bin e is p, so the value is irrelevant (both corners use the same entry).
    den = float(p.lo) - float(e.hi)
    return (float(v) - float(e.hi)) / den if den != 0 else 0.0


class LeicaFilterParams:
    def __init__(self, path: str):
        d = open(path, "rb").read()
        self.raw = d
        u = np.frombuffer(d[: len(d) // 2 * 2], "<u2")
        n_scene = int(u[0])
        scene_sizes = [int(x) for x in u[1:1 + n_scene]]
        p = 1 + n_scene
        self.param_off, self.lut_off, self.lut_n = int(u[p]), int(u[p + 1]), int(u[p + 2])
        n_zoom = int(u[p + 3])
        zoom_sizes = [int(x) for x in u[p + 4:p + 4 + n_zoom]]
        self.trigger_control = d[0x20:0x120].split(b"\0")[0].strip().decode()
        self.version = d[0x320:0x360].split(b"\0")[0].strip().decode()
        self.flags = [int(x) for x in np.frombuffer(d[0x360:0x368], "<u2")]

        self.scenes: dict[str, list[Bin]] = {}
        off = self.param_off
        n_lut = 0
        for sz in scene_sizes:
            name = d[off:off + 64].split(b"\0")[0].decode()
            tree = _read_tree(np.frombuffer(d[off + 64:off + sz], "<u2"), 0)
            self.scenes[name] = tree
            n_lut = max([n_lut] + [c.idx + 1 for b in tree for c in b.sub])
            off += sz
        self.zooms: list[tuple[float, list[Bin]]] = []
        n_sh = 0
        for sz in zoom_sizes:
            z = struct.unpack_from("<f", d, off)[0]
            tree = _read_tree(np.frombuffer(d[off + 4:off + sz], "<u2"), 0)
            self.zooms.append((z, tree))
            n_sh = max([n_sh] + [c.idx + 1 for b in tree for c in b.sub])
            off += sz
        self.zooms.sort(key=lambda t: t[0])
        n = self.lut_n
        lut_bytes = n * n * n * 3
        self.luts = np.frombuffer(d, np.uint8, n_lut * lut_bytes, self.lut_off).reshape(n_lut, n, n, n, 3)
        self.shading = np.frombuffer(d, "<f4", n_sh * 8, self.lut_off + n_lut * lut_bytes).reshape(n_sh, 8)
        assert self.lut_off + n_lut * lut_bytes + n_sh * 32 == len(d), "unexpected param file size"

    # ---------------------------------------------------------------- trigger
    def _corners(self, tree: list[Bin], lux: int, cct: int):
        le, lp = _find(tree, lux)
        a = _frac(lux, le, lp)
        ce, cp = _find(le.sub, cct)
        b = _frac(cct, ce, cp)
        de, dp = _find(lp.sub, cct)
        c = _frac(cct, de, dp)
        # (idx, weight) in the plugin's accumulation order
        return [(ce.idx, (1 - a) * (1 - b)), (cp.idx, (1 - a) * b),
                (de.idx, a * (1 - c)), (dp.idx, a * c)]

    def lut(self, scene: str, lux_index: float, cct: float) -> np.ndarray:
        """Blended u8 LUT [17,17,17,3] as ParamTrigger::triggerLut builds it."""
        tree = self.scenes.get(scene) or self.scenes["common"]
        corners = self._corners(tree, int(lux_index), int(cct))
        # merge duplicate indices like the plugin's special-cased loops
        acc: dict[int, np.float32] = {}
        order = []
        for i, w in corners:
            if i not in acc:
                acc[i] = np.float32(0)
                order.append(i)
            acc[i] = np.float32(acc[i] + np.float32(w))
        if len(order) == 1:
            return self.luts[order[0]].copy()
        s = np.zeros(self.luts.shape[1:], np.float32)
        for i in order:
            s = s + acc[i] * self.luts[i].astype(np.float32)
        return np.trunc(s).astype(np.uint8)

    def shading_params(self, zoom: float, lux_index: float, cct: float) -> np.ndarray:
        tree = self.zooms[0][1]
        for z, t in self.zooms:
            if zoom >= z:
                tree = t
        corners = self._corners(tree, int(lux_index), int(cct))
        out = np.zeros(8, np.float32)
        for i, w in corners:
            out += np.float32(w) * self.shading[i]
        return out


# ------------------------------------------------------------------ shaders
def lut_apply(rgb: np.ndarray, lut: np.ndarray) -> np.ndarray:
    """CubeLutEffect, lut_type=1: texture(lut, c*(N-1)/N + .5/N .zyx).bgr, strength 1.

    rgb: float32 [...,3] in 0..1. Trilinear filtering like GL_LINEAR on a 3D texture.
    """
    n = lut.shape[0]
    t = lut.astype(np.float32) / 255.0          # [r][g][b] -> (B,G,R)
    t = t[..., ::-1]                             # -> (R,G,B)
    x = np.clip(rgb, 0.0, 1.0) * (n - 1)
    i0 = np.minimum(np.floor(x).astype(np.int32), n - 2)
    f = x - i0
    r0, g0, b0 = i0[..., 0], i0[..., 1], i0[..., 2]
    fr, fg, fb = f[..., 0:1], f[..., 1:2], f[..., 2:3]
    out = 0
    for dr in (0, 1):
        wr = fr if dr else 1 - fr
        for dg in (0, 1):
            wg = fg if dg else 1 - fg
            for db in (0, 1):
                wb = fb if db else 1 - fb
                out = out + wr * wg * wb * t[r0 + dr, g0 + dg, b0 + db]
    return out


def _nrand(u, v):
    return np.modf(np.sin(u * 12.9898 + v * 78.233) * 43758.5453)[0] % 1.0


def cvstyle_apply(rgb: np.ndarray, p: np.ndarray, current_time: float = 0.0) -> np.ndarray:
    """CvStyleEffect (libMiPhotoFilter): luminance-only vignette, preserves extremes."""
    h, w = rgb.shape[:2]
    start, end, coord_scale, value_scale, k, b, v, t = (float(x) for x in p)
    ys, xs = np.mgrid[0:h, 0:w].astype(np.float32)
    uvx = (xs + 0.5) / w
    uvy = (ys + 0.5) / h
    uvx = (uvx - 0.5) * w / h + 0.5
    ux, uy = uvx - 0.5, uvy - 0.5
    dist = np.sqrt(ux * ux + uy * uy)
    tt = current_time * (30.0 / 60.0) / 100.0
    nx, ny = ux - 0.5, uy - 0.5
    rnd = sum(_nrand(nx + c * tt, ny + c * tt) for c in (0.07, 0.11, 0.13, 0.17, 0.19, 0.23)) / 6.0
    dist = dist + 0.004 * rnd * 10.0 * coord_scale
    s = np.clip((dist - start) / (end - start), 0.0, 1.0)
    vig = s * s * (3.0 - 2.0 * s)
    r, g, bb = rgb[..., 0], rgb[..., 1], rgb[..., 2]
    L = 0.499 * r + 0.387 * g + 0.114 * bb
    Y = 0.299 * r + 0.587 * g + 0.114 * bb
    pf = v / (1.0 + np.exp(k * (-L + b))) + t
    vig = (1.0 - pf) * vig + pf
    vig = vig * value_scale
    delta = Y * (vig - 1.0)
    return rgb + delta[..., None]


# YUV <-> RGB as the GLES pipeline does it (BT.601 full range)
def yuv601f_to_rgb(yuv: np.ndarray) -> np.ndarray:
    y, u, v = yuv[..., 0], yuv[..., 1] - 0.5, yuv[..., 2] - 0.5
    return np.stack([y + 1.402 * v, y - 0.344136 * u - 0.714136 * v, y + 1.772 * u], -1)


def rgb_to_yuv601f(rgb: np.ndarray) -> np.ndarray:
    r, g, b = rgb[..., 0], rgb[..., 1], rgb[..., 2]
    y = 0.299 * r + 0.587 * g + 0.114 * b
    return np.stack([y, (b - y) / 1.772 + 0.5, (r - y) / 1.402 + 0.5], -1)


class LeicaFilter:
    """M9 snapshot LeicaFilter. `style_trans_on=False` reproduces the plugin's
    fallback ("use pre param for M9"): preview parameters, which bake in an
    approximation of the StyleTrans look."""

    def __init__(self, assets: str = ASSETS):
        self.snapshot = LeicaFilterParams(os.path.join(assets, "leica_filter_param_m9_snapshot.bin"))
        self.preview = LeicaFilterParams(os.path.join(assets, "leica_filter_param_m9_preview.bin"))

    def __call__(self, rgb: np.ndarray, lux_index: float, cct: float, zoom: float = 1.0,
                 scene: str = "common", style_trans_on: bool = True, shading: bool = True) -> np.ndarray:
        p = self.snapshot if style_trans_on else self.preview
        out = lut_apply(rgb, p.lut(scene, lux_index, cct))
        if shading:
            out = cvstyle_apply(out, p.shading_params(zoom, lux_index, cct))
        return np.clip(out, 0.0, 1.0)
