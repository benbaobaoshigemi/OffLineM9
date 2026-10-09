; function 0x17a84 size 0x18d0 _ZN9ParamUtil10initializeE9ParamMode
00017a84  paciasp  
00017a88  stp      x29, x30, [sp, #-0x60]!
00017a8c  stp      x28, x27, [sp, #0x10]
00017a90  stp      x26, x25, [sp, #0x20]
00017a94  stp      x24, x23, [sp, #0x30]
00017a98  stp      x22, x21, [sp, #0x40]
00017a9c  stp      x20, x19, [sp, #0x50]
00017aa0  mov      x29, sp
00017aa4  sub      sp, sp, #0x1e0
00017aa8  mrs      x25, tpidr_el0
00017aac  adrp     x26, #0x20000
00017ab0  mov      w20, w1
00017ab4  ldr      x8, [x25, #0x28]
00017ab8  ldr      x26, [x26, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
00017abc  mov      x19, x0
00017ac0  stur     x8, [x29, #-0x10]
00017ac4  ldr      w8, [x26]
00017ac8  cmp      w8, #2
00017acc  b.hi     #0x17b58
00017ad0  adrp     x8, #0x20000
00017ad4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00017ad8  ldrb     w8, [x8]
00017adc  tbz      w8, #1, #0x17b58
00017ae0  adrp     x0, #0x7000
00017ae4  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00017ae8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00017aec  mov      x1, x0
00017af0  adrp     x3, #0x5000
00017af4  add      x3, x3, #0xfc0  ; "initialize"
00017af8  adrp     x5, #0x6000
00017afc  add      x5, x5, #0xbd4  ; "[LeicaFilter]"
00017b00  mov      w0, #2
00017b04  mov      w2, #0x49
00017b08  mov      w4, #0x44
00017b0c  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00017b10  cbnz     w0, #0x17b58
00017b14  mov      w0, #2
00017b18  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00017b1c  mov      x21, x0
00017b20  adrp     x0, #0x7000
00017b24  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00017b28  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00017b2c  mov      x4, x0
00017b30  adrp     x1, #0x7000
00017b34  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00017b38  adrp     x2, #0x7000
00017b3c  add      x2, x2, #0xcba  ; "%s %s:%d %s()[LeicaFilter]"
00017b40  adrp     x6, #0x5000
00017b44  add      x6, x6, #0xfc0  ; "initialize"
00017b48  mov      w0, #3
00017b4c  mov      x3, x21
00017b50  mov      w5, #0x49
00017b54  bl       #0x1ee00  ; <__android_log_print>
00017b58  adrp     x27, #0x20000
00017b5c  ldr      x27, [x27, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
00017b60  ldr      w8, [x27]
00017b64  cmp      w8, #2
00017b68  b.hi     #0x17bc0
00017b6c  adrp     x8, #0x20000
00017b70  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00017b74  ldrb     w8, [x8]
00017b78  tbz      w8, #1, #0x17bc0
00017b7c  adrp     x8, #0x20000
00017b80  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00017b84  ldr      w8, [x8]
00017b88  cbz      w8, #0x17bc0
00017b8c  adrp     x0, #0x7000
00017b90  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00017b94  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00017b98  mov      x2, x0
00017b9c  adrp     x1, #0x6000
00017ba0  add      x1, x1, #0xb34  ; =0x6b34
00017ba4  adrp     x3, #0x5000
00017ba8  add      x3, x3, #0xfc0  ; "initialize"
00017bac  adrp     x5, #0x6000
00017bb0  add      x5, x5, #0xbd4  ; "[LeicaFilter]"
00017bb4  mov      w0, #2
00017bb8  mov      w4, #0x49
00017bbc  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00017bc0  add      x0, x19, #0x3c0
00017bc4  bl       #0x1f5e0  ; <_ZNSt3__15mutex4lockEv>
00017bc8  ldrb     w8, [x19, #5]
00017bcc  tbnz     w8, #0, #0x191c8
00017bd0  movi     v0.2d, #0000000000000000
00017bd4  mov      w8, #0x100
00017bd8  add      x0, x19, #8
00017bdc  mov      w1, wzr
00017be0  mov      w2, #0x370
00017be4  strh     w8, [x19, #4]
00017be8  str      d0, [x19, #0x378]
00017bec  bl       #0x1f4a8  ; <memset>
00017bf0  adrp     x22, #0x24000
00017bf4  add      x22, x22, #0x1b8  ; =0x241b8
00017bf8  stp      xzr, xzr, [sp, #0x50]
00017bfc  ldr      x8, [x22]
00017c00  str      xzr, [sp, #0x60]
00017c04  cbnz     x8, #0x17c20
00017c08  mov      x24, x22
00017c0c  mov      x23, x22
00017c10  b        #0x17c44
00017c14  ldr      x8, [x23]
00017c18  mov      x24, x23
00017c1c  cbz      x8, #0x17c44
00017c20  mov      x23, x8
00017c24  ldr      w8, [x8, #0x20]  ; =0x20020
00017c28  cmp      w20, w8
00017c2c  b.lt     #0x17c14
00017c30  cmp      w8, w20
00017c34  b.ge     #0x17c9c
00017c38  ldr      x8, [x23, #8]
00017c3c  cbnz     x8, #0x17c20
00017c40  add      x24, x23, #8
00017c44  mov      w0, #0x40
00017c48  bl       #0x1ecc8  ; <_Znwm>
00017c4c  str      w20, [x0, #0x20]  ; =0x7020
00017c50  adrp     x8, #0x24000
00017c54  mov      x21, x0
00017c58  stp      xzr, xzr, [x0, #0x30]
00017c5c  mov      x1, x0
00017c60  str      xzr, [x0, #0x28]  ; =0x7028
00017c64  stp      xzr, xzr, [x0]
00017c68  str      x23, [x0, #0x10]  ; =0x7010
00017c6c  str      x0, [x24]
00017c70  ldr      x9, [x8, #0x1b0]  ; =0x241b0
00017c74  ldr      x9, [x9]
00017c78  cbz      x9, #0x17c84
00017c7c  str      x9, [x8, #0x1b0]  ; =0x241b0
00017c80  ldr      x1, [x24]
00017c84  ldr      x0, [x22]
00017c88  bl       #0x12d8c
00017c8c  ldr      x8, [x22, #8]  ; =0x24008 <_edata>
00017c90  add      x8, x8, #1  ; =0x24001
00017c94  str      x8, [x22, #8]  ; =0x24008 <_edata>
00017c98  b        #0x17ca0
00017c9c  mov      x21, x23
00017ca0  mov      x8, x21
00017ca4  ldrb     w9, [x8, #0x28]!
00017ca8  tbnz     w9, #0, #0x17cc0
00017cac  ldr      q0, [x8]
00017cb0  ldr      x8, [x8, #0x10]  ; =0x24010
00017cb4  str      q0, [sp, #0x50]
00017cb8  str      x8, [sp, #0x60]
00017cbc  b        #0x17ccc
00017cc0  ldp      x2, x1, [x21, #0x30]
00017cc4  add      x0, sp, #0x50
00017cc8  bl       #0x126f8
00017ccc  ldrb     w8, [sp, #0x50]
00017cd0  ldp      x10, x9, [sp, #0x58]
00017cd4  add      x20, sp, #0x50
00017cd8  stp      xzr, xzr, [sp, #0x80]
00017cdc  lsr      x11, x8, #1
00017ce0  tst      w8, #1
00017ce4  str      xzr, [sp, #0x90]
00017ce8  csinc    x1, x9, x20, ne
00017cec  csel     x8, x11, x10, eq
00017cf0  add      x0, sp, #0x80
00017cf4  add      x2, x1, x8
00017cf8  bl       #0x1d674
00017cfc  add      x8, sp, #0x38
00017d00  add      x0, sp, #0x80
00017d04  mov      x1, xzr
00017d08  bl       #0x1f5f8  ; <_ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE>
00017d0c  ldrb     w8, [sp, #0x80]
00017d10  ldr      x21, [sp, #0x38]
00017d14  tbz      w8, #0, #0x17d28
00017d18  ldr      x8, [sp, #0x80]
00017d1c  ldr      x0, [sp, #0x90]
00017d20  and      x1, x8, #0xfffffffffffffffe
00017d24  bl       #0x1ed58  ; <_ZdlPvm>
00017d28  ands     w8, w21, #0xff
00017d2c  b.eq     #0x191b0
00017d30  cmp      w8, #0xff
00017d34  b.eq     #0x191b0
00017d38  movi     v0.2d, #0000000000000000
00017d3c  stp      q0, q0, [sp, #0x90]
00017d40  stp      q0, q0, [sp, #0xb0]
00017d44  stp      q0, q0, [sp, #0xd0]
00017d48  stp      q0, q0, [sp, #0xf0]
00017d4c  stp      q0, q0, [sp, #0x110]
00017d50  stp      q0, q0, [sp, #0x130]
00017d54  stp      q0, q0, [sp, #0x150]
00017d58  stp      q0, q0, [sp, #0x170]
00017d5c  stp      q0, q0, [sp, #0x190]
00017d60  stp      q0, q0, [sp, #0x1b0]
00017d64  str      q0, [sp, #0x80]
00017d68  add      x0, sp, #0x80
00017d6c  add      x1, sp, #0x50
00017d70  mov      w2, #4
00017d74  bl       #0x19808
00017d78  ldr      x8, [sp, #0x108]
00017d7c  cbz      x8, #0x19174
00017d80  ldrb     w8, [sp, #0x50]
00017d84  ldp      x10, x9, [sp, #0x58]
00017d88  orr      x22, x20, #1
00017d8c  stp      xzr, xzr, [sp, #0x38]
00017d90  lsr      x11, x8, #1
00017d94  tst      w8, #1
00017d98  str      xzr, [sp, #0x48]
00017d9c  csel     x1, x22, x9, eq
00017da0  stp      xzr, xzr, [sp, #0x20]
00017da4  csel     x8, x11, x10, eq
00017da8  str      xzr, [sp, #0x30]
00017dac  add      x0, sp, #0x20
00017db0  add      x2, x1, x8
00017db4  str      x25, [sp, #0x18]
00017db8  bl       #0x1d674
00017dbc  add      x0, sp, #0x20
00017dc0  mov      x1, xzr
00017dc4  bl       #0x1f610  ; <_ZNSt3__14__fs10filesystem11__file_sizeERKNS1_4pathEPNS_10error_codeE>
00017dc8  mov      x21, x0
00017dcc  add      x8, sp, #0x38
00017dd0  stp      xzr, xzr, [sp, #0x38]
00017dd4  str      xzr, [sp, #0x48]
00017dd8  str      x8, [sp, #0x70]
00017ddc  cbz      x0, #0x19204
00017de0  str      xzr, [sp, #0x78]
00017de4  tbnz     x21, #0x3f, #0x19218
00017de8  mov      x0, x21
00017dec  bl       #0x1ecc8  ; <_Znwm>
00017df0  add      x23, x0, x21
00017df4  mov      w1, wzr
00017df8  mov      x2, x21
00017dfc  mov      x20, x0
00017e00  str      x0, [sp, #0x38]
00017e04  str      x23, [sp, #0x48]
00017e08  bl       #0x1f4a8  ; <memset>
00017e0c  str      x23, [sp, #0x40]
00017e10  ldrb     w8, [sp, #0x20]
00017e14  tbz      w8, #0, #0x17e2c
00017e18  ldr      x8, [sp, #0x20]
00017e1c  ldr      x0, [sp, #0x30]
00017e20  and      x1, x8, #0xfffffffffffffffe
00017e24  bl       #0x1ed58  ; <_ZdlPvm>
00017e28  ldp      x20, x23, [sp, #0x38]
00017e2c  sub      x2, x23, x20
00017e30  add      x0, sp, #0x80
00017e34  mov      x1, x20
00017e38  bl       #0x1f628  ; <_ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl>
00017e3c  ldr      w8, [x26]
00017e40  cmp      w8, #2
00017e44  b.hi     #0x17f68
00017e48  adrp     x8, #0x20000
00017e4c  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00017e50  ldrb     w8, [x8]
00017e54  tbz      w8, #1, #0x17f68
00017e58  adrp     x0, #0x7000
00017e5c  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00017e60  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00017e64  ldrb     w8, [sp, #0x50]
00017e68  ldp      x10, x9, [sp, #0x58]
00017e6c  mov      x20, x0
00017e70  stp      xzr, xzr, [sp, #0x20]
00017e74  lsr      x11, x8, #1
00017e78  tst      w8, #1
00017e7c  str      xzr, [sp, #0x30]
00017e80  csel     x1, x22, x9, eq
00017e84  csel     x8, x11, x10, eq
00017e88  add      x0, sp, #0x20
00017e8c  add      x2, x1, x8
00017e90  bl       #0x1d674
00017e94  add      x0, sp, #0x20
00017e98  mov      x1, xzr
00017e9c  bl       #0x1f610  ; <_ZNSt3__14__fs10filesystem11__file_sizeERKNS1_4pathEPNS_10error_codeE>
00017ea0  mov      x6, x0
00017ea4  adrp     x3, #0x5000
00017ea8  add      x3, x3, #0xfc0  ; "initialize"
00017eac  adrp     x5, #0x5000
00017eb0  add      x5, x5, #0xc65  ; "[LeicaFilter] size=%d"
00017eb4  mov      w0, #2
00017eb8  mov      x1, x20
00017ebc  mov      w2, #0x60
00017ec0  mov      w4, #0x44
00017ec4  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00017ec8  ldrb     w8, [sp, #0x20]
00017ecc  mov      w20, w0
00017ed0  tbz      w8, #0, #0x17ee4
00017ed4  ldr      x8, [sp, #0x20]
00017ed8  ldr      x0, [sp, #0x30]
00017edc  and      x1, x8, #0xfffffffffffffffe
00017ee0  bl       #0x1ed58  ; <_ZdlPvm>
00017ee4  cbnz     w20, #0x17f68
00017ee8  mov      w0, #2
00017eec  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00017ef0  mov      x20, x0
00017ef4  adrp     x0, #0x7000
00017ef8  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00017efc  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00017f00  mov      x21, x0
00017f04  add      x0, sp, #0x20
00017f08  add      x1, sp, #0x50
00017f0c  mov      w2, wzr
00017f10  bl       #0x19798
00017f14  add      x0, sp, #0x20
00017f18  mov      x1, xzr
00017f1c  bl       #0x1f610  ; <_ZNSt3__14__fs10filesystem11__file_sizeERKNS1_4pathEPNS_10error_codeE>
00017f20  mov      x7, x0
00017f24  adrp     x1, #0x7000
00017f28  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00017f2c  adrp     x2, #0x7000
00017f30  add      x2, x2, #0x98f  ; "%s %s:%d %s()[LeicaFilter] size=%d"
00017f34  adrp     x6, #0x5000
00017f38  add      x6, x6, #0xfc0  ; "initialize"
00017f3c  mov      w0, #3
00017f40  mov      x3, x20
00017f44  mov      x4, x21
00017f48  mov      w5, #0x60
00017f4c  bl       #0x1ee00  ; <__android_log_print>
00017f50  ldrb     w8, [sp, #0x20]
00017f54  tbz      w8, #0, #0x17f68
00017f58  ldr      x8, [sp, #0x20]
00017f5c  ldr      x0, [sp, #0x30]
00017f60  and      x1, x8, #0xfffffffffffffffe
00017f64  bl       #0x1ed58  ; <_ZdlPvm>
00017f68  ldr      w8, [x27]
00017f6c  cmp      w8, #2
00017f70  b.hi     #0x18004
00017f74  adrp     x8, #0x20000
00017f78  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00017f7c  ldrb     w8, [x8]
00017f80  tbz      w8, #1, #0x18004
00017f84  adrp     x8, #0x20000
00017f88  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00017f8c  ldr      w8, [x8]
00017f90  cbz      w8, #0x18004
00017f94  adrp     x0, #0x7000
00017f98  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00017f9c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00017fa0  mov      x20, x0
00017fa4  add      x0, sp, #0x20
00017fa8  add      x1, sp, #0x50
00017fac  mov      w2, wzr
00017fb0  bl       #0x19798
00017fb4  add      x0, sp, #0x20
00017fb8  mov      x1, xzr
00017fbc  bl       #0x1f610  ; <_ZNSt3__14__fs10filesystem11__file_sizeERKNS1_4pathEPNS_10error_codeE>
00017fc0  mov      x6, x0
00017fc4  adrp     x1, #0x6000
00017fc8  add      x1, x1, #0xb34  ; =0x6b34
00017fcc  adrp     x3, #0x5000
00017fd0  add      x3, x3, #0xfc0  ; "initialize"
00017fd4  adrp     x5, #0x5000
00017fd8  add      x5, x5, #0xc65  ; "[LeicaFilter] size=%d"
00017fdc  mov      w0, #2
00017fe0  mov      x2, x20
00017fe4  mov      w4, #0x60
00017fe8  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00017fec  ldrb     w8, [sp, #0x20]
00017ff0  tbz      w8, #0, #0x18004
00017ff4  ldr      x8, [sp, #0x20]
00017ff8  ldr      x0, [sp, #0x30]
00017ffc  and      x1, x8, #0xfffffffffffffffe
00018000  bl       #0x1ed58  ; <_ZdlPvm>
00018004  ldr      x8, [sp, #0x38]
00018008  add      x21, x19, #0x12e
0001800c  add      x23, x19, #0x32e
00018010  mov      x9, x8
00018014  ldrh     w10, [x9], #2
00018018  str      x9, [x19, #0x10]
0001801c  add      x8, x8, x10, lsl #1
00018020  strh     w10, [x19, #8]
00018024  ldrh     w9, [x8, #2]  ; =0x20002
00018028  strh     w9, [x19, #0x28]
0001802c  ldrh     w9, [x8, #4]  ; =0x20004
00018030  strh     w9, [x19, #0x2a]
00018034  ldrh     w9, [x8, #6]  ; =0x20006
00018038  strh     w9, [x19, #0x2c]
0001803c  ldrh     w9, [x8, #8]  ; =0x20008
00018040  add      x8, x8, #0xa  ; =0x2000a
00018044  str      x8, [x19, #0x20]
00018048  add      x8, x8, x9, lsl #1
0001804c  strh     w9, [x19, #0x18]
00018050  add      x9, x19, #0x2e
00018054  str      x9, [sp, #0x10]
00018058  ldp      q0, q2, [x8]
0001805c  ldp      q3, q1, [x8, #0x20]
00018060  stur     q0, [x19, #0x2e]
00018064  stur     q1, [x19, #0x5e]
00018068  stur     q3, [x19, #0x4e]
0001806c  stur     q2, [x19, #0x3e]
00018070  ldp      q0, q2, [x8, #0x40]
00018074  ldp      q3, q1, [x8, #0x60]
00018078  stur     q0, [x19, #0x6e]
0001807c  stur     q1, [x19, #0x9e]
00018080  stur     q3, [x19, #0x8e]
00018084  stur     q2, [x19, #0x7e]
00018088  ldp      q0, q2, [x8, #0x80]
0001808c  ldp      q3, q1, [x8, #0xa0]
00018090  stur     q0, [x19, #0xae]
00018094  stur     q1, [x19, #0xde]
00018098  stur     q3, [x19, #0xce]
0001809c  stur     q2, [x19, #0xbe]
000180a0  ldp      q0, q1, [x8, #0xc0]
000180a4  ldp      q3, q2, [x8, #0xe0]
000180a8  stur     q0, [x19, #0xee]
000180ac  stp      q3, q2, [x9, #0xe0]
000180b0  add      x9, x19, #0x22e
000180b4  stur     q1, [x19, #0xfe]
000180b8  ldp      q1, q0, [x8, #0x120]
000180bc  str      x9, [sp, #8]
000180c0  ldp      q2, q3, [x8, #0x100]
000180c4  stp      q1, q0, [x21, #0x20]
000180c8  stp      q2, q3, [x21]
000180cc  ldp      q1, q0, [x8, #0x160]
000180d0  ldp      q2, q3, [x8, #0x140]
000180d4  stp      q1, q0, [x21, #0x60]
000180d8  stp      q2, q3, [x21, #0x40]
000180dc  ldp      q1, q0, [x8, #0x1a0]
000180e0  ldp      q2, q3, [x8, #0x180]
000180e4  stp      q1, q0, [x21, #0xa0]
000180e8  stp      q2, q3, [x21, #0x80]
000180ec  ldp      q1, q0, [x8, #0x1e0]
000180f0  ldp      q2, q3, [x8, #0x1c0]
000180f4  stp      q1, q0, [x21, #0xe0]
000180f8  stp      q2, q3, [x21, #0xc0]
000180fc  ldp      q1, q0, [x8, #0x220]
00018100  ldp      q2, q3, [x8, #0x200]
00018104  stp      q1, q0, [x9, #0x20]
00018108  stp      q2, q3, [x9]
0001810c  ldp      q1, q0, [x8, #0x260]
00018110  ldp      q2, q3, [x8, #0x240]
00018114  stp      q1, q0, [x9, #0x60]
00018118  stp      q2, q3, [x9, #0x40]
0001811c  ldp      q1, q0, [x8, #0x2a0]
00018120  ldp      q2, q3, [x8, #0x280]
00018124  stp      q1, q0, [x9, #0xa0]
00018128  stp      q2, q3, [x9, #0x80]
0001812c  ldp      q1, q0, [x8, #0x2e0]
00018130  ldp      q2, q3, [x8, #0x2c0]
00018134  stp      q1, q0, [x9, #0xe0]
00018138  stp      q2, q3, [x9, #0xc0]
0001813c  ldp      q1, q0, [x8, #0x320]
00018140  ldp      q2, q3, [x8, #0x300]
00018144  stp      q1, q0, [x23, #0x20]
00018148  stp      q2, q3, [x23]
0001814c  ldrh     w9, [x8, #0x340]  ; =0x20340
00018150  strh     w9, [x19, #0x36e]
00018154  ldrh     w9, [x8, #0x342]  ; =0x20342
00018158  strh     w9, [x19, #0x370]
0001815c  ldrh     w9, [x8, #0x344]  ; =0x20344
00018160  strh     w9, [x19, #0x372]
00018164  ldr      w9, [x26]
00018168  ldrh     w8, [x8, #0x346]  ; =0x20346
0001816c  cmp      w9, #2
00018170  strh     w8, [x19, #0x374]
00018174  b.hi     #0x18208
00018178  adrp     x8, #0x20000
0001817c  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018180  ldrb     w8, [x8]
00018184  tbz      w8, #1, #0x18208
00018188  adrp     x0, #0x7000
0001818c  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018190  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018194  mov      x1, x0
00018198  adrp     x3, #0x5000
0001819c  add      x3, x3, #0xfc0  ; "initialize"
000181a0  adrp     x5, #0x7000
000181a4  add      x5, x5, #0x234  ; "[LeicaFilter] param_version = %s"
000181a8  mov      w0, #2
000181ac  mov      w2, #0x86
000181b0  mov      w4, #0x44
000181b4  mov      x6, x23
000181b8  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000181bc  cbnz     w0, #0x18208
000181c0  mov      w0, #2
000181c4  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
000181c8  mov      x24, x0
000181cc  adrp     x0, #0x7000
000181d0  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
000181d4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000181d8  mov      x4, x0
000181dc  adrp     x1, #0x7000
000181e0  add      x1, x1, #0xf49  ; "MiAlgoEngine"
000181e4  adrp     x2, #0x5000
000181e8  add      x2, x2, #0xc7b  ; "%s %s:%d %s()[LeicaFilter] param_version = %s"
000181ec  adrp     x6, #0x5000
000181f0  add      x6, x6, #0xfc0  ; "initialize"
000181f4  mov      w0, #3
000181f8  mov      x3, x24
000181fc  mov      w5, #0x86
00018200  mov      x7, x23
00018204  bl       #0x1ee00  ; <__android_log_print>
00018208  ldr      w8, [x27]
0001820c  cmp      w8, #2
00018210  b.hi     #0x1826c
00018214  adrp     x8, #0x20000
00018218  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0001821c  ldrb     w8, [x8]
00018220  tbz      w8, #1, #0x1826c
00018224  adrp     x8, #0x20000
00018228  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0001822c  ldr      w8, [x8]
00018230  cbz      w8, #0x1826c
00018234  adrp     x0, #0x7000
00018238  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
0001823c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018240  mov      x2, x0
00018244  adrp     x1, #0x6000
00018248  add      x1, x1, #0xb34  ; =0x6b34
0001824c  adrp     x3, #0x5000
00018250  add      x3, x3, #0xfc0  ; "initialize"
00018254  adrp     x5, #0x7000
00018258  add      x5, x5, #0x234  ; "[LeicaFilter] param_version = %s"
0001825c  mov      w0, #2
00018260  mov      w4, #0x86
00018264  mov      x6, x23
00018268  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0001826c  ldr      w8, [x26]
00018270  cmp      w8, #2
00018274  b.hi     #0x18308
00018278  adrp     x8, #0x20000
0001827c  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018280  ldrb     w8, [x8]
00018284  tbz      w8, #1, #0x18308
00018288  adrp     x0, #0x7000
0001828c  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018290  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018294  mov      x1, x0
00018298  ldrh     w6, [x19, #0x36e]
0001829c  adrp     x3, #0x5000
000182a0  add      x3, x3, #0xfc0  ; "initialize"
000182a4  adrp     x5, #0x6000
000182a8  add      x5, x5, #0x414  ; "[LeicaFilter] lut_preview_en = %d"
000182ac  mov      w0, #2
000182b0  mov      w2, #0x88
000182b4  mov      w4, #0x44
000182b8  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000182bc  cbnz     w0, #0x18308
000182c0  mov      w0, #2
000182c4  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
000182c8  mov      x23, x0
000182cc  adrp     x0, #0x7000
000182d0  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
000182d4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000182d8  ldrh     w7, [x19, #0x36e]
000182dc  mov      x4, x0
000182e0  adrp     x1, #0x7000
000182e4  add      x1, x1, #0xf49  ; "MiAlgoEngine"
000182e8  adrp     x2, #0x7000
000182ec  add      x2, x2, #0xdc7  ; "%s %s:%d %s()[LeicaFilter] lut_preview_en = %d"
000182f0  adrp     x6, #0x5000
000182f4  add      x6, x6, #0xfc0  ; "initialize"
000182f8  mov      w0, #3
000182fc  mov      x3, x23
00018300  mov      w5, #0x88
00018304  bl       #0x1ee00  ; <__android_log_print>
00018308  ldr      w8, [x27]
0001830c  cmp      w8, #2
00018310  b.hi     #0x1836c
00018314  adrp     x8, #0x20000
00018318  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0001831c  ldrb     w8, [x8]
00018320  tbz      w8, #1, #0x1836c
00018324  adrp     x8, #0x20000
00018328  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0001832c  ldr      w8, [x8]
00018330  cbz      w8, #0x1836c
00018334  adrp     x0, #0x7000
00018338  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
0001833c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018340  ldrh     w6, [x19, #0x36e]
00018344  mov      x2, x0
00018348  adrp     x1, #0x6000
0001834c  add      x1, x1, #0xb34  ; =0x6b34
00018350  adrp     x3, #0x5000
00018354  add      x3, x3, #0xfc0  ; "initialize"
00018358  adrp     x5, #0x6000
0001835c  add      x5, x5, #0x414  ; "[LeicaFilter] lut_preview_en = %d"
00018360  mov      w0, #2
00018364  mov      w4, #0x88
00018368  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0001836c  ldr      w8, [x26]
00018370  cmp      w8, #2
00018374  b.hi     #0x18408
00018378  adrp     x8, #0x20000
0001837c  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018380  ldrb     w8, [x8]
00018384  tbz      w8, #1, #0x18408
00018388  adrp     x0, #0x7000
0001838c  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018390  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018394  mov      x1, x0
00018398  ldrh     w6, [x19, #0x370]
0001839c  adrp     x3, #0x5000
000183a0  add      x3, x3, #0xfc0  ; "initialize"
000183a4  adrp     x5, #0x6000
000183a8  add      x5, x5, #0xef6  ; "[LeicaFilter] lut_snapshot_en = %d"
000183ac  mov      w0, #2
000183b0  mov      w2, #0x8a
000183b4  mov      w4, #0x44
000183b8  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000183bc  cbnz     w0, #0x18408
000183c0  mov      w0, #2
000183c4  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
000183c8  mov      x23, x0
000183cc  adrp     x0, #0x7000
000183d0  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
000183d4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000183d8  ldrh     w7, [x19, #0x370]
000183dc  mov      x4, x0
000183e0  adrp     x1, #0x7000
000183e4  add      x1, x1, #0xf49  ; "MiAlgoEngine"
000183e8  adrp     x2, #0x5000
000183ec  add      x2, x2, #0xf15  ; "%s %s:%d %s()[LeicaFilter] lut_snapshot_en = %d"
000183f0  adrp     x6, #0x5000
000183f4  add      x6, x6, #0xfc0  ; "initialize"
000183f8  mov      w0, #3
000183fc  mov      x3, x23
00018400  mov      w5, #0x8a
00018404  bl       #0x1ee00  ; <__android_log_print>
00018408  ldr      w8, [x27]
0001840c  cmp      w8, #2
00018410  b.hi     #0x1846c
00018414  adrp     x8, #0x20000
00018418  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0001841c  ldrb     w8, [x8]
00018420  tbz      w8, #1, #0x1846c
00018424  adrp     x8, #0x20000
00018428  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0001842c  ldr      w8, [x8]
00018430  cbz      w8, #0x1846c
00018434  adrp     x0, #0x7000
00018438  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
0001843c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018440  ldrh     w6, [x19, #0x370]
00018444  mov      x2, x0
00018448  adrp     x1, #0x6000
0001844c  add      x1, x1, #0xb34  ; =0x6b34
00018450  adrp     x3, #0x5000
00018454  add      x3, x3, #0xfc0  ; "initialize"
00018458  adrp     x5, #0x6000
0001845c  add      x5, x5, #0xef6  ; "[LeicaFilter] lut_snapshot_en = %d"
00018460  mov      w0, #2
00018464  mov      w4, #0x8a
00018468  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0001846c  ldr      w8, [x26]
00018470  cmp      w8, #2
00018474  b.hi     #0x18508
00018478  adrp     x8, #0x20000
0001847c  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018480  ldrb     w8, [x8]
00018484  tbz      w8, #1, #0x18508
00018488  adrp     x0, #0x7000
0001848c  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018490  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018494  mov      x1, x0
00018498  ldrh     w6, [x19, #0x372]
0001849c  adrp     x3, #0x5000
000184a0  add      x3, x3, #0xfc0  ; "initialize"
000184a4  adrp     x5, #0x7000
000184a8  add      x5, x5, #0x4a  ; "[LeicaFilter] sharding_preview_en = %d"
000184ac  mov      w0, #2
000184b0  mov      w2, #0x8c
000184b4  mov      w4, #0x44
000184b8  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000184bc  cbnz     w0, #0x18508
000184c0  mov      w0, #2
000184c4  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
000184c8  mov      x23, x0
000184cc  adrp     x0, #0x7000
000184d0  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
000184d4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000184d8  ldrh     w7, [x19, #0x372]
000184dc  mov      x4, x0
000184e0  adrp     x1, #0x7000
000184e4  add      x1, x1, #0xf49  ; "MiAlgoEngine"
000184e8  adrp     x2, #0x5000
000184ec  add      x2, x2, #0xca9  ; "%s %s:%d %s()[LeicaFilter] sharding_preview_en = %d"
000184f0  adrp     x6, #0x5000
000184f4  add      x6, x6, #0xfc0  ; "initialize"
000184f8  mov      w0, #3
000184fc  mov      x3, x23
00018500  mov      w5, #0x8c
00018504  bl       #0x1ee00  ; <__android_log_print>
00018508  ldr      w8, [x27]
0001850c  cmp      w8, #2
00018510  b.hi     #0x1856c
00018514  adrp     x8, #0x20000
00018518  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0001851c  ldrb     w8, [x8]
00018520  tbz      w8, #1, #0x1856c
00018524  adrp     x8, #0x20000
00018528  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0001852c  ldr      w8, [x8]
00018530  cbz      w8, #0x1856c
00018534  adrp     x0, #0x7000
00018538  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
0001853c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018540  ldrh     w6, [x19, #0x372]
00018544  mov      x2, x0
00018548  adrp     x1, #0x6000
0001854c  add      x1, x1, #0xb34  ; =0x6b34
00018550  adrp     x3, #0x5000
00018554  add      x3, x3, #0xfc0  ; "initialize"
00018558  adrp     x5, #0x7000
0001855c  add      x5, x5, #0x4a  ; "[LeicaFilter] sharding_preview_en = %d"
00018560  mov      w0, #2
00018564  mov      w4, #0x8c
00018568  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0001856c  ldr      w8, [x26]
00018570  cmp      w8, #2
00018574  b.hi     #0x18608
00018578  adrp     x8, #0x20000
0001857c  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018580  ldrb     w8, [x8]
00018584  tbz      w8, #1, #0x18608
00018588  adrp     x0, #0x7000
0001858c  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018590  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018594  mov      x1, x0
00018598  ldrh     w6, [x19, #0x374]
0001859c  adrp     x3, #0x5000
000185a0  add      x3, x3, #0xfc0  ; "initialize"
000185a4  adrp     x5, #0x7000
000185a8  add      x5, x5, #0xdf6  ; "[LeicaFilter] sharding_snapshot_en = %d"
000185ac  mov      w0, #2
000185b0  mov      w2, #0x8e
000185b4  mov      w4, #0x44
000185b8  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000185bc  cbnz     w0, #0x18608
000185c0  mov      w0, #2
000185c4  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
000185c8  mov      x23, x0
000185cc  adrp     x0, #0x7000
000185d0  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
000185d4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000185d8  ldrh     w7, [x19, #0x374]
000185dc  mov      x4, x0
000185e0  adrp     x1, #0x7000
000185e4  add      x1, x1, #0xf49  ; "MiAlgoEngine"
000185e8  adrp     x2, #0x6000
000185ec  add      x2, x2, #0xbe2  ; "%s %s:%d %s()[LeicaFilter] sharding_snapshot_en = %d"
000185f0  adrp     x6, #0x5000
000185f4  add      x6, x6, #0xfc0  ; "initialize"
000185f8  mov      w0, #3
000185fc  mov      x3, x23
00018600  mov      w5, #0x8e
00018604  bl       #0x1ee00  ; <__android_log_print>
00018608  ldr      w8, [x27]
0001860c  cmp      w8, #2
00018610  b.hi     #0x1866c
00018614  adrp     x8, #0x20000
00018618  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0001861c  ldrb     w8, [x8]
00018620  tbz      w8, #1, #0x1866c
00018624  adrp     x8, #0x20000
00018628  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0001862c  ldr      w8, [x8]
00018630  cbz      w8, #0x1866c
00018634  adrp     x0, #0x7000
00018638  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
0001863c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018640  ldrh     w6, [x19, #0x374]
00018644  mov      x2, x0
00018648  adrp     x1, #0x6000
0001864c  add      x1, x1, #0xb34  ; =0x6b34
00018650  adrp     x3, #0x5000
00018654  add      x3, x3, #0xfc0  ; "initialize"
00018658  adrp     x5, #0x7000
0001865c  add      x5, x5, #0xdf6  ; "[LeicaFilter] sharding_snapshot_en = %d"
00018660  mov      w0, #2
00018664  mov      w4, #0x8e
00018668  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0001866c  ldr      w8, [x26]
00018670  cmp      w8, #2
00018674  b.hi     #0x18708
00018678  adrp     x8, #0x20000
0001867c  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018680  ldrb     w8, [x8]
00018684  tbz      w8, #1, #0x18708
00018688  adrp     x0, #0x7000
0001868c  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018690  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018694  mov      x1, x0
00018698  ldurh    w6, [x19, #8]
0001869c  adrp     x3, #0x5000
000186a0  add      x3, x3, #0xfc0  ; "initialize"
000186a4  adrp     x5, #0x6000
000186a8  add      x5, x5, #0xcb6  ; "[LeicaFilter] aiScenesCount = %d"
000186ac  mov      w0, #2
000186b0  mov      w2, #0x91
000186b4  mov      w4, #0x44
000186b8  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000186bc  cbnz     w0, #0x18708
000186c0  mov      w0, #2
000186c4  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
000186c8  mov      x23, x0
000186cc  adrp     x0, #0x7000
000186d0  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
000186d4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000186d8  ldurh    w7, [x19, #8]
000186dc  mov      x4, x0
000186e0  adrp     x1, #0x7000
000186e4  add      x1, x1, #0xf49  ; "MiAlgoEngine"
000186e8  adrp     x2, #0x7000
000186ec  add      x2, x2, #0x255  ; "%s %s:%d %s()[LeicaFilter] aiScenesCount = %d"
000186f0  adrp     x6, #0x5000
000186f4  add      x6, x6, #0xfc0  ; "initialize"
000186f8  mov      w0, #3
000186fc  mov      x3, x23
00018700  mov      w5, #0x91
00018704  bl       #0x1ee00  ; <__android_log_print>
00018708  ldr      w8, [x27]
0001870c  cmp      w8, #2
00018710  b.hi     #0x1876c
00018714  adrp     x8, #0x20000
00018718  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0001871c  ldrb     w8, [x8]
00018720  tbz      w8, #1, #0x1876c
00018724  adrp     x8, #0x20000
00018728  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0001872c  ldr      w8, [x8]
00018730  cbz      w8, #0x1876c
00018734  adrp     x0, #0x7000
00018738  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
0001873c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018740  ldurh    w6, [x19, #8]
00018744  mov      x2, x0
00018748  adrp     x1, #0x6000
0001874c  add      x1, x1, #0xb34  ; =0x6b34
00018750  adrp     x3, #0x5000
00018754  add      x3, x3, #0xfc0  ; "initialize"
00018758  adrp     x5, #0x6000
0001875c  add      x5, x5, #0xcb6  ; "[LeicaFilter] aiScenesCount = %d"
00018760  mov      w0, #2
00018764  mov      w4, #0x91
00018768  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0001876c  ldurh    w8, [x19, #8]
00018770  cbz      w8, #0x18898
00018774  mov      x20, xzr
00018778  adrp     x23, #0x7000
0001877c  add      x23, x23, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018780  adrp     x24, #0x5000
00018784  add      x24, x24, #0xfc0  ; "initialize"
00018788  adrp     x25, #0x6000
0001878c  add      x25, x25, #0x237  ; "[LeicaFilter] aiScenesSize = %d"
00018790  adrp     x28, #0x6000
00018794  add      x28, x28, #0xb34  ; =0x6b34
00018798  b        #0x187ac
0001879c  ldurh    w8, [x19, #8]
000187a0  add      x20, x20, #1
000187a4  cmp      x20, x8
000187a8  b.hs     #0x18898
000187ac  ldr      w8, [x26]
000187b0  cmp      w8, #2
000187b4  b.hi     #0x1883c
000187b8  adrp     x8, #0x20000
000187bc  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
000187c0  ldrb     w8, [x8]
000187c4  tbz      w8, #1, #0x1883c
000187c8  mov      x0, x23
000187cc  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000187d0  mov      x1, x0
000187d4  ldr      x8, [x19, #0x10]
000187d8  ldrh     w6, [x8, x20, lsl #1]
000187dc  mov      w0, #2
000187e0  mov      w2, #0x94
000187e4  mov      x3, x24
000187e8  mov      w4, #0x44
000187ec  mov      x5, x25
000187f0  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000187f4  cbnz     w0, #0x1883c
000187f8  mov      w0, #2
000187fc  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00018800  mov      x22, x0
00018804  mov      x0, x23
00018808  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0001880c  ldr      x8, [x19, #0x10]
00018810  mov      x4, x0
00018814  ldrh     w7, [x8, x20, lsl #1]
00018818  mov      w0, #3
0001881c  adrp     x1, #0x7000
00018820  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00018824  adrp     x2, #0x7000
00018828  add      x2, x2, #0x283  ; "%s %s:%d %s()[LeicaFilter] aiScenesSize = %d"
0001882c  mov      x3, x22
00018830  mov      w5, #0x94
00018834  mov      x6, x24
00018838  bl       #0x1ee00  ; <__android_log_print>
0001883c  ldr      w8, [x27]
00018840  cmp      w8, #2
00018844  b.hi     #0x1879c
00018848  adrp     x8, #0x20000
0001884c  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00018850  ldrb     w8, [x8]
00018854  tbz      w8, #1, #0x1879c
00018858  adrp     x8, #0x20000
0001885c  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00018860  ldr      w8, [x8]
00018864  cbz      w8, #0x1879c
00018868  mov      x0, x23
0001886c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018870  ldr      x8, [x19, #0x10]
00018874  mov      x2, x0
00018878  ldrh     w6, [x8, x20, lsl #1]
0001887c  mov      w0, #2
00018880  mov      x1, x28
00018884  mov      x3, x24
00018888  mov      w4, #0x94
0001888c  mov      x5, x25
00018890  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00018894  b        #0x1879c
00018898  ldr      w8, [x26]
0001889c  cmp      w8, #3
000188a0  b.hs     #0x18934
000188a4  adrp     x8, #0x20000
000188a8  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
000188ac  ldrb     w8, [x8]
000188b0  tbz      w8, #1, #0x18934
000188b4  adrp     x0, #0x7000
000188b8  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
000188bc  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000188c0  mov      x1, x0
000188c4  ldrh     w6, [x19, #0x18]
000188c8  adrp     x3, #0x5000
000188cc  add      x3, x3, #0xfc0  ; "initialize"
000188d0  adrp     x5, #0x7000
000188d4  add      x5, x5, #0x735  ; "[LeicaFilter] shadingZoomRatioCount = %d"
000188d8  mov      w0, #2
000188dc  mov      w2, #0x98
000188e0  mov      w4, #0x44
000188e4  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000188e8  cbnz     w0, #0x18934
000188ec  mov      w0, #2
000188f0  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
000188f4  mov      x23, x0
000188f8  adrp     x0, #0x7000
000188fc  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018900  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018904  ldrh     w7, [x19, #0x18]
00018908  mov      x4, x0
0001890c  adrp     x1, #0x7000
00018910  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00018914  adrp     x2, #0x7000
00018918  add      x2, x2, #0x2b0  ; "%s %s:%d %s()[LeicaFilter] shadingZoomRatioCount = %d"
0001891c  adrp     x6, #0x5000
00018920  add      x6, x6, #0xfc0  ; "initialize"
00018924  mov      w0, #3
00018928  mov      x3, x23
0001892c  mov      w5, #0x98
00018930  bl       #0x1ee00  ; <__android_log_print>
00018934  ldr      w8, [x27]
00018938  cmp      w8, #2
0001893c  b.hi     #0x18998
00018940  adrp     x8, #0x20000
00018944  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00018948  ldrb     w8, [x8]
0001894c  tbz      w8, #1, #0x18998
00018950  adrp     x8, #0x20000
00018954  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00018958  ldr      w8, [x8]
0001895c  cbz      w8, #0x18998
00018960  adrp     x0, #0x7000
00018964  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018968  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0001896c  ldrh     w6, [x19, #0x18]
00018970  mov      x2, x0
00018974  adrp     x1, #0x6000
00018978  add      x1, x1, #0xb34  ; =0x6b34
0001897c  adrp     x3, #0x5000
00018980  add      x3, x3, #0xfc0  ; "initialize"
00018984  adrp     x5, #0x7000
00018988  add      x5, x5, #0x735  ; "[LeicaFilter] shadingZoomRatioCount = %d"
0001898c  mov      w0, #2
00018990  mov      w4, #0x98
00018994  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00018998  ldrh     w8, [x19, #0x18]
0001899c  cbz      w8, #0x18ac4
000189a0  mov      x20, xzr
000189a4  adrp     x23, #0x7000
000189a8  add      x23, x23, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
000189ac  adrp     x24, #0x5000
000189b0  add      x24, x24, #0xfc0  ; "initialize"
000189b4  adrp     x25, #0x6000
000189b8  add      x25, x25, #0x93d  ; "[LeicaFilter] shadingZoomRatioSize = %d"
000189bc  adrp     x28, #0x6000
000189c0  add      x28, x28, #0xb34  ; =0x6b34
000189c4  b        #0x189d8
000189c8  ldrh     w8, [x19, #0x18]
000189cc  add      x20, x20, #1
000189d0  cmp      x20, x8
000189d4  b.hs     #0x18ac4
000189d8  ldr      w8, [x26]
000189dc  cmp      w8, #2
000189e0  b.hi     #0x18a68
000189e4  adrp     x8, #0x20000
000189e8  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
000189ec  ldrb     w8, [x8]
000189f0  tbz      w8, #1, #0x18a68
000189f4  mov      x0, x23
000189f8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000189fc  mov      x1, x0
00018a00  ldr      x8, [x19, #0x20]
00018a04  ldrh     w6, [x8, x20, lsl #1]
00018a08  mov      w0, #2
00018a0c  mov      w2, #0x9b
00018a10  mov      x3, x24
00018a14  mov      w4, #0x44
00018a18  mov      x5, x25
00018a1c  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00018a20  cbnz     w0, #0x18a68
00018a24  mov      w0, #2
00018a28  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00018a2c  mov      x22, x0
00018a30  mov      x0, x23
00018a34  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018a38  ldr      x8, [x19, #0x20]
00018a3c  mov      x4, x0
00018a40  ldrh     w7, [x8, x20, lsl #1]
00018a44  mov      w0, #3
00018a48  adrp     x1, #0x7000
00018a4c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00018a50  adrp     x2, #0x7000
00018a54  add      x2, x2, #0x71  ; "%s %s:%d %s()[LeicaFilter] shadingZoomRatioSize = %d"
00018a58  mov      x3, x22
00018a5c  mov      w5, #0x9b
00018a60  mov      x6, x24
00018a64  bl       #0x1ee00  ; <__android_log_print>
00018a68  ldr      w8, [x27]
00018a6c  cmp      w8, #2
00018a70  b.hi     #0x189c8
00018a74  adrp     x8, #0x20000
00018a78  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00018a7c  ldrb     w8, [x8]
00018a80  tbz      w8, #1, #0x189c8
00018a84  adrp     x8, #0x20000
00018a88  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00018a8c  ldr      w8, [x8]
00018a90  cbz      w8, #0x189c8
00018a94  mov      x0, x23
00018a98  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018a9c  ldr      x8, [x19, #0x20]
00018aa0  mov      x2, x0
00018aa4  ldrh     w6, [x8, x20, lsl #1]
00018aa8  mov      w0, #2
00018aac  mov      x1, x28
00018ab0  mov      x3, x24
00018ab4  mov      w4, #0x9b
00018ab8  mov      x5, x25
00018abc  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00018ac0  b        #0x189c8
00018ac4  ldr      w8, [x26]
00018ac8  cmp      w8, #3
00018acc  b.hs     #0x18b60
00018ad0  adrp     x8, #0x20000
00018ad4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018ad8  ldrb     w8, [x8]
00018adc  tbz      w8, #1, #0x18b60
00018ae0  adrp     x0, #0x7000
00018ae4  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018ae8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018aec  mov      x1, x0
00018af0  ldrh     w6, [x19, #0x28]
00018af4  adrp     x3, #0x5000
00018af8  add      x3, x3, #0xfc0  ; "initialize"
00018afc  adrp     x5, #0x6000
00018b00  add      x5, x5, #0x257  ; "[LeicaFilter] paramDataOffset = %d"
00018b04  mov      w0, #2
00018b08  mov      w2, #0x9e
00018b0c  mov      w4, #0x44
00018b10  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00018b14  cbnz     w0, #0x18b60
00018b18  mov      w0, #2
00018b1c  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00018b20  mov      x23, x0
00018b24  adrp     x0, #0x7000
00018b28  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018b2c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018b30  ldrh     w7, [x19, #0x28]
00018b34  mov      x4, x0
00018b38  adrp     x1, #0x7000
00018b3c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00018b40  adrp     x2, #0x6000
00018b44  add      x2, x2, #0x965  ; "%s %s:%d %s()[LeicaFilter] paramDataOffset = %d"
00018b48  adrp     x6, #0x5000
00018b4c  add      x6, x6, #0xfc0  ; "initialize"
00018b50  mov      w0, #3
00018b54  mov      x3, x23
00018b58  mov      w5, #0x9e
00018b5c  bl       #0x1ee00  ; <__android_log_print>
00018b60  ldr      w8, [x27]
00018b64  cmp      w8, #2
00018b68  b.hi     #0x18bc4
00018b6c  adrp     x8, #0x20000
00018b70  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00018b74  ldrb     w8, [x8]
00018b78  tbz      w8, #1, #0x18bc4
00018b7c  adrp     x8, #0x20000
00018b80  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00018b84  ldr      w8, [x8]
00018b88  cbz      w8, #0x18bc4
00018b8c  adrp     x0, #0x7000
00018b90  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018b94  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018b98  ldrh     w6, [x19, #0x28]
00018b9c  mov      x2, x0
00018ba0  adrp     x1, #0x6000
00018ba4  add      x1, x1, #0xb34  ; =0x6b34
00018ba8  adrp     x3, #0x5000
00018bac  add      x3, x3, #0xfc0  ; "initialize"
00018bb0  adrp     x5, #0x6000
00018bb4  add      x5, x5, #0x257  ; "[LeicaFilter] paramDataOffset = %d"
00018bb8  mov      w0, #2
00018bbc  mov      w4, #0x9e
00018bc0  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00018bc4  ldr      w8, [x26]
00018bc8  cmp      w8, #2
00018bcc  b.hi     #0x18c60
00018bd0  adrp     x8, #0x20000
00018bd4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018bd8  ldrb     w8, [x8]
00018bdc  tbz      w8, #1, #0x18c60
00018be0  adrp     x0, #0x7000
00018be4  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018be8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018bec  mov      x1, x0
00018bf0  ldrh     w6, [x19, #0x2a]
00018bf4  adrp     x3, #0x5000
00018bf8  add      x3, x3, #0xfc0  ; "initialize"
00018bfc  adrp     x5, #0x7000
00018c00  add      x5, x5, #0x422  ; "[LeicaFilter] lutDataOffset = %d"
00018c04  mov      w0, #2
00018c08  mov      w2, #0xa0
00018c0c  mov      w4, #0x44
00018c10  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00018c14  cbnz     w0, #0x18c60
00018c18  mov      w0, #2
00018c1c  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00018c20  mov      x23, x0
00018c24  adrp     x0, #0x7000
00018c28  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018c2c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018c30  ldrh     w7, [x19, #0x2a]
00018c34  mov      x4, x0
00018c38  adrp     x1, #0x7000
00018c3c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00018c40  adrp     x2, #0x6000
00018c44  add      x2, x2, #0x7f4  ; "%s %s:%d %s()[LeicaFilter] lutDataOffset = %d"
00018c48  adrp     x6, #0x5000
00018c4c  add      x6, x6, #0xfc0  ; "initialize"
00018c50  mov      w0, #3
00018c54  mov      x3, x23
00018c58  mov      w5, #0xa0
00018c5c  bl       #0x1ee00  ; <__android_log_print>
00018c60  ldr      w8, [x27]
00018c64  cmp      w8, #2
00018c68  b.hi     #0x18cc4
00018c6c  adrp     x8, #0x20000
00018c70  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00018c74  ldrb     w8, [x8]
00018c78  tbz      w8, #1, #0x18cc4
00018c7c  adrp     x8, #0x20000
00018c80  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00018c84  ldr      w8, [x8]
00018c88  cbz      w8, #0x18cc4
00018c8c  adrp     x0, #0x7000
00018c90  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018c94  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018c98  ldrh     w6, [x19, #0x2a]
00018c9c  mov      x2, x0
00018ca0  adrp     x1, #0x6000
00018ca4  add      x1, x1, #0xb34  ; =0x6b34
00018ca8  adrp     x3, #0x5000
00018cac  add      x3, x3, #0xfc0  ; "initialize"
00018cb0  adrp     x5, #0x7000
00018cb4  add      x5, x5, #0x422  ; "[LeicaFilter] lutDataOffset = %d"
00018cb8  mov      w0, #2
00018cbc  mov      w4, #0xa0
00018cc0  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00018cc4  ldr      w8, [x26]
00018cc8  cmp      w8, #2
00018ccc  b.hi     #0x18d60
00018cd0  adrp     x8, #0x20000
00018cd4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018cd8  ldrb     w8, [x8]
00018cdc  tbz      w8, #1, #0x18d60
00018ce0  adrp     x0, #0x7000
00018ce4  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018ce8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018cec  mov      x1, x0
00018cf0  ldrh     w6, [x19, #0x2c]
00018cf4  adrp     x3, #0x5000
00018cf8  add      x3, x3, #0xfc0  ; "initialize"
00018cfc  adrp     x5, #0x6000
00018d00  add      x5, x5, #0xeb  ; "[LeicaFilter] lut3d_size = %d"
00018d04  mov      w0, #2
00018d08  mov      w2, #0xa2
00018d0c  mov      w4, #0x44
00018d10  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00018d14  cbnz     w0, #0x18d60
00018d18  mov      w0, #2
00018d1c  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00018d20  mov      x23, x0
00018d24  adrp     x0, #0x7000
00018d28  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018d2c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018d30  ldrh     w7, [x19, #0x2c]
00018d34  mov      x4, x0
00018d38  adrp     x1, #0x7000
00018d3c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00018d40  adrp     x2, #0x5000
00018d44  add      x2, x2, #0x9c1  ; "%s %s:%d %s()[LeicaFilter] lut3d_size = %d"
00018d48  adrp     x6, #0x5000
00018d4c  add      x6, x6, #0xfc0  ; "initialize"
00018d50  mov      w0, #3
00018d54  mov      x3, x23
00018d58  mov      w5, #0xa2
00018d5c  bl       #0x1ee00  ; <__android_log_print>
00018d60  ldr      w8, [x27]
00018d64  cmp      w8, #2
00018d68  b.hi     #0x18dc4
00018d6c  adrp     x8, #0x20000
00018d70  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00018d74  ldrb     w8, [x8]
00018d78  tbz      w8, #1, #0x18dc4
00018d7c  adrp     x8, #0x20000
00018d80  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00018d84  ldr      w8, [x8]
00018d88  cbz      w8, #0x18dc4
00018d8c  adrp     x0, #0x7000
00018d90  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018d94  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018d98  ldrh     w6, [x19, #0x2c]
00018d9c  mov      x2, x0
00018da0  adrp     x1, #0x6000
00018da4  add      x1, x1, #0xb34  ; =0x6b34
00018da8  adrp     x3, #0x5000
00018dac  add      x3, x3, #0xfc0  ; "initialize"
00018db0  adrp     x5, #0x6000
00018db4  add      x5, x5, #0xeb  ; "[LeicaFilter] lut3d_size = %d"
00018db8  mov      w0, #2
00018dbc  mov      w4, #0xa2
00018dc0  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00018dc4  ldr      w8, [x26]
00018dc8  cmp      w8, #2
00018dcc  b.hi     #0x18e60
00018dd0  adrp     x8, #0x20000
00018dd4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018dd8  ldrb     w8, [x8]
00018ddc  tbz      w8, #1, #0x18e60
00018de0  adrp     x0, #0x7000
00018de4  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018de8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018dec  mov      x1, x0
00018df0  ldr      x6, [sp, #0x10]
00018df4  adrp     x3, #0x5000
00018df8  add      x3, x3, #0xfc0  ; "initialize"
00018dfc  adrp     x5, #0x6000
00018e00  add      x5, x5, #0x109  ; "[LeicaFilter] trigger_control = %s"
00018e04  mov      w0, #2
00018e08  mov      w2, #0xa5
00018e0c  mov      w4, #0x44
00018e10  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00018e14  cbnz     w0, #0x18e60
00018e18  mov      w0, #2
00018e1c  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00018e20  mov      x23, x0
00018e24  adrp     x0, #0x7000
00018e28  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018e2c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018e30  ldr      x7, [sp, #0x10]
00018e34  mov      x4, x0
00018e38  adrp     x1, #0x7000
00018e3c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00018e40  adrp     x2, #0x7000
00018e44  add      x2, x2, #0x5ec  ; "%s %s:%d %s()[LeicaFilter] trigger_control = %s"
00018e48  adrp     x6, #0x5000
00018e4c  add      x6, x6, #0xfc0  ; "initialize"
00018e50  mov      w0, #3
00018e54  mov      x3, x23
00018e58  mov      w5, #0xa5
00018e5c  bl       #0x1ee00  ; <__android_log_print>
00018e60  ldr      w8, [x27]
00018e64  cmp      w8, #2
00018e68  b.hi     #0x18ec4
00018e6c  adrp     x8, #0x20000
00018e70  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00018e74  ldrb     w8, [x8]
00018e78  tbz      w8, #1, #0x18ec4
00018e7c  adrp     x8, #0x20000
00018e80  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00018e84  ldr      w8, [x8]
00018e88  cbz      w8, #0x18ec4
00018e8c  adrp     x0, #0x7000
00018e90  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018e94  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018e98  ldr      x6, [sp, #0x10]
00018e9c  mov      x2, x0
00018ea0  adrp     x1, #0x6000
00018ea4  add      x1, x1, #0xb34  ; =0x6b34
00018ea8  adrp     x3, #0x5000
00018eac  add      x3, x3, #0xfc0  ; "initialize"
00018eb0  adrp     x5, #0x6000
00018eb4  add      x5, x5, #0x109  ; "[LeicaFilter] trigger_control = %s"
00018eb8  mov      w0, #2
00018ebc  mov      w4, #0xa5
00018ec0  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00018ec4  ldr      w8, [x26]
00018ec8  cmp      w8, #2
00018ecc  b.hi     #0x18f60
00018ed0  adrp     x8, #0x20000
00018ed4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018ed8  ldrb     w8, [x8]
00018edc  tbz      w8, #1, #0x18f60
00018ee0  adrp     x0, #0x7000
00018ee4  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018ee8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018eec  mov      x1, x0
00018ef0  adrp     x3, #0x5000
00018ef4  add      x3, x3, #0xfc0  ; "initialize"
00018ef8  adrp     x5, #0x7000
00018efc  add      x5, x5, #0xcd5  ; "[LeicaFilter] param_type = %s"
00018f00  mov      w0, #2
00018f04  mov      w2, #0xa7
00018f08  mov      w4, #0x44
00018f0c  mov      x6, x21
00018f10  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00018f14  cbnz     w0, #0x18f60
00018f18  mov      w0, #2
00018f1c  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00018f20  mov      x22, x0
00018f24  adrp     x0, #0x7000
00018f28  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018f2c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018f30  mov      x4, x0
00018f34  adrp     x1, #0x7000
00018f38  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00018f3c  adrp     x2, #0x7000
00018f40  add      x2, x2, #0xe1e  ; "%s %s:%d %s()[LeicaFilter] param_type = %s"
00018f44  adrp     x6, #0x5000
00018f48  add      x6, x6, #0xfc0  ; "initialize"
00018f4c  mov      w0, #3
00018f50  mov      x3, x22
00018f54  mov      w5, #0xa7
00018f58  mov      x7, x21
00018f5c  bl       #0x1ee00  ; <__android_log_print>
00018f60  ldr      w8, [x27]
00018f64  cmp      w8, #2
00018f68  b.hi     #0x18fc4
00018f6c  adrp     x8, #0x20000
00018f70  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00018f74  ldrb     w8, [x8]
00018f78  tbz      w8, #1, #0x18fc4
00018f7c  adrp     x8, #0x20000
00018f80  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00018f84  ldr      w8, [x8]
00018f88  cbz      w8, #0x18fc4
00018f8c  adrp     x0, #0x7000
00018f90  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018f94  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018f98  mov      x2, x0
00018f9c  adrp     x1, #0x6000
00018fa0  add      x1, x1, #0xb34  ; =0x6b34
00018fa4  adrp     x3, #0x5000
00018fa8  add      x3, x3, #0xfc0  ; "initialize"
00018fac  adrp     x5, #0x7000
00018fb0  add      x5, x5, #0xcd5  ; "[LeicaFilter] param_type = %s"
00018fb4  mov      w0, #2
00018fb8  mov      w4, #0xa7
00018fbc  mov      x6, x21
00018fc0  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00018fc4  ldr      w8, [x26]
00018fc8  cmp      w8, #2
00018fcc  b.hi     #0x19060
00018fd0  adrp     x8, #0x20000
00018fd4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00018fd8  ldrb     w8, [x8]
00018fdc  tbz      w8, #1, #0x19060
00018fe0  adrp     x0, #0x7000
00018fe4  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00018fe8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00018fec  mov      x1, x0
00018ff0  ldr      x6, [sp, #8]
00018ff4  adrp     x3, #0x5000
00018ff8  add      x3, x3, #0xfc0  ; "initialize"
00018ffc  adrp     x5, #0x7000
00019000  add      x5, x5, #0x75e  ; "[LeicaFilter] param_range = %s"
00019004  mov      w0, #2
00019008  mov      w2, #0xa9
0001900c  mov      w4, #0x44
00019010  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00019014  cbnz     w0, #0x19060
00019018  mov      w0, #2
0001901c  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00019020  mov      x21, x0
00019024  adrp     x0, #0x7000
00019028  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
0001902c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00019030  ldr      x7, [sp, #8]
00019034  mov      x4, x0
00019038  adrp     x1, #0x7000
0001903c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00019040  adrp     x2, #0x5000
00019044  add      x2, x2, #0x759  ; "%s %s:%d %s()[LeicaFilter] param_range = %s"
00019048  adrp     x6, #0x5000
0001904c  add      x6, x6, #0xfc0  ; "initialize"
00019050  mov      w0, #3
00019054  mov      x3, x21
00019058  mov      w5, #0xa9
0001905c  bl       #0x1ee00  ; <__android_log_print>
00019060  ldr      w8, [x27]
00019064  cmp      w8, #2
00019068  b.hi     #0x190c4
0001906c  adrp     x8, #0x20000
00019070  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00019074  ldrb     w8, [x8]
00019078  tbz      w8, #1, #0x190c4
0001907c  adrp     x8, #0x20000
00019080  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00019084  ldr      w8, [x8]
00019088  cbz      w8, #0x190c4
0001908c  adrp     x0, #0x7000
00019090  add      x0, x0, #0xaed  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramUtil.cpp"
00019094  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00019098  ldr      x6, [sp, #8]
0001909c  mov      x2, x0
000190a0  adrp     x1, #0x6000
000190a4  add      x1, x1, #0xb34  ; =0x6b34
000190a8  adrp     x3, #0x5000
000190ac  add      x3, x3, #0xfc0  ; "initialize"
000190b0  adrp     x5, #0x7000
000190b4  add      x5, x5, #0x75e  ; "[LeicaFilter] param_range = %s"
000190b8  mov      w0, #2
000190bc  mov      w4, #0xa9
000190c0  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
000190c4  ldr      x8, [sp, #0x38]
000190c8  ldrh     w9, [x19, #0x28]
000190cc  add      x1, x8, x9
000190d0  mov      x0, x19
000190d4  bl       #0x1f640  ; <_ZN9ParamUtil12readAiScenesEPc>
000190d8  ldr      w21, [x19, #0x378]
000190dc  mov      w8, #0x3993
000190e0  umull    x20, w21, w8
000190e4  mov      x0, x20
000190e8  bl       #0x1f658  ; <_Znam>
000190ec  ldr      x22, [sp, #0x38]
000190f0  ldrh     w23, [x19, #0x2a]
000190f4  mov      x2, x20
000190f8  str      x0, [x19, #0x380]
000190fc  add      x1, x22, x23
00019100  bl       #0x1f358  ; <memcpy>
00019104  ldr      w8, [x19, #0x37c]
00019108  lsl      x20, x8, #5
0001910c  mov      x0, x20
00019110  bl       #0x1f658  ; <_Znam>
00019114  mov      w8, #0x3993
00019118  mov      x2, x20
0001911c  str      x0, [x19, #0x388]
00019120  madd     w8, w21, w8, w23
00019124  add      x1, x22, x8
00019128  bl       #0x1f358  ; <memcpy>
0001912c  add      x8, sp, #0x80
00019130  add      x0, x8, #0x10  ; =0x20010
00019134  bl       #0x1f670  ; <_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv>
00019138  cbnz     x0, #0x19158
0001913c  ldr      x8, [sp, #0x80]
00019140  add      x9, sp, #0x80
00019144  ldur     x8, [x8, #-0x18]
00019148  add      x0, x9, x8
0001914c  ldr      w8, [x0, #0x20]  ; =0x7020
00019150  orr      w1, w8, #4
00019154  bl       #0x1f0a0  ; <_ZNSt3__18ios_base5clearEj>
00019158  ldr      x0, [sp, #0x38]
0001915c  ldr      x25, [sp, #0x18]
00019160  cbz      x0, #0x19174
00019164  ldr      x8, [sp, #0x48]
00019168  str      x0, [sp, #0x40]
0001916c  sub      x1, x8, x0
00019170  bl       #0x1ed58  ; <_ZdlPvm>
00019174  adrp     x20, #0x20000
00019178  add      x21, sp, #0x80
0001917c  ldr      x20, [x20, #0xdd0]  ; =0x20dd0 <_ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE>
00019180  add      x0, x21, #0x10
00019184  ldr      x8, [x20]
00019188  ldr      x9, [x20, #0x18]  ; =0x20018
0001918c  str      x8, [sp, #0x80]
00019190  ldur     x8, [x8, #-0x18]
00019194  str      x9, [x21, x8]
00019198  bl       #0x1f688  ; <_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED1Ev>
0001919c  add      x0, sp, #0x80
000191a0  add      x1, x20, #8  ; =0x20008
000191a4  bl       #0x1f6a0  ; <_ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev>
000191a8  add      x0, x21, #0xb8
000191ac  bl       #0x1ef08  ; <_ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev>
000191b0  ldrb     w8, [sp, #0x50]
000191b4  tbz      w8, #0, #0x191c8
000191b8  ldr      x8, [sp, #0x50]
000191bc  ldr      x0, [sp, #0x60]
000191c0  and      x1, x8, #0xfffffffffffffffe
000191c4  bl       #0x1ed58  ; <_ZdlPvm>
000191c8  add      x0, x19, #0x3c0
000191cc  bl       #0x1f6b8  ; <_ZNSt3__15mutex6unlockEv>
000191d0  ldr      x8, [x25, #0x28]  ; =0x6028
000191d4  ldur     x9, [x29, #-0x10]
000191d8  cmp      x8, x9
000191dc  b.ne     #0x19350
000191e0  add      sp, sp, #0x1e0
000191e4  ldp      x20, x19, [sp, #0x50]
000191e8  ldp      x22, x21, [sp, #0x40]
000191ec  ldp      x24, x23, [sp, #0x30]
000191f0  ldp      x26, x25, [sp, #0x20]
000191f4  ldp      x28, x27, [sp, #0x10]
000191f8  ldp      x29, x30, [sp], #0x60
000191fc  autiasp  
00019200  ret      
00019204  mov      x23, xzr
00019208  mov      x20, xzr
0001920c  ldrb     w8, [sp, #0x20]
00019210  tbnz     w8, #0, #0x17e18
00019214  b        #0x17e2c
00019218  ldr      x8, [x25, #0x28]  ; =0x6028
0001921c  ldur     x9, [x29, #-0x10]
00019220  cmp      x8, x9
00019224  b.ne     #0x19350
00019228  add      x0, sp, #0x38
0001922c  bl       #0x1d370
00019230  b        #0x192f0
00019234  b        #0x19244
00019238  b        #0x192f0
0001923c  b        #0x19244
00019240  b        #0x19244
00019244  ldrb     w8, [sp, #0x20]
00019248  mov      x20, x0
0001924c  tbz      w8, #0, #0x192f4
00019250  ldr      x8, [sp, #0x20]
00019254  ldr      x0, [sp, #0x30]
00019258  and      x1, x8, #0xfffffffffffffffe
0001925c  bl       #0x1ed58  ; <_ZdlPvm>
00019260  b        #0x192f4
00019264  mov      x20, x0
00019268  b        #0x19288
0001926c  ldrb     w8, [sp, #0x20]
00019270  mov      x20, x0
00019274  tbnz     w8, #0, #0x19290
00019278  b        #0x1930c
0001927c  mov      x20, x0
00019280  add      x0, sp, #0x70
00019284  bl       #0x1d33c
00019288  ldrb     w8, [sp, #0x20]
0001928c  tbz      w8, #0, #0x1930c
00019290  ldr      x8, [sp, #0x20]
00019294  ldr      x0, [sp, #0x30]
00019298  and      x1, x8, #0xfffffffffffffffe
0001929c  b        #0x19308
000192a0  mov      x20, x0
000192a4  str      x25, [sp, #0x18]
000192a8  b        #0x19314
000192ac  b        #0x192f0
000192b0  b        #0x192f0
000192b4  b        #0x192b8
000192b8  ldrb     w8, [sp, #0x80]
000192bc  mov      x20, x0
000192c0  str      x25, [sp, #0x18]
000192c4  tbz      w8, #0, #0x19314
000192c8  ldr      x8, [sp, #0x80]
000192cc  ldr      x0, [sp, #0x90]
000192d0  and      x1, x8, #0xfffffffffffffffe
000192d4  bl       #0x1ed58  ; <_ZdlPvm>
000192d8  b        #0x19314
000192dc  str      x25, [sp, #0x18]
000192e0  mov      x20, x0
000192e4  b        #0x1932c
000192e8  b        #0x192f0
000192ec  b        #0x192f0
000192f0  mov      x20, x0
000192f4  ldr      x0, [sp, #0x38]
000192f8  cbz      x0, #0x1930c
000192fc  ldr      x8, [sp, #0x48]
00019300  str      x0, [sp, #0x40]
00019304  sub      x1, x8, x0
00019308  bl       #0x1ed58  ; <_ZdlPvm>
0001930c  add      x0, sp, #0x80
00019310  bl       #0x19ff4
00019314  ldrb     w8, [sp, #0x50]
00019318  tbz      w8, #0, #0x1932c
0001931c  ldr      x8, [sp, #0x50]
00019320  ldr      x0, [sp, #0x60]
00019324  and      x1, x8, #0xfffffffffffffffe
00019328  bl       #0x1ed58  ; <_ZdlPvm>
0001932c  add      x0, x19, #0x3c0
00019330  bl       #0x1f6b8  ; <_ZNSt3__15mutex6unlockEv>
00019334  ldr      x8, [sp, #0x18]
00019338  ldr      x8, [x8, #0x28]  ; =0x20028
0001933c  ldur     x9, [x29, #-0x10]
00019340  cmp      x8, x9
00019344  b.ne     #0x19350
00019348  mov      x0, x20
0001934c  bl       #0x1ece0  ; <_Unwind_Resume>
00019350  bl       #0x1ecf8  ; <__stack_chk_fail>
