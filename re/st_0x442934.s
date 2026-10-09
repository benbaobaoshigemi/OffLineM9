; function 0x442934 size 0xb9c 
00442934  stp      x29, x30, [sp, #-0x60]!
00442938  stp      x28, x27, [sp, #0x10]
0044293c  stp      x26, x25, [sp, #0x20]
00442940  stp      x24, x23, [sp, #0x30]
00442944  stp      x22, x21, [sp, #0x40]
00442948  stp      x20, x19, [sp, #0x50]
0044294c  mov      x29, sp
00442950  sub      sp, sp, #0x340
00442954  mrs      x8, tpidr_el0
00442958  mov      x21, x0
0044295c  str      x8, [sp, #0x38]
00442960  ldr      x8, [x8, #0x28]
00442964  stur     x8, [x29, #-0x18]
00442968  ldr      x8, [x0, #0x250]
0044296c  stp      xzr, xzr, [sp, #0x1f0]
00442970  ldr      x9, [x0, #0x248]
00442974  stp      xzr, xzr, [sp, #0x1e0]
00442978  stp      xzr, xzr, [sp, #0x1d0]
0044297c  cbz      x8, #0x4429c4
00442980  add      x10, x8, #8
00442984  mov      w11, #1
00442988  ldadd    x11, x10, [x10]
0044298c  ldr      x19, [sp, #0x1f8]
00442990  stp      x9, x8, [sp, #0x1f0]
00442994  cbz      x19, #0x4429c8
00442998  add      x8, x19, #8
0044299c  mov      x9, #-1
004429a0  ldaddal  x9, x8, [x8]
004429a4  cbnz     x8, #0x4429c8
004429a8  ldr      x8, [x19]
004429ac  mov      x0, x19
004429b0  ldr      x8, [x8, #0x10]
004429b4  blr      x8
004429b8  mov      x0, x19
004429bc  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
004429c0  b        #0x4429c8
004429c4  stp      x9, x8, [sp, #0x1f0]
004429c8  ldr      x8, [x21, #0x220]
004429cc  ldr      x9, [x21, #0x218]
004429d0  cbz      x8, #0x4429e0
004429d4  add      x10, x8, #8
004429d8  mov      w11, #1
004429dc  ldadd    x11, x10, [x10]
004429e0  ldr      x19, [sp, #0x1e8]
004429e4  stp      x9, x8, [sp, #0x1e0]
004429e8  cbz      x19, #0x442a14
004429ec  add      x8, x19, #8
004429f0  mov      x9, #-1
004429f4  ldaddal  x9, x8, [x8]
004429f8  cbnz     x8, #0x442a14
004429fc  ldr      x8, [x19]
00442a00  mov      x0, x19
00442a04  ldr      x8, [x8, #0x10]
00442a08  blr      x8
00442a0c  mov      x0, x19
00442a10  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00442a14  ldr      x8, [x21, #0x230]
00442a18  ldr      x9, [x21, #0x228]
00442a1c  cbz      x8, #0x442a2c
00442a20  add      x10, x8, #8
00442a24  mov      w11, #1
00442a28  ldadd    x11, x10, [x10]
00442a2c  ldr      x19, [sp, #0x1d8]
00442a30  stp      x9, x8, [sp, #0x1d0]
00442a34  cbz      x19, #0x442a48
00442a38  add      x8, x19, #8
00442a3c  mov      x9, #-1
00442a40  ldaddal  x9, x8, [x8]
00442a44  cbz      x8, #0x442ae8
00442a48  ldr      x28, [sp, #0x1f0]
00442a4c  stp      xzr, xzr, [sp, #0x1c0]
00442a50  str      xzr, [sp, #0x1b8]
00442a54  ldp      x22, x19, [x28, #0x10]
00442a58  subs     x20, x19, x22
00442a5c  b.eq     #0x442b18
00442a60  tbnz     x20, #0x3f, #0x4433fc
00442a64  mov      x0, x20
00442a68  bl       #0xc48840  ; <_Znwm>
00442a6c  asr      x8, x20, #3
00442a70  mov      x23, x0
00442a74  sub      x9, x20, #8
00442a78  str      x0, [sp, #0x1b8]
00442a7c  add      x8, x0, x8, lsl #3
00442a80  cmp      x9, #0x18
00442a84  str      x8, [sp, #0x1c8]
00442a88  b.lo     #0x442b3c
00442a8c  mov      x8, x23
00442a90  sub      x10, x23, x22
00442a94  cmp      x10, #0x20
00442a98  b.lo     #0x442b40
00442a9c  lsr      x8, x9, #3
00442aa0  add      x12, x23, #0x10
00442aa4  add      x9, x8, #1
00442aa8  add      x13, x22, #0x10
00442aac  and      x10, x9, #0x3ffffffffffffffc
00442ab0  lsl      x8, x10, #3
00442ab4  mov      x14, x10
00442ab8  add      x11, x22, x8
00442abc  add      x8, x23, x8
00442ac0  ldp      q0, q1, [x13, #-0x10]
00442ac4  add      x13, x13, #0x20
00442ac8  subs     x14, x14, #4
00442acc  stp      q0, q1, [x12, #-0x10]
00442ad0  add      x12, x12, #0x20
00442ad4  b.ne     #0x442ac0
00442ad8  mov      x22, x11
00442adc  cmp      x9, x10
00442ae0  b.ne     #0x442b40
00442ae4  b        #0x442b50
00442ae8  ldr      x8, [x19]
00442aec  mov      x0, x19
00442af0  ldr      x8, [x8, #0x10]
00442af4  blr      x8
00442af8  mov      x0, x19
00442afc  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00442b00  ldr      x28, [sp, #0x1f0]
00442b04  stp      xzr, xzr, [sp, #0x1c0]
00442b08  str      xzr, [sp, #0x1b8]
00442b0c  ldp      x22, x19, [x28, #0x10]
00442b10  subs     x20, x19, x22
00442b14  b.ne     #0x442a60
00442b18  mov      x23, xzr
00442b1c  ldr      x27, [sp, #0x1e0]
00442b20  stp      xzr, xzr, [sp, #0x1a8]
00442b24  str      xzr, [sp, #0x1a0]
00442b28  ldp      x20, x19, [x27, #0x10]
00442b2c  subs     x22, x19, x20
00442b30  b.ne     #0x442b6c
00442b34  mov      x15, xzr
00442b38  b        #0x442c10
00442b3c  mov      x8, x23
00442b40  ldr      x9, [x22], #8
00442b44  cmp      x22, x19
00442b48  str      x9, [x8], #8
00442b4c  b.ne     #0x442b40
00442b50  str      x8, [sp, #0x1c0]
00442b54  ldr      x27, [sp, #0x1e0]
00442b58  stp      xzr, xzr, [sp, #0x1a8]
00442b5c  str      xzr, [sp, #0x1a0]
00442b60  ldp      x20, x19, [x27, #0x10]
00442b64  subs     x22, x19, x20
00442b68  b.eq     #0x442b34
00442b6c  tbnz     x22, #0x3f, #0x443418
00442b70  mov      x0, x22
00442b74  bl       #0xc48840  ; <_Znwm>
00442b78  asr      x8, x22, #3
00442b7c  sub      x9, x22, #8
00442b80  mov      x15, x0
00442b84  cmp      x9, #0x18
00442b88  add      x8, x0, x8, lsl #3
00442b8c  str      x0, [sp, #0x1a0]
00442b90  str      x8, [sp, #0x1b0]
00442b94  b.lo     #0x442bf8
00442b98  mov      x8, x0
00442b9c  sub      x10, x0, x20
00442ba0  cmp      x10, #0x20
00442ba4  b.lo     #0x442bfc
00442ba8  lsr      x8, x9, #3
00442bac  mov      x12, x15
00442bb0  add      x9, x8, #1
00442bb4  add      x12, x15, #0x10
00442bb8  and      x10, x9, #0x3ffffffffffffffc
00442bbc  add      x13, x20, #0x10
00442bc0  lsl      x8, x10, #3
00442bc4  mov      x14, x10
00442bc8  add      x11, x20, x8
00442bcc  add      x8, x15, x8
00442bd0  ldp      q0, q1, [x13, #-0x10]
00442bd4  add      x13, x13, #0x20
00442bd8  subs     x14, x14, #4
00442bdc  stp      q0, q1, [x12, #-0x10]
00442be0  add      x12, x12, #0x20
00442be4  b.ne     #0x442bd0
00442be8  mov      x20, x11
00442bec  cmp      x9, x10
00442bf0  b.ne     #0x442bfc
00442bf4  b        #0x442c0c
00442bf8  mov      x8, x0
00442bfc  ldr      x9, [x20], #8
00442c00  cmp      x20, x19
00442c04  str      x9, [x8], #8
00442c08  b.ne     #0x442bfc
00442c0c  str      x8, [sp, #0x1a8]
00442c10  ldr      x20, [x23, #8]
00442c14  stp      x15, x23, [sp, #0x40]
00442c18  ldp      x23, x24, [x23, #0x10]
00442c1c  ldr      w8, [x21, #0x340]
00442c20  ldr      w9, [x21, #0x344]
00442c24  ldr      w22, [x15, #0x18]
00442c28  stur     w23, [x29, #-0x1c]
00442c2c  ldr      w19, [x15, #8]
00442c30  stp      w24, w20, [x29, #-0x24]
00442c34  ldr      w10, [x15, #0x10]
00442c38  cmp      w8, w9
00442c3c  stp      w22, w19, [x29, #-0x30]
00442c40  stur     w10, [x29, #-0x28]
00442c44  stp      w22, w19, [x29, #-0x3c]
00442c48  str      w10, [sp, #0x1c]
00442c4c  stur     w10, [x29, #-0x34]
00442c50  b.ne     #0x442c5c
00442c54  mov      x25, xzr
00442c58  b        #0x442c64
00442c5c  sub      x25, x29, #0x3c
00442c60  stur     w8, [x29, #-0x28]
00442c64  ldr      x8, [sp, #0x1d0]
00442c68  ldr      x10, [x28, #0x30]
00442c6c  ldr      x9, [x27, #0x30]
00442c70  str      x8, [sp, #8]
00442c74  ldr      x8, [x8, #0x30]
00442c78  stp      x9, x10, [sp, #0x28]
00442c7c  str      x8, [sp, #0x10]
00442c80  adrp     x0, #0x151000
00442c84  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442c88  mov      w1, #0x2f
00442c8c  mov      w2, #0x4a
00442c90  bl       #0xc48800  ; <__strrchr_chk>
00442c94  cbz      x0, #0x442cb4
00442c98  adrp     x0, #0x151000
00442c9c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442ca0  mov      w1, #0x2f
00442ca4  mov      w2, #0x4a
00442ca8  bl       #0xc48800  ; <__strrchr_chk>
00442cac  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00442cb0  b        #0x442cbc
00442cb4  adrp     x3, #0x151000
00442cb8  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442cbc  adrp     x26, #0x11b000
00442cc0  add      x26, x26, #0xf8e  ; "[%s:%d] rgb_convert_yuv run.
"
00442cc4  adrp     x0, #0x177000
00442cc8  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00442ccc  mov      w1, #2
00442cd0  mov      x2, x26
00442cd4  mov      w4, #0x253
00442cd8  bl       #0x484908
00442cdc  ldr      q0, [x26]
00442ce0  add      x8, sp, #0x200
00442ce4  ldur     q1, [x26, #0xe]
00442ce8  str      x25, [sp, #0x20]
00442cec  str      q0, [sp, #0x200]
00442cf0  stur     q1, [x8, #0xe]
00442cf4  mov      x0, x26
00442cf8  mov      w1, #0x1e
00442cfc  bl       #0xc48820  ; <__strlen_chk>
00442d00  adrp     x9, #0xc78000
00442d04  add      x8, sp, #0x200
00442d08  add      x8, x0, x8
00442d0c  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00442d10  sturb    wzr, [x8, #-1]
00442d14  ldr      x26, [x9]
00442d18  adrp     x0, #0x151000
00442d1c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442d20  mov      w1, #0x2f
00442d24  mov      w2, #0x4a
00442d28  bl       #0xc48800  ; <__strrchr_chk>
00442d2c  cbz      x0, #0x442d4c
00442d30  adrp     x0, #0x151000
00442d34  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442d38  mov      w1, #0x2f
00442d3c  mov      w2, #0x4a
00442d40  bl       #0xc48800  ; <__strrchr_chk>
00442d44  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00442d48  b        #0x442d54
00442d4c  adrp     x3, #0x151000
00442d50  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442d54  adrp     x1, #0x177000
00442d58  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00442d5c  add      x2, sp, #0x200
00442d60  mov      w0, #2
00442d64  mov      w4, #0x253
00442d68  mov      w25, #2
00442d6c  blr      x26
00442d70  mul      w8, w20, w23
00442d74  ldr      x9, [x28, #0x38]
00442d78  str      w25, [sp, #0x68]
00442d7c  mul      w8, w8, w24
00442d80  str      w9, [sp, #0x7c]
00442d84  sxtw     x20, w8
00442d88  str      x20, [sp, #0x70]
00442d8c  ldp      x26, x23, [sp, #0x40]
00442d90  add      x0, sp, #0x140
00442d94  sub      x2, x29, #0x24
00442d98  mov      w1, #3
00442d9c  mov      w3, wzr
00442da0  mov      x4, xzr
00442da4  mov      w5, #1
00442da8  ldr      x6, [sp, #0x30]
00442dac  bl       #0x48d618
00442db0  mov      w25, w0
00442db4  cbz      w0, #0x442dec
00442db8  adrp     x0, #0x151000
00442dbc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442dc0  mov      w1, #0x2f
00442dc4  mov      w2, #0x4a
00442dc8  bl       #0xc48800  ; <__strrchr_chk>
00442dcc  cbz      x0, #0x442e6c
00442dd0  adrp     x0, #0x151000
00442dd4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442dd8  mov      w1, #0x2f
00442ddc  mov      w2, #0x4a
00442de0  bl       #0xc48800  ; <__strrchr_chk>
00442de4  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00442de8  b        #0x442e74
00442dec  add      x0, sp, #0x140
00442df0  add      x1, sp, #0x68
00442df4  mov      w2, #1
00442df8  bl       #0x48e2c8
00442dfc  ldr      x8, [x27, #0x38]
00442e00  mov      w9, #2
00442e04  str      x20, [sp, #0x58]
00442e08  str      w8, [sp, #0x64]
00442e0c  str      w9, [sp, #0x50]
00442e10  ldp      x20, x6, [sp, #0x20]
00442e14  add      x0, sp, #0xe0
00442e18  sub      x2, x29, #0x30
00442e1c  mov      w1, #3
00442e20  mov      w3, wzr
00442e24  mov      w5, #1
00442e28  mov      x4, x20
00442e2c  bl       #0x48d618
00442e30  mov      w24, w0
00442e34  cbz      w0, #0x442f34
00442e38  adrp     x0, #0x151000
00442e3c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442e40  mov      w1, #0x2f
00442e44  mov      w2, #0x4a
00442e48  bl       #0xc48800  ; <__strrchr_chk>
00442e4c  cbz      x0, #0x44300c
00442e50  adrp     x0, #0x151000
00442e54  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442e58  mov      w1, #0x2f
00442e5c  mov      w2, #0x4a
00442e60  bl       #0xc48800  ; <__strrchr_chk>
00442e64  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00442e68  b        #0x443014
00442e6c  adrp     x3, #0x151000
00442e70  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442e74  adrp     x21, #0x11f000
00442e78  add      x21, x21, #0x808  ; "[%s:%d] convert input MialgoInitMat src_y error %d
"
00442e7c  adrp     x0, #0x177000
00442e80  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00442e84  mov      w1, #1
00442e88  mov      x2, x21
00442e8c  mov      w4, #0x25e
00442e90  mov      w5, w25
00442e94  bl       #0x484908
00442e98  ldp      q0, q1, [x21]
00442e9c  mov      w8, #0x6425
00442ea0  movk     w8, #0xa, lsl #16
00442ea4  str      w8, [sp, #0x230]
00442ea8  ldr      q2, [x21, #0x20]  ; =0x11f020
00442eac  stp      q0, q1, [sp, #0x200]
00442eb0  str      q2, [sp, #0x220]
00442eb4  mov      x0, x21
00442eb8  mov      w1, #0x34
00442ebc  bl       #0xc48820  ; <__strlen_chk>
00442ec0  adrp     x9, #0xc78000
00442ec4  add      x8, sp, #0x200
00442ec8  add      x8, x0, x8
00442ecc  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00442ed0  sturb    wzr, [x8, #-1]
00442ed4  ldr      x19, [x9]
00442ed8  adrp     x0, #0x151000
00442edc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442ee0  mov      w1, #0x2f
00442ee4  mov      w2, #0x4a
00442ee8  bl       #0xc48800  ; <__strrchr_chk>
00442eec  cbz      x0, #0x442f0c
00442ef0  adrp     x0, #0x151000
00442ef4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442ef8  mov      w1, #0x2f
00442efc  mov      w2, #0x4a
00442f00  bl       #0xc48800  ; <__strrchr_chk>
00442f04  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00442f08  b        #0x442f14
00442f0c  adrp     x3, #0x151000
00442f10  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442f14  adrp     x1, #0x177000
00442f18  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00442f1c  add      x2, sp, #0x200
00442f20  mov      w0, #1
00442f24  mov      w4, #0x25e
00442f28  mov      w5, w25
00442f2c  blr      x19
00442f30  b        #0x4430d0
00442f34  add      x0, sp, #0xe0
00442f38  add      x1, sp, #0x50
00442f3c  mov      w2, #1
00442f40  bl       #0x48e2c8
00442f44  mul      w8, w22, w19
00442f48  ldur     w9, [x29, #-0x2c]
00442f4c  ldr      w13, [sp, #0x1c]
00442f50  mov      w11, #2
00442f54  cmp      w8, #0
00442f58  ldr      x10, [sp, #8]
00442f5c  cinc     w8, w8, lt
00442f60  cmp      w9, #0
00442f64  asr      w8, w8, #1
00442f68  ldr      w12, [x21, #0x340]  ; =0x11f340
00442f6c  cinc     w9, w9, lt
00442f70  ldr      x10, [x10, #0x38]
00442f74  mul      w8, w8, w13
00442f78  ldr      w13, [x21, #0x344]  ; =0x11f344
00442f7c  asr      w9, w9, #1
00442f80  str      w11, [sp, #0x50]
00442f84  sxtw     x8, w8
00442f88  str      w10, [sp, #0x64]
00442f8c  cmp      w12, w13
00442f90  stur     w9, [x29, #-0x2c]
00442f94  str      x8, [sp, #0x58]
00442f98  b.eq     #0x442fb0
00442f9c  ldr      w8, [x20, #4]
00442fa0  cmp      w8, #0
00442fa4  cinc     w8, w8, lt
00442fa8  asr      w8, w8, #1
00442fac  str      w8, [x20, #4]
00442fb0  add      x0, sp, #0x80
00442fb4  sub      x2, x29, #0x30
00442fb8  mov      w1, #3
00442fbc  mov      w3, wzr
00442fc0  mov      x4, x20
00442fc4  mov      w5, #1
00442fc8  ldr      x6, [sp, #0x10]
00442fcc  bl       #0x48d618
00442fd0  mov      w22, w0
00442fd4  cbz      w0, #0x4430f4
00442fd8  adrp     x0, #0x151000
00442fdc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442fe0  mov      w1, #0x2f
00442fe4  mov      w2, #0x4a
00442fe8  bl       #0xc48800  ; <__strrchr_chk>
00442fec  cbz      x0, #0x443178
00442ff0  adrp     x0, #0x151000
00442ff4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442ff8  mov      w1, #0x2f
00442ffc  mov      w2, #0x4a
00443000  bl       #0xc48800  ; <__strrchr_chk>
00443004  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00443008  b        #0x443180
0044300c  adrp     x3, #0x151000
00443010  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443014  adrp     x21, #0x13e000
00443018  add      x21, x21, #0xc3b  ; "[%s:%d] convert input MialgoInitMat src_uv error %d
"
0044301c  adrp     x0, #0x177000
00443020  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00443024  mov      w1, #1
00443028  mov      x2, x21
0044302c  mov      w4, #0x26b
00443030  mov      w5, w24
00443034  bl       #0x484908
00443038  ldp      q0, q1, [x21]
0044303c  add      x9, sp, #0x200
00443040  ldr      q2, [x21, #0x20]  ; =0x13e020
00443044  stp      q0, q1, [sp, #0x200]
00443048  ldur     x8, [x21, #0x2d]
0044304c  str      q2, [sp, #0x220]
00443050  stur     x8, [x9, #0x2d]
00443054  mov      x0, x21
00443058  mov      w1, #0x35
0044305c  bl       #0xc48820  ; <__strlen_chk>
00443060  adrp     x9, #0xc78000
00443064  add      x8, sp, #0x200
00443068  add      x8, x0, x8
0044306c  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00443070  sturb    wzr, [x8, #-1]
00443074  ldr      x19, [x9]
00443078  adrp     x0, #0x151000
0044307c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443080  mov      w1, #0x2f
00443084  mov      w2, #0x4a
00443088  bl       #0xc48800  ; <__strrchr_chk>
0044308c  cbz      x0, #0x4430ac
00443090  adrp     x0, #0x151000
00443094  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443098  mov      w1, #0x2f
0044309c  mov      w2, #0x4a
004430a0  bl       #0xc48800  ; <__strrchr_chk>
004430a4  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004430a8  b        #0x4430b4
004430ac  adrp     x3, #0x151000
004430b0  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004430b4  adrp     x1, #0x177000
004430b8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004430bc  add      x2, sp, #0x200
004430c0  mov      w0, #1
004430c4  mov      w4, #0x26b
004430c8  mov      w5, w24
004430cc  blr      x19
004430d0  mov      w21, #0x6521
004430d4  movk     w21, #0x11, lsl #16
004430d8  mov      x0, x26
004430dc  bl       #0xc48850  ; <_ZdlPv>
004430e0  mov      x0, x23
004430e4  bl       #0xc48850  ; <_ZdlPv>
004430e8  ldr      x19, [sp, #0x1d8]
004430ec  cbnz     x19, #0x443258
004430f0  b        #0x443280
004430f4  add      x0, sp, #0x80
004430f8  add      x1, sp, #0x50
004430fc  mov      w2, #1
00443100  bl       #0x48e2c8
00443104  ldr      w8, [x21, #0x338]  ; =0x13e338
00443108  cmp      w8, #1
0044310c  mov      w8, #0x192
00443110  cinc     w3, w8, eq
00443114  add      x0, sp, #0x140
00443118  add      x1, sp, #0xe0
0044311c  add      x2, sp, #0x80
00443120  mov      w4, #2
00443124  mov      x5, xzr
00443128  bl       #0x4dc26c
0044312c  mov      w21, w0
00443130  cbz      w0, #0x443240
00443134  mov      w0, w21
00443138  mov      x1, xzr
0044313c  mov      w2, wzr
00443140  bl       #0x48448c
00443144  adrp     x0, #0x151000
00443148  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044314c  mov      w1, #0x2f
00443150  mov      w2, #0x4a
00443154  bl       #0xc48800  ; <__strrchr_chk>
00443158  cbz      x0, #0x443318
0044315c  adrp     x0, #0x151000
00443160  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443164  mov      w1, #0x2f
00443168  mov      w2, #0x4a
0044316c  bl       #0xc48800  ; <__strrchr_chk>
00443170  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00443174  b        #0x443320
00443178  adrp     x3, #0x151000
0044317c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443180  adrp     x21, #0x163000
00443184  add      x21, x21, #0x656  ; "[%s:%d] convert input MialgoInitMat dst error %d
"
00443188  adrp     x0, #0x177000
0044318c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00443190  mov      w1, #1
00443194  mov      x2, x21
00443198  mov      w4, #0x27b
0044319c  mov      w5, w22
004431a0  bl       #0x484908
004431a4  ldp      q0, q1, [x21]
004431a8  mov      w8, #0xa
004431ac  strh     w8, [sp, #0x230]
004431b0  ldr      q2, [x21, #0x20]  ; =0x163020
004431b4  stp      q0, q1, [sp, #0x200]
004431b8  str      q2, [sp, #0x220]
004431bc  mov      x0, x21
004431c0  mov      w1, #0x32
004431c4  bl       #0xc48820  ; <__strlen_chk>
004431c8  adrp     x9, #0xc78000
004431cc  add      x8, sp, #0x200
004431d0  add      x8, x0, x8
004431d4  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
004431d8  sturb    wzr, [x8, #-1]
004431dc  ldr      x19, [x9]
004431e0  adrp     x0, #0x151000
004431e4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004431e8  mov      w1, #0x2f
004431ec  mov      w2, #0x4a
004431f0  bl       #0xc48800  ; <__strrchr_chk>
004431f4  cbz      x0, #0x443214
004431f8  adrp     x0, #0x151000
004431fc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443200  mov      w1, #0x2f
00443204  mov      w2, #0x4a
00443208  bl       #0xc48800  ; <__strrchr_chk>
0044320c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00443210  b        #0x44321c
00443214  adrp     x3, #0x151000
00443218  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044321c  adrp     x1, #0x177000
00443220  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00443224  add      x2, sp, #0x200
00443228  mov      w0, #1
0044322c  mov      w4, #0x27b
00443230  mov      w5, w22
00443234  blr      x19
00443238  mov      w21, #0x6521
0044323c  movk     w21, #0x11, lsl #16
00443240  mov      x0, x26
00443244  bl       #0xc48850  ; <_ZdlPv>
00443248  mov      x0, x23
0044324c  bl       #0xc48850  ; <_ZdlPv>
00443250  ldr      x19, [sp, #0x1d8]
00443254  cbz      x19, #0x443280
00443258  add      x8, x19, #8
0044325c  mov      x9, #-1
00443260  ldaddal  x9, x8, [x8]
00443264  cbnz     x8, #0x443280
00443268  ldr      x8, [x19]
0044326c  mov      x0, x19
00443270  ldr      x8, [x8, #0x10]
00443274  blr      x8
00443278  mov      x0, x19
0044327c  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00443280  ldr      x19, [sp, #0x1e8]
00443284  cbz      x19, #0x4432b0
00443288  add      x8, x19, #8
0044328c  mov      x9, #-1
00443290  ldaddal  x9, x8, [x8]
00443294  cbnz     x8, #0x4432b0
00443298  ldr      x8, [x19]
0044329c  mov      x0, x19
004432a0  ldr      x8, [x8, #0x10]
004432a4  blr      x8
004432a8  mov      x0, x19
004432ac  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
004432b0  ldr      x19, [sp, #0x1f8]
004432b4  cbz      x19, #0x4432e0
004432b8  add      x8, x19, #8
004432bc  mov      x9, #-1
004432c0  ldaddal  x9, x8, [x8]
004432c4  cbnz     x8, #0x4432e0
004432c8  ldr      x8, [x19]
004432cc  mov      x0, x19
004432d0  ldr      x8, [x8, #0x10]
004432d4  blr      x8
004432d8  mov      x0, x19
004432dc  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
004432e0  ldr      x8, [sp, #0x38]
004432e4  ldr      x8, [x8, #0x28]
004432e8  ldur     x9, [x29, #-0x18]
004432ec  cmp      x8, x9
004432f0  b.ne     #0x4434cc
004432f4  mov      w0, w21
004432f8  add      sp, sp, #0x340
004432fc  ldp      x20, x19, [sp, #0x50]
00443300  ldp      x22, x21, [sp, #0x40]
00443304  ldp      x24, x23, [sp, #0x30]
00443308  ldp      x26, x25, [sp, #0x20]
0044330c  ldp      x28, x27, [sp, #0x10]
00443310  ldp      x29, x30, [sp], #0x60
00443314  ret      
00443318  adrp     x3, #0x151000
0044331c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443320  adrp     x22, #0x139000
00443324  add      x22, x22, #0x62e  ; "[%s:%d] MialgoCvtcolorRGBToYUVImpl  error %d
"
00443328  adrp     x0, #0x177000
0044332c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00443330  mov      w1, #1
00443334  mov      x2, x22
00443338  mov      w4, #0x28f
0044333c  mov      w5, w21
00443340  bl       #0x484908
00443344  ldp      q0, q1, [x22]
00443348  add      x8, sp, #0x200
0044334c  ldur     q2, [x22, #0x1e]
00443350  stp      q0, q1, [sp, #0x200]
00443354  stur     q2, [x8, #0x1e]
00443358  mov      x0, x22
0044335c  mov      w1, #0x2e
00443360  bl       #0xc48820  ; <__strlen_chk>
00443364  adrp     x9, #0xc78000
00443368  add      x8, sp, #0x200
0044336c  add      x8, x0, x8
00443370  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00443374  sturb    wzr, [x8, #-1]
00443378  ldr      x19, [x9]
0044337c  adrp     x0, #0x151000
00443380  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443384  mov      w1, #0x2f
00443388  mov      w2, #0x4a
0044338c  bl       #0xc48800  ; <__strrchr_chk>
00443390  cbz      x0, #0x4433b0
00443394  adrp     x0, #0x151000
00443398  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044339c  mov      w1, #0x2f
004433a0  mov      w2, #0x4a
004433a4  bl       #0xc48800  ; <__strrchr_chk>
004433a8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004433ac  b        #0x4433b8
004433b0  adrp     x3, #0x151000
004433b4  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004433b8  adrp     x1, #0x177000
004433bc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004433c0  add      x2, sp, #0x200
004433c4  mov      w0, #1
004433c8  mov      w4, #0x28f
004433cc  mov      w5, w21
004433d0  blr      x19
004433d4  mov      w8, #0x6521
004433d8  movk     w8, #0x11, lsl #16
004433dc  add      w21, w8, #7
004433e0  mov      x0, x26
004433e4  bl       #0xc48850  ; <_ZdlPv>
004433e8  mov      x0, x23
004433ec  bl       #0xc48850  ; <_ZdlPv>
004433f0  ldr      x19, [sp, #0x1d8]
004433f4  cbnz     x19, #0x443258
004433f8  b        #0x443280
004433fc  ldr      x8, [sp, #0x38]
00443400  ldr      x8, [x8, #0x28]
00443404  ldur     x9, [x29, #-0x18]
00443408  cmp      x8, x9
0044340c  b.ne     #0x4434cc
00443410  add      x0, sp, #0x1b8
00443414  bl       #0x41dce4
00443418  ldr      x8, [sp, #0x38]
0044341c  ldr      x8, [x8, #0x28]
00443420  ldur     x9, [x29, #-0x18]
00443424  cmp      x8, x9
00443428  b.ne     #0x4434cc
0044342c  add      x0, sp, #0x1a0
00443430  bl       #0x41dce4
00443434  b        #0x443484
00443438  b        #0x443484
0044343c  b        #0x443484
00443440  ldr      x8, [sp, #0x1a0]
00443444  mov      x19, x0
00443448  cbz      x8, #0x44346c
0044344c  str      x8, [sp, #0x1a8]
00443450  b        #0x443464
00443454  ldr      x8, [sp, #0x1b8]
00443458  mov      x19, x0
0044345c  cbz      x8, #0x44346c
00443460  str      x8, [sp, #0x1c0]
00443464  mov      x0, x8
00443468  bl       #0xc48850  ; <_ZdlPv>
0044346c  mov      x0, x19
00443470  bl       #0x41dcd4
00443474  b        #0x443484
00443478  b        #0x443484
0044347c  b        #0x443484
00443480  b        #0x443484
00443484  mov      x21, x0
00443488  ldr      x0, [sp, #0x40]
0044348c  bl       #0xc48850  ; <_ZdlPv>
00443490  ldr      x0, [sp, #0x48]
00443494  bl       #0xc48850  ; <_ZdlPv>
00443498  add      x0, sp, #0x1d0
0044349c  bl       #0x423b48
004434a0  add      x0, sp, #0x1e0
004434a4  bl       #0x423b48
004434a8  add      x0, sp, #0x1f0
004434ac  bl       #0x423b48
004434b0  ldr      x8, [sp, #0x38]
004434b4  ldr      x8, [x8, #0x28]
004434b8  ldur     x9, [x29, #-0x18]
004434bc  cmp      x8, x9
004434c0  b.ne     #0x4434cc
004434c4  mov      x0, x21
004434c8  bl       #0xc44424
004434cc  bl       #0xc48830  ; <__stack_chk_fail>
