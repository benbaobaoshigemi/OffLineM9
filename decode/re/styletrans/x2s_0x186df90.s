; function 0x186df90 size 0x7dc 
0186df90  str      d12, [sp, #-0x90]!
0186df94  stp      d11, d10, [sp, #0x10]
0186df98  stp      d9, d8, [sp, #0x20]
0186df9c  stp      x29, x30, [sp, #0x30]
0186dfa0  stp      x28, x27, [sp, #0x40]
0186dfa4  stp      x26, x25, [sp, #0x50]
0186dfa8  stp      x24, x23, [sp, #0x60]
0186dfac  stp      x22, x21, [sp, #0x70]
0186dfb0  stp      x20, x19, [sp, #0x80]
0186dfb4  sub      sp, sp, #0x660
0186dfb8  ldr      x12, [x1, #0x20]
0186dfbc  mov      x8, x3
0186dfc0  ldr      x13, [x0, #0x20]
0186dfc4  mov      x20, x1
0186dfc8  ldr      x11, [x2, #0x20]
0186dfcc  mov      x19, x0
0186dfd0  ldp      x25, x14, [x12, #0x10]
0186dfd4  mov      x10, xzr
0186dfd8  mov      x9, xzr
0186dfdc  ldp      x22, x24, [x12, #0x20]
0186dfe0  add      x11, x11, #0x18
0186dfe4  str      xzr, [sp, #0x428]
0186dfe8  ldp      x12, x27, [x13, #0x10]
0186dfec  str      x14, [sp, #0x80]
0186dff0  ldp      x21, x23, [x13, #0x20]
0186dff4  str      xzr, [sp, #0x430]
0186dff8  str      x12, [sp, #0x60]
0186dffc  add      x12, sp, #0x420
0186e000  str      xzr, [sp, #0x438]
0186e004  add      x13, x12, x10
0186e008  ldr      x14, [x11, x10]
0186e00c  add      x10, x10, #8
0186e010  cmp      x10, #0x18
0186e014  ldr      x13, [x13, #8]
0186e018  nop      
0186e01c  madd     x9, x14, x9, x13
0186e020  b.ne     #0x186e004
0186e024  ldr      x10, [x2, #0x28]
0186e028  add      x2, sp, #0x420
0186e02c  movi     v1.2d, #0000000000000000
0186e030  add      x3, sp, #0x220
0186e034  ldr      s0, [x10, x9, lsl #2]
0186e038  mov      x0, x8
0186e03c  ldr      x9, [x8]
0186e040  mov      w1, #4
0186e044  str      xzr, [sp, #0x228]
0186e048  str      q1, [sp, #0x430]
0186e04c  ldr      x9, [x9, #0x50]
0186e050  scvtf    s8, s0
0186e054  str      q1, [sp, #0x420]
0186e058  str      xzr, [sp, #0x220]
0186e05c  blr      x9
0186e060  ldr      x8, [sp, #0x220]
0186e064  mov      x1, x0
0186e068  ldr      x0, [sp, #0x228]
0186e06c  ldr      x8, [x8, #8]
0186e070  blr      x8
0186e074  ldr      x8, [x20, #0x18]
0186e078  mov      x10, xzr
0186e07c  mov      w12, #1
0186e080  add      x13, sp, #0x640
0186e084  adrp     x9, #0x5de000
0186e088  add      x9, x9, #0xe08  ; =0x5dee08
0186e08c  add      x11, x8, #0x50
0186e090  str      xzr, [sp, #0x648]
0186e094  str      xzr, [sp, #0x640]
0186e098  str      xzr, [sp, #0x650]
0186e09c  add      x14, x9, x10
0186e0a0  ldr      x15, [x11, x10]
0186e0a4  ldr      x14, [x14, #0x18]
0186e0a8  udiv     x14, x15, x14
0186e0ac  mul      x12, x14, x12
0186e0b0  add      x14, x13, x10
0186e0b4  sub      x10, x10, #8
0186e0b8  cmn      x10, #0x18
0186e0bc  str      x12, [x14, #0x10]
0186e0c0  b.ne     #0x186e09c
0186e0c4  ldr      x12, [x19, #0x18]
0186e0c8  fcvtzs   w11, s8
0186e0cc  mov      x10, xzr
0186e0d0  add      x13, sp, #0x620
0186e0d4  str      xzr, [sp, #0x628]
0186e0d8  str      w11, [sp, #0x11c]
0186e0dc  mov      w11, #1
0186e0e0  add      x12, x12, #0x50
0186e0e4  str      xzr, [sp, #0x620]
0186e0e8  str      xzr, [sp, #0x630]
0186e0ec  add      x14, x9, x10
0186e0f0  ldr      x15, [x12, x10]
0186e0f4  ldr      x14, [x14, #0x18]
0186e0f8  udiv     x14, x15, x14
0186e0fc  mul      x11, x14, x11
0186e100  add      x14, x13, x10
0186e104  sub      x10, x10, #8
0186e108  cmn      x10, #0x18
0186e10c  str      x11, [x14, #0x10]
0186e110  b.ne     #0x186e0ec
0186e114  fcvtzs   w9, s0
0186e118  mov      x10, xzr
0186e11c  movi     v1.2d, #0000000000000000
0186e120  add      x11, sp, #0x220
0186e124  add      x12, sp, #0x420
0186e128  str      w9, [sp, #0x6c]
0186e12c  add      x9, x8, #0x58
0186e130  stp      q1, q1, [sp, #0x220]
0186e134  str      q1, [sp, #0x420]
0186e138  str      q1, [sp, #0x430]
0186e13c  ldrb     w13, [x9, x10]
0186e140  ldr      x14, [x11, x10, lsl #3]
0186e144  add      x13, x14, x13
0186e148  str      x13, [x12, x10, lsl #3]
0186e14c  add      x10, x10, #1
0186e150  cmp      x10, #4
0186e154  b.ne     #0x186e13c
0186e158  ldp      x11, x13, [x8, #0x40]
0186e15c  movi     v0.2d, #0000000000000000
0186e160  mov      x10, xzr
0186e164  ldr      x12, [sp, #0x420]
0186e168  ldr      x15, [sp, #0x428]
0186e16c  lsr      x11, x11, #3
0186e170  ldr      x8, [x8, #0x50]
0186e174  ldr      x16, [sp, #0x438]
0186e178  mul      x14, x11, x12
0186e17c  lsr      x12, x13, #2
0186e180  lsr      x8, x8, #5
0186e184  ldr      x1, [x20, #0x28]
0186e188  add      x13, x14, x15, lsr #3
0186e18c  ldr      x14, [sp, #0x430]
0186e190  mul      x13, x13, x12
0186e194  str      x1, [sp, #0x88]
0186e198  mov      w17, w14
0186e19c  add      x13, x13, x14, lsr #2
0186e1a0  lsr      x17, x17, #1
0186e1a4  mul      x0, x13, x8
0186e1a8  and      x13, x14, #1
0186e1ac  lsl      x14, x16, #1
0186e1b0  bfi      x13, x17, #6, #1
0186e1b4  add      x0, x0, x16, lsr #5
0186e1b8  mov      w16, w15
0186e1bc  ubfiz    x16, x16, #7, #3
0186e1c0  add      x17, sp, #0x220
0186e1c4  ldr      x15, [x1, x0, lsl #3]
0186e1c8  add      x0, sp, #0x420
0186e1cc  stp      q0, q0, [sp, #0x220]
0186e1d0  str      q0, [sp, #0x430]
0186e1d4  str      q0, [sp, #0x420]
0186e1d8  ldrb     w1, [x9, x10]
0186e1dc  ldr      x2, [x17, x10, lsl #3]
0186e1e0  add      x1, x2, x1
0186e1e4  str      x1, [x0, x10, lsl #3]
0186e1e8  add      x10, x10, #1
0186e1ec  cmp      x10, #4
0186e1f0  b.ne     #0x186e1d8
0186e1f4  ldr      x9, [sp, #0x420]
0186e1f8  ldr      x10, [sp, #0x428]
0186e1fc  mul      x9, x9, x11
0186e200  ldr      x11, [sp, #0x438]
0186e204  add      x9, x9, x10, lsr #3
0186e208  ldr      x10, [sp, #0x430]
0186e20c  mul      x9, x9, x12
0186e210  add      x9, x9, x10, lsr #2
0186e214  orr      w10, w13, w16
0186e218  mul      x8, x9, x8
0186e21c  and      w9, w14, #0x3e
0186e220  orr      w9, w10, w9
0186e224  add      x8, x8, x11, lsr #5
0186e228  ldr      x11, [sp, #0x88]
0186e22c  add      x9, x15, w9, uxtw #1
0186e230  ldr      x8, [x11, x8, lsl #3]
0186e234  sub      x8, x9, x8
0186e238  lsr      x9, x8, #1
0186e23c  ubfx     x8, x8, #1, #1
0186e240  ubfx     x9, x9, #5, #0x1b
0186e244  and      w9, w9, #0x1e
0186e248  orr      w8, w9, w8
0186e24c  ldr      w9, [sp, #0x11c]
0186e250  cmp      w9, #2
0186e254  b.ne     #0x186e310
0186e258  cbnz     w8, #0x186e310
0186e25c  ldp      x12, x13, [sp, #0x80]
0186e260  lsl      w11, w22, #1
0186e264  str      w22, [sp, #0x430]
0186e268  ldr      x9, [sp, #0x650]
0186e26c  str      w24, [sp, #0x438]
0186e270  ldr      x10, [sp, #0x648]
0186e274  str      w23, [sp, #0x238]
0186e278  lsl      w8, w12, #1
0186e27c  str      w12, [sp, #0x434]
0186e280  ldr      x12, [sp, #0x628]
0186e284  str      w9, [sp, #0x428]
0186e288  ldr      x20, [sp, #0x640]
0186e28c  cmp      w8, w27
0186e290  ldr      x9, [x19, #0x28]
0186e294  str      w10, [sp, #0x42c]
0186e298  ldr      x22, [sp, #0x60]
0186e29c  str      w12, [sp, #0x22c]
0186e2a0  ldr      w12, [sp, #0x6c]
0186e2a4  csel     w8, w8, w27, lt
0186e2a8  ldr      w10, [sp, #0x630]
0186e2ac  cmp      w11, w21
0186e2b0  str      x9, [sp, #0x220]
0186e2b4  mul      w9, w20, w22
0186e2b8  csel     w11, w11, w21, lt
0186e2bc  cmp      w12, #0
0186e2c0  csel     w19, w10, w9, eq
0186e2c4  str      x13, [sp, #0x420]
0186e2c8  str      w10, [sp, #0x228]
0186e2cc  str      w11, [sp, #0x230]
0186e2d0  str      w8, [sp, #0x234]
0186e2d4  cbz      x22, #0x186e73c
0186e2d8  ldr      x21, [sp, #0x620]
0186e2dc  add      x0, sp, #0x220
0186e2e0  add      x1, sp, #0x420
0186e2e4  mov      w2, w19
0186e2e8  bl       #0x14f5210
0186e2ec  ldr      x8, [sp, #0x420]
0186e2f0  subs     x22, x22, #1
0186e2f4  ldr      x9, [sp, #0x220]
0186e2f8  add      x8, x8, x20, lsl #3
0186e2fc  add      x9, x9, x21, lsl #3
0186e300  str      x8, [sp, #0x420]
0186e304  str      x9, [sp, #0x220]
0186e308  b.ne     #0x186e2dc
0186e30c  b        #0x186e73c
0186e310  cbz      w8, #0x186e32c
0186e314  adrp     x1, #0x56a000
0186e318  add      x1, x1, #0x886  ; "WARNING: FIXME: x2s has start!=0
"
0186e31c  mov      w0, #1
0186e320  bl       #0x2f15ff0  ; <qnndsp_log>
0186e324  ldr      x8, [x20, #0x28]
0186e328  str      x8, [sp, #0x88]
0186e32c  ldr      w9, [sp, #0x6c]
0186e330  add      x8, x24, #0x1f
0186e334  lsr      x8, x8, #5
0186e338  cmp      w9, #0
0186e33c  csel     w9, w25, w8, eq
0186e340  csel     w8, w8, w25, eq
0186e344  cmp      w9, #1
0186e348  str      x8, [sp, #0x58]
0186e34c  str      w9, [sp, #8]
0186e350  b.lt     #0x186e73c
0186e354  ldr      x9, [sp, #0x650]
0186e358  ucvtf    s0, x22
0186e35c  ldr      x8, [x19, #0x28]
0186e360  fmov     s1, #0.25000000
0186e364  ldr      x10, [sp, #0x80]
0186e368  ucvtf    s9, x21
0186e36c  str      x9, [sp, #0xb0]
0186e370  ldr      w9, [sp, #0x6c]
0186e374  ldr      x12, [sp, #0x628]
0186e378  str      x8, [sp, #0x110]
0186e37c  add      x8, x23, #0x1f
0186e380  fmul     s0, s0, s1
0186e384  cmp      w9, #0
0186e388  ldr      x9, [sp, #0x648]
0186e38c  str      x12, [sp, #0x108]
0186e390  lsr      x12, x8, #5
0186e394  ldr      x11, [sp, #0x640]
0186e398  ucvtf    s8, x10
0186e39c  str      x9, [sp, #0x78]
0186e3a0  add      x9, x10, #7
0186e3a4  and      x8, x9, #0x7fffffff8
0186e3a8  ldr      x10, [sp, #0x620]
0186e3ac  fmov     s10, #8.00000000
0186e3b0  fmov     s11, #4.00000000
0186e3b4  str      wzr, [sp, #0xc]
0186e3b8  stp      x8, x12, [sp, #0x48]
0186e3bc  ldr      x8, [sp, #0x60]
0186e3c0  csel     w12, w12, w8, eq
0186e3c4  fcvtps   w8, s0
0186e3c8  str      x8, [sp, #0xe0]
0186e3cc  csinc    x8, x11, xzr, ne
0186e3d0  stp      x8, x11, [sp, #0x30]
0186e3d4  ldr      x8, [sp, #0x630]
0186e3d8  str      x8, [sp, #0xa8]
0186e3dc  csinc    x8, x10, xzr, ne
0186e3e0  str      x8, [sp, #0x10]
0186e3e4  add      x8, sp, #0x420
0186e3e8  add      x8, x8, #0x80
0186e3ec  str      x8, [sp, #0x668]
0186e3f0  lsl      w8, w12, #1
0186e3f4  str      w8, [sp, #0x44]
0186e3f8  ldr      x8, [sp, #0x58]
0186e3fc  sxtw     x8, w8
0186e400  stp      x8, x12, [sp, #0x18]
0186e404  ubfx     x8, x9, #3, #0x20
0186e408  str      x8, [sp, #0x98]
0186e40c  ldr      w8, [sp, #0x11c]
0186e410  lsl      w8, w8, #1
0186e414  str      w8, [sp, #0x104]
0186e418  ldr      x8, [sp, #0x20]
0186e41c  cmp      w8, #1
0186e420  b.lt     #0x186e728
0186e424  mov      x9, xzr
0186e428  ldr      x8, [sp, #0x18]
0186e42c  str      x9, [sp, #0x28]
0186e430  cmp      x9, x8
0186e434  b.ge     #0x186e718
0186e438  ldr      x8, [sp, #0x10]
0186e43c  ldr      x9, [sp, #0x28]
0186e440  mul      x23, x8, x9
0186e444  ldr      w8, [sp, #0x6c]
0186e448  str      x9, [sp, #0x70]
0186e44c  cbz      w8, #0x186e460
0186e450  sxtw     x8, w9
0186e454  ldr      x9, [sp, #0x60]
0186e458  udiv     x8, x8, x9
0186e45c  b        #0x186e468
0186e460  ldr      x8, [sp, #0x50]
0186e464  sdiv     w8, w9, w8
0186e468  ldr      x9, [sp, #0x48]
0186e46c  cbz      x9, #0x186e700
0186e470  and      w11, w8, #1
0186e474  ldr      x12, [sp, #0x70]
0186e478  ldr      x10, [sp, #0x60]
0186e47c  ubfx     x8, x8, #1, #0x1f
0186e480  str      xzr, [sp, #0xa0]
0186e484  str      w11, [sp, #0xc8]
0186e488  ldr      x11, [sp, #0x38]
0186e48c  add      x10, x10, w12, sxtw
0186e490  mov      w9, w12
0186e494  sxtw     x9, w9
0186e498  str      x8, [sp, #0x90]
0186e49c  mul      x10, x11, x10
0186e4a0  ldr      x11, [sp, #0x50]
0186e4a4  add      w11, w12, w11
0186e4a8  ldr      x12, [sp, #0x30]
0186e4ac  mul      x9, x12, x9
0186e4b0  str      x9, [sp, #0xc0]
0186e4b4  sxtw     x9, w11
0186e4b8  ldr      w11, [sp, #0x6c]
0186e4bc  cmp      w11, #0
0186e4c0  csel     x9, x9, x10, eq
0186e4c4  str      x9, [sp, #0xb8]
0186e4c8  ldr      x8, [sp, #0xe0]
0186e4cc  cmp      w8, #1
0186e4d0  b.lt     #0x186e6ec
0186e4d4  ldr      x10, [sp, #0xa0]
0186e4d8  ldr      x9, [sp, #0x80]
0186e4dc  ldr      x11, [sp, #0x90]
0186e4e0  ucvtf    s0, w10
0186e4e4  fcvtzu   w8, s0, #3
0186e4e8  ucvtf    s0, w8
0186e4ec  sub      x9, x9, w8, uxtw
0186e4f0  ucvtf    s1, x9
0186e4f4  ldr      x9, [sp, #0x78]
0186e4f8  fadd     s0, s0, s10
0186e4fc  mul      x9, x9, x10
0186e500  ldr      w10, [sp, #0x11c]
0186e504  fcmp     s0, s8
0186e508  madd     w10, w10, w8, w11
0186e50c  fcsel    s0, s1, s10, gt
0186e510  str      w10, [sp, #0xdc]
0186e514  fcvtzu   w8, s0
0186e518  stp      x8, xzr, [sp, #0xe8]
0186e51c  ldr      x8, [sp, #0x88]
0186e520  add      x8, x8, x9, lsl #3
0186e524  str      x8, [sp, #0xd0]
0186e528  lsl      w8, w10, #1
0186e52c  str      w8, [sp, #0xcc]
0186e530  ldr      x8, [sp, #0xe8]
0186e534  cbz      w8, #0x186e6d4
0186e538  ldr      x9, [sp, #0xf0]
0186e53c  ldp      x12, x8, [sp, #0xa8]
0186e540  scvtf    s0, w9
0186e544  ldr      x11, [sp, #0xd0]
0186e548  ldp      w10, w25, [sp, #0xc8]
0186e54c  ldr      x24, [sp, #0xe8]
0186e550  mul      x8, x8, x9
0186e554  ldr      w28, [sp, #0xdc]
0186e558  fcvtzu   w9, s0, #2
0186e55c  add      x8, x11, x8, lsl #3
0186e560  ldr      x11, [sp, #0xb8]
0186e564  bfi      w10, w9, #1, #0x1f
0186e568  ubfx     w9, w9, #1, #0x1e
0186e56c  ldr      x11, [x8, x11, lsl #3]
0186e570  mul      x27, x12, x9
0186e574  ucvtf    s0, w10
0186e578  ldr      x10, [sp, #0xc0]
0186e57c  ldr      x8, [x8, x10, lsl #3]
0186e580  add      w10, w9, #1
0186e584  fadd     s12, s0, s11
0186e588  add      x20, x11, #0x80
0186e58c  mul      x9, x12, x10
0186e590  add      x21, x8, #0x80
0186e594  str      x9, [sp, #0xf8]
0186e598  ldr      x9, [sp, #0x108]
0186e59c  lsr      w8, w28, #3
0186e5a0  sub      x1, x20, #0x80
0186e5a4  add      x0, sp, #0x520
0186e5a8  mov      w2, #0x80
0186e5ac  sub      x22, x21, #0x80
0186e5b0  mul      x8, x9, x8
0186e5b4  ldr      x9, [sp, #0x110]
0186e5b8  add      x26, x9, x8, lsl #3
0186e5bc  add      x8, x26, x27, lsl #3
0186e5c0  ldr      x19, [x8, x23, lsl #3]
0186e5c4  bl       #0x2f14a00  ; <memcpy>
0186e5c8  add      x0, sp, #0x3a0
0186e5cc  mov      x1, x22
0186e5d0  mov      w2, #0x80
0186e5d4  bl       #0x2f14a60  ; <memmove>
0186e5d8  add      x0, sp, #0x320
0186e5dc  add      x1, sp, #0x520
0186e5e0  mov      w2, #0x80
0186e5e4  bl       #0x2f14a00  ; <memcpy>
0186e5e8  add      x8, sp, #0x420
0186e5ec  add      x0, sp, #0x3a0
0186e5f0  add      x1, sp, #0x320
0186e5f4  bl       #0x1866d30
0186e5f8  and      w22, w25, #0xe
0186e5fc  add      x1, sp, #0x420
0186e600  mov      w2, #0x80
0186e604  add      x0, x19, x22, lsl #7
0186e608  bl       #0x2f14a60  ; <memmove>
0186e60c  orr      w29, w22, #1
0186e610  ldr      x1, [sp, #0x668]
0186e614  mov      w2, #0x80
0186e618  add      x0, x19, x29, lsl #7
0186e61c  bl       #0x2f14a60  ; <memmove>
0186e620  fcmp     s12, s9
0186e624  b.ge     #0x186e6b4
0186e628  ldr      x8, [sp, #0xf8]
0186e62c  add      x0, sp, #0x5a0
0186e630  mov      x1, x21
0186e634  mov      w2, #0x80
0186e638  add      x8, x26, x8, lsl #3
0186e63c  ldr      x19, [x8, x23, lsl #3]
0186e640  bl       #0x2f14a00  ; <memcpy>
0186e644  add      x0, sp, #0x520
0186e648  mov      x1, x20
0186e64c  mov      w2, #0x80
0186e650  bl       #0x2f14a00  ; <memcpy>
0186e654  add      x0, sp, #0x1a0
0186e658  add      x1, sp, #0x5a0
0186e65c  mov      w2, #0x80
0186e660  bl       #0x2f14a00  ; <memcpy>
0186e664  add      x0, sp, #0x120
0186e668  add      x1, sp, #0x520
0186e66c  mov      w2, #0x80
0186e670  bl       #0x2f14a00  ; <memcpy>
0186e674  add      x8, sp, #0x220
0186e678  add      x0, sp, #0x1a0
0186e67c  add      x1, sp, #0x120
0186e680  bl       #0x1866d30
0186e684  add      x0, sp, #0x420
0186e688  add      x1, sp, #0x220
0186e68c  mov      w2, #0x100
0186e690  bl       #0x2f14a00  ; <memcpy>
0186e694  add      x0, x19, x22, lsl #7
0186e698  add      x1, sp, #0x420
0186e69c  mov      w2, #0x80
0186e6a0  bl       #0x2f14a60  ; <memmove>
0186e6a4  add      x0, x19, x29, lsl #7
0186e6a8  ldr      x1, [sp, #0x668]
0186e6ac  mov      w2, #0x80
0186e6b0  bl       #0x2f14a60  ; <memmove>
0186e6b4  ldr      w8, [sp, #0x104]
0186e6b8  add      x20, x20, #0x100
0186e6bc  add      x21, x21, #0x100
0186e6c0  subs     x24, x24, #1
0186e6c4  add      w25, w25, w8
0186e6c8  ldr      w8, [sp, #0x11c]
0186e6cc  add      w28, w28, w8
0186e6d0  b.ne     #0x186e598
0186e6d4  ldr      x9, [sp, #0xf0]
0186e6d8  ldr      x8, [sp, #0xe0]
0186e6dc  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
0186e6e0  cmp      x9, x8
0186e6e4  str      x9, [sp, #0xf0]
0186e6e8  b.ne     #0x186e530
0186e6ec  ldp      x8, x9, [sp, #0x98]
0186e6f0  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
0186e6f4  cmp      x9, x8
0186e6f8  str      x9, [sp, #0xa0]
0186e6fc  b.ne     #0x186e4c8
0186e700  ldr      w8, [sp, #0x44]
0186e704  ldr      x9, [sp, #0x70]
0186e708  add      w9, w9, w8
0186e70c  ldr      x8, [sp, #0x58]
0186e710  cmp      w9, w8
0186e714  b.lt     #0x186e444
0186e718  ldp      x8, x9, [sp, #0x20]
0186e71c  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
0186e720  cmp      x9, x8
0186e724  b.ne     #0x186e428
0186e728  ldp      w8, w9, [sp, #8]
0186e72c  add      w9, w9, #1
0186e730  cmp      w9, w8
0186e734  str      w9, [sp, #0xc]
0186e738  b.ne     #0x186e418
0186e73c  mov      w0, wzr
0186e740  add      sp, sp, #0x660
0186e744  ldp      x20, x19, [sp, #0x80]
0186e748  ldp      x22, x21, [sp, #0x70]
0186e74c  ldp      x24, x23, [sp, #0x60]
0186e750  ldp      x26, x25, [sp, #0x50]
0186e754  ldp      x28, x27, [sp, #0x40]
0186e758  ldp      x29, x30, [sp, #0x30]
0186e75c  ldp      d9, d8, [sp, #0x20]
0186e760  ldp      d11, d10, [sp, #0x10]
0186e764  ldr      d12, [sp], #0x90
0186e768  ret      
