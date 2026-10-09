; function 0x17c6ad0 size 0x628 _ZN2fa16RuntimeAllocator18deserialize_blocksERN4hnnx6DeserzEPPKvm
017c6ad0  sub      sp, sp, #0xf0
017c6ad4  stp      x29, x30, [sp, #0x90]
017c6ad8  stp      x28, x27, [sp, #0xa0]
017c6adc  stp      x26, x25, [sp, #0xb0]
017c6ae0  stp      x24, x23, [sp, #0xc0]
017c6ae4  stp      x22, x21, [sp, #0xd0]
017c6ae8  stp      x20, x19, [sp, #0xe0]
017c6aec  mov      x19, x3
017c6af0  cbz      w19, #0x17c70a0
017c6af4  add      x8, x0, #0x78
017c6af8  add      x9, x2, #0x18
017c6afc  mov      x20, x2
017c6b00  mov      x21, x1
017c6b04  mov      x27, x0
017c6b08  mov      x25, xzr
017c6b0c  stp      x0, x8, [sp, #0x40]
017c6b10  add      x8, x2, #8
017c6b14  mov      x23, xzr
017c6b18  mov      w28, wzr
017c6b1c  mov      w29, #2
017c6b20  stp      x9, x8, [sp]
017c6b24  adrp     x8, #0x575000
017c6b28  add      x8, x8, #0xb16  ; "%s:919:ERROR:bad encoding
"
017c6b2c  mov      w9, #0xff0
017c6b30  str      x8, [sp, #0x38]
017c6b34  mov      w8, #0x7ff800
017c6b38  dup      v0.4s, w9
017c6b3c  dup      v1.4s, w8
017c6b40  stp      q0, q1, [sp, #0x10]
017c6b44  b        #0x17c6b60
017c6b48  add      w8, w28, #1
017c6b4c  mov      x25, xzr
017c6b50  str      xzr, [x20, w28, uxtw #3]
017c6b54  mov      w28, w8
017c6b58  cmp      w28, w19
017c6b5c  b.hs     #0x17c70a0
017c6b60  ldp      x0, x8, [x21, #0x60]
017c6b64  cmp      x0, x8
017c6b68  b.lo     #0x17c6b7c
017c6b6c  ldr      x8, [x21]
017c6b70  mov      x0, x21
017c6b74  ldr      x8, [x8, #0x10]  ; =0x575010
017c6b78  blr      x8
017c6b7c  ldr      w26, [x0], #4
017c6b80  str      x0, [x21, #0x60]
017c6b84  tbnz     w26, #0, #0x17c6bb0
017c6b88  cbz      x25, #0x17c7080
017c6b8c  ldr      x8, [x25, #0x10]
017c6b90  cmp      x8, x26
017c6b94  b.ls     #0x17c7080
017c6b98  ldr      x8, [x25]
017c6b9c  add      w9, w28, #1
017c6ba0  add      x23, x8, x26
017c6ba4  str      x23, [x20, w28, uxtw #3]
017c6ba8  mov      w28, w9
017c6bac  b        #0x17c6b58
017c6bb0  tbnz     w26, #1, #0x17c6c10
017c6bb4  lsl      w8, w26, #6
017c6bb8  ubfx     x3, x26, #0x16, #0xa
017c6bbc  and      w22, w8, #0xfffff00
017c6bc0  cbnz     w3, #0x17c6e78
017c6bc4  cbz      w22, #0x17c6b48
017c6bc8  sub      w9, w19, w28
017c6bcc  lsr      w8, w22, #8
017c6bd0  cmp      w9, #0xff
017c6bd4  mov      w10, #0xff
017c6bd8  csel     w9, w9, w10, lo
017c6bdc  cmp      w8, w9
017c6be0  b.hi     #0x17c70e4
017c6be4  add      w8, w28, w8
017c6be8  str      x29, [x20, w28, uxtw #3]
017c6bec  sub      w8, w8, #1
017c6bf0  cmp      w28, w8
017c6bf4  b.hs     #0x17c6f50
017c6bf8  mov      w12, w28
017c6bfc  sub      x10, x8, x12
017c6c00  cmp      x10, #4
017c6c04  b.hs     #0x17c6f04
017c6c08  mov      x9, x12
017c6c0c  b        #0x17c6f34
017c6c10  tbnz     w26, #2, #0x17c6cbc
017c6c14  ldr      x8, [x21, #0x68]
017c6c18  cmp      x0, x8
017c6c1c  b.lo     #0x17c6c30
017c6c20  ldr      x8, [x21]
017c6c24  mov      x0, x21
017c6c28  ldr      x8, [x8, #0x10]  ; =0x575010
017c6c2c  blr      x8
017c6c30  ldr      w22, [x0], #4
017c6c34  cmp      w26, #7
017c6c38  str      x0, [x21, #0x60]
017c6c3c  b.hi     #0x17c6e74
017c6c40  sub      w8, w19, w28
017c6c44  mov      w9, #0xff
017c6c48  cmp      w8, #0xff
017c6c4c  csel     w9, w8, w9, lo
017c6c50  cmp      w22, #0x30, lsl #12
017c6c54  b.lo     #0x17c708c
017c6c58  lsr      w8, w22, #0x10
017c6c5c  cmp      w8, w9
017c6c60  b.hi     #0x17c708c
017c6c64  tst      w22, #0x3f
017c6c68  b.ne     #0x17c708c
017c6c6c  cbz      x25, #0x17c708c
017c6c70  sxth     w9, w22
017c6c74  ldr      x10, [x25]
017c6c78  mul      w11, w9, w8
017c6c7c  sub      x10, x23, x10
017c6c80  adds     x10, x10, w11, sxtw
017c6c84  b.mi     #0x17c70d8
017c6c88  ldr      x11, [x25, #0x10]
017c6c8c  cmp      x10, x11
017c6c90  b.hs     #0x17c70d8
017c6c94  cmp      w8, #1
017c6c98  sxtw     x9, w9
017c6c9c  csinc    w8, w8, wzr, hi
017c6ca0  mov      w10, w28
017c6ca4  add      x23, x23, x9
017c6ca8  add      w28, w28, #1
017c6cac  subs     w8, w8, #1
017c6cb0  str      x23, [x20, w10, uxtw #3]
017c6cb4  b.ne     #0x17c6ca0
017c6cb8  b        #0x17c6b58
017c6cbc  tbnz     w26, #3, #0x17c70cc
017c6cc0  ldr      x8, [sp, #0x48]
017c6cc4  ubfx     x9, x26, #9, #0x17
017c6cc8  add      x24, x20, w28, uxtw #3
017c6ccc  and      w9, w9, #0x7ff800
017c6cd0  ubfx     w27, w26, #4, #4
017c6cd4  add      x22, x24, #0x10
017c6cd8  ldr      x25, [x8]
017c6cdc  lsl      w8, w26, #3
017c6ce0  and      x8, x8, #0x7ff800
017c6ce4  ldr      x29, [x25]
017c6ce8  add      x8, x29, x8
017c6cec  add      x23, x29, x9
017c6cf0  stp      x8, x23, [x24]
017c6cf4  cbz      w27, #0x17c6efc
017c6cf8  add      x1, sp, #0x54
017c6cfc  mov      x0, x21
017c6d00  mov      x2, x27
017c6d04  add      x26, sp, #0x54
017c6d08  bl       #0x2f162e0  ; <_ZN4hnnx6Deserz22deserialize_uint32_arrEPjm>
017c6d0c  subs     w9, w27, #3
017c6d10  b.lo     #0x17c6ffc
017c6d14  ldp      q30, q29, [sp, #0x10]
017c6d18  movi     v28.4s, #0xf, lsl #8
017c6d1c  add      x8, sp, #0x54
017c6d20  cmp      w9, #9
017c6d24  b.lo     #0x17c6f64
017c6d28  mov      w10, #0xaaab
017c6d2c  mov      w12, #0xc
017c6d30  movk     w10, #0xaaaa, lsl #16
017c6d34  umull    x9, w9, w10
017c6d38  lsr      x9, x9, #0x21
017c6d3c  add      w10, w9, #1
017c6d40  and      x11, x10, #0x7ffffffc
017c6d44  umaddl   x26, w11, w12, x8
017c6d48  sub      w12, w11, w11, lsl #2
017c6d4c  add      x9, x22, x11, lsl #6
017c6d50  add      w27, w27, w12
017c6d54  mov      x12, x11
017c6d58  ld3      {v3.4s, v4.4s, v5.4s}, [x8], #48
017c6d5c  shl      v16.4s, v4.4s, #8
017c6d60  ushr     v17.4s, v3.4s, #0x18
017c6d64  shl      v0.4s, v3.4s, #0xb
017c6d68  shl      v19.4s, v5.4s, #4
017c6d6c  and      v16.16b, v16.16b, v28.16b
017c6d70  ushr     v1.4s, v3.4s, #1
017c6d74  orr      v16.16b, v16.16b, v17.16b
017c6d78  subs     x12, x12, #4
017c6d7c  shl      v17.4s, v4.4s, #7
017c6d80  shl      v22.4s, v5.4s, #3
017c6d84  ushr     v3.4s, v5.4s, #9
017c6d88  and      v6.16b, v0.16b, v29.16b
017c6d8c  dup      v0.2d, x29
017c6d90  shl      v16.4s, v16.4s, #0xb
017c6d94  and      v19.16b, v19.16b, v30.16b
017c6d98  ushr     v20.4s, v4.4s, #5
017c6d9c  and      v1.16b, v1.16b, v29.16b
017c6da0  and      v17.16b, v17.16b, v29.16b
017c6da4  usra     v19.4s, v4.4s, #0x1c
017c6da8  and      v22.16b, v22.16b, v29.16b
017c6dac  and      v3.16b, v3.16b, v29.16b
017c6db0  uaddw2   v2.2d, v0.2d, v6.4s
017c6db4  uaddw2   v7.2d, v0.2d, v1.4s
017c6db8  uaddw2   v18.2d, v0.2d, v16.4s
017c6dbc  uaddw2   v4.2d, v0.2d, v22.4s
017c6dc0  uaddw2   v5.2d, v0.2d, v3.4s
017c6dc4  uaddw2   v24.2d, v0.2d, v17.4s
017c6dc8  shl      v19.4s, v19.4s, #0xb
017c6dcc  and      v20.16b, v20.16b, v29.16b
017c6dd0  zip2     v26.2d, v4.2d, v5.2d
017c6dd4  zip1     v4.2d, v4.2d, v5.2d
017c6dd8  zip2     v5.2d, v2.2d, v7.2d
017c6ddc  zip2     v27.2d, v18.2d, v24.2d
017c6de0  uaddw2   v21.2d, v0.2d, v20.4s
017c6de4  uaddw2   v23.2d, v0.2d, v19.4s
017c6de8  zip1     v2.2d, v2.2d, v7.2d
017c6dec  stp      q5, q27, [x22, #0xc0]
017c6df0  zip2     v25.2d, v21.2d, v23.2d
017c6df4  zip1     v21.2d, v21.2d, v23.2d
017c6df8  zip1     v5.2d, v18.2d, v24.2d
017c6dfc  uaddw    v6.2d, v0.2d, v6.2s
017c6e00  uaddw    v1.2d, v0.2d, v1.2s
017c6e04  stp      q25, q26, [x22, #0xe0]
017c6e08  stp      q21, q4, [x22, #0xa0]
017c6e0c  uaddw    v4.2d, v0.2d, v16.2s
017c6e10  stp      q2, q5, [x22, #0x80]
017c6e14  uaddw    v7.2d, v0.2d, v20.2s
017c6e18  uaddw    v2.2d, v0.2d, v22.2s
017c6e1c  uaddw    v5.2d, v0.2d, v3.2s
017c6e20  uaddw    v16.2d, v0.2d, v19.2s
017c6e24  uaddw    v0.2d, v0.2d, v17.2s
017c6e28  zip2     v17.2d, v2.2d, v5.2d
017c6e2c  zip2     v18.2d, v7.2d, v16.2d
017c6e30  zip2     v19.2d, v6.2d, v1.2d
017c6e34  zip2     v20.2d, v4.2d, v0.2d
017c6e38  zip1     v2.2d, v2.2d, v5.2d
017c6e3c  zip1     v5.2d, v7.2d, v16.2d
017c6e40  stp      q18, q17, [x22, #0x60]
017c6e44  zip1     v1.2d, v6.2d, v1.2d
017c6e48  zip1     v0.2d, v4.2d, v0.2d
017c6e4c  stp      q19, q20, [x22, #0x40]
017c6e50  stp      q5, q2, [x22, #0x20]
017c6e54  stp      q1, q0, [x22], #0x100
017c6e58  b.ne     #0x17c6d58
017c6e5c  cmp      x11, x10
017c6e60  b.ne     #0x17c6f5c
017c6e64  mov      w10, v3.s[3]
017c6e68  cbnz     w27, #0x17c6ff8
017c6e6c  add      x23, x29, w10, uxtw
017c6e70  b        #0x17c7064
017c6e74  ubfx     x3, x26, #3, #0x1d
017c6e78  ldp      x23, x8, [x27, #0x78]
017c6e7c  mov      x9, #-0x3333333333333334
017c6e80  sub      w24, w3, #1
017c6e84  movk     x9, #0xcccd
017c6e88  sub      x8, x8, x23
017c6e8c  asr      x8, x8, #3
017c6e90  mul      x8, x8, x9
017c6e94  cmp      x8, x24
017c6e98  b.ls     #0x17c70f0
017c6e9c  mov      w8, #0x28
017c6ea0  mov      w9, #0x12
017c6ea4  umaddl   x25, w24, w8, x23
017c6ea8  ldrh     w8, [x25, #0x1e]
017c6eac  bics     wzr, w9, w8
017c6eb0  b.ne     #0x17c6ecc
017c6eb4  mov      w0, wzr
017c6eb8  adrp     x1, #0x554000
017c6ebc  add      x1, x1, #0xa26  ; "%s:960:ERROR:unexpected reference to pool_id %u with far contents!
"
017c6ec0  adrp     x2, #0x554000
017c6ec4  add      x2, x2, #0x9ed  ; "runtime_alloc.cc"
017c6ec8  bl       #0x2f15ff0  ; <qnndsp_log>
017c6ecc  mov      w8, #0x28
017c6ed0  umaddl   x8, w24, w8, x23
017c6ed4  ldr      x9, [x8, #0x10]  ; =0x575010
017c6ed8  mov      w8, w22
017c6edc  cmp      x9, x8
017c6ee0  b.ls     #0x17c70c0
017c6ee4  ldr      x9, [x25]
017c6ee8  add      w10, w28, #1
017c6eec  add      x23, x9, x8
017c6ef0  str      x23, [x20, w28, uxtw #3]
017c6ef4  mov      w28, w10
017c6ef8  b        #0x17c6b58
017c6efc  ldr      x27, [sp, #0x40]
017c6f00  b        #0x17c706c
017c6f04  ldr      x13, [sp]
017c6f08  and      x11, x10, #0xfffffffffffffffc
017c6f0c  add      x9, x11, x12
017c6f10  add      x12, x13, x12, lsl #3
017c6f14  mov      x13, x11
017c6f18  dup      v0.2d, x29
017c6f1c  subs     x13, x13, #4
017c6f20  stp      q0, q0, [x12, #-0x10]
017c6f24  add      x12, x12, #0x20
017c6f28  b.ne     #0x17c6f18
017c6f2c  cmp      x10, x11
017c6f30  b.eq     #0x17c6f4c
017c6f34  ldr      x11, [sp, #8]
017c6f38  sub      x10, x9, x8
017c6f3c  add      x9, x11, x9, lsl #3
017c6f40  adds     x10, x10, #1
017c6f44  str      x29, [x9], #8
017c6f48  b.lo     #0x17c6f40
017c6f4c  mov      w28, w8
017c6f50  mov      x25, xzr
017c6f54  add      w28, w28, #1
017c6f58  b        #0x17c6b58
017c6f5c  mov      x22, x9
017c6f60  mov      x8, x26
017c6f64  ldp      w10, w9, [x8]
017c6f68  ldr      w11, [x8, #8]  ; =0x575008
017c6f6c  add      x8, x8, #0xc  ; "ing input and output constraints for TopK with input datayptes = [[<QnnDatatype.QNN_DATATYPE_UFIXED_POINT_8: 15>]] and o"
017c6f70  sub      w27, w27, #3
017c6f74  cmp      w27, #2
017c6f78  lsr      x15, x10, #1
017c6f7c  lsr      x16, x10, #0x18
017c6f80  and      x15, x15, #0x7ff800
017c6f84  lsl      w12, w9, #7
017c6f88  ubfiz    x10, x10, #0xb, #0xc
017c6f8c  lsr      x13, x9, #5
017c6f90  lsr      x14, x9, #0x1c
017c6f94  add      x10, x29, x10
017c6f98  bfi      x16, x9, #8, #4
017c6f9c  add      x15, x29, x15
017c6fa0  and      x12, x12, #0x7ff800
017c6fa4  lsl      w9, w11, #3
017c6fa8  add      x16, x29, x16, lsl #11
017c6fac  add      x12, x29, x12
017c6fb0  lsr      x17, x11, #9
017c6fb4  stp      x10, x15, [x22]
017c6fb8  bfi      x14, x11, #4, #8
017c6fbc  and      x10, x13, #0x7ff800
017c6fc0  add      x11, x29, x10
017c6fc4  and      x9, x9, #0x7ff800
017c6fc8  and      x10, x17, #0x7ff800
017c6fcc  stp      x16, x12, [x22, #0x10]
017c6fd0  add      x12, x29, x14, lsl #11
017c6fd4  add      x9, x29, x9
017c6fd8  add      x13, x29, x10
017c6fdc  stp      x11, x12, [x22, #0x20]
017c6fe0  stp      x9, x13, [x22, #0x30]
017c6fe4  add      x22, x22, #0x40
017c6fe8  b.hi     #0x17c6f64
017c6fec  mov      x9, x22
017c6ff0  mov      x26, x8
017c6ff4  cbz      w27, #0x17c6e6c
017c6ff8  mov      x22, x9
017c6ffc  ldr      w8, [x26]
017c7000  cmp      w27, #1
017c7004  mov      w9, w8
017c7008  lsr      x10, x8, #1
017c700c  ubfiz    x9, x9, #0xb, #0xc
017c7010  and      x10, x10, #0x7ff800
017c7014  add      x9, x29, x9
017c7018  add      x23, x29, x10
017c701c  stp      x9, x23, [x22]
017c7020  b.ne     #0x17c702c
017c7024  add      x9, x22, #0x10
017c7028  b        #0x17c7064
017c702c  ldr      w9, [x26, #4]
017c7030  lsr      x8, x8, #0x18
017c7034  mov      w10, w9
017c7038  bfi      x8, x10, #8, #4
017c703c  lsl      w10, w9, #7
017c7040  lsr      x9, x9, #5
017c7044  and      x10, x10, #0x7ff800
017c7048  and      x9, x9, #0x7ff800
017c704c  add      x8, x29, x8, lsl #11
017c7050  add      x10, x29, x10
017c7054  add      x23, x29, x9
017c7058  add      x9, x22, #0x28
017c705c  stp      x8, x10, [x22, #0x10]
017c7060  str      x23, [x22, #0x20]
017c7064  ldr      x27, [sp, #0x40]
017c7068  mov      x22, x9
017c706c  sub      x8, x22, x24
017c7070  mov      w29, #2
017c7074  lsr      x8, x8, #3
017c7078  add      w28, w28, w8
017c707c  b        #0x17c6b58
017c7080  adrp     x8, #0x56f000
017c7084  add      x8, x8, #0x856  ; "%s:853:ERROR:bad encoding
"
017c7088  str      x8, [sp, #0x38]
017c708c  adrp     x2, #0x554000
017c7090  add      x2, x2, #0x9ed  ; "runtime_alloc.cc"
017c7094  mov      w0, wzr
017c7098  ldr      x1, [sp, #0x38]
017c709c  bl       #0x2f15ff0  ; <qnndsp_log>
017c70a0  ldp      x20, x19, [sp, #0xe0]
017c70a4  ldp      x22, x21, [sp, #0xd0]
017c70a8  ldp      x24, x23, [sp, #0xc0]
017c70ac  ldp      x26, x25, [sp, #0xb0]
017c70b0  ldp      x28, x27, [sp, #0xa0]
017c70b4  ldp      x29, x30, [sp, #0x90]
017c70b8  add      sp, sp, #0xf0
017c70bc  ret      
017c70c0  adrp     x8, #0x5c3000
017c70c4  add      x8, x8, #0x28  ; "%s:967:ERROR:bad offset
"
017c70c8  b        #0x17c7088
017c70cc  adrp     x8, #0x52e000
017c70d0  add      x8, x8, #0x4a8  ; "%s:905:ERROR:bad encoding
"
017c70d4  b        #0x17c7088
017c70d8  adrp     x8, #0x528000
017c70dc  add      x8, x8, #0x687  ; "%s:932:ERROR:bad format-4
"
017c70e0  b        #0x17c7088
017c70e4  adrp     x8, #0x53e000
017c70e8  add      x8, x8, #0xb16  ; "%s:879:ERROR:bad encoding
"
017c70ec  b        #0x17c7088
017c70f0  ldr      x0, [sp, #0x48]
017c70f4  bl       #0x17c7aec
