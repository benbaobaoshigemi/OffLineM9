"""Full Adobe DCP colorimetric bridge (Camera_src -> ProPhoto D50 PCS -> Camera_17U).

Follows the DNG SDK reference colorimetric chain:
  ForwardMatrix(T) (D50 PCS XYZ) -> ProPhoto linear -> ProfileHueSatMap(T)
and inverts the target 17U profile through the same pre-LookTable ProPhoto D50 PCS.
Shared Adobe LookTables (identical across Adobe Standard DCPs) cancel by symmetry.
"""
from __future__ import annotations

from dataclasses import dataclass
from functools import lru_cache
import glob
import logging
import os

import numpy as np

PROPHOTO_TO_XYZ = np.array([
    [0.7977, 0.1352, 0.0313],
    [0.2880, 0.7119, 0.0001],
    [0.0000, 0.0000, 0.8249],
], np.float64)
XYZ_TO_PROPHOTO = np.linalg.inv(PROPHOTO_TO_XYZ)

XYZ_D50 = np.array([0.96422, 1.0, 0.82521], np.float64)
XYZ_D65 = np.array([0.95047, 1.0, 1.08883], np.float64)
SRGB_TO_XYZ = np.array([
    [0.4124564, 0.3575761, 0.1804375],
    [0.2126729, 0.7151522, 0.0721750],
    [0.0193339, 0.1191920, 0.9503041],
], np.float64)
_BRADFORD = np.array([
    [0.8951, 0.2664, -0.1614],
    [-0.7502, 1.7135, 0.0367],
    [0.0389, -0.0685, 1.0296],
], np.float64)
D50_TO_D65 = np.linalg.inv(_BRADFORD) @ np.diag((_BRADFORD @ XYZ_D65) / (_BRADFORD @ XYZ_D50)) @ _BRADFORD

LEGEND_CCT = 5003.0

_ILLUM_CCT = {
    17: 2856.0, 21: 6504.0, 20: 5503.0, 22: 7504.0, 23: 5003.0,
    1: 5500.0, 2: 4200.0, 3: 2856.0, 10: 6500.0, 11: 7500.0,
    12: 6400.0, 13: 5000.0, 14: 4150.0, 15: 3450.0, 18: 4874.0,
    19: 6774.0, 24: 3200.0,
}

_DEFAULT_DCP_DIRS = [
    r"F:\理光\第三方\Adobe-Xiaomi-17-Ultra\CameraProfiles\Adobe Standard",
    r"F:\理光\第三方\Adobe-Standard-X9U",
]

_TARGET_DCP_FILES = {
    "main": "Xiaomi 17 Ultra Rear Wide Camera Adobe Standard.dcp",
    "tele": "Xiaomi 17 Ultra Rear Telephoto Camera Adobe Standard.dcp",
}


def _dcp_dirs() -> list[str]:
    env = os.environ.get("M9_DCP_DIR", "").strip()
    dirs = [d for d in env.split(os.pathsep) if d] if env else []
    return dirs + [d for d in _DEFAULT_DCP_DIRS if d not in dirs]


def _num(v) -> float:
    if v is None:
        return 0.0
    if isinstance(v, (tuple, list, np.ndarray)):
        arr = np.asarray(v).ravel()
        if arr.size == 2 and np.issubdtype(arr.dtype, np.integer):
            return float(arr[0]) / float(arr[1]) if arr[1] else 0.0
        return float(arr[0]) if arr.size else 0.0
    return float(v)


def _mat(v) -> np.ndarray | None:
    if v is None:
        return None
    a = np.asarray(v, np.float64).ravel()
    if a.size == 18:
        a = a[0::2] / a[1::2]
    return a.reshape(3, 3)


def _xy_to_cct(x: float, y: float) -> float:
    n = (x - 0.3320) / (0.1858 - y)
    return float(449.0 * n ** 3 + 3525.0 * n ** 2 + 6823.3 * n + 5520.33)


def cct_to_xyz(cct: float) -> np.ndarray:
    """CIE illuminant xy -> XYZ (Y=1): Planckian locus below 4000 K, CIE D-series above."""
    t = float(np.clip(cct, 1667.0, 25000.0))
    if t < 4000.0:
        x = -0.2661239e9 / t ** 3 - 0.2343589e6 / t ** 2 + 0.8776956e3 / t + 0.179910
        if t <= 2222.0:
            y = -1.1063814 * x ** 3 - 1.34811020 * x ** 2 + 2.18555832 * x - 0.20219683
        else:
            y = -0.9549476 * x ** 3 - 1.37418593 * x ** 2 + 2.09137015 * x - 0.16748867
    else:
        if t <= 7000.0:
            x = -4.6070e9 / t ** 3 + 2.9678e6 / t ** 2 + 0.09911e3 / t + 0.244063
        else:
            x = -2.0064e9 / t ** 3 + 1.9018e6 / t ** 2 + 0.24748e3 / t + 0.237040
        y = -3.000 * x ** 2 + 2.870 * x - 0.275
    return np.array([x / y, 1.0, (1.0 - x - y) / y], np.float64)


def _rgb_to_hsv(rgb: np.ndarray):
    mx = rgb.max(-1)
    mn = rgb.min(-1)
    d = mx - mn
    r, g, b = rgb[..., 0], rgb[..., 1], rgb[..., 2]
    ds = np.where(d > 1e-7, d, 1.0)
    h = np.where(mx == r, ((g - b) / ds) % 6.0,
                 np.where(mx == g, (b - r) / ds + 2.0, (r - g) / ds + 4.0))
    h = np.where(d > 1e-7, h, 0.0)
    s = np.where(mx > 1e-7, d / np.where(mx > 1e-7, mx, 1.0), 0.0)
    return h % 6.0, s, mx


def _hsv_to_rgb(h: np.ndarray, s: np.ndarray, v: np.ndarray) -> np.ndarray:
    i = np.floor(h).astype(np.int32) % 6
    f = h - np.floor(h)
    p = v * (1.0 - s)
    q = v * (1.0 - s * f)
    t = v * (1.0 - s * (1.0 - f))
    r = np.select([i == 0, i == 1, i == 2, i == 3, i == 4, i == 5], [v, q, p, p, t, v])
    g = np.select([i == 0, i == 1, i == 2, i == 3, i == 4, i == 5], [t, v, v, q, p, p])
    b = np.select([i == 0, i == 1, i == 2, i == 3, i == 4, i == 5], [p, p, t, v, v, q])
    return np.stack([r, g, b], -1)


def apply_hsm(rgb: np.ndarray, table: np.ndarray, dims: tuple[int, int, int],
              srgb_encoded: bool = False) -> np.ndarray:
    """DNG ProfileHueSatMap forward transform (unclipped HDR value)."""
    hd, sd, vd = dims
    enc = np.maximum(rgb, 0.0)
    if srgb_encoded:
        enc = np.where(enc <= 0.0031308, enc * 12.92,
                       1.055 * np.maximum(enc, 1e-9) ** (1.0 / 2.4) - 0.055)
    h, s, v = _rgb_to_hsv(enc)
    hs = h * (hd / 6.0)
    ss = np.clip(s, 0.0, 1.0) * (sd - 1)
    h0 = np.floor(hs).astype(np.int32)
    hf = hs - h0
    h0 %= hd
    h1 = (h0 + 1) % hd
    s0 = np.minimum(np.floor(ss).astype(np.int32), sd - 2)
    sf = ss - s0
    if vd == 1:
        t0 = table[0]
        out = (((1.0 - hf) * (1.0 - sf))[..., None] * t0[h0, s0]
               + ((1.0 - hf) * sf)[..., None] * t0[h0, s0 + 1]
               + (hf * (1.0 - sf))[..., None] * t0[h1, s0]
               + (hf * sf)[..., None] * t0[h1, s0 + 1])
    else:
        vs = np.clip(v, 0.0, 1.0) * (vd - 1)
        v0 = np.minimum(np.floor(vs).astype(np.int32), vd - 2)
        vf = vs - v0
        v1 = np.minimum(v0 + 1, vd - 1)
        out = 0.0
        for vi, vw in ((v0, 1.0 - vf), (v1, vf)):
            for hi, hw in ((h0, 1.0 - hf), (h1, hf)):
                for si, sw in ((s0, 1.0 - sf), (s0 + 1, sf)):
                    out = out + (vw * hw * sw)[..., None] * table[vi, hi, si]
    h2 = (h + out[..., 0] / 60.0) % 6.0
    s2 = np.clip(s * out[..., 1], 0.0, 1.0)
    v2 = v * out[..., 2]
    res = _hsv_to_rgb(h2, s2, v2)
    if srgb_encoded:
        res = np.where(res <= 0.04045, res / 12.92, ((res + 0.055) / 1.055) ** 2.4)
    return res


@dataclass
class DCPProfile:
    name: str
    cm1: np.ndarray
    cm2: np.ndarray | None
    t1: float
    t2: float
    fm1: np.ndarray | None = None
    fm2: np.ndarray | None = None
    hsm_dims: tuple[int, int, int] | None = None
    hsm1: np.ndarray | None = None
    hsm2: np.ndarray | None = None
    hsm_srgb: bool = False

    @classmethod
    def from_tags(cls, tags: dict, name: str = "") -> "DCPProfile":
        cm1 = _mat(tags.get(50721))
        if cm1 is None:
            raise ValueError("Profile missing ColorMatrix1 (50721)")
        cm2 = _mat(tags.get(50722))
        t1 = _ILLUM_CCT.get(int(_num(tags.get(50778))), 2856.0)
        t2 = _ILLUM_CCT.get(int(_num(tags.get(50779))), 6504.0)
        fm1, fm2 = _mat(tags.get(50964)), _mat(tags.get(50965))
        hsm_dims = hsm1 = hsm2 = None
        if 50937 in tags and 50938 in tags:
            hd, sd, vd = [int(x) for x in tags[50937]]
            hsm_dims = (hd, sd, vd)
            hsm1 = np.asarray(tags[50938], np.float64).reshape(vd, hd, sd, 3)
            hsm2 = (np.asarray(tags[50939], np.float64).reshape(vd, hd, sd, 3)
                    if 50939 in tags else hsm1)
        return cls(
            name=name or str(tags.get(50708, "")).strip(),
            cm1=cm1, cm2=cm2, t1=t1, t2=t2, fm1=fm1, fm2=fm2,
            hsm_dims=hsm_dims, hsm1=hsm1, hsm2=hsm2,
            hsm_srgb=int(_num(tags.get(51107))) == 1,
        )

    @property
    def is_full(self) -> bool:
        return self.fm1 is not None

    @property
    def is_scale_invariant(self) -> bool:
        return (self.hsm_dims is None) or (self.hsm_dims[2] == 1 and not self.hsm_srgb)

    def _w(self, cct: float) -> float:
        if self.t1 == self.t2:
            return 0.0
        return float(np.clip((1.0 / cct - 1.0 / self.t1) / (1.0 / self.t2 - 1.0 / self.t1), 0.0, 1.0))

    def cm(self, cct: float) -> np.ndarray:
        if self.cm2 is None:
            return self.cm1
        w = self._w(cct)
        return (1.0 - w) * self.cm1 + w * self.cm2

    def fm(self, cct: float) -> np.ndarray | None:
        if self.fm1 is None:
            return None
        if self.fm2 is None:
            return self.fm1
        w = self._w(cct)
        return (1.0 - w) * self.fm1 + w * self.fm2

    def hsm(self, cct: float) -> np.ndarray | None:
        if self.hsm1 is None:
            return None
        w = self._w(cct)
        return (1.0 - w) * self.hsm1 + w * self.hsm2

    def n_at(self, cct: float) -> np.ndarray:
        n = self.cm(cct) @ cct_to_xyz(cct)
        return n / n[1]

    def n50(self) -> np.ndarray:
        n = self.cm(LEGEND_CCT) @ XYZ_D50
        return n / n[1]

    def cct_from_neutral(self, neutral: np.ndarray) -> float:
        if self.cm2 is None:
            return 5000.0
        cct = 5000.0
        for _ in range(30):
            xyz = np.linalg.solve(self.cm(cct), neutral)
            new = _xy_to_cct(xyz[0] / xyz.sum(), xyz[1] / xyz.sum())
            if abs(new - cct) < 1.0:
                return float(new)
            cct = float(np.clip(new, 1500.0, 20000.0))
        return float(cct)

    def srgb2cam_cm(self, cct: float = LEGEND_CCT) -> np.ndarray:
        """Linear D65 sRGB -> D50-WB'd camera linear RGB via ColorMatrix + Bradford D65->D50."""
        cm = self.cm(cct)
        n50 = self.n50()
        m = np.diag(1.0 / n50) @ cm @ np.linalg.inv(D50_TO_D65) @ SRGB_TO_XYZ
        m /= m.sum(axis=1, keepdims=True)
        return m.astype(np.float64)

    def forward_prophoto(self, cam_wb_T: np.ndarray, cct: float) -> np.ndarray:
        """Camera RGB (white-balanced to illuminant `cct`) -> ProPhoto D50 linear (pre-LookTable)."""
        fm = self.fm(cct)
        if fm is not None:
            m = (XYZ_TO_PROPHOTO @ fm).T
        else:
            # ColorMatrix fallback: camera WB'd to `cct` -> illuminant XYZ -> Bradford to D50 -> ProPhoto
            cm = self.cm(cct)
            nT = self.n_at(cct)
            cam2xyz_T = np.linalg.inv(np.diag(1.0 / nT) @ cm)
            cat = np.linalg.inv(_BRADFORD) @ np.diag((_BRADFORD @ XYZ_D50) / (_BRADFORD @ cct_to_xyz(cct))) @ _BRADFORD
            m = (XYZ_TO_PROPHOTO @ cat @ cam2xyz_T).T
        pro = cam_wb_T @ m
        if self.hsm1 is not None and self.hsm_dims is not None:
            pro = apply_hsm(pro, self.hsm(cct), self.hsm_dims, self.hsm_srgb)
        return pro

    def inverse_from_prophoto(self, pro: np.ndarray, cct: float, iters: int = 20) -> np.ndarray:
        """ProPhoto D50 linear (pre-LookTable) -> Camera RGB (white-balanced to illuminant `cct`)."""
        x = pro
        if self.hsm1 is not None and self.hsm_dims is not None:
            tab = self.hsm(cct)
            x = pro.copy()
            for _ in range(iters):
                fx = apply_hsm(x, tab, self.hsm_dims, self.hsm_srgb)
                x = np.maximum(x + 0.9 * (pro - fx), 0.0)
        fm = self.fm(cct)
        if fm is not None:
            m = (np.linalg.inv(fm) @ PROPHOTO_TO_XYZ).T
        else:
            cm = self.cm(cct)
            nT = self.n_at(cct)
            xyz_T2cam = np.diag(1.0 / nT) @ cm
            cat = np.linalg.inv(_BRADFORD) @ np.diag((_BRADFORD @ cct_to_xyz(cct)) / (_BRADFORD @ XYZ_D50)) @ _BRADFORD
            m = (xyz_T2cam @ cat @ PROPHOTO_TO_XYZ).T
        return np.maximum(x @ m, 0.0)


@lru_cache(maxsize=16)
def load_dcp(path: str) -> DCPProfile:
    import tifffile
    logging.getLogger("tifffile").setLevel(logging.ERROR)
    with tifffile.TiffFile(path) as tf:
        tags = {t.code: t.value for t in tf.pages[0].tags.values()}
    return DCPProfile.from_tags(tags, name=os.path.basename(path))


def read_dng_tags(path: str) -> tuple[dict, dict]:
    """Return (name_tags, code_tags) from a DNG's IFD0 + EXIF sub-IFD."""
    import tifffile
    name_tags: dict = {}
    code_tags: dict = {}
    with tifffile.TiffFile(path) as tf:
        for t in tf.pages[0].tags.values():
            name_tags[t.name] = t.value
            code_tags[t.code] = t.value
        exif = name_tags.get("ExifTag")
        if isinstance(exif, dict):
            name_tags.update(exif)
    return name_tags, code_tags


@lru_cache(maxsize=8)
def _scan_dcp_dir(d: str) -> dict[str, str]:
    out: dict[str, str] = {}
    if not os.path.isdir(d):
        return out
    import tifffile
    logging.getLogger("tifffile").setLevel(logging.ERROR)
    for p in sorted(glob.glob(os.path.join(d, "*.dcp"))):
        try:
            with tifffile.TiffFile(p) as tf:
                t = tf.pages[0].tags.get(50708)
                if t and isinstance(t.value, str):
                    key = " ".join(t.value.lower().split())
                    out.setdefault(key, p)
        except Exception:
            pass
    return out


def default_target_dcp(camera: str) -> str | None:
    fn = _TARGET_DCP_FILES.get(camera)
    if not fn:
        return None
    for d in _dcp_dirs():
        p = os.path.join(d, fn)
        if os.path.isfile(p):
            return p
    return None


def find_source_dcp(tags: dict) -> str | None:
    """Match source DNG metadata (LensModel / UniqueCameraModel / Model) to an external .dcp."""
    candidates = []
    for k in ("LensModel", "UniqueCameraModel", "Model"):
        v = tags.get(k)
        if isinstance(v, str) and v.strip():
            candidates.append(" ".join(v.strip().lower().split()))
    if not candidates:
        return None
    for d in _dcp_dirs():
        idx = _scan_dcp_dir(d)
        for c in candidates:
            if c in idx:
                return idx[c]
    return None


@lru_cache(maxsize=16)
def _build_chrom_lut(src_key: str, dst_key: str, cct_q: float, size: int = 256) -> np.ndarray:
    """Precompute homogeneous 2D chromaticity LUT (r/S, g/S) -> dst D50-WB RGB / S."""
    src = load_dcp(src_key)
    dst = load_dcp(dst_key)
    return _eval_chrom_lut(src, dst, cct_q, size)


def _eval_chrom_lut(src: DCPProfile, dst: DCPProfile, cct: float, size: int = 256) -> np.ndarray:
    pre = (src.n50() / src.n_at(cct)).astype(np.float64)
    post = (dst.n_at(cct) / dst.n50()).astype(np.float64)
    u = np.linspace(0.0, 1.0, size)
    rg, gg = np.meshgrid(u, u, indexing="ij")
    bg = np.maximum(1.0 - rg - gg, 0.0)
    pts = np.stack([rg, gg, bg], -1).reshape(-1, 3)
    pro = src.forward_prophoto(pts * pre, cct)
    out = dst.inverse_from_prophoto(pro, cct, iters=20) * post
    return out.reshape(size, size, 3).astype(np.float32)


def _apply_chrom_lut(strip: np.ndarray, lut: np.ndarray) -> np.ndarray:
    n = lut.shape[0]
    pos = np.maximum(strip, 0.0)
    s = np.maximum(pos.sum(axis=-1), 1e-7)
    ur = np.clip(pos[..., 0] / s, 0.0, 1.0) * (n - 1)
    ug = np.clip(pos[..., 1] / s, 0.0, 1.0) * (n - 1)
    r0 = np.minimum(np.floor(ur).astype(np.int32), n - 2)
    g0 = np.minimum(np.floor(ug).astype(np.int32), n - 2)
    fr = (ur - r0)[..., None]
    fg = (ug - g0)[..., None]
    c = ((1.0 - fr) * (1.0 - fg) * lut[r0, g0]
         + (1.0 - fr) * fg * lut[r0, g0 + 1]
         + fr * (1.0 - fg) * lut[r0 + 1, g0]
         + fr * fg * lut[r0 + 1, g0 + 1])
    return np.maximum(c * s[..., None], 0.0).astype(np.float32)


def _apply_chrom_lut_torch(rgb: np.ndarray, lut: np.ndarray) -> np.ndarray | None:
    try:
        import torch
        if not torch.cuda.is_available():
            return None
    except ImportError:
        return None
    n = lut.shape[0]
    lut_t = torch.from_numpy(np.ascontiguousarray(lut)).to("cuda")
    flat = lut_t.reshape(-1, 3)
    h = rgb.shape[0]
    out = np.empty(rgb.shape, dtype=np.float32)
    step = max(1, (1 << 22) // max(1, rgb.shape[1]))
    with torch.no_grad():
        for y0 in range(0, h, step):
            y1 = min(y0 + step, h)
            pos = torch.from_numpy(np.ascontiguousarray(rgb[y0:y1], np.float32)).to("cuda").clamp_(min=0.0)
            s = pos.sum(dim=-1).clamp_(min=1e-7)
            ur = (pos[..., 0] / s).clamp_(0.0, 1.0) * (n - 1)
            ug = (pos[..., 1] / s).clamp_(0.0, 1.0) * (n - 1)
            r0 = torch.clamp(torch.floor(ur).to(torch.int64), max=n - 2)
            g0 = torch.clamp(torch.floor(ug).to(torch.int64), max=n - 2)
            fr = (ur - r0).unsqueeze(-1)
            fg = (ug - g0).unsqueeze(-1)
            i00 = r0 * n + g0
            c = ((1.0 - fr) * (1.0 - fg) * flat[i00]
                 + (1.0 - fr) * fg * flat[i00 + 1]
                 + fr * (1.0 - fg) * flat[i00 + n]
                 + fr * fg * flat[i00 + n + 1])
            out[y0:y1] = (c * s.unsqueeze(-1)).clamp_(min=0.0).cpu().numpy()
    return out


def convert_camera(rgb_src_wb: np.ndarray, src: DCPProfile, dst: DCPProfile, cct: float,
                   src_path: str | None = None, dst_path: str | None = None) -> np.ndarray:
    """Convert D50-WB'd source camera RGB -> D50-WB'd target camera RGB via ProPhoto D50 PCS."""
    from concurrent.futures import ThreadPoolExecutor

    cct_q = round(float(cct), 1)
    if src.is_scale_invariant and dst.is_scale_invariant:
        lut = _build_chrom_lut(src_path, dst_path, cct_q) if (src_path and dst_path) else _eval_chrom_lut(src, dst, cct_q)
        gpu_out = _apply_chrom_lut_torch(rgb_src_wb, lut)
        if gpu_out is not None:
            return gpu_out

    n_threads = os.cpu_count() or 4
    bounds = np.linspace(0, rgb_src_wb.shape[0], 2 * n_threads + 1).astype(int)
    out = np.empty_like(rgb_src_wb, dtype=np.float32)

    if src.is_scale_invariant and dst.is_scale_invariant:
        def run(i):
            out[bounds[i]:bounds[i + 1]] = _apply_chrom_lut(rgb_src_wb[bounds[i]:bounds[i + 1]], lut)
    else:
        pre = (src.n50() / src.n_at(cct_q)).astype(np.float64)
        post = (dst.n_at(cct_q) / dst.n50()).astype(np.float64)

        def run(i):
            s = rgb_src_wb[bounds[i]:bounds[i + 1]].astype(np.float64)
            pro = src.forward_prophoto(s * pre, cct_q)
            res = dst.inverse_from_prophoto(pro, cct_q, iters=12) * post
            out[bounds[i]:bounds[i + 1]] = np.maximum(res, 0.0).astype(np.float32)

    with ThreadPoolExecutor(n_threads) as ex:
        list(ex.map(run, range(2 * n_threads)))
    return out
