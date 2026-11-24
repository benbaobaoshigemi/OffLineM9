"""StyleTrans node (com.xiaomi.plugin.legendST -> libmialgo_styletrans.so), reimplemented around
a pluggable network backend. Pre/post-processing follows styletrans_pipeline.cpp run() 0x449518
(see M9-style-analysis.md):

  rgb (B2Y NV12 decoded, BT.601 full) -> centre pad to 4096x3072 (REFLECT_101)
  -> INTER_AREA 1024x768 -> [mask from humanseg] -> pad 48 (RGB REFLECT, mask 0) -> 1120x864x4
  -> u8 graph input (net sees (x-128)/127.5) -> styletrans_{low,high} -> crop Rect(48,48,1024,768)
  -> INTER_AREA up to 4096x3072 -> colorfix 544x544x6 tiles (step 512, centre 512 kept)
  -> centre crop back.
Model choice: low if lux_index > 260 and CCT < 4692 else high.

Backends: see `load()`. A backend is an object with
    run(model: str, x: np.ndarray[N,H,W,C] float32) -> np.ndarray[N,H,W,3] float32 (0..255 scale)
"""
from __future__ import annotations

import os

import cv2
import numpy as np

W4K, H4K = 4096, 3072
NW, NH = 1024, 768
PAD = 48
TILE, STEP, MARGIN = 544, 512, 16


def choose_model(lux_index: float, cct: float) -> str:
    return "low" if (lux_index > 260 and cct < 4692) else "high"


def _pad_center(img, w, h, border):
    dh, dw = h - img.shape[0], w - img.shape[1]
    t, l = dh // 2, dw // 2
    return cv2.copyMakeBorder(img, t, dh - t, l, dw - l, border), (t, l)


def _to_u8(rgb: np.ndarray) -> np.ndarray:
    """Float [0,1] -> uint8, using CUDA chunks when available to avoid 50MP CPU temp allocs."""
    try:
        import torch
        if torch.cuda.is_available():
            h, w = rgb.shape[:2]
            out = np.empty(rgb.shape, np.uint8)
            step = max(1, (1 << 22) // max(1, w))
            with torch.no_grad():
                for y0 in range(0, h, step):
                    y1 = min(y0 + step, h)
                    t = torch.from_numpy(np.ascontiguousarray(rgb[y0:y1], np.float32)).to("cuda")
                    out[y0:y1] = torch.clamp(t * 255.0 + 0.5, 0.0, 255.0).to(torch.uint8).cpu().numpy()
            return out
    except ImportError:
        pass
    return np.clip(rgb * 255.0 + 0.5, 0, 255).astype(np.uint8)


class StyleTrans:
    def __init__(self, backend, humanseg=None):
        self.be = backend
        self.humanseg = humanseg  # callable(rgb_u8 768x1024) -> mask u8 768x1024, or None

    def run_u8(self, rgb: np.ndarray, lux_index: float, cct: float) -> np.ndarray:
        """rgb: float [0,1] HxW (any orientation). Returns styled uint8 same size."""
        portrait = rgb.shape[0] > rgb.shape[1]
        x8 = _to_u8(rgb)
        # DNG/postprocess rotates sensor-landscape buffers 90 deg CW (EXIF Orientation=6) to upright
        # portrait; rotate 90 deg CCW (k=1) to match the unrotated sensor layout LegendST consumes.
        if portrait:
            x8 = cv2.rotate(x8, cv2.ROTATE_90_COUNTERCLOCKWISE)
        h0, w0 = x8.shape[:2]
        if h0 > H4K or w0 > W4K:                            # offline: fit the 12.5 MP M9 frame
            s = min(W4K / w0, H4K / h0)
            x8 = cv2.resize(x8, (int(w0 * s), int(h0 * s)), interpolation=cv2.INTER_AREA)
        h1, w1 = x8.shape[:2]
        big, (t, l) = _pad_center(x8, W4K, H4K, cv2.BORDER_REFLECT_101)

        small = cv2.resize(big, (NW, NH), interpolation=cv2.INTER_AREA)
        mask = self.humanseg(small) if self.humanseg else np.zeros((NH, NW), np.uint8)
        rgbp = cv2.copyMakeBorder(small, PAD, PAD, PAD, PAD, cv2.BORDER_REFLECT)
        mp = cv2.copyMakeBorder(mask, PAD, PAD, PAD, PAD, cv2.BORDER_CONSTANT, value=0)
        # graph input is UFIXED8 (scale 1/127.5, offset -128): raw pixels, the (x-128)/127.5
        # normalisation of the library lives in the quantisation parameters
        inp = np.concatenate([rgbp, mp[..., None]], -1)
        if not getattr(self.be, "accepts_u8", False):
            inp = inp.astype(np.float32)
        model = choose_model(lux_index, cct)
        out = self.be.run(model, inp[None])[0]              # 864x1120x3, 0..255
        styled = np.clip(out[PAD:PAD + NH, PAD:PAD + NW], 0, 255).astype(np.uint8)
        up = cv2.resize(styled, (W4K, H4K), interpolation=cv2.INTER_AREA)

        fixed = self._colorfix(big, up)
        res = fixed[t:t + h1, l:l + w1]
        if (h1, w1) != (h0, w0):
            res = cv2.resize(res, (w0, h0), interpolation=cv2.INTER_LINEAR)
        if portrait:
            res = cv2.rotate(res, cv2.ROTATE_90_CLOCKWISE)
        return res

    def __call__(self, rgb: np.ndarray, lux_index: float, cct: float) -> np.ndarray:
        """rgb: float [0,1] HxW (any orientation). Returns styled float [0,1] same size."""
        return self.run_u8(rgb, lux_index, cct).astype(np.float32) / 255.0

    def _colorfix(self, orig, styled):
        H, W = orig.shape[:2]
        if getattr(self.be, "device", "").startswith("cuda"):
            import torch
            import torch.nn.functional as F
            net = self.be._net("colorfix")
            with torch.no_grad():
                o = (torch.from_numpy(np.ascontiguousarray(orig)).to("cuda").float() - 128.0) / 127.5
                s = (torch.from_numpy(np.ascontiguousarray(styled)).to("cuda").float() - 128.0) / 127.5
                pair = torch.cat([s, o], dim=-1).permute(2, 0, 1).unsqueeze(0)  # (1, 6, H, W)
                pair = F.pad(pair, (MARGIN, MARGIN, MARGIN, MARGIN), value=-128.0 / 127.5)
                tiles, places = [], []
                for y in range(0, H, STEP):
                    for x in range(0, W, STEP):
                        tiles.append(pair[0, :, y:y + TILE, x:x + TILE])
                        places.append((y, x, min(STEP, H - y), min(STEP, W - x)))
                batch = torch.stack(tiles)
                outs = []
                for i in range(0, len(batch), 16):
                    with torch.amp.autocast("cuda", dtype=torch.float16):
                        y_out = net(batch[i:i + 16])
                    outs.append(y_out.float())
                res = torch.cat(outs, dim=0)
                canvas = torch.empty((3, H, W), device="cuda", dtype=torch.float32)
                for (y, x, h, w), r in zip(places, res):
                    canvas[:, y:y + h, x:x + w] = r[:, MARGIN:MARGIN + h, MARGIN:MARGIN + w]
                return torch.clamp(torch.round(canvas.permute(1, 2, 0) * 127.5 + 128.0), 0.0, 255.0).to(torch.uint8).cpu().numpy()
        out = np.zeros_like(orig)
        tiles, places = [], []
        for y in range(0, H, STEP):
            for x in range(0, W, STEP):
                ys, xs = max(y - MARGIN, 0), max(x - MARGIN, 0)
                ye, xe = min(y + STEP + MARGIN, H), min(x + STEP + MARGIN, W)
                oy, ox = MARGIN - (y - ys), MARGIN - (x - xs)
                t = np.zeros((TILE, TILE, 6), np.uint8)
                t[oy:oy + ye - ys, ox:ox + xe - xs, :3] = styled[ys:ye, xs:xe]
                t[oy:oy + ye - ys, ox:ox + xe - xs, 3:] = orig[ys:ye, xs:xe]
                tiles.append(t)
                places.append((y, x, min(STEP, H - y), min(STEP, W - x)))
        batch = np.stack(tiles)
        if getattr(self.be, "accepts_u8", False):
            res = self.be.run("colorfix", batch, as_u8=True)
        else:
            res = np.clip(self.be.run("colorfix", batch.astype(np.float32)), 0, 255).astype(np.uint8)
        for (y, x, h, w), r in zip(places, res):
            out[y:y + h, x:x + w] = r[MARGIN:MARGIN + h, MARGIN:MARGIN + w]
        return out


def load():
    """Return a StyleTrans instance if a backend is available, else None."""
    be = None
    if os.environ.get("M9_BACKEND", "torch") == "torch":
        try:
            from .torch_backend import TorchBackend
            be = TorchBackend.create()
        except ImportError:
            be = None
    if be is None and os.environ.get("M9_BACKEND") == "qnn":   # simulator: opt-in only (minutes/image)
        try:
            from .qnn_backend import QnnSimBackend
            be = QnnSimBackend.create()
        except Exception:  # noqa: BLE001 - backend optional
            be = None
    return StyleTrans(be) if be is not None else None
