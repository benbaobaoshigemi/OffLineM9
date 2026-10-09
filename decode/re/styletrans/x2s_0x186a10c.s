; function 0x186a10c size 0x7dc 
0186a10c  str      d12, [sp, #-0x90]!
0186a110  stp      d11, d10, [sp, #0x10]
0186a114  stp      d9, d8, [sp, #0x20]
0186a118  stp      x29, x30, [sp, #0x30]
0186a11c  stp      x28, x27, [sp, #0x40]
0186a120  stp      x26, x25, [sp, #0x50]
0186a124  stp      x24, x23, [sp, #0x60]
0186a128  stp      x22, x21, [sp, #0x70]
0186a12c  stp      x20, x19, [sp, #0x80]
0186a130  sub      sp, sp, #0x660
0186a134  ldr      x12, [x1, #0x20]
0186a138  mov      x8, x3
0186a13c  ldr      x13, [x0, #0x20]
0186a140  mov      x20, x1
0186a144  ldr      x11, [x2, #0x20]
0186a148  mov      x19, x0
0186a14c  ldp      x25, x14, [x12, #0x10]
0186a150  mov      x10, xzr
0186a154  mov      x9, xzr
0186a158  ldp      x22, x24, [x12, #0x20]
0186a15c  add      x11, x11, #0x18
0186a160  str      xzr, [sp, #0x428]
0186a164  ldp      x12, x27, [x13, #0x10]
0186a168  str      x14, [sp, #0x80]
0186a16c  ldp      x21, x23, [x13, #0x20]
0186a170  str      xzr, [sp, #0x430]
0186a174  str      x12, [sp, #0x60]
0186a178  add      x12, sp, #0x420
0186a17c  str      xzr, [sp, #0x438]
0186a180  add      x13, x12, x10
0186a184  ldr      x14, [x11, x10]
0186a188  add      x10, x10, #8
0186a18c  cmp      x10, #0x18
0186a190  ldr      x13, [x13, #8]
0186a194  nop      
0186a198  madd     x9, x14, x9, x13
0186a19c  b.ne     #0x186a180
0186a1a0  ldr      x10, [x2, #0x28]
0186a1a4  add      x2, sp, #0x420
0186a1a8  movi     v1.2d, #0000000000000000
0186a1ac  add      x3, sp, #0x220
0186a1b0  ldr      s0, [x10, x9, lsl #2]
0186a1b4  mov      x0, x8
0186a1b8  ldr      x9, [x8]
0186a1bc  mov      w1, #4
0186a1c0  str      xzr, [sp, #0x228]
0186a1c4  str      q1, [sp, #0x430]
0186a1c8  ldr      x9, [x9, #0x50]
0186a1cc  scvtf    s8, s0
0186a1d0  str      q1, [sp, #0x420]
0186a1d4  str      xzr, [sp, #0x220]
0186a1d8  blr      x9
0186a1dc  ldr      x8, [sp, #0x220]
0186a1e0  mov      x1, x0
0186a1e4  ldr      x0, [sp, #0x228]
0186a1e8  ldr      x8, [x8, #8]
0186a1ec  blr      x8
0186a1f0  ldr      x8, [x20, #0x18]
0186a1f4  mov      x10, xzr
0186a1f8  mov      w12, #1
0186a1fc  add      x13, sp, #0x640
0186a200  adrp     x9, #0x5de000
0186a204  add      x9, x9, #0xe08  ; =0x5dee08
0186a208  add      x11, x8, #0x50
0186a20c  str      xzr, [sp, #0x648]
0186a210  str      xzr, [sp, #0x640]
0186a214  str      xzr, [sp, #0x650]
0186a218  add      x14, x9, x10
0186a21c  ldr      x15, [x11, x10]
0186a220  ldr      x14, [x14, #0x18]
0186a224  udiv     x14, x15, x14
0186a228  mul      x12, x14, x12
0186a22c  add      x14, x13, x10
0186a230  sub      x10, x10, #8
0186a234  cmn      x10, #0x18
0186a238  str      x12, [x14, #0x10]
0186a23c  b.ne     #0x186a218
0186a240  ldr      x12, [x19, #0x18]
0186a244  fcvtzs   w11, s8
0186a248  mov      x10, xzr
0186a24c  add      x13, sp, #0x620
0186a250  str      xzr, [sp, #0x628]
0186a254  str      w11, [sp, #0x11c]
0186a258  mov      w11, #1
0186a25c  add      x12, x12, #0x50
0186a260  str      xzr, [sp, #0x620]
0186a264  str      xzr, [sp, #0x630]
0186a268  add      x14, x9, x10
0186a26c  ldr      x15, [x12, x10]
0186a270  ldr      x14, [x14, #0x18]
0186a274  udiv     x14, x15, x14
0186a278  mul      x11, x14, x11
0186a27c  add      x14, x13, x10
0186a280  sub      x10, x10, #8
0186a284  cmn      x10, #0x18
0186a288  str      x11, [x14, #0x10]
0186a28c  b.ne     #0x186a268
0186a290  fcvtzs   w9, s0
0186a294  mov      x10, xzr
0186a298  movi     v1.2d, #0000000000000000
0186a29c  add      x11, sp, #0x220
0186a2a0  add      x12, sp, #0x420
0186a2a4  str      w9, [sp, #0x6c]
0186a2a8  add      x9, x8, #0x58
0186a2ac  stp      q1, q1, [sp, #0x220]
0186a2b0  str      q1, [sp, #0x420]
0186a2b4  str      q1, [sp, #0x430]
0186a2b8  ldrb     w13, [x9, x10]
0186a2bc  ldr      x14, [x11, x10, lsl #3]
0186a2c0  add      x13, x14, x13
0186a2c4  str      x13, [x12, x10, lsl #3]
0186a2c8  add      x10, x10, #1
0186a2cc  cmp      x10, #4
0186a2d0  b.ne     #0x186a2b8
0186a2d4  ldp      x11, x13, [x8, #0x40]
0186a2d8  movi     v0.2d, #0000000000000000
0186a2dc  mov      x10, xzr
0186a2e0  ldr      x12, [sp, #0x420]
0186a2e4  ldr      x15, [sp, #0x428]
0186a2e8  lsr      x11, x11, #3
0186a2ec  ldr      x8, [x8, #0x50]
0186a2f0  ldr      x16, [sp, #0x438]
0186a2f4  mul      x14, x11, x12
0186a2f8  lsr      x12, x13, #2
0186a2fc  lsr      x8, x8, #5
0186a300  ldr      x1, [x20, #0x28]
0186a304  add      x13, x14, x15, lsr #3
0186a308  ldr      x14, [sp, #0x430]
0186a30c  mul      x13, x13, x12
0186a310  str      x1, [sp, #0x88]
0186a314  mov      w17, w14
0186a318  add      x13, x13, x14, lsr #2
0186a31c  lsr      x17, x17, #1
0186a320  mul      x0, x13, x8
0186a324  and      x13, x14, #1
0186a328  lsl      x14, x16, #1
0186a32c  bfi      x13, x17, #6, #1
0186a330  add      x0, x0, x16, lsr #5
0186a334  mov      w16, w15
0186a338  ubfiz    x16, x16, #7, #3
0186a33c  add      x17, sp, #0x220
0186a340  ldr      x15, [x1, x0, lsl #3]
0186a344  add      x0, sp, #0x420
0186a348  stp      q0, q0, [sp, #0x220]
0186a34c  str      q0, [sp, #0x430]
0186a350  str      q0, [sp, #0x420]
0186a354  ldrb     w1, [x9, x10]
0186a358  ldr      x2, [x17, x10, lsl #3]
0186a35c  add      x1, x2, x1
0186a360  str      x1, [x0, x10, lsl #3]
0186a364  add      x10, x10, #1
0186a368  cmp      x10, #4
0186a36c  b.ne     #0x186a354
0186a370  ldr      x9, [sp, #0x420]
0186a374  ldr      x10, [sp, #0x428]
0186a378  mul      x9, x9, x11
0186a37c  ldr      x11, [sp, #0x438]
0186a380  add      x9, x9, x10, lsr #3
0186a384  ldr      x10, [sp, #0x430]
0186a388  mul      x9, x9, x12
0186a38c  add      x9, x9, x10, lsr #2
0186a390  orr      w10, w13, w16
0186a394  mul      x8, x9, x8
0186a398  and      w9, w14, #0x3e
0186a39c  orr      w9, w10, w9
0186a3a0  add      x8, x8, x11, lsr #5
0186a3a4  ldr      x11, [sp, #0x88]
0186a3a8  add      x9, x15, w9, uxtw #1
0186a3ac  ldr      x8, [x11, x8, lsl #3]
0186a3b0  sub      x8, x9, x8
0186a3b4  lsr      x9, x8, #1
0186a3b8  ubfx     x8, x8, #1, #1
0186a3bc  ubfx     x9, x9, #5, #0x1b
0186a3c0  and      w9, w9, #0x1e
0186a3c4  orr      w8, w9, w8
0186a3c8  ldr      w9, [sp, #0x11c]
0186a3cc  cmp      w9, #2
0186a3d0  b.ne     #0x186a48c
0186a3d4  cbnz     w8, #0x186a48c
0186a3d8  ldp      x12, x13, [sp, #0x80]
0186a3dc  lsl      w11, w22, #1
0186a3e0  str      w22, [sp, #0x430]
0186a3e4  ldr      x9, [sp, #0x650]
0186a3e8  str      w24, [sp, #0x438]
0186a3ec  ldr      x10, [sp, #0x648]
0186a3f0  str      w23, [sp, #0x238]
0186a3f4  lsl      w8, w12, #1
0186a3f8  str      w12, [sp, #0x434]
0186a3fc  ldr      x12, [sp, #0x628]
0186a400  str      w9, [sp, #0x428]
0186a404  ldr      x20, [sp, #0x640]
0186a408  cmp      w8, w27
0186a40c  ldr      x9, [x19, #0x28]
0186a410  str      w10, [sp, #0x42c]
0186a414  ldr      x22, [sp, #0x60]
0186a418  str      w12, [sp, #0x22c]
0186a41c  ldr      w12, [sp, #0x6c]
0186a420  csel     w8, w8, w27, lt
0186a424  ldr      w10, [sp, #0x630]
0186a428  cmp      w11, w21
0186a42c  str      x9, [sp, #0x220]
0186a430  mul      w9, w20, w22
0186a434  csel     w11, w11, w21, lt
0186a438  cmp      w12, #0
0186a43c  csel     w19, w10, w9, eq
0186a440  str      x13, [sp, #0x420]
0186a444  str      w10, [sp, #0x228]
0186a448  str      w11, [sp, #0x230]
0186a44c  str      w8, [sp, #0x234]
0186a450  cbz      x22, #0x186a8b8
0186a454  ldr      x21, [sp, #0x620]
0186a458  add      x0, sp, #0x220
0186a45c  add      x1, sp, #0x420
0186a460  mov      w2, w19
0186a464  bl       #0x14f5210
0186a468  ldr      x8, [sp, #0x420]
0186a46c  subs     x22, x22, #1
0186a470  ldr      x9, [sp, #0x220]
0186a474  add      x8, x8, x20, lsl #3
0186a478  add      x9, x9, x21, lsl #3
0186a47c  str      x8, [sp, #0x420]
0186a480  str      x9, [sp, #0x220]
0186a484  b.ne     #0x186a458
0186a488  b        #0x186a8b8
0186a48c  cbz      w8, #0x186a4a8
0186a490  adrp     x1, #0x56a000
0186a494  add      x1, x1, #0x886  ; "WARNING: FIXME: x2s has start!=0
"
0186a498  mov      w0, #1
0186a49c  bl       #0x2f15ff0  ; <qnndsp_log>
0186a4a0  ldr      x8, [x20, #0x28]
0186a4a4  str      x8, [sp, #0x88]
0186a4a8  ldr      w9, [sp, #0x6c]
0186a4ac  add      x8, x24, #0x1f
0186a4b0  lsr      x8, x8, #5
0186a4b4  cmp      w9, #0
0186a4b8  csel     w9, w25, w8, eq
0186a4bc  csel     w8, w8, w25, eq
0186a4c0  cmp      w9, #1
0186a4c4  str      x8, [sp, #0x58]
0186a4c8  str      w9, [sp, #8]
0186a4cc  b.lt     #0x186a8b8
0186a4d0  ldr      x9, [sp, #0x650]
0186a4d4  ucvtf    s0, x22
0186a4d8  ldr      x8, [x19, #0x28]
0186a4dc  fmov     s1, #0.25000000
0186a4e0  ldr      x10, [sp, #0x80]
0186a4e4  ucvtf    s9, x21
0186a4e8  str      x9, [sp, #0xb0]
0186a4ec  ldr      w9, [sp, #0x6c]
0186a4f0  ldr      x12, [sp, #0x628]
0186a4f4  str      x8, [sp, #0x110]
0186a4f8  add      x8, x23, #0x1f
0186a4fc  fmul     s0, s0, s1
0186a500  cmp      w9, #0
0186a504  ldr      x9, [sp, #0x648]
0186a508  str      x12, [sp, #0x108]
0186a50c  lsr      x12, x8, #5
0186a510  ldr      x11, [sp, #0x640]
0186a514  ucvtf    s8, x10
0186a518  str      x9, [sp, #0x78]
0186a51c  add      x9, x10, #7
0186a520  and      x8, x9, #0x7fffffff8
0186a524  ldr      x10, [sp, #0x620]
0186a528  fmov     s10, #8.00000000
0186a52c  fmov     s11, #4.00000000
0186a530  str      wzr, [sp, #0xc]
0186a534  stp      x8, x12, [sp, #0x48]
0186a538  ldr      x8, [sp, #0x60]
0186a53c  csel     w12, w12, w8, eq
0186a540  fcvtps   w8, s0
0186a544  str      x8, [sp, #0xe0]
0186a548  csinc    x8, x11, xzr, ne
0186a54c  stp      x8, x11, [sp, #0x30]
0186a550  ldr      x8, [sp, #0x630]
0186a554  str      x8, [sp, #0xa8]
0186a558  csinc    x8, x10, xzr, ne
0186a55c  str      x8, [sp, #0x10]
0186a560  add      x8, sp, #0x420
0186a564  add      x8, x8, #0x80
0186a568  str      x8, [sp, #0x668]
0186a56c  lsl      w8, w12, #1
0186a570  str      w8, [sp, #0x44]
0186a574  ldr      x8, [sp, #0x58]
0186a578  sxtw     x8, w8
0186a57c  stp      x8, x12, [sp, #0x18]
0186a580  ubfx     x8, x9, #3, #0x20
0186a584  str      x8, [sp, #0x98]
0186a588  ldr      w8, [sp, #0x11c]
0186a58c  lsl      w8, w8, #1
0186a590  str      w8, [sp, #0x104]
0186a594  ldr      x8, [sp, #0x20]
0186a598  cmp      w8, #1
0186a59c  b.lt     #0x186a8a4
0186a5a0  mov      x9, xzr
0186a5a4  ldr      x8, [sp, #0x18]
0186a5a8  str      x9, [sp, #0x28]
0186a5ac  cmp      x9, x8
0186a5b0  b.ge     #0x186a894
0186a5b4  ldr      x8, [sp, #0x10]
0186a5b8  ldr      x9, [sp, #0x28]
0186a5bc  mul      x23, x8, x9
0186a5c0  ldr      w8, [sp, #0x6c]
0186a5c4  str      x9, [sp, #0x70]
0186a5c8  cbz      w8, #0x186a5dc
0186a5cc  sxtw     x8, w9
0186a5d0  ldr      x9, [sp, #0x60]
0186a5d4  udiv     x8, x8, x9
0186a5d8  b        #0x186a5e4
0186a5dc  ldr      x8, [sp, #0x50]
0186a5e0  sdiv     w8, w9, w8
0186a5e4  ldr      x9, [sp, #0x48]
0186a5e8  cbz      x9, #0x186a87c
0186a5ec  and      w11, w8, #1
0186a5f0  ldr      x12, [sp, #0x70]
0186a5f4  ldr      x10, [sp, #0x60]
0186a5f8  ubfx     x8, x8, #1, #0x1f
0186a5fc  str      xzr, [sp, #0xa0]
0186a600  str      w11, [sp, #0xc8]
0186a604  ldr      x11, [sp, #0x38]
0186a608  add      x10, x10, w12, sxtw
0186a60c  mov      w9, w12
0186a610  sxtw     x9, w9
0186a614  str      x8, [sp, #0x90]
0186a618  mul      x10, x11, x10
0186a61c  ldr      x11, [sp, #0x50]
0186a620  add      w11, w12, w11
0186a624  ldr      x12, [sp, #0x30]
0186a628  mul      x9, x12, x9
0186a62c  str      x9, [sp, #0xc0]
0186a630  sxtw     x9, w11
0186a634  ldr      w11, [sp, #0x6c]
0186a638  cmp      w11, #0
0186a63c  csel     x9, x9, x10, eq
0186a640  str      x9, [sp, #0xb8]
0186a644  ldr      x8, [sp, #0xe0]
0186a648  cmp      w8, #1
0186a64c  b.lt     #0x186a868
0186a650  ldr      x10, [sp, #0xa0]
0186a654  ldr      x9, [sp, #0x80]
0186a658  ldr      x11, [sp, #0x90]
0186a65c  ucvtf    s0, w10
0186a660  fcvtzu   w8, s0, #3
0186a664  ucvtf    s0, w8
0186a668  sub      x9, x9, w8, uxtw
0186a66c  ucvtf    s1, x9
0186a670  ldr      x9, [sp, #0x78]
0186a674  fadd     s0, s0, s10
0186a678  mul      x9, x9, x10
0186a67c  ldr      w10, [sp, #0x11c]
0186a680  fcmp     s0, s8
0186a684  madd     w10, w10, w8, w11
0186a688  fcsel    s0, s1, s10, gt
0186a68c  str      w10, [sp, #0xdc]
0186a690  fcvtzu   w8, s0
0186a694  stp      x8, xzr, [sp, #0xe8]
0186a698  ldr      x8, [sp, #0x88]
0186a69c  add      x8, x8, x9, lsl #3
0186a6a0  str      x8, [sp, #0xd0]
0186a6a4  lsl      w8, w10, #1
0186a6a8  str      w8, [sp, #0xcc]
0186a6ac  ldr      x8, [sp, #0xe8]
0186a6b0  cbz      w8, #0x186a850
0186a6b4  ldr      x9, [sp, #0xf0]
0186a6b8  ldp      x12, x8, [sp, #0xa8]
0186a6bc  scvtf    s0, w9
0186a6c0  ldr      x11, [sp, #0xd0]
0186a6c4  ldp      w10, w25, [sp, #0xc8]
0186a6c8  ldr      x24, [sp, #0xe8]
0186a6cc  mul      x8, x8, x9
0186a6d0  ldr      w28, [sp, #0xdc]
0186a6d4  fcvtzu   w9, s0, #2
0186a6d8  add      x8, x11, x8, lsl #3
0186a6dc  ldr      x11, [sp, #0xb8]
0186a6e0  bfi      w10, w9, #1, #0x1f
0186a6e4  ubfx     w9, w9, #1, #0x1e
0186a6e8  ldr      x11, [x8, x11, lsl #3]
0186a6ec  mul      x27, x12, x9
0186a6f0  ucvtf    s0, w10
0186a6f4  ldr      x10, [sp, #0xc0]
0186a6f8  ldr      x8, [x8, x10, lsl #3]
0186a6fc  add      w10, w9, #1
0186a700  fadd     s12, s0, s11
0186a704  add      x20, x11, #0x80
0186a708  mul      x9, x12, x10
0186a70c  add      x21, x8, #0x80
0186a710  str      x9, [sp, #0xf8]
0186a714  ldr      x9, [sp, #0x108]
0186a718  lsr      w8, w28, #3
0186a71c  sub      x1, x20, #0x80
0186a720  add      x0, sp, #0x520
0186a724  mov      w2, #0x80
0186a728  sub      x22, x21, #0x80
0186a72c  mul      x8, x9, x8
0186a730  ldr      x9, [sp, #0x110]
0186a734  add      x26, x9, x8, lsl #3
0186a738  add      x8, x26, x27, lsl #3
0186a73c  ldr      x19, [x8, x23, lsl #3]
0186a740  bl       #0x2f14a00  ; <memcpy>
0186a744  add      x0, sp, #0x3a0
0186a748  mov      x1, x22
0186a74c  mov      w2, #0x80
0186a750  bl       #0x2f14a60  ; <memmove>
0186a754  add      x0, sp, #0x320
0186a758  add      x1, sp, #0x520
0186a75c  mov      w2, #0x80
0186a760  bl       #0x2f14a00  ; <memcpy>
0186a764  add      x8, sp, #0x420
0186a768  add      x0, sp, #0x3a0
0186a76c  add      x1, sp, #0x320
0186a770  bl       #0x1866d30
0186a774  and      w22, w25, #0xe
0186a778  add      x1, sp, #0x420
0186a77c  mov      w2, #0x80
0186a780  add      x0, x19, x22, lsl #7
0186a784  bl       #0x2f14a60  ; <memmove>
0186a788  orr      w29, w22, #1
0186a78c  ldr      x1, [sp, #0x668]
0186a790  mov      w2, #0x80
0186a794  add      x0, x19, x29, lsl #7
0186a798  bl       #0x2f14a60  ; <memmove>
0186a79c  fcmp     s12, s9
0186a7a0  b.ge     #0x186a830
0186a7a4  ldr      x8, [sp, #0xf8]
0186a7a8  add      x0, sp, #0x5a0
0186a7ac  mov      x1, x21
0186a7b0  mov      w2, #0x80
0186a7b4  add      x8, x26, x8, lsl #3
0186a7b8  ldr      x19, [x8, x23, lsl #3]
0186a7bc  bl       #0x2f14a00  ; <memcpy>
0186a7c0  add      x0, sp, #0x520
0186a7c4  mov      x1, x20
0186a7c8  mov      w2, #0x80
0186a7cc  bl       #0x2f14a00  ; <memcpy>
0186a7d0  add      x0, sp, #0x1a0
0186a7d4  add      x1, sp, #0x5a0
0186a7d8  mov      w2, #0x80
0186a7dc  bl       #0x2f14a00  ; <memcpy>
0186a7e0  add      x0, sp, #0x120
0186a7e4  add      x1, sp, #0x520
0186a7e8  mov      w2, #0x80
0186a7ec  bl       #0x2f14a00  ; <memcpy>
0186a7f0  add      x8, sp, #0x220
0186a7f4  add      x0, sp, #0x1a0
0186a7f8  add      x1, sp, #0x120
0186a7fc  bl       #0x1866d30
0186a800  add      x0, sp, #0x420
0186a804  add      x1, sp, #0x220
0186a808  mov      w2, #0x100
0186a80c  bl       #0x2f14a00  ; <memcpy>
0186a810  add      x0, x19, x22, lsl #7
0186a814  add      x1, sp, #0x420
0186a818  mov      w2, #0x80
0186a81c  bl       #0x2f14a60  ; <memmove>
0186a820  add      x0, x19, x29, lsl #7
0186a824  ldr      x1, [sp, #0x668]
0186a828  mov      w2, #0x80
0186a82c  bl       #0x2f14a60  ; <memmove>
0186a830  ldr      w8, [sp, #0x104]
0186a834  add      x20, x20, #0x100
0186a838  add      x21, x21, #0x100
0186a83c  subs     x24, x24, #1
0186a840  add      w25, w25, w8
0186a844  ldr      w8, [sp, #0x11c]
0186a848  add      w28, w28, w8
0186a84c  b.ne     #0x186a714
0186a850  ldr      x9, [sp, #0xf0]
0186a854  ldr      x8, [sp, #0xe0]
0186a858  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
0186a85c  cmp      x9, x8
0186a860  str      x9, [sp, #0xf0]
0186a864  b.ne     #0x186a6ac
0186a868  ldp      x8, x9, [sp, #0x98]
0186a86c  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
0186a870  cmp      x9, x8
0186a874  str      x9, [sp, #0xa0]
0186a878  b.ne     #0x186a644
0186a87c  ldr      w8, [sp, #0x44]
0186a880  ldr      x9, [sp, #0x70]
0186a884  add      w9, w9, w8
0186a888  ldr      x8, [sp, #0x58]
0186a88c  cmp      w9, w8
0186a890  b.lt     #0x186a5c0
0186a894  ldp      x8, x9, [sp, #0x20]
0186a898  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
0186a89c  cmp      x9, x8
0186a8a0  b.ne     #0x186a5a4
0186a8a4  ldp      w8, w9, [sp, #8]
0186a8a8  add      w9, w9, #1
0186a8ac  cmp      w9, w8
0186a8b0  str      w9, [sp, #0xc]
0186a8b4  b.ne     #0x186a594
0186a8b8  mov      w0, wzr
0186a8bc  add      sp, sp, #0x660
0186a8c0  ldp      x20, x19, [sp, #0x80]
0186a8c4  ldp      x22, x21, [sp, #0x70]
0186a8c8  ldp      x24, x23, [sp, #0x60]
0186a8cc  ldp      x26, x25, [sp, #0x50]
0186a8d0  ldp      x28, x27, [sp, #0x40]
0186a8d4  ldp      x29, x30, [sp, #0x30]
0186a8d8  ldp      d9, d8, [sp, #0x20]
0186a8dc  ldp      d11, d10, [sp, #0x10]
0186a8e0  ldr      d12, [sp], #0x90
0186a8e4  ret      
