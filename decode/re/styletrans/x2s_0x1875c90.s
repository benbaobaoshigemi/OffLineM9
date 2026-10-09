; function 0x1875c90 size 0x7dc 
01875c90  str      d12, [sp, #-0x90]!
01875c94  stp      d11, d10, [sp, #0x10]
01875c98  stp      d9, d8, [sp, #0x20]
01875c9c  stp      x29, x30, [sp, #0x30]
01875ca0  stp      x28, x27, [sp, #0x40]
01875ca4  stp      x26, x25, [sp, #0x50]
01875ca8  stp      x24, x23, [sp, #0x60]
01875cac  stp      x22, x21, [sp, #0x70]
01875cb0  stp      x20, x19, [sp, #0x80]
01875cb4  sub      sp, sp, #0x660
01875cb8  ldr      x12, [x1, #0x20]
01875cbc  mov      x8, x3
01875cc0  ldr      x13, [x0, #0x20]
01875cc4  mov      x20, x1
01875cc8  ldr      x11, [x2, #0x20]
01875ccc  mov      x19, x0
01875cd0  ldp      x25, x14, [x12, #0x10]
01875cd4  mov      x10, xzr
01875cd8  mov      x9, xzr
01875cdc  ldp      x22, x24, [x12, #0x20]
01875ce0  add      x11, x11, #0x18
01875ce4  str      xzr, [sp, #0x428]
01875ce8  ldp      x12, x27, [x13, #0x10]
01875cec  str      x14, [sp, #0x80]
01875cf0  ldp      x21, x23, [x13, #0x20]
01875cf4  str      xzr, [sp, #0x430]
01875cf8  str      x12, [sp, #0x60]
01875cfc  add      x12, sp, #0x420
01875d00  str      xzr, [sp, #0x438]
01875d04  add      x13, x12, x10
01875d08  ldr      x14, [x11, x10]
01875d0c  add      x10, x10, #8
01875d10  cmp      x10, #0x18
01875d14  ldr      x13, [x13, #8]
01875d18  nop      
01875d1c  madd     x9, x14, x9, x13
01875d20  b.ne     #0x1875d04
01875d24  ldr      x10, [x2, #0x28]
01875d28  add      x2, sp, #0x420
01875d2c  movi     v1.2d, #0000000000000000
01875d30  add      x3, sp, #0x220
01875d34  ldr      s0, [x10, x9, lsl #2]
01875d38  mov      x0, x8
01875d3c  ldr      x9, [x8]
01875d40  mov      w1, #4
01875d44  str      xzr, [sp, #0x228]
01875d48  str      q1, [sp, #0x430]
01875d4c  ldr      x9, [x9, #0x50]
01875d50  scvtf    s8, s0
01875d54  str      q1, [sp, #0x420]
01875d58  str      xzr, [sp, #0x220]
01875d5c  blr      x9
01875d60  ldr      x8, [sp, #0x220]
01875d64  mov      x1, x0
01875d68  ldr      x0, [sp, #0x228]
01875d6c  ldr      x8, [x8, #8]
01875d70  blr      x8
01875d74  ldr      x8, [x20, #0x18]
01875d78  mov      x10, xzr
01875d7c  mov      w12, #1
01875d80  add      x13, sp, #0x640
01875d84  adrp     x9, #0x5de000
01875d88  add      x9, x9, #0xe08  ; =0x5dee08
01875d8c  add      x11, x8, #0x50
01875d90  str      xzr, [sp, #0x648]
01875d94  str      xzr, [sp, #0x640]
01875d98  str      xzr, [sp, #0x650]
01875d9c  add      x14, x9, x10
01875da0  ldr      x15, [x11, x10]
01875da4  ldr      x14, [x14, #0x18]
01875da8  udiv     x14, x15, x14
01875dac  mul      x12, x14, x12
01875db0  add      x14, x13, x10
01875db4  sub      x10, x10, #8
01875db8  cmn      x10, #0x18
01875dbc  str      x12, [x14, #0x10]
01875dc0  b.ne     #0x1875d9c
01875dc4  ldr      x12, [x19, #0x18]
01875dc8  fcvtzs   w11, s8
01875dcc  mov      x10, xzr
01875dd0  add      x13, sp, #0x620
01875dd4  str      xzr, [sp, #0x628]
01875dd8  str      w11, [sp, #0x11c]
01875ddc  mov      w11, #1
01875de0  add      x12, x12, #0x50
01875de4  str      xzr, [sp, #0x620]
01875de8  str      xzr, [sp, #0x630]
01875dec  add      x14, x9, x10
01875df0  ldr      x15, [x12, x10]
01875df4  ldr      x14, [x14, #0x18]
01875df8  udiv     x14, x15, x14
01875dfc  mul      x11, x14, x11
01875e00  add      x14, x13, x10
01875e04  sub      x10, x10, #8
01875e08  cmn      x10, #0x18
01875e0c  str      x11, [x14, #0x10]
01875e10  b.ne     #0x1875dec
01875e14  fcvtzs   w9, s0
01875e18  mov      x10, xzr
01875e1c  movi     v1.2d, #0000000000000000
01875e20  add      x11, sp, #0x220
01875e24  add      x12, sp, #0x420
01875e28  str      w9, [sp, #0x6c]
01875e2c  add      x9, x8, #0x58
01875e30  stp      q1, q1, [sp, #0x220]
01875e34  str      q1, [sp, #0x420]
01875e38  str      q1, [sp, #0x430]
01875e3c  ldrb     w13, [x9, x10]
01875e40  ldr      x14, [x11, x10, lsl #3]
01875e44  add      x13, x14, x13
01875e48  str      x13, [x12, x10, lsl #3]
01875e4c  add      x10, x10, #1
01875e50  cmp      x10, #4
01875e54  b.ne     #0x1875e3c
01875e58  ldp      x11, x13, [x8, #0x40]
01875e5c  movi     v0.2d, #0000000000000000
01875e60  mov      x10, xzr
01875e64  ldr      x12, [sp, #0x420]
01875e68  ldr      x15, [sp, #0x428]
01875e6c  lsr      x11, x11, #3
01875e70  ldr      x8, [x8, #0x50]
01875e74  ldr      x16, [sp, #0x438]
01875e78  mul      x14, x11, x12
01875e7c  lsr      x12, x13, #2
01875e80  lsr      x8, x8, #5
01875e84  ldr      x1, [x20, #0x28]
01875e88  add      x13, x14, x15, lsr #3
01875e8c  ldr      x14, [sp, #0x430]
01875e90  mul      x13, x13, x12
01875e94  str      x1, [sp, #0x88]
01875e98  mov      w17, w14
01875e9c  add      x13, x13, x14, lsr #2
01875ea0  lsr      x17, x17, #1
01875ea4  mul      x0, x13, x8
01875ea8  and      x13, x14, #1
01875eac  lsl      x14, x16, #1
01875eb0  bfi      x13, x17, #6, #1
01875eb4  add      x0, x0, x16, lsr #5
01875eb8  mov      w16, w15
01875ebc  ubfiz    x16, x16, #7, #3
01875ec0  add      x17, sp, #0x220
01875ec4  ldr      x15, [x1, x0, lsl #3]
01875ec8  add      x0, sp, #0x420
01875ecc  stp      q0, q0, [sp, #0x220]
01875ed0  str      q0, [sp, #0x430]
01875ed4  str      q0, [sp, #0x420]
01875ed8  ldrb     w1, [x9, x10]
01875edc  ldr      x2, [x17, x10, lsl #3]
01875ee0  add      x1, x2, x1
01875ee4  str      x1, [x0, x10, lsl #3]
01875ee8  add      x10, x10, #1
01875eec  cmp      x10, #4
01875ef0  b.ne     #0x1875ed8
01875ef4  ldr      x9, [sp, #0x420]
01875ef8  ldr      x10, [sp, #0x428]
01875efc  mul      x9, x9, x11
01875f00  ldr      x11, [sp, #0x438]
01875f04  add      x9, x9, x10, lsr #3
01875f08  ldr      x10, [sp, #0x430]
01875f0c  mul      x9, x9, x12
01875f10  add      x9, x9, x10, lsr #2
01875f14  orr      w10, w13, w16
01875f18  mul      x8, x9, x8
01875f1c  and      w9, w14, #0x3e
01875f20  orr      w9, w10, w9
01875f24  add      x8, x8, x11, lsr #5
01875f28  ldr      x11, [sp, #0x88]
01875f2c  add      x9, x15, w9, uxtw #1
01875f30  ldr      x8, [x11, x8, lsl #3]
01875f34  sub      x8, x9, x8
01875f38  lsr      x9, x8, #1
01875f3c  ubfx     x8, x8, #1, #1
01875f40  ubfx     x9, x9, #5, #0x1b
01875f44  and      w9, w9, #0x1e
01875f48  orr      w8, w9, w8
01875f4c  ldr      w9, [sp, #0x11c]
01875f50  cmp      w9, #2
01875f54  b.ne     #0x1876010
01875f58  cbnz     w8, #0x1876010
01875f5c  ldp      x12, x13, [sp, #0x80]
01875f60  lsl      w11, w22, #1
01875f64  str      w22, [sp, #0x430]
01875f68  ldr      x9, [sp, #0x650]
01875f6c  str      w24, [sp, #0x438]
01875f70  ldr      x10, [sp, #0x648]
01875f74  str      w23, [sp, #0x238]
01875f78  lsl      w8, w12, #1
01875f7c  str      w12, [sp, #0x434]
01875f80  ldr      x12, [sp, #0x628]
01875f84  str      w9, [sp, #0x428]
01875f88  ldr      x20, [sp, #0x640]
01875f8c  cmp      w8, w27
01875f90  ldr      x9, [x19, #0x28]
01875f94  str      w10, [sp, #0x42c]
01875f98  ldr      x22, [sp, #0x60]
01875f9c  str      w12, [sp, #0x22c]
01875fa0  ldr      w12, [sp, #0x6c]
01875fa4  csel     w8, w8, w27, lt
01875fa8  ldr      w10, [sp, #0x630]
01875fac  cmp      w11, w21
01875fb0  str      x9, [sp, #0x220]
01875fb4  mul      w9, w20, w22
01875fb8  csel     w11, w11, w21, lt
01875fbc  cmp      w12, #0
01875fc0  csel     w19, w10, w9, eq
01875fc4  str      x13, [sp, #0x420]
01875fc8  str      w10, [sp, #0x228]
01875fcc  str      w11, [sp, #0x230]
01875fd0  str      w8, [sp, #0x234]
01875fd4  cbz      x22, #0x187643c
01875fd8  ldr      x21, [sp, #0x620]
01875fdc  add      x0, sp, #0x220
01875fe0  add      x1, sp, #0x420
01875fe4  mov      w2, w19
01875fe8  bl       #0x14f5210
01875fec  ldr      x8, [sp, #0x420]
01875ff0  subs     x22, x22, #1
01875ff4  ldr      x9, [sp, #0x220]
01875ff8  add      x8, x8, x20, lsl #3
01875ffc  add      x9, x9, x21, lsl #3
01876000  str      x8, [sp, #0x420]
01876004  str      x9, [sp, #0x220]
01876008  b.ne     #0x1875fdc
0187600c  b        #0x187643c
01876010  cbz      w8, #0x187602c
01876014  adrp     x1, #0x56a000
01876018  add      x1, x1, #0x886  ; "WARNING: FIXME: x2s has start!=0
"
0187601c  mov      w0, #1
01876020  bl       #0x2f15ff0  ; <qnndsp_log>
01876024  ldr      x8, [x20, #0x28]
01876028  str      x8, [sp, #0x88]
0187602c  ldr      w9, [sp, #0x6c]
01876030  add      x8, x24, #0x1f
01876034  lsr      x8, x8, #5
01876038  cmp      w9, #0
0187603c  csel     w9, w25, w8, eq
01876040  csel     w8, w8, w25, eq
01876044  cmp      w9, #1
01876048  str      x8, [sp, #0x58]
0187604c  str      w9, [sp, #8]
01876050  b.lt     #0x187643c
01876054  ldr      x9, [sp, #0x650]
01876058  ucvtf    s0, x22
0187605c  ldr      x8, [x19, #0x28]
01876060  fmov     s1, #0.25000000
01876064  ldr      x10, [sp, #0x80]
01876068  ucvtf    s9, x21
0187606c  str      x9, [sp, #0xb0]
01876070  ldr      w9, [sp, #0x6c]
01876074  ldr      x12, [sp, #0x628]
01876078  str      x8, [sp, #0x110]
0187607c  add      x8, x23, #0x1f
01876080  fmul     s0, s0, s1
01876084  cmp      w9, #0
01876088  ldr      x9, [sp, #0x648]
0187608c  str      x12, [sp, #0x108]
01876090  lsr      x12, x8, #5
01876094  ldr      x11, [sp, #0x640]
01876098  ucvtf    s8, x10
0187609c  str      x9, [sp, #0x78]
018760a0  add      x9, x10, #7
018760a4  and      x8, x9, #0x7fffffff8
018760a8  ldr      x10, [sp, #0x620]
018760ac  fmov     s10, #8.00000000
018760b0  fmov     s11, #4.00000000
018760b4  str      wzr, [sp, #0xc]
018760b8  stp      x8, x12, [sp, #0x48]
018760bc  ldr      x8, [sp, #0x60]
018760c0  csel     w12, w12, w8, eq
018760c4  fcvtps   w8, s0
018760c8  str      x8, [sp, #0xe0]
018760cc  csinc    x8, x11, xzr, ne
018760d0  stp      x8, x11, [sp, #0x30]
018760d4  ldr      x8, [sp, #0x630]
018760d8  str      x8, [sp, #0xa8]
018760dc  csinc    x8, x10, xzr, ne
018760e0  str      x8, [sp, #0x10]
018760e4  add      x8, sp, #0x420
018760e8  add      x8, x8, #0x80
018760ec  str      x8, [sp, #0x668]
018760f0  lsl      w8, w12, #1
018760f4  str      w8, [sp, #0x44]
018760f8  ldr      x8, [sp, #0x58]
018760fc  sxtw     x8, w8
01876100  stp      x8, x12, [sp, #0x18]
01876104  ubfx     x8, x9, #3, #0x20
01876108  str      x8, [sp, #0x98]
0187610c  ldr      w8, [sp, #0x11c]
01876110  lsl      w8, w8, #1
01876114  str      w8, [sp, #0x104]
01876118  ldr      x8, [sp, #0x20]
0187611c  cmp      w8, #1
01876120  b.lt     #0x1876428
01876124  mov      x9, xzr
01876128  ldr      x8, [sp, #0x18]
0187612c  str      x9, [sp, #0x28]
01876130  cmp      x9, x8
01876134  b.ge     #0x1876418
01876138  ldr      x8, [sp, #0x10]
0187613c  ldr      x9, [sp, #0x28]
01876140  mul      x23, x8, x9
01876144  ldr      w8, [sp, #0x6c]
01876148  str      x9, [sp, #0x70]
0187614c  cbz      w8, #0x1876160
01876150  sxtw     x8, w9
01876154  ldr      x9, [sp, #0x60]
01876158  udiv     x8, x8, x9
0187615c  b        #0x1876168
01876160  ldr      x8, [sp, #0x50]
01876164  sdiv     w8, w9, w8
01876168  ldr      x9, [sp, #0x48]
0187616c  cbz      x9, #0x1876400
01876170  and      w11, w8, #1
01876174  ldr      x12, [sp, #0x70]
01876178  ldr      x10, [sp, #0x60]
0187617c  ubfx     x8, x8, #1, #0x1f
01876180  str      xzr, [sp, #0xa0]
01876184  str      w11, [sp, #0xc8]
01876188  ldr      x11, [sp, #0x38]
0187618c  add      x10, x10, w12, sxtw
01876190  mov      w9, w12
01876194  sxtw     x9, w9
01876198  str      x8, [sp, #0x90]
0187619c  mul      x10, x11, x10
018761a0  ldr      x11, [sp, #0x50]
018761a4  add      w11, w12, w11
018761a8  ldr      x12, [sp, #0x30]
018761ac  mul      x9, x12, x9
018761b0  str      x9, [sp, #0xc0]
018761b4  sxtw     x9, w11
018761b8  ldr      w11, [sp, #0x6c]
018761bc  cmp      w11, #0
018761c0  csel     x9, x9, x10, eq
018761c4  str      x9, [sp, #0xb8]
018761c8  ldr      x8, [sp, #0xe0]
018761cc  cmp      w8, #1
018761d0  b.lt     #0x18763ec
018761d4  ldr      x10, [sp, #0xa0]
018761d8  ldr      x9, [sp, #0x80]
018761dc  ldr      x11, [sp, #0x90]
018761e0  ucvtf    s0, w10
018761e4  fcvtzu   w8, s0, #3
018761e8  ucvtf    s0, w8
018761ec  sub      x9, x9, w8, uxtw
018761f0  ucvtf    s1, x9
018761f4  ldr      x9, [sp, #0x78]
018761f8  fadd     s0, s0, s10
018761fc  mul      x9, x9, x10
01876200  ldr      w10, [sp, #0x11c]
01876204  fcmp     s0, s8
01876208  madd     w10, w10, w8, w11
0187620c  fcsel    s0, s1, s10, gt
01876210  str      w10, [sp, #0xdc]
01876214  fcvtzu   w8, s0
01876218  stp      x8, xzr, [sp, #0xe8]
0187621c  ldr      x8, [sp, #0x88]
01876220  add      x8, x8, x9, lsl #3
01876224  str      x8, [sp, #0xd0]
01876228  lsl      w8, w10, #1
0187622c  str      w8, [sp, #0xcc]
01876230  ldr      x8, [sp, #0xe8]
01876234  cbz      w8, #0x18763d4
01876238  ldr      x9, [sp, #0xf0]
0187623c  ldp      x12, x8, [sp, #0xa8]
01876240  scvtf    s0, w9
01876244  ldr      x11, [sp, #0xd0]
01876248  ldp      w10, w25, [sp, #0xc8]
0187624c  ldr      x24, [sp, #0xe8]
01876250  mul      x8, x8, x9
01876254  ldr      w28, [sp, #0xdc]
01876258  fcvtzu   w9, s0, #2
0187625c  add      x8, x11, x8, lsl #3
01876260  ldr      x11, [sp, #0xb8]
01876264  bfi      w10, w9, #1, #0x1f
01876268  ubfx     w9, w9, #1, #0x1e
0187626c  ldr      x11, [x8, x11, lsl #3]
01876270  mul      x27, x12, x9
01876274  ucvtf    s0, w10
01876278  ldr      x10, [sp, #0xc0]
0187627c  ldr      x8, [x8, x10, lsl #3]
01876280  add      w10, w9, #1
01876284  fadd     s12, s0, s11
01876288  add      x20, x11, #0x80
0187628c  mul      x9, x12, x10
01876290  add      x21, x8, #0x80
01876294  str      x9, [sp, #0xf8]
01876298  ldr      x9, [sp, #0x108]
0187629c  lsr      w8, w28, #3
018762a0  sub      x1, x20, #0x80
018762a4  add      x0, sp, #0x520
018762a8  mov      w2, #0x80
018762ac  sub      x22, x21, #0x80
018762b0  mul      x8, x9, x8
018762b4  ldr      x9, [sp, #0x110]
018762b8  add      x26, x9, x8, lsl #3
018762bc  add      x8, x26, x27, lsl #3
018762c0  ldr      x19, [x8, x23, lsl #3]
018762c4  bl       #0x2f14a00  ; <memcpy>
018762c8  add      x0, sp, #0x3a0
018762cc  mov      x1, x22
018762d0  mov      w2, #0x80
018762d4  bl       #0x2f14a60  ; <memmove>
018762d8  add      x0, sp, #0x320
018762dc  add      x1, sp, #0x520
018762e0  mov      w2, #0x80
018762e4  bl       #0x2f14a00  ; <memcpy>
018762e8  add      x8, sp, #0x420
018762ec  add      x0, sp, #0x3a0
018762f0  add      x1, sp, #0x320
018762f4  bl       #0x1866d30
018762f8  and      w22, w25, #0xe
018762fc  add      x1, sp, #0x420
01876300  mov      w2, #0x80
01876304  add      x0, x19, x22, lsl #7
01876308  bl       #0x2f14a60  ; <memmove>
0187630c  orr      w29, w22, #1
01876310  ldr      x1, [sp, #0x668]
01876314  mov      w2, #0x80
01876318  add      x0, x19, x29, lsl #7
0187631c  bl       #0x2f14a60  ; <memmove>
01876320  fcmp     s12, s9
01876324  b.ge     #0x18763b4
01876328  ldr      x8, [sp, #0xf8]
0187632c  add      x0, sp, #0x5a0
01876330  mov      x1, x21
01876334  mov      w2, #0x80
01876338  add      x8, x26, x8, lsl #3
0187633c  ldr      x19, [x8, x23, lsl #3]
01876340  bl       #0x2f14a00  ; <memcpy>
01876344  add      x0, sp, #0x520
01876348  mov      x1, x20
0187634c  mov      w2, #0x80
01876350  bl       #0x2f14a00  ; <memcpy>
01876354  add      x0, sp, #0x1a0
01876358  add      x1, sp, #0x5a0
0187635c  mov      w2, #0x80
01876360  bl       #0x2f14a00  ; <memcpy>
01876364  add      x0, sp, #0x120
01876368  add      x1, sp, #0x520
0187636c  mov      w2, #0x80
01876370  bl       #0x2f14a00  ; <memcpy>
01876374  add      x8, sp, #0x220
01876378  add      x0, sp, #0x1a0
0187637c  add      x1, sp, #0x120
01876380  bl       #0x1866d30
01876384  add      x0, sp, #0x420
01876388  add      x1, sp, #0x220
0187638c  mov      w2, #0x100
01876390  bl       #0x2f14a00  ; <memcpy>
01876394  add      x0, x19, x22, lsl #7
01876398  add      x1, sp, #0x420
0187639c  mov      w2, #0x80
018763a0  bl       #0x2f14a60  ; <memmove>
018763a4  add      x0, x19, x29, lsl #7
018763a8  ldr      x1, [sp, #0x668]
018763ac  mov      w2, #0x80
018763b0  bl       #0x2f14a60  ; <memmove>
018763b4  ldr      w8, [sp, #0x104]
018763b8  add      x20, x20, #0x100
018763bc  add      x21, x21, #0x100
018763c0  subs     x24, x24, #1
018763c4  add      w25, w25, w8
018763c8  ldr      w8, [sp, #0x11c]
018763cc  add      w28, w28, w8
018763d0  b.ne     #0x1876298
018763d4  ldr      x9, [sp, #0xf0]
018763d8  ldr      x8, [sp, #0xe0]
018763dc  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
018763e0  cmp      x9, x8
018763e4  str      x9, [sp, #0xf0]
018763e8  b.ne     #0x1876230
018763ec  ldp      x8, x9, [sp, #0x98]
018763f0  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
018763f4  cmp      x9, x8
018763f8  str      x9, [sp, #0xa0]
018763fc  b.ne     #0x18761c8
01876400  ldr      w8, [sp, #0x44]
01876404  ldr      x9, [sp, #0x70]
01876408  add      w9, w9, w8
0187640c  ldr      x8, [sp, #0x58]
01876410  cmp      w9, w8
01876414  b.lt     #0x1876144
01876418  ldp      x8, x9, [sp, #0x20]
0187641c  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
01876420  cmp      x9, x8
01876424  b.ne     #0x1876128
01876428  ldp      w8, w9, [sp, #8]
0187642c  add      w9, w9, #1
01876430  cmp      w9, w8
01876434  str      w9, [sp, #0xc]
01876438  b.ne     #0x1876118
0187643c  mov      w0, wzr
01876440  add      sp, sp, #0x660
01876444  ldp      x20, x19, [sp, #0x80]
01876448  ldp      x22, x21, [sp, #0x70]
0187644c  ldp      x24, x23, [sp, #0x60]
01876450  ldp      x26, x25, [sp, #0x50]
01876454  ldp      x28, x27, [sp, #0x40]
01876458  ldp      x29, x30, [sp, #0x30]
0187645c  ldp      d9, d8, [sp, #0x20]
01876460  ldp      d11, d10, [sp, #0x10]
01876464  ldr      d12, [sp], #0x90
01876468  ret      
