; function 0x443758 size 0xe58 
00443758  stp      x29, x30, [sp, #-0x60]!
0044375c  stp      x28, x27, [sp, #0x10]
00443760  stp      x26, x25, [sp, #0x20]
00443764  stp      x24, x23, [sp, #0x30]
00443768  stp      x22, x21, [sp, #0x40]
0044376c  stp      x20, x19, [sp, #0x50]
00443770  mov      x29, sp
00443774  sub      sp, sp, #0x3b0
00443778  mrs      x8, tpidr_el0
0044377c  mov      w22, w1
00443780  str      x8, [sp, #0x38]
00443784  mov      x21, x0
00443788  ldr      x8, [x8, #0x28]
0044378c  cmp      w1, #3
00443790  stur     x8, [x29, #-0x18]
00443794  stp      xzr, xzr, [sp, #0x140]
00443798  stp      xzr, xzr, [sp, #0x130]
0044379c  b.eq     #0x443954
004437a0  cmp      w22, #2
004437a4  b.eq     #0x443888
004437a8  mov      x28, xzr
004437ac  cmp      w22, #1
004437b0  b.ne     #0x443b5c
004437b4  ldr      x8, [x21, #0x2b8]
004437b8  ldr      x9, [x21, #0x1f8]
004437bc  ldr      w19, [x8, #8]
004437c0  ldr      x20, [x8]
004437c4  ldr      x4, [x9, #0x30]
004437c8  add      x0, sp, #0x150
004437cc  mov      w1, #0xc00
004437d0  mov      w2, #0x1000
004437d4  mov      w3, #0x10
004437d8  mov      x5, xzr
004437dc  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
004437e0  ldr      x8, [x21, #0x2b8]
004437e4  ldr      x9, [x21, #0xe8]
004437e8  ldr      w1, [x8]
004437ec  ldr      w2, [x8, #8]
004437f0  ldr      x4, [x9, #0x30]
004437f4  sub      x0, x29, #0x78
004437f8  mov      w3, #0x10
004437fc  mov      x5, xzr
00443800  sub      x22, x29, #0x78
00443804  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00443808  mov      w8, #0x1010000
0044380c  add      x9, sp, #0x150
00443810  mov      w10, #0x2010000
00443814  orr      x2, x19, x20, lsl #32
00443818  stp      x22, xzr, [sp, #0x120]
0044381c  stp      x9, xzr, [sp, #0x78]
00443820  str      w8, [sp, #0x70]
00443824  str      w10, [sp, #0x118]
00443828  movi     d0, #0000000000000000
0044382c  movi     d1, #0000000000000000
00443830  add      x0, sp, #0x70
00443834  add      x1, sp, #0x118
00443838  mov      w3, #3
0044383c  bl       #0xc48be0  ; <_ZN2cv6resizeERKNS_11_InputArrayERKNS_12_OutputArrayENS_5Size_IiEEddi>
00443840  ldrb     w23, [x21, #0x438]
00443844  ldr      x8, [x21, #0x440]
00443848  lsr      x9, x23, #1
0044384c  tst      w23, #1
00443850  csel     x20, x9, x8, eq
00443854  add      x24, x20, #0x14
00443858  cmn      x24, #0x10
0044385c  b.hs     #0x444470
00443860  ldr      w19, [x21, #0x310]
00443864  cmp      x24, #0x16
00443868  b.hi     #0x443a44
0044386c  and      w8, w24, #0xff
00443870  mov      x0, xzr
00443874  lsl      w8, w8, #1
00443878  stp      xzr, xzr, [sp, #0x100]
0044387c  str      xzr, [sp, #0x110]
00443880  strb     w8, [sp, #0x100]
00443884  b        #0x443a64
00443888  ldr      x8, [x21, #0x2b8]
0044388c  ldr      x9, [x21, #0x108]
00443890  ldr      w1, [x8]
00443894  ldr      w2, [x8, #8]
00443898  ldr      x4, [x9, #0x30]
0044389c  add      x0, sp, #0x150
004438a0  mov      w3, #0x10
004438a4  mov      x5, xzr
004438a8  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
004438ac  ldr      x8, [x21, #0x138]
004438b0  ldr      x4, [x8, #0x30]
004438b4  sub      x0, x29, #0x78
004438b8  mov      w1, #0xc00
004438bc  mov      w2, #0x1000
004438c0  mov      w3, #0x10
004438c4  mov      x5, xzr
004438c8  sub      x19, x29, #0x78
004438cc  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
004438d0  mov      w8, #0x1010000
004438d4  add      x9, sp, #0x150
004438d8  mov      w10, #0x2010000
004438dc  stp      x19, xzr, [sp, #0x120]
004438e0  stp      x9, xzr, [sp, #0x78]
004438e4  str      w8, [sp, #0x70]
004438e8  str      w10, [sp, #0x118]
004438ec  movi     d0, #0000000000000000
004438f0  movi     d1, #0000000000000000
004438f4  mov      x2, #0x1000
004438f8  add      x0, sp, #0x70
004438fc  add      x1, sp, #0x118
00443900  movk     x2, #0xc00, lsl #32
00443904  mov      w3, #3
00443908  bl       #0xc48be0  ; <_ZN2cv6resizeERKNS_11_InputArrayERKNS_12_OutputArrayENS_5Size_IiEEddi>
0044390c  ldrb     w23, [x21, #0x438]
00443910  ldr      x8, [x21, #0x440]
00443914  lsr      x9, x23, #1
00443918  tst      w23, #1
0044391c  csel     x20, x9, x8, eq
00443920  add      x24, x20, #0x17
00443924  cmn      x24, #0x10
00443928  b.hs     #0x444454
0044392c  ldr      w19, [x21, #0x310]
00443930  cmn      x20, #0x17
00443934  b.lo     #0x4439a0
00443938  and      w8, w24, #0xff
0044393c  mov      x0, xzr
00443940  lsl      w8, w8, #1
00443944  stp      xzr, xzr, [sp, #0xe8]
00443948  str      xzr, [sp, #0xf8]
0044394c  strb     w8, [sp, #0xe8]
00443950  b        #0x4439c0
00443954  ldp      x9, x8, [x21, #0x1f8]
00443958  cbz      x8, #0x443b04
0044395c  add      x10, x8, #8
00443960  mov      w11, #1
00443964  ldadd    x11, x10, [x10]
00443968  ldr      x19, [sp, #0x148]
0044396c  stp      x9, x8, [sp, #0x140]
00443970  cbz      x19, #0x443b08
00443974  add      x8, x19, #8
00443978  mov      x9, #-1
0044397c  ldaddal  x9, x8, [x8]
00443980  cbnz     x8, #0x443b08
00443984  ldr      x8, [x19]
00443988  mov      x0, x19
0044398c  ldr      x8, [x8, #0x10]
00443990  blr      x8
00443994  mov      x0, x19
00443998  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
0044399c  b        #0x443b08
004439a0  orr      x8, x24, #0xf
004439a4  add      x22, x8, #1
004439a8  mov      x0, x22
004439ac  bl       #0xc48840  ; <_Znwm>
004439b0  orr      x9, x22, #1
004439b4  stp      x24, x0, [sp, #0xf0]
004439b8  and      w8, w9, #0xff
004439bc  str      x9, [sp, #0xe8]
004439c0  add      x9, sp, #0xe8
004439c4  tst      w8, #1
004439c8  ldr      x8, [x21, #0x448]
004439cc  orr      x9, x9, #1
004439d0  csel     x0, x9, x0, eq
004439d4  add      x9, x21, #0x439
004439d8  tst      w23, #1
004439dc  mov      x2, x20
004439e0  csel     x1, x9, x8, eq
004439e4  add      x21, x0, x20
004439e8  bl       #0xc48970  ; <memmove>
004439ec  adrp     x8, #0x133000
004439f0  add      x8, x8, #0xfd6  ; "up4x_resize_back_cv.png"
004439f4  strb     wzr, [x21, #0x17]
004439f8  ldr      q0, [x8]
004439fc  ldur     x8, [x8, #0xf]
00443a00  str      q0, [x21]
00443a04  stur     x8, [x21, #0xf]
00443a08  add      x0, sp, #0x278
00443a0c  sub      x1, x29, #0x78
00443a10  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
00443a14  add      x1, sp, #0xe8
00443a18  add      x2, sp, #0x278
00443a1c  mov      w0, w19
00443a20  mov      w3, wzr
00443a24  mov      w4, wzr
00443a28  bl       #0x43b3a8
00443a2c  add      x0, sp, #0x278
00443a30  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00443a34  ldrb     w8, [sp, #0xe8]
00443a38  tbz      w8, #0, #0x443aec
00443a3c  ldr      x0, [sp, #0xf8]
00443a40  b        #0x443ae8
00443a44  orr      x8, x24, #0xf
00443a48  add      x22, x8, #1  ; "H QZO[ QYP[ SYT[ SZU["
00443a4c  mov      x0, x22
00443a50  bl       #0xc48840  ; <_Znwm>
00443a54  orr      x9, x22, #1
00443a58  stp      x24, x0, [sp, #0x108]
00443a5c  and      w8, w9, #0xff
00443a60  str      x9, [sp, #0x100]
00443a64  add      x9, sp, #0x100
00443a68  tst      w8, #1
00443a6c  ldr      x8, [x21, #0x448]
00443a70  orr      x9, x9, #1
00443a74  csel     x0, x9, x0, eq
00443a78  add      x9, x21, #0x439
00443a7c  tst      w23, #1
00443a80  mov      x2, x20
00443a84  csel     x1, x9, x8, eq
00443a88  add      x21, x0, x20
00443a8c  bl       #0xc48970  ; <memmove>
00443a90  adrp     x9, #0x143000
00443a94  add      x9, x9, #0x89f  ; "down4x_resize_cv.png"
00443a98  mov      w8, #0x702e
00443a9c  strb     wzr, [x21, #0x14]
00443aa0  movk     w8, #0x676e, lsl #16
00443aa4  ldr      q0, [x9]
00443aa8  str      w8, [x21, #0x10]
00443aac  str      q0, [x21]
00443ab0  sub      x0, x29, #0xd8
00443ab4  sub      x1, x29, #0x78
00443ab8  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
00443abc  add      x1, sp, #0x100
00443ac0  sub      x2, x29, #0xd8
00443ac4  mov      w0, w19
00443ac8  mov      w3, wzr
00443acc  mov      w4, wzr
00443ad0  bl       #0x43b3a8
00443ad4  sub      x0, x29, #0xd8
00443ad8  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00443adc  ldrb     w8, [sp, #0x100]
00443ae0  tbz      w8, #0, #0x443aec
00443ae4  ldr      x0, [sp, #0x110]
00443ae8  bl       #0xc48850  ; <_ZdlPv>
00443aec  sub      x0, x29, #0x78
00443af0  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00443af4  add      x0, sp, #0x150
00443af8  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00443afc  mov      w21, wzr
00443b00  b        #0x4442cc
00443b04  stp      x9, x8, [sp, #0x140]
00443b08  ldp      x9, x8, [x21, #0xa8]
00443b0c  cbz      x8, #0x443b1c
00443b10  add      x10, x8, #8  ; "QYP[ SYT[ SZU["
00443b14  mov      w11, #1
00443b18  ldadd    x11, x10, [x10]
00443b1c  ldr      x19, [sp, #0x138]
00443b20  stp      x9, x8, [sp, #0x130]
00443b24  cbz      x19, #0x443b50
00443b28  add      x8, x19, #8
00443b2c  mov      x9, #-1
00443b30  ldaddal  x9, x8, [x8]
00443b34  cbnz     x8, #0x443b50
00443b38  ldr      x8, [x19]
00443b3c  mov      x0, x19
00443b40  ldr      x8, [x8, #0x10]  ; =0x133010
00443b44  blr      x8
00443b48  mov      x0, x19
00443b4c  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00443b50  mov      w8, #3
00443b54  ldr      x28, [sp, #0x140]
00443b58  str      w8, [x21, #0x368]
00443b5c  stp      xzr, xzr, [sp, #0x120]
00443b60  ldp      x23, x19, [x28, #0x10]
00443b64  str      xzr, [sp, #0x118]
00443b68  subs     x20, x19, x23
00443b6c  b.eq     #0x443bf8
00443b70  tbnz     x20, #0x3f, #0x44441c
00443b74  mov      x0, x20
00443b78  bl       #0xc48840  ; <_Znwm>
00443b7c  asr      x8, x20, #3
00443b80  mov      x25, x0
00443b84  sub      x9, x20, #8
00443b88  str      x0, [sp, #0x118]
00443b8c  add      x8, x0, x8, lsl #3
00443b90  cmp      x9, #0x18
00443b94  str      x8, [sp, #0x128]
00443b98  b.lo     #0x443c00
00443b9c  mov      x8, x25
00443ba0  sub      x10, x25, x23
00443ba4  cmp      x10, #0x20
00443ba8  b.lo     #0x443c04
00443bac  lsr      x8, x9, #3
00443bb0  add      x12, x25, #0x10
00443bb4  add      x9, x8, #1  ; "H QZO[ QYP[ SYT[ SZU["
00443bb8  add      x13, x23, #0x10
00443bbc  and      x10, x9, #0x3ffffffffffffffc
00443bc0  lsl      x8, x10, #3
00443bc4  mov      x14, x10
00443bc8  add      x11, x23, x8
00443bcc  add      x8, x25, x8
00443bd0  ldp      q0, q1, [x13, #-0x10]
00443bd4  add      x13, x13, #0x20
00443bd8  subs     x14, x14, #4
00443bdc  stp      q0, q1, [x12, #-0x10]
00443be0  add      x12, x12, #0x20
00443be4  b.ne     #0x443bd0
00443be8  mov      x23, x11
00443bec  cmp      x9, x10
00443bf0  b.ne     #0x443c04
00443bf4  b        #0x443c14
00443bf8  mov      x25, xzr
00443bfc  b        #0x443c18
00443c00  mov      x8, x25
00443c04  ldr      x9, [x23], #8
00443c08  cmp      x23, x19
00443c0c  str      x9, [x8], #8  ; =0x133008
00443c10  b.ne     #0x443c04
00443c14  str      x8, [sp, #0x120]
00443c18  ldr      x8, [sp, #0x130]
00443c1c  stp      xzr, xzr, [sp, #0xd8]
00443c20  str      xzr, [sp, #0xd0]
00443c24  ldp      x20, x19, [x8, #0x10]
00443c28  str      x8, [sp, #0x20]
00443c2c  subs     x24, x19, x20
00443c30  b.eq     #0x443cb8
00443c34  tbnz     x24, #0x3f, #0x444438
00443c38  mov      x0, x24
00443c3c  bl       #0xc48840  ; <_Znwm>
00443c40  asr      x8, x24, #3
00443c44  sub      x9, x24, #8
00443c48  cmp      x9, #0x18
00443c4c  str      x0, [sp, #0xd0]
00443c50  add      x8, x0, x8, lsl #3
00443c54  str      x8, [sp, #0xe0]
00443c58  b.lo     #0x443cc0
00443c5c  mov      x8, x0
00443c60  sub      x10, x0, x20
00443c64  cmp      x10, #0x20
00443c68  b.lo     #0x443cc4
00443c6c  lsr      x8, x9, #3
00443c70  add      x12, x0, #0x10
00443c74  add      x9, x8, #1  ; "H QZO[ QYP[ SYT[ SZU["
00443c78  add      x13, x20, #0x10
00443c7c  and      x10, x9, #0x3ffffffffffffffc
00443c80  lsl      x8, x10, #3
00443c84  mov      x14, x10
00443c88  add      x11, x20, x8
00443c8c  add      x8, x0, x8
00443c90  ldp      q0, q1, [x13, #-0x10]
00443c94  add      x13, x13, #0x20
00443c98  subs     x14, x14, #4
00443c9c  stp      q0, q1, [x12, #-0x10]
00443ca0  add      x12, x12, #0x20
00443ca4  b.ne     #0x443c90
00443ca8  mov      x20, x11
00443cac  cmp      x9, x10
00443cb0  b.ne     #0x443cc4
00443cb4  b        #0x443cd4
00443cb8  mov      x0, xzr
00443cbc  b        #0x443cd8
00443cc0  mov      x8, x0
00443cc4  ldr      x9, [x20], #8
00443cc8  cmp      x20, x19
00443ccc  str      x9, [x8], #8  ; =0x133008
00443cd0  b.ne     #0x443cc4
00443cd4  str      x8, [sp, #0xd8]
00443cd8  ldr      x24, [x25, #8]
00443cdc  stp      x0, x25, [sp, #0x28]
00443ce0  ldp      x25, x23, [x25, #0x10]
00443ce4  ldp      x20, x27, [x0, #0x10]
00443ce8  str      w24, [sp, #0x270]
00443cec  ldr      x19, [x0, #8]
00443cf0  str      w25, [sp, #0x274]
00443cf4  str      w23, [sp, #0x26c]
00443cf8  str      w20, [sp, #0x268]
00443cfc  str      w27, [sp, #0x260]
00443d00  str      w19, [sp, #0x264]
00443d04  adrp     x0, #0x151000
00443d08  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443d0c  mov      w1, #0x2f
00443d10  mov      w2, #0x4a
00443d14  bl       #0xc48800  ; <__strrchr_chk>
00443d18  cbz      x0, #0x443d38
00443d1c  adrp     x0, #0x151000
00443d20  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443d24  mov      w1, #0x2f
00443d28  mov      w2, #0x4a
00443d2c  bl       #0xc48800  ; <__strrchr_chk>
00443d30  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00443d34  b        #0x443d40
00443d38  adrp     x3, #0x151000
00443d3c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443d40  adrp     x26, #0x128000
00443d44  add      x26, x26, #0xecf  ; "[%s:%d] resize %d: input %d %d %d    output %d %d %d 
"
00443d48  adrp     x0, #0x177000
00443d4c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00443d50  mov      w1, #2
00443d54  mov      x2, x26
00443d58  mov      w4, #0x2e6
00443d5c  mov      w5, w22
00443d60  mov      w6, w24
00443d64  mov      w7, w25
00443d68  str      w27, [sp, #0x18]
00443d6c  str      w20, [sp, #0x10]
00443d70  str      w19, [sp, #8]
00443d74  str      w23, [sp]
00443d78  bl       #0x484908
00443d7c  ldp      q0, q1, [x26]
00443d80  add      x9, sp, #0x150
00443d84  ldr      q2, [x26, #0x20]  ; =0x128020
00443d88  stp      q0, q1, [sp, #0x150]
00443d8c  ldur     x8, [x26, #0x2f]
00443d90  str      q2, [sp, #0x170]
00443d94  stur     x8, [x9, #0x2f]
00443d98  mov      x0, x26
00443d9c  mov      w1, #0x37
00443da0  bl       #0xc48820  ; <__strlen_chk>
00443da4  adrp     x9, #0xc78000
00443da8  add      x8, sp, #0x150
00443dac  add      x8, x0, x8
00443db0  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00443db4  sturb    wzr, [x8, #-1]
00443db8  ldr      x26, [x9]
00443dbc  adrp     x0, #0x151000
00443dc0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443dc4  mov      w1, #0x2f
00443dc8  mov      w2, #0x4a
00443dcc  bl       #0xc48800  ; <__strrchr_chk>
00443dd0  cbz      x0, #0x443df0
00443dd4  adrp     x0, #0x151000
00443dd8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443ddc  mov      w1, #0x2f
00443de0  mov      w2, #0x4a
00443de4  bl       #0xc48800  ; <__strrchr_chk>
00443de8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00443dec  b        #0x443df8
00443df0  adrp     x3, #0x151000
00443df4  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443df8  adrp     x1, #0x177000
00443dfc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00443e00  add      x2, sp, #0x150
00443e04  mov      w0, #2
00443e08  mov      w4, #0x2e6
00443e0c  mov      w5, w22
00443e10  mov      w6, w24
00443e14  mov      w7, w25
00443e18  str      w27, [sp, #0x18]
00443e1c  str      w20, [sp, #0x10]
00443e20  str      w19, [sp, #8]
00443e24  str      w23, [sp]
00443e28  blr      x26
00443e2c  cmp      w24, w19
00443e30  b.ne     #0x443e84
00443e34  cmp      w25, w20
00443e38  b.ne     #0x443e84
00443e3c  cmp      w23, w27
00443e40  b.ne     #0x443e84
00443e44  ldr      x1, [x28, #0x30]
00443e48  ldr      x0, [sp, #0x20]
00443e4c  bl       #0x41e648
00443e50  adrp     x0, #0x151000
00443e54  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443e58  mov      w1, #0x2f
00443e5c  mov      w2, #0x4a
00443e60  bl       #0xc48800  ; <__strrchr_chk>
00443e64  cbz      x0, #0x443f94
00443e68  adrp     x0, #0x151000
00443e6c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443e70  mov      w1, #0x2f
00443e74  mov      w2, #0x4a
00443e78  bl       #0xc48800  ; <__strrchr_chk>
00443e7c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00443e80  b        #0x443f9c
00443e84  mul      w8, w24, w25
00443e88  ldr      x25, [sp, #0x20]
00443e8c  ldp      x6, x9, [x28, #0x30]
00443e90  mov      w10, #2
00443e94  mul      w8, w8, w23
00443e98  ldr      x24, [x25, #0x30]
00443e9c  sxtw     x8, w8
00443ea0  str      w10, [sp, #0x58]
00443ea4  str      w9, [sp, #0x6c]
00443ea8  str      x8, [sp, #0x60]
00443eac  sub      x0, x29, #0x78
00443eb0  add      x2, sp, #0x26c
00443eb4  mov      w1, #3
00443eb8  mov      w3, wzr
00443ebc  mov      x4, xzr
00443ec0  mov      w5, #1
00443ec4  ldr      x23, [sp, #0x30]
00443ec8  bl       #0x48d618
00443ecc  mov      w22, w0
00443ed0  cbz      w0, #0x443f08
00443ed4  adrp     x0, #0x151000
00443ed8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443edc  mov      w1, #0x2f
00443ee0  mov      w2, #0x4a
00443ee4  bl       #0xc48800  ; <__strrchr_chk>
00443ee8  cbz      x0, #0x44406c
00443eec  adrp     x0, #0x151000
00443ef0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443ef4  mov      w1, #0x2f
00443ef8  mov      w2, #0x4a
00443efc  bl       #0xc48800  ; <__strrchr_chk>
00443f00  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00443f04  b        #0x444074
00443f08  sub      x0, x29, #0x78
00443f0c  add      x1, sp, #0x58
00443f10  mov      w2, #1
00443f14  bl       #0x48e2c8
00443f18  mul      w8, w19, w20
00443f1c  ldr      x9, [x25, #0x38]
00443f20  mov      w10, #2
00443f24  mul      w8, w8, w27
00443f28  str      w9, [sp, #0x54]
00443f2c  str      w10, [sp, #0x40]
00443f30  sxtw     x8, w8
00443f34  str      x8, [sp, #0x48]
00443f38  add      x0, sp, #0x70
00443f3c  add      x2, sp, #0x260
00443f40  mov      w1, #3
00443f44  mov      w3, wzr
00443f48  mov      x4, xzr
00443f4c  mov      w5, #1
00443f50  mov      x6, x24
00443f54  bl       #0x48d618
00443f58  mov      w22, w0
00443f5c  cbz      w0, #0x444150
00443f60  adrp     x0, #0x151000
00443f64  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443f68  mov      w1, #0x2f
00443f6c  mov      w2, #0x4a
00443f70  bl       #0xc48800  ; <__strrchr_chk>
00443f74  cbz      x0, #0x4441c4
00443f78  adrp     x0, #0x151000
00443f7c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443f80  mov      w1, #0x2f
00443f84  mov      w2, #0x4a
00443f88  bl       #0xc48800  ; <__strrchr_chk>
00443f8c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00443f90  b        #0x4441cc
00443f94  adrp     x3, #0x151000
00443f98  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00443f9c  adrp     x21, #0x128000
00443fa0  add      x21, x21, #0xf06  ; "[%s:%d] bypass reisze 3 
"
00443fa4  adrp     x0, #0x177000
00443fa8  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00443fac  mov      w1, #2
00443fb0  mov      x2, x21
00443fb4  mov      w4, #0x2eb
00443fb8  bl       #0x484908
00443fbc  ldr      q0, [x21]
00443fc0  add      x8, sp, #0x150
00443fc4  ldur     q1, [x21, #0xa]
00443fc8  str      q0, [sp, #0x150]
00443fcc  stur     q1, [x8, #0xa]
00443fd0  mov      x0, x21
00443fd4  mov      w1, #0x1a
00443fd8  ldr      x23, [sp, #0x30]
00443fdc  bl       #0xc48820  ; <__strlen_chk>
00443fe0  adrp     x9, #0xc78000
00443fe4  add      x8, sp, #0x150
00443fe8  add      x8, x0, x8
00443fec  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00443ff0  sturb    wzr, [x8, #-1]
00443ff4  ldr      x19, [x9]
00443ff8  adrp     x0, #0x151000
00443ffc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444000  mov      w1, #0x2f
00444004  mov      w2, #0x4a
00444008  bl       #0xc48800  ; <__strrchr_chk>
0044400c  cbz      x0, #0x44402c
00444010  adrp     x0, #0x151000
00444014  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444018  mov      w1, #0x2f
0044401c  mov      w2, #0x4a
00444020  bl       #0xc48800  ; <__strrchr_chk>
00444024  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00444028  b        #0x444034
0044402c  adrp     x3, #0x151000
00444030  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444034  adrp     x1, #0x177000
00444038  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044403c  add      x2, sp, #0x150
00444040  mov      w0, #2
00444044  mov      w4, #0x2eb
00444048  blr      x19
0044404c  mov      w21, wzr
00444050  ldr      x0, [sp, #0x28]
00444054  bl       #0xc48850  ; <_ZdlPv>
00444058  mov      x0, x23
0044405c  bl       #0xc48850  ; <_ZdlPv>
00444060  ldr      x19, [sp, #0x138]
00444064  cbnz     x19, #0x4442a4
00444068  b        #0x4442cc
0044406c  adrp     x3, #0x151000
00444070  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444074  adrp     x21, #0x177000
00444078  add      x21, x21, #0x30a  ; "[%s:%d] convert input MialgoInitMat src error %d
"
0044407c  adrp     x0, #0x177000
00444080  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00444084  mov      w1, #1
00444088  mov      x2, x21
0044408c  mov      w4, #0x2ff
00444090  mov      w5, w22
00444094  bl       #0x484908
00444098  ldp      q0, q1, [x21]
0044409c  mov      w8, #0xa
004440a0  strh     w8, [sp, #0x180]
004440a4  ldr      q2, [x21, #0x20]  ; =0x177020
004440a8  stp      q0, q1, [sp, #0x150]
004440ac  str      q2, [sp, #0x170]
004440b0  mov      x0, x21
004440b4  mov      w1, #0x32
004440b8  bl       #0xc48820  ; <__strlen_chk>
004440bc  adrp     x9, #0xc78000
004440c0  add      x8, sp, #0x150
004440c4  add      x8, x0, x8
004440c8  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
004440cc  sturb    wzr, [x8, #-1]
004440d0  ldr      x19, [x9]
004440d4  adrp     x0, #0x151000
004440d8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004440dc  mov      w1, #0x2f
004440e0  mov      w2, #0x4a
004440e4  bl       #0xc48800  ; <__strrchr_chk>
004440e8  cbz      x0, #0x444108
004440ec  adrp     x0, #0x151000
004440f0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004440f4  mov      w1, #0x2f
004440f8  mov      w2, #0x4a
004440fc  bl       #0xc48800  ; <__strrchr_chk>
00444100  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00444104  b        #0x444110
00444108  adrp     x3, #0x151000
0044410c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444110  adrp     x1, #0x177000
00444114  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00444118  add      x2, sp, #0x150
0044411c  mov      w0, #1
00444120  mov      w4, #0x2ff
00444124  mov      w5, w22
00444128  blr      x19
0044412c  mov      w21, #0x6521
00444130  movk     w21, #0x11, lsl #16
00444134  ldr      x0, [sp, #0x28]
00444138  bl       #0xc48850  ; <_ZdlPv>
0044413c  mov      x0, x23
00444140  bl       #0xc48850  ; <_ZdlPv>
00444144  ldr      x19, [sp, #0x138]
00444148  cbnz     x19, #0x4442a4
0044414c  b        #0x4442cc
00444150  add      x0, sp, #0x70
00444154  add      x1, sp, #0x40
00444158  mov      w2, #1
0044415c  bl       #0x48e2c8
00444160  ldr      w2, [x21, #0x368]  ; =0x177368
00444164  sub      x0, x29, #0x78
00444168  add      x1, sp, #0x70
0044416c  mov      w3, #3
00444170  mov      x4, xzr
00444174  bl       #0x48f8cc
00444178  mov      w21, w0
0044417c  cbz      w0, #0x44428c
00444180  mov      w0, w21
00444184  mov      x1, xzr
00444188  mov      w2, wzr
0044418c  bl       #0x48448c
00444190  adrp     x0, #0x151000
00444194  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444198  mov      w1, #0x2f
0044419c  mov      w2, #0x4a
004441a0  bl       #0xc48800  ; <__strrchr_chk>
004441a4  cbz      x0, #0x444334
004441a8  adrp     x0, #0x151000
004441ac  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004441b0  mov      w1, #0x2f
004441b4  mov      w2, #0x4a
004441b8  bl       #0xc48800  ; <__strrchr_chk>
004441bc  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004441c0  b        #0x44433c
004441c4  adrp     x3, #0x151000
004441c8  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004441cc  adrp     x21, #0x163000
004441d0  add      x21, x21, #0x656  ; "[%s:%d] convert input MialgoInitMat dst error %d
"
004441d4  adrp     x0, #0x177000
004441d8  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
004441dc  mov      w1, #1
004441e0  mov      x2, x21
004441e4  mov      w4, #0x30d
004441e8  mov      w5, w22
004441ec  bl       #0x484908
004441f0  ldp      q0, q1, [x21]
004441f4  mov      w8, #0xa
004441f8  strh     w8, [sp, #0x180]
004441fc  ldr      q2, [x21, #0x20]  ; =0x163020
00444200  stp      q0, q1, [sp, #0x150]
00444204  str      q2, [sp, #0x170]
00444208  mov      x0, x21
0044420c  mov      w1, #0x32
00444210  bl       #0xc48820  ; <__strlen_chk>
00444214  adrp     x9, #0xc78000
00444218  add      x8, sp, #0x150
0044421c  add      x8, x0, x8
00444220  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00444224  sturb    wzr, [x8, #-1]
00444228  ldr      x19, [x9]
0044422c  adrp     x0, #0x151000
00444230  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444234  mov      w1, #0x2f
00444238  mov      w2, #0x4a
0044423c  bl       #0xc48800  ; <__strrchr_chk>
00444240  cbz      x0, #0x444260
00444244  adrp     x0, #0x151000
00444248  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044424c  mov      w1, #0x2f
00444250  mov      w2, #0x4a
00444254  bl       #0xc48800  ; <__strrchr_chk>
00444258  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044425c  b        #0x444268
00444260  adrp     x3, #0x151000
00444264  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444268  adrp     x1, #0x177000
0044426c  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00444270  add      x2, sp, #0x150
00444274  mov      w0, #1
00444278  mov      w4, #0x30d
0044427c  mov      w5, w22
00444280  blr      x19
00444284  mov      w21, #0x6521
00444288  movk     w21, #0x11, lsl #16
0044428c  ldr      x0, [sp, #0x28]
00444290  bl       #0xc48850  ; <_ZdlPv>
00444294  mov      x0, x23
00444298  bl       #0xc48850  ; <_ZdlPv>
0044429c  ldr      x19, [sp, #0x138]
004442a0  cbz      x19, #0x4442cc
004442a4  add      x8, x19, #8
004442a8  mov      x9, #-1
004442ac  ldaddal  x9, x8, [x8]
004442b0  cbnz     x8, #0x4442cc
004442b4  ldr      x8, [x19]
004442b8  mov      x0, x19
004442bc  ldr      x8, [x8, #0x10]  ; =0x133010
004442c0  blr      x8
004442c4  mov      x0, x19
004442c8  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
004442cc  ldr      x19, [sp, #0x148]
004442d0  cbz      x19, #0x4442fc
004442d4  add      x8, x19, #8
004442d8  mov      x9, #-1
004442dc  ldaddal  x9, x8, [x8]
004442e0  cbnz     x8, #0x4442fc
004442e4  ldr      x8, [x19]
004442e8  mov      x0, x19
004442ec  ldr      x8, [x8, #0x10]  ; =0x133010
004442f0  blr      x8
004442f4  mov      x0, x19
004442f8  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
004442fc  ldr      x8, [sp, #0x38]
00444300  ldr      x8, [x8, #0x28]  ; =0x133028
00444304  ldur     x9, [x29, #-0x18]
00444308  cmp      x8, x9
0044430c  b.ne     #0x4445ac
00444310  mov      w0, w21
00444314  add      sp, sp, #0x3b0
00444318  ldp      x20, x19, [sp, #0x50]
0044431c  ldp      x22, x21, [sp, #0x40]
00444320  ldp      x24, x23, [sp, #0x30]
00444324  ldp      x26, x25, [sp, #0x20]
00444328  ldp      x28, x27, [sp, #0x10]
0044432c  ldp      x29, x30, [sp], #0x60
00444330  ret      
00444334  adrp     x3, #0x151000
00444338  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044433c  adrp     x22, #0x171000
00444340  add      x22, x22, #0xa61  ; "[%s:%d] MialgoResizeImpl error %d
"
00444344  adrp     x0, #0x177000
00444348  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044434c  mov      w1, #1
00444350  mov      x2, x22
00444354  mov      w4, #0x318
00444358  mov      w5, w21
0044435c  bl       #0x484908
00444360  ldp      q0, q1, [x22]
00444364  mov      w8, #0x6425
00444368  add      x9, sp, #0x150
0044436c  movk     w8, #0xa, lsl #16
00444370  stur     w8, [x9, #0x1f]
00444374  stp      q0, q1, [sp, #0x150]
00444378  mov      x0, x22
0044437c  mov      w1, #0x23
00444380  bl       #0xc48820  ; <__strlen_chk>
00444384  adrp     x9, #0xc78000
00444388  add      x8, sp, #0x150
0044438c  add      x8, x0, x8
00444390  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00444394  sturb    wzr, [x8, #-1]
00444398  ldr      x19, [x9]
0044439c  adrp     x0, #0x151000
004443a0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004443a4  mov      w1, #0x2f
004443a8  mov      w2, #0x4a
004443ac  bl       #0xc48800  ; <__strrchr_chk>
004443b0  cbz      x0, #0x4443d0
004443b4  adrp     x0, #0x151000
004443b8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004443bc  mov      w1, #0x2f
004443c0  mov      w2, #0x4a
004443c4  bl       #0xc48800  ; <__strrchr_chk>
004443c8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004443cc  b        #0x4443d8
004443d0  adrp     x3, #0x151000
004443d4  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004443d8  adrp     x1, #0x177000
004443dc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004443e0  add      x2, sp, #0x150
004443e4  mov      w0, #1
004443e8  mov      w4, #0x318
004443ec  mov      w5, w21
004443f0  blr      x19
004443f4  mov      w8, #0x6521
004443f8  movk     w8, #0x11, lsl #16
004443fc  add      w21, w8, #7
00444400  ldr      x0, [sp, #0x28]
00444404  bl       #0xc48850  ; <_ZdlPv>
00444408  mov      x0, x23
0044440c  bl       #0xc48850  ; <_ZdlPv>
00444410  ldr      x19, [sp, #0x138]
00444414  cbnz     x19, #0x4442a4
00444418  b        #0x4442cc
0044441c  ldr      x8, [sp, #0x38]
00444420  ldr      x8, [x8, #0x28]  ; =0x133028
00444424  ldur     x9, [x29, #-0x18]
00444428  cmp      x8, x9
0044442c  b.ne     #0x4445ac
00444430  add      x0, sp, #0x118
00444434  bl       #0x41dce4
00444438  ldr      x8, [sp, #0x38]
0044443c  ldr      x8, [x8, #0x28]  ; =0x133028
00444440  ldur     x9, [x29, #-0x18]
00444444  cmp      x8, x9
00444448  b.ne     #0x4445ac
0044444c  add      x0, sp, #0xd0
00444450  bl       #0x41dce4
00444454  ldr      x8, [sp, #0x38]
00444458  ldr      x8, [x8, #0x28]  ; =0x133028
0044445c  ldur     x9, [x29, #-0x18]
00444460  cmp      x8, x9
00444464  b.ne     #0x4445ac
00444468  add      x0, sp, #0xe8
0044446c  bl       #0x438784
00444470  ldr      x8, [sp, #0x38]
00444474  ldr      x8, [x8, #0x28]  ; =0x133028
00444478  ldur     x9, [x29, #-0x18]
0044447c  cmp      x8, x9
00444480  b.ne     #0x4445ac
00444484  add      x0, sp, #0x100
00444488  bl       #0x438784
0044448c  b        #0x44456c
00444490  b        #0x44456c
00444494  b        #0x44456c
00444498  mov      x21, x0
0044449c  sub      x0, x29, #0xd8
004444a0  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004444a4  b        #0x4444bc
004444a8  mov      x21, x0
004444ac  add      x0, sp, #0x278
004444b0  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004444b4  b        #0x4444d0
004444b8  mov      x21, x0
004444bc  ldrb     w8, [sp, #0x100]
004444c0  tbz      w8, #0, #0x444510
004444c4  ldr      x0, [sp, #0x110]
004444c8  b        #0x4444dc
004444cc  mov      x21, x0
004444d0  ldrb     w8, [sp, #0xe8]
004444d4  tbz      w8, #0, #0x444510
004444d8  ldr      x0, [sp, #0xf8]
004444dc  bl       #0xc48850  ; <_ZdlPv>
004444e0  b        #0x444510
004444e4  b        #0x44450c
004444e8  b        #0x44450c
004444ec  mov      x21, x0
004444f0  b        #0x444518
004444f4  mov      x21, x0
004444f8  b        #0x444518
004444fc  b        #0x444500
00444500  mov      x21, x0
00444504  b        #0x444580
00444508  b        #0x44450c
0044450c  mov      x21, x0
00444510  sub      x0, x29, #0x78
00444514  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00444518  add      x0, sp, #0x150
0044451c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00444520  b        #0x444580
00444524  b        #0x44456c
00444528  b        #0x44456c
0044452c  ldr      x8, [sp, #0xd0]
00444530  mov      x19, x0
00444534  cbz      x8, #0x444558
00444538  str      x8, [sp, #0xd8]
0044453c  b        #0x444550
00444540  ldr      x8, [sp, #0x118]
00444544  mov      x19, x0
00444548  cbz      x8, #0x444558
0044454c  str      x8, [sp, #0x120]
00444550  mov      x0, x8
00444554  bl       #0xc48850  ; <_ZdlPv>
00444558  mov      x0, x19
0044455c  bl       #0x41dcd4
00444560  b        #0x44456c
00444564  b        #0x44456c
00444568  b        #0x44456c
0044456c  mov      x21, x0
00444570  ldr      x0, [sp, #0x28]
00444574  bl       #0xc48850  ; <_ZdlPv>
00444578  ldr      x0, [sp, #0x30]
0044457c  bl       #0xc48850  ; <_ZdlPv>
00444580  add      x0, sp, #0x130
00444584  bl       #0x423b48
00444588  add      x0, sp, #0x140
0044458c  bl       #0x423b48
00444590  ldr      x8, [sp, #0x38]
00444594  ldr      x8, [x8, #0x28]  ; =0x133028
00444598  ldur     x9, [x29, #-0x18]
0044459c  cmp      x8, x9
004445a0  b.ne     #0x4445ac
004445a4  mov      x0, x21
004445a8  bl       #0xc44424
004445ac  bl       #0xc48830  ; <__stack_chk_fail>
