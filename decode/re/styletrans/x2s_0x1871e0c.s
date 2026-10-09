; function 0x1871e0c size 0x7dc 
01871e0c  str      d12, [sp, #-0x90]!
01871e10  stp      d11, d10, [sp, #0x10]
01871e14  stp      d9, d8, [sp, #0x20]
01871e18  stp      x29, x30, [sp, #0x30]
01871e1c  stp      x28, x27, [sp, #0x40]
01871e20  stp      x26, x25, [sp, #0x50]
01871e24  stp      x24, x23, [sp, #0x60]
01871e28  stp      x22, x21, [sp, #0x70]
01871e2c  stp      x20, x19, [sp, #0x80]
01871e30  sub      sp, sp, #0x660
01871e34  ldr      x12, [x1, #0x20]
01871e38  mov      x8, x3
01871e3c  ldr      x13, [x0, #0x20]
01871e40  mov      x20, x1
01871e44  ldr      x11, [x2, #0x20]
01871e48  mov      x19, x0
01871e4c  ldp      x25, x14, [x12, #0x10]
01871e50  mov      x10, xzr
01871e54  mov      x9, xzr
01871e58  ldp      x22, x24, [x12, #0x20]
01871e5c  add      x11, x11, #0x18
01871e60  str      xzr, [sp, #0x428]
01871e64  ldp      x12, x27, [x13, #0x10]
01871e68  str      x14, [sp, #0x80]
01871e6c  ldp      x21, x23, [x13, #0x20]
01871e70  str      xzr, [sp, #0x430]
01871e74  str      x12, [sp, #0x60]
01871e78  add      x12, sp, #0x420
01871e7c  str      xzr, [sp, #0x438]
01871e80  add      x13, x12, x10
01871e84  ldr      x14, [x11, x10]
01871e88  add      x10, x10, #8
01871e8c  cmp      x10, #0x18
01871e90  ldr      x13, [x13, #8]
01871e94  nop      
01871e98  madd     x9, x14, x9, x13
01871e9c  b.ne     #0x1871e80
01871ea0  ldr      x10, [x2, #0x28]
01871ea4  add      x2, sp, #0x420
01871ea8  movi     v1.2d, #0000000000000000
01871eac  add      x3, sp, #0x220
01871eb0  ldr      s0, [x10, x9, lsl #2]
01871eb4  mov      x0, x8
01871eb8  ldr      x9, [x8]
01871ebc  mov      w1, #4
01871ec0  str      xzr, [sp, #0x228]
01871ec4  str      q1, [sp, #0x430]
01871ec8  ldr      x9, [x9, #0x50]
01871ecc  scvtf    s8, s0
01871ed0  str      q1, [sp, #0x420]
01871ed4  str      xzr, [sp, #0x220]
01871ed8  blr      x9
01871edc  ldr      x8, [sp, #0x220]
01871ee0  mov      x1, x0
01871ee4  ldr      x0, [sp, #0x228]
01871ee8  ldr      x8, [x8, #8]
01871eec  blr      x8
01871ef0  ldr      x8, [x20, #0x18]
01871ef4  mov      x10, xzr
01871ef8  mov      w12, #1
01871efc  add      x13, sp, #0x640
01871f00  adrp     x9, #0x5de000
01871f04  add      x9, x9, #0xe08  ; =0x5dee08
01871f08  add      x11, x8, #0x50
01871f0c  str      xzr, [sp, #0x648]
01871f10  str      xzr, [sp, #0x640]
01871f14  str      xzr, [sp, #0x650]
01871f18  add      x14, x9, x10
01871f1c  ldr      x15, [x11, x10]
01871f20  ldr      x14, [x14, #0x18]
01871f24  udiv     x14, x15, x14
01871f28  mul      x12, x14, x12
01871f2c  add      x14, x13, x10
01871f30  sub      x10, x10, #8
01871f34  cmn      x10, #0x18
01871f38  str      x12, [x14, #0x10]
01871f3c  b.ne     #0x1871f18
01871f40  ldr      x12, [x19, #0x18]
01871f44  fcvtzs   w11, s8
01871f48  mov      x10, xzr
01871f4c  add      x13, sp, #0x620
01871f50  str      xzr, [sp, #0x628]
01871f54  str      w11, [sp, #0x11c]
01871f58  mov      w11, #1
01871f5c  add      x12, x12, #0x50
01871f60  str      xzr, [sp, #0x620]
01871f64  str      xzr, [sp, #0x630]
01871f68  add      x14, x9, x10
01871f6c  ldr      x15, [x12, x10]
01871f70  ldr      x14, [x14, #0x18]
01871f74  udiv     x14, x15, x14
01871f78  mul      x11, x14, x11
01871f7c  add      x14, x13, x10
01871f80  sub      x10, x10, #8
01871f84  cmn      x10, #0x18
01871f88  str      x11, [x14, #0x10]
01871f8c  b.ne     #0x1871f68
01871f90  fcvtzs   w9, s0
01871f94  mov      x10, xzr
01871f98  movi     v1.2d, #0000000000000000
01871f9c  add      x11, sp, #0x220
01871fa0  add      x12, sp, #0x420
01871fa4  str      w9, [sp, #0x6c]
01871fa8  add      x9, x8, #0x58
01871fac  stp      q1, q1, [sp, #0x220]
01871fb0  str      q1, [sp, #0x420]
01871fb4  str      q1, [sp, #0x430]
01871fb8  ldrb     w13, [x9, x10]
01871fbc  ldr      x14, [x11, x10, lsl #3]
01871fc0  add      x13, x14, x13
01871fc4  str      x13, [x12, x10, lsl #3]
01871fc8  add      x10, x10, #1
01871fcc  cmp      x10, #4
01871fd0  b.ne     #0x1871fb8
01871fd4  ldp      x11, x13, [x8, #0x40]
01871fd8  movi     v0.2d, #0000000000000000
01871fdc  mov      x10, xzr
01871fe0  ldr      x12, [sp, #0x420]
01871fe4  ldr      x15, [sp, #0x428]
01871fe8  lsr      x11, x11, #3
01871fec  ldr      x8, [x8, #0x50]
01871ff0  ldr      x16, [sp, #0x438]
01871ff4  mul      x14, x11, x12
01871ff8  lsr      x12, x13, #2
01871ffc  lsr      x8, x8, #5
01872000  ldr      x1, [x20, #0x28]
01872004  add      x13, x14, x15, lsr #3
01872008  ldr      x14, [sp, #0x430]
0187200c  mul      x13, x13, x12
01872010  str      x1, [sp, #0x88]
01872014  mov      w17, w14
01872018  add      x13, x13, x14, lsr #2
0187201c  lsr      x17, x17, #1
01872020  mul      x0, x13, x8
01872024  and      x13, x14, #1
01872028  lsl      x14, x16, #1
0187202c  bfi      x13, x17, #6, #1
01872030  add      x0, x0, x16, lsr #5
01872034  mov      w16, w15
01872038  ubfiz    x16, x16, #7, #3
0187203c  add      x17, sp, #0x220
01872040  ldr      x15, [x1, x0, lsl #3]
01872044  add      x0, sp, #0x420
01872048  stp      q0, q0, [sp, #0x220]
0187204c  str      q0, [sp, #0x430]
01872050  str      q0, [sp, #0x420]
01872054  ldrb     w1, [x9, x10]
01872058  ldr      x2, [x17, x10, lsl #3]
0187205c  add      x1, x2, x1
01872060  str      x1, [x0, x10, lsl #3]
01872064  add      x10, x10, #1
01872068  cmp      x10, #4
0187206c  b.ne     #0x1872054
01872070  ldr      x9, [sp, #0x420]
01872074  ldr      x10, [sp, #0x428]
01872078  mul      x9, x9, x11
0187207c  ldr      x11, [sp, #0x438]
01872080  add      x9, x9, x10, lsr #3
01872084  ldr      x10, [sp, #0x430]
01872088  mul      x9, x9, x12
0187208c  add      x9, x9, x10, lsr #2
01872090  orr      w10, w13, w16
01872094  mul      x8, x9, x8
01872098  and      w9, w14, #0x3e
0187209c  orr      w9, w10, w9
018720a0  add      x8, x8, x11, lsr #5
018720a4  ldr      x11, [sp, #0x88]
018720a8  add      x9, x15, w9, uxtw #1
018720ac  ldr      x8, [x11, x8, lsl #3]
018720b0  sub      x8, x9, x8
018720b4  lsr      x9, x8, #1
018720b8  ubfx     x8, x8, #1, #1
018720bc  ubfx     x9, x9, #5, #0x1b
018720c0  and      w9, w9, #0x1e
018720c4  orr      w8, w9, w8
018720c8  ldr      w9, [sp, #0x11c]
018720cc  cmp      w9, #2
018720d0  b.ne     #0x187218c
018720d4  cbnz     w8, #0x187218c
018720d8  ldp      x12, x13, [sp, #0x80]
018720dc  lsl      w11, w22, #1
018720e0  str      w22, [sp, #0x430]
018720e4  ldr      x9, [sp, #0x650]
018720e8  str      w24, [sp, #0x438]
018720ec  ldr      x10, [sp, #0x648]
018720f0  str      w23, [sp, #0x238]
018720f4  lsl      w8, w12, #1
018720f8  str      w12, [sp, #0x434]
018720fc  ldr      x12, [sp, #0x628]
01872100  str      w9, [sp, #0x428]
01872104  ldr      x20, [sp, #0x640]
01872108  cmp      w8, w27
0187210c  ldr      x9, [x19, #0x28]
01872110  str      w10, [sp, #0x42c]
01872114  ldr      x22, [sp, #0x60]
01872118  str      w12, [sp, #0x22c]
0187211c  ldr      w12, [sp, #0x6c]
01872120  csel     w8, w8, w27, lt
01872124  ldr      w10, [sp, #0x630]
01872128  cmp      w11, w21
0187212c  str      x9, [sp, #0x220]
01872130  mul      w9, w20, w22
01872134  csel     w11, w11, w21, lt
01872138  cmp      w12, #0
0187213c  csel     w19, w10, w9, eq
01872140  str      x13, [sp, #0x420]
01872144  str      w10, [sp, #0x228]
01872148  str      w11, [sp, #0x230]
0187214c  str      w8, [sp, #0x234]
01872150  cbz      x22, #0x18725b8
01872154  ldr      x21, [sp, #0x620]
01872158  add      x0, sp, #0x220
0187215c  add      x1, sp, #0x420
01872160  mov      w2, w19
01872164  bl       #0x14f5210
01872168  ldr      x8, [sp, #0x420]
0187216c  subs     x22, x22, #1
01872170  ldr      x9, [sp, #0x220]
01872174  add      x8, x8, x20, lsl #3
01872178  add      x9, x9, x21, lsl #3
0187217c  str      x8, [sp, #0x420]
01872180  str      x9, [sp, #0x220]
01872184  b.ne     #0x1872158
01872188  b        #0x18725b8
0187218c  cbz      w8, #0x18721a8
01872190  adrp     x1, #0x56a000
01872194  add      x1, x1, #0x886  ; "WARNING: FIXME: x2s has start!=0
"
01872198  mov      w0, #1
0187219c  bl       #0x2f15ff0  ; <qnndsp_log>
018721a0  ldr      x8, [x20, #0x28]
018721a4  str      x8, [sp, #0x88]
018721a8  ldr      w9, [sp, #0x6c]
018721ac  add      x8, x24, #0x1f
018721b0  lsr      x8, x8, #5
018721b4  cmp      w9, #0
018721b8  csel     w9, w25, w8, eq
018721bc  csel     w8, w8, w25, eq
018721c0  cmp      w9, #1
018721c4  str      x8, [sp, #0x58]
018721c8  str      w9, [sp, #8]
018721cc  b.lt     #0x18725b8
018721d0  ldr      x9, [sp, #0x650]
018721d4  ucvtf    s0, x22
018721d8  ldr      x8, [x19, #0x28]
018721dc  fmov     s1, #0.25000000
018721e0  ldr      x10, [sp, #0x80]
018721e4  ucvtf    s9, x21
018721e8  str      x9, [sp, #0xb0]
018721ec  ldr      w9, [sp, #0x6c]
018721f0  ldr      x12, [sp, #0x628]
018721f4  str      x8, [sp, #0x110]
018721f8  add      x8, x23, #0x1f
018721fc  fmul     s0, s0, s1
01872200  cmp      w9, #0
01872204  ldr      x9, [sp, #0x648]
01872208  str      x12, [sp, #0x108]
0187220c  lsr      x12, x8, #5
01872210  ldr      x11, [sp, #0x640]
01872214  ucvtf    s8, x10
01872218  str      x9, [sp, #0x78]
0187221c  add      x9, x10, #7
01872220  and      x8, x9, #0x7fffffff8
01872224  ldr      x10, [sp, #0x620]
01872228  fmov     s10, #8.00000000
0187222c  fmov     s11, #4.00000000
01872230  str      wzr, [sp, #0xc]
01872234  stp      x8, x12, [sp, #0x48]
01872238  ldr      x8, [sp, #0x60]
0187223c  csel     w12, w12, w8, eq
01872240  fcvtps   w8, s0
01872244  str      x8, [sp, #0xe0]
01872248  csinc    x8, x11, xzr, ne
0187224c  stp      x8, x11, [sp, #0x30]
01872250  ldr      x8, [sp, #0x630]
01872254  str      x8, [sp, #0xa8]
01872258  csinc    x8, x10, xzr, ne
0187225c  str      x8, [sp, #0x10]
01872260  add      x8, sp, #0x420
01872264  add      x8, x8, #0x80
01872268  str      x8, [sp, #0x668]
0187226c  lsl      w8, w12, #1
01872270  str      w8, [sp, #0x44]
01872274  ldr      x8, [sp, #0x58]
01872278  sxtw     x8, w8
0187227c  stp      x8, x12, [sp, #0x18]
01872280  ubfx     x8, x9, #3, #0x20
01872284  str      x8, [sp, #0x98]
01872288  ldr      w8, [sp, #0x11c]
0187228c  lsl      w8, w8, #1
01872290  str      w8, [sp, #0x104]
01872294  ldr      x8, [sp, #0x20]
01872298  cmp      w8, #1
0187229c  b.lt     #0x18725a4
018722a0  mov      x9, xzr
018722a4  ldr      x8, [sp, #0x18]
018722a8  str      x9, [sp, #0x28]
018722ac  cmp      x9, x8
018722b0  b.ge     #0x1872594
018722b4  ldr      x8, [sp, #0x10]
018722b8  ldr      x9, [sp, #0x28]
018722bc  mul      x23, x8, x9
018722c0  ldr      w8, [sp, #0x6c]
018722c4  str      x9, [sp, #0x70]
018722c8  cbz      w8, #0x18722dc
018722cc  sxtw     x8, w9
018722d0  ldr      x9, [sp, #0x60]
018722d4  udiv     x8, x8, x9
018722d8  b        #0x18722e4
018722dc  ldr      x8, [sp, #0x50]
018722e0  sdiv     w8, w9, w8
018722e4  ldr      x9, [sp, #0x48]
018722e8  cbz      x9, #0x187257c
018722ec  and      w11, w8, #1
018722f0  ldr      x12, [sp, #0x70]
018722f4  ldr      x10, [sp, #0x60]
018722f8  ubfx     x8, x8, #1, #0x1f
018722fc  str      xzr, [sp, #0xa0]
01872300  str      w11, [sp, #0xc8]
01872304  ldr      x11, [sp, #0x38]
01872308  add      x10, x10, w12, sxtw
0187230c  mov      w9, w12
01872310  sxtw     x9, w9
01872314  str      x8, [sp, #0x90]
01872318  mul      x10, x11, x10
0187231c  ldr      x11, [sp, #0x50]
01872320  add      w11, w12, w11
01872324  ldr      x12, [sp, #0x30]
01872328  mul      x9, x12, x9
0187232c  str      x9, [sp, #0xc0]
01872330  sxtw     x9, w11
01872334  ldr      w11, [sp, #0x6c]
01872338  cmp      w11, #0
0187233c  csel     x9, x9, x10, eq
01872340  str      x9, [sp, #0xb8]
01872344  ldr      x8, [sp, #0xe0]
01872348  cmp      w8, #1
0187234c  b.lt     #0x1872568
01872350  ldr      x10, [sp, #0xa0]
01872354  ldr      x9, [sp, #0x80]
01872358  ldr      x11, [sp, #0x90]
0187235c  ucvtf    s0, w10
01872360  fcvtzu   w8, s0, #3
01872364  ucvtf    s0, w8
01872368  sub      x9, x9, w8, uxtw
0187236c  ucvtf    s1, x9
01872370  ldr      x9, [sp, #0x78]
01872374  fadd     s0, s0, s10
01872378  mul      x9, x9, x10
0187237c  ldr      w10, [sp, #0x11c]
01872380  fcmp     s0, s8
01872384  madd     w10, w10, w8, w11
01872388  fcsel    s0, s1, s10, gt
0187238c  str      w10, [sp, #0xdc]
01872390  fcvtzu   w8, s0
01872394  stp      x8, xzr, [sp, #0xe8]
01872398  ldr      x8, [sp, #0x88]
0187239c  add      x8, x8, x9, lsl #3
018723a0  str      x8, [sp, #0xd0]
018723a4  lsl      w8, w10, #1
018723a8  str      w8, [sp, #0xcc]
018723ac  ldr      x8, [sp, #0xe8]
018723b0  cbz      w8, #0x1872550
018723b4  ldr      x9, [sp, #0xf0]
018723b8  ldp      x12, x8, [sp, #0xa8]
018723bc  scvtf    s0, w9
018723c0  ldr      x11, [sp, #0xd0]
018723c4  ldp      w10, w25, [sp, #0xc8]
018723c8  ldr      x24, [sp, #0xe8]
018723cc  mul      x8, x8, x9
018723d0  ldr      w28, [sp, #0xdc]
018723d4  fcvtzu   w9, s0, #2
018723d8  add      x8, x11, x8, lsl #3
018723dc  ldr      x11, [sp, #0xb8]
018723e0  bfi      w10, w9, #1, #0x1f
018723e4  ubfx     w9, w9, #1, #0x1e
018723e8  ldr      x11, [x8, x11, lsl #3]
018723ec  mul      x27, x12, x9
018723f0  ucvtf    s0, w10
018723f4  ldr      x10, [sp, #0xc0]
018723f8  ldr      x8, [x8, x10, lsl #3]
018723fc  add      w10, w9, #1
01872400  fadd     s12, s0, s11
01872404  add      x20, x11, #0x80
01872408  mul      x9, x12, x10
0187240c  add      x21, x8, #0x80
01872410  str      x9, [sp, #0xf8]
01872414  ldr      x9, [sp, #0x108]
01872418  lsr      w8, w28, #3
0187241c  sub      x1, x20, #0x80
01872420  add      x0, sp, #0x520
01872424  mov      w2, #0x80
01872428  sub      x22, x21, #0x80
0187242c  mul      x8, x9, x8
01872430  ldr      x9, [sp, #0x110]
01872434  add      x26, x9, x8, lsl #3
01872438  add      x8, x26, x27, lsl #3
0187243c  ldr      x19, [x8, x23, lsl #3]
01872440  bl       #0x2f14a00  ; <memcpy>
01872444  add      x0, sp, #0x3a0
01872448  mov      x1, x22
0187244c  mov      w2, #0x80
01872450  bl       #0x2f14a60  ; <memmove>
01872454  add      x0, sp, #0x320
01872458  add      x1, sp, #0x520
0187245c  mov      w2, #0x80
01872460  bl       #0x2f14a00  ; <memcpy>
01872464  add      x8, sp, #0x420
01872468  add      x0, sp, #0x3a0
0187246c  add      x1, sp, #0x320
01872470  bl       #0x1866d30
01872474  and      w22, w25, #0xe
01872478  add      x1, sp, #0x420
0187247c  mov      w2, #0x80
01872480  add      x0, x19, x22, lsl #7
01872484  bl       #0x2f14a60  ; <memmove>
01872488  orr      w29, w22, #1
0187248c  ldr      x1, [sp, #0x668]
01872490  mov      w2, #0x80
01872494  add      x0, x19, x29, lsl #7
01872498  bl       #0x2f14a60  ; <memmove>
0187249c  fcmp     s12, s9
018724a0  b.ge     #0x1872530
018724a4  ldr      x8, [sp, #0xf8]
018724a8  add      x0, sp, #0x5a0
018724ac  mov      x1, x21
018724b0  mov      w2, #0x80
018724b4  add      x8, x26, x8, lsl #3
018724b8  ldr      x19, [x8, x23, lsl #3]
018724bc  bl       #0x2f14a00  ; <memcpy>
018724c0  add      x0, sp, #0x520
018724c4  mov      x1, x20
018724c8  mov      w2, #0x80
018724cc  bl       #0x2f14a00  ; <memcpy>
018724d0  add      x0, sp, #0x1a0
018724d4  add      x1, sp, #0x5a0
018724d8  mov      w2, #0x80
018724dc  bl       #0x2f14a00  ; <memcpy>
018724e0  add      x0, sp, #0x120
018724e4  add      x1, sp, #0x520
018724e8  mov      w2, #0x80
018724ec  bl       #0x2f14a00  ; <memcpy>
018724f0  add      x8, sp, #0x220
018724f4  add      x0, sp, #0x1a0
018724f8  add      x1, sp, #0x120
018724fc  bl       #0x1866d30
01872500  add      x0, sp, #0x420
01872504  add      x1, sp, #0x220
01872508  mov      w2, #0x100
0187250c  bl       #0x2f14a00  ; <memcpy>
01872510  add      x0, x19, x22, lsl #7
01872514  add      x1, sp, #0x420
01872518  mov      w2, #0x80
0187251c  bl       #0x2f14a60  ; <memmove>
01872520  add      x0, x19, x29, lsl #7
01872524  ldr      x1, [sp, #0x668]
01872528  mov      w2, #0x80
0187252c  bl       #0x2f14a60  ; <memmove>
01872530  ldr      w8, [sp, #0x104]
01872534  add      x20, x20, #0x100
01872538  add      x21, x21, #0x100
0187253c  subs     x24, x24, #1
01872540  add      w25, w25, w8
01872544  ldr      w8, [sp, #0x11c]
01872548  add      w28, w28, w8
0187254c  b.ne     #0x1872414
01872550  ldr      x9, [sp, #0xf0]
01872554  ldr      x8, [sp, #0xe0]
01872558  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
0187255c  cmp      x9, x8
01872560  str      x9, [sp, #0xf0]
01872564  b.ne     #0x18723ac
01872568  ldp      x8, x9, [sp, #0x98]
0187256c  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
01872570  cmp      x9, x8
01872574  str      x9, [sp, #0xa0]
01872578  b.ne     #0x1872344
0187257c  ldr      w8, [sp, #0x44]
01872580  ldr      x9, [sp, #0x70]
01872584  add      w9, w9, w8
01872588  ldr      x8, [sp, #0x58]
0187258c  cmp      w9, w8
01872590  b.lt     #0x18722c0
01872594  ldp      x8, x9, [sp, #0x20]
01872598  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
0187259c  cmp      x9, x8
018725a0  b.ne     #0x18722a4
018725a4  ldp      w8, w9, [sp, #8]
018725a8  add      w9, w9, #1
018725ac  cmp      w9, w8
018725b0  str      w9, [sp, #0xc]
018725b4  b.ne     #0x1872294
018725b8  mov      w0, wzr
018725bc  add      sp, sp, #0x660
018725c0  ldp      x20, x19, [sp, #0x80]
018725c4  ldp      x22, x21, [sp, #0x70]
018725c8  ldp      x24, x23, [sp, #0x60]
018725cc  ldp      x26, x25, [sp, #0x50]
018725d0  ldp      x28, x27, [sp, #0x40]
018725d4  ldp      x29, x30, [sp, #0x30]
018725d8  ldp      d9, d8, [sp, #0x20]
018725dc  ldp      d11, d10, [sp, #0x10]
018725e0  ldr      d12, [sp], #0x90
018725e4  ret      
