"""Ultra HDR (JPEG_R, gain map v1.0) container writer, the role of com.xiaomi.plugin.jpegrAggr.

Layout (as libultrahdr): primary JPEG with APP1 XMP (hdrgm:Version + GContainer directory) and
APP2 MPF (2 images), followed by the gain map JPEG carrying APP1 XMP with the hdrgm metadata
(log2 values). Gain recovery on an HDR display: L_hdr = (L_sdr + offset_sdr) *
max_boost^(g * weight) - offset_hdr  (min boost 1, gamma 1, offsets 0 for the 17U gain map).
"""
from __future__ import annotations

import math
import struct

import cv2
import numpy as np


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
         f'hdrgm:GainMapMin="{l2(gm.min_boost):.6f}" hdrgm:GainMapMax="{l2(gm.max_boost):.6f}" '
         f'hdrgm:Gamma="{gm.gamma:.6f}" hdrgm:OffsetSDR="{gm.offset_sdr:.6f}" '
         f'hdrgm:OffsetHDR="{gm.offset_hdr:.6f}" hdrgm:HDRCapacityMin="{l2(gm.hdr_capacity_min):.6f}" '
         f'hdrgm:HDRCapacityMax="{l2(gm.max_boost):.6f}" hdrgm:BaseRenditionIsHDR="False"/>'
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
    """sdr_rgb: float [0,1] display RGB (primary); gm: m9.gainmap.GainMap."""
    u8 = (np.clip(sdr_rgb, 0, 1) * 255.0 + 0.5).astype(np.uint8)
    ok, prim = cv2.imencode(".jpg", u8[..., ::-1], [cv2.IMWRITE_JPEG_QUALITY, quality])
    ok2, gmj = cv2.imencode(".jpg", gm.image, [cv2.IMWRITE_JPEG_QUALITY, gm_quality])
    if not (ok and ok2):
        raise RuntimeError("JPEG encode failed")
    prim, gmj = prim.tobytes(), gmj.tobytes()
    gm_full = gmj[:2] + _seg(0xFFE1, _xmp_gainmap(gm)) + gmj[2:]
    xmp = _seg(0xFFE1, _xmp_primary(len(gm_full)))
    mpf_len = len(_seg(0xFFE2, _mpf(0, 0, 0)))
    head = prim[:2] + xmp
    primary_size = len(head) + mpf_len + len(prim) - 2
    mpf_tiff_pos = len(head) + 4 + 4                 # marker+len, "MPF\0" -> TIFF header
    mpf = _seg(0xFFE2, _mpf(primary_size, len(gm_full), primary_size - mpf_tiff_pos))
    data = head + mpf + prim[2:] + gm_full
    with open(path, "wb") as f:
        f.write(data)
    return len(data)
