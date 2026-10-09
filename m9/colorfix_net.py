"""PyTorch colorfix U-Net from weights exported by styletrans_export.export_unet.

layer1: conv3x3(6->32, input padded to 8) ReLU, conv3x3 32->32 ReLU         (544)
layer2..5: maxpool2 + 2x conv3x3 ReLU  (64,128,256,512)
layer6..9: up = 2x2/stride-2 transposed conv (1x1 conv to 4 phases + depth-to-space),
           cat(skip, up) (address-verified encodings; up = DCR depth-to-space, read from x2s fast path 0x14F5210), 2x conv3x3 ReLU
layer10 1x1 32->16, layer11 3x3 16->8, layer12 3x3 8->3 (output in [-1,1])
All conv outputs are clamped to their u16 encoding range (as on the HTP).
"""
import numpy as np
import torch
import torch.nn.functional as Fn


class ColorFixNet(torch.nn.Module):
    def __init__(self, npz, cat_up_first=False, phase="dcr", device="cpu"):
        super().__init__()
        z = np.load(npz)
        self.p = {}
        for n in sorted({k.split("/")[0] for k in z.files}):
            s, zp = float(z[n + "/s_out"]), float(z[n + "/zp_out"])
            self.p[n] = (torch.tensor(z[n + "/W"], device=device), torch.tensor(z[n + "/b"], device=device),
                         (0 - zp) * s, (65535 - zp) * s)
        self.cat_up_first, self.phase, self.stats = cat_up_first, phase, None

    def conv(self, n, x):
        W, b, lo, hi = self.p[n]
        y = Fn.conv2d(x, W, b, padding=W.shape[-1] // 2)
        if self.stats is not None:
            self.stats[n] = (float(y.min()), float(y.max()), lo, hi)
        return y.clamp(lo, hi)

    def up(self, n, x):
        y = self.conv(n, x)                      # (N, 4C, h, w)
        N, C4, h, w = y.shape
        C = C4 // 4
        if self.phase == "dcr":                  # channel = (a*2+b)*C + c
            y = y.view(N, 2, 2, C, h, w).permute(0, 3, 4, 1, 5, 2)
        elif self.phase == "dcr_t":              # channel = (b*2+a)*C + c
            y = y.view(N, 2, 2, C, h, w).permute(0, 3, 4, 2, 5, 1)
        elif self.phase == "crd":                # channel = c*4 + a*2 + b
            y = y.view(N, C, 2, 2, h, w).permute(0, 1, 4, 2, 5, 3)
        else:                                    # crd_t: channel = c*4 + b*2 + a
            y = y.view(N, C, 2, 2, h, w).permute(0, 1, 4, 3, 5, 2)
        return y.reshape(N, C, 2 * h, 2 * w)

    def forward(self, x6):
        """x6: (N,6,544,544) in [-1,1]."""
        x = Fn.pad(x6, (0, 0, 0, 0, 0, 2))
        s1 = self.conv("layer1_net_3", self.conv("layer1_net_0", x))
        skips, h = [s1], s1
        for L in (2, 3, 4, 5):
            h = Fn.max_pool2d(h, 2)
            h = self.conv(f"layer{L}_net_1_net_3", self.conv(f"layer{L}_net_1_net_0", h))
            skips.append(h)
        for L, sk in zip((6, 7, 8, 9), skips[3::-1]):
            u = self.up(f"layer{L}_upsample", h)
            h = torch.cat([u, sk] if self.cat_up_first else [sk, u], 1)
            h = self.conv(f"layer{L}_conv_net_3", self.conv(f"layer{L}_conv_net_0", h))
        return self.conv("layer12", self.conv("layer11", self.conv("layer10", h)))
