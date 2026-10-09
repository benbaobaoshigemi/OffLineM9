"""Ultra HDR (JPEG_R, gain map v1.0) container writer, the role of com.xiaomi.plugin.jpegrAggr.

Layout (as libultrahdr): primary JPEG with APP1 XMP (hdrgm:Version + GContainer directory) and
APP2 ISO 21496-1 version, APP2 MPF (2 images), followed by the gain map JPEG carrying APP1 XMP with
the hdrgm metadata (log2 values) and APP2 ISO 21496-1 metadata (jpegrAggr writes it by default:
persist.vendor.camera.algoengine.jpegrAggr.iso21496_1 = 1; bytes match ROM libultrahdr). Gain recovery on an HDR display: L_hdr = (L_sdr + offset_sdr) *
max_boost^(g * weight) - offset_hdr  (min boost 1, gamma 1, offsets 0 for the 17U gain map).
"""
from __future__ import annotations

import math
import struct

import cv2
import numpy as np


ISO_NS = b"urn:iso:std:iso:ts:21496:-1\0"


def _u_frac(v: float, max_num: int = 0xFFFFFFFF):
    """libultrahdr floatToUnsignedFraction (continued fractions on the float32 value)."""
    v = float(np.float32(v))
    max_d = 0xFFFFFFFF if v <= 1 else math.floor(max_num / v)
    d, prev_d = 1, 0
    cur = v - math.floor(v)
    for _ in range(39):
        nd = d * v
        n = int(round(nd))
        if abs(nd - n) == 0.0:
            return n, d
        cur = 1.0 / cur
        new_d = prev_d + math.floor(cur) * d
        if new_d > max_d:
            return n, d
        prev_d, d = d, int(new_d)
        cur -= math.floor(cur)
    return n, d


def _s_frac(v: float):
    n, d = _u_frac(abs(v), 0x7FFFFFFF)
    return (-n if v < 0 else n), d


def iso21496(gm) -> bytes:
    """uhdr_gainmap_metadata_frac::gainmapMetadataFloatToFraction + encodeGainmapMetadata
    (single channel, use_base_colour_space). Byte-identical to the ROM libultrahdr."""
    l2 = lambda x: float(np.log2(np.float32(x)))
    base_hr = _u_frac(l2(gm.hdr_capacity_min))
    alt_hr = _u_frac(l2(gm.max_boost))
    ch = [_s_frac(l2(gm.min_boost)), _s_frac(l2(gm.max_boost)), _u_frac(gm.gamma),
          _s_frac(gm.offset_sdr), _s_frac(gm.offset_hdr)]
    fr = [base_hr, alt_hr] + ch
    flags = 0x40                                   # use base colour space
    common = len({d for _, d in fr}) == 1
    out = struct.pack(">HHB", 0, 0, flags | (0x08 if common else 0))
    signed = [False, False, True, True, False, True, True]
    if common:
        out += struct.pack(">I", fr[0][1])
        for (n, _), sg in zip(fr, signed):
            out += struct.pack(">i" if sg else ">I", n)
    else:
        for (n, d), sg in zip(fr, signed):
            out += struct.pack(">i" if sg else ">I", n) + struct.pack(">I", d)
    return out


_ICC_P3 = None
# linear sRGB (BT.709, D65) -> linear Display P3 (D65)
SRGB_TO_P3 = np.array([[0.822462, 0.177538, 0.000000],
                       [0.033194, 0.966806, 0.000000],
                       [0.017083, 0.072397, 0.910520]], np.float32)


def icc_p3() -> bytes:
    """Display P3 (sRGB transfer) ICC, as written by the ROM libultrahdr for UHDR_CG_DISPLAY_P3."""
    global _ICC_P3
    if _ICC_P3 is None:
        import os
        _ICC_P3 = open(os.path.join(os.path.dirname(__file__), "assets", "display_p3.icc"), "rb").read()
    return _ICC_P3


def srgb_to_p3(rgb: np.ndarray) -> np.ndarray:
    """Re-encode display sRGB values as Display P3 (same colours, sRGB transfer curve)."""
    x = np.clip(rgb, 0, 1).astype(np.float32)
    lin = np.where(x <= 0.04045, x / 12.92, ((x + 0.055) / 1.055) ** 2.4)
    lin = np.clip(lin @ SRGB_TO_P3.T, 0, 1)
    return np.where(lin <= 0.0031308, lin * 12.92, 1.055 * lin ** (1 / 2.4) - 0.055)


def encode_p3_jpeg(rgb: np.ndarray, quality: int) -> bytes:
    """sRGB float image -> Display P3 JPEG bytes with the ICC profile embedded (APP2)."""
    u8 = (srgb_to_p3(rgb) * 255.0 + 0.5).astype(np.uint8)
    ok, j = cv2.imencode(".jpg", u8[..., ::-1], [cv2.IMWRITE_JPEG_QUALITY, quality])
    if not ok:
        raise RuntimeError("JPEG encode failed")
    j = j.tobytes()
    return j[:2] + _seg(0xFFE2, b"ICC_PROFILE\0\x01\x01" + icc_p3()) + j[2:]


def _seg(marker: int, payload: bytes) -> bytes:
    return struct.pack(">HH", marker, len(payload) + 2) + payload


def _xmp_primary(gainmap_len: int) -> bytes:
    x = ('<x:xmpmeta xmlns:x="adobe:ns:meta/" x:xmptk="OffLineM9">'
         '<rdf:RDF xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#">'
         '<rdf:Description xmlns:Container="http://ns.google.com/photos/1.0/container/" '
         'xmlns:Item="http://ns.google.com/photos/1.0/container/item/" '
         'xmlns:hdrgm="http://ns.adobe.com/hdr-gain-map/1.0/" hdrgm:Version="1.0">'
         '<Container:Directory><rdf:Seq>'
         '<rdf:li rdf:parseType="Resource"><Container:Item Item:Semantic="Primary" Item:Mime="image/jpeg"/></rdf:li>'
         f'<rdf:li rdf:parseType="Resource"><Container:Item Item:Semantic="GainMap" Item:Mime="image/jpeg" Item:Length="{gainmap_len}"/></rdf:li>'
         '</rdf:Seq></Container:Directory></rdf:Description></rdf:RDF></x:xmpmeta>')
    return b"http://ns.adobe.com/xap/1.0/\0" + x.encode()


def _xmp_gainmap(gm) -> bytes:
    l2 = math.log2
    x = ('<x:xmpmeta xmlns:x="adobe:ns:meta/" x:xmptk="OffLineM9">'
         '<rdf:RDF xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#">'
         '<rdf:Description xmlns:hdrgm="http://ns.adobe.com/hdr-gain-map/1.0/" hdrgm:Version="1.0" '
         f'hdrgm:GainMapMin="{l2(gm.min_boost):g}" hdrgm:GainMapMax="{l2(gm.max_boost):g}" '
         f'hdrgm:Gamma="{gm.gamma:g}" hdrgm:OffsetSDR="{gm.offset_sdr:g}" '
         f'hdrgm:OffsetHDR="{gm.offset_hdr:g}" hdrgm:HDRCapacityMin="{l2(gm.hdr_capacity_min):g}" '
         f'hdrgm:HDRCapacityMax="{l2(gm.max_boost):g}" hdrgm:BaseRenditionIsHDR="False"/>'
         '</rdf:RDF></x:xmpmeta>')
    return b"http://ns.adobe.com/xap/1.0/\0" + x.encode()


def _mpf(primary_size: int, gainmap_size: int, gainmap_offset: int) -> bytes:
    """APP2 MPF payload (big endian, as libultrahdr generateMpf)."""
    tiff = b"MM\0\x2a" + struct.pack(">I", 8)
    n_tags = 3
    ifd_size = 2 + n_tags * 12 + 4
    entries_off = 8 + ifd_size
    ifd = struct.pack(">H", n_tags)
    ifd += struct.pack(">HHI4s", 0xB000, 7, 4, b"0100")
    ifd += struct.pack(">HHII", 0xB001, 4, 1, 2)
    ifd += struct.pack(">HHII", 0xB002, 7, 32, entries_off)
    ifd += struct.pack(">I", 0)
    ent = struct.pack(">IIIHH", 0x030000, primary_size, 0, 0, 0)
    ent += struct.pack(">IIIHH", 0x000000, gainmap_size, gainmap_offset, 0, 0)
    return b"MPF\0" + tiff + ifd + ent


def write(path: str, sdr_rgb: np.ndarray, gm, quality: int = 95, gm_quality: int = 98):
    """sdr_rgb: float [0,1] display sRGB (primary, stored as Display P3 + ICC); gm: m9.gainmap.GainMap."""
    prim = encode_p3_jpeg(sdr_rgb, quality)
    ok2, gmj = cv2.imencode(".jpg", gm.image, [cv2.IMWRITE_JPEG_QUALITY, gm_quality])
    if not ok2:
        raise RuntimeError("JPEG encode failed")
    gmj = gmj.tobytes()
    gm_full = gmj[:2] + _seg(0xFFE1, _xmp_gainmap(gm)) + _seg(0xFFE2, ISO_NS + iso21496(gm)) + gmj[2:]
    xmp = _seg(0xFFE1, _xmp_primary(len(gm_full))) + _seg(0xFFE2, ISO_NS + struct.pack(">HH", 0, 0))
    mpf_len = len(_seg(0xFFE2, _mpf(0, 0, 0)))
    head = prim[:2] + xmp
    primary_size = len(head) + mpf_len + len(prim) - 2
    mpf_tiff_pos = len(head) + 4 + 4                 # marker+len, "MPF\0" -> TIFF header
    mpf = _seg(0xFFE2, _mpf(primary_size, len(gm_full), primary_size - mpf_tiff_pos))
    data = head + mpf + prim[2:] + gm_full
    with open(path, "wb") as f:
        f.write(data)
    return len(data)
