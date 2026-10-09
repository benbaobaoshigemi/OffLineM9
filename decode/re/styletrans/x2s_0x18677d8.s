; function 0x18677d8 size 0x7b4 
018677d8  stp      d11, d10, [sp, #-0x80]!
018677dc  stp      d9, d8, [sp, #0x10]
018677e0  stp      x29, x30, [sp, #0x20]
018677e4  stp      x28, x27, [sp, #0x30]
018677e8  stp      x26, x25, [sp, #0x40]
018677ec  stp      x24, x23, [sp, #0x50]
018677f0  stp      x22, x21, [sp, #0x60]
018677f4  stp      x20, x19, [sp, #0x70]
018677f8  sub      sp, sp, #0x670
018677fc  ldr      x12, [x1, #0x20]
01867800  mov      x8, x3
01867804  ldr      x13, [x0, #0x20]
01867808  mov      x20, x1
0186780c  ldr      x11, [x2, #0x20]
01867810  mov      x19, x0
01867814  ldp      x26, x14, [x12, #0x10]
01867818  mov      x10, xzr
0186781c  mov      x9, xzr
01867820  ldp      x22, x24, [x12, #0x20]
01867824  add      x11, x11, #0x18
01867828  str      xzr, [sp, #0x438]
0186782c  ldp      x12, x27, [x13, #0x10]
01867830  str      x14, [sp, #0x88]
01867834  ldp      x21, x23, [x13, #0x20]
01867838  str      xzr, [sp, #0x440]
0186783c  str      x12, [sp, #0x68]
01867840  add      x12, sp, #0x430
01867844  str      xzr, [sp, #0x448]
01867848  add      x13, x12, x10
0186784c  ldr      x14, [x11, x10]
01867850  add      x10, x10, #8
01867854  cmp      x10, #0x18
01867858  ldr      x13, [x13, #8]
0186785c  nop      
01867860  madd     x9, x14, x9, x13
01867864  b.ne     #0x1867848
01867868  ldr      x10, [x2, #0x28]
0186786c  add      x2, sp, #0x430
01867870  movi     v1.2d, #0000000000000000
01867874  add      x3, sp, #0x230
01867878  ldr      s0, [x10, x9, lsl #2]
0186787c  mov      x0, x8
01867880  ldr      x9, [x8]
01867884  mov      w1, #4
01867888  str      xzr, [sp, #0x238]
0186788c  str      q1, [sp, #0x440]
01867890  ldr      x9, [x9, #0x50]
01867894  scvtf    s8, s0
01867898  str      q1, [sp, #0x430]
0186789c  str      xzr, [sp, #0x230]
018678a0  blr      x9
018678a4  ldr      x8, [sp, #0x230]
018678a8  mov      x1, x0
018678ac  ldr      x0, [sp, #0x238]
018678b0  ldr      x8, [x8, #8]
018678b4  blr      x8
018678b8  ldr      x8, [x20, #0x18]
018678bc  mov      x10, xzr
018678c0  mov      w12, #1
018678c4  add      x13, sp, #0x650
018678c8  adrp     x9, #0x5de000
018678cc  add      x9, x9, #0xde8  ; =0x5dede8
018678d0  add      x11, x8, #0x50
018678d4  str      xzr, [sp, #0x658]
018678d8  str      xzr, [sp, #0x650]
018678dc  str      xzr, [sp, #0x660]
018678e0  add      x14, x9, x10
018678e4  ldr      x15, [x11, x10]
018678e8  ldr      x14, [x14, #0x18]
018678ec  udiv     x14, x15, x14
018678f0  mul      x12, x14, x12
018678f4  add      x14, x13, x10
018678f8  sub      x10, x10, #8
018678fc  cmn      x10, #0x18
01867900  str      x12, [x14, #0x10]
01867904  b.ne     #0x18678e0
01867908  ldr      x12, [x19, #0x18]
0186790c  fcvtzs   w11, s8
01867910  mov      x10, xzr
01867914  add      x13, sp, #0x630
01867918  str      xzr, [sp, #0x638]
0186791c  str      w11, [sp, #0x124]
01867920  mov      w11, #1
01867924  add      x12, x12, #0x50
01867928  str      xzr, [sp, #0x630]
0186792c  str      xzr, [sp, #0x640]
01867930  add      x14, x9, x10
01867934  ldr      x15, [x12, x10]
01867938  ldr      x14, [x14, #0x18]
0186793c  udiv     x14, x15, x14
01867940  mul      x11, x14, x11
01867944  add      x14, x13, x10
01867948  sub      x10, x10, #8
0186794c  cmn      x10, #0x18
01867950  str      x11, [x14, #0x10]
01867954  b.ne     #0x1867930
01867958  fcvtzs   w9, s0
0186795c  mov      x10, xzr
01867960  movi     v1.2d, #0000000000000000
01867964  add      x11, sp, #0x230
01867968  add      x12, sp, #0x430
0186796c  str      w9, [sp, #0x74]
01867970  add      x9, x8, #0x58
01867974  stp      q1, q1, [sp, #0x230]
01867978  str      q1, [sp, #0x430]
0186797c  str      q1, [sp, #0x440]
01867980  ldrb     w13, [x9, x10]
01867984  ldr      x14, [x11, x10, lsl #3]
01867988  add      x13, x14, x13
0186798c  str      x13, [x12, x10, lsl #3]
01867990  add      x10, x10, #1
01867994  cmp      x10, #4
01867998  b.ne     #0x1867980
0186799c  ldp      x11, x14, [x8, #0x40]
018679a0  movi     v0.2d, #0000000000000000
018679a4  mov      x10, xzr
018679a8  ldr      x12, [sp, #0x430]
018679ac  ldr      x15, [sp, #0x438]
018679b0  lsr      x13, x11, #3
018679b4  ldr      x16, [sp, #0x440]
018679b8  lsr      x11, x14, #3
018679bc  ldr      x8, [x8, #0x50]
018679c0  mul      x12, x13, x12
018679c4  ldr      x0, [x20, #0x28]
018679c8  mov      w17, w15
018679cc  add      x12, x12, x15, lsr #3
018679d0  str      x0, [sp, #0x90]
018679d4  mul      x14, x12, x11
018679d8  lsr      x12, x8, #5
018679dc  ldr      x8, [sp, #0x448]
018679e0  add      x14, x14, x16, lsr #3
018679e4  ubfiz    x15, x16, #5, #3
018679e8  ubfiz    x16, x17, #8, #3
018679ec  add      x17, sp, #0x230
018679f0  mul      x14, x14, x12
018679f4  add      x14, x14, x8, lsr #5
018679f8  ldr      x14, [x0, x14, lsl #3]
018679fc  add      x0, sp, #0x430
01867a00  stp      q0, q0, [sp, #0x230]
01867a04  str      q0, [sp, #0x440]
01867a08  str      q0, [sp, #0x430]
01867a0c  ldrb     w1, [x9, x10]
01867a10  ldr      x2, [x17, x10, lsl #3]
01867a14  add      x1, x2, x1
01867a18  str      x1, [x0, x10, lsl #3]
01867a1c  add      x10, x10, #1
01867a20  cmp      x10, #4
01867a24  b.ne     #0x1867a0c
01867a28  ldr      x9, [sp, #0x430]
01867a2c  and      w8, w8, #0x1f
01867a30  ldr      x10, [sp, #0x438]
01867a34  mul      x9, x9, x13
01867a38  add      x9, x9, x10, lsr #3
01867a3c  ldr      x10, [sp, #0x440]
01867a40  mul      x9, x9, x11
01867a44  ldr      x11, [sp, #0x448]
01867a48  add      x9, x9, x10, lsr #3
01867a4c  ldr      x10, [sp, #0x90]
01867a50  mul      x9, x9, x12
01867a54  add      x9, x9, x11, lsr #5
01867a58  ldr      x9, [x10, x9, lsl #3]
01867a5c  orr      w10, w15, w16
01867a60  orr      w8, w10, w8
01867a64  add      w8, w14, w8
01867a68  sub      w8, w8, w9
01867a6c  ldr      w9, [sp, #0x124]
01867a70  and      x8, x8, #0xffffffe0
01867a74  cmp      w9, #2
01867a78  b.ne     #0x1867b34
01867a7c  cbnz     x8, #0x1867b34
01867a80  ldp      x12, x13, [sp, #0x88]
01867a84  lsl      w11, w22, #1
01867a88  str      w22, [sp, #0x440]
01867a8c  ldr      x9, [sp, #0x660]
01867a90  str      w24, [sp, #0x448]
01867a94  ldr      x10, [sp, #0x658]
01867a98  str      w23, [sp, #0x248]
01867a9c  lsl      w8, w12, #1
01867aa0  str      w12, [sp, #0x444]
01867aa4  ldr      x12, [sp, #0x638]
01867aa8  str      w9, [sp, #0x438]
01867aac  ldr      x20, [sp, #0x650]
01867ab0  cmp      w8, w27
01867ab4  ldr      x9, [x19, #0x28]
01867ab8  str      w10, [sp, #0x43c]
01867abc  ldr      x22, [sp, #0x68]
01867ac0  str      w12, [sp, #0x23c]
01867ac4  ldr      w12, [sp, #0x74]
01867ac8  csel     w8, w8, w27, lt
01867acc  ldr      w10, [sp, #0x640]
01867ad0  cmp      w11, w21
01867ad4  str      x9, [sp, #0x230]
01867ad8  mul      w9, w20, w22
01867adc  csel     w11, w11, w21, lt
01867ae0  cmp      w12, #0
01867ae4  csel     w19, w10, w9, eq
01867ae8  str      x13, [sp, #0x430]
01867aec  str      w10, [sp, #0x238]
01867af0  str      w11, [sp, #0x240]
01867af4  str      w8, [sp, #0x244]
01867af8  cbz      x22, #0x1867f60
01867afc  ldr      x21, [sp, #0x630]
01867b00  add      x0, sp, #0x230
01867b04  add      x1, sp, #0x430
01867b08  mov      w2, w19
01867b0c  bl       #0x14f4740
01867b10  ldr      x8, [sp, #0x430]
01867b14  subs     x22, x22, #1
01867b18  ldr      x9, [sp, #0x230]
01867b1c  add      x8, x8, x20, lsl #3
01867b20  add      x9, x9, x21, lsl #3
01867b24  str      x8, [sp, #0x430]
01867b28  str      x9, [sp, #0x230]
01867b2c  b.ne     #0x1867b00
01867b30  b        #0x1867f60
01867b34  cbz      x8, #0x1867b50
01867b38  adrp     x1, #0x56a000
01867b3c  add      x1, x1, #0x886  ; "WARNING: FIXME: x2s has start!=0
"
01867b40  mov      w0, #1
01867b44  bl       #0x2f15ff0  ; <qnndsp_log>
01867b48  ldr      x8, [x20, #0x28]
01867b4c  str      x8, [sp, #0x90]
01867b50  ldr      w9, [sp, #0x74]
01867b54  add      x8, x24, #0x1f
01867b58  lsr      x8, x8, #5
01867b5c  cmp      w9, #0
01867b60  csel     w9, w26, w8, eq
01867b64  csel     w8, w8, w26, eq
01867b68  cmp      w9, #1
01867b6c  str      x8, [sp, #0x60]
01867b70  str      w9, [sp, #0x10]
01867b74  b.lt     #0x1867f60
01867b78  ldr      x9, [x19, #0x28]
01867b7c  add      x8, x23, #0x1f
01867b80  ldr      x10, [sp, #0x88]
01867b84  ucvtf    s0, x22
01867b88  fmov     s1, #0.12500000
01867b8c  ldr      x12, [sp, #0x650]
01867b90  str      x9, [sp, #0x118]
01867b94  ldr      w9, [sp, #0x74]
01867b98  ucvtf    s8, x10
01867b9c  ucvtf    s9, x21
01867ba0  fmul     s0, s0, s1
01867ba4  mov      w11, wzr
01867ba8  cmp      w9, #0
01867bac  add      x9, x10, #7
01867bb0  ldr      x10, [sp, #0x660]
01867bb4  fmov     s10, #8.00000000
01867bb8  str      x10, [sp, #0xb8]
01867bbc  ldr      x10, [sp, #0x658]
01867bc0  str      x10, [sp, #0x80]
01867bc4  lsr      x10, x8, #5
01867bc8  and      x8, x9, #0x7fffffff8
01867bcc  stp      x8, x10, [sp, #0x50]
01867bd0  ldr      x8, [sp, #0x638]
01867bd4  str      x8, [sp, #0x110]
01867bd8  ldr      x8, [sp, #0x68]
01867bdc  csel     w13, w10, w8, eq
01867be0  fcvtps   w10, s0
01867be4  ldr      x8, [sp, #0x630]
01867be8  str      x10, [sp, #0xe8]
01867bec  csinc    x10, x12, xzr, ne
01867bf0  csinc    x8, x8, xzr, ne
01867bf4  stp      x10, x12, [sp, #0x38]
01867bf8  ldr      x10, [sp, #0x640]
01867bfc  str      x8, [sp, #0x18]
01867c00  str      x10, [sp, #0xb0]
01867c04  add      x10, sp, #0x430
01867c08  add      x8, x10, #0x80
01867c0c  str      x8, [sp, #0x128]
01867c10  lsl      w8, w13, #1
01867c14  str      w8, [sp, #0x4c]
01867c18  ldr      x8, [sp, #0x60]
01867c1c  sxtw     x8, w8
01867c20  stp      x8, x13, [sp, #0x20]
01867c24  ubfx     x8, x9, #3, #0x20
01867c28  str      x8, [sp, #0xa0]
01867c2c  ldr      w8, [sp, #0x124]
01867c30  lsl      w8, w8, #1
01867c34  str      w8, [sp, #0x10c]
01867c38  ldr      x8, [sp, #0x28]
01867c3c  str      w11, [sp, #0x14]
01867c40  cmp      w8, #1
01867c44  b.lt     #0x1867f50
01867c48  mov      x9, xzr
01867c4c  ldr      x8, [sp, #0x20]
01867c50  str      x9, [sp, #0x30]
01867c54  cmp      x9, x8
01867c58  b.ge     #0x1867f40
01867c5c  ldr      x8, [sp, #0x18]
01867c60  ldr      x9, [sp, #0x30]
01867c64  mul      x26, x8, x9
01867c68  ldr      w8, [sp, #0x74]
01867c6c  str      x9, [sp, #0x78]
01867c70  cbz      w8, #0x1867c84
01867c74  sxtw     x8, w9
01867c78  ldr      x9, [sp, #0x68]
01867c7c  udiv     x8, x8, x9
01867c80  b        #0x1867c8c
01867c84  ldr      x8, [sp, #0x58]
01867c88  sdiv     w8, w9, w8
01867c8c  ldr      x9, [sp, #0x50]
01867c90  cbz      x9, #0x1867f28
01867c94  and      w11, w8, #1
01867c98  ldr      x12, [sp, #0x78]
01867c9c  ldr      x10, [sp, #0x68]
01867ca0  ubfx     x8, x8, #1, #0x1f
01867ca4  str      xzr, [sp, #0xa8]
01867ca8  str      w11, [sp, #0xd0]
01867cac  ldr      x11, [sp, #0x40]
01867cb0  add      x10, x10, w12, sxtw
01867cb4  mov      w9, w12
01867cb8  sxtw     x9, w9
01867cbc  str      x8, [sp, #0x98]
01867cc0  mul      x10, x11, x10
01867cc4  ldr      x11, [sp, #0x58]
01867cc8  add      w11, w12, w11
01867ccc  ldr      x12, [sp, #0x38]
01867cd0  mul      x9, x12, x9
01867cd4  str      x9, [sp, #0xc8]
01867cd8  sxtw     x9, w11
01867cdc  ldr      w11, [sp, #0x74]
01867ce0  cmp      w11, #0
01867ce4  csel     x9, x9, x10, eq
01867ce8  str      x9, [sp, #0xc0]
01867cec  ldr      x8, [sp, #0xe8]
01867cf0  cmp      w8, #1
01867cf4  b.lt     #0x1867f14
01867cf8  ldr      x10, [sp, #0xa8]
01867cfc  ldr      x9, [sp, #0x88]
01867d00  ldr      x11, [sp, #0x98]
01867d04  ucvtf    s0, w10
01867d08  fcvtzu   w8, s0, #3
01867d0c  ucvtf    s0, w8
01867d10  sub      x9, x9, w8, uxtw
01867d14  ucvtf    s1, x9
01867d18  ldr      x9, [sp, #0x80]
01867d1c  fadd     s0, s0, s10
01867d20  mul      x9, x9, x10
01867d24  ldr      w10, [sp, #0x124]
01867d28  fcmp     s0, s8
01867d2c  madd     w10, w10, w8, w11
01867d30  fcsel    s0, s1, s10, gt
01867d34  str      w10, [sp, #0xe4]
01867d38  fcvtzu   w8, s0
01867d3c  stp      x8, xzr, [sp, #0xf0]
01867d40  ldr      x8, [sp, #0x90]
01867d44  add      x8, x8, x9, lsl #3
01867d48  str      x8, [sp, #0xd8]
01867d4c  lsl      w8, w10, #1
01867d50  str      w8, [sp, #0xd4]
01867d54  ldr      x8, [sp, #0xf0]
01867d58  cbz      w8, #0x1867efc
01867d5c  ldr      x9, [sp, #0xf8]
01867d60  ldp      x12, x8, [sp, #0xb0]
01867d64  scvtf    s0, w9
01867d68  ldr      x11, [sp, #0xd8]
01867d6c  ldp      w10, w27, [sp, #0xd0]
01867d70  ldr      x25, [sp, #0xf0]
01867d74  mul      x8, x8, x9
01867d78  ldr      w29, [sp, #0xe4]
01867d7c  fcvtzu   w9, s0, #3
01867d80  add      x8, x11, x8, lsl #3
01867d84  ldr      x11, [sp, #0xc0]
01867d88  bfi      w10, w9, #1, #0x1f
01867d8c  ubfx     w9, w9, #2, #0x1d
01867d90  ldr      x11, [x8, x11, lsl #3]
01867d94  mul      x23, x12, x9
01867d98  ucvtf    s0, w10
01867d9c  ldr      x10, [sp, #0xc8]
01867da0  ldr      x8, [x8, x10, lsl #3]
01867da4  add      w10, w9, #1
01867da8  fadd     s11, s0, s10
01867dac  add      x20, x11, #0x80
01867db0  mul      x9, x12, x10
01867db4  add      x21, x8, #0x80
01867db8  str      x9, [sp, #0x100]
01867dbc  ldr      x9, [sp, #0x110]
01867dc0  lsr      w8, w29, #3
01867dc4  sub      x1, x21, #0x80
01867dc8  add      x0, sp, #0x5b0
01867dcc  mov      w2, #0x80
01867dd0  mul      x8, x9, x8
01867dd4  ldr      x9, [sp, #0x118]
01867dd8  add      x24, x9, x8, lsl #3
01867ddc  add      x8, x24, x23, lsl #3
01867de0  ldr      x19, [x8, x26, lsl #3]
01867de4  bl       #0x2f14a00  ; <memcpy>
01867de8  sub      x1, x20, #0x80
01867dec  add      x0, sp, #0x3b0
01867df0  mov      w2, #0x80
01867df4  bl       #0x2f14a60  ; <memmove>
01867df8  add      x0, sp, #0x330
01867dfc  add      x1, sp, #0x5b0
01867e00  mov      w2, #0x80
01867e04  bl       #0x2f14a00  ; <memcpy>
01867e08  add      x8, sp, #0x430
01867e0c  add      x0, sp, #0x3b0
01867e10  add      x1, sp, #0x330
01867e14  mov      w2, #-0x20
01867e18  bl       #0x2f152c0  ; <Q6_W_vshuff_VVR_HVXDBL>
01867e1c  and      w28, w27, #0xe
01867e20  add      x1, sp, #0x430
01867e24  mov      w2, #0x80
01867e28  add      x0, x19, x28, lsl #7
01867e2c  bl       #0x2f14a60  ; <memmove>
01867e30  orr      w22, w28, #1
01867e34  ldr      x1, [sp, #0x128]
01867e38  mov      w2, #0x80
01867e3c  add      x0, x19, x22, lsl #7
01867e40  bl       #0x2f14a60  ; <memmove>
01867e44  fcmp     s11, s9
01867e48  b.ge     #0x1867edc
01867e4c  ldr      x8, [sp, #0x100]
01867e50  add      x0, sp, #0x5b0
01867e54  mov      x1, x21
01867e58  mov      w2, #0x80
01867e5c  add      x8, x24, x8, lsl #3
01867e60  ldr      x19, [x8, x26, lsl #3]
01867e64  bl       #0x2f14a00  ; <memcpy>
01867e68  add      x0, sp, #0x530
01867e6c  mov      x1, x20
01867e70  mov      w2, #0x80
01867e74  bl       #0x2f14a00  ; <memcpy>
01867e78  add      x0, sp, #0x1b0
01867e7c  add      x1, sp, #0x530
01867e80  mov      w2, #0x80
01867e84  bl       #0x2f14a00  ; <memcpy>
01867e88  add      x0, sp, #0x130
01867e8c  add      x1, sp, #0x5b0
01867e90  mov      w2, #0x80
01867e94  bl       #0x2f14a00  ; <memcpy>
01867e98  add      x8, sp, #0x230
01867e9c  add      x0, sp, #0x1b0
01867ea0  add      x1, sp, #0x130
01867ea4  mov      w2, #-0x20
01867ea8  bl       #0x2f152c0  ; <Q6_W_vshuff_VVR_HVXDBL>
01867eac  add      x0, sp, #0x430
01867eb0  add      x1, sp, #0x230
01867eb4  mov      w2, #0x100
01867eb8  bl       #0x2f14a00  ; <memcpy>
01867ebc  add      x0, x19, x28, lsl #7
01867ec0  add      x1, sp, #0x430
01867ec4  mov      w2, #0x80
01867ec8  bl       #0x2f14a60  ; <memmove>
01867ecc  add      x0, x19, x22, lsl #7
01867ed0  ldr      x1, [sp, #0x128]
01867ed4  mov      w2, #0x80
01867ed8  bl       #0x2f14a60  ; <memmove>
01867edc  ldr      w8, [sp, #0x10c]
01867ee0  add      x20, x20, #0x100
01867ee4  add      x21, x21, #0x100
01867ee8  subs     x25, x25, #1
01867eec  add      w27, w27, w8
01867ef0  ldr      w8, [sp, #0x124]
01867ef4  add      w29, w29, w8
01867ef8  b.ne     #0x1867dbc
01867efc  ldr      x9, [sp, #0xf8]
01867f00  ldr      x8, [sp, #0xe8]
01867f04  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
01867f08  cmp      x9, x8
01867f0c  str      x9, [sp, #0xf8]
01867f10  b.ne     #0x1867d54
01867f14  ldp      x8, x9, [sp, #0xa0]
01867f18  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
01867f1c  cmp      x9, x8
01867f20  str      x9, [sp, #0xa8]
01867f24  b.ne     #0x1867cec
01867f28  ldr      w8, [sp, #0x4c]
01867f2c  ldr      x9, [sp, #0x78]
01867f30  add      w9, w9, w8
01867f34  ldr      x8, [sp, #0x60]
01867f38  cmp      w9, w8
01867f3c  b.lt     #0x1867c68
01867f40  ldp      x8, x9, [sp, #0x28]
01867f44  add      x9, x9, #1  ; "teTensorIN5Tdefs10QuantUint8EEEiRT_RKS6_RK11TensorShapeILj4EEEEEE"
01867f48  cmp      x9, x8
01867f4c  b.ne     #0x1867c4c
01867f50  ldp      w8, w11, [sp, #0x10]
01867f54  add      w11, w11, #1
01867f58  cmp      w11, w8
01867f5c  b.ne     #0x1867c38
01867f60  mov      w0, wzr
01867f64  add      sp, sp, #0x670
01867f68  ldp      x20, x19, [sp, #0x70]
01867f6c  ldp      x22, x21, [sp, #0x60]
01867f70  ldp      x24, x23, [sp, #0x50]
01867f74  ldp      x26, x25, [sp, #0x40]
01867f78  ldp      x28, x27, [sp, #0x30]
01867f7c  ldp      x29, x30, [sp, #0x20]
01867f80  ldp      d9, d8, [sp, #0x10]
01867f84  ldp      d11, d10, [sp], #0x80
01867f88  ret      
