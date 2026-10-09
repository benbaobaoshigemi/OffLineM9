"""Offline Leica Moment M9 renderer (17 Ultra pipeline, reimplemented).

  python -m m9.render input.dng -o out.jpg [--camera main|tele] [--lux-index N] [--cct K] [--ev E] [--half]

--camera selects whose Legend tuning is reproduced (the 17U M9 ISP tuning differs per camera,
see FINDINGS.md): main = ovx10500u (own M9 AE/IPE tuning), tele = s5khpe (no M9 ISP tuning:
normal AE/IPE; M9 = AWB lock + StyleTrans + LeicaFilter).

Stages (17U legendsnapshot): B2Y front end (m9.frontend) -> StyleTrans (pluggable, see
m9.styletrans) -> LeicaFilter (m9.leicafilter) -> JPEG.
"""
from __future__ import annotations

import argparse
import os

import numpy as np

from .frontend import b2y
from .leicafilter import LeicaFilter


def render(path: str, out: str, lux_index: float | None = None, cct: float | None = None,
           scene: str = "common", ev: float = 0.0, quality: int = 95, half: bool = False,
           verbose: bool = True, camera: str = "main", zoom: float | None = None,
           hdr: bool = True) -> np.ndarray:
    fe = b2y(path, lux_index, cct, ev=ev, half=half, camera=camera)
    if zoom is None:
        zoom = 1.0 if camera == "main" else _tele_zoom(path)
    img = fe.rgb
    style_on = False
    try:
        from . import styletrans
        st = styletrans.load()
        if st is not None:
            img = st(img, fe.lux_index, fe.cct)
            style_on = True
    except ImportError:
        pass
    img = LeicaFilter()(img, lux_index=fe.lux_index, cct=fe.cct, zoom=zoom, scene=scene,
                        style_trans_on=style_on)
    if verbose:
        a = fe.ae
        print(f"[{camera} x{zoom:.2f}] {os.path.basename(path)}: {fe.info.make} {fe.info.model} EV100={fe.info.ev100:.2f} "
              f"lux_index={fe.lux_index:.0f} cct={fe.cct:.0f} | AE base={a.base_target:.1f} "
              f"style={a.style_scale:.2f} mid={a.mid_target:.1f} dr={a.dr_b2d:.1f} "
              f"exp_mid={a.exp_mid:.2f} exp_short={a.exp_short:.2f} adrc={a.adrc_gain:.2f} "
              f"| StyleTrans={'on' if style_on else 'off (LeicaFilter preview params)'}")
    if hdr:
        from . import gainmap, uhdr
        gm = gainmap.make(fe, ev)
        fe.lin = None
        n = uhdr.write(out, img, gm, quality)
        if verbose:
            print(f"  UltraHDR: gainmap {gm.image.shape[1]}x{gm.image.shape[0]} mean={gm.image.mean():.1f} "
                  f"hl={gm.hl_pct:.2f}% maxBoost={gm.max_boost:.2f} -> {n / 1e6:.1f} MB")
    else:
        _save(img, out, quality)
    return img


def _tele_zoom(path: str) -> float:
    """17U continuous optical tele: ~75-100 mm equiv. over the 23 mm main -> 3.2-4.3x
    (LeicaFilter zoom nodes 3.0 / 4.3). Taken from the DNG 35 mm focal length when present."""
    from .frontend import dng_tags, _num
    f35 = _num(dng_tags(path).get("FocalLengthIn35mmFilm"))
    return float(np.clip(f35 / 23.0, 3.2, 4.3)) if f35 and f35 > 0 else 4.3


def _save(img: np.ndarray, out: str, quality: int):
    import cv2
    u8 = (np.clip(img, 0, 1) * 255.0 + 0.5).astype(np.uint8)
    cv2.imwrite(out, u8[..., ::-1], [cv2.IMWRITE_JPEG_QUALITY, quality])


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("input")
    ap.add_argument("-o", "--output")
    ap.add_argument("--lux-index", type=float)
    ap.add_argument("--cct", type=float)
    ap.add_argument("--scene", default="common",
                    choices=["common", "protrait", "night", "plants", "food", "sunrise_sunset"])
    ap.add_argument("--ev", type=float, default=0.0, help="exposure compensation (stops)")
    ap.add_argument("--camera", default="main", choices=["main", "tele"])
    ap.add_argument("--zoom", type=float, help="LeicaFilter zoom ratio (default: main 1.0, tele from focal length)")
    ap.add_argument("--no-hdr", action="store_true", help="plain SDR JPEG (no Ultra HDR gain map)")
    ap.add_argument("--half", action="store_true", help="half-size demosaic (fast preview)")
    a = ap.parse_args()
    out = a.output or os.path.splitext(a.input)[0] + "_M9.jpg"
    render(a.input, out, a.lux_index, a.cct, a.scene, a.ev, half=a.half, camera=a.camera, zoom=a.zoom, hdr=not a.no_hdr)


if __name__ == "__main__":
    main()
