; function 0x14a0c size 0x974 _ZN12ParamTrigger14triggerShadingE15param_trigger_tP21param_shading_float_tRb
00014a0c  paciasp  
00014a10  sub      sp, sp, #0x130
00014a14  stp      d15, d14, [sp, #0x90]
00014a18  stp      d13, d12, [sp, #0xa0]
00014a1c  stp      d11, d10, [sp, #0xb0]
00014a20  stp      d9, d8, [sp, #0xc0]
00014a24  stp      x29, x30, [sp, #0xd0]
00014a28  stp      x28, x27, [sp, #0xe0]
00014a2c  stp      x26, x25, [sp, #0xf0]
00014a30  stp      x24, x23, [sp, #0x100]
00014a34  stp      x22, x21, [sp, #0x110]
00014a38  stp      x20, x19, [sp, #0x120]
00014a3c  add      x29, sp, #0xd0
00014a40  mrs      x25, tpidr_el0
00014a44  mov      x22, x3
00014a48  mov      x19, x2
00014a4c  ldr      x8, [x25, #0x28]
00014a50  mov      x20, x0
00014a54  mov      x21, x1
00014a58  stur     x8, [x29, #-0x50]
00014a5c  add      x8, x0, #0x70
00014a60  ldr      x10, [x0, #0x68]
00014a64  cmp      x10, x8
00014a68  b.eq     #0x14b28
00014a6c  ldr      x9, [x8]
00014a70  b        #0x14a80
00014a74  cmp      x12, x8
00014a78  mov      x10, x12
00014a7c  b.eq     #0x14b28
00014a80  mov      x13, x9
00014a84  mov      x12, x8
00014a88  cbz      x9, #0x14a9c
00014a8c  mov      x11, x13
00014a90  ldr      x13, [x13, #8]
00014a94  cbnz     x13, #0x14a8c
00014a98  b        #0x14ab0
00014a9c  ldr      x11, [x12, #0x10]
00014aa0  ldr      x13, [x11]
00014aa4  cmp      x12, x13
00014aa8  mov      x12, x11
00014aac  b.eq     #0x14a9c
00014ab0  cmp      x10, x11
00014ab4  b.eq     #0x14b34
00014ab8  ldr      x11, [x10, #8]
00014abc  mov      x13, x10
00014ac0  mov      x14, x11
00014ac4  cbz      x11, #0x14ad8
00014ac8  mov      x12, x14
00014acc  ldr      x14, [x14]
00014ad0  cbnz     x14, #0x14ac8
00014ad4  b        #0x14aec
00014ad8  ldr      x12, [x13, #0x10]
00014adc  ldr      x14, [x12]
00014ae0  cmp      x13, x14
00014ae4  mov      x13, x12
00014ae8  b.ne     #0x14ad8
00014aec  ldr      s0, [x21, #4]
00014af0  ldr      s1, [x12, #0x20]
00014af4  fcmp     s0, s1
00014af8  b.mi     #0x14b34
00014afc  cbz      x11, #0x14b10
00014b00  mov      x12, x11
00014b04  ldr      x11, [x11]
00014b08  cbnz     x11, #0x14b00
00014b0c  b        #0x14a74
00014b10  ldr      x12, [x10, #0x10]
00014b14  ldr      x11, [x12]
00014b18  cmp      x10, x11
00014b1c  mov      x10, x12
00014b20  b.ne     #0x14b10
00014b24  b        #0x14a74
00014b28  mov      w1, wzr
00014b2c  mov      x0, xzr
00014b30  b        #0x14b3c
00014b34  ldr      x0, [x10, #0x28]
00014b38  ldrh     w1, [x10, #0x30]
00014b3c  ldrh     w2, [x21]
00014b40  add      x3, sp, #0x68
00014b44  add      x4, sp, #0x50
00014b48  stp      xzr, xzr, [sp, #0x68]
00014b4c  str      xzr, [sp, #0x78]
00014b50  stp      xzr, xzr, [sp, #0x50]
00014b54  str      xzr, [sp, #0x60]
00014b58  strh     wzr, [sp, #0x4c]
00014b5c  str      wzr, [sp, #0x48]
00014b60  strh     wzr, [sp, #0x44]
00014b64  str      wzr, [sp, #0x40]
00014b68  strh     wzr, [sp, #0x3c]
00014b6c  str      wzr, [sp, #0x38]
00014b70  strh     wzr, [sp, #0x34]
00014b74  str      wzr, [sp, #0x30]
00014b78  bl       #0x1f580  ; <_Z22findElementAndPreviousI11param_lux_tEbPT_ttRS1_S3_>
00014b7c  ldr      x8, [sp, #0x70]
00014b80  ldrh     w2, [x21, #2]
00014b84  mov      w24, w0
00014b88  ldrh     w1, [sp, #0x78]
00014b8c  add      x3, sp, #0x48
00014b90  add      x4, sp, #0x40
00014b94  mov      x0, x8
00014b98  bl       #0x1f598  ; <_Z22findElementAndPreviousI11param_cct_tEbPT_ttRS1_S3_>
00014b9c  ldr      x8, [sp, #0x58]
00014ba0  ldrh     w2, [x21, #2]
00014ba4  mov      w23, w0
00014ba8  ldrh     w1, [sp, #0x60]
00014bac  add      x3, sp, #0x38
00014bb0  add      x4, sp, #0x30
00014bb4  mov      x0, x8
00014bb8  bl       #0x1f598  ; <_Z22findElementAndPreviousI11param_cct_tEbPT_ttRS1_S3_>
00014bbc  tbz      w24, #0, #0x14ee4
00014bc0  tbz      w23, #0, #0x14ee4
00014bc4  tbz      w0, #0, #0x14ee4
00014bc8  adrp     x9, #0x20000
00014bcc  ldr      x9, [x9, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
00014bd0  ldrh     w23, [sp, #0x4c]
00014bd4  ldrh     w28, [sp, #0x44]
00014bd8  ldrh     w27, [sp, #0x3c]
00014bdc  ldrh     w26, [sp, #0x34]
00014be0  str      x20, [sp, #0x28]
00014be4  ldr      w8, [x9]
00014be8  cmp      w8, #2
00014bec  b.hi     #0x14ccc
00014bf0  adrp     x8, #0x20000
00014bf4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00014bf8  ldrb     w8, [x8]
00014bfc  tbz      w8, #1, #0x14ccc
00014c00  adrp     x0, #0x6000
00014c04  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014c08  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014c0c  ldrb     w8, [x20, #0x18]
00014c10  ldr      x9, [x20, #0x28]
00014c14  add      x24, x20, #0x19
00014c18  mov      x1, x0
00014c1c  adrp     x3, #0x6000
00014c20  add      x3, x3, #0x7e5  ; "triggerShading"
00014c24  tst      w8, #1
00014c28  adrp     x5, #0x7000
00014c2c  add      x5, x5, #0x95f  ; " [LeicaFilter][%s] shading index %d, %d, %d, %d"
00014c30  csel     x6, x24, x9, eq
00014c34  mov      w0, #2
00014c38  mov      w2, #0x121
00014c3c  mov      w4, #0x44
00014c40  mov      w7, w23
00014c44  str      w26, [sp, #0x10]
00014c48  str      w27, [sp, #8]
00014c4c  str      w28, [sp]
00014c50  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00014c54  adrp     x9, #0x20000
00014c58  ldr      x9, [x9, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
00014c5c  cbnz     w0, #0x14ccc
00014c60  mov      w0, #2
00014c64  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00014c68  str      x0, [sp, #0x20]
00014c6c  adrp     x0, #0x6000
00014c70  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014c74  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014c78  ldrb     w8, [x20, #0x18]
00014c7c  ldr      x9, [x20, #0x28]
00014c80  mov      x4, x0
00014c84  ldr      x3, [sp, #0x20]
00014c88  adrp     x1, #0x7000
00014c8c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00014c90  tst      w8, #1
00014c94  adrp     x2, #0x7000
00014c98  add      x2, x2, #0x6f8  ; "%s %s:%d %s() [LeicaFilter][%s] shading index %d, %d, %d, %d"
00014c9c  csel     x7, x24, x9, eq
00014ca0  adrp     x6, #0x6000
00014ca4  add      x6, x6, #0x7e5  ; "triggerShading"
00014ca8  mov      w0, #3
00014cac  mov      w5, #0x121
00014cb0  str      w26, [sp, #0x18]
00014cb4  str      w27, [sp, #0x10]
00014cb8  str      w28, [sp, #8]
00014cbc  str      w23, [sp]
00014cc0  bl       #0x1ee00  ; <__android_log_print>
00014cc4  adrp     x9, #0x20000
00014cc8  ldr      x9, [x9, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
00014ccc  adrp     x24, #0x20000
00014cd0  ldr      x24, [x24, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
00014cd4  ldr      w8, [x24]
00014cd8  cmp      w8, #2
00014cdc  b.hi     #0x14d68
00014ce0  adrp     x8, #0x20000
00014ce4  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00014ce8  ldrb     w8, [x8]
00014cec  tbz      w8, #1, #0x14d68
00014cf0  adrp     x8, #0x20000
00014cf4  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00014cf8  ldr      w8, [x8]
00014cfc  cbz      w8, #0x14d68
00014d00  adrp     x0, #0x6000
00014d04  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014d08  mov      x24, x9
00014d0c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014d10  ldrb     w8, [x20, #0x18]
00014d14  ldr      x9, [x20, #0x28]
00014d18  add      x10, x20, #0x19
00014d1c  mov      x2, x0
00014d20  adrp     x1, #0x6000
00014d24  add      x1, x1, #0xb34  ; =0x6b34
00014d28  tst      w8, #1
00014d2c  adrp     x3, #0x6000
00014d30  add      x3, x3, #0x7e5  ; "triggerShading"
00014d34  csel     x6, x10, x9, eq
00014d38  adrp     x5, #0x7000
00014d3c  add      x5, x5, #0x95f  ; " [LeicaFilter][%s] shading index %d, %d, %d, %d"
00014d40  mov      w0, #2
00014d44  mov      w4, #0x121
00014d48  mov      w7, w23
00014d4c  str      w26, [sp, #0x10]
00014d50  str      w27, [sp, #8]
00014d54  str      w28, [sp]
00014d58  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00014d5c  mov      x9, x24
00014d60  adrp     x24, #0x20000
00014d64  ldr      x24, [x24, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
00014d68  ldrsh    w8, [x20, #8]
00014d6c  cmp      w8, w23
00014d70  b.ne     #0x14ef4
00014d74  ldrsh    w8, [x20, #0xa]
00014d78  cmp      w8, w28
00014d7c  b.ne     #0x14ef4
00014d80  ldrsh    w8, [x20, #0xc]
00014d84  cmp      w8, w27
00014d88  b.ne     #0x14ef4
00014d8c  ldrsh    w8, [x20, #0xe]
00014d90  cmp      w8, w26
00014d94  b.ne     #0x14ef4
00014d98  ldr      w8, [x9]
00014d9c  strh     w23, [x20, #8]
00014da0  strh     w28, [x20, #0xa]
00014da4  cmp      w8, #2
00014da8  strh     w27, [x20, #0xc]
00014dac  strh     w26, [x20, #0xe]
00014db0  b.hi     #0x14e68
00014db4  adrp     x8, #0x20000
00014db8  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00014dbc  ldrb     w8, [x8]
00014dc0  tbz      w8, #1, #0x14e68
00014dc4  adrp     x0, #0x6000
00014dc8  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014dcc  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014dd0  ldrb     w8, [x20, #0x18]
00014dd4  ldr      x9, [x20, #0x28]
00014dd8  add      x22, x20, #0x19
00014ddc  mov      x1, x0
00014de0  adrp     x3, #0x6000
00014de4  add      x3, x3, #0x7e5  ; "triggerShading"
00014de8  tst      w8, #1
00014dec  adrp     x5, #0x7000
00014df0  add      x5, x5, #0x57b  ; " [LeicaFilter][%s] is_trigger_change = %d, no need to trigger"
00014df4  csel     x6, x22, x9, eq
00014df8  mov      w0, #2
00014dfc  mov      w2, #0x133
00014e00  mov      w4, #0x44
00014e04  mov      w7, wzr
00014e08  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00014e0c  cbnz     w0, #0x14e68
00014e10  mov      w0, #2
00014e14  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00014e18  mov      x21, x0
00014e1c  adrp     x0, #0x6000
00014e20  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014e24  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014e28  ldrb     w8, [x20, #0x18]
00014e2c  ldr      x9, [x20, #0x28]
00014e30  mov      x4, x0
00014e34  adrp     x1, #0x7000
00014e38  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00014e3c  adrp     x2, #0x7000
00014e40  add      x2, x2, #0xc6f  ; "%s %s:%d %s() [LeicaFilter][%s] is_trigger_change = %d, no need to trigger"
00014e44  tst      w8, #1
00014e48  adrp     x6, #0x6000
00014e4c  add      x6, x6, #0x7e5  ; "triggerShading"
00014e50  csel     x7, x22, x9, eq
00014e54  mov      w0, #3
00014e58  mov      x3, x21
00014e5c  mov      w5, #0x133
00014e60  str      wzr, [sp]
00014e64  bl       #0x1ee00  ; <__android_log_print>
00014e68  ldr      w8, [x24]
00014e6c  cmp      w8, #2
00014e70  b.hi     #0x15328
00014e74  adrp     x8, #0x20000
00014e78  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00014e7c  ldrb     w8, [x8]
00014e80  tbz      w8, #1, #0x15328
00014e84  adrp     x8, #0x20000
00014e88  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00014e8c  ldr      w8, [x8]
00014e90  cbz      w8, #0x15328
00014e94  adrp     x0, #0x6000
00014e98  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014e9c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014ea0  ldrb     w8, [x20, #0x18]
00014ea4  ldr      x9, [x20, #0x28]
00014ea8  add      x10, x20, #0x19
00014eac  mov      x2, x0
00014eb0  adrp     x1, #0x6000
00014eb4  add      x1, x1, #0xb34  ; =0x6b34
00014eb8  tst      w8, #1
00014ebc  adrp     x3, #0x6000
00014ec0  add      x3, x3, #0x7e5  ; "triggerShading"
00014ec4  csel     x6, x10, x9, eq
00014ec8  adrp     x5, #0x7000
00014ecc  add      x5, x5, #0x57b  ; " [LeicaFilter][%s] is_trigger_change = %d, no need to trigger"
00014ed0  mov      w0, #2
00014ed4  mov      w4, #0x133
00014ed8  mov      w7, wzr
00014edc  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00014ee0  b        #0x15328
00014ee4  ldr      x8, [x20, #0x48]
00014ee8  ldp      q1, q0, [x8]
00014eec  stp      q1, q0, [x19]
00014ef0  b        #0x15334
00014ef4  mov      w8, #1
00014ef8  ldr      h1, [sp, #0x6a]
00014efc  ldr      h2, [sp, #0x50]
00014f00  strb     w8, [x22]
00014f04  ldr      h3, [sp, #0x40]
00014f08  strh     w23, [x20, #8]
00014f0c  ucvtf    s1, s1
00014f10  ucvtf    s2, s2
00014f14  strh     w28, [x20, #0xa]
00014f18  ldr      w8, [x9]
00014f1c  strh     w27, [x20, #0xc]
00014f20  strh     w26, [x20, #0xe]
00014f24  cmp      w8, #3
00014f28  ldr      h0, [x21]
00014f2c  fsub     s2, s2, s1
00014f30  ldr      h4, [x21, #2]
00014f34  ucvtf    s0, s0
00014f38  fsub     s0, s0, s1
00014f3c  ldr      h1, [sp, #0x4a]
00014f40  ucvtf    s1, s1
00014f44  fdiv     s0, s0, s2
00014f48  ucvtf    s2, s3
00014f4c  ucvtf    s3, s4
00014f50  ldr      h4, [sp, #0x30]
00014f54  ucvtf    s4, s4
00014f58  fsub     s2, s2, s1
00014f5c  fsub     s1, s3, s1
00014f60  fdiv     s1, s1, s2
00014f64  ldr      h2, [sp, #0x3a]
00014f68  ucvtf    s2, s2
00014f6c  fsub     s3, s3, s2
00014f70  fsub     s2, s4, s2
00014f74  fdiv     s2, s3, s2
00014f78  fmov     s3, #1.00000000
00014f7c  fsub     s1, s3, s1
00014f80  fsub     s0, s3, s0
00014f84  fsub     s4, s3, s1
00014f88  fsub     s5, s3, s0
00014f8c  fmul     s14, s0, s1
00014f90  fmul     s15, s0, s4
00014f94  fsub     s2, s3, s2
00014f98  fsub     s3, s3, s2
00014f9c  fmul     s13, s5, s2
00014fa0  fmul     s12, s5, s3
00014fa4  b.hs     #0x15084
00014fa8  adrp     x8, #0x20000
00014fac  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00014fb0  ldrb     w8, [x8]
00014fb4  tbz      w8, #1, #0x15084
00014fb8  adrp     x0, #0x6000
00014fbc  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014fc0  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014fc4  fcvt     d8, s14
00014fc8  fcvt     d9, s15
00014fcc  ldrb     w8, [x20, #0x18]
00014fd0  fcvt     d10, s13
00014fd4  fcvt     d11, s12
00014fd8  ldr      x9, [x20, #0x28]
00014fdc  add      x22, x20, #0x19
00014fe0  tst      w8, #1
00014fe4  mov      x1, x0
00014fe8  csel     x6, x22, x9, eq
00014fec  adrp     x3, #0x6000
00014ff0  add      x3, x3, #0x7e5  ; "triggerShading"
00014ff4  fmov     d0, d8
00014ff8  fmov     d1, d9
00014ffc  adrp     x5, #0x5000
00015000  add      x5, x5, #0x937  ; " [LeicaFilter][%s] %f, %f, %f, %f"
00015004  fmov     d2, d10
00015008  fmov     d3, d11
0001500c  mov      w0, #2
00015010  mov      w2, #0x154
00015014  mov      w4, #0x44
00015018  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0001501c  cbnz     w0, #0x15084
00015020  mov      w0, #2
00015024  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00015028  mov      x21, x0
0001502c  adrp     x0, #0x6000
00015030  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00015034  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00015038  ldrb     w8, [x20, #0x18]
0001503c  fmov     d0, d8
00015040  fmov     d1, d9
00015044  fmov     d2, d10
00015048  fmov     d3, d11
0001504c  ldr      x9, [x20, #0x28]
00015050  tst      w8, #1
00015054  mov      x4, x0
00015058  adrp     x1, #0x7000
0001505c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00015060  csel     x7, x22, x9, eq
00015064  adrp     x2, #0x5000
00015068  add      x2, x2, #0xb79  ; "%s %s:%d %s() [LeicaFilter][%s] %f, %f, %f, %f"
0001506c  adrp     x6, #0x6000
00015070  add      x6, x6, #0x7e5  ; "triggerShading"
00015074  mov      w0, #3
00015078  mov      x3, x21
0001507c  mov      w5, #0x154
00015080  bl       #0x1ee00  ; <__android_log_print>
00015084  ldr      w8, [x24]
00015088  cmp      w8, #2
0001508c  b.hi     #0x15108
00015090  adrp     x8, #0x20000
00015094  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00015098  ldrb     w8, [x8]
0001509c  tbz      w8, #1, #0x15108
000150a0  adrp     x8, #0x20000
000150a4  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
000150a8  ldr      w8, [x8]
000150ac  cbz      w8, #0x15108
000150b0  adrp     x0, #0x6000
000150b4  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
000150b8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000150bc  ldrb     w8, [x20, #0x18]
000150c0  fcvt     d0, s14
000150c4  fcvt     d1, s15
000150c8  fcvt     d2, s13
000150cc  fcvt     d3, s12
000150d0  ldr      x9, [x20, #0x28]
000150d4  add      x10, x20, #0x19
000150d8  tst      w8, #1
000150dc  mov      x2, x0
000150e0  csel     x6, x10, x9, eq
000150e4  adrp     x1, #0x6000
000150e8  add      x1, x1, #0xb34  ; =0x6b34
000150ec  adrp     x3, #0x6000
000150f0  add      x3, x3, #0x7e5  ; "triggerShading"
000150f4  adrp     x5, #0x5000
000150f8  add      x5, x5, #0x937  ; " [LeicaFilter][%s] %f, %f, %f, %f"
000150fc  mov      w0, #2
00015100  mov      w4, #0x154
00015104  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00015108  ldr      x12, [x20, #0x48]
0001510c  lsl      x8, x23, #5
00015110  lsl      x9, x28, #5
00015114  lsl      x10, x27, #5
00015118  lsl      x11, x26, #5
0001511c  ldr      s0, [x12, x8]
00015120  ldr      s1, [x12, x9]
00015124  ldr      s2, [x12, x10]
00015128  fmul     s0, s14, s0
0001512c  fmul     s1, s15, s1
00015130  fadd     s0, s0, s1
00015134  fmul     s1, s13, s2
00015138  ldr      s2, [x12, x11]
0001513c  fadd     s0, s0, s1
00015140  fmul     s1, s12, s2
00015144  fadd     s0, s0, s1
00015148  str      s0, [x19]
0001514c  ldr      x12, [x20, #0x48]
00015150  add      x13, x12, x8
00015154  add      x14, x12, x9
00015158  ldr      s0, [x13, #4]
0001515c  ldr      s1, [x14, #4]
00015160  add      x13, x12, x10
00015164  ldr      s2, [x13, #4]
00015168  add      x12, x12, x11
0001516c  fmul     s0, s14, s0
00015170  fmul     s1, s15, s1
00015174  fadd     s0, s0, s1
00015178  fmul     s1, s13, s2
0001517c  ldr      s2, [x12, #4]
00015180  fadd     s0, s0, s1
00015184  fmul     s1, s12, s2
00015188  fadd     s0, s0, s1
0001518c  str      s0, [x19, #4]
00015190  ldr      x12, [x20, #0x48]
00015194  add      x13, x12, x8
00015198  add      x14, x12, x9
0001519c  ldr      s0, [x13, #8]
000151a0  ldr      s1, [x14, #8]
000151a4  add      x13, x12, x10
000151a8  ldr      s2, [x13, #8]
000151ac  add      x12, x12, x11
000151b0  fmul     s0, s14, s0
000151b4  fmul     s1, s15, s1
000151b8  fadd     s0, s0, s1
000151bc  fmul     s1, s13, s2
000151c0  ldr      s2, [x12, #8]
000151c4  fadd     s0, s0, s1
000151c8  fmul     s1, s12, s2
000151cc  fadd     s0, s0, s1
000151d0  str      s0, [x19, #8]
000151d4  ldr      x12, [x20, #0x48]
000151d8  add      x13, x12, x8
000151dc  add      x14, x12, x9
000151e0  ldr      s0, [x13, #0xc]
000151e4  ldr      s1, [x14, #0xc]
000151e8  add      x13, x12, x10
000151ec  ldr      s2, [x13, #0xc]
000151f0  add      x12, x12, x11
000151f4  fmul     s0, s14, s0
000151f8  fmul     s1, s15, s1
000151fc  fadd     s0, s0, s1
00015200  fmul     s1, s13, s2
00015204  ldr      s2, [x12, #0xc]
00015208  fadd     s0, s0, s1
0001520c  fmul     s1, s12, s2
00015210  fadd     s0, s0, s1
00015214  str      s0, [x19, #0xc]
00015218  ldr      x12, [x20, #0x48]
0001521c  add      x13, x12, x8
00015220  add      x14, x12, x9
00015224  ldr      s0, [x13, #0x10]
00015228  ldr      s1, [x14, #0x10]
0001522c  add      x13, x12, x10
00015230  ldr      s2, [x13, #0x10]
00015234  add      x12, x12, x11
00015238  fmul     s0, s14, s0
0001523c  fmul     s1, s15, s1
00015240  fadd     s0, s0, s1
00015244  fmul     s1, s13, s2
00015248  ldr      s2, [x12, #0x10]
0001524c  fadd     s0, s0, s1
00015250  fmul     s1, s12, s2
00015254  fadd     s0, s0, s1
00015258  str      s0, [x19, #0x10]
0001525c  ldr      x12, [x20, #0x48]
00015260  add      x13, x12, x8
00015264  add      x14, x12, x9
00015268  ldr      s0, [x13, #0x14]
0001526c  ldr      s1, [x14, #0x14]
00015270  add      x13, x12, x10
00015274  ldr      s2, [x13, #0x14]
00015278  add      x12, x12, x11
0001527c  fmul     s0, s14, s0
00015280  fmul     s1, s15, s1
00015284  fadd     s0, s0, s1
00015288  fmul     s1, s13, s2
0001528c  ldr      s2, [x12, #0x14]
00015290  fadd     s0, s0, s1
00015294  fmul     s1, s12, s2
00015298  fadd     s0, s0, s1
0001529c  str      s0, [x19, #0x14]
000152a0  ldr      x12, [x20, #0x48]
000152a4  add      x13, x12, x8
000152a8  add      x14, x12, x9
000152ac  ldr      s0, [x13, #0x18]
000152b0  ldr      s1, [x14, #0x18]
000152b4  add      x13, x12, x10
000152b8  ldr      s2, [x13, #0x18]
000152bc  add      x12, x12, x11
000152c0  fmul     s0, s14, s0
000152c4  fmul     s1, s15, s1
000152c8  fadd     s0, s0, s1
000152cc  fmul     s1, s13, s2
000152d0  ldr      s2, [x12, #0x18]
000152d4  fadd     s0, s0, s1
000152d8  fmul     s1, s12, s2
000152dc  fadd     s0, s0, s1
000152e0  str      s0, [x19, #0x18]
000152e4  ldr      x12, [x20, #0x48]
000152e8  add      x8, x12, x8
000152ec  add      x9, x12, x9
000152f0  ldr      s0, [x8, #0x1c]  ; =0x2001c f32=0
000152f4  ldr      s1, [x9, #0x1c]  ; =0x2001c f32=0
000152f8  add      x8, x12, x10
000152fc  ldr      s2, [x8, #0x1c]  ; =0x2001c f32=0
00015300  add      x8, x12, x11
00015304  fmul     s0, s14, s0
00015308  fmul     s1, s15, s1
0001530c  fadd     s0, s0, s1
00015310  fmul     s1, s13, s2
00015314  ldr      s2, [x8, #0x1c]  ; =0x2001c f32=0
00015318  fadd     s0, s0, s1
0001531c  fmul     s1, s12, s2
00015320  fadd     s0, s0, s1
00015324  str      s0, [x19, #0x1c]
00015328  add      x0, sp, #0x28
0001532c  mov      x1, x19
00015330  bl       #0x16190
00015334  ldr      x8, [x25, #0x28]
00015338  ldur     x9, [x29, #-0x50]
0001533c  cmp      x8, x9
00015340  b.ne     #0x1537c
00015344  mov      w0, #1
00015348  ldp      x20, x19, [sp, #0x120]
0001534c  ldp      x22, x21, [sp, #0x110]
00015350  ldp      x24, x23, [sp, #0x100]
00015354  ldp      x26, x25, [sp, #0xf0]
00015358  ldp      x28, x27, [sp, #0xe0]
0001535c  ldp      x29, x30, [sp, #0xd0]
00015360  ldp      d9, d8, [sp, #0xc0]
00015364  ldp      d11, d10, [sp, #0xb0]
00015368  ldp      d13, d12, [sp, #0xa0]
0001536c  ldp      d15, d14, [sp, #0x90]
00015370  add      sp, sp, #0x130
00015374  autiasp  
00015378  ret      
0001537c  bl       #0x1ecf8  ; <__stack_chk_fail>
