"""Offline Leica Moment M9 renderer (17 Ultra pipeline, reimplemented).

  python -m m9.render input.dng -o out.jpg [--lux-index N] [--cct K] [--scene common]
"""
from __future__ import annotations

import argparse
import os

import numpy as np

from .frontend import auto_exposure, load_dng, lux_index_from_ev, tone
from .leicafilter import LeicaFilter


def render(path: str, out: str, lux_index: float | None = None, cct: float | None = None,
           scene: str = "common", ev: float = 0.0, style: str = "auto", quality: int = 95,
           half: bool = False, verbose: bool = True) -> np.ndarray:
    lin, info = load_dng(path, half=half)
    li = lux_index if lux_index is not None else (lux_index_from_ev(info.ev100) if info.ev100 else 300.0)
    k = cct if cct is not None else info.cct
    exp = auto_exposure(lin) * (2.0 ** ev)
    disp = tone(lin, exposure=exp)

    # StyleTrans network not yet reconstructed -> use the plugin's own fallback
    # (preview params, which bake in the style approximation).
    style_on = style == "snapshot"
    lf = LeicaFilter()
    img = lf(disp, lux_index=li, cct=k, zoom=1.0, scene=scene, style_trans_on=style_on)
    if verbose:
        print(f"{os.path.basename(path)}: {info.make} {info.model} EV100={info.ev100:.2f} "
              f"lux_index={li:.0f} cct={k:.0f} exposure={exp:.2f} params={'snapshot' if style_on else 'preview'}")
    _save(img, out, quality)
    return img


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
    ap.add_argument("--style", default="auto", choices=["auto", "preview", "snapshot"],
                    help="LeicaFilter params: preview (bakes style approx) or snapshot (expects StyleTrans)")
    ap.add_argument("--half", action="store_true", help="half-size demosaic (fast preview)")
    a = ap.parse_args()
    out = a.output or os.path.splitext(a.input)[0] + "_M9.jpg"
    render(a.input, out, a.lux_index, a.cct, a.scene, a.ev, a.style, half=a.half)


if __name__ == "__main__":
    main()
