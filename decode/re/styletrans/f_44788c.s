; function 0x44788c size 0x17cc 
0044788c  str      d8, [sp, #-0x70]!
00447890  stp      x29, x30, [sp, #0x10]
00447894  stp      x28, x27, [sp, #0x20]
00447898  stp      x26, x25, [sp, #0x30]
0044789c  stp      x24, x23, [sp, #0x40]
004478a0  stp      x22, x21, [sp, #0x50]
004478a4  stp      x20, x19, [sp, #0x60]
004478a8  add      x29, sp, #0x10
004478ac  sub      sp, sp, #0x7d0
004478b0  mrs      x24, tpidr_el0
004478b4  mov      x19, x0
004478b8  ldr      x8, [x24, #0x28]
004478bc  stur     x8, [x29, #-0x28]
004478c0  bl       #0x446bcc
004478c4  cbz      w0, #0x4479a0
004478c8  adrp     x19, #0x151000
004478cc  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004478d0  mov      x0, x19
004478d4  mov      w1, #0x2f
004478d8  mov      w2, #0x4a
004478dc  bl       #0xc48800  ; <__strrchr_chk>
004478e0  cbz      x0, #0x4478fc
004478e4  adrp     x0, #0x151000
004478e8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004478ec  mov      w1, #0x2f
004478f0  mov      w2, #0x4a
004478f4  bl       #0xc48800  ; <__strrchr_chk>
004478f8  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
004478fc  adrp     x20, #0x12f000
00447900  add      x20, x20, #0x35b  ; "[%s:%d] model init failed, bypass styletrans.
"
00447904  adrp     x0, #0x177000
00447908  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044790c  mov      w1, #2
00447910  mov      x2, x20
00447914  mov      x3, x19
00447918  mov      w4, #0x3c4
0044791c  bl       #0x484908
00447920  adrp     x8, #0xc78000
00447924  ldur     q0, [x20, #0x1f]
00447928  ldp      q1, q2, [x20]
0044792c  adrp     x20, #0x151000
00447930  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00447934  add      x9, sp, #0x6b0
00447938  mov      x0, x20
0044793c  mov      w1, #0x2f
00447940  mov      w2, #0x4a
00447944  ldr      x8, [x8, #0x2f0]  ; =0xc782f0
00447948  stur     q0, [x9, #0x1f]
0044794c  stp      q1, q2, [x9]
00447950  strb     wzr, [sp, #0x6dd]
00447954  ldr      x21, [x8]
00447958  bl       #0xc48800  ; <__strrchr_chk>
0044795c  cbz      x0, #0x447978
00447960  adrp     x0, #0x151000
00447964  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00447968  mov      w1, #0x2f
0044796c  mov      w2, #0x4a
00447970  bl       #0xc48800  ; <__strrchr_chk>
00447974  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00447978  adrp     x1, #0x177000
0044797c  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00447980  add      x2, sp, #0x6b0
00447984  mov      w0, #2
00447988  mov      x3, x20
0044798c  mov      w4, #0x3c4
00447990  mov      w19, #0x6524
00447994  movk     w19, #0x11, lsl #16
00447998  blr      x21
0044799c  b        #0x448cb8
004479a0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
004479a4  ldr      x8, [x19, #0x1f8]  ; =0x1511f8
004479a8  stp      xzr, xzr, [sp, #0x160]
004479ac  mov      x25, x0
004479b0  str      xzr, [sp, #0x158]
004479b4  ldp      x23, x22, [x8, #0x10]
004479b8  subs     x21, x22, x23
004479bc  b.eq     #0x447a48
004479c0  tbnz     x21, #0x3f, #0x448d28
004479c4  mov      x0, x21
004479c8  bl       #0xc48840  ; <_Znwm>
004479cc  asr      x8, x21, #3
004479d0  mov      x20, x0
004479d4  sub      x9, x21, #8
004479d8  str      x0, [sp, #0x158]
004479dc  add      x8, x0, x8, lsl #3
004479e0  cmp      x9, #0x18
004479e4  str      x8, [sp, #0x168]
004479e8  b.lo     #0x447a50
004479ec  mov      x8, x20
004479f0  sub      x10, x20, x23
004479f4  cmp      x10, #0x20
004479f8  b.lo     #0x447a54
004479fc  lsr      x8, x9, #3
00447a00  add      x12, x20, #0x10  ; "le, cv::RNG *)"
00447a04  add      x9, x8, #1  ; =0xc78001
00447a08  add      x13, x23, #0x10
00447a0c  and      x10, x9, #0x3ffffffffffffffc
00447a10  lsl      x8, x10, #3
00447a14  mov      x14, x10
00447a18  add      x11, x23, x8
00447a1c  add      x8, x20, x8
00447a20  ldp      q0, q1, [x13, #-0x10]
00447a24  add      x13, x13, #0x20
00447a28  subs     x14, x14, #4
00447a2c  stp      q0, q1, [x12, #-0x10]
00447a30  add      x12, x12, #0x20
00447a34  b.ne     #0x447a20
00447a38  mov      x23, x11
00447a3c  cmp      x9, x10
00447a40  b.ne     #0x447a54
00447a44  b        #0x447a64
00447a48  mov      x20, xzr
00447a4c  b        #0x447a68
00447a50  mov      x8, x20
00447a54  ldr      x9, [x23], #8
00447a58  cmp      x23, x22
00447a5c  str      x9, [x8], #8  ; =0xc78008
00447a60  b.ne     #0x447a54
00447a64  str      x8, [sp, #0x160]
00447a68  ldr      x8, [x19, #0x238]  ; =0x151238
00447a6c  ldr      x9, [x19, #0x198]  ; =0x151198
00447a70  ldp      x26, x27, [x20, #8]
00447a74  ldr      x21, [x8, #0x30]  ; =0xc78030
00447a78  ldr      x4, [x9, #0x30]
00447a7c  add      x0, sp, #0x650
00447a80  mov      w1, #0x220
00447a84  mov      w2, #0x220
00447a88  mov      w3, #0x10
00447a8c  mov      x5, xzr
00447a90  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00447a94  add      x0, sp, #0x5f0
00447a98  mov      w1, w26
00447a9c  mov      w2, w27
00447aa0  mov      w3, #0x10
00447aa4  mov      x4, x21
00447aa8  mov      x5, xzr
00447aac  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00447ab0  ldr      x8, [x19, #0x138]  ; =0x151138
00447ab4  mul      w9, w26, w27
00447ab8  mov      w21, #2
00447abc  mov      w22, #3
00447ac0  ldr      x1, [x19, #0x88]  ; =0x151088
00447ac4  str      w26, [sp, #0x6b0]
00447ac8  ldp      x10, x8, [x8, #0x30]
00447acc  add      w9, w9, w9, lsl #1
00447ad0  str      w27, [sp, #0x6b4]
00447ad4  sxtw     x23, w9
00447ad8  str      w21, [sp, #0x520]
00447adc  str      w22, [sp, #0x6b8]
00447ae0  str      x10, [sp, #0x538]
00447ae4  str      x10, [sp, #0x540]
00447ae8  str      w8, [sp, #0x548]
00447aec  str      x23, [sp, #0x528]
00447af0  str      x23, [sp, #0x530]
00447af4  str      xzr, [sp, #0x410]
00447af8  add      x0, sp, #0x4b0
00447afc  add      x3, sp, #0x6b0
00447b00  add      x4, sp, #0x520
00447b04  add      x5, sp, #0x410
00447b08  mov      w2, #1
00447b0c  bl       #0x8e774c
00447b10  ldr      x8, [x19, #0x1f8]  ; =0x1511f8
00447b14  stp      x25, x24, [sp]
00447b18  ldr      x1, [x19, #0x88]  ; =0x151088
00447b1c  str      w21, [sp, #0x480]
00447b20  str      x23, [sp, #0x488]
00447b24  ldp      x9, x8, [x8, #0x30]
00447b28  str      x23, [sp, #0x490]
00447b2c  str      w26, [sp, #0x6b0]
00447b30  str      w27, [sp, #0x6b4]
00447b34  str      x9, [sp, #0x498]
00447b38  str      x9, [sp, #0x4a0]
00447b3c  str      w8, [sp, #0x4a8]
00447b40  str      w22, [sp, #0x6b8]
00447b44  str      xzr, [sp, #0x370]
00447b48  add      x0, sp, #0x410
00447b4c  add      x3, sp, #0x6b0
00447b50  add      x4, sp, #0x480
00447b54  add      x5, sp, #0x370
00447b58  mov      w2, #1
00447b5c  bl       #0x8e774c
00447b60  cmp      w26, #1
00447b64  str      x26, [sp, #0x10]
00447b68  b.lt     #0x448640
00447b6c  cmp      w27, #1
00447b70  b.lt     #0x448640
00447b74  add      x8, x19, #0x188  ; "Array) const"
00447b78  add      x10, x19, #0x198  ; "%s]"
00447b7c  add      x9, sp, #0x6b0
00447b80  mov      w26, wzr
00447b84  add      x24, x9, #0x70
00447b88  add      x9, x9, #0x18
00447b8c  str      x8, [sp, #0x30]
00447b90  add      x8, x19, #0x1a8  ; "-runner/builds/AhMAQDyC/2/mi-camera-algorithm/engine/mage/mage2.0/src/runtime/array/src/mat.cpp"
00447b94  mov      w11, #0x10
00447b98  mov      w12, #0x210
00447b9c  mov      w28, #1
00447ba0  mov      w20, #3
00447ba4  stp      x10, x8, [sp, #0x20]
00447ba8  add      x8, x19, #0x1c0  ; "2/mi-camera-algorithm/engine/mage/mage2.0/src/runtime/array/src/mat.cpp"
00447bac  mov      x23, #-1
00447bb0  str      x8, [sp, #0x18]
00447bb4  add      x8, sp, #0x5d8
00447bb8  orr      x8, x8, #1
00447bbc  stp      x8, x9, [sp, #0x60]
00447bc0  add      x8, sp, #0x198
00447bc4  add      x9, sp, #0x5c0
00447bc8  add      x10, x8, #0x10  ; =0xc78010
00447bcc  orr      x8, x9, #1
00447bd0  add      x9, sp, #0x180
00447bd4  add      x9, x9, #0x10
00447bd8  stp      x8, x10, [sp, #0x50]
00447bdc  mov      w8, #0x1800
00447be0  str      x9, [sp, #0x48]
00447be4  mov      w9, #0x220
00447be8  movk     w8, #0x1b, lsl #16
00447bec  dup      v8.2s, w9
00447bf0  dup      v0.2d, x8
00447bf4  str      q0, [sp, #0x70]
00447bf8  ldr      x10, [sp, #0x10]
00447bfc  cmp      w26, #0x10
00447c00  add      w8, w26, #0x210
00447c04  csel     w9, w26, w11, gt
00447c08  sub      w13, w9, #0x10
00447c0c  mov      w21, wzr
00447c10  cmp      w8, w10
00447c14  csel     w8, w8, w10, lt
00447c18  sub      w10, w8, w26
00447c1c  sub      w8, w8, w13
00447c20  add      w9, w10, #0x10
00447c24  sub      w10, w13, w26
00447c28  add      w14, w10, #0x10
00447c2c  cmp      w9, #0x210
00447c30  str      w8, [sp, #0x90]
00447c34  sub      w8, w9, w14
00447c38  csel     w10, w9, w12, lt
00447c3c  stp      w14, w13, [sp, #0x94]
00447c40  str      w8, [sp, #0x8c]
00447c44  sub      w8, w10, #0x10
00447c48  str      w8, [sp, #0x44]
00447c4c  orr      x8, x11, x10, lsl #32
00447c50  str      x8, [sp, #0x38]
00447c54  cmp      w21, #0x10
00447c58  add      w8, w21, #0x210
00447c5c  csel     w9, w21, w11, gt
00447c60  cmp      w8, w27
00447c64  sub      w9, w9, #0x10
00447c68  csel     w8, w8, w27, lt
00447c6c  sub      w10, w9, w21
00447c70  sub      w11, w8, w9
00447c74  sub      w8, w8, w21
00447c78  ldr      q0, [sp, #0x70]
00447c7c  str      w9, [sp, #0x148]
00447c80  add      w9, w10, #0x10
00447c84  add      w22, w8, #0x10
00447c88  ldr      w8, [sp, #0x90]
00447c8c  str      w11, [sp, #0x150]
00447c90  str      w9, [sp, #0x138]
00447c94  ldr      x1, [x19, #0x88]  ; =0x151088
00447c98  str      w8, [sp, #0x154]
00447c9c  sub      w8, w22, w9
00447ca0  ldp      w9, w10, [sp, #0x94]
00447ca4  str      w10, [sp, #0x14c]
00447ca8  ldr      x10, [x19, #0x188]  ; =0x151188
00447cac  str      d8, [sp, #0x6b0]
00447cb0  str      w8, [sp, #0x140]
00447cb4  ldr      w8, [sp, #0x8c]
00447cb8  str      w9, [sp, #0x13c]
00447cbc  mov      w9, #2
00447cc0  str      xzr, [sp, #0x300]
00447cc4  str      w8, [sp, #0x144]
00447cc8  str      w9, [sp, #0x3e0]
00447ccc  ldp      x8, x9, [x10, #0x30]
00447cd0  add      x10, sp, #0x2e9
00447cd4  str      x8, [sp, #0x3f8]
00447cd8  str      x8, [sp, #0x400]
00447cdc  mov      w8, #6
00447ce0  stur     q0, [x10, #0xff]
00447ce4  str      w9, [sp, #0x408]
00447ce8  str      w8, [sp, #0x6b8]
00447cec  add      x0, sp, #0x370
00447cf0  add      x3, sp, #0x6b0
00447cf4  add      x4, sp, #0x3e0
00447cf8  add      x5, sp, #0x300
00447cfc  mov      w2, #1
00447d00  bl       #0x8e774c
00447d04  ldr      x1, [x19, #0x88]  ; =0x151088
00447d08  str      d8, [sp, #0x6b0]
00447d0c  str      w20, [sp, #0x6b8]
00447d10  str      xzr, [sp, #0x290]
00447d14  add      x0, sp, #0x300
00447d18  add      x3, sp, #0x6b0
00447d1c  add      x5, sp, #0x290
00447d20  mov      w2, #1
00447d24  mov      w4, #2
00447d28  bl       #0x8e7524
00447d2c  ldr      x1, [x19, #0x88]  ; =0x151088
00447d30  str      d8, [sp, #0x6b0]
00447d34  str      w20, [sp, #0x6b8]
00447d38  str      xzr, [sp, #0x220]
00447d3c  add      x0, sp, #0x290
00447d40  add      x3, sp, #0x6b0
00447d44  add      x5, sp, #0x220
00447d48  mov      w2, #1
00447d4c  mov      w4, #2
00447d50  bl       #0x8e7524
00447d54  add      x8, sp, #0x220
00447d58  add      x0, sp, #0x290
00447d5c  add      x1, sp, #0x138
00447d60  bl       #0x8e7d18
00447d64  add      x8, sp, #0x6b0
00447d68  add      x0, sp, #0x4b0
00447d6c  add      x1, sp, #0x148
00447d70  bl       #0x8e7d18
00447d74  add      x0, sp, #0x6b0
00447d78  add      x1, sp, #0x220
00447d7c  bl       #0x8e81cc
00447d80  add      x0, sp, #0x6b0
00447d84  bl       #0x8e7b94
00447d88  add      x8, sp, #0x1b0
00447d8c  add      x0, sp, #0x300
00447d90  add      x1, sp, #0x138
00447d94  bl       #0x8e7d18
00447d98  add      x8, sp, #0x6b0
00447d9c  add      x0, sp, #0x410
00447da0  add      x1, sp, #0x148
00447da4  bl       #0x8e7d18
00447da8  add      x0, sp, #0x6b0
00447dac  add      x1, sp, #0x1b0
00447db0  str      w22, [sp, #0x9c]
00447db4  bl       #0x8e81cc
00447db8  add      x0, sp, #0x6b0
00447dbc  bl       #0x8e7b94
00447dc0  ldr      x25, [x19, #0x88]  ; =0x151088
00447dc4  add      x0, sp, #0x6b0
00447dc8  add      x1, sp, #0x290
00447dcc  bl       #0x8e7848
00447dd0  add      x1, sp, #0x300
00447dd4  mov      x0, x24
00447dd8  bl       #0x8e7848
00447ddc  add      x8, sp, #0x560
00447de0  str      xzr, [sp, #0x568]
00447de4  str      xzr, [sp, #0x560]
00447de8  str      xzr, [sp, #0x570]
00447dec  str      x8, [sp, #0x198]
00447df0  strb     wzr, [sp, #0x1a0]
00447df4  mov      w0, #0xe0
00447df8  bl       #0xc48840  ; <_Znwm>
00447dfc  mov      x20, x0
00447e00  add      x8, x0, #0xe0  ; "tack_caller_destroy"
00447e04  str      x0, [sp, #0x560]
00447e08  str      x0, [sp, #0x568]
00447e0c  str      x8, [sp, #0x570]
00447e10  add      x1, sp, #0x6b0
00447e14  bl       #0x8e7848
00447e18  add      x0, x20, #0x70  ; "nown feature"
00447e1c  mov      x1, x24
00447e20  bl       #0x8e7848
00447e24  add      x8, x20, #0xe0  ; "tack_caller_destroy"
00447e28  str      w28, [sp, #0x198]
00447e2c  strb     wzr, [sp, #0x19c]
00447e30  str      x8, [sp, #0x568]
00447e34  add      x1, sp, #0x560
00447e38  add      x2, sp, #0x370
00447e3c  add      x3, sp, #0x198
00447e40  mov      x0, x25
00447e44  bl       #0xa3eef8
00447e48  ldr      x22, [sp, #0x560]
00447e4c  cbz      x22, #0x447e90
00447e50  ldr      x8, [sp, #0x568]
00447e54  mov      x0, x22
00447e58  cmp      x8, x22
00447e5c  b.eq     #0x447e88
00447e60  sub      x20, x8, #0x70
00447e64  mov      x25, x20
00447e68  ldr      x8, [x25], #0xffffffffffffff90
00447e6c  mov      x0, x20
00447e70  ldr      x8, [x8]
00447e74  blr      x8
00447e78  cmp      x20, x22
00447e7c  mov      x20, x25
00447e80  b.ne     #0x447e68
00447e84  ldr      x0, [sp, #0x560]
00447e88  str      x22, [sp, #0x568]
00447e8c  bl       #0xc48850  ; <_ZdlPv>
00447e90  mov      x0, x24
00447e94  bl       #0x8e7b94
00447e98  add      x0, sp, #0x6b0
00447e9c  bl       #0x8e7b94
00447ea0  ldp      x25, x22, [x19, #0x1a8]
00447ea4  cmp      x22, x25
00447ea8  b.eq     #0x447ee0
00447eac  ldur     x20, [x22, #-8]
00447eb0  sub      x22, x22, #0x10
00447eb4  cbz      x20, #0x447ea4
00447eb8  add      x8, x20, #8  ; "ay, double, cv::RNG *)"
00447ebc  ldaddal  x23, x8, [x8]
00447ec0  cbnz     x8, #0x447ea4
00447ec4  ldr      x8, [x20]
00447ec8  mov      x0, x20
00447ecc  ldr      x8, [x8, #0x10]  ; =0xc78010
00447ed0  blr      x8
00447ed4  mov      x0, x20
00447ed8  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00447edc  b        #0x447ea4
00447ee0  ldr      x8, [x19, #0x1b8]  ; =0x1511b8
00447ee4  str      x25, [x19, #0x1b0]  ; =0x1511b0
00447ee8  cmp      x25, x8
00447eec  b.eq     #0x447f18
00447ef0  ldr      x8, [x19, #0x188]  ; =0x151188
00447ef4  str      x8, [x25]
00447ef8  ldr      x8, [x19, #0x190]  ; =0x151190
00447efc  str      x8, [x25, #8]
00447f00  cbz      x8, #0x447f0c
00447f04  add      x8, x8, #8  ; =0xc78008
00447f08  ldadd    x28, x8, [x8]
00447f0c  add      x8, x25, #0x10
00447f10  str      x8, [x19, #0x1b0]  ; =0x1511b0
00447f14  b        #0x447f20
00447f18  ldp      x0, x1, [sp, #0x28]
00447f1c  bl       #0x4522e0
00447f20  ldp      x25, x22, [x19, #0x1c0]
00447f24  cmp      x22, x25
00447f28  b.eq     #0x447f60
00447f2c  ldur     x20, [x22, #-8]
00447f30  sub      x22, x22, #0x10
00447f34  cbz      x20, #0x447f24
00447f38  add      x8, x20, #8  ; "ay, double, cv::RNG *)"
00447f3c  ldaddal  x23, x8, [x8]
00447f40  cbnz     x8, #0x447f24
00447f44  ldr      x8, [x20]
00447f48  mov      x0, x20
00447f4c  ldr      x8, [x8, #0x10]  ; =0xc78010
00447f50  blr      x8
00447f54  mov      x0, x20
00447f58  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00447f5c  b        #0x447f24
00447f60  ldr      x8, [x19, #0x1d0]  ; =0x1511d0
00447f64  str      x25, [x19, #0x1c8]  ; =0x1511c8
00447f68  cmp      x25, x8
00447f6c  b.eq     #0x447f98
00447f70  ldr      x8, [x19, #0x198]  ; =0x151198
00447f74  str      x8, [x25]
00447f78  ldr      x8, [x19, #0x1a0]  ; =0x1511a0
00447f7c  str      x8, [x25, #8]
00447f80  cbz      x8, #0x447f8c
00447f84  add      x8, x8, #8  ; =0xc78008
00447f88  ldadd    x28, x8, [x8]
00447f8c  add      x8, x25, #0x10
00447f90  str      x8, [x19, #0x1c8]  ; =0x1511c8
00447f94  b        #0x447fa0
00447f98  ldp      x0, x1, [sp, #0x18]
00447f9c  bl       #0x4522e0
00447fa0  mov      x25, x24
00447fa4  mov      w24, w26
00447fa8  mov      x26, x27
00447fac  ldr      x8, [x19, #0x178]  ; =0x151178
00447fb0  ldp      x22, x27, [x19, #0x1a8]
00447fb4  str      xzr, [sp, #0x6b8]
00447fb8  str      x8, [sp, #0xa0]
00447fbc  add      x8, sp, #0x6b0
00447fc0  str      xzr, [sp, #0x6b0]
00447fc4  str      xzr, [sp, #0x6c0]
00447fc8  subs     x20, x27, x22
00447fcc  str      x8, [sp, #0x560]
00447fd0  strb     wzr, [sp, #0x568]
00447fd4  b.eq     #0x448030
00447fd8  tbnz     x20, #0x3f, #0x448cf0
00447fdc  mov      x0, x20
00447fe0  bl       #0xc48840  ; <_Znwm>
00447fe4  asr      x8, x20, #4
00447fe8  str      x0, [sp, #0x6b0]
00447fec  str      x0, [sp, #0x6b8]
00447ff0  add      x8, x0, x8, lsl #4
00447ff4  str      x8, [sp, #0x6c0]
00447ff8  b        #0x44800c
00447ffc  add      x0, x0, #0x10  ; "le, cv::RNG *)"
00448000  add      x22, x22, #0x10
00448004  cmp      x22, x27
00448008  b.eq     #0x44802c
0044800c  ldr      x8, [x22]
00448010  str      x8, [x0]
00448014  ldr      x8, [x22, #8]
00448018  str      x8, [x0, #8]  ; =0x151008
0044801c  cbz      x8, #0x447ffc
00448020  add      x8, x8, #8  ; =0xc78008
00448024  ldadd    x28, x8, [x8]
00448028  b        #0x447ffc
0044802c  str      x0, [sp, #0x6b8]
00448030  ldp      x22, x27, [x19, #0x1c0]
00448034  strb     wzr, [sp, #0x568]
00448038  ldr      x8, [sp, #0x68]
0044803c  subs     x20, x27, x22
00448040  stp      xzr, xzr, [x8]
00448044  str      xzr, [x8, #0x10]  ; =0xc78010
00448048  str      x8, [sp, #0x560]
0044804c  b.eq     #0x4480a8
00448050  tbnz     x20, #0x3f, #0x448d0c
00448054  mov      x0, x20
00448058  bl       #0xc48840  ; <_Znwm>
0044805c  asr      x8, x20, #4
00448060  str      x0, [sp, #0x6c8]
00448064  str      x0, [sp, #0x6d0]
00448068  add      x8, x0, x8, lsl #4
0044806c  str      x8, [sp, #0x6d8]
00448070  b        #0x448084
00448074  add      x0, x0, #0x10  ; "le, cv::RNG *)"
00448078  add      x22, x22, #0x10
0044807c  cmp      x22, x27
00448080  b.eq     #0x4480a4
00448084  ldr      x8, [x22]
00448088  str      x8, [x0]
0044808c  ldr      x8, [x22, #8]
00448090  str      x8, [x0, #8]  ; =0x151008
00448094  cbz      x8, #0x448074
00448098  add      x8, x8, #8  ; =0xc78008
0044809c  ldadd    x28, x8, [x8]
004480a0  b        #0x448074
004480a4  str      x0, [sp, #0x6d0]
004480a8  mov      w8, #0xa
004480ac  mov      w9, #0x6e69
004480b0  movk     w9, #0x7570, lsl #16
004480b4  strb     wzr, [sp, #0x5de]
004480b8  stp      xzr, xzr, [sp, #0x1a0]
004480bc  strb     w8, [sp, #0x5d8]
004480c0  ldr      x8, [sp, #0x60]
004480c4  str      xzr, [sp, #0x198]
004480c8  strb     wzr, [sp, #0x188]
004480cc  str      w9, [x8]
004480d0  mov      w9, #0x74
004480d4  strb     w9, [x8, #4]
004480d8  add      x8, sp, #0x198
004480dc  str      x8, [sp, #0x180]
004480e0  mov      w0, #0x18
004480e4  bl       #0xc48840  ; <_Znwm>
004480e8  add      x8, x0, #0x18  ; "RNG *)"
004480ec  mov      x20, x0
004480f0  stp      x0, x0, [sp, #0x198]
004480f4  str      x0, [sp, #0x5c0]
004480f8  str      x8, [sp, #0x1a8]
004480fc  ldr      x8, [sp, #0x58]
00448100  str      x0, [sp, #0x550]
00448104  strb     wzr, [sp, #0x578]
00448108  str      x8, [sp, #0x560]
0044810c  add      x8, sp, #0x550
00448110  str      x8, [sp, #0x568]
00448114  add      x8, sp, #0x5c0
00448118  str      x8, [sp, #0x570]
0044811c  add      x1, sp, #0x5d8
00448120  bl       #0xc488d0  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_>
00448124  ldr      x8, [sp, #0x5c0]
00448128  mov      w9, #0xc
0044812c  mov      w10, #0x756f
00448130  mov      x27, x26
00448134  movk     w10, #0x7074, lsl #16
00448138  strb     wzr, [sp, #0x5c7]
0044813c  strb     w9, [sp, #0x5c0]
00448140  ldr      x9, [sp, #0x50]
00448144  add      x8, x8, #0x18  ; =0xc78018
00448148  stp      xzr, xzr, [sp, #0x188]
0044814c  str      xzr, [sp, #0x180]
00448150  str      w10, [x9]
00448154  mov      w10, #0x7475
00448158  str      x8, [sp, #0x1a0]
0044815c  add      x8, sp, #0x180
00448160  strb     wzr, [sp, #0x558]
00448164  strh     w10, [x9, #4]
00448168  str      x8, [sp, #0x550]
0044816c  mov      w0, #0x18
00448170  bl       #0xc48840  ; <_Znwm>
00448174  add      x8, x0, #0x18  ; "RNG *)"
00448178  mov      x20, x0
0044817c  mov      w26, w24
00448180  stp      x0, x0, [sp, #0x180]
00448184  stp      x0, x0, [sp, #0x170]
00448188  str      x8, [sp, #0x190]
0044818c  ldr      x8, [sp, #0x48]
00448190  strb     wzr, [sp, #0x578]
00448194  str      x8, [sp, #0x560]
00448198  add      x8, sp, #0x170
0044819c  str      x8, [sp, #0x568]
004481a0  add      x8, sp, #0x178
004481a4  str      x8, [sp, #0x570]
004481a8  add      x1, sp, #0x5c0
004481ac  bl       #0xc488d0  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_>
004481b0  ldr      x8, [sp, #0x178]
004481b4  mov      x24, x25
004481b8  add      x8, x8, #0x18  ; =0xc78018
004481bc  str      x8, [sp, #0x188]
004481c0  add      x1, sp, #0x6b0
004481c4  add      x2, sp, #0x198
004481c8  add      x3, sp, #0x180
004481cc  ldr      x0, [sp, #0xa0]
004481d0  bl       #0x430788
004481d4  ldr      x20, [sp, #0x180]
004481d8  cbz      x20, #0x448220
004481dc  ldr      x8, [sp, #0x188]
004481e0  mov      x0, x20
004481e4  cmp      x8, x20
004481e8  b.eq     #0x448218
004481ec  mov      x22, x8
004481f0  b        #0x448200
004481f4  mov      x8, x22
004481f8  cmp      x22, x20
004481fc  b.eq     #0x448214
00448200  ldrb     w9, [x22, #-0x18]!
00448204  tbz      w9, #0, #0x4481f4
00448208  ldur     x0, [x8, #-8]
0044820c  bl       #0xc48850  ; <_ZdlPv>
00448210  b        #0x4481f4
00448214  ldr      x0, [sp, #0x180]
00448218  str      x20, [sp, #0x188]
0044821c  bl       #0xc48850  ; <_ZdlPv>
00448220  ldrb     w8, [sp, #0x5c0]
00448224  tbz      w8, #0, #0x448230
00448228  ldr      x0, [sp, #0x5d0]
0044822c  bl       #0xc48850  ; <_ZdlPv>
00448230  ldr      x20, [sp, #0x198]
00448234  cbz      x20, #0x44827c
00448238  ldr      x8, [sp, #0x1a0]
0044823c  mov      x0, x20
00448240  cmp      x8, x20
00448244  b.eq     #0x448274
00448248  mov      x22, x8
0044824c  b        #0x44825c
00448250  mov      x8, x22
00448254  cmp      x22, x20
00448258  b.eq     #0x448270
0044825c  ldrb     w9, [x22, #-0x18]!
00448260  tbz      w9, #0, #0x448250
00448264  ldur     x0, [x8, #-8]
00448268  bl       #0xc48850  ; <_ZdlPv>
0044826c  b        #0x448250
00448270  ldr      x0, [sp, #0x198]
00448274  str      x20, [sp, #0x1a0]
00448278  bl       #0xc48850  ; <_ZdlPv>
0044827c  ldrb     w8, [sp, #0x5d8]
00448280  tbz      w8, #0, #0x44828c
00448284  ldr      x0, [sp, #0x5e8]
00448288  bl       #0xc48850  ; <_ZdlPv>
0044828c  ldr      x22, [sp, #0x6c8]
00448290  cbz      x22, #0x4482f0
00448294  ldr      x25, [sp, #0x6d0]
00448298  mov      x0, x22
0044829c  cmp      x25, x22
004482a0  b.ne     #0x4482b0
004482a4  b        #0x4482e8
004482a8  cmp      x25, x22
004482ac  b.eq     #0x4482e4
004482b0  ldur     x20, [x25, #-8]
004482b4  sub      x25, x25, #0x10
004482b8  cbz      x20, #0x4482a8
004482bc  add      x8, x20, #8  ; "ay, double, cv::RNG *)"
004482c0  ldaddal  x23, x8, [x8]
004482c4  cbnz     x8, #0x4482a8
004482c8  ldr      x8, [x20]
004482cc  mov      x0, x20
004482d0  ldr      x8, [x8, #0x10]  ; =0xc78010
004482d4  blr      x8
004482d8  mov      x0, x20
004482dc  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
004482e0  b        #0x4482a8
004482e4  ldr      x0, [sp, #0x6c8]
004482e8  str      x22, [sp, #0x6d0]
004482ec  bl       #0xc48850  ; <_ZdlPv>
004482f0  ldr      x22, [sp, #0x6b0]
004482f4  cbz      x22, #0x448354
004482f8  ldr      x25, [sp, #0x6b8]
004482fc  mov      x0, x22
00448300  cmp      x25, x22
00448304  b.ne     #0x448314
00448308  b        #0x44834c
0044830c  cmp      x25, x22
00448310  b.eq     #0x448348
00448314  ldur     x20, [x25, #-8]
00448318  sub      x25, x25, #0x10
0044831c  cbz      x20, #0x44830c
00448320  add      x8, x20, #8  ; "ay, double, cv::RNG *)"
00448324  ldaddal  x23, x8, [x8]
00448328  cbnz     x8, #0x44830c
0044832c  ldr      x8, [x20]
00448330  mov      x0, x20
00448334  ldr      x8, [x8, #0x10]  ; =0xc78010
00448338  blr      x8
0044833c  mov      x0, x20
00448340  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00448344  b        #0x44830c
00448348  ldr      x0, [sp, #0x6b0]
0044834c  str      x22, [sp, #0x6b8]
00448350  bl       #0xc48850  ; <_ZdlPv>
00448354  ldr      x0, [x19, #0x178]  ; =0x151178
00448358  bl       #0x431174
0044835c  mov      w25, w0
00448360  cbz      w0, #0x448398
00448364  adrp     x0, #0x151000
00448368  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044836c  mov      w1, #0x2f
00448370  mov      w2, #0x4a
00448374  bl       #0xc48800  ; <__strrchr_chk>
00448378  cbz      x0, #0x448428
0044837c  adrp     x0, #0x151000
00448380  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448384  mov      w1, #0x2f
00448388  mov      w2, #0x4a
0044838c  bl       #0xc48800  ; <__strrchr_chk>
00448390  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00448394  b        #0x448430
00448398  ldr      w9, [sp, #0x9c]
0044839c  mov      w8, #0x210
004483a0  mov      w10, #0x10
004483a4  str      w21, [sp, #0x5d8]
004483a8  str      w26, [sp, #0x5dc]
004483ac  cmp      w9, #0x210
004483b0  csel     w8, w9, w8, lt
004483b4  sub      w9, w8, #0x10
004483b8  orr      x8, x10, x8, lsl #32
004483bc  str      w9, [sp, #0x5e0]
004483c0  ldr      w9, [sp, #0x44]
004483c4  str      x8, [sp, #0x198]
004483c8  str      w9, [sp, #0x5e4]
004483cc  ldr      x9, [sp, #0x38]
004483d0  str      x9, [sp, #0x560]
004483d4  add      x0, sp, #0x6b0
004483d8  add      x1, sp, #0x650
004483dc  add      x2, sp, #0x560
004483e0  add      x3, sp, #0x198
004483e4  bl       #0xc48c30  ; <_ZN2cv3MatC1ERKS0_RKNS_5RangeES5_>
004483e8  add      x0, sp, #0x560
004483ec  add      x1, sp, #0x5f0
004483f0  add      x2, sp, #0x5d8
004483f4  bl       #0xc48bc0  ; <_ZN2cv3MatC1ERKS0_RKNS_5Rect_IiEE>
004483f8  mov      w8, #-0x3dff0000
004483fc  str      w8, [sp, #0x198]
00448400  add      x8, sp, #0x560
00448404  stp      x8, xzr, [sp, #0x1a0]
00448408  add      x0, sp, #0x6b0
0044840c  add      x1, sp, #0x198
00448410  bl       #0xc48bd0  ; <_ZNK2cv3Mat6copyToERKNS_12_OutputArrayE>
00448414  add      x0, sp, #0x560
00448418  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044841c  add      x0, sp, #0x6b0
00448420  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00448424  b        #0x4485ec
00448428  adrp     x3, #0x151000
0044842c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448430  adrp     x0, #0x177000
00448434  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00448438  mov      w1, #2
0044843c  adrp     x2, #0x163000
00448440  add      x2, x2, #0x688  ; "[%s:%d] colorfix error %d at block (%d, %d)
"
00448444  mov      w4, #0x419
00448448  mov      w5, w25
0044844c  mov      w6, w21
00448450  mov      w7, w26
00448454  bl       #0x484908
00448458  adrp     x0, #0x163000
0044845c  add      x0, x0, #0x688  ; "[%s:%d] colorfix error %d at block (%d, %d)
"
00448460  add      x8, sp, #0x6b0
00448464  add      x22, sp, #0x6b0
00448468  ldp      q0, q1, [x0]
0044846c  ldur     q2, [x0, #0x1d]
00448470  stp      q0, q1, [x8]
00448474  stur     q2, [x8, #0x1d]
00448478  mov      w1, #0x2d
0044847c  bl       #0xc48820  ; <__strlen_chk>
00448480  adrp     x9, #0xc78000
00448484  add      x8, sp, #0x6b0
00448488  add      x8, x0, x8
0044848c  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00448490  sturb    wzr, [x8, #-1]
00448494  ldr      x20, [x9]
00448498  adrp     x0, #0x151000
0044849c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004484a0  mov      w1, #0x2f
004484a4  mov      w2, #0x4a
004484a8  bl       #0xc48800  ; <__strrchr_chk>
004484ac  cbz      x0, #0x4484cc
004484b0  adrp     x0, #0x151000
004484b4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004484b8  mov      w1, #0x2f
004484bc  mov      w2, #0x4a
004484c0  bl       #0xc48800  ; <__strrchr_chk>
004484c4  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004484c8  b        #0x4484d4
004484cc  adrp     x3, #0x151000
004484d0  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004484d4  add      x2, sp, #0x6b0
004484d8  mov      w0, #2
004484dc  adrp     x1, #0x177000
004484e0  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004484e4  mov      w4, #0x419
004484e8  mov      w5, w25
004484ec  mov      w6, w21
004484f0  mov      w7, w26
004484f4  blr      x20
004484f8  adrp     x0, #0x151000
004484fc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448500  mov      w1, #0x2f
00448504  mov      w2, #0x4a
00448508  bl       #0xc48800  ; <__strrchr_chk>
0044850c  cbz      x0, #0x44852c
00448510  adrp     x0, #0x151000
00448514  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448518  mov      w1, #0x2f
0044851c  mov      w2, #0x4a
00448520  bl       #0xc48800  ; <__strrchr_chk>
00448524  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00448528  b        #0x448534
0044852c  adrp     x3, #0x151000
00448530  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448534  adrp     x0, #0x177000
00448538  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044853c  mov      w1, #1
00448540  adrp     x2, #0x177000
00448544  add      x2, x2, #0x2a0  ; "[%s:%d] %s.
"
00448548  mov      w4, #0x41a
0044854c  adrp     x5, #0x13c000
00448550  add      x5, x5, #0xf2  ; "Error::BAD_OP"
00448554  bl       #0x484908
00448558  adrp     x0, #0x177000
0044855c  add      x0, x0, #0x2a0  ; "[%s:%d] %s.
"
00448560  ldr      x8, [x0]
00448564  ldur     x9, [x0, #5]
00448568  str      x8, [sp, #0x6b0]
0044856c  stur     x9, [x22, #5]
00448570  mov      w1, #0xd
00448574  bl       #0xc48820  ; <__strlen_chk>
00448578  adrp     x9, #0xc78000
0044857c  add      x8, sp, #0x6b0
00448580  add      x8, x0, x8
00448584  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00448588  sturb    wzr, [x8, #-1]
0044858c  ldr      x20, [x9]
00448590  adrp     x0, #0x151000
00448594  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448598  mov      w1, #0x2f
0044859c  mov      w2, #0x4a
004485a0  bl       #0xc48800  ; <__strrchr_chk>
004485a4  cbz      x0, #0x4485c4
004485a8  adrp     x0, #0x151000
004485ac  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004485b0  mov      w1, #0x2f
004485b4  mov      w2, #0x4a
004485b8  bl       #0xc48800  ; <__strrchr_chk>
004485bc  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004485c0  b        #0x4485cc
004485c4  adrp     x3, #0x151000
004485c8  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004485cc  add      x2, sp, #0x6b0
004485d0  mov      w0, #1
004485d4  adrp     x1, #0x177000
004485d8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004485dc  mov      w4, #0x41a
004485e0  adrp     x5, #0x13c000
004485e4  add      x5, x5, #0xf2  ; "Error::BAD_OP"
004485e8  blr      x20
004485ec  add      x0, sp, #0x1b0
004485f0  bl       #0x8e7b94
004485f4  add      x0, sp, #0x220
004485f8  bl       #0x8e7b94
004485fc  add      x0, sp, #0x290
00448600  bl       #0x8e7b94
00448604  add      x0, sp, #0x300
00448608  bl       #0x8e7b94
0044860c  add      x0, sp, #0x370
00448610  bl       #0x8e7b94
00448614  cbnz     w25, #0x448678
00448618  add      w21, w21, #0x200
0044861c  mov      w11, #0x10
00448620  mov      w12, #0x210
00448624  mov      w20, #3
00448628  cmp      w21, w27
0044862c  b.lt     #0x447c54
00448630  ldr      x8, [sp, #0x10]
00448634  add      w26, w26, #0x200
00448638  cmp      w26, w8
0044863c  b.lt     #0x447bf8
00448640  adrp     x0, #0x151000
00448644  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448648  mov      w1, #0x2f
0044864c  mov      w2, #0x4a
00448650  bl       #0xc48800  ; <__strrchr_chk>
00448654  ldr      x22, [sp]
00448658  cbz      x0, #0x448684
0044865c  adrp     x0, #0x151000
00448660  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448664  mov      w1, #0x2f
00448668  mov      w2, #0x4a
0044866c  bl       #0xc48800  ; <__strrchr_chk>
00448670  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00448674  b        #0x44868c
00448678  mov      w19, #0x6524
0044867c  movk     w19, #0x11, lsl #16
00448680  b        #0x448c88
00448684  adrp     x20, #0x151000
00448688  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044868c  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00448690  sub      x8, x0, x22
00448694  adrp     x9, #0x189000
00448698  scvtf    d0, x8
0044869c  ldr      d8, [x9, #0xc98]  ; =0x189c98 f64=1e-06
004486a0  fmul     d0, d0, d8
004486a4  adrp     x21, #0x151000
004486a8  add      x21, x21, #0x856  ; "[%s:%d] Colorfix processing done. Duration: %.3fms
"
004486ac  adrp     x0, #0x177000
004486b0  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
004486b4  mov      w1, #2
004486b8  mov      x2, x21
004486bc  mov      x3, x20
004486c0  mov      w4, #0x428
004486c4  bl       #0x484908
004486c8  mov      w8, #0x736d
004486cc  ldr      q2, [x21, #0x20]  ; =0x151020
004486d0  movk     w8, #0xa, lsl #16
004486d4  ldp      q0, q1, [x21]
004486d8  str      w8, [sp, #0x6e0]
004486dc  add      x8, sp, #0x6b0
004486e0  str      q2, [x8, #0x20]  ; =0xc78020
004486e4  stp      q0, q1, [x8]
004486e8  mov      x0, x21
004486ec  mov      w1, #0x34
004486f0  bl       #0xc48820  ; <__strlen_chk>
004486f4  adrp     x8, #0xc78000
004486f8  add      x9, sp, #0x6b0
004486fc  add      x9, x0, x9
00448700  ldr      x8, [x8, #0x2f0]  ; =0xc782f0
00448704  sturb    wzr, [x9, #-1]
00448708  ldr      x21, [x8]
0044870c  adrp     x0, #0x151000
00448710  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448714  mov      w1, #0x2f
00448718  mov      w2, #0x4a
0044871c  bl       #0xc48800  ; <__strrchr_chk>
00448720  cbz      x0, #0x448740
00448724  adrp     x0, #0x151000
00448728  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044872c  mov      w1, #0x2f
00448730  mov      w2, #0x4a
00448734  bl       #0xc48800  ; <__strrchr_chk>
00448738  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
0044873c  b        #0x448748
00448740  adrp     x20, #0x151000
00448744  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00448748  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044874c  sub      x8, x0, x22
00448750  scvtf    d0, x8
00448754  fmul     d0, d0, d8
00448758  adrp     x1, #0x177000
0044875c  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00448760  add      x2, sp, #0x6b0
00448764  mov      w0, #2
00448768  mov      x3, x20
0044876c  mov      w4, #0x428
00448770  blr      x21
00448774  ldrb     w24, [x19, #0x438]  ; =0x151438
00448778  ldr      x8, [x19, #0x440]  ; =0x151440
0044877c  lsr      x9, x24, #1
00448780  tst      w24, #1
00448784  csel     x21, x9, x8, eq
00448788  add      x23, x21, #0x14  ; "cv::RNG *)"
0044878c  cmn      x23, #0x11
00448790  b.hi     #0x448d40
00448794  ldr      w20, [x19, #0x310]  ; =0x151310
00448798  cmp      x23, #0x16
0044879c  b.hi     #0x4487bc
004487a0  and      w8, w23, #0xff
004487a4  mov      x0, xzr
004487a8  lsl      w8, w8, #1
004487ac  stp      xzr, xzr, [sp, #0x120]
004487b0  str      xzr, [sp, #0x130]
004487b4  strb     w8, [sp, #0x120]
004487b8  b        #0x4487dc
004487bc  orr      x8, x23, #0xf
004487c0  add      x22, x8, #1  ; =0xc78001
004487c4  mov      x0, x22
004487c8  bl       #0xc48840  ; <_Znwm>
004487cc  orr      x9, x22, #1
004487d0  stp      x23, x0, [sp, #0x128]
004487d4  and      w8, w9, #0xff
004487d8  str      x9, [sp, #0x120]
004487dc  add      x9, sp, #0x120
004487e0  tst      w8, #1
004487e4  ldr      x8, [x19, #0x448]  ; =0x151448
004487e8  orr      x9, x9, #1
004487ec  csel     x0, x9, x0, eq
004487f0  add      x23, x19, #0x439  ; "ed>"
004487f4  tst      w24, #1
004487f8  mov      x2, x21
004487fc  csel     x1, x23, x8, eq
00448800  add      x22, x0, x21
00448804  bl       #0xc48970  ; <memmove>
00448808  adrp     x9, #0x16d000
0044880c  add      x9, x9, #0x446  ; "colorfix_input_1.dat"
00448810  mov      w8, #0x642e
00448814  strb     wzr, [x22, #0x14]
00448818  movk     w8, #0x7461, lsl #16
0044881c  ldr      q0, [x9]
00448820  ldr      x9, [x19, #0x1f8]  ; =0x1511f8
00448824  str      w8, [x22, #0x10]
00448828  str      q0, [x22]
0044882c  ldp      x12, x8, [x9, #0x10]
00448830  ldr      x2, [x9, #0x30]  ; =0x16d030
00448834  cmp      x12, x8
00448838  b.eq     #0x448858
0044883c  sub      x9, x8, x12
00448840  sub      x9, x9, #8
00448844  cmp      x9, #0x38
00448848  b.hs     #0x448860
0044884c  mov      w3, #1
00448850  mov      x9, x12
00448854  b        #0x4488c0
00448858  mov      w3, #1
0044885c  b        #0x4488d0
00448860  lsr      x9, x9, #3
00448864  add      x10, x9, #1  ; "lem type should be u8"
00448868  and      x11, x10, #0x3ffffffffffffff8
0044886c  movi     v0.4s, #1
00448870  mov      x13, x11
00448874  movi     v1.4s, #1
00448878  add      x9, x12, x11, lsl #3
0044887c  add      x12, x12, #0x20
00448880  ldp      q3, q2, [x12, #-0x20]
00448884  subs     x13, x13, #8
00448888  ldp      q5, q4, [x12], #0x40
0044888c  uzp1     v2.4s, v3.4s, v2.4s
00448890  uzp1     v3.4s, v5.4s, v4.4s
00448894  mul      v0.4s, v0.4s, v2.4s
00448898  mul      v1.4s, v1.4s, v3.4s
0044889c  b.ne     #0x448880
004488a0  mul      v0.4s, v1.4s, v0.4s
004488a4  cmp      x10, x11
004488a8  ext      v1.16b, v0.16b, v0.16b, #8
004488ac  mul      v0.2s, v0.2s, v1.2s
004488b0  mov      w12, v0.s[1]
004488b4  fmov     w13, s0
004488b8  mul      w3, w13, w12
004488bc  b.eq     #0x4488d0
004488c0  ldr      w10, [x9], #8  ; =0x16d008
004488c4  cmp      x9, x8
004488c8  mul      w3, w3, w10
004488cc  b.ne     #0x4488c0
004488d0  mov      w8, #0xc
004488d4  mov      w9, #0x6962
004488d8  movk     w9, #0x616e, lsl #16
004488dc  mov      w10, #0x7972
004488e0  strb     wzr, [sp, #0x10f]
004488e4  strb     w8, [sp, #0x108]
004488e8  add      x8, sp, #0xa
004488ec  stur     w9, [x8, #0xff]
004488f0  add      x8, sp, #0xe
004488f4  sturh    w10, [x8, #0xff]
004488f8  add      x1, sp, #0x120
004488fc  add      x4, sp, #0x108
00448900  mov      w0, w20
00448904  bl       #0x43b0c4
00448908  ldrb     w8, [sp, #0x108]
0044890c  tbz      w8, #0, #0x448918
00448910  ldr      x0, [sp, #0x118]
00448914  bl       #0xc48850  ; <_ZdlPv>
00448918  ldrb     w8, [sp, #0x120]
0044891c  tbz      w8, #0, #0x448928
00448920  ldr      x0, [sp, #0x130]
00448924  bl       #0xc48850  ; <_ZdlPv>
00448928  ldrb     w24, [x19, #0x438]  ; =0x151438
0044892c  ldr      x8, [x19, #0x440]  ; =0x151440
00448930  lsr      x9, x24, #1
00448934  tst      w24, #1
00448938  csel     x21, x9, x8, eq
0044893c  add      x25, x21, #0x14  ; "cv::RNG *)"
00448940  cmn      x25, #0x11
00448944  b.hi     #0x448d48
00448948  ldr      w20, [x19, #0x310]  ; =0x151310
0044894c  cmp      x25, #0x16
00448950  b.hi     #0x448970
00448954  and      w8, w25, #0xff
00448958  mov      x0, xzr
0044895c  lsl      w8, w8, #1
00448960  stp      xzr, xzr, [sp, #0xf0]
00448964  str      xzr, [sp, #0x100]
00448968  strb     w8, [sp, #0xf0]
0044896c  b        #0x448990
00448970  orr      x8, x25, #0xf
00448974  add      x22, x8, #1  ; =0xc78001
00448978  mov      x0, x22
0044897c  bl       #0xc48840  ; <_Znwm>
00448980  orr      x9, x22, #1
00448984  stp      x25, x0, [sp, #0xf8]
00448988  and      w8, w9, #0xff
0044898c  str      x9, [sp, #0xf0]
00448990  add      x9, sp, #0xf0
00448994  ldr      x10, [x19, #0x448]  ; =0x151448
00448998  orr      x9, x9, #1
0044899c  tst      w8, #1
004489a0  csel     x0, x9, x0, eq
004489a4  tst      w24, #1
004489a8  csel     x1, x23, x10, eq
004489ac  mov      x2, x21
004489b0  add      x22, x0, x21
004489b4  bl       #0xc48970  ; <memmove>
004489b8  adrp     x9, #0x12f000
004489bc  add      x9, x9, #0x38a  ; "colorfix_input_2.dat"
004489c0  mov      w8, #0x642e
004489c4  strb     wzr, [x22, #0x14]
004489c8  movk     w8, #0x7461, lsl #16
004489cc  ldr      q0, [x9]
004489d0  ldr      x9, [x19, #0x138]  ; =0x151138
004489d4  str      w8, [x22, #0x10]
004489d8  str      q0, [x22]
004489dc  ldp      x12, x8, [x9, #0x10]
004489e0  ldr      x2, [x9, #0x30]  ; =0x12f030
004489e4  cmp      x12, x8
004489e8  b.eq     #0x448a08
004489ec  sub      x9, x8, x12
004489f0  sub      x9, x9, #8
004489f4  cmp      x9, #0x38
004489f8  b.hs     #0x448a10
004489fc  mov      w3, #1
00448a00  mov      x9, x12
00448a04  b        #0x448a70
00448a08  mov      w3, #1
00448a0c  b        #0x448a80
00448a10  lsr      x9, x9, #3
00448a14  add      x10, x9, #1  ; "Unable to free context, err : "
00448a18  and      x11, x10, #0x3ffffffffffffff8
00448a1c  movi     v0.4s, #1
00448a20  mov      x13, x11
00448a24  movi     v1.4s, #1
00448a28  add      x9, x12, x11, lsl #3
00448a2c  add      x12, x12, #0x20
00448a30  ldp      q3, q2, [x12, #-0x20]
00448a34  subs     x13, x13, #8
00448a38  ldp      q5, q4, [x12], #0x40
00448a3c  uzp1     v2.4s, v3.4s, v2.4s
00448a40  uzp1     v3.4s, v5.4s, v4.4s
00448a44  mul      v0.4s, v0.4s, v2.4s
00448a48  mul      v1.4s, v1.4s, v3.4s
00448a4c  b.ne     #0x448a30
00448a50  mul      v0.4s, v1.4s, v0.4s
00448a54  cmp      x10, x11
00448a58  ext      v1.16b, v0.16b, v0.16b, #8
00448a5c  mul      v0.2s, v0.2s, v1.2s
00448a60  mov      w12, v0.s[1]
00448a64  fmov     w13, s0
00448a68  mul      w3, w13, w12
00448a6c  b.eq     #0x448a80
00448a70  ldr      w10, [x9], #8  ; =0x12f008
00448a74  cmp      x9, x8
00448a78  mul      w3, w3, w10
00448a7c  b.ne     #0x448a70
00448a80  mov      w9, #0x6962
00448a84  mov      w8, #0xc
00448a88  movk     w9, #0x616e, lsl #16
00448a8c  mov      w10, #0x7972
00448a90  strb     wzr, [sp, #0xdf]
00448a94  strb     w8, [sp, #0xd8]
00448a98  stur     w9, [sp, #0xd9]
00448a9c  sturh    w10, [sp, #0xdd]
00448aa0  add      x1, sp, #0xf0
00448aa4  add      x4, sp, #0xd8
00448aa8  mov      w0, w20
00448aac  bl       #0x43b0c4
00448ab0  ldrb     w8, [sp, #0xd8]
00448ab4  tbz      w8, #0, #0x448ac0
00448ab8  ldr      x0, [sp, #0xe8]
00448abc  bl       #0xc48850  ; <_ZdlPv>
00448ac0  ldrb     w8, [sp, #0xf0]
00448ac4  tbz      w8, #0, #0x448ad0
00448ac8  ldr      x0, [sp, #0x100]
00448acc  bl       #0xc48850  ; <_ZdlPv>
00448ad0  ldrb     w24, [x19, #0x438]  ; =0x151438
00448ad4  ldr      x8, [x19, #0x440]  ; =0x151440
00448ad8  lsr      x9, x24, #1
00448adc  tst      w24, #1
00448ae0  csel     x21, x9, x8, eq
00448ae4  add      x25, x21, #0x13  ; " cv::RNG *)"
00448ae8  cmn      x25, #0x10
00448aec  b.hs     #0x448d50
00448af0  ldr      w20, [x19, #0x310]  ; =0x151310
00448af4  cmp      x25, #0x16
00448af8  b.hi     #0x448b18
00448afc  and      w8, w25, #0xff
00448b00  mov      x0, xzr
00448b04  lsl      w8, w8, #1
00448b08  stp      xzr, xzr, [sp, #0xc0]
00448b0c  str      xzr, [sp, #0xd0]
00448b10  strb     w8, [sp, #0xc0]
00448b14  b        #0x448b38
00448b18  orr      x8, x25, #0xf
00448b1c  add      x22, x8, #1  ; =0xc78001
00448b20  mov      x0, x22
00448b24  bl       #0xc48840  ; <_Znwm>
00448b28  orr      x9, x22, #1
00448b2c  stp      x25, x0, [sp, #0xc8]
00448b30  and      w8, w9, #0xff
00448b34  str      x9, [sp, #0xc0]
00448b38  add      x9, sp, #0xc0
00448b3c  ldr      x10, [x19, #0x448]  ; =0x151448
00448b40  orr      x9, x9, #1
00448b44  tst      w8, #1
00448b48  csel     x0, x9, x0, eq
00448b4c  tst      w24, #1
00448b50  csel     x1, x23, x10, eq
00448b54  mov      x2, x21
00448b58  add      x22, x0, x21
00448b5c  bl       #0xc48970  ; <memmove>
00448b60  adrp     x9, #0x133000
00448b64  add      x9, x9, #0xfee  ; "colorfix_output.dat"
00448b68  mov      w8, #0x642e
00448b6c  strb     wzr, [x22, #0x13]
00448b70  movk     w8, #0x7461, lsl #16
00448b74  ldr      q0, [x9]
00448b78  ldr      x9, [x19, #0x238]  ; =0x151238
00448b7c  stur     w8, [x22, #0xf]
00448b80  str      q0, [x22]
00448b84  ldp      x12, x8, [x9, #0x10]
00448b88  ldr      x2, [x9, #0x30]  ; =0x133030
00448b8c  cmp      x12, x8
00448b90  b.eq     #0x448bb0
00448b94  sub      x9, x8, x12
00448b98  sub      x9, x9, #8
00448b9c  cmp      x9, #0x38
00448ba0  b.hs     #0x448bb8
00448ba4  mov      w3, #1
00448ba8  mov      x9, x12
00448bac  b        #0x448c18
00448bb0  mov      w3, #1
00448bb4  b        #0x448c28
00448bb8  lsr      x9, x9, #3
00448bbc  add      x10, x9, #1  ; "H QZO[ QYP[ SYT[ SZU["
00448bc0  and      x11, x10, #0x3ffffffffffffff8
00448bc4  movi     v0.4s, #1
00448bc8  mov      x13, x11
00448bcc  movi     v1.4s, #1
00448bd0  add      x9, x12, x11, lsl #3
00448bd4  add      x12, x12, #0x20
00448bd8  ldp      q3, q2, [x12, #-0x20]
00448bdc  subs     x13, x13, #8
00448be0  ldp      q5, q4, [x12], #0x40
00448be4  uzp1     v2.4s, v3.4s, v2.4s
00448be8  uzp1     v3.4s, v5.4s, v4.4s
00448bec  mul      v0.4s, v0.4s, v2.4s
00448bf0  mul      v1.4s, v1.4s, v3.4s
00448bf4  b.ne     #0x448bd8
00448bf8  mul      v0.4s, v1.4s, v0.4s
00448bfc  cmp      x10, x11
00448c00  ext      v1.16b, v0.16b, v0.16b, #8
00448c04  mul      v0.2s, v0.2s, v1.2s
00448c08  mov      w12, v0.s[1]
00448c0c  fmov     w13, s0
00448c10  mul      w3, w13, w12
00448c14  b.eq     #0x448c28
00448c18  ldr      w10, [x9], #8  ; =0x133008
00448c1c  cmp      x9, x8
00448c20  mul      w3, w3, w10
00448c24  b.ne     #0x448c18
00448c28  mov      w9, #0x6962
00448c2c  mov      w8, #0xc
00448c30  movk     w9, #0x616e, lsl #16
00448c34  mov      w10, #0x7972
00448c38  strb     wzr, [sp, #0xaf]
00448c3c  strb     w8, [sp, #0xa8]
00448c40  stur     w9, [sp, #0xa9]
00448c44  sturh    w10, [sp, #0xad]
00448c48  add      x1, sp, #0xc0
00448c4c  add      x4, sp, #0xa8
00448c50  mov      w0, w20
00448c54  bl       #0x43b0c4
00448c58  ldrb     w8, [sp, #0xa8]
00448c5c  tbz      w8, #0, #0x448c68
00448c60  ldr      x0, [sp, #0xb8]
00448c64  bl       #0xc48850  ; <_ZdlPv>
00448c68  ldrb     w8, [sp, #0xc0]
00448c6c  tbz      w8, #0, #0x448c78
00448c70  ldr      x0, [sp, #0xd0]
00448c74  bl       #0xc48850  ; <_ZdlPv>
00448c78  mov      x0, x19
00448c7c  mov      w1, #2
00448c80  bl       #0x447074
00448c84  mov      w19, wzr
00448c88  add      x0, sp, #0x410
00448c8c  bl       #0x8e7b94
00448c90  add      x0, sp, #0x4b0
00448c94  bl       #0x8e7b94
00448c98  add      x0, sp, #0x5f0
00448c9c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00448ca0  add      x0, sp, #0x650
00448ca4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00448ca8  ldr      x0, [sp, #0x158]
00448cac  ldr      x24, [sp, #8]
00448cb0  cbz      x0, #0x448cb8
00448cb4  bl       #0xc48850  ; <_ZdlPv>
00448cb8  ldr      x8, [x24, #0x28]
00448cbc  ldur     x9, [x29, #-0x28]
00448cc0  cmp      x8, x9
00448cc4  b.ne     #0x449054
00448cc8  mov      w0, w19
00448ccc  add      sp, sp, #0x7d0
00448cd0  ldp      x20, x19, [sp, #0x60]
00448cd4  ldp      x22, x21, [sp, #0x50]
00448cd8  ldp      x24, x23, [sp, #0x40]
00448cdc  ldp      x26, x25, [sp, #0x30]
00448ce0  ldp      x28, x27, [sp, #0x20]
00448ce4  ldp      x29, x30, [sp, #0x10]
00448ce8  ldr      d8, [sp], #0x70
00448cec  ret      
00448cf0  ldr      x8, [sp, #8]
00448cf4  ldr      x8, [x8, #0x28]  ; =0xc78028
00448cf8  ldur     x9, [x29, #-0x28]
00448cfc  cmp      x8, x9
00448d00  b.ne     #0x449054
00448d04  add      x0, sp, #0x6b0
00448d08  bl       #0x439a30
00448d0c  ldr      x8, [sp, #8]
00448d10  ldr      x8, [x8, #0x28]  ; =0xc78028
00448d14  ldur     x9, [x29, #-0x28]
00448d18  cmp      x8, x9
00448d1c  b.ne     #0x449054
00448d20  ldr      x0, [sp, #0x68]
00448d24  bl       #0x439a30
00448d28  ldr      x8, [x24, #0x28]
00448d2c  ldur     x9, [x29, #-0x28]
00448d30  cmp      x8, x9
00448d34  b.ne     #0x449054
00448d38  add      x0, sp, #0x158
00448d3c  bl       #0x41dce4
00448d40  add      x0, sp, #0x120
00448d44  b        #0x448d54
00448d48  add      x0, sp, #0xf0
00448d4c  b        #0x448d54
00448d50  add      x0, sp, #0xc0
00448d54  ldr      x8, [sp, #8]
00448d58  ldr      x8, [x8, #0x28]  ; =0xc78028
00448d5c  ldur     x9, [x29, #-0x28]
00448d60  cmp      x8, x9
00448d64  b.ne     #0x449054
00448d68  bl       #0x438784
00448d6c  ldrb     w8, [sp, #0xa8]
00448d70  mov      x19, x0
00448d74  tbz      w8, #0, #0x448d80
00448d78  ldr      x0, [sp, #0xb8]
00448d7c  bl       #0xc48850  ; <_ZdlPv>
00448d80  ldrb     w8, [sp, #0xc0]
00448d84  tbz      w8, #0, #0x448dd0
00448d88  ldr      x0, [sp, #0xd0]
00448d8c  b        #0x448ddc
00448d90  ldrb     w8, [sp, #0xd8]
00448d94  mov      x19, x0
00448d98  tbz      w8, #0, #0x448da4
00448d9c  ldr      x0, [sp, #0xe8]
00448da0  bl       #0xc48850  ; <_ZdlPv>
00448da4  ldrb     w8, [sp, #0xf0]
00448da8  tbz      w8, #0, #0x448dd0
00448dac  ldr      x0, [sp, #0x100]
00448db0  b        #0x448ddc
00448db4  ldrb     w8, [sp, #0x108]
00448db8  mov      x19, x0
00448dbc  tbz      w8, #0, #0x448dc8
00448dc0  ldr      x0, [sp, #0x118]
00448dc4  bl       #0xc48850  ; <_ZdlPv>
00448dc8  ldrb     w8, [sp, #0x120]
00448dcc  tbnz     w8, #0, #0x448dd8
00448dd0  ldr      x24, [sp, #8]
00448dd4  b        #0x44900c
00448dd8  ldr      x0, [sp, #0x130]
00448ddc  bl       #0xc48850  ; <_ZdlPv>
00448de0  ldr      x24, [sp, #8]
00448de4  b        #0x44900c
00448de8  mov      x19, x0
00448dec  ldr      x24, [sp, #8]
00448df0  b        #0x449018
00448df4  mov      x19, x0
00448df8  b        #0x449020
00448dfc  mov      x19, x0
00448e00  add      x0, sp, #0x650
00448e04  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00448e08  b        #0x449034
00448e0c  mov      x19, x0
00448e10  b        #0x449034
00448e14  ldr      x8, [sp, #0x158]
00448e18  mov      x19, x0
00448e1c  cbz      x8, #0x448e2c
00448e20  mov      x0, x8
00448e24  str      x8, [sp, #0x160]
00448e28  bl       #0xc48850  ; <_ZdlPv>
00448e2c  mov      x0, x19
00448e30  bl       #0x41dcd4
00448e34  b        #0x448f68
00448e38  mov      x19, x0
00448e3c  add      x0, sp, #0x560
00448e40  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00448e44  b        #0x448e4c
00448e48  mov      x19, x0
00448e4c  add      x0, sp, #0x6b0
00448e50  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00448e54  b        #0x448fe0
00448e58  b        #0x448fdc
00448e5c  b        #0x448f68
00448e60  b        #0x448e78
00448e64  b        #0x448e68
00448e68  mov      x19, x0
00448e6c  add      x0, sp, #0x560
00448e70  bl       #0x43997c
00448e74  b        #0x448fe0
00448e78  mov      x19, x0
00448e7c  add      x0, sp, #0x560
00448e80  bl       #0x43997c
00448e84  add      x0, sp, #0x6b0
00448e88  bl       #0x4306e4
00448e8c  b        #0x448fe0
00448e90  b        #0x448fdc
00448e94  mov      x19, x0
00448e98  b        #0x448eac
00448e9c  mov      x19, x0
00448ea0  add      x0, sp, #0x560
00448ea4  bl       #0x4524c0
00448ea8  str      x20, [sp, #0x1a0]
00448eac  add      x0, sp, #0x180
00448eb0  bl       #0x452434
00448eb4  b        #0x448fa8
00448eb8  mov      x19, x0
00448ebc  b        #0x448ed0
00448ec0  mov      x19, x0
00448ec4  add      x0, sp, #0x560
00448ec8  bl       #0x4524c0
00448ecc  str      x20, [sp, #0x188]
00448ed0  add      x0, sp, #0x550
00448ed4  bl       #0x452434
00448ed8  b        #0x448f90
00448edc  ldr      x24, [sp, #8]
00448ee0  mov      x19, x0
00448ee4  b        #0x448ffc
00448ee8  mov      x19, x0
00448eec  b        #0x448f24
00448ef0  ldr      x24, [sp, #8]
00448ef4  mov      x19, x0
00448ef8  b        #0x448ff4
00448efc  mov      x19, x0
00448f00  b        #0x448f20
00448f04  mov      x19, x0
00448f08  b        #0x448fe8
00448f0c  ldr      x8, [x20]
00448f10  mov      x19, x0
00448f14  mov      x0, x20
00448f18  ldr      x8, [x8]
00448f1c  blr      x8
00448f20  str      x20, [sp, #0x568]
00448f24  add      x0, sp, #0x198
00448f28  bl       #0x45251c
00448f2c  b        #0x448f48
00448f30  mov      x19, x0
00448f34  add      x0, sp, #0x6b0
00448f38  b        #0x448fe4
00448f3c  mov      x19, x0
00448f40  add      x0, sp, #0x560
00448f44  bl       #0x449058
00448f48  add      x8, sp, #0x6b0
00448f4c  add      x0, x8, #0x70  ; =0xc78070
00448f50  bl       #0x8e7b94
00448f54  b        #0x448fc8
00448f58  mov      x19, x0
00448f5c  b        #0x448fe8
00448f60  b        #0x448fdc
00448f64  b        #0x448fc4
00448f68  ldr      x24, [sp, #8]
00448f6c  mov      x19, x0
00448f70  b        #0x44900c
00448f74  b        #0x448fdc
00448f78  ldr      x24, [sp, #8]
00448f7c  mov      x19, x0
00448f80  b        #0x449004
00448f84  mov      x19, x0
00448f88  add      x0, sp, #0x180
00448f8c  bl       #0x447704
00448f90  ldrb     w8, [sp, #0x5c0]
00448f94  tbz      w8, #0, #0x448fa0
00448f98  ldr      x0, [sp, #0x5d0]
00448f9c  bl       #0xc48850  ; <_ZdlPv>
00448fa0  add      x0, sp, #0x198
00448fa4  bl       #0x447704
00448fa8  ldrb     w8, [sp, #0x5d8]
00448fac  tbz      w8, #0, #0x448fb8
00448fb0  ldr      x0, [sp, #0x5e8]
00448fb4  bl       #0xc48850  ; <_ZdlPv>
00448fb8  add      x0, sp, #0x6b0
00448fbc  bl       #0x447780
00448fc0  b        #0x448fe0
00448fc4  mov      x19, x0
00448fc8  add      x0, sp, #0x6b0
00448fcc  bl       #0x8e7b94
00448fd0  b        #0x448fe0
00448fd4  b        #0x448fdc
00448fd8  b        #0x448fdc
00448fdc  mov      x19, x0
00448fe0  add      x0, sp, #0x1b0
00448fe4  bl       #0x8e7b94
00448fe8  add      x0, sp, #0x220
00448fec  ldr      x24, [sp, #8]
00448ff0  bl       #0x8e7b94
00448ff4  add      x0, sp, #0x290
00448ff8  bl       #0x8e7b94
00448ffc  add      x0, sp, #0x300
00449000  bl       #0x8e7b94
00449004  add      x0, sp, #0x370
00449008  bl       #0x8e7b94
0044900c  add      x0, sp, #0x410
00449010  bl       #0x8e7b94
00449014  ldr      x20, [sp, #0x158]
00449018  add      x0, sp, #0x4b0
0044901c  bl       #0x8e7b94
00449020  add      x0, sp, #0x5f0
00449024  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00449028  add      x0, sp, #0x650
0044902c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00449030  cbz      x20, #0x44903c
00449034  mov      x0, x20
00449038  bl       #0xc48850  ; <_ZdlPv>
0044903c  ldr      x8, [x24, #0x28]
00449040  ldur     x9, [x29, #-0x28]
00449044  cmp      x8, x9
00449048  b.ne     #0x449054
0044904c  mov      x0, x19
00449050  bl       #0xc44424
00449054  bl       #0xc48830  ; <__stack_chk_fail>
