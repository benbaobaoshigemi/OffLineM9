"""Ultra HDR gain map branch of the 17U Legend snapshot (legendsnapshot.json), reimplemented:

  AllinOne RGB16 -> B2Y "GainmapForRGB" -> GainMap (Y8) -> [LDC] -> [watermark] -> GainMapPostProc
  -> jpegrAggr (primary JPEG + gain map JPEG, Ultra HDR container; see m9/uhdr.py)

B2Y GainmapForRGB (com.xiaomi.plugin.offcamb2y, OfflineCamBase::updateMetaForGainMap 0x4bde4):
  same input and same AE as the main ForRGB frame, but tagged com.xiaomi.ultraHDR.linearFrame,
  which selects chromatix function 51 "UltraHdrLinearFrame": own gamma152 (raised black, more
  linear mids) and tmc202 (GTM 50%, LTM curve strength 0); cc15 / cv122 / tdl13 are the M9 ones.
  Digital gain ("regular algo", chiofflinesetting.json UltraHdr):
     dg = 0.3 (legendMode 1/2; 0.6 otherwise);  if luxIdx > normADRCLux(150) and
     adrc < normADRCKnee(1.33): dg *= adrc / 1.33 ;  ADRC kept ("Pre(adrc=...)").
GainMap plugin (com.xiaomi.plugin.gainmap): policy 2 = LinearYUV input, maxRGB = 1
  (DoProcessLinearYuvWithMaxRGB 0xc320), per pixel on the NV12 (BT.601 full-range offsets):
     dR = 1.402 Cr, dG = -0.344 Cb - 0.714 Cr, dB = 1.772 Cb   (integer: 359, -88, -183, 454 /256)
     g8 = clip(Y + (max(max(dR,dG,dB),0) + mean(dR,dG,dB)) / 2, 0, 255)  i.e. (max RGB + mean RGB)/2
  output size = ((W + s - 1) / s + 1) & ~1 with s = scaleFactor 2, sampled as adjacent pixel pairs.
  Metadata: version 1.0, gamma 1, offsets 0, min boost 1, max boost maxHdrBoost = 5.0.
GainMapPostProc (0x9e78): hl% = share of g8 >= 250; extra = 1.00 (hl% <= 8) .. 0.80 (hl% >= 20),
  linear in between; max boost = hdrCapacityMax = max(1, extra * 5.0 * residualGain(=1));
  gain map JPEG: grayscale, quality 98.
"""
from __future__ import annotations

import os
from dataclasses import dataclass

import numpy as np

from . import frontend, tuning

DG_LEGEND = 0.3
NORM_ADRC_KNEE = 1.33      # chiofflinesetting.json UltraHdr.normADRCKnee / 100
NORM_ADRC_LUX = 150.0      # UltraHdr.normADRCLux
SCALE = 2                  # persist.vendor.camera.gainmap.scaleFactor
MAX_BOOST = 5.0            # persist.vendor.camera.gainmap.maxHdrBoost / 100
HL_VAL, HL_ANC1, HL_G1, HL_ANC2, HL_G2 = 250, 8.0, 100.0, 20.0, 80.0   # gainmappp.*
JPEG_QUALITY = 98


@dataclass
class GainMap:
    image: np.ndarray        # uint8 HxW gain map (display orientation, same as the primary)
    max_boost: float         # = hdr capacity max
    min_boost: float = 1.0
    gamma: float = 1.0
    offset_sdr: float = 0.0
    offset_hdr: float = 0.0
    hdr_capacity_min: float = 1.0
    hl_pct: float = 0.0


def digital_gain(adrc: float, lux_index: float) -> float:
    dg = DG_LEGEND
    if lux_index > NORM_ADRC_LUX and adrc < NORM_ADRC_KNEE:
        dg *= adrc / NORM_ADRC_KNEE
    return dg


def linear_frame_yuv(fe: frontend.FrontEndResult, ev: float = 0.0):
    """B2Y GainmapForRGB: (Y, Cb, Cr) float, full range [0,1] / [-0.5,0.5]."""
    ae, li, k = fe.ae, fe.lux_index, fe.cct
    tag = frontend.CAMERAS[fe.camera][0]
    lin_tag = tag + "_lin" if tag + "_lin" in tuning.tables() else tag
    dg = digital_gain(ae.adrc_gain, li)
    gain = np.float32(ae.exp_short * 2.0 ** ev * dg)
    cond = dict(drc=ae.adrc_gain, lux=li, cct=k)
    ccm = frontend.cc_m9(fe.cam2srgb, li, k, ae.adrc_gain, fe.camera).T
    hue_tab, sat_tab = tuning.tdl_tables(tag, flag=0.0, **cond)
    cvp = tuning.cv_params(tag, flag=0.0, **cond)
    glut = tuning.gamma_lut(lin_tag, **cond)
    gtm = frontend.tmc_lut(ae.adrc_gain, li, tag=lin_tag)
    lin = fe.lin
    out = np.empty(lin.shape, np.float32)

    def strip(a, b):
        x = frontend.ltm_global(lin[a:b] * gain, ae.adrc_gain, gtm)
        x = np.clip(x @ ccm, 0, None)
        x = frontend.tdl_apply(x, hue_tab, sat_tab)
        x = frontend.gamma_apply(x, glut)
        y, cb, cr = frontend.cv_yuv(x, cvp)
        out[a:b, :, 0], out[a:b, :, 1], out[a:b, :, 2] = y, cb, cr

    from concurrent.futures import ThreadPoolExecutor
    n = os.cpu_count() or 4
    bd = np.linspace(0, lin.shape[0], 2 * n + 1).astype(int)
    with ThreadPoolExecutor(n) as ex:
        list(ex.map(lambda i: strip(bd[i], bd[i + 1]), range(2 * n)))
    return out, dg


def to_nv12(yuv: np.ndarray):
    """8-bit NV12 planes (Y full, Cb/Cr 2x2-averaged), BT.601 full range like the B2Y output."""
    h, w = yuv.shape[:2]
    h2, w2 = h - h % 2, w - w % 2
    y8 = np.clip(np.rint(yuv[..., 0] * 255.0), 0, 255).astype(np.uint8)
    c = yuv[:h2, :w2, 1:].reshape(h2 // 2, 2, w2 // 2, 2, 2).mean((1, 3))
    c8 = np.clip(np.rint(c * 255.0 + 128.0), 0, 255).astype(np.uint8)
    return y8, c8[..., 0], c8[..., 1]


def max_rgb(y8, cb8, cr8, scale: int = SCALE) -> np.ndarray:
    """GainMapPlugin::DoProcessLinearYuvWithMaxRGB, integer arithmetic as in the original."""
    H, W = y8.shape
    ow = ((W + scale - 1) // scale + 1) & ~1
    oh = ((H + scale - 1) // scale + 1) & ~1
    r = W // ow if ow else 1                                     # uVar5 = in_w / out_w
    rows = np.minimum(np.arange(oh) * r, H - 1)
    c0 = np.arange(0, ow, 2) * r                                 # pair start columns
    cols = np.stack([c0, c0 + 1], 1).reshape(-1)[:ow]
    cols = np.minimum(cols, W - 1)
    Y = y8[rows][:, cols].astype(np.int32)
    crow = np.minimum(rows // 2, cb8.shape[0] - 1)
    ccol = np.minimum(np.repeat(c0 // 2, 2)[:ow], cb8.shape[1] - 1)
    u = cb8[crow][:, ccol].astype(np.int32) - 128
    v = cr8[crow][:, ccol].astype(np.int32) - 128
    dR, dB, dG = v * 359, u * 454, u * -88 + v * -183
    m = np.maximum(np.maximum(dR, dG), dB)
    mx = np.where(m < 1, 0, m >> 8)
    s = (dR + dB + dG) >> 8
    t = (s * 0x5556) >> 16                                       # /3 (as int16 product, >> 16)
    t = t - (t >> 15)
    add = (mx + t) >> 1
    return np.clip(Y + add, 0, 255).astype(np.uint8)


def post_proc(g8: np.ndarray, residual_gain: float = 1.0) -> GainMap:
    hl = 100.0 * float((g8 >= HL_VAL).mean())
    if hl <= HL_ANC1:
        extra = HL_G1
    elif hl >= HL_ANC2:
        extra = HL_G2
    else:
        extra = (hl - HL_ANC1) / (HL_ANC2 - HL_ANC1) * (HL_G2 - HL_G1) + HL_G1
    boost = max(1.0, extra / 100.0 * MAX_BOOST * residual_gain)
    boost = int(boost * 100.0) / 100.0
    return GainMap(g8, boost, hl_pct=hl)


def make(fe: frontend.FrontEndResult, ev: float = 0.0) -> GainMap:
    yuv, _ = linear_frame_yuv(fe, ev)
    return post_proc(max_rgb(*to_nv12(yuv)))
