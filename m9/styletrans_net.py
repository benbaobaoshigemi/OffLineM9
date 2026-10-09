"""PyTorch StyleTrans network built from weights exported by styletrans_export.py.

Topology recovered from the HTP graph (names = ONNX node names, see HANDOFF.md section 4):
  head : rgb -> pixel_unshuffle(4) (48ch), mask -> AvgPool4 (1ch), cat -> pad 64 -> conv_first 3x3
  body_i (x20):
     r1 = RDB1(x);  c1 = conv1(cat(x, r1))              (order per `cat_order`)
     r2 = RDB2(c1); c2 = conv2(cat(x, r1, r2))
     r3 = RDB3(c2); out = fixed(cat(r3, x))            fixed = 0.2*r3 + 1.0*x
  RDB(x): A,B = halves of x (Slice_2 / Slice_3)
     chain on `chain_half` : 4 x (3x3 32->32, ReLU) + 3x3 conv
     f   = fixed(cat(chain, A))                         = 0.2*chain + A
     out = conv_out(cat(B, f))                           1x1 64->64
  tail : conv_body 3x3 ; fixed_conv_conv(cat(conv_body, feat)) = sum ; tail_conv_0 1x1 64->32 ;
         up x2 (nearest, identity conv + replicated-block depth-to-space) ; tail_conv_1 3x3 ;
         up x2 ; tail_conv_2 3x3 ; tail_conv_last 3x3 -> 3ch (in [-1,1])
Every conv output is clamped to its u16 encoding range [(0-zp)s, (65535-zp)s]: this is what the
HTP does (and is how ReLU appears: zp_out = 0).
"""
import numpy as np
import torch
import torch.nn.functional as Fn


class StyleTransNet(torch.nn.Module):
    def __init__(self, npz, chain_half="A", cat_order=((0, 1), (0, 1, 2)), clamp=True, device="cpu", dtype=torch.float32):
        super().__init__()
        z = np.load(npz)
        self.p = {}
        names = sorted({k.split("/")[0] for k in z.files})
        for n in names:
            if n + "/W" not in z.files:
                continue
            W = torch.tensor(z[n + "/W"], dtype=dtype, device=device)
            b = torch.tensor(z[n + "/b"], dtype=dtype, device=device)
            s, zp = float(z[n + "/s_out"]), float(z[n + "/zp_out"])
            self.p[n] = (W, b, (0 - zp) * s, (65535 - zp) * s)
        self.up_gain = {"tail_up1_conv_transpose": float(self._up_gain(z, "tail_up1_conv_transpose")),
                        "tail_up2_conv_transpose": float(self._up_gain(z, "tail_up2_conv_transpose"))}
        self.chain_half = chain_half
        self.cat_order = cat_order
        self.clamp = clamp
        self.stats = None

    @staticmethod
    def _up_gain(z, n):
        return float(z[n + "/gain"][0]) if n + "/gain" in z.files else 1.0

    def conv(self, n, x):
        W, b, lo, hi = self.p[n]
        y = Fn.conv2d(x, W, b, padding=W.shape[-1] // 2)
        if self.stats is not None:
            self.stats[n] = (float(y.min()), float(y.max()), lo, hi)
        return y.clamp(lo, hi) if self.clamp else y

    def rdb(self, pre, x):
        A, B = x[:, :32], x[:, 32:]
        h = A if self.chain_half == "A" else B
        for k in ("block1_conv1", "block1_conv2", "block2_conv1", "block2_conv2", "conv"):
            h = self.conv(f"{pre}_{k}", h)
        f = self.conv(f"{pre}_fixed_conv_conv", torch.cat([h, A], 1))
        return self.conv(f"{pre}_conv_out", torch.cat([B, f], 1))

    def body(self, i, x):
        p = f"body_{i}"
        r1 = self.rdb(p + "_rdb1", x)
        o1, o2 = self.cat_order
        c1 = self.conv(p + "_conv1", torch.cat([(x, r1)[k] for k in o1], 1))
        r2 = self.rdb(p + "_rdb2", c1)
        c2 = self.conv(p + "_conv2", torch.cat([(x, r1, r2)[k] for k in o2], 1))
        r3 = self.rdb(p + "_rdb3", c2)
        return self.conv(p + "_fixed_conv_conv", torch.cat([r3, x], 1))

    def up(self, n, x):
        return Fn.interpolate(x, scale_factor=2, mode="nearest") * self.up_gain[n]

    def forward(self, rgb, mask):
        """rgb: (N,3,H,W) in [-1,1]; mask: (N,1,H,W) in [-1,1]. Returns (N,3,H,W) in [-1,1]."""
        x = torch.cat([Fn.pixel_unshuffle(rgb, 4), Fn.avg_pool2d(mask, 4)], 1)
        x = Fn.pad(x, (0, 0, 0, 0, 0, 64 - x.shape[1]))
        feat = self.conv("conv_first", x)
        h = feat
        for i in range(20):
            h = self.body(i, h)
        h = self.conv("conv_body", h)
        h = self.conv("fixed_conv_conv", torch.cat([h, feat], 1))
        h = self.conv("tail_conv_0", h)
        h = self.up("tail_up1_conv_transpose", h)
        h = self.conv("tail_conv_1", h)
        h = self.up("tail_up2_conv_transpose", h)
        h = self.conv("tail_conv_2", h)
        return self.conv("tail_conv_last", h)[:, :3]
