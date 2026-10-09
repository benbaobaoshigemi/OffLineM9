"""Fast StyleTrans backend: float PyTorch networks rebuilt from the weights decoded out of the
ROM context binaries (styletrans_net.py / colorfix_net.py, weights re/weights/*.npz).

Same I/O contract as QnnSimBackend: u8-domain pixels in, u8-domain pixels out. The graph I/O is
UFIXED8 scale 1/127.5 offset -128, so the net sees (x-128)/127.5 and its [-1,1] output is
re-quantised as round(y*127.5+128).
Config: M9_WEIGHTS (dir with low/high/colorfix.npz), M9_DEVICE (cuda/cpu).
"""
from __future__ import annotations

import os

import numpy as np

_HERE = os.path.dirname(os.path.abspath(__file__))
DEF_WEIGHTS = os.path.join(_HERE, "..", "re", "weights")


class TorchBackend:
    def __init__(self, wdir: str, device: str):
        self.wdir, self.device, self.nets = wdir, device, {}

    @classmethod
    def create(cls):
        import torch
        wdir = os.environ.get("M9_WEIGHTS", DEF_WEIGHTS)
        if not all(os.path.exists(os.path.join(wdir, f"{m}.npz")) for m in ("low", "high", "colorfix")):
            return None
        dev = os.environ.get("M9_DEVICE", "cuda" if torch.cuda.is_available() else "cpu")
        return cls(wdir, dev)

    def _net(self, model):
        if model not in self.nets:
            p = os.path.join(self.wdir, f"{model}.npz")
            if model == "colorfix":
                from .colorfix_net import ColorFixNet
                self.nets[model] = ColorFixNet(p, device=self.device)
            else:
                from .styletrans_net import StyleTransNet
                self.nets[model] = StyleTransNet(p, device=self.device)
        return self.nets[model]

    def run(self, model: str, x: np.ndarray) -> np.ndarray:
        import torch
        net = self._net(model)
        q = (np.clip(np.rint(x), 0, 255).astype(np.float32) - 128.0) / 127.5
        outs = []
        bs = 4 if model == "colorfix" else 1
        with torch.no_grad():
            for i in range(0, len(q), bs):
                t = torch.from_numpy(q[i:i + bs]).permute(0, 3, 1, 2).to(self.device)
                y = net(t) if model == "colorfix" else net(t[:, :3], t[:, 3:4])
                outs.append(y.permute(0, 2, 3, 1).cpu().numpy())
        y = np.concatenate(outs)
        return np.clip(np.rint(y * 127.5 + 128.0), 0, 255).astype(np.float32)
