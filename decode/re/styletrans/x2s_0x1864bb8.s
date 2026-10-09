; function 0x1864bb8 size 0x7b4 
01864bb8  stp      d11, d10, [sp, #-0x80]!
01864bbc  stp      d9, d8, [sp, #0x10]
01864bc0  stp      x29, x30, [sp, #0x20]
01864bc4  stp      x28, x27, [sp, #0x30]
01864bc8  stp      x26, x25, [sp, #0x40]
01864bcc  stp      x24, x23, [sp, #0x50]
01864bd0  stp      x22, x21, [sp, #0x60]
01864bd4  stp      x20, x19, [sp, #0x70]
01864bd8  sub      sp, sp, #0x670
01864bdc  ldr      x12, [x1, #0x20]
01864be0  mov      x8, x3
01864be4  ldr      x13, [x0, #0x20]
01864be8  mov      x20, x1
01864bec  ldr      x11, [x2, #0x20]
01864bf0  mov      x19, x0
01864bf4  ldp      x26, x14, [x12, #0x10]
01864bf8  mov      x10, xzr
01864bfc  mov      x9, xzr
01864c00  ldp      x22, x24, [x12, #0x20]
01864c04  add      x11, x11, #0x18
01864c08  str      xzr, [sp, #0x438]
01864c0c  ldp      x12, x27, [x13, #0x10]
01864c10  str      x14, [sp, #0x88]
01864c14  ldp      x21, x23, [x13, #0x20]
01864c18  str      xzr, [sp, #0x440]
01864c1c  str      x12, [sp, #0x68]
01864c20  add      x12, sp, #0x430
01864c24  str      xzr, [sp, #0x448]
01864c28  add      x13, x12, x10
01864c2c  ldr      x14, [x11, x10]
01864c30  add      x10, x10, #8
01864c34  cmp      x10, #0x18
01864c38  ldr      x13, [x13, #8]
01864c3c  nop      
01864c40  madd     x9, x14, x9, x13
01864c44  b.ne     #0x1864c28
01864c48  ldr      x10, [x2, #0x28]
01864c4c  add      x2, sp, #0x430
01864c50  movi     v1.2d, #0000000000000000
01864c54  add      x3, sp, #0x230
01864c58  ldr      s0, [x10, x9, lsl #2]
01864c5c  mov      x0, x8
01864c60  ldr      x9, [x8]
01864c64  mov      w1, #4
01864c68  str      xzr, [sp, #0x238]
01864c6c  str      q1, [sp, #0x440]
01864c70  ldr      x9, [x9, #0x50]
01864c74  scvtf    s8, s0
01864c78  str      q1, [sp, #0x430]
01864c7c  str      xzr, [sp, #0x230]
01864c80  blr      x9
01864c84  ldr      x8, [sp, #0x230]
01864c88  mov      x1, x0
01864c8c  ldr      x0, [sp, #0x238]
01864c90  ldr      x8, [x8, #8]
01864c94  blr      x8
01864c98  ldr      x8, [x20, #0x18]
01864c9c  mov      x10, xzr
01864ca0  mov      w12, #1
01864ca4  add      x13, sp, #0x650
01864ca8  adrp     x9, #0x5de000
01864cac  add      x9, x9, #0xde8  ; =0x5dede8
01864cb0  add      x11, x8, #0x50
01864cb4  str      xzr, [sp, #0x658]
01864cb8  str      xzr, [sp, #0x650]
01864cbc  str      xzr, [sp, #0x660]
01864cc0  add      x14, x9, x10
01864cc4  ldr      x15, [x11, x10]
01864cc8  ldr      x14, [x14, #0x18]
01864ccc  udiv     x14, x15, x14
01864cd0  mul      x12, x14, x12
01864cd4  add      x14, x13, x10
01864cd8  sub      x10, x10, #8
01864cdc  cmn      x10, #0x18
01864ce0  str      x12, [x14, #0x10]
01864ce4  b.ne     #0x1864cc0
01864ce8  ldr      x12, [x19, #0x18]
01864cec  fcvtzs   w11, s8
01864cf0  mov      x10, xzr
01864cf4  add      x13, sp, #0x630
01864cf8  str      xzr, [sp, #0x638]
01864cfc  str      w11, [sp, #0x124]
01864d00  mov      w11, #1
01864d04  add      x12, x12, #0x50
01864d08  str      xzr, [sp, #0x630]
01864d0c  str      xzr, [sp, #0x640]
01864d10  add      x14, x9, x10
01864d14  ldr      x15, [x12, x10]
01864d18  ldr      x14, [x14, #0x18]
01864d1c  udiv     x14, x15, x14
01864d20  mul      x11, x14, x11
01864d24  add      x14, x13, x10
01864d28  sub      x10, x10, #8
01864d2c  cmn      x10, #0x18
01864d30  str      x11, [x14, #0x10]
01864d34  b.ne     #0x1864d10
01864d38  fcvtzs   w9, s0
01864d3c  mov      x10, xzr
01864d40  movi     v1.2d, #0000000000000000
01864d44  add      x11, sp, #0x230
01864d48  add      x12, sp, #0x430
01864d4c  str      w9, [sp, #0x74]
01864d50  add      x9, x8, #0x58
01864d54  stp      q1, q1, [sp, #0x230]
01864d58  str      q1, [sp, #0x430]
01864d5c  str      q1, [sp, #0x440]
01864d60  ldrb     w13, [x9, x10]
01864d64  ldr      x14, [x11, x10, lsl #3]
01864d68  add      x13, x14, x13
01864d6c  str      x13, [x12, x10, lsl #3]
01864d70  add      x10, x10, #1
01864d74  cmp      x10, #4
01864d78  b.ne     #0x1864d60
01864d7c  ldp      x11, x14, [x8, #0x40]
01864d80  movi     v0.2d, #0000000000000000
01864d84  mov      x10, xzr
01864d88  ldr      x12, [sp, #0x430]
01864d8c  ldr      x15, [sp, #0x438]
01864d90  lsr      x13, x11, #3
01864d94  ldr      x16, [sp, #0x440]
01864d98  lsr      x11, x14, #3
01864d9c  ldr      x8, [x8, #0x50]
01864da0  mul      x12, x13, x12
01864da4  ldr      x0, [x20, #0x28]
01864da8  mov      w17, w15
01864dac  add      x12, x12, x15, lsr #3
01864db0  str      x0, [sp, #0x90]
01864db4  mul      x14, x12, x11
01864db8  lsr      x12, x8, #5
01864dbc  ldr      x8, [sp, #0x448]
01864dc0  add      x14, x14, x16, lsr #3
01864dc4  ubfiz    x15, x16, #5, #3
01864dc8  ubfiz    x16, x17, #8, #3
01864dcc  add      x17, sp, #0x230
01864dd0  mul      x14, x14, x12
01864dd4  add      x14, x14, x8, lsr #5
01864dd8  ldr      x14, [x0, x14, lsl #3]
01864ddc  add      x0, sp, #0x430
01864de0  stp      q0, q0, [sp, #0x230]
01864de4  str      q0, [sp, #0x440]
01864de8  str      q0, [sp, #0x430]
01864dec  ldrb     w1, [x9, x10]
01864df0  ldr      x2, [x17, x10, lsl #3]
01864df4  add      x1, x2, x1
01864df8  str      x1, [x0, x10, lsl #3]
01864dfc  add      x10, x10, #1
01864e00  cmp      x10, #4
01864e04  b.ne     #0x1864dec
01864e08  ldr      x9, [sp, #0x430]
01864e0c  and      w8, w8, #0x1f
01864e10  ldr      x10, [sp, #0x438]
01864e14  mul      x9, x9, x13
01864e18  add      x9, x9, x10, lsr #3
01864e1c  ldr      x10, [sp, #0x440]
01864e20  mul      x9, x9, x11
01864e24  ldr      x11, [sp, #0x448]
01864e28  add      x9, x9, x10, lsr #3
01864e2c  ldr      x10, [sp, #0x90]
01864e30  mul      x9, x9, x12
01864e34  add      x9, x9, x11, lsr #5
01864e38  ldr      x9, [x10, x9, lsl #3]
01864e3c  orr      w10, w15, w16
01864e40  orr      w8, w10, w8
01864e44  add      w8, w14, w8
01864e48  sub      w8, w8, w9
01864e4c  ldr      w9, [sp, #0x124]
01864e50  and      x8, x8, #0xffffffe0
01864e54  cmp      w9, #2
01864e58  b.ne     #0x1864f14
01864e5c  cbnz     x8, #0x1864f14
01864e60  ldp      x12, x13, [sp, #0x88]
01864e64  lsl      w11, w22, #1
01864e68  str      w22, [sp, #0x440]
01864e6c  ldr      x9, [sp, #0x660]
01864e70  str      w24, [sp, #0x448]
01864e74  ldr      x10, [sp, #0x658]
01864e78  str      w23, [sp, #0x248]
01864e7c  lsl      w8, w12, #1
01864e80  str      w12, [sp, #0x444]
01864e84  ldr      x12, [sp, #0x638]
01864e88  str      w9, [sp, #0x438]
01864e8c  ldr      x20, [sp, #0x650]
01864e90  cmp      w8, w27
01864e94  ldr      x9, [x19, #0x28]
01864e98  str      w10, [sp, #0x43c]
01864e9c  ldr      x22, [sp, #0x68]
01864ea0  str      w12, [sp, #0x23c]
01864ea4  ldr      w12, [sp, #0x74]
01864ea8  csel     w8, w8, w27, lt
01864eac  ldr      w10, [sp, #0x640]
01864eb0  cmp      w11, w21
01864eb4  str      x9, [sp, #0x230]
01864eb8  mul      w9, w20, w22
01864ebc  csel     w11, w11, w21, lt
01864ec0  cmp      w12, #0
01864ec4  csel     w19, w10, w9, eq
01864ec8  str      x13, [sp, #0x430]
01864ecc  str      w10, [sp, #0x238]
01864ed0  str      w11, [sp, #0x240]
01864ed4  str      w8, [sp, #0x244]
01864ed8  cbz      x22, #0x1865340
01864edc  ldr      x21, [sp, #0x630]
01864ee0  add      x0, sp, #0x230
01864ee4  add      x1, sp, #0x430
01864ee8  mov      w2, w19
01864eec  bl       #0x14f4740
01864ef0  ldr      x8, [sp, #0x430]
01864ef4  subs     x22, x22, #1
01864ef8  ldr      x9, [sp, #0x230]
01864efc  add      x8, x8, x20, lsl #3
01864f00  add      x9, x9, x21, lsl #3
01864f04  str      x8, [sp, #0x430]
01864f08  str      x9, [sp, #0x230]
01864f0c  b.ne     #0x1864ee0
01864f10  b        #0x1865340
01864f14  cbz      x8, #0x1864f30
01864f18  adrp     x1, #0x56a000
01864f1c  add      x1, x1, #0x886  ; "WARNING: FIXME: x2s has start!=0
"
01864f20  mov      w0, #1
01864f24  bl       #0x2f15ff0  ; <qnndsp_log>
01864f28  ldr      x8, [x20, #0x28]
01864f2c  str      x8, [sp, #0x90]
01864f30  ldr      w9, [sp, #0x74]
01864f34  add      x8, x24, #0x1f
01864f38  lsr      x8, x8, #5
01864f3c  cmp      w9, #0
01864f40  csel     w9, w26, w8, eq
01864f44  csel     w8, w8, w26, eq
01864f48  cmp      w9, #1
01864f4c  str      x8, [sp, #0x60]
01864f50  str      w9, [sp, #0x10]
01864f54  b.lt     #0x1865340
01864f58  ldr      x9, [x19, #0x28]
01864f5c  add      x8, x23, #0x1f
01864f60  ldr      x10, [sp, #0x88]
01864f64  ucvtf    s0, x22
01864f68  fmov     s1, #0.12500000
01864f6c  ldr      x12, [sp, #0x650]
01864f70  str      x9, [sp, #0x118]
01864f74  ldr      w9, [sp, #0x74]
01864f78  ucvtf    s8, x10
01864f7c  ucvtf    s9, x21
01864f80  fmul     s0, s0, s1
01864f84  mov      w11, wzr
01864f88  cmp      w9, #0
01864f8c  add      x9, x10, #7
01864f90  ldr      x10, [sp, #0x660]
01864f94  fmov     s10, #8.00000000
01864f98  str      x10, [sp, #0xb8]
01864f9c  ldr      x10, [sp, #0x658]
01864fa0  str      x10, [sp, #0x80]
01864fa4  lsr      x10, x8, #5
01864fa8  and      x8, x9, #0x7fffffff8
01864fac  stp      x8, x10, [sp, #0x50]
01864fb0  ldr      x8, [sp, #0x638]
01864fb4  str      x8, [sp, #0x110]
01864fb8  ldr      x8, [sp, #0x68]
01864fbc  csel     w13, w10, w8, eq
01864fc0  fcvtps   w10, s0
01864fc4  ldr      x8, [sp, #0x630]
01864fc8  str      x10, [sp, #0xe8]
01864fcc  csinc    x10, x12, xzr, ne
01864fd0  csinc    x8, x8, xzr, ne
01864fd4  stp      x10, x12, [sp, #0x38]
01864fd8  ldr      x10, [sp, #0x640]
01864fdc  str      x8, [sp, #0x18]
01864fe0  str      x10, [sp, #0xb0]
01864fe4  add      x10, sp, #0x430
01864fe8  add      x8, x10, #0x80
01864fec  str      x8, [sp, #0x128]
01864ff0  lsl      w8, w13, #1
01864ff4  str      w8, [sp, #0x4c]
01864ff8  ldr      x8, [sp, #0x60]
01864ffc  sxtw     x8, w8
01865000  stp      x8, x13, [sp, #0x20]
01865004  ubfx     x8, x9, #3, #0x20
01865008  str      x8, [sp, #0xa0]
0186500c  ldr      w8, [sp, #0x124]
01865010  lsl      w8, w8, #1
01865014  str      w8, [sp, #0x10c]
01865018  ldr      x8, [sp, #0x28]
0186501c  str      w11, [sp, #0x14]
01865020  cmp      w8, #1
01865024  b.lt     #0x1865330
01865028  mov      x9, xzr
0186502c  ldr      x8, [sp, #0x20]
01865030  str      x9, [sp, #0x30]
01865034  cmp      x9, x8
01865038  b.ge     #0x1865320
0186503c  ldr      x8, [sp, #0x18]
01865040  ldr      x9, [sp, #0x30]
01865044  mul      x26, x8, x9
01865048  ldr      w8, [sp, #0x74]
0186504c  str      x9, [sp, #0x78]
01865050  cbz      w8, #0x1865064
01865054  sxtw     x8, w9
01865058  ldr      x9, [sp, #0x68]
0186505c  udiv     x8, x8, x9
01865060  b        #0x186506c
01865064  ldr      x8, [sp, #0x58]
01865068  sdiv     w8, w9, w8
0186506c  ldr      x9, [sp, #0x50]
01865070  cbz      x9, #0x1865308
01865074  and      w11, w8, #1
01865078  ldr      x12, [sp, #0x78]
0186507c  ldr      x10, [sp, #0x68]
01865080  ubfx     x8, x8, #1, #0x1f
01865084  str      xzr, [sp, #0xa8]
01865088  str      w11, [sp, #0xd0]
0186508c  ldr      x11, [sp, #0x40]
01865090  add      x10, x10, w12, sxtw
01865094  mov      w9, w12
01865098  sxtw     x9, w9
0186509c  str      x8, [sp, #0x98]
018650a0  mul      x10, x11, x10
018650a4  ldr      x11, [sp, #0x58]
018650a8  add      w11, w12, w11
018650ac  ldr      x12, [sp, #0x38]
018650b0  mul      x9, x12, x9
018650b4  str      x9, [sp, #0xc8]
018650b8  sxtw     x9, w11
018650bc  ldr      w11, [sp, #0x74]
018650c0  cmp      w11, #0
018650c4  csel     x9, x9, x10, eq
018650c8  str      x9, [sp, #0xc0]
018650cc  ldr      x8, [sp, #0xe8]
018650d0  cmp      w8, #1
018650d4  b.lt     #0x18652f4
018650d8  ldr      x10, [sp, #0xa8]
018650dc  ldr      x9, [sp, #0x88]
018650e0  ldr      x11, [sp, #0x98]
018650e4  ucvtf    s0, w10
018650e8  fcvtzu   w8, s0, #3
018650ec  ucvtf    s0, w8
018650f0  sub      x9, x9, w8, uxtw
018650f4  ucvtf    s1, x9
018650f8  ldr      x9, [sp, #0x80]
018650fc  fadd     s0, s0, s10
01865100  mul      x9, x9, x10
01865104  ldr      w10, [sp, #0x124]
01865108  fcmp     s0, s8
0186510c  madd     w10, w10, w8, w11
01865110  fcsel    s0, s1, s10, gt
01865114  str      w10, [sp, #0xe4]
01865118  fcvtzu   w8, s0
0186511c  stp      x8, xzr, [sp, #0xf0]
01865120  ldr      x8, [sp, #0x90]
01865124  add      x8, x8, x9, lsl #3
01865128  str      x8, [sp, #0xd8]
0186512c  lsl      w8, w10, #1
01865130  str      w8, [sp, #0xd4]
01865134  ldr      x8, [sp, #0xf0]
01865138  cbz      w8, #0x18652dc
0186513c  ldr      x9, [sp, #0xf8]
01865140  ldp      x12, x8, [sp, #0xb0]
01865144  scvtf    s0, w9
01865148  ldr      x11, [sp, #0xd8]
0186514c  ldp      w10, w27, [sp, #0xd0]
01865150  ldr      x25, [sp, #0xf0]
01865154  mul      x8, x8, x9
01865158  ldr      w29, [sp, #0xe4]
0186515c  fcvtzu   w9, s0, #3
01865160  add      x8, x11, x8, lsl #3
01865164  ldr      x11, [sp, #0xc0]
01865168  bfi      w10, w9, #1, #0x1f
0186516c  ubfx     w9, w9, #2, #0x1d
01865170  ldr      x11, [x8, x11, lsl #3]
01865174  mul      x23, x12, x9
01865178  ucvtf    s0, w10
0186517c  ldr      x10, [sp, #0xc8]
01865180  ldr      x8, [x8, x10, lsl #3]
01865184  add      w10, w9, #1
01865188  fadd     s11, s0, s10
0186518c  add      x20, x11, #0x80
01865190  mul      x9, x12, x10
01865194  add      x21, x8, #0x80
01865198  str      x9, [sp, #0x100]
0186519c  ldr      x9, [sp, #0x110]
018651a0  lsr      w8, w29, #3
018651a4  sub      x1, x21, #0x80
018651a8  add      x0, sp, #0x5b0
018651ac  mov      w2, #0x80
018651b0  mul      x8, x9, x8
018651b4  ldr      x9, [sp, #0x118]
018651b8  add      x24, x9, x8, lsl #3
018651bc  add      x8, x24, x23, lsl #3
018651c0  ldr      x19, [x8, x26, lsl #3]
018651c4  bl       #0x2f14a00  ; <memcpy>
018651c8  sub      x1, x20, #0x80
018651cc  add      x0, sp, #0x3b0
018651d0  mov      w2, #0x80
018651d4  bl       #0x2f14a60  ; <memmove>
018651d8  add      x0, sp, #0x330
018651dc  add      x1, sp, #0x5b0
018651e0  mov      w2, #0x80
018651e4  bl       #0x2f14a00  ; <memcpy>
018651e8  add      x8, sp, #0x430
018651ec  add      x0, sp, #0x3b0
018651f0  add      x1, sp, #0x330
018651f4  mov      w2, #-0x20
018651f8  bl       #0x2f152c0  ; <Q6_W_vshuff_VVR_HVXDBL>
018651fc  and      w28, w27, #0xe
01865200  add      x1, sp, #0x430
01865204  mov      w2, #0x80
01865208  add      x0, x19, x28, lsl #7
0186520c  bl       #0x2f14a60  ; <memmove>
01865210  orr      w22, w28, #1
01865214  ldr      x1, [sp, #0x128]
01865218  mov      w2, #0x80
0186521c  add      x0, x19, x22, lsl #7
01865220  bl       #0x2f14a60  ; <memmove>
01865224  fcmp     s11, s9
01865228  b.ge     #0x18652bc
0186522c  ldr      x8, [sp, #0x100]
01865230  add      x0, sp, #0x5b0
01865234  mov      x1, x21
01865238  mov      w2, #0x80
0186523c  add      x8, x24, x8, lsl #3
01865240  ldr      x19, [x8, x26, lsl #3]
01865244  bl       #0x2f14a00  ; <memcpy>
01865248  add      x0, sp, #0x530
0186524c  mov      x1, x20
01865250  mov      w2, #0x80
01865254  bl       #0x2f14a00  ; <memcpy>
01865258  add      x0, sp, #0x1b0
0186525c  add      x1, sp, #0x530
01865260  mov      w2, #0x80
01865264  bl       #0x2f14a00  ; <memcpy>
01865268  add      x0, sp, #0x130
0186526c  add      x1, sp, #0x5b0
01865270  mov      w2, #0x80
01865274  bl       #0x2f14a00  ; <memcpy>
01865278  add      x8, sp, #0x230
0186527c  add      x0, sp, #0x1b0
01865280  add      x1, sp, #0x130
01865284  mov      w2, #-0x20
01865288  bl       #0x2f152c0  ; <Q6_W_vshuff_VVR_HVXDBL>
0186528c  add      x0, sp, #0x430
01865290  add      x1, sp, #0x230
01865294  mov      w2, #0x100
01865298  bl       #0x2f14a00  ; <memcpy>
0186529c  add      x0, x19, x28, lsl #7
018652a0  add      x1, sp, #0x430
018652a4  mov      w2, #0x80
018652a8  bl       #0x2f14a60  ; <memmove>
018652ac  add      x0, x19, x22, lsl #7
018652b0  ldr      x1, [sp, #0x128]
018652b4  mov      w2, #0x80
018652b8  bl       #0x2f14a60  ; <memmove>
018652bc  ldr      w8, [sp, #0x10c]
018652c0  add      x20, x20, #0x100
018652c4  add      x21, x21, #0x100
018652c8  subs     x25, x25, #1
018652cc  add      w27, w27, w8
018652d0  ldr      w8, [sp, #0x124]
018652d4  add      w29, w29, w8
018652d8  b.ne     #0x186519c
018652dc  ldr      x9, [sp, #0xf8]
018652e0  ldr      x8, [sp, #0xe8]
018652e4  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
018652e8  cmp      x9, x8
018652ec  str      x9, [sp, #0xf8]
018652f0  b.ne     #0x1865134
018652f4  ldp      x8, x9, [sp, #0xa0]
018652f8  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
018652fc  cmp      x9, x8
01865300  str      x9, [sp, #0xa8]
01865304  b.ne     #0x18650cc
01865308  ldr      w8, [sp, #0x4c]
0186530c  ldr      x9, [sp, #0x78]
01865310  add      w9, w9, w8
01865314  ldr      x8, [sp, #0x60]
01865318  cmp      w9, w8
0186531c  b.lt     #0x1865048
01865320  ldp      x8, x9, [sp, #0x28]
01865324  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
01865328  cmp      x9, x8
0186532c  b.ne     #0x186502c
01865330  ldp      w8, w11, [sp, #0x10]
01865334  add      w11, w11, #1
01865338  cmp      w11, w8
0186533c  b.ne     #0x1865018
01865340  mov      w0, wzr
01865344  add      sp, sp, #0x670
01865348  ldp      x20, x19, [sp, #0x70]
0186534c  ldp      x22, x21, [sp, #0x60]
01865350  ldp      x24, x23, [sp, #0x50]
01865354  ldp      x26, x25, [sp, #0x40]
01865358  ldp      x28, x27, [sp, #0x30]
0186535c  ldp      x29, x30, [sp, #0x20]
01865360  ldp      d9, d8, [sp, #0x10]
01865364  ldp      d11, d10, [sp], #0x80
01865368  ret      
