; function 0x441db8 size 0xb7c 
00441db8  stp      x29, x30, [sp, #-0x60]!
00441dbc  stp      x28, x27, [sp, #0x10]
00441dc0  stp      x26, x25, [sp, #0x20]
00441dc4  stp      x24, x23, [sp, #0x30]
00441dc8  stp      x22, x21, [sp, #0x40]
00441dcc  stp      x20, x19, [sp, #0x50]
00441dd0  mov      x29, sp
00441dd4  sub      sp, sp, #0x340
00441dd8  mrs      x8, tpidr_el0
00441ddc  mov      x21, x0
00441de0  str      x8, [sp, #0x28]
00441de4  ldr      x8, [x8, #0x28]
00441de8  stur     x8, [x29, #-0x18]
00441dec  ldp      x9, x8, [x0, #0x1d8]
00441df0  stp      xzr, xzr, [sp, #0x1f0]
00441df4  stp      xzr, xzr, [sp, #0x1e0]
00441df8  stp      xzr, xzr, [sp, #0x1d0]
00441dfc  cbz      x8, #0x441e44
00441e00  add      x10, x8, #8
00441e04  mov      w11, #1
00441e08  ldadd    x11, x10, [x10]
00441e0c  ldr      x19, [sp, #0x1f8]
00441e10  stp      x9, x8, [sp, #0x1f0]
00441e14  cbz      x19, #0x441e48
00441e18  add      x8, x19, #8
00441e1c  mov      x9, #-1
00441e20  ldaddal  x9, x8, [x8]
00441e24  cbnz     x8, #0x441e48
00441e28  ldr      x8, [x19]
00441e2c  mov      x0, x19
00441e30  ldr      x8, [x8, #0x10]
00441e34  blr      x8
00441e38  mov      x0, x19
00441e3c  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00441e40  b        #0x441e48
00441e44  stp      x9, x8, [sp, #0x1f0]
00441e48  ldp      x9, x8, [x21, #0x1e8]
00441e4c  cbz      x8, #0x441e5c
00441e50  add      x10, x8, #8
00441e54  mov      w11, #1
00441e58  ldadd    x11, x10, [x10]
00441e5c  ldr      x19, [sp, #0x1e8]
00441e60  stp      x9, x8, [sp, #0x1e0]
00441e64  cbz      x19, #0x441e90
00441e68  add      x8, x19, #8
00441e6c  mov      x9, #-1
00441e70  ldaddal  x9, x8, [x8]
00441e74  cbnz     x8, #0x441e90
00441e78  ldr      x8, [x19]
00441e7c  mov      x0, x19
00441e80  ldr      x8, [x8, #0x10]
00441e84  blr      x8
00441e88  mov      x0, x19
00441e8c  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00441e90  ldr      x8, [x21, #0x210]
00441e94  ldr      x9, [x21, #0x208]
00441e98  cbz      x8, #0x441ea8
00441e9c  add      x10, x8, #8
00441ea0  mov      w11, #1
00441ea4  ldadd    x11, x10, [x10]
00441ea8  ldr      x19, [sp, #0x1d8]
00441eac  stp      x9, x8, [sp, #0x1d0]
00441eb0  cbz      x19, #0x441ec4
00441eb4  add      x8, x19, #8
00441eb8  mov      x9, #-1
00441ebc  ldaddal  x9, x8, [x8]
00441ec0  cbz      x8, #0x441f64
00441ec4  ldr      x28, [sp, #0x1f0]
00441ec8  stp      xzr, xzr, [sp, #0x1c0]
00441ecc  str      xzr, [sp, #0x1b8]
00441ed0  ldp      x22, x19, [x28, #0x10]
00441ed4  subs     x20, x19, x22
00441ed8  b.eq     #0x441f94
00441edc  tbnz     x20, #0x3f, #0x442860
00441ee0  mov      x0, x20
00441ee4  bl       #0xc48840  ; <_Znwm>
00441ee8  asr      x8, x20, #3
00441eec  mov      x26, x0
00441ef0  sub      x9, x20, #8
00441ef4  str      x0, [sp, #0x1b8]
00441ef8  add      x8, x0, x8, lsl #3
00441efc  cmp      x9, #0x18
00441f00  str      x8, [sp, #0x1c8]
00441f04  b.lo     #0x441fb8
00441f08  mov      x8, x26
00441f0c  sub      x10, x26, x22
00441f10  cmp      x10, #0x20
00441f14  b.lo     #0x441fbc
00441f18  lsr      x8, x9, #3
00441f1c  add      x12, x26, #0x10
00441f20  add      x9, x8, #1
00441f24  add      x13, x22, #0x10
00441f28  and      x10, x9, #0x3ffffffffffffffc
00441f2c  lsl      x8, x10, #3
00441f30  mov      x14, x10
00441f34  add      x11, x22, x8
00441f38  add      x8, x26, x8
00441f3c  ldp      q0, q1, [x13, #-0x10]
00441f40  add      x13, x13, #0x20
00441f44  subs     x14, x14, #4
00441f48  stp      q0, q1, [x12, #-0x10]
00441f4c  add      x12, x12, #0x20
00441f50  b.ne     #0x441f3c
00441f54  mov      x22, x11
00441f58  cmp      x9, x10
00441f5c  b.ne     #0x441fbc
00441f60  b        #0x441fcc
00441f64  ldr      x8, [x19]
00441f68  mov      x0, x19
00441f6c  ldr      x8, [x8, #0x10]
00441f70  blr      x8
00441f74  mov      x0, x19
00441f78  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00441f7c  ldr      x28, [sp, #0x1f0]
00441f80  stp      xzr, xzr, [sp, #0x1c0]
00441f84  str      xzr, [sp, #0x1b8]
00441f88  ldp      x22, x19, [x28, #0x10]
00441f8c  subs     x20, x19, x22
00441f90  b.ne     #0x441edc
00441f94  mov      x26, xzr
00441f98  ldr      x27, [sp, #0x1d0]
00441f9c  stp      xzr, xzr, [sp, #0x1a8]
00441fa0  str      xzr, [sp, #0x1a0]
00441fa4  ldp      x20, x19, [x27, #0x10]
00441fa8  subs     x22, x19, x20
00441fac  b.ne     #0x441fe8
00441fb0  mov      x15, xzr
00441fb4  b        #0x442088
00441fb8  mov      x8, x26
00441fbc  ldr      x9, [x22], #8
00441fc0  cmp      x22, x19
00441fc4  str      x9, [x8], #8
00441fc8  b.ne     #0x441fbc
00441fcc  str      x8, [sp, #0x1c0]
00441fd0  ldr      x27, [sp, #0x1d0]
00441fd4  stp      xzr, xzr, [sp, #0x1a8]
00441fd8  str      xzr, [sp, #0x1a0]
00441fdc  ldp      x20, x19, [x27, #0x10]
00441fe0  subs     x22, x19, x20
00441fe4  b.eq     #0x441fb0
00441fe8  tbnz     x22, #0x3f, #0x44287c
00441fec  mov      x0, x22
00441ff0  bl       #0xc48840  ; <_Znwm>
00441ff4  asr      x8, x22, #3
00441ff8  mov      x15, x0
00441ffc  sub      x9, x22, #8
00442000  str      x0, [sp, #0x1a0]
00442004  add      x8, x0, x8, lsl #3
00442008  cmp      x9, #0x18
0044200c  str      x8, [sp, #0x1b0]
00442010  b.lo     #0x442070
00442014  mov      x8, x15
00442018  sub      x10, x15, x20
0044201c  cmp      x10, #0x20
00442020  b.lo     #0x442074
00442024  lsr      x8, x9, #3
00442028  add      x12, x15, #0x10
0044202c  add      x9, x8, #1
00442030  add      x13, x20, #0x10
00442034  and      x10, x9, #0x3ffffffffffffffc
00442038  lsl      x8, x10, #3
0044203c  mov      x14, x10
00442040  add      x11, x20, x8
00442044  add      x8, x15, x8
00442048  ldp      q0, q1, [x13, #-0x10]
0044204c  add      x13, x13, #0x20
00442050  subs     x14, x14, #4
00442054  stp      q0, q1, [x12, #-0x10]
00442058  add      x12, x12, #0x20
0044205c  b.ne     #0x442048
00442060  mov      x20, x11
00442064  cmp      x9, x10
00442068  b.ne     #0x442074
0044206c  b        #0x442084
00442070  mov      x8, x15
00442074  ldr      x9, [x20], #8
00442078  cmp      x20, x19
0044207c  str      x9, [x8], #8
00442080  b.ne     #0x442074
00442084  str      x8, [sp, #0x1a8]
00442088  ldp      x10, x22, [x15, #0x10]
0044208c  ldr      w8, [x21, #0x340]
00442090  ldr      w9, [x21, #0x344]
00442094  ldr      w19, [x26, #8]
00442098  ldr      w20, [x26, #0x18]
0044209c  ldr      w23, [x26, #0x10]
004420a0  cmp      w8, w9
004420a4  ldr      x11, [x15, #8]
004420a8  stp      w20, w19, [x29, #-0x24]
004420ac  stur     w23, [x29, #-0x1c]
004420b0  stp      x10, x11, [sp, #0x40]
004420b4  stp      w20, w19, [x29, #-0x30]
004420b8  stur     w23, [x29, #-0x28]
004420bc  b.ne     #0x4420c8
004420c0  mov      x24, xzr
004420c4  b        #0x4420d0
004420c8  sub      x24, x29, #0x30
004420cc  stur     w8, [x29, #-0x1c]
004420d0  ldr      x8, [sp, #0x1e0]
004420d4  ldr      x25, [x28, #0x30]
004420d8  str      x8, [sp, #0x18]
004420dc  ldr      x8, [x8, #0x30]
004420e0  str      x8, [sp, #0x20]
004420e4  ldr      x8, [x27, #0x30]
004420e8  str      x8, [sp, #0x10]
004420ec  ldr      x8, [sp, #0x48]
004420f0  stp      w22, w8, [x29, #-0x3c]
004420f4  ldr      x8, [sp, #0x40]
004420f8  stur     w8, [x29, #-0x34]
004420fc  adrp     x0, #0x151000
00442100  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442104  mov      w1, #0x2f
00442108  mov      w2, #0x4a
0044210c  stp      x15, x26, [sp, #0x30]
00442110  bl       #0xc48800  ; <__strrchr_chk>
00442114  cbz      x0, #0x442134
00442118  adrp     x0, #0x151000
0044211c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442120  mov      w1, #0x2f
00442124  mov      w2, #0x4a
00442128  bl       #0xc48800  ; <__strrchr_chk>
0044212c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00442130  b        #0x44213c
00442134  adrp     x3, #0x151000
00442138  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044213c  adrp     x26, #0x114000
00442140  add      x26, x26, #0x8b3  ; "[%s:%d] yuv_convert_rgb run.
"
00442144  adrp     x0, #0x177000
00442148  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044214c  mov      w1, #2
00442150  mov      x2, x26
00442154  mov      w4, #0x1e7
00442158  bl       #0x484908
0044215c  str      x22, [sp, #8]
00442160  mov      x22, x27
00442164  ldr      q0, [x26]
00442168  add      x8, sp, #0x200
0044216c  ldur     q1, [x26, #0xe]
00442170  str      q0, [sp, #0x200]
00442174  stur     q1, [x8, #0xe]
00442178  mov      x0, x26
0044217c  mov      w1, #0x1e
00442180  bl       #0xc48820  ; <__strlen_chk>
00442184  adrp     x9, #0xc78000
00442188  add      x8, sp, #0x200
0044218c  add      x8, x0, x8
00442190  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00442194  sturb    wzr, [x8, #-1]
00442198  ldr      x26, [x9]
0044219c  adrp     x0, #0x151000
004421a0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004421a4  mov      w1, #0x2f
004421a8  mov      w2, #0x4a
004421ac  bl       #0xc48800  ; <__strrchr_chk>
004421b0  cbz      x0, #0x4421d0
004421b4  adrp     x0, #0x151000
004421b8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004421bc  mov      w1, #0x2f
004421c0  mov      w2, #0x4a
004421c4  bl       #0xc48800  ; <__strrchr_chk>
004421c8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004421cc  b        #0x4421d8
004421d0  adrp     x3, #0x151000
004421d4  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004421d8  adrp     x1, #0x177000
004421dc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004421e0  add      x2, sp, #0x200
004421e4  mov      w0, #2
004421e8  mov      w4, #0x1e7
004421ec  mov      w27, #2
004421f0  blr      x26
004421f4  mul      w19, w20, w19
004421f8  ldr      x8, [x28, #0x38]
004421fc  str      w27, [sp, #0x68]
00442200  mul      w9, w19, w23
00442204  str      w8, [sp, #0x7c]
00442208  sxtw     x9, w9
0044220c  str      x9, [sp, #0x70]
00442210  mov      x6, x25
00442214  add      x0, sp, #0x140
00442218  ldp      x25, x20, [sp, #0x30]
0044221c  sub      x2, x29, #0x24
00442220  mov      w1, #3
00442224  mov      w3, wzr
00442228  mov      x4, x24
0044222c  mov      w5, #1
00442230  bl       #0x48d618
00442234  mov      w24, w0
00442238  cbz      w0, #0x442270
0044223c  adrp     x0, #0x151000
00442240  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442244  mov      w1, #0x2f
00442248  mov      w2, #0x4a
0044224c  bl       #0xc48800  ; <__strrchr_chk>
00442250  cbz      x0, #0x442318
00442254  adrp     x0, #0x151000
00442258  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044225c  mov      w1, #0x2f
00442260  mov      w2, #0x4a
00442264  bl       #0xc48800  ; <__strrchr_chk>
00442268  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044226c  b        #0x442320
00442270  add      x0, sp, #0x140
00442274  add      x1, sp, #0x68
00442278  mov      w2, #1
0044227c  bl       #0x48e2c8
00442280  cmp      w19, #0
00442284  ldur     w9, [x29, #-0x20]
00442288  cinc     w8, w19, lt
0044228c  mov      w11, #2
00442290  asr      w8, w8, #1
00442294  ldp      x10, x6, [sp, #0x18]
00442298  mul      w8, w8, w23
0044229c  cmp      w9, #0
004422a0  cinc     w9, w9, lt
004422a4  str      w11, [sp, #0x68]
004422a8  sxtw     x8, w8
004422ac  asr      w9, w9, #1
004422b0  ldr      x10, [x10, #0x38]
004422b4  str      x8, [sp, #0x70]
004422b8  str      w10, [sp, #0x7c]
004422bc  stur     w9, [x29, #-0x20]
004422c0  add      x0, sp, #0xe0
004422c4  sub      x2, x29, #0x24
004422c8  mov      w1, #3
004422cc  mov      w3, wzr
004422d0  mov      x4, xzr
004422d4  mov      w5, #1
004422d8  bl       #0x48d618
004422dc  mov      w23, w0
004422e0  cbz      w0, #0x4423e0
004422e4  adrp     x0, #0x151000
004422e8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004422ec  mov      w1, #0x2f
004422f0  mov      w2, #0x4a
004422f4  bl       #0xc48800  ; <__strrchr_chk>
004422f8  cbz      x0, #0x442470
004422fc  adrp     x0, #0x151000
00442300  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442304  mov      w1, #0x2f
00442308  mov      w2, #0x4a
0044230c  bl       #0xc48800  ; <__strrchr_chk>
00442310  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00442314  b        #0x442478
00442318  adrp     x3, #0x151000
0044231c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442320  adrp     x21, #0x11f000
00442324  add      x21, x21, #0x808  ; "[%s:%d] convert input MialgoInitMat src_y error %d
"
00442328  adrp     x0, #0x177000
0044232c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00442330  mov      w1, #1
00442334  mov      x2, x21
00442338  mov      w4, #0x1f2
0044233c  mov      w5, w24
00442340  bl       #0x484908
00442344  ldp      q0, q1, [x21]
00442348  mov      w8, #0x6425
0044234c  movk     w8, #0xa, lsl #16
00442350  str      w8, [sp, #0x230]
00442354  ldr      q2, [x21, #0x20]  ; =0x11f020
00442358  stp      q0, q1, [sp, #0x200]
0044235c  str      q2, [sp, #0x220]
00442360  mov      x0, x21
00442364  mov      w1, #0x34
00442368  bl       #0xc48820  ; <__strlen_chk>
0044236c  adrp     x9, #0xc78000
00442370  add      x8, sp, #0x200
00442374  add      x8, x0, x8
00442378  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
0044237c  sturb    wzr, [x8, #-1]
00442380  ldr      x19, [x9]
00442384  adrp     x0, #0x151000
00442388  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044238c  mov      w1, #0x2f
00442390  mov      w2, #0x4a
00442394  bl       #0xc48800  ; <__strrchr_chk>
00442398  cbz      x0, #0x4423b8
0044239c  adrp     x0, #0x151000
004423a0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004423a4  mov      w1, #0x2f
004423a8  mov      w2, #0x4a
004423ac  bl       #0xc48800  ; <__strrchr_chk>
004423b0  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004423b4  b        #0x4423c0
004423b8  adrp     x3, #0x151000
004423bc  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004423c0  adrp     x1, #0x177000
004423c4  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004423c8  add      x2, sp, #0x200
004423cc  mov      w0, #1
004423d0  mov      w4, #0x1f2
004423d4  mov      w5, w24
004423d8  blr      x19
004423dc  b        #0x442534
004423e0  add      x0, sp, #0xe0
004423e4  add      x1, sp, #0x68
004423e8  mov      w2, #1
004423ec  bl       #0x48e2c8
004423f0  ldp      x9, x8, [sp, #0x40]
004423f4  ldp      x10, x6, [sp, #8]
004423f8  mul      w8, w8, w9
004423fc  ldr      x9, [x22, #0x38]
00442400  mul      w8, w8, w10
00442404  mov      w10, #2
00442408  str      w9, [sp, #0x64]
0044240c  sxtw     x8, w8
00442410  str      w10, [sp, #0x50]
00442414  str      x8, [sp, #0x58]
00442418  add      x0, sp, #0x80
0044241c  sub      x2, x29, #0x3c
00442420  mov      w1, #3
00442424  mov      w3, wzr
00442428  mov      x4, xzr
0044242c  mov      w5, #1
00442430  bl       #0x48d618
00442434  mov      w22, w0
00442438  cbz      w0, #0x442558
0044243c  adrp     x0, #0x151000
00442440  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442444  mov      w1, #0x2f
00442448  mov      w2, #0x4a
0044244c  bl       #0xc48800  ; <__strrchr_chk>
00442450  cbz      x0, #0x4425dc
00442454  adrp     x0, #0x151000
00442458  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044245c  mov      w1, #0x2f
00442460  mov      w2, #0x4a
00442464  bl       #0xc48800  ; <__strrchr_chk>
00442468  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044246c  b        #0x4425e4
00442470  adrp     x3, #0x151000
00442474  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442478  adrp     x21, #0x13e000
0044247c  add      x21, x21, #0xc3b  ; "[%s:%d] convert input MialgoInitMat src_uv error %d
"
00442480  adrp     x0, #0x177000
00442484  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00442488  mov      w1, #1
0044248c  mov      x2, x21
00442490  mov      w4, #0x1fe
00442494  mov      w5, w23
00442498  bl       #0x484908
0044249c  ldp      q0, q1, [x21]
004424a0  add      x9, sp, #0x200
004424a4  ldr      q2, [x21, #0x20]  ; =0x13e020
004424a8  stp      q0, q1, [sp, #0x200]
004424ac  ldur     x8, [x21, #0x2d]
004424b0  str      q2, [sp, #0x220]
004424b4  stur     x8, [x9, #0x2d]
004424b8  mov      x0, x21
004424bc  mov      w1, #0x35
004424c0  bl       #0xc48820  ; <__strlen_chk>
004424c4  adrp     x9, #0xc78000
004424c8  add      x8, sp, #0x200
004424cc  add      x8, x0, x8
004424d0  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
004424d4  sturb    wzr, [x8, #-1]
004424d8  ldr      x19, [x9]
004424dc  adrp     x0, #0x151000
004424e0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004424e4  mov      w1, #0x2f
004424e8  mov      w2, #0x4a
004424ec  bl       #0xc48800  ; <__strrchr_chk>
004424f0  cbz      x0, #0x442510
004424f4  adrp     x0, #0x151000
004424f8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004424fc  mov      w1, #0x2f
00442500  mov      w2, #0x4a
00442504  bl       #0xc48800  ; <__strrchr_chk>
00442508  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044250c  b        #0x442518
00442510  adrp     x3, #0x151000
00442514  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442518  adrp     x1, #0x177000
0044251c  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00442520  add      x2, sp, #0x200
00442524  mov      w0, #1
00442528  mov      w4, #0x1fe
0044252c  mov      w5, w23
00442530  blr      x19
00442534  mov      w21, #0x6521
00442538  movk     w21, #0x11, lsl #16
0044253c  mov      x0, x25
00442540  bl       #0xc48850  ; <_ZdlPv>
00442544  mov      x0, x20
00442548  bl       #0xc48850  ; <_ZdlPv>
0044254c  ldr      x19, [sp, #0x1d8]
00442550  cbnz     x19, #0x4426bc
00442554  b        #0x4426e4
00442558  add      x0, sp, #0x80
0044255c  add      x1, sp, #0x50
00442560  mov      w2, #1
00442564  bl       #0x48e2c8
00442568  ldr      w8, [x21, #0x338]  ; =0x13e338
0044256c  cmp      w8, #1
00442570  mov      w8, #0x190
00442574  cinc     w3, w8, eq
00442578  add      x0, sp, #0x140
0044257c  add      x1, sp, #0xe0
00442580  add      x2, sp, #0x80
00442584  mov      w4, #2
00442588  mov      x5, xzr
0044258c  bl       #0x4dc068
00442590  mov      w21, w0
00442594  cbz      w0, #0x4426a4
00442598  mov      w0, w21
0044259c  mov      x1, xzr
004425a0  mov      w2, wzr
004425a4  bl       #0x48448c
004425a8  adrp     x0, #0x151000
004425ac  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004425b0  mov      w1, #0x2f
004425b4  mov      w2, #0x4a
004425b8  bl       #0xc48800  ; <__strrchr_chk>
004425bc  cbz      x0, #0x44277c
004425c0  adrp     x0, #0x151000
004425c4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004425c8  mov      w1, #0x2f
004425cc  mov      w2, #0x4a
004425d0  bl       #0xc48800  ; <__strrchr_chk>
004425d4  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
004425d8  b        #0x442784
004425dc  adrp     x3, #0x151000
004425e0  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004425e4  adrp     x21, #0x163000
004425e8  add      x21, x21, #0x656  ; "[%s:%d] convert input MialgoInitMat dst error %d
"
004425ec  adrp     x0, #0x177000
004425f0  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
004425f4  mov      w1, #1
004425f8  mov      x2, x21
004425fc  mov      w4, #0x20b
00442600  mov      w5, w22
00442604  bl       #0x484908
00442608  ldp      q0, q1, [x21]
0044260c  mov      w8, #0xa
00442610  strh     w8, [sp, #0x230]
00442614  ldr      q2, [x21, #0x20]  ; =0x163020
00442618  stp      q0, q1, [sp, #0x200]
0044261c  str      q2, [sp, #0x220]
00442620  mov      x0, x21
00442624  mov      w1, #0x32
00442628  bl       #0xc48820  ; <__strlen_chk>
0044262c  adrp     x9, #0xc78000
00442630  add      x8, sp, #0x200
00442634  add      x8, x0, x8
00442638  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
0044263c  sturb    wzr, [x8, #-1]
00442640  ldr      x19, [x9]
00442644  adrp     x0, #0x151000
00442648  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044264c  mov      w1, #0x2f
00442650  mov      w2, #0x4a
00442654  bl       #0xc48800  ; <__strrchr_chk>
00442658  cbz      x0, #0x442678
0044265c  adrp     x0, #0x151000
00442660  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442664  mov      w1, #0x2f
00442668  mov      w2, #0x4a
0044266c  bl       #0xc48800  ; <__strrchr_chk>
00442670  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00442674  b        #0x442680
00442678  adrp     x3, #0x151000
0044267c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442680  adrp     x1, #0x177000
00442684  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00442688  add      x2, sp, #0x200
0044268c  mov      w0, #1
00442690  mov      w4, #0x20b
00442694  mov      w5, w22
00442698  blr      x19
0044269c  mov      w21, #0x6521
004426a0  movk     w21, #0x11, lsl #16
004426a4  mov      x0, x25
004426a8  bl       #0xc48850  ; <_ZdlPv>
004426ac  mov      x0, x20
004426b0  bl       #0xc48850  ; <_ZdlPv>
004426b4  ldr      x19, [sp, #0x1d8]
004426b8  cbz      x19, #0x4426e4
004426bc  add      x8, x19, #8
004426c0  mov      x9, #-1
004426c4  ldaddal  x9, x8, [x8]
004426c8  cbnz     x8, #0x4426e4
004426cc  ldr      x8, [x19]
004426d0  mov      x0, x19
004426d4  ldr      x8, [x8, #0x10]
004426d8  blr      x8
004426dc  mov      x0, x19
004426e0  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
004426e4  ldr      x19, [sp, #0x1e8]
004426e8  cbz      x19, #0x442714
004426ec  add      x8, x19, #8
004426f0  mov      x9, #-1
004426f4  ldaddal  x9, x8, [x8]
004426f8  cbnz     x8, #0x442714
004426fc  ldr      x8, [x19]
00442700  mov      x0, x19
00442704  ldr      x8, [x8, #0x10]
00442708  blr      x8
0044270c  mov      x0, x19
00442710  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00442714  ldr      x19, [sp, #0x1f8]
00442718  cbz      x19, #0x442744
0044271c  add      x8, x19, #8
00442720  mov      x9, #-1
00442724  ldaddal  x9, x8, [x8]
00442728  cbnz     x8, #0x442744
0044272c  ldr      x8, [x19]
00442730  mov      x0, x19
00442734  ldr      x8, [x8, #0x10]
00442738  blr      x8
0044273c  mov      x0, x19
00442740  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
00442744  ldr      x8, [sp, #0x28]
00442748  ldr      x8, [x8, #0x28]
0044274c  ldur     x9, [x29, #-0x18]
00442750  cmp      x8, x9
00442754  b.ne     #0x442930
00442758  mov      w0, w21
0044275c  add      sp, sp, #0x340
00442760  ldp      x20, x19, [sp, #0x50]
00442764  ldp      x22, x21, [sp, #0x40]
00442768  ldp      x24, x23, [sp, #0x30]
0044276c  ldp      x26, x25, [sp, #0x20]
00442770  ldp      x28, x27, [sp, #0x10]
00442774  ldp      x29, x30, [sp], #0x60
00442778  ret      
0044277c  adrp     x3, #0x151000
00442780  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442784  adrp     x22, #0x167000
00442788  add      x22, x22, #0x8a6  ; "[%s:%d] MialgoCvtcolorRGBToYUVImpl error %d
"
0044278c  adrp     x0, #0x177000
00442790  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00442794  mov      w1, #1
00442798  mov      x2, x22
0044279c  mov      w4, #0x227
004427a0  mov      w5, w21
004427a4  bl       #0x484908
004427a8  ldp      q0, q1, [x22]
004427ac  add      x8, sp, #0x200
004427b0  ldur     q2, [x22, #0x1d]
004427b4  stp      q0, q1, [sp, #0x200]
004427b8  stur     q2, [x8, #0x1d]
004427bc  mov      x0, x22
004427c0  mov      w1, #0x2d
004427c4  bl       #0xc48820  ; <__strlen_chk>
004427c8  adrp     x9, #0xc78000
004427cc  add      x8, sp, #0x200
004427d0  add      x8, x0, x8
004427d4  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
004427d8  sturb    wzr, [x8, #-1]
004427dc  ldr      x19, [x9]
004427e0  adrp     x0, #0x151000
004427e4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004427e8  mov      w1, #0x2f
004427ec  mov      w2, #0x4a
004427f0  bl       #0xc48800  ; <__strrchr_chk>
004427f4  cbz      x0, #0x442814
004427f8  adrp     x0, #0x151000
004427fc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00442800  mov      w1, #0x2f
00442804  mov      w2, #0x4a
00442808  bl       #0xc48800  ; <__strrchr_chk>
0044280c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
00442810  b        #0x44281c
00442814  adrp     x3, #0x151000
00442818  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044281c  adrp     x1, #0x177000
00442820  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00442824  add      x2, sp, #0x200
00442828  mov      w0, #1
0044282c  mov      w4, #0x227
00442830  mov      w5, w21
00442834  blr      x19
00442838  mov      w8, #0x6521
0044283c  movk     w8, #0x11, lsl #16
00442840  add      w21, w8, #7
00442844  mov      x0, x25
00442848  bl       #0xc48850  ; <_ZdlPv>
0044284c  mov      x0, x20
00442850  bl       #0xc48850  ; <_ZdlPv>
00442854  ldr      x19, [sp, #0x1d8]
00442858  cbnz     x19, #0x4426bc
0044285c  b        #0x4426e4
00442860  ldr      x8, [sp, #0x28]
00442864  ldr      x8, [x8, #0x28]
00442868  ldur     x9, [x29, #-0x18]
0044286c  cmp      x8, x9
00442870  b.ne     #0x442930
00442874  add      x0, sp, #0x1b8
00442878  bl       #0x41dce4
0044287c  ldr      x8, [sp, #0x28]
00442880  ldr      x8, [x8, #0x28]
00442884  ldur     x9, [x29, #-0x18]
00442888  cmp      x8, x9
0044288c  b.ne     #0x442930
00442890  add      x0, sp, #0x1a0
00442894  bl       #0x41dce4
00442898  b        #0x4428e8
0044289c  b        #0x4428e8
004428a0  b        #0x4428e8
004428a4  b        #0x4428e8
004428a8  ldr      x8, [sp, #0x1a0]
004428ac  mov      x19, x0
004428b0  cbz      x8, #0x4428d4
004428b4  str      x8, [sp, #0x1a8]
004428b8  b        #0x4428cc
004428bc  ldr      x8, [sp, #0x1b8]
004428c0  mov      x19, x0
004428c4  cbz      x8, #0x4428d4
004428c8  str      x8, [sp, #0x1c0]
004428cc  mov      x0, x8
004428d0  bl       #0xc48850  ; <_ZdlPv>
004428d4  mov      x0, x19
004428d8  bl       #0x41dcd4
004428dc  b        #0x4428e8
004428e0  b        #0x4428e8
004428e4  b        #0x4428e8
004428e8  mov      x21, x0
004428ec  ldr      x0, [sp, #0x30]
004428f0  bl       #0xc48850  ; <_ZdlPv>
004428f4  ldr      x0, [sp, #0x38]
004428f8  bl       #0xc48850  ; <_ZdlPv>
004428fc  add      x0, sp, #0x1d0
00442900  bl       #0x423b48
00442904  add      x0, sp, #0x1e0
00442908  bl       #0x423b48
0044290c  add      x0, sp, #0x1f0
00442910  bl       #0x423b48
00442914  ldr      x8, [sp, #0x28]
00442918  ldr      x8, [x8, #0x28]
0044291c  ldur     x9, [x29, #-0x18]
00442920  cmp      x8, x9
00442924  b.ne     #0x442930
00442928  mov      x0, x21
0044292c  bl       #0xc44424
00442930  bl       #0xc48830  ; <__stack_chk_fail>
