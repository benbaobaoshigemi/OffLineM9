; function 0x444694 size 0x2538 
00444694  str      d8, [sp, #-0x70]!
00444698  stp      x29, x30, [sp, #0x10]
0044469c  stp      x28, x27, [sp, #0x20]
004446a0  stp      x26, x25, [sp, #0x30]
004446a4  stp      x24, x23, [sp, #0x40]
004446a8  stp      x22, x21, [sp, #0x50]
004446ac  stp      x20, x19, [sp, #0x60]
004446b0  add      x29, sp, #0x10
004446b4  sub      sp, sp, #0x900
004446b8  mrs      x28, tpidr_el0
004446bc  adrp     x20, #0x151000
004446c0  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004446c4  mov      x19, x0
004446c8  ldr      x8, [x28, #0x28]
004446cc  mov      x0, x20
004446d0  mov      w1, #0x2f
004446d4  mov      w2, #0x4a
004446d8  add      x25, sp, #0x7e0
004446dc  stur     x8, [x29, #-0x28]
004446e0  bl       #0xc48800  ; <__strrchr_chk>
004446e4  cbz      x0, #0x444700
004446e8  adrp     x0, #0x151000
004446ec  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004446f0  mov      w1, #0x2f
004446f4  mov      w2, #0x4a
004446f8  bl       #0xc48800  ; <__strrchr_chk>
004446fc  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00444700  adrp     x21, #0x15c000
00444704  add      x21, x21, #0x3d1  ; "[%s:%d] Process styletrans start.
"
00444708  adrp     x0, #0x177000
0044470c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00444710  mov      w1, #2
00444714  mov      x2, x21
00444718  mov      x3, x20
0044471c  mov      w4, #0x320
00444720  bl       #0x484908
00444724  adrp     x24, #0xc78000
00444728  mov      w8, #0x2e74
0044472c  ldp      q0, q1, [x21]
00444730  adrp     x20, #0x151000
00444734  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444738  movk     w8, #0xa, lsl #16
0044473c  mov      x0, x20
00444740  mov      w1, #0x2f
00444744  mov      w2, #0x4a
00444748  ldr      x24, [x24, #0x2f0]  ; =0xc782f0
0044474c  stur     w8, [x25, #0x1f]
00444750  stp      q0, q1, [x25]
00444754  strb     wzr, [sp, #0x801]
00444758  ldr      x21, [x24]
0044475c  bl       #0xc48800  ; <__strrchr_chk>
00444760  cbz      x0, #0x44477c
00444764  adrp     x0, #0x151000
00444768  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044476c  mov      w1, #0x2f
00444770  mov      w2, #0x4a
00444774  bl       #0xc48800  ; <__strrchr_chk>
00444778  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
0044477c  adrp     x1, #0x177000
00444780  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00444784  add      x2, sp, #0x7e0
00444788  mov      w0, #2
0044478c  mov      x3, x20
00444790  mov      w4, #0x320
00444794  blr      x21
00444798  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044479c  mov      x21, x0
004447a0  mov      x0, x19
004447a4  mov      w1, #3
004447a8  bl       #0x443758
004447ac  mov      w20, w0
004447b0  cbz      w0, #0x44487c
004447b4  adrp     x22, #0x151000
004447b8  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004447bc  mov      x0, x22
004447c0  mov      w1, #0x2f
004447c4  mov      w2, #0x4a
004447c8  bl       #0xc48800  ; <__strrchr_chk>
004447cc  cbz      x0, #0x4447e8
004447d0  adrp     x0, #0x151000
004447d4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004447d8  mov      w1, #0x2f
004447dc  mov      w2, #0x4a
004447e0  bl       #0xc48800  ; <__strrchr_chk>
004447e4  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
004447e8  adrp     x23, #0x17f000
004447ec  add      x23, x23, #0xb3a  ; "[%s:%d] resize3 error %d.
"
004447f0  adrp     x0, #0x177000
004447f4  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
004447f8  mov      w1, #2
004447fc  mov      x2, x23
00444800  mov      x3, x22
00444804  mov      w4, #0x32a
00444808  mov      w5, w20
0044480c  bl       #0x484908
00444810  adrp     x22, #0x151000
00444814  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444818  ldur     q0, [x23, #0xb]
0044481c  mov      x0, x22
00444820  ldr      q1, [x23]
00444824  mov      w1, #0x2f
00444828  mov      w2, #0x4a
0044482c  ldr      x23, [x24]
00444830  stur     q0, [x25, #0xb]
00444834  str      q1, [x25]
00444838  strb     wzr, [sp, #0x7f9]
0044483c  bl       #0xc48800  ; <__strrchr_chk>
00444840  cbz      x0, #0x44485c
00444844  adrp     x0, #0x151000
00444848  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044484c  mov      w1, #0x2f
00444850  mov      w2, #0x4a
00444854  bl       #0xc48800  ; <__strrchr_chk>
00444858  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044485c  adrp     x1, #0x177000
00444860  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00444864  add      x2, sp, #0x7e0
00444868  mov      w0, #2
0044486c  mov      x3, x22
00444870  mov      w4, #0x32a
00444874  mov      w5, w20
00444878  blr      x23
0044487c  adrp     x22, #0x151000
00444880  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444884  mov      x0, x22
00444888  mov      w1, #0x2f
0044488c  mov      w2, #0x4a
00444890  bl       #0xc48800  ; <__strrchr_chk>
00444894  cbz      x0, #0x4448b0
00444898  adrp     x0, #0x151000
0044489c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004448a0  mov      w1, #0x2f
004448a4  mov      w2, #0x4a
004448a8  bl       #0xc48800  ; <__strrchr_chk>
004448ac  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
004448b0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
004448b4  sub      x8, x0, x21
004448b8  adrp     x9, #0x189000
004448bc  adrp     x23, #0x16a000
004448c0  add      x23, x23, #0x91c  ; "[%s:%d] duration of resize 3 is %.3fms.
"
004448c4  adrp     x0, #0x177000
004448c8  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
004448cc  scvtf    d0, x8
004448d0  ldr      d8, [x9, #0xc98]  ; =0x189c98 f64=1e-06
004448d4  mov      w1, #2
004448d8  mov      x2, x23
004448dc  mov      x3, x22
004448e0  mov      w4, #0x32c
004448e4  fmul     d0, d0, d8
004448e8  bl       #0x484908
004448ec  ldp      q1, q2, [x23]
004448f0  adrp     x22, #0x151000
004448f4  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004448f8  mov      x0, x22
004448fc  mov      w1, #0x2f
00444900  mov      w2, #0x4a
00444904  ldur     q0, [x23, #0x19]
00444908  ldr      x23, [x24]
0044490c  stur     q0, [x25, #0x19]
00444910  stp      q1, q2, [x25]
00444914  strb     wzr, [sp, #0x807]
00444918  bl       #0xc48800  ; <__strrchr_chk>
0044491c  cbz      x0, #0x444938
00444920  adrp     x0, #0x151000
00444924  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444928  mov      w1, #0x2f
0044492c  mov      w2, #0x4a
00444930  bl       #0xc48800  ; <__strrchr_chk>
00444934  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
00444938  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044493c  sub      x8, x0, x21
00444940  adrp     x1, #0x177000
00444944  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00444948  add      x2, sp, #0x7e0
0044494c  mov      w0, #2
00444950  mov      x3, x22
00444954  scvtf    d0, x8
00444958  mov      w4, #0x32c
0044495c  fmul     d0, d0, d8
00444960  blr      x23
00444964  ldr      w8, [x19, #0x348]
00444968  cbz      w8, #0x444974
0044496c  mov      w8, #1
00444970  strb     w8, [x19, #0x361]
00444974  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00444978  mov      x0, x19
0044497c  bl       #0x446bcc
00444980  cbz      w0, #0x444a60
00444984  adrp     x19, #0x151000
00444988  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044498c  mov      x0, x19
00444990  mov      w1, #0x2f
00444994  mov      w2, #0x4a
00444998  bl       #0xc48800  ; <__strrchr_chk>
0044499c  cbz      x0, #0x4449b8
004449a0  adrp     x0, #0x151000
004449a4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004449a8  mov      w1, #0x2f
004449ac  mov      w2, #0x4a
004449b0  bl       #0xc48800  ; <__strrchr_chk>
004449b4  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
004449b8  adrp     x20, #0x12f000
004449bc  add      x20, x20, #0x35b  ; "[%s:%d] model init failed, bypass styletrans.
"
004449c0  adrp     x0, #0x177000
004449c4  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
004449c8  mov      w1, #2
004449cc  mov      x2, x20
004449d0  mov      x3, x19
004449d4  mov      w4, #0x342
004449d8  bl       #0x484908
004449dc  ldp      q1, q2, [x20]
004449e0  mov      w1, #0x2f
004449e4  mov      w2, #0x4a
004449e8  ldur     q0, [x20, #0x1f]
004449ec  adrp     x20, #0x151000
004449f0  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004449f4  ldr      x21, [x24]
004449f8  mov      x0, x20
004449fc  stur     q0, [x25, #0x1f]
00444a00  stp      q1, q2, [x25]
00444a04  strb     wzr, [sp, #0x80d]
00444a08  bl       #0xc48800  ; <__strrchr_chk>
00444a0c  cbz      x0, #0x444a28
00444a10  adrp     x0, #0x151000
00444a14  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444a18  mov      w1, #0x2f
00444a1c  mov      w2, #0x4a
00444a20  bl       #0xc48800  ; <__strrchr_chk>
00444a24  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00444a28  adrp     x1, #0x177000
00444a2c  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00444a30  add      x2, sp, #0x7e0
00444a34  mov      w0, #2
00444a38  mov      x3, x20
00444a3c  mov      w4, #0x342
00444a40  mov      w19, #0x6524
00444a44  movk     w19, #0x11, lsl #16
00444a48  blr      x21
00444a4c  ldr      x8, [x28, #0x28]
00444a50  ldur     x9, [x29, #-0x28]
00444a54  cmp      x8, x9
00444a58  b.eq     #0x446420
00444a5c  b        #0x446bc8
00444a60  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00444a64  ldrb     w25, [x19, #0x438]  ; =0x151438
00444a68  ldr      x8, [x19, #0x440]  ; =0x151440
00444a6c  lsr      x9, x25, #1
00444a70  tst      w25, #1
00444a74  csel     x23, x9, x8, eq
00444a78  add      x24, x23, #0x11  ; "int **, int *, int, int)"
00444a7c  cmn      x24, #0x10
00444a80  b.hs     #0x446764
00444a84  mov      x21, x0
00444a88  ldr      w22, [x19, #0x310]  ; =0x151310
00444a8c  cmp      x24, #0x16
00444a90  b.hi     #0x444ab0
00444a94  and      w8, w24, #0xff
00444a98  mov      x0, xzr
00444a9c  lsl      w8, w8, #1
00444aa0  stp      xzr, xzr, [sp, #0x178]
00444aa4  str      xzr, [sp, #0x188]
00444aa8  strb     w8, [sp, #0x178]
00444aac  b        #0x444acc
00444ab0  orr      x26, x24, #0xf
00444ab4  add      x0, x26, #1
00444ab8  bl       #0xc48840  ; <_Znwm>
00444abc  add      x9, x26, #2
00444ac0  stp      x24, x0, [sp, #0x180]
00444ac4  and      w8, w9, #0xff
00444ac8  str      x9, [sp, #0x178]
00444acc  add      x9, sp, #0x178
00444ad0  tst      w8, #1
00444ad4  ldr      x8, [x19, #0x448]  ; =0x151448
00444ad8  orr      x9, x9, #1
00444adc  csel     x0, x9, x0, eq
00444ae0  add      x26, x19, #0x439  ; "ed>"
00444ae4  tst      w25, #1
00444ae8  mov      x2, x23
00444aec  csel     x1, x26, x8, eq
00444af0  add      x24, sp, #0x118
00444af4  add      x25, x0, x23
00444af8  bl       #0xc48970  ; <memmove>
00444afc  adrp     x9, #0x186000
00444b00  add      x9, x9, #0x7fd  ; "matting_input.dat"
00444b04  mov      w8, #0x74
00444b08  ldr      q0, [x9]
00444b0c  ldr      x9, [x19, #0xa8]  ; =0x1510a8
00444b10  strh     w8, [x25, #0x10]
00444b14  str      q0, [x25]
00444b18  ldp      x12, x8, [x9, #0x10]
00444b1c  ldr      x2, [x9, #0x30]  ; =0x186030
00444b20  cmp      x12, x8
00444b24  b.eq     #0x444b4c
00444b28  adrp     x25, #0xc78000
00444b2c  sub      x9, x8, x12
00444b30  sub      x9, x9, #8
00444b34  cmp      x9, #0x38
00444b38  ldr      x25, [x25, #0x2f0]  ; =0xc782f0
00444b3c  b.hs     #0x444b5c
00444b40  mov      w3, #1
00444b44  mov      x9, x12
00444b48  b        #0x444bbc
00444b4c  adrp     x25, #0xc78000
00444b50  mov      w3, #1
00444b54  ldr      x25, [x25, #0x2f0]  ; =0xc782f0
00444b58  b        #0x444bcc
00444b5c  lsr      x9, x9, #3
00444b60  add      x10, x9, #1  ; "_axis"
00444b64  and      x11, x10, #0x3ffffffffffffff8
00444b68  movi     v0.4s, #1
00444b6c  mov      x13, x11
00444b70  movi     v1.4s, #1
00444b74  add      x9, x12, x11, lsl #3
00444b78  add      x12, x12, #0x20
00444b7c  ldp      q3, q2, [x12, #-0x20]
00444b80  subs     x13, x13, #8
00444b84  ldp      q5, q4, [x12], #0x40
00444b88  uzp1     v2.4s, v3.4s, v2.4s
00444b8c  uzp1     v3.4s, v5.4s, v4.4s
00444b90  mul      v0.4s, v0.4s, v2.4s
00444b94  mul      v1.4s, v1.4s, v3.4s
00444b98  b.ne     #0x444b7c
00444b9c  mul      v0.4s, v1.4s, v0.4s
00444ba0  cmp      x10, x11
00444ba4  ext      v1.16b, v0.16b, v0.16b, #8
00444ba8  mul      v0.2s, v0.2s, v1.2s
00444bac  mov      w12, v0.s[1]
00444bb0  fmov     w13, s0
00444bb4  mul      w3, w13, w12
00444bb8  b.eq     #0x444bcc
00444bbc  ldr      w10, [x9], #8  ; =0x186008
00444bc0  cmp      x9, x8
00444bc4  mul      w3, w3, w10
00444bc8  b.ne     #0x444bbc
00444bcc  mov      w9, #0x6962
00444bd0  mov      w8, #0xc
00444bd4  movk     w9, #0x616e, lsl #16
00444bd8  mov      w10, #0x7972
00444bdc  strb     wzr, [sp, #0x167]
00444be0  strb     w8, [sp, #0x160]
00444be4  stur     w9, [x24, #0x49]
00444be8  sturh    w10, [x24, #0x4d]
00444bec  add      x1, sp, #0x178
00444bf0  add      x4, sp, #0x160
00444bf4  mov      w0, w22
00444bf8  bl       #0x43b0c4
00444bfc  ldrb     w8, [sp, #0x160]
00444c00  tbnz     w8, #0, #0x444ee8
00444c04  ldrb     w8, [sp, #0x178]
00444c08  tbnz     w8, #0, #0x444ef8
00444c0c  ldp      x9, x8, [x19, #0xa8]
00444c10  ldr      x0, [x19, #0x98]  ; =0x151098
00444c14  str      x9, [sp, #0x7e0]
00444c18  str      x8, [sp, #0x7e8]
00444c1c  cbz      x8, #0x444c2c
00444c20  add      x8, x8, #8
00444c24  mov      w9, #1
00444c28  ldadd    x9, x8, [x8]
00444c2c  ldp      x9, x8, [x19, #0xb8]
00444c30  str      x9, [sp, #0x7f0]
00444c34  str      x8, [sp, #0x7f8]
00444c38  cbz      x8, #0x444c48
00444c3c  add      x8, x8, #8
00444c40  mov      w9, #1
00444c44  ldadd    x9, x8, [x8]
00444c48  add      x1, sp, #0x7e0
00444c4c  bl       #0x450e48
00444c50  ldr      x22, [sp, #0x7f8]
00444c54  cbz      x22, #0x444c80
00444c58  add      x8, x22, #8  ; "ay, double, cv::RNG *)"
00444c5c  mov      x9, #-1
00444c60  ldaddal  x9, x8, [x8]
00444c64  cbnz     x8, #0x444c80
00444c68  ldr      x8, [x22]
00444c6c  mov      x0, x22
00444c70  ldr      x8, [x8, #0x10]
00444c74  blr      x8
00444c78  mov      x0, x22
00444c7c  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00444c80  ldr      x22, [sp, #0x7e8]
00444c84  cbz      x22, #0x444cb0
00444c88  add      x8, x22, #8  ; "ay, double, cv::RNG *)"
00444c8c  mov      x9, #-1
00444c90  ldaddal  x9, x8, [x8]
00444c94  cbnz     x8, #0x444cb0
00444c98  ldr      x8, [x22]
00444c9c  mov      x0, x22
00444ca0  ldr      x8, [x8, #0x10]
00444ca4  blr      x8
00444ca8  mov      x0, x22
00444cac  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00444cb0  ldr      x0, [x19, #0x98]  ; =0x151098
00444cb4  ldr      w1, [x19, #0x348]  ; =0x151348
00444cb8  bl       #0x41e234
00444cbc  cbz      w0, #0x444d8c
00444cc0  adrp     x22, #0x151000
00444cc4  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444cc8  mov      x0, x22
00444ccc  mov      w1, #0x2f
00444cd0  mov      w2, #0x4a
00444cd4  bl       #0xc48800  ; <__strrchr_chk>
00444cd8  cbz      x0, #0x444cf4
00444cdc  adrp     x0, #0x151000
00444ce0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444ce4  mov      w1, #0x2f
00444ce8  mov      w2, #0x4a
00444cec  bl       #0xc48800  ; <__strrchr_chk>
00444cf0  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
00444cf4  adrp     x23, #0x13e000
00444cf8  add      x23, x23, #0xc70  ; "[%s:%d] matting error %d.
"
00444cfc  adrp     x0, #0x177000
00444d00  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00444d04  mov      w1, #1
00444d08  mov      x2, x23
00444d0c  mov      x3, x22
00444d10  mov      w4, #0x34b
00444d14  mov      w5, w20
00444d18  bl       #0x484908
00444d1c  adrp     x22, #0x151000
00444d20  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444d24  ldur     q0, [x23, #0xb]
00444d28  add      x8, sp, #0x7e0
00444d2c  ldr      q1, [x23]
00444d30  mov      x0, x22
00444d34  mov      w1, #0x2f
00444d38  mov      w2, #0x4a
00444d3c  ldr      x23, [x25]
00444d40  stur     q0, [x8, #0xb]
00444d44  str      q1, [x8]
00444d48  strb     wzr, [sp, #0x7f9]
00444d4c  bl       #0xc48800  ; <__strrchr_chk>
00444d50  cbz      x0, #0x444d6c
00444d54  adrp     x0, #0x151000
00444d58  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444d5c  mov      w1, #0x2f
00444d60  mov      w2, #0x4a
00444d64  bl       #0xc48800  ; <__strrchr_chk>
00444d68  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
00444d6c  adrp     x1, #0x177000
00444d70  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00444d74  add      x2, sp, #0x7e0
00444d78  mov      w0, #1
00444d7c  mov      x3, x22
00444d80  mov      w4, #0x34b
00444d84  mov      w5, w20
00444d88  blr      x23
00444d8c  adrp     x20, #0x151000
00444d90  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444d94  mov      x0, x20
00444d98  mov      w1, #0x2f
00444d9c  mov      w2, #0x4a
00444da0  bl       #0xc48800  ; <__strrchr_chk>
00444da4  cbz      x0, #0x444dc0
00444da8  adrp     x0, #0x151000
00444dac  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444db0  mov      w1, #0x2f
00444db4  mov      w2, #0x4a
00444db8  bl       #0xc48800  ; <__strrchr_chk>
00444dbc  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00444dc0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00444dc4  sub      x8, x0, x21
00444dc8  adrp     x22, #0x136000
00444dcc  add      x22, x22, #0xbf6  ; "[%s:%d] duration of m_humseg/exec is %.3fms.
"
00444dd0  adrp     x0, #0x177000
00444dd4  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00444dd8  mov      w1, #2
00444ddc  scvtf    d0, x8
00444de0  mov      x2, x22
00444de4  mov      x3, x20
00444de8  mov      w4, #0x34e
00444dec  fmul     d0, d0, d8
00444df0  bl       #0x484908
00444df4  ldur     q0, [x22, #0x1e]
00444df8  add      x8, sp, #0x7e0
00444dfc  ldp      q1, q2, [x22]
00444e00  adrp     x20, #0x151000
00444e04  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444e08  stur     q0, [x8, #0x1e]
00444e0c  add      x8, sp, #0x7e0
00444e10  mov      x0, x20
00444e14  mov      w1, #0x2f
00444e18  mov      w2, #0x4a
00444e1c  strb     wzr, [sp, #0x80c]
00444e20  ldr      x22, [x25]
00444e24  stp      q1, q2, [x8]
00444e28  bl       #0xc48800  ; <__strrchr_chk>
00444e2c  cbz      x0, #0x444e48
00444e30  adrp     x0, #0x151000
00444e34  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00444e38  mov      w1, #0x2f
00444e3c  mov      w2, #0x4a
00444e40  bl       #0xc48800  ; <__strrchr_chk>
00444e44  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00444e48  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00444e4c  sub      x8, x0, x21
00444e50  adrp     x1, #0x177000
00444e54  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00444e58  add      x2, sp, #0x7e0
00444e5c  mov      w0, #2
00444e60  mov      x3, x20
00444e64  scvtf    d0, x8
00444e68  mov      w4, #0x34e
00444e6c  fmul     d0, d0, d8
00444e70  blr      x22
00444e74  mov      x0, x19
00444e78  mov      w1, #3
00444e7c  bl       #0x447074
00444e80  ldr      x8, [x19, #0xb8]  ; =0x1510b8
00444e84  add      x0, sp, #0x780
00444e88  mov      w1, #0x300
00444e8c  mov      w2, #0x300
00444e90  mov      w3, wzr
00444e94  mov      x5, xzr
00444e98  ldr      x4, [x8, #0x30]
00444e9c  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00444ea0  ldrb     w23, [x19, #0x438]  ; =0x151438
00444ea4  ldr      x8, [x19, #0x440]  ; =0x151440
00444ea8  lsr      x9, x23, #1
00444eac  tst      w23, #1
00444eb0  csel     x21, x9, x8, eq
00444eb4  add      x25, x21, #0x10  ; "path"
00444eb8  cmn      x25, #0x11
00444ebc  b.hi     #0x44677c
00444ec0  ldr      w20, [x19, #0x310]  ; =0x151310
00444ec4  cmp      x25, #0x16
00444ec8  b.hi     #0x444f18
00444ecc  and      w8, w25, #0xff
00444ed0  mov      x0, xzr
00444ed4  lsl      w8, w8, #1
00444ed8  stp      xzr, xzr, [sp, #0x148]
00444edc  str      xzr, [sp, #0x158]
00444ee0  strb     w8, [sp, #0x148]
00444ee4  b        #0x444f38
00444ee8  ldr      x0, [sp, #0x170]
00444eec  bl       #0xc48850  ; <_ZdlPv>
00444ef0  ldrb     w8, [sp, #0x178]
00444ef4  tbz      w8, #0, #0x444c0c
00444ef8  ldr      x0, [sp, #0x188]
00444efc  bl       #0xc48850  ; <_ZdlPv>
00444f00  ldp      x9, x8, [x19, #0xa8]
00444f04  ldr      x0, [x19, #0x98]  ; =0x151098
00444f08  str      x9, [sp, #0x7e0]
00444f0c  str      x8, [sp, #0x7e8]
00444f10  cbnz     x8, #0x444c20
00444f14  b        #0x444c2c
00444f18  orr      x8, x25, #0xf
00444f1c  add      x22, x8, #1
00444f20  mov      x0, x22
00444f24  bl       #0xc48840  ; <_Znwm>
00444f28  orr      x9, x22, #1
00444f2c  stp      x25, x0, [sp, #0x150]
00444f30  and      w8, w9, #0xff
00444f34  str      x9, [sp, #0x148]
00444f38  add      x9, sp, #0x148
00444f3c  ldr      x10, [x19, #0x448]  ; =0x151448
00444f40  orr      x9, x9, #1
00444f44  tst      w8, #1
00444f48  csel     x0, x9, x0, eq
00444f4c  tst      w23, #1
00444f50  csel     x1, x26, x10, eq
00444f54  mov      x2, x21
00444f58  add      x22, x0, x21
00444f5c  bl       #0xc48970  ; <memmove>
00444f60  adrp     x8, #0x111000
00444f64  add      x8, x8, #0x2ec  ; "matting_mask.png"
00444f68  strb     wzr, [x22, #0x10]
00444f6c  ldr      q0, [x8]
00444f70  str      q0, [x22]
00444f74  add      x0, sp, #0x720
00444f78  add      x1, sp, #0x780
00444f7c  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
00444f80  add      x1, sp, #0x148
00444f84  add      x2, sp, #0x720
00444f88  mov      w0, w20
00444f8c  mov      w3, #1
00444f90  mov      w4, wzr
00444f94  bl       #0x43b3a8
00444f98  add      x0, sp, #0x720
00444f9c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00444fa0  ldrb     w8, [sp, #0x148]
00444fa4  tbz      w8, #0, #0x444fb0
00444fa8  ldr      x0, [sp, #0x158]
00444fac  bl       #0xc48850  ; <_ZdlPv>
00444fb0  ldrb     w23, [x19, #0x438]  ; =0x151438
00444fb4  ldr      x8, [x19, #0x440]  ; =0x151440
00444fb8  lsr      x9, x23, #1
00444fbc  tst      w23, #1
00444fc0  csel     x21, x9, x8, eq
00444fc4  add      x25, x21, #0x12  ; =0x15c012
00444fc8  cmn      x25, #0x10
00444fcc  b.hs     #0x446784
00444fd0  ldr      w20, [x19, #0x310]  ; =0x151310
00444fd4  cmp      x25, #0x16
00444fd8  b.hi     #0x444ff8
00444fdc  and      w8, w25, #0xff
00444fe0  mov      x0, xzr
00444fe4  lsl      w8, w8, #1
00444fe8  stp      xzr, xzr, [sp, #0x130]
00444fec  str      xzr, [sp, #0x140]
00444ff0  strb     w8, [sp, #0x130]
00444ff4  b        #0x445018
00444ff8  orr      x8, x25, #0xf
00444ffc  add      x22, x8, #1  ; "runner/builds/AhMAQDyC/2/mi-camera-algorithm/engine/mage/mage2.0/src/runtime/nn/private/xnn/xnn_executor_impl_x.inl"
00445000  mov      x0, x22
00445004  bl       #0xc48840  ; <_Znwm>
00445008  orr      x9, x22, #1
0044500c  stp      x25, x0, [sp, #0x138]
00445010  and      w8, w9, #0xff
00445014  str      x9, [sp, #0x130]
00445018  add      x9, sp, #0x130
0044501c  ldr      x10, [x19, #0x448]  ; =0x151448
00445020  orr      x9, x9, #1
00445024  tst      w8, #1
00445028  csel     x0, x9, x0, eq
0044502c  tst      w23, #1
00445030  csel     x1, x26, x10, eq
00445034  mov      x2, x21
00445038  add      x22, x0, x21
0044503c  bl       #0xc48970  ; <memmove>
00445040  adrp     x9, #0x16a000
00445044  add      x9, x9, #0x945  ; "matting_output.dat"
00445048  mov      w8, #0x7461
0044504c  strb     wzr, [x22, #0x12]
00445050  ldr      q0, [x9]
00445054  ldr      x9, [x19, #0xb8]  ; =0x1510b8
00445058  strh     w8, [x22, #0x10]
0044505c  str      q0, [x22]
00445060  ldp      x12, x8, [x9, #0x10]
00445064  ldr      x2, [x9, #0x30]  ; =0x16a030
00445068  cmp      x12, x8
0044506c  b.eq     #0x44508c
00445070  sub      x9, x8, x12
00445074  sub      x9, x9, #8
00445078  cmp      x9, #0x38
0044507c  b.hs     #0x445094
00445080  mov      w3, #1
00445084  mov      x9, x12
00445088  b        #0x4450f4
0044508c  mov      w3, #1
00445090  b        #0x445104
00445094  lsr      x9, x9, #3
00445098  add      x10, x9, #1  ; ":merge32s(const int **, int *, int, int)"
0044509c  and      x11, x10, #0x3ffffffffffffff8
004450a0  movi     v0.4s, #1
004450a4  mov      x13, x11
004450a8  movi     v1.4s, #1
004450ac  add      x9, x12, x11, lsl #3
004450b0  add      x12, x12, #0x20
004450b4  ldp      q3, q2, [x12, #-0x20]
004450b8  subs     x13, x13, #8
004450bc  ldp      q5, q4, [x12], #0x40
004450c0  uzp1     v2.4s, v3.4s, v2.4s
004450c4  uzp1     v3.4s, v5.4s, v4.4s
004450c8  mul      v0.4s, v0.4s, v2.4s
004450cc  mul      v1.4s, v1.4s, v3.4s
004450d0  b.ne     #0x4450b4
004450d4  mul      v0.4s, v1.4s, v0.4s
004450d8  cmp      x10, x11
004450dc  ext      v1.16b, v0.16b, v0.16b, #8
004450e0  mul      v0.2s, v0.2s, v1.2s
004450e4  mov      w12, v0.s[1]
004450e8  fmov     w13, s0
004450ec  mul      w3, w13, w12
004450f0  b.eq     #0x445104
004450f4  ldr      w10, [x9], #8  ; =0x16a008
004450f8  cmp      x9, x8
004450fc  mul      w3, w3, w10
00445100  b.ne     #0x4450f4
00445104  mov      w9, #0x6962
00445108  mov      w8, #0xc
0044510c  movk     w9, #0x616e, lsl #16
00445110  mov      w10, #0x7972
00445114  strb     wzr, [sp, #0x11f]
00445118  strb     w8, [sp, #0x118]
0044511c  stur     w9, [x24, #1]
00445120  sturh    w10, [x24, #5]
00445124  add      x1, sp, #0x130
00445128  add      x4, sp, #0x118
0044512c  mov      w0, w20
00445130  bl       #0x43b0c4
00445134  ldrb     w8, [sp, #0x118]
00445138  tbz      w8, #0, #0x445144
0044513c  ldr      x0, [sp, #0x128]
00445140  bl       #0xc48850  ; <_ZdlPv>
00445144  ldrb     w8, [sp, #0x130]
00445148  tbz      w8, #0, #0x445154
0044514c  ldr      x0, [sp, #0x140]
00445150  bl       #0xc48850  ; <_ZdlPv>
00445154  mov      x0, x19
00445158  bl       #0x446bcc
0044515c  cbz      w0, #0x445194
00445160  adrp     x0, #0x151000
00445164  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445168  mov      w1, #0x2f
0044516c  mov      w2, #0x4a
00445170  bl       #0xc48800  ; <__strrchr_chk>
00445174  cbz      x0, #0x445250
00445178  adrp     x0, #0x151000
0044517c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445180  mov      w1, #0x2f
00445184  mov      w2, #0x4a
00445188  bl       #0xc48800  ; <__strrchr_chk>
0044518c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00445190  b        #0x445258
00445194  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00445198  ldr      x8, [x19, #0xc8]  ; =0x1510c8
0044519c  mov      x20, x0
004451a0  ldr      x4, [x8, #0x30]  ; =0x111030
004451a4  add      x0, sp, #0x6c0
004451a8  mov      w1, #0x300
004451ac  mov      w2, #0x400
004451b0  mov      w3, wzr
004451b4  mov      x5, xzr
004451b8  add      x21, sp, #0x6c0
004451bc  str      x28, [sp, #0x20]
004451c0  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
004451c4  mov      w8, #0x1010000
004451c8  add      x9, sp, #0x780
004451cc  mov      w10, #0x2010000
004451d0  str      xzr, [sp, #0x7f0]
004451d4  str      xzr, [sp, #0x610]
004451d8  str      w8, [sp, #0x7e0]
004451dc  str      x9, [sp, #0x7e8]
004451e0  str      w10, [sp, #0x600]
004451e4  str      x21, [sp, #0x608]
004451e8  movi     d0, #0000000000000000
004451ec  movi     d1, #0000000000000000
004451f0  mov      x2, #0x400
004451f4  add      x0, sp, #0x7e0
004451f8  add      x1, sp, #0x600
004451fc  movk     x2, #0x300, lsl #32
00445200  mov      w3, #3
00445204  bl       #0xc48be0  ; <_ZN2cv6resizeERKNS_11_InputArrayERKNS_12_OutputArrayENS_5Size_IiEEddi>
00445208  ldrb     w24, [x19, #0x438]  ; =0x151438
0044520c  ldr      x8, [x19, #0x440]  ; =0x151440
00445210  lsr      x9, x24, #1
00445214  tst      w24, #1
00445218  csel     x22, x9, x8, eq
0044521c  add      x25, x22, #0x17  ; "MNMa IMNMNb NPONQMSMVNXPYSYUXXVZS[Q[OZNX WPXRXVWX SMUNVOWRWVVYUZS[ IbQb JMLN KMLO LaJb L`Kb N`Ob NaPb"
00445220  cmn      x25, #0x10
00445224  b.hs     #0x44679c
00445228  ldr      w21, [x19, #0x310]  ; =0x151310
0044522c  cmn      x22, #0x17
00445230  b.lo     #0x445328
00445234  and      w8, w25, #0xff
00445238  mov      x0, xzr
0044523c  lsl      w8, w8, #1
00445240  stp      xzr, xzr, [sp, #0x100]
00445244  str      xzr, [sp, #0x110]
00445248  strb     w8, [sp, #0x100]
0044524c  b        #0x445348
00445250  adrp     x3, #0x151000
00445254  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445258  adrp     x19, #0x12f000
0044525c  add      x19, x19, #0x35b  ; "[%s:%d] model init failed, bypass styletrans.
"
00445260  adrp     x0, #0x177000
00445264  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00445268  mov      w1, #2
0044526c  mov      x2, x19
00445270  mov      w4, #0x359
00445274  bl       #0x484908
00445278  ldp      q0, q1, [x19]
0044527c  add      x8, sp, #0x7e0
00445280  ldur     q2, [x19, #0x1f]
00445284  stp      q0, q1, [x8]
00445288  stur     q2, [x8, #0x1f]
0044528c  mov      x0, x19
00445290  mov      w1, #0x2f
00445294  bl       #0xc48820  ; <__strlen_chk>
00445298  adrp     x9, #0xc78000
0044529c  add      x8, sp, #0x7e0
004452a0  add      x8, x0, x8
004452a4  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
004452a8  sturb    wzr, [x8, #-1]
004452ac  ldr      x19, [x9]
004452b0  adrp     x0, #0x151000
004452b4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004452b8  mov      w1, #0x2f
004452bc  mov      w2, #0x4a
004452c0  bl       #0xc48800  ; <__strrchr_chk>
004452c4  cbz      x0, #0x4452e4
004452c8  adrp     x0, #0x151000
004452cc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004452d0  mov      w1, #0x2f
004452d4  mov      w2, #0x4a
004452d8  bl       #0xc48800  ; <__strrchr_chk>
004452dc  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004452e0  b        #0x4452ec
004452e4  adrp     x3, #0x151000
004452e8  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004452ec  adrp     x1, #0x177000
004452f0  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004452f4  add      x2, sp, #0x7e0
004452f8  mov      w0, #2
004452fc  mov      w4, #0x359
00445300  blr      x19
00445304  mov      w19, #0x6524
00445308  movk     w19, #0x11, lsl #16
0044530c  add      x0, sp, #0x780
00445310  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00445314  ldr      x8, [x28, #0x28]
00445318  ldur     x9, [x29, #-0x28]
0044531c  cmp      x8, x9
00445320  b.eq     #0x446420
00445324  b        #0x446bc8
00445328  orr      x8, x25, #0xf
0044532c  add      x23, x8, #1  ; "runner/builds/AhMAQDyC/2/mi-camera-algorithm/engine/mage/mage2.0/src/runtime/nn/private/xnn/xnn_executor_impl_x.inl"
00445330  mov      x0, x23
00445334  bl       #0xc48840  ; <_Znwm>
00445338  orr      x9, x23, #1
0044533c  stp      x25, x0, [sp, #0x108]
00445340  and      w8, w9, #0xff
00445344  str      x9, [sp, #0x100]
00445348  add      x9, sp, #0x100
0044534c  ldr      x10, [x19, #0x448]  ; =0x12f448
00445350  orr      x9, x9, #1
00445354  tst      w8, #1
00445358  csel     x0, x9, x0, eq
0044535c  tst      w24, #1
00445360  csel     x1, x26, x10, eq
00445364  mov      x2, x22
00445368  add      x23, x0, x22
0044536c  bl       #0xc48970  ; <memmove>
00445370  adrp     x8, #0x171000
00445374  add      x8, x8, #0xa84  ; "matting_mask_resize.png"
00445378  strb     wzr, [x23, #0x17]
0044537c  ldr      q0, [x8]
00445380  ldur     x8, [x8, #0xf]
00445384  str      q0, [x23]
00445388  stur     x8, [x23, #0xf]
0044538c  add      x0, sp, #0x660
00445390  add      x1, sp, #0x6c0
00445394  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
00445398  add      x1, sp, #0x100
0044539c  add      x2, sp, #0x660
004453a0  mov      w0, w21
004453a4  mov      w3, #1
004453a8  mov      w4, wzr
004453ac  bl       #0x43b3a8
004453b0  add      x0, sp, #0x660
004453b4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004453b8  ldrb     w8, [sp, #0x100]
004453bc  tbz      w8, #0, #0x4453c8
004453c0  ldr      x0, [sp, #0x110]
004453c4  bl       #0xc48850  ; <_ZdlPv>
004453c8  adrp     x0, #0x151000
004453cc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004453d0  mov      w1, #0x2f
004453d4  mov      w2, #0x4a
004453d8  bl       #0xc48800  ; <__strrchr_chk>
004453dc  cbz      x0, #0x4453fc
004453e0  adrp     x0, #0x151000
004453e4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004453e8  mov      w1, #0x2f
004453ec  mov      w2, #0x4a
004453f0  bl       #0xc48800  ; <__strrchr_chk>
004453f4  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
004453f8  b        #0x445404
004453fc  adrp     x22, #0x151000
00445400  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445404  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00445408  sub      x8, x0, x20
0044540c  scvtf    d0, x8
00445410  fmul     d0, d0, d8
00445414  adrp     x21, #0x167000
00445418  add      x21, x21, #0x8d3  ; "[%s:%d] duration of mask resize to 768*1024 is %.3fms.
"
0044541c  adrp     x0, #0x177000
00445420  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00445424  mov      w1, #2
00445428  mov      x2, x21
0044542c  mov      x3, x22
00445430  mov      w4, #0x364
00445434  bl       #0x484908
00445438  ldp      q0, q1, [x21]
0044543c  add      x25, sp, #0x7e0
00445440  ldr      q2, [x21, #0x20]  ; =0x167020
00445444  stp      q0, q1, [x25]
00445448  ldr      x8, [x21, #0x30]  ; =0x167030
0044544c  str      q2, [x25, #0x20]  ; =0xc78020
00445450  str      x8, [sp, #0x810]
00445454  mov      x0, x21
00445458  mov      w1, #0x38
0044545c  bl       #0xc48820  ; <__strlen_chk>
00445460  adrp     x9, #0xc78000
00445464  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00445468  add      x8, sp, #0x7e0
0044546c  ldr      x22, [x9]
00445470  add      x8, x0, x8
00445474  sturb    wzr, [x8, #-1]
00445478  adrp     x0, #0x151000
0044547c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445480  mov      w1, #0x2f
00445484  mov      w2, #0x4a
00445488  bl       #0xc48800  ; <__strrchr_chk>
0044548c  cbz      x0, #0x4454ac
00445490  adrp     x0, #0x151000
00445494  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445498  mov      w1, #0x2f
0044549c  mov      w2, #0x4a
004454a0  bl       #0xc48800  ; <__strrchr_chk>
004454a4  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
004454a8  b        #0x4454b4
004454ac  adrp     x21, #0x151000
004454b0  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004454b4  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
004454b8  sub      x8, x0, x20
004454bc  scvtf    d0, x8
004454c0  fmul     d0, d0, d8
004454c4  adrp     x1, #0x177000
004454c8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004454cc  add      x2, sp, #0x7e0
004454d0  mov      w0, #2
004454d4  mov      x3, x21
004454d8  mov      w4, #0x364
004454dc  blr      x22
004454e0  ldr      x8, [x19, #0x2b8]  ; =0x12f2b8
004454e4  ldr      x9, [x19, #0xe8]  ; =0x12f0e8
004454e8  ldp      x21, x20, [x8]
004454ec  ldr      x4, [x9, #0x30]  ; =0xc78030
004454f0  add      x0, sp, #0x600
004454f4  mov      w1, w21
004454f8  mov      w2, w20
004454fc  mov      w3, #0x10
00445500  mov      x5, xzr
00445504  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00445508  add      x22, x21, #0x60  ; =0x151060
0044550c  add      x23, x20, #0x60  ; =0x151060
00445510  add      x0, sp, #0x5a0
00445514  mov      w1, w22
00445518  mov      w2, w23
0044551c  mov      w3, #0x10
00445520  add      x24, sp, #0x5a0
00445524  bl       #0xc48c00  ; <_ZN2cv3MatC1Eiii>
00445528  movi     v0.2d, #0000000000000000
0044552c  mov      w8, #0x1010000
00445530  add      x9, sp, #0x600
00445534  mov      w10, #0x2010000
00445538  str      xzr, [sp, #0x550]
0044553c  str      w8, [sp, #0x540]
00445540  str      x9, [sp, #0x548]
00445544  str      w10, [sp, #0x4e0]
00445548  str      xzr, [sp, #0x4f0]
0044554c  str      x24, [sp, #0x4e8]
00445550  stp      q0, q0, [x25]
00445554  add      x0, sp, #0x540
00445558  add      x1, sp, #0x4e0
0044555c  add      x7, sp, #0x7e0
00445560  mov      w2, #0x30
00445564  mov      w3, #0x30
00445568  mov      w4, #0x30
0044556c  mov      w5, #0x30
00445570  mov      w6, #2
00445574  bl       #0xc48bb0  ; <_ZN2cv14copyMakeBorderERKNS_11_InputArrayERKNS_12_OutputArrayEiiiiiRKNS_7Scalar_IdEE>
00445578  ldr      x8, [x19, #0xc8]  ; =0x12f0c8
0044557c  ldr      x4, [x8, #0x30]  ; =0x171030
00445580  add      x0, sp, #0x540
00445584  mov      w1, w21
00445588  mov      w2, w20
0044558c  mov      w3, wzr
00445590  mov      x5, xzr
00445594  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00445598  add      x0, sp, #0x4e0
0044559c  mov      w1, w22
004455a0  mov      w2, w23
004455a4  mov      w3, wzr
004455a8  add      x24, sp, #0x4e0
004455ac  bl       #0xc48c00  ; <_ZN2cv3MatC1Eiii>
004455b0  movi     v0.2d, #0000000000000000
004455b4  mov      w8, #0x1010000
004455b8  add      x9, sp, #0x540
004455bc  mov      w10, #0x2010000
004455c0  str      xzr, [sp, #0x2f8]
004455c4  str      w8, [sp, #0x2e8]
004455c8  str      x9, [sp, #0x2f0]
004455cc  str      w10, [sp, #0x288]
004455d0  str      xzr, [sp, #0x298]
004455d4  str      x24, [sp, #0x290]
004455d8  stp      q0, q0, [x25]
004455dc  add      x0, sp, #0x2e8
004455e0  add      x1, sp, #0x288
004455e4  add      x7, sp, #0x7e0
004455e8  mov      w2, #0x30
004455ec  mov      w3, #0x30
004455f0  mov      w4, #0x30
004455f4  mov      w5, #0x30
004455f8  mov      w6, wzr
004455fc  bl       #0xc48bb0  ; <_ZN2cv14copyMakeBorderERKNS_11_InputArrayERKNS_12_OutputArrayEiiiiiRKNS_7Scalar_IdEE>
00445600  ldrb     w27, [x19, #0x438]  ; =0x12f438
00445604  str      x21, [sp, #0x18]
00445608  ldr      x8, [x19, #0x440]  ; =0x12f440
0044560c  lsr      x9, x27, #1
00445610  tst      w27, #1
00445614  csel     x25, x9, x8, eq
00445618  add      x28, x25, #0x14  ; =0xc78014
0044561c  cmn      x28, #0x11
00445620  b.hi     #0x4467b4
00445624  ldr      w24, [x19, #0x310]  ; =0x12f310
00445628  mov      x21, x26
0044562c  cmp      x28, #0x16
00445630  b.hi     #0x445650
00445634  and      w8, w28, #0xff
00445638  mov      x0, xzr
0044563c  lsl      w8, w8, #1
00445640  stp      xzr, xzr, [sp, #0xe8]
00445644  str      xzr, [sp, #0xf8]
00445648  strb     w8, [sp, #0xe8]
0044564c  b        #0x445674
00445650  orr      x8, x28, #0xf
00445654  add      x26, x8, #1  ; "uchar *, size_t, uchar *, size_t, cv::Size, void *)"
00445658  mov      x0, x26
0044565c  bl       #0xc48840  ; <_Znwm>
00445660  orr      x9, x26, #1
00445664  mov      x26, x21
00445668  and      w8, w9, #0xff
0044566c  stp      x28, x0, [sp, #0xf0]
00445670  str      x9, [sp, #0xe8]
00445674  add      x9, sp, #0xe8
00445678  ldr      x10, [x19, #0x448]  ; =0x12f448
0044567c  orr      x9, x9, #1
00445680  tst      w8, #1
00445684  csel     x0, x9, x0, eq
00445688  tst      w27, #1
0044568c  csel     x1, x26, x10, eq
00445690  mov      x2, x25
00445694  add      x26, x0, x25
00445698  bl       #0xc48970  ; <memmove>
0044569c  adrp     x9, #0x157000
004456a0  add      x9, x9, #0x31d  ; "styletrans_input.png"
004456a4  mov      w8, #0x702e
004456a8  strb     wzr, [x26, #0x14]
004456ac  movk     w8, #0x676e, lsl #16
004456b0  ldr      q0, [x9]
004456b4  str      w8, [x26, #0x10]
004456b8  str      q0, [x26]
004456bc  add      x0, sp, #0x480
004456c0  add      x1, sp, #0x600
004456c4  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
004456c8  add      x1, sp, #0xe8
004456cc  add      x2, sp, #0x480
004456d0  mov      w0, w24
004456d4  mov      w3, wzr
004456d8  mov      w4, wzr
004456dc  bl       #0x43b3a8
004456e0  add      x0, sp, #0x480
004456e4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004456e8  ldrb     w8, [sp, #0xe8]
004456ec  tbz      w8, #0, #0x4456f8
004456f0  ldr      x0, [sp, #0xf8]
004456f4  bl       #0xc48850  ; <_ZdlPv>
004456f8  ldrb     w27, [x19, #0x438]  ; =0x12f438
004456fc  ldr      x8, [x19, #0x440]  ; =0x12f440
00445700  lsr      x9, x27, #1
00445704  tst      w27, #1
00445708  csel     x25, x9, x8, eq
0044570c  add      x28, x25, #0x16  ; =0xc78016
00445710  cmn      x28, #0x11
00445714  b.hi     #0x4467bc
00445718  ldr      w24, [x19, #0x310]  ; =0x12f310
0044571c  cmp      x28, #0x16
00445720  b.hi     #0x445740
00445724  and      w8, w28, #0xff
00445728  mov      x0, xzr
0044572c  lsl      w8, w8, #1
00445730  stp      xzr, xzr, [sp, #0xd0]
00445734  str      xzr, [sp, #0xe0]
00445738  strb     w8, [sp, #0xd0]
0044573c  b        #0x445760
00445740  orr      x8, x28, #0xf
00445744  add      x26, x8, #1  ; "uchar *, size_t, uchar *, size_t, cv::Size, void *)"
00445748  mov      x0, x26
0044574c  bl       #0xc48840  ; <_Znwm>
00445750  orr      x9, x26, #1
00445754  stp      x28, x0, [sp, #0xd8]
00445758  and      w8, w9, #0xff
0044575c  str      x9, [sp, #0xd0]
00445760  add      x9, sp, #0xd0
00445764  ldr      x10, [x19, #0x448]  ; =0x12f448
00445768  orr      x9, x9, #1
0044576c  tst      w8, #1
00445770  csel     x0, x9, x0, eq
00445774  tst      w27, #1
00445778  csel     x1, x21, x10, eq
0044577c  mov      x2, x25
00445780  add      x26, x0, x25
00445784  bl       #0xc48970  ; <memmove>
00445788  adrp     x8, #0x177000
0044578c  add      x8, x8, #0x33c  ; "styletrans_matting.png"
00445790  strb     wzr, [x26, #0x16]
00445794  ldr      q0, [x8]
00445798  ldur     x8, [x8, #0xe]
0044579c  str      q0, [x26]
004457a0  stur     x8, [x26, #0xe]
004457a4  add      x0, sp, #0x420
004457a8  add      x1, sp, #0x540
004457ac  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
004457b0  add      x1, sp, #0xd0
004457b4  add      x2, sp, #0x420
004457b8  mov      w0, w24
004457bc  mov      w3, #1
004457c0  mov      w4, wzr
004457c4  bl       #0x43b3a8
004457c8  add      x0, sp, #0x420
004457cc  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004457d0  ldrb     w8, [sp, #0xd0]
004457d4  tbz      w8, #0, #0x4457e0
004457d8  ldr      x0, [sp, #0xe0]
004457dc  bl       #0xc48850  ; <_ZdlPv>
004457e0  ldrb     w27, [x19, #0x438]  ; =0x12f438
004457e4  ldr      x8, [x19, #0x440]  ; =0x12f440
004457e8  lsr      x9, x27, #1
004457ec  tst      w27, #1
004457f0  csel     x25, x9, x8, eq
004457f4  add      x28, x25, #0x18  ; =0xc78018
004457f8  cmn      x28, #0x11
004457fc  b.hi     #0x4467c4
00445800  ldr      w24, [x19, #0x310]  ; =0x12f310
00445804  cmp      x28, #0x16
00445808  b.hi     #0x445828
0044580c  and      w8, w28, #0xff
00445810  mov      x0, xzr
00445814  lsl      w8, w8, #1
00445818  stp      xzr, xzr, [sp, #0xb8]
0044581c  str      xzr, [sp, #0xc8]
00445820  strb     w8, [sp, #0xb8]
00445824  b        #0x445848
00445828  orr      x8, x28, #0xf
0044582c  add      x26, x8, #1  ; "kend="
00445830  mov      x0, x26
00445834  bl       #0xc48840  ; <_Znwm>
00445838  orr      x9, x26, #1
0044583c  stp      x28, x0, [sp, #0xc0]
00445840  and      w8, w9, #0xff
00445844  str      x9, [sp, #0xb8]
00445848  add      x9, sp, #0xb8
0044584c  ldr      x10, [x19, #0x448]  ; =0x12f448
00445850  orr      x9, x9, #1
00445854  tst      w8, #1
00445858  csel     x0, x9, x0, eq
0044585c  tst      w27, #1
00445860  csel     x1, x21, x10, eq
00445864  mov      x2, x25
00445868  add      x26, x0, x25
0044586c  bl       #0xc48970  ; <memmove>
00445870  adrp     x8, #0x15f000
00445874  add      x8, x8, #0x5b1  ; "styletrans_input_pad.png"
00445878  strb     wzr, [x26, #0x18]
0044587c  ldr      q0, [x8]
00445880  ldr      x8, [x8, #0x10]  ; =0x15f010
00445884  str      q0, [x26]
00445888  str      x8, [x26, #0x10]
0044588c  add      x0, sp, #0x3c0
00445890  add      x1, sp, #0x5a0
00445894  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
00445898  add      x1, sp, #0xb8
0044589c  add      x2, sp, #0x3c0
004458a0  mov      w0, w24
004458a4  mov      w3, wzr
004458a8  mov      w4, wzr
004458ac  bl       #0x43b3a8
004458b0  add      x0, sp, #0x3c0
004458b4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004458b8  ldrb     w8, [sp, #0xb8]
004458bc  tbz      w8, #0, #0x4458c8
004458c0  ldr      x0, [sp, #0xc8]
004458c4  bl       #0xc48850  ; <_ZdlPv>
004458c8  ldrb     w27, [x19, #0x438]  ; =0x12f438
004458cc  ldr      x8, [x19, #0x440]  ; =0x12f440
004458d0  lsr      x9, x27, #1
004458d4  tst      w27, #1
004458d8  csel     x25, x9, x8, eq
004458dc  add      x28, x25, #0x1a  ; =0xc7801a
004458e0  cmn      x28, #0x10
004458e4  b.hs     #0x4467cc
004458e8  ldr      w24, [x19, #0x310]  ; =0x12f310
004458ec  cmp      x28, #0x16
004458f0  b.hi     #0x445910
004458f4  and      w8, w28, #0xff
004458f8  mov      x0, xzr
004458fc  lsl      w8, w8, #1
00445900  stp      xzr, xzr, [sp, #0xa0]
00445904  str      xzr, [sp, #0xb0]
00445908  strb     w8, [sp, #0xa0]
0044590c  b        #0x445930
00445910  orr      x8, x28, #0xf
00445914  add      x26, x8, #1  ; "elper"
00445918  mov      x0, x26
0044591c  bl       #0xc48840  ; <_Znwm>
00445920  orr      x9, x26, #1
00445924  stp      x28, x0, [sp, #0xa8]
00445928  and      w8, w9, #0xff
0044592c  str      x9, [sp, #0xa0]
00445930  add      x9, sp, #0xa0
00445934  ldr      x10, [x19, #0x448]  ; =0x12f448
00445938  orr      x9, x9, #1
0044593c  tst      w8, #1
00445940  csel     x0, x9, x0, eq
00445944  tst      w27, #1
00445948  csel     x1, x21, x10, eq
0044594c  mov      x2, x25
00445950  add      x26, x0, x25
00445954  bl       #0xc48970  ; <memmove>
00445958  adrp     x8, #0x15c000
0044595c  add      x8, x8, #0x3f4  ; "styletrans_matting_pad.png"
00445960  strb     wzr, [x26, #0x1a]
00445964  ldr      q0, [x8]
00445968  ldur     q1, [x8, #0xa]
0044596c  str      q0, [x26]
00445970  stur     q1, [x26, #0xa]
00445974  add      x0, sp, #0x360
00445978  add      x1, sp, #0x4e0
0044597c  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
00445980  add      x1, sp, #0xa0
00445984  add      x2, sp, #0x360
00445988  mov      w0, w24
0044598c  mov      w3, #1
00445990  mov      w4, wzr
00445994  bl       #0x43b3a8
00445998  add      x0, sp, #0x360
0044599c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004459a0  ldrb     w8, [sp, #0xa0]
004459a4  tbz      w8, #0, #0x4459b0
004459a8  ldr      x0, [sp, #0xb0]
004459ac  bl       #0xc48850  ; <_ZdlPv>
004459b0  cbz      x22, #0x445ba0
004459b4  cbz      x23, #0x445ba0
004459b8  ldr      x12, [x19, #0x118]  ; =0x12f118
004459bc  add      x2, x20, #0x5f  ; =0x15105f
004459c0  ldr      x10, [sp, #0x5b0]
004459c4  lsl      x13, x20, #2
004459c8  ldr      x11, [sp, #0x4f0]
004459cc  add      x14, x20, x20, lsl #1
004459d0  ldr      x12, [x12, #0x30]
004459d4  mov      x8, xzr
004459d8  mov      x9, xzr
004459dc  add      x13, x13, #0x180
004459e0  add      x14, x14, #0x120
004459e4  lsl      x15, x2, #2
004459e8  and      x16, x23, #0xfffffffffffffff0
004459ec  and      x17, x23, #0xfffffffffffffff8
004459f0  add      x0, x10, #2
004459f4  add      x1, x12, #1
004459f8  lsr      x2, x2, #0x3e
004459fc  mov      x3, x10
00445a00  mov      x4, x12
00445a04  mov      x5, x11
00445a08  b        #0x445a28
00445a0c  add      x9, x9, #1  ; " failed"
00445a10  add      x5, x5, x23
00445a14  add      x4, x4, x13
00445a18  add      x3, x3, x14
00445a1c  add      x8, x8, x23
00445a20  cmp      x9, x22
00445a24  b.eq     #0x445ba0
00445a28  cmp      x23, #8
00445a2c  b.hs     #0x445a78
00445a30  mov      x6, xzr
00445a34  add      x24, x6, x8
00445a38  add      x7, x24, x24, lsl #1
00445a3c  add      x24, x1, x24, lsl #2
00445a40  add      x7, x0, x7
00445a44  ldurb    w25, [x7, #-2]
00445a48  sturb    w25, [x24, #-1]
00445a4c  ldurb    w25, [x7, #-1]
00445a50  strb     w25, [x24]
00445a54  ldrb     w25, [x7], #3
00445a58  strb     w25, [x24, #1]
00445a5c  ldrb     w25, [x5, x6]
00445a60  add      x6, x6, #1
00445a64  cmp      x23, x6
00445a68  strb     w25, [x24, #2]
00445a6c  add      x24, x24, #4  ; =0xc78004
00445a70  b.ne     #0x445a44
00445a74  b        #0x445a0c
00445a78  mul      x24, x13, x9
00445a7c  mov      x6, xzr
00445a80  add      x7, x12, x24
00445a84  add      x25, x7, x15
00445a88  cmp      x25, x7
00445a8c  b.lo     #0x445a34
00445a90  orr      x25, x24, #1
00445a94  add      x25, x12, x25
00445a98  add      x26, x25, x15
00445a9c  cmp      x26, x25
00445aa0  b.lo     #0x445a34
00445aa4  orr      x25, x24, #2
00445aa8  add      x25, x12, x25
00445aac  add      x26, x25, x15
00445ab0  cmp      x26, x25
00445ab4  b.lo     #0x445a34
00445ab8  orr      x25, x24, #3
00445abc  add      x25, x12, x25
00445ac0  add      x26, x25, x15
00445ac4  cmp      x26, x25
00445ac8  b.lo     #0x445a34
00445acc  cbnz     x2, #0x445a34
00445ad0  mul      x6, x23, x9
00445ad4  add      x24, x13, x24
00445ad8  add      x25, x12, x24
00445adc  mul      x26, x14, x9
00445ae0  add      x24, x23, x6
00445ae4  add      x6, x11, x6
00445ae8  add      x24, x11, x24
00445aec  cmp      x7, x24
00445af0  ccmp     x6, x25, #2, lo
00445af4  add      x6, x14, x26
00445af8  add      x26, x10, x26
00445afc  add      x6, x10, x6
00445b00  cset     w24, lo
00445b04  cmp      x26, x25
00445b08  ccmp     x7, x6, #2, lo
00445b0c  mov      x6, xzr
00445b10  b.lo     #0x445a34
00445b14  tbnz     w24, #0, #0x445a34
00445b18  cmp      x23, #0x10
00445b1c  b.hs     #0x445b64
00445b20  mov      x7, xzr
00445b24  lsl      x6, x7, #2
00445b28  add      x24, x7, x7, lsl #1
00445b2c  add      x25, x3, x24
00445b30  add      x24, x24, #0x18  ; =0xc78018
00445b34  ld3      {v0.8b, v1.8b, v2.8b}, [x25]
00445b38  add      x25, x4, x6
00445b3c  add      x6, x6, #0x20
00445b40  ldr      d3, [x5, x7]
00445b44  add      x7, x7, #8
00445b48  cmp      x17, x7
00445b4c  st4      {v0.8b, v1.8b, v2.8b, v3.8b}, [x25]
00445b50  b.ne     #0x445b2c
00445b54  mov      x6, x17
00445b58  cmp      x23, x17
00445b5c  b.eq     #0x445a0c
00445b60  b        #0x445a34
00445b64  mov      x6, x16
00445b68  mov      x7, x3
00445b6c  mov      x24, x4
00445b70  mov      x25, x5
00445b74  ld3      {v0.16b, v1.16b, v2.16b}, [x7], #48
00445b78  subs     x6, x6, #0x10
00445b7c  ldr      q3, [x25], #0x10  ; =0xc78010
00445b80  st4      {v0.16b, v1.16b, v2.16b, v3.16b}, [x24], #64
00445b84  b.ne     #0x445b74
00445b88  cmp      x23, x16
00445b8c  b.eq     #0x445a0c
00445b90  mov      x7, x16
00445b94  mov      x6, x16
00445b98  tbz      w20, #3, #0x445a34
00445b9c  b        #0x445b24
00445ba0  ldp      x8, x9, [x19, #0x150]
00445ba4  add      x26, x19, #0x148  ; "ImplV2201"
00445ba8  cmp      x8, x9
00445bac  b.eq     #0x445bdc
00445bb0  ldr      x9, [x19, #0x118]  ; =0x12f118
00445bb4  str      x9, [x8]
00445bb8  ldr      x9, [x19, #0x120]  ; =0x12f120
00445bbc  str      x9, [x8, #8]  ; =0x15c008
00445bc0  cbz      x9, #0x445bd0
00445bc4  add      x9, x9, #8  ; =0x157008
00445bc8  mov      w10, #1
00445bcc  ldadd    x10, x9, [x9]
00445bd0  add      x8, x8, #0x10  ; "path"
00445bd4  str      x8, [x19, #0x150]  ; =0x12f150
00445bd8  b        #0x445be8
00445bdc  add      x1, x19, #0x118  ; ":OFF"
00445be0  mov      x0, x26
00445be4  bl       #0x4522e0
00445be8  ldp      x8, x9, [x19, #0x168]
00445bec  add      x27, x19, #0x160  ; "mplV2311"
00445bf0  add      x1, x19, #0x128  ; "tributes failed, i="
00445bf4  str      x1, [sp, #0x10]
00445bf8  cmp      x8, x9
00445bfc  b.eq     #0x445c2c
00445c00  ldr      x9, [x19, #0x128]  ; =0x12f128
00445c04  str      x9, [x8]
00445c08  ldr      x9, [x19, #0x130]  ; =0x12f130
00445c0c  str      x9, [x8, #8]  ; =0x15c008
00445c10  cbz      x9, #0x445c20
00445c14  add      x9, x9, #8  ; =0x157008
00445c18  mov      w10, #1
00445c1c  ldadd    x10, x9, [x9]
00445c20  add      x8, x8, #0x10  ; "path"
00445c24  str      x8, [x19, #0x168]  ; =0x12f168
00445c28  b        #0x445c34
00445c2c  mov      x0, x27
00445c30  bl       #0x4522e0
00445c34  ldr      x25, [x19, #0xd8]  ; =0x12f0d8
00445c38  add      x0, sp, #0x7e0
00445c3c  mov      x1, x26
00445c40  mov      x2, x27
00445c44  bl       #0x43051c
00445c48  mov      w10, #0x6e69
00445c4c  mov      w8, #0xa
00445c50  add      x9, sp, #0x228
00445c54  movk     w10, #0x7570, lsl #16
00445c58  mov      w11, #0x74
00445c5c  add      x24, sp, #0x288
00445c60  str      xzr, [sp, #0x298]
00445c64  strb     w8, [sp, #0x228]
00445c68  stur     w10, [x9, #1]
00445c6c  sturh    w11, [x9, #5]
00445c70  str      xzr, [sp, #0x288]
00445c74  str      xzr, [sp, #0x290]
00445c78  str      x24, [sp, #0x1a0]
00445c7c  strb     wzr, [sp, #0x1a8]
00445c80  mov      w0, #0x18
00445c84  bl       #0xc48840  ; <_Znwm>
00445c88  add      x8, x0, #0x18  ; "RNG *)"
00445c8c  mov      x26, x0
00445c90  add      x9, x24, #0x10  ; =0xc78010
00445c94  add      x10, sp, #0x1b8
00445c98  str      x0, [sp, #0x288]
00445c9c  str      x8, [sp, #0x298]
00445ca0  add      x8, sp, #0x348
00445ca4  str      x0, [sp, #0x290]
00445ca8  str      x0, [sp, #0x348]
00445cac  str      x0, [sp, #0x1b8]
00445cb0  str      x9, [sp, #0x2e8]
00445cb4  str      x10, [sp, #0x2f0]
00445cb8  str      x8, [sp, #0x2f8]
00445cbc  strb     wzr, [sp, #0x300]
00445cc0  add      x1, sp, #0x228
00445cc4  bl       #0xc488d0  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_>
00445cc8  mov      w9, #0x756f
00445ccc  add      x8, sp, #0x348
00445cd0  movk     w9, #0x7074, lsl #16
00445cd4  mov      w10, #0x7475
00445cd8  ldr      x11, [sp, #0x348]
00445cdc  add      x24, sp, #0x1a0
00445ce0  strb     wzr, [sp, #0x34f]
00445ce4  stur     w9, [x8, #1]
00445ce8  sturh    w10, [x8, #5]
00445cec  mov      w8, #0xc
00445cf0  add      x9, x11, #0x18
00445cf4  stp      xzr, xzr, [sp, #0x1a8]
00445cf8  str      xzr, [sp, #0x1a0]
00445cfc  strb     w8, [sp, #0x348]
00445d00  str      x9, [sp, #0x290]
00445d04  str      x24, [sp, #0x1b8]
00445d08  strb     wzr, [sp, #0x1c0]
00445d0c  mov      w0, #0x18
00445d10  bl       #0xc48840  ; <_Znwm>
00445d14  add      x8, x0, #0x18  ; "RNG *)"
00445d18  mov      x26, x0
00445d1c  add      x9, x24, #0x10  ; =0xc78010
00445d20  add      x10, sp, #0x190
00445d24  stp      x0, x0, [sp, #0x1a0]
00445d28  str      x8, [sp, #0x1b0]
00445d2c  add      x8, sp, #0x198
00445d30  stp      x0, x0, [sp, #0x190]
00445d34  str      x9, [sp, #0x2e8]
00445d38  str      x10, [sp, #0x2f0]
00445d3c  str      x8, [sp, #0x2f8]
00445d40  strb     wzr, [sp, #0x300]
00445d44  add      x1, sp, #0x348
00445d48  bl       #0xc488d0  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_>
00445d4c  ldr      x8, [sp, #0x198]
00445d50  add      x8, x8, #0x18  ; "kends:,"
00445d54  str      x8, [sp, #0x1a8]
00445d58  add      x1, sp, #0x7e0
00445d5c  add      x2, sp, #0x288
00445d60  add      x3, sp, #0x1a0
00445d64  mov      x0, x25
00445d68  bl       #0x430788
00445d6c  ldr      x25, [sp, #0x1a0]
00445d70  cbz      x25, #0x445db8
00445d74  ldr      x8, [sp, #0x1a8]
00445d78  mov      x0, x25
00445d7c  cmp      x8, x25
00445d80  b.eq     #0x445db0
00445d84  mov      x24, x8
00445d88  b        #0x445d98
00445d8c  mov      x8, x24
00445d90  cmp      x24, x25
00445d94  b.eq     #0x445dac
00445d98  ldrb     w9, [x24, #-0x18]!
00445d9c  tbz      w9, #0, #0x445d8c
00445da0  ldur     x0, [x8, #-8]
00445da4  bl       #0xc48850  ; <_ZdlPv>
00445da8  b        #0x445d8c
00445dac  ldr      x0, [sp, #0x1a0]
00445db0  str      x25, [sp, #0x1a8]
00445db4  bl       #0xc48850  ; <_ZdlPv>
00445db8  ldrb     w8, [sp, #0x348]
00445dbc  tbz      w8, #0, #0x445dc8
00445dc0  ldr      x0, [sp, #0x358]
00445dc4  bl       #0xc48850  ; <_ZdlPv>
00445dc8  ldr      x25, [sp, #0x288]
00445dcc  cbz      x25, #0x445e14
00445dd0  ldr      x8, [sp, #0x290]
00445dd4  mov      x0, x25
00445dd8  cmp      x8, x25
00445ddc  b.eq     #0x445e0c
00445de0  mov      x24, x8
00445de4  b        #0x445df4
00445de8  mov      x8, x24
00445dec  cmp      x24, x25
00445df0  b.eq     #0x445e08
00445df4  ldrb     w9, [x24, #-0x18]!
00445df8  tbz      w9, #0, #0x445de8
00445dfc  ldur     x0, [x8, #-8]
00445e00  bl       #0xc48850  ; <_ZdlPv>
00445e04  b        #0x445de8
00445e08  ldr      x0, [sp, #0x288]
00445e0c  str      x25, [sp, #0x290]
00445e10  bl       #0xc48850  ; <_ZdlPv>
00445e14  ldrb     w8, [sp, #0x228]
00445e18  tbz      w8, #0, #0x445e24
00445e1c  ldr      x0, [sp, #0x238]
00445e20  bl       #0xc48850  ; <_ZdlPv>
00445e24  ldr      x26, [sp, #0x7f8]
00445e28  cbz      x26, #0x445e8c
00445e2c  ldr      x27, [sp, #0x800]
00445e30  mov      x0, x26
00445e34  cmp      x27, x26
00445e38  b.eq     #0x445e84
00445e3c  mov      x24, #-1
00445e40  b        #0x445e4c
00445e44  cmp      x27, x26
00445e48  b.eq     #0x445e80
00445e4c  ldur     x25, [x27, #-8]
00445e50  sub      x27, x27, #0x10
00445e54  cbz      x25, #0x445e44
00445e58  add      x8, x25, #8  ; =0xc78008
00445e5c  ldaddal  x24, x8, [x8]
00445e60  cbnz     x8, #0x445e44
00445e64  ldr      x8, [x25]
00445e68  mov      x0, x25
00445e6c  ldr      x8, [x8, #0x10]  ; =0x15c010
00445e70  blr      x8
00445e74  mov      x0, x25
00445e78  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00445e7c  b        #0x445e44
00445e80  ldr      x0, [sp, #0x7f8]
00445e84  str      x26, [sp, #0x800]
00445e88  bl       #0xc48850  ; <_ZdlPv>
00445e8c  ldr      x26, [sp, #0x7e0]
00445e90  cbz      x26, #0x445ef4
00445e94  ldr      x27, [sp, #0x7e8]
00445e98  mov      x0, x26
00445e9c  cmp      x27, x26
00445ea0  b.eq     #0x445eec
00445ea4  mov      x24, #-1
00445ea8  b        #0x445eb4
00445eac  cmp      x27, x26
00445eb0  b.eq     #0x445ee8
00445eb4  ldur     x25, [x27, #-8]
00445eb8  sub      x27, x27, #0x10
00445ebc  cbz      x25, #0x445eac
00445ec0  add      x8, x25, #8  ; =0xc78008
00445ec4  ldaddal  x24, x8, [x8]
00445ec8  cbnz     x8, #0x445eac
00445ecc  ldr      x8, [x25]
00445ed0  mov      x0, x25
00445ed4  ldr      x8, [x8, #0x10]  ; =0x15c010
00445ed8  blr      x8
00445edc  mov      x0, x25
00445ee0  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00445ee4  b        #0x445eac
00445ee8  ldr      x0, [sp, #0x7e0]
00445eec  str      x26, [sp, #0x7e8]
00445ef0  bl       #0xc48850  ; <_ZdlPv>
00445ef4  mov      x0, x19
00445ef8  bl       #0x446bcc
00445efc  cbz      w0, #0x445f34
00445f00  adrp     x0, #0x151000
00445f04  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445f08  mov      w1, #0x2f
00445f0c  mov      w2, #0x4a
00445f10  bl       #0xc48800  ; <__strrchr_chk>
00445f14  cbz      x0, #0x445f84
00445f18  adrp     x0, #0x151000
00445f1c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445f20  mov      w1, #0x2f
00445f24  mov      w2, #0x4a
00445f28  bl       #0xc48800  ; <__strrchr_chk>
00445f2c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00445f30  b        #0x445f8c
00445f34  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00445f38  ldrb     w25, [x19, #0x438]  ; =0x12f438
00445f3c  str      x0, [sp, #8]
00445f40  ldr      x8, [x19, #0x440]  ; =0x12f440
00445f44  lsr      x9, x25, #1
00445f48  tst      w25, #1
00445f4c  csel     x27, x9, x8, eq
00445f50  add      x24, x27, #0x14
00445f54  cmn      x24, #0x10
00445f58  b.hs     #0x4467e8
00445f5c  ldr      w26, [x19, #0x310]  ; =0x12f310
00445f60  cmp      x24, #0x16
00445f64  b.hi     #0x446040
00445f68  and      w8, w24, #0xff
00445f6c  mov      x0, xzr
00445f70  lsl      w8, w8, #1
00445f74  stp      xzr, xzr, [sp, #0x88]
00445f78  str      xzr, [sp, #0x98]
00445f7c  strb     w8, [sp, #0x88]
00445f80  b        #0x446060
00445f84  adrp     x3, #0x151000
00445f88  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445f8c  adrp     x19, #0x12f000
00445f90  add      x19, x19, #0x35b  ; "[%s:%d] model init failed, bypass styletrans.
"
00445f94  adrp     x0, #0x177000
00445f98  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00445f9c  mov      w1, #2
00445fa0  mov      x2, x19
00445fa4  mov      w4, #0x3a0
00445fa8  bl       #0x484908
00445fac  ldp      q0, q1, [x19]
00445fb0  add      x8, sp, #0x7e0
00445fb4  ldur     q2, [x19, #0x1f]
00445fb8  stp      q0, q1, [x8]
00445fbc  stur     q2, [x8, #0x1f]
00445fc0  mov      x0, x19
00445fc4  mov      w1, #0x2f
00445fc8  ldr      x28, [sp, #0x20]
00445fcc  bl       #0xc48820  ; <__strlen_chk>
00445fd0  adrp     x9, #0xc78000
00445fd4  add      x8, sp, #0x7e0
00445fd8  add      x8, x0, x8
00445fdc  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00445fe0  sturb    wzr, [x8, #-1]
00445fe4  ldr      x19, [x9]
00445fe8  adrp     x0, #0x151000
00445fec  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00445ff0  mov      w1, #0x2f
00445ff4  mov      w2, #0x4a
00445ff8  bl       #0xc48800  ; <__strrchr_chk>
00445ffc  cbz      x0, #0x44601c
00446000  adrp     x0, #0x151000
00446004  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00446008  mov      w1, #0x2f
0044600c  mov      w2, #0x4a
00446010  bl       #0xc48800  ; <__strrchr_chk>
00446014  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00446018  b        #0x446024
0044601c  adrp     x3, #0x151000
00446020  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00446024  adrp     x1, #0x177000
00446028  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044602c  add      x2, sp, #0x7e0
00446030  mov      w0, #2
00446034  mov      w4, #0x3a0
00446038  blr      x19
0044603c  b        #0x4463d8
00446040  orr      x8, x24, #0xf
00446044  add      x28, x8, #1  ; "_level"
00446048  mov      x0, x28
0044604c  bl       #0xc48840  ; <_Znwm>
00446050  orr      x9, x28, #1
00446054  stp      x24, x0, [sp, #0x90]
00446058  and      w8, w9, #0xff
0044605c  str      x9, [sp, #0x88]
00446060  add      x9, sp, #0x88
00446064  ldr      x10, [x19, #0x448]  ; =0x12f448
00446068  orr      x9, x9, #1
0044606c  tst      w8, #1
00446070  csel     x0, x9, x0, eq
00446074  tst      w25, #1
00446078  csel     x1, x21, x10, eq
0044607c  mov      x2, x27
00446080  add      x24, x0, x27
00446084  bl       #0xc48970  ; <memmove>
00446088  adrp     x9, #0x167000
0044608c  add      x9, x9, #0x90b  ; "styletrans_input.dat"
00446090  mov      w8, #0x642e
00446094  strb     wzr, [x24, #0x14]
00446098  movk     w8, #0x7461, lsl #16
0044609c  ldr      x28, [sp, #0x20]
004460a0  ldr      q0, [x9]
004460a4  ldr      x9, [x19, #0x118]  ; =0x12f118
004460a8  str      w8, [x24, #0x10]  ; =0xc78010
004460ac  str      q0, [x24]
004460b0  ldp      x12, x8, [x9, #0x10]
004460b4  ldr      x2, [x9, #0x30]  ; =0x167030
004460b8  cmp      x12, x8
004460bc  b.eq     #0x4460ec
004460c0  adrp     x24, #0xc78000
004460c4  sub      x9, x8, x12
004460c8  sub      x9, x9, #8
004460cc  add      x25, sp, #0x7e0
004460d0  cmp      x9, #0x38
004460d4  ldr      x24, [x24, #0x2f0]  ; =0xc782f0
004460d8  ldr      x21, [sp, #0x18]
004460dc  b.hs     #0x446104
004460e0  mov      w3, #1
004460e4  mov      x9, x12
004460e8  b        #0x446164
004460ec  adrp     x24, #0xc78000
004460f0  mov      w3, #1
004460f4  add      x25, sp, #0x7e0
004460f8  ldr      x24, [x24, #0x2f0]  ; =0xc782f0
004460fc  ldr      x21, [sp, #0x18]
00446100  b        #0x446174
00446104  lsr      x9, x9, #3
00446108  add      x10, x9, #1  ; "OpenCV ERROR: TLS: container for slotIdx=%d is NULL. Can't release thread data
"
0044610c  and      x11, x10, #0x3ffffffffffffff8
00446110  movi     v0.4s, #1
00446114  mov      x13, x11
00446118  movi     v1.4s, #1
0044611c  add      x9, x12, x11, lsl #3
00446120  add      x12, x12, #0x20
00446124  ldp      q3, q2, [x12, #-0x20]
00446128  subs     x13, x13, #8
0044612c  ldp      q5, q4, [x12], #0x40
00446130  uzp1     v2.4s, v3.4s, v2.4s
00446134  uzp1     v3.4s, v5.4s, v4.4s
00446138  mul      v0.4s, v0.4s, v2.4s
0044613c  mul      v1.4s, v1.4s, v3.4s
00446140  b.ne     #0x446124
00446144  mul      v0.4s, v1.4s, v0.4s
00446148  cmp      x10, x11
0044614c  ext      v1.16b, v0.16b, v0.16b, #8
00446150  mul      v0.2s, v0.2s, v1.2s
00446154  mov      w12, v0.s[1]
00446158  fmov     w13, s0
0044615c  mul      w3, w13, w12
00446160  b.eq     #0x446174
00446164  ldr      w10, [x9], #8  ; =0x167008
00446168  cmp      x9, x8
0044616c  mul      w3, w3, w10
00446170  b.ne     #0x446164
00446174  mov      w9, #0x6962
00446178  mov      w8, #0xc
0044617c  movk     w9, #0x616e, lsl #16
00446180  mov      w10, #0x7972
00446184  strb     wzr, [sp, #0x77]
00446188  strb     w8, [sp, #0x70]
0044618c  stur     w9, [sp, #0x71]
00446190  sturh    w10, [sp, #0x75]
00446194  add      x1, sp, #0x88
00446198  add      x4, sp, #0x70
0044619c  mov      w0, w26
004461a0  bl       #0x43b0c4
004461a4  ldrb     w8, [sp, #0x70]
004461a8  tbz      w8, #0, #0x4461b4
004461ac  ldr      x0, [sp, #0x80]
004461b0  bl       #0xc48850  ; <_ZdlPv>
004461b4  ldrb     w8, [sp, #0x88]
004461b8  tbz      w8, #0, #0x4461c4
004461bc  ldr      x0, [sp, #0x98]
004461c0  bl       #0xc48850  ; <_ZdlPv>
004461c4  ldr      x0, [x19, #0xd8]  ; =0x12f0d8
004461c8  bl       #0x431174
004461cc  mov      w26, w0
004461d0  cbz      w0, #0x446208
004461d4  adrp     x0, #0x151000
004461d8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004461dc  mov      w1, #0x2f
004461e0  mov      w2, #0x4a
004461e4  bl       #0xc48800  ; <__strrchr_chk>
004461e8  cbz      x0, #0x44623c
004461ec  adrp     x0, #0x151000
004461f0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004461f4  mov      w1, #0x2f
004461f8  mov      w2, #0x4a
004461fc  bl       #0xc48800  ; <__strrchr_chk>
00446200  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00446204  b        #0x446244
00446208  adrp     x0, #0x151000
0044620c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00446210  mov      w1, #0x2f
00446214  mov      w2, #0x4a
00446218  bl       #0xc48800  ; <__strrchr_chk>
0044621c  cbz      x0, #0x446448
00446220  adrp     x0, #0x151000
00446224  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00446228  mov      w1, #0x2f
0044622c  mov      w2, #0x4a
00446230  bl       #0xc48800  ; <__strrchr_chk>
00446234  add      x27, x0, #1  ; "tputArray, double, cv::RNG *)"
00446238  b        #0x446450
0044623c  adrp     x3, #0x151000
00446240  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00446244  adrp     x19, #0x16a000
00446248  add      x19, x19, #0x958  ; "[%s:%d] m_thread_styletrans error %d.
"
0044624c  adrp     x0, #0x177000
00446250  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00446254  mov      w1, #2
00446258  mov      x2, x19
0044625c  mov      w4, #0x3aa
00446260  mov      w5, w26
00446264  bl       #0x484908
00446268  ldp      q0, q1, [x19]
0044626c  ldur     x8, [x19, #0x1f]
00446270  stp      q0, q1, [x25]
00446274  stur     x8, [x25, #0x1f]
00446278  mov      x0, x19
0044627c  mov      w1, #0x27
00446280  bl       #0xc48820  ; <__strlen_chk>
00446284  add      x8, sp, #0x7e0
00446288  ldr      x19, [x24]
0044628c  add      x8, x0, x8
00446290  sturb    wzr, [x8, #-1]
00446294  adrp     x0, #0x151000
00446298  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044629c  mov      w1, #0x2f
004462a0  mov      w2, #0x4a
004462a4  bl       #0xc48800  ; <__strrchr_chk>
004462a8  cbz      x0, #0x4462c8
004462ac  adrp     x0, #0x151000
004462b0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004462b4  mov      w1, #0x2f
004462b8  mov      w2, #0x4a
004462bc  bl       #0xc48800  ; <__strrchr_chk>
004462c0  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004462c4  b        #0x4462d0
004462c8  adrp     x3, #0x151000
004462cc  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004462d0  adrp     x1, #0x177000
004462d4  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004462d8  add      x2, sp, #0x7e0
004462dc  mov      w0, #2
004462e0  mov      w4, #0x3aa
004462e4  mov      w5, w26
004462e8  blr      x19
004462ec  adrp     x0, #0x151000
004462f0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004462f4  mov      w1, #0x2f
004462f8  mov      w2, #0x4a
004462fc  bl       #0xc48800  ; <__strrchr_chk>
00446300  cbz      x0, #0x446320
00446304  adrp     x0, #0x151000
00446308  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044630c  mov      w1, #0x2f
00446310  mov      w2, #0x4a
00446314  bl       #0xc48800  ; <__strrchr_chk>
00446318  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044631c  b        #0x446328
00446320  adrp     x3, #0x151000
00446324  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00446328  adrp     x19, #0x177000
0044632c  add      x19, x19, #0x2a0  ; "[%s:%d] %s.
"
00446330  adrp     x0, #0x177000
00446334  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00446338  adrp     x5, #0x13c000
0044633c  add      x5, x5, #0xf2  ; "Error::BAD_OP"
00446340  mov      w1, #1
00446344  mov      x2, x19
00446348  mov      w4, #0x3ab
0044634c  bl       #0x484908
00446350  ldr      x8, [x19]
00446354  ldur     x9, [x19, #5]
00446358  str      x8, [sp, #0x7e0]
0044635c  stur     x9, [x25, #5]
00446360  mov      x0, x19
00446364  mov      w1, #0xd
00446368  bl       #0xc48820  ; <__strlen_chk>
0044636c  add      x8, sp, #0x7e0
00446370  ldr      x19, [x24]
00446374  add      x8, x0, x8
00446378  sturb    wzr, [x8, #-1]
0044637c  adrp     x0, #0x151000
00446380  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00446384  mov      w1, #0x2f
00446388  mov      w2, #0x4a
0044638c  bl       #0xc48800  ; <__strrchr_chk>
00446390  cbz      x0, #0x4463b0
00446394  adrp     x0, #0x151000
00446398  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044639c  mov      w1, #0x2f
004463a0  mov      w2, #0x4a
004463a4  bl       #0xc48800  ; <__strrchr_chk>
004463a8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004463ac  b        #0x4463b8
004463b0  adrp     x3, #0x151000
004463b4  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004463b8  adrp     x1, #0x177000
004463bc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004463c0  adrp     x5, #0x13c000
004463c4  add      x5, x5, #0xf2  ; "Error::BAD_OP"
004463c8  add      x2, sp, #0x7e0
004463cc  mov      w0, #1
004463d0  mov      w4, #0x3ab
004463d4  blr      x19
004463d8  mov      w19, #0x6524
004463dc  movk     w19, #0x11, lsl #16
004463e0  add      x0, sp, #0x4e0
004463e4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004463e8  add      x0, sp, #0x540
004463ec  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004463f0  add      x0, sp, #0x5a0
004463f4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004463f8  add      x0, sp, #0x600
004463fc  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446400  add      x0, sp, #0x6c0
00446404  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446408  add      x0, sp, #0x780
0044640c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446410  ldr      x8, [x28, #0x28]
00446414  ldur     x9, [x29, #-0x28]
00446418  cmp      x8, x9
0044641c  b.ne     #0x446bc8
00446420  mov      w0, w19
00446424  add      sp, sp, #0x900
00446428  ldp      x20, x19, [sp, #0x60]
0044642c  ldp      x22, x21, [sp, #0x50]
00446430  ldp      x24, x23, [sp, #0x40]
00446434  ldp      x26, x25, [sp, #0x30]
00446438  ldp      x28, x27, [sp, #0x20]
0044643c  ldp      x29, x30, [sp, #0x10]
00446440  ldr      d8, [sp], #0x70
00446444  ret      
00446448  adrp     x27, #0x151000
0044644c  add      x27, x27, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00446450  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00446454  ldr      x8, [sp, #8]
00446458  sub      x8, x0, x8
0044645c  scvtf    d0, x8
00446460  fmul     d0, d0, d8
00446464  adrp     x26, #0x111000
00446468  add      x26, x26, #0x2fd  ; "[%s:%d] duration of m_thread_styletrans exec is %.3fms.
"
0044646c  adrp     x0, #0x177000
00446470  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00446474  mov      w1, #2
00446478  mov      x2, x26
0044647c  mov      x3, x27
00446480  mov      w4, #0x3ad
00446484  bl       #0x484908
00446488  ldp      q0, q1, [x26]
0044648c  ldr      q2, [x26, #0x20]  ; =0x111020
00446490  stp      q0, q1, [x25]
00446494  ldur     q3, [x26, #0x29]
00446498  str      q2, [x25, #0x20]  ; =0xc78020
0044649c  stur     q3, [x25, #0x29]
004464a0  mov      x0, x26
004464a4  mov      w1, #0x39
004464a8  bl       #0xc48820  ; <__strlen_chk>
004464ac  add      x8, sp, #0x7e0
004464b0  ldr      x25, [x24]
004464b4  add      x8, x0, x8
004464b8  sturb    wzr, [x8, #-1]
004464bc  adrp     x0, #0x151000
004464c0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004464c4  mov      w1, #0x2f
004464c8  mov      w2, #0x4a
004464cc  bl       #0xc48800  ; <__strrchr_chk>
004464d0  cbz      x0, #0x4464f0
004464d4  adrp     x0, #0x151000
004464d8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004464dc  mov      w1, #0x2f
004464e0  mov      w2, #0x4a
004464e4  bl       #0xc48800  ; <__strrchr_chk>
004464e8  add      x26, x0, #1  ; "tputArray, double, cv::RNG *)"
004464ec  b        #0x4464f8
004464f0  adrp     x26, #0x151000
004464f4  add      x26, x26, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004464f8  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
004464fc  ldr      x8, [sp, #8]
00446500  sub      x8, x0, x8
00446504  scvtf    d0, x8
00446508  fmul     d0, d0, d8
0044650c  adrp     x1, #0x177000
00446510  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00446514  add      x2, sp, #0x7e0
00446518  mov      w0, #2
0044651c  mov      x3, x26
00446520  mov      w4, #0x3ad
00446524  blr      x25
00446528  ldr      x8, [sp, #0x10]
0044652c  ldr      x8, [x8]
00446530  ldr      x4, [x8, #0x30]  ; =0x15c030
00446534  add      x0, sp, #0x7e0
00446538  mov      w1, w22
0044653c  mov      w2, w23
00446540  mov      w3, #0x10
00446544  mov      x5, xzr
00446548  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
0044654c  movi     v0.2s, #0x30
00446550  str      w20, [sp, #0x1a8]
00446554  str      w21, [sp, #0x1ac]
00446558  str      d0, [sp, #0x1a0]
0044655c  add      x0, sp, #0x2e8
00446560  add      x1, sp, #0x7e0
00446564  add      x2, sp, #0x1a0
00446568  bl       #0xc48bc0  ; <_ZN2cv3MatC1ERKS0_RKNS_5Rect_IiEE>
0044656c  ldr      x8, [x19, #0x108]  ; =0x177108
00446570  ldr      x4, [x8, #0x30]  ; =0x15c030
00446574  add      x0, sp, #0x288
00446578  mov      w1, w21
0044657c  mov      w2, w20
00446580  mov      w3, #0x10
00446584  mov      x5, xzr
00446588  add      x20, sp, #0x288
0044658c  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00446590  mov      w8, #0x2010000
00446594  str      xzr, [sp, #0x238]
00446598  str      x20, [sp, #0x230]
0044659c  str      w8, [sp, #0x228]
004465a0  add      x0, sp, #0x2e8
004465a4  add      x1, sp, #0x228
004465a8  bl       #0xc48bd0  ; <_ZNK2cv3Mat6copyToERKNS_12_OutputArrayE>
004465ac  mov      x0, x19
004465b0  mov      w1, wzr
004465b4  bl       #0x447074
004465b8  ldr      x8, [x19, #0x2b8]  ; =0x1772b8
004465bc  ldr      x9, [x19, #0x108]  ; =0x177108
004465c0  ldr      w1, [x8]
004465c4  ldr      w2, [x8, #8]  ; =0x15c008
004465c8  ldr      x4, [x9, #0x30]  ; =0x167030
004465cc  add      x0, sp, #0x228
004465d0  mov      w3, #0x10
004465d4  mov      x5, xzr
004465d8  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
004465dc  add      x21, x19, #0x438  ; "::input_stream_adapter>::get_decimal_point() [BasicJsonType = mage_json::basic_json<>, InputAdapterType = mage_json::det"
004465e0  ldr      w20, [x19, #0x310]  ; =0x177310
004465e4  adrp     x1, #0x139000
004465e8  add      x1, x1, #0x65c  ; "styletrans_output.png"
004465ec  add      x8, sp, #0x58
004465f0  mov      x0, x21
004465f4  bl       #0x4445b0
004465f8  add      x0, sp, #0x1c8
004465fc  add      x1, sp, #0x228
00446600  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
00446604  add      x1, sp, #0x58
00446608  add      x2, sp, #0x1c8
0044660c  mov      w0, w20
00446610  mov      w3, wzr
00446614  mov      w4, wzr
00446618  bl       #0x43b3a8
0044661c  add      x0, sp, #0x1c8
00446620  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446624  ldrb     w8, [sp, #0x58]
00446628  tbz      w8, #0, #0x446634
0044662c  ldr      x0, [sp, #0x68]
00446630  bl       #0xc48850  ; <_ZdlPv>
00446634  ldr      w20, [x19, #0x310]  ; =0x177310
00446638  adrp     x1, #0x182000
0044663c  add      x1, x1, #0xa81  ; "styletrans_output.dat"
00446640  add      x8, sp, #0x40
00446644  mov      x0, x21
00446648  bl       #0x4445b0
0044664c  ldr      x8, [x19, #0x108]  ; =0x177108
00446650  ldp      x13, x9, [x8, #0x10]
00446654  cmp      x13, x9
00446658  b.eq     #0x446678
0044665c  sub      x10, x9, x13
00446660  sub      x10, x10, #8
00446664  cmp      x10, #0x38
00446668  b.hs     #0x446680
0044666c  mov      w19, #1
00446670  mov      x10, x13
00446674  b        #0x4466e0
00446678  mov      w19, #1
0044667c  b        #0x4466f0
00446680  lsr      x10, x10, #3
00446684  add      x11, x10, #1
00446688  and      x12, x11, #0x3ffffffffffffff8
0044668c  movi     v0.4s, #1
00446690  mov      x14, x12
00446694  movi     v1.4s, #1
00446698  add      x10, x13, x12, lsl #3
0044669c  add      x13, x13, #0x20
004466a0  ldp      q3, q2, [x13, #-0x20]
004466a4  subs     x14, x14, #8
004466a8  ldp      q5, q4, [x13], #0x40
004466ac  uzp1     v2.4s, v3.4s, v2.4s
004466b0  uzp1     v3.4s, v5.4s, v4.4s
004466b4  mul      v0.4s, v0.4s, v2.4s
004466b8  mul      v1.4s, v1.4s, v3.4s
004466bc  b.ne     #0x4466a0
004466c0  mul      v0.4s, v1.4s, v0.4s
004466c4  cmp      x11, x12
004466c8  ext      v1.16b, v0.16b, v0.16b, #8
004466cc  mul      v0.2s, v0.2s, v1.2s
004466d0  mov      w13, v0.s[1]
004466d4  fmov     w14, s0
004466d8  mul      w19, w14, w13
004466dc  b.eq     #0x4466f0
004466e0  ldr      w11, [x10], #8
004466e4  cmp      x10, x9
004466e8  mul      w19, w19, w11
004466ec  b.ne     #0x4466e0
004466f0  adrp     x1, #0x147000
004466f4  add      x1, x1, #0x4c8  ; "binary"
004466f8  add      x0, sp, #0x28
004466fc  ldr      x21, [x8, #0x30]  ; =0x15c030
00446700  bl       #0x43ef0c
00446704  add      x1, sp, #0x40
00446708  add      x4, sp, #0x28
0044670c  mov      w0, w20
00446710  mov      x2, x21
00446714  mov      w3, w19
00446718  bl       #0x43b0c4
0044671c  ldrb     w8, [sp, #0x28]
00446720  tbz      w8, #0, #0x44672c
00446724  ldr      x0, [sp, #0x38]
00446728  bl       #0xc48850  ; <_ZdlPv>
0044672c  ldrb     w8, [sp, #0x40]
00446730  tbz      w8, #0, #0x44673c
00446734  ldr      x0, [sp, #0x50]
00446738  bl       #0xc48850  ; <_ZdlPv>
0044673c  add      x0, sp, #0x228
00446740  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446744  add      x0, sp, #0x288
00446748  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044674c  add      x0, sp, #0x2e8
00446750  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446754  add      x0, sp, #0x7e0
00446758  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044675c  mov      w19, wzr
00446760  b        #0x4463e0
00446764  ldr      x8, [x28, #0x28]
00446768  ldur     x9, [x29, #-0x28]
0044676c  cmp      x8, x9
00446770  b.ne     #0x446bc8
00446774  add      x0, sp, #0x178
00446778  bl       #0x438784
0044677c  add      x0, sp, #0x148
00446780  b        #0x446788
00446784  add      x0, sp, #0x130
00446788  ldr      x8, [x28, #0x28]
0044678c  ldur     x9, [x29, #-0x28]
00446790  cmp      x8, x9
00446794  b.ne     #0x446bc8
00446798  bl       #0x438784
0044679c  ldr      x8, [x28, #0x28]
004467a0  ldur     x9, [x29, #-0x28]
004467a4  cmp      x8, x9
004467a8  b.ne     #0x446bc8
004467ac  add      x0, sp, #0x100
004467b0  bl       #0x438784
004467b4  add      x0, sp, #0xe8
004467b8  b        #0x4467d0
004467bc  add      x0, sp, #0xd0
004467c0  b        #0x4467d0
004467c4  add      x0, sp, #0xb8
004467c8  b        #0x4467d0
004467cc  add      x0, sp, #0xa0
004467d0  ldr      x8, [sp, #0x20]
004467d4  ldr      x8, [x8, #0x28]  ; =0x15c028
004467d8  ldur     x9, [x29, #-0x28]
004467dc  cmp      x8, x9
004467e0  b.ne     #0x446bc8
004467e4  bl       #0x438784
004467e8  ldr      x8, [sp, #0x20]
004467ec  ldr      x8, [x8, #0x28]  ; =0x15c028
004467f0  ldur     x9, [x29, #-0x28]
004467f4  cmp      x8, x9
004467f8  b.ne     #0x446bc8
004467fc  add      x0, sp, #0x88
00446800  bl       #0x438784
00446804  ldrb     w8, [sp, #0x28]
00446808  mov      x19, x0
0044680c  tbz      w8, #0, #0x446820
00446810  ldr      x0, [sp, #0x38]
00446814  bl       #0xc48850  ; <_ZdlPv>
00446818  b        #0x446820
0044681c  mov      x19, x0
00446820  ldrb     w8, [sp, #0x40]
00446824  tbz      w8, #0, #0x446888
00446828  ldr      x0, [sp, #0x50]
0044682c  b        #0x446850
00446830  mov      x19, x0
00446834  add      x0, sp, #0x1c8
00446838  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044683c  b        #0x446844
00446840  mov      x19, x0
00446844  ldrb     w8, [sp, #0x58]
00446848  tbz      w8, #0, #0x446888
0044684c  ldr      x0, [sp, #0x68]
00446850  bl       #0xc48850  ; <_ZdlPv>
00446854  b        #0x446888
00446858  mov      x19, x0
0044685c  b        #0x446890
00446860  mov      x19, x0
00446864  b        #0x446890
00446868  mov      x19, x0
0044686c  b        #0x446890
00446870  mov      x19, x0
00446874  b        #0x446898
00446878  mov      x19, x0
0044687c  b        #0x4468a0
00446880  b        #0x446b70
00446884  mov      x19, x0
00446888  add      x0, sp, #0x228
0044688c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446890  add      x0, sp, #0x288
00446894  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446898  add      x0, sp, #0x2e8
0044689c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004468a0  add      x0, sp, #0x7e0
004468a4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004468a8  b        #0x446b74
004468ac  ldrb     w8, [sp, #0x70]
004468b0  mov      x19, x0
004468b4  tbz      w8, #0, #0x4468c0
004468b8  ldr      x0, [sp, #0x80]
004468bc  bl       #0xc48850  ; <_ZdlPv>
004468c0  ldrb     w8, [sp, #0x88]
004468c4  tbz      w8, #0, #0x446b74
004468c8  ldr      x0, [sp, #0x98]
004468cc  bl       #0xc48850  ; <_ZdlPv>
004468d0  b        #0x446b74
004468d4  b        #0x446b70
004468d8  b        #0x446b70
004468dc  b        #0x446b70
004468e0  mov      x19, x0
004468e4  add      x0, sp, #0x1a0
004468e8  bl       #0x447704
004468ec  b        #0x446910
004468f0  mov      x19, x0
004468f4  add      x0, sp, #0x2e8
004468f8  bl       #0x4524c0
004468fc  str      x26, [sp, #0x1a8]
00446900  b        #0x446908
00446904  mov      x19, x0
00446908  add      x0, sp, #0x1b8
0044690c  bl       #0x452434
00446910  ldrb     w8, [sp, #0x348]
00446914  tbz      w8, #0, #0x446920
00446918  ldr      x0, [sp, #0x358]
0044691c  bl       #0xc48850  ; <_ZdlPv>
00446920  add      x0, sp, #0x288
00446924  bl       #0x447704
00446928  b        #0x44694c
0044692c  mov      x19, x0
00446930  add      x0, sp, #0x2e8
00446934  bl       #0x4524c0
00446938  str      x26, [sp, #0x290]
0044693c  b        #0x446944
00446940  mov      x19, x0
00446944  add      x0, sp, #0x1a0
00446948  bl       #0x452434
0044694c  ldrb     w8, [sp, #0x228]
00446950  tbz      w8, #0, #0x44695c
00446954  ldr      x0, [sp, #0x238]
00446958  bl       #0xc48850  ; <_ZdlPv>
0044695c  add      x0, sp, #0x7e0
00446960  bl       #0x447780
00446964  b        #0x446b74
00446968  b        #0x446b70
0044696c  mov      x19, x0
00446970  add      x0, sp, #0x360
00446974  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446978  b        #0x446980
0044697c  mov      x19, x0
00446980  ldrb     w8, [sp, #0xa0]
00446984  tbz      w8, #0, #0x446b74
00446988  ldr      x0, [sp, #0xb0]
0044698c  bl       #0xc48850  ; <_ZdlPv>
00446990  b        #0x446b74
00446994  mov      x19, x0
00446998  add      x0, sp, #0x3c0
0044699c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004469a0  b        #0x4469a8
004469a4  mov      x19, x0
004469a8  ldrb     w8, [sp, #0xb8]
004469ac  tbz      w8, #0, #0x446b74
004469b0  ldr      x0, [sp, #0xc8]
004469b4  bl       #0xc48850  ; <_ZdlPv>
004469b8  b        #0x446b74
004469bc  mov      x19, x0
004469c0  add      x0, sp, #0x420
004469c4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004469c8  b        #0x4469d0
004469cc  mov      x19, x0
004469d0  ldrb     w8, [sp, #0xd0]
004469d4  tbz      w8, #0, #0x446b74
004469d8  ldr      x0, [sp, #0xe0]
004469dc  bl       #0xc48850  ; <_ZdlPv>
004469e0  b        #0x446b74
004469e4  mov      x19, x0
004469e8  add      x0, sp, #0x480
004469ec  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004469f0  b        #0x4469f8
004469f4  mov      x19, x0
004469f8  ldrb     w8, [sp, #0xe8]
004469fc  tbz      w8, #0, #0x446b74
00446a00  ldr      x0, [sp, #0xf8]
00446a04  bl       #0xc48850  ; <_ZdlPv>
00446a08  b        #0x446b74
00446a0c  b        #0x446b70
00446a10  mov      x19, x0
00446a14  b        #0x446b7c
00446a18  mov      x19, x0
00446a1c  b        #0x446b84
00446a20  mov      x19, x0
00446a24  b        #0x446b84
00446a28  mov      x19, x0
00446a2c  b        #0x446b8c
00446a30  mov      x19, x0
00446a34  b        #0x446b94
00446a38  mov      x19, x0
00446a3c  add      x0, sp, #0x660
00446a40  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446a44  b        #0x446a4c
00446a48  mov      x19, x0
00446a4c  ldrb     w8, [sp, #0x100]
00446a50  tbz      w8, #0, #0x446b94
00446a54  ldr      x0, [sp, #0x110]
00446a58  bl       #0xc48850  ; <_ZdlPv>
00446a5c  b        #0x446b94
00446a60  mov      x19, x0
00446a64  b        #0x446b94
00446a68  b        #0x446ba8
00446a6c  b        #0x446b70
00446a70  b        #0x446b70
00446a74  ldrb     w8, [sp, #0x118]
00446a78  mov      x19, x0
00446a7c  str      x28, [sp, #0x20]
00446a80  tbz      w8, #0, #0x446a8c
00446a84  ldr      x0, [sp, #0x128]
00446a88  bl       #0xc48850  ; <_ZdlPv>
00446a8c  ldrb     w8, [sp, #0x130]
00446a90  tbz      w8, #0, #0x446bac
00446a94  ldr      x0, [sp, #0x140]
00446a98  bl       #0xc48850  ; <_ZdlPv>
00446a9c  b        #0x446bac
00446aa0  mov      x19, x0
00446aa4  add      x0, sp, #0x720
00446aa8  str      x28, [sp, #0x20]
00446aac  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446ab0  b        #0x446abc
00446ab4  str      x28, [sp, #0x20]
00446ab8  mov      x19, x0
00446abc  ldrb     w8, [sp, #0x148]
00446ac0  tbz      w8, #0, #0x446bac
00446ac4  ldr      x0, [sp, #0x158]
00446ac8  bl       #0xc48850  ; <_ZdlPv>
00446acc  b        #0x446bac
00446ad0  mov      x19, x0
00446ad4  add      x0, sp, #0x7e0
00446ad8  str      x28, [sp, #0x20]
00446adc  bl       #0x446fe8
00446ae0  ldr      x8, [sp, #0x20]
00446ae4  ldr      x8, [x8, #0x28]  ; =0x15c028
00446ae8  ldur     x9, [x29, #-0x28]
00446aec  cmp      x8, x9
00446af0  b.eq     #0x446b24
00446af4  b        #0x446bc8
00446af8  ldrb     w8, [sp, #0x160]
00446afc  mov      x19, x0
00446b00  str      x28, [sp, #0x20]
00446b04  tbnz     w8, #0, #0x446b2c
00446b08  ldrb     w8, [sp, #0x178]
00446b0c  tbnz     w8, #0, #0x446b3c
00446b10  ldr      x8, [sp, #0x20]
00446b14  ldr      x8, [x8, #0x28]  ; =0x15c028
00446b18  ldur     x9, [x29, #-0x28]
00446b1c  cmp      x8, x9
00446b20  b.ne     #0x446bc8
00446b24  mov      x0, x19
00446b28  bl       #0xc44424
00446b2c  ldr      x0, [sp, #0x170]
00446b30  bl       #0xc48850  ; <_ZdlPv>
00446b34  ldrb     w8, [sp, #0x178]
00446b38  tbz      w8, #0, #0x446b10
00446b3c  ldr      x0, [sp, #0x188]
00446b40  bl       #0xc48850  ; <_ZdlPv>
00446b44  ldr      x8, [sp, #0x20]
00446b48  ldr      x8, [x8, #0x28]  ; =0x15c028
00446b4c  ldur     x9, [x29, #-0x28]
00446b50  cmp      x8, x9
00446b54  b.eq     #0x446b24
00446b58  b        #0x446bc8
00446b5c  mov      x19, x0
00446b60  b        #0x446b94
00446b64  b        #0x446b70
00446b68  mov      x19, x0
00446b6c  b        #0x446b94
00446b70  mov      x19, x0
00446b74  add      x0, sp, #0x4e0
00446b78  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446b7c  add      x0, sp, #0x540
00446b80  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446b84  add      x0, sp, #0x5a0
00446b88  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446b8c  add      x0, sp, #0x600
00446b90  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446b94  add      x0, sp, #0x6c0
00446b98  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446b9c  b        #0x446bac
00446ba0  b        #0x446ba4
00446ba4  str      x28, [sp, #0x20]
00446ba8  mov      x19, x0
00446bac  add      x0, sp, #0x780
00446bb0  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00446bb4  ldr      x8, [sp, #0x20]
00446bb8  ldr      x8, [x8, #0x28]  ; =0x15c028
00446bbc  ldur     x9, [x29, #-0x28]
00446bc0  cmp      x8, x9
00446bc4  b.eq     #0x446b24
00446bc8  bl       #0xc48830  ; <__stack_chk_fail>
