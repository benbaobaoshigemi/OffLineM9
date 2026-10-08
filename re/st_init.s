; function 0x44ce18 size 0x122c 
0044ce18  sub      sp, sp, #0x1e0
0044ce1c  str      d8, [sp, #0x170]
0044ce20  stp      x29, x30, [sp, #0x180]
0044ce24  stp      x28, x27, [sp, #0x190]
0044ce28  stp      x26, x25, [sp, #0x1a0]
0044ce2c  stp      x24, x23, [sp, #0x1b0]
0044ce30  stp      x22, x21, [sp, #0x1c0]
0044ce34  stp      x20, x19, [sp, #0x1d0]
0044ce38  add      x29, sp, #0x180
0044ce3c  mrs      x26, tpidr_el0
0044ce40  mov      w19, w1
0044ce44  ldr      x8, [x26, #0x28]
0044ce48  mov      x23, x0
0044ce4c  stur     x8, [x29, #-0x20]
0044ce50  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044ce54  str      x0, [sp, #8]
0044ce58  mov      w0, #8
0044ce5c  bl       #0xc48840  ; <_Znwm>
0044ce60  mov      x20, x0
0044ce64  mov      w8, #1
0044ce68  str      x8, [x0]
0044ce6c  mov      w0, #0x58
0044ce70  str      x26, [sp, #0x10]
0044ce74  bl       #0xc48840  ; <_Znwm>
0044ce78  mov      x21, x0
0044ce7c  adrp     x27, #0xc51000
0044ce80  add      x27, x27, #0x208  ; =0xc51208
0044ce84  mov      x24, x0
0044ce88  mov      x25, x0
0044ce8c  adrp     x22, #0xc51000
0044ce90  add      x22, x22, #0x258  ; =0xc51258
0044ce94  stp      xzr, xzr, [x0, #8]
0044ce98  str      x27, [x0]
0044ce9c  add      x2, x20, #8
0044cea0  str      xzr, [x25, #0x28]!
0044cea4  str      x22, [x24, #0x18]!
0044cea8  stp      xzr, xzr, [x0, #0x30]
0044ceac  str      xzr, [x0, #0x48]
0044ceb0  str      wzr, [x0, #0x50]
0044ceb4  mov      x0, x25
0044ceb8  mov      x1, x20
0044cebc  bl       #0x420460
0044cec0  mov      w8, #1
0044cec4  mov      x0, x20
0044cec8  str      wzr, [x21, #0x20]
0044cecc  stp      x24, x21, [sp, #0x40]
0044ced0  str      x8, [x21, #0x40]
0044ced4  bl       #0xc48850  ; <_ZdlPv>
0044ced8  mov      w0, #8
0044cedc  bl       #0xc48840  ; <_Znwm>
0044cee0  mov      x25, x0
0044cee4  mov      w8, #1
0044cee8  str      x8, [x0]
0044ceec  mov      w0, #0x58
0044cef0  bl       #0xc48840  ; <_Znwm>
0044cef4  mov      x20, x0
0044cef8  mov      x28, x0
0044cefc  mov      x26, x0
0044cf00  str      x27, [x0]
0044cf04  mov      x27, x0
0044cf08  str      xzr, [x0, #0x10]
0044cf0c  str      xzr, [x28, #8]!
0044cf10  str      x22, [x26, #0x18]!
0044cf14  str      xzr, [x27, #0x28]!
0044cf18  stp      xzr, xzr, [x0, #0x30]
0044cf1c  add      x2, x25, #8
0044cf20  str      xzr, [x0, #0x48]
0044cf24  str      wzr, [x0, #0x50]
0044cf28  mov      x0, x27
0044cf2c  mov      x1, x25
0044cf30  bl       #0x420460
0044cf34  mov      w8, #1
0044cf38  mov      x0, x25
0044cf3c  str      wzr, [x20, #0x20]
0044cf40  stp      x26, x20, [sp, #0x30]
0044cf44  str      x8, [x20, #0x40]
0044cf48  bl       #0xc48850  ; <_ZdlPv>
0044cf4c  mov      x0, x24
0044cf50  bl       #0x43f1b4
0044cf54  mov      x0, x26
0044cf58  bl       #0x43f1b4
0044cf5c  adrp     x25, #0xc78000
0044cf60  cmp      w19, #3
0044cf64  ldr      x25, [x25, #0x2f0]  ; =0xc782f0
0044cf68  b.hi     #0x44d058
0044cf6c  mov      w8, w19
0044cf70  adrp     x9, #0x18b000
0044cf74  add      x9, x9, #0xcc0  ; =0x18bcc0
0044cf78  adr      x10, #0x44cf88
0044cf7c  ldrb     w11, [x9, x8]
0044cf80  add      x10, x10, x11, lsl #2
0044cf84  br       x10
0044cf88  adrp     x0, #0x151000
0044cf8c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044cf90  mov      w1, #0x2f
0044cf94  mov      w2, #0x4a
0044cf98  bl       #0xc48800  ; <__strrchr_chk>
0044cf9c  cbz      x0, #0x44d130
0044cfa0  adrp     x0, #0x151000
0044cfa4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044cfa8  mov      w1, #0x2f
0044cfac  mov      w2, #0x4a
0044cfb0  bl       #0xc48800  ; <__strrchr_chk>
0044cfb4  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044cfb8  b        #0x44d138
0044cfbc  adrp     x0, #0x151000
0044cfc0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044cfc4  mov      w1, #0x2f
0044cfc8  mov      w2, #0x4a
0044cfcc  bl       #0xc48800  ; <__strrchr_chk>
0044cfd0  cbz      x0, #0x44d08c
0044cfd4  adrp     x0, #0x151000
0044cfd8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044cfdc  mov      w1, #0x2f
0044cfe0  mov      w2, #0x4a
0044cfe4  bl       #0xc48800  ; <__strrchr_chk>
0044cfe8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044cfec  b        #0x44d094
0044cff0  adrp     x0, #0x151000
0044cff4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044cff8  mov      w1, #0x2f
0044cffc  mov      w2, #0x4a
0044d000  bl       #0xc48800  ; <__strrchr_chk>
0044d004  cbz      x0, #0x44d1d4
0044d008  adrp     x0, #0x151000
0044d00c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d010  mov      w1, #0x2f
0044d014  mov      w2, #0x4a
0044d018  bl       #0xc48800  ; <__strrchr_chk>
0044d01c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d020  b        #0x44d1dc
0044d024  adrp     x0, #0x151000
0044d028  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d02c  mov      w1, #0x2f
0044d030  mov      w2, #0x4a
0044d034  bl       #0xc48800  ; <__strrchr_chk>
0044d038  cbz      x0, #0x44d25c
0044d03c  adrp     x0, #0x151000
0044d040  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d044  mov      w1, #0x2f
0044d048  mov      w2, #0x4a
0044d04c  bl       #0xc48800  ; <__strrchr_chk>
0044d050  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d054  b        #0x44d264
0044d058  adrp     x0, #0x151000
0044d05c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d060  mov      w1, #0x2f
0044d064  mov      w2, #0x4a
0044d068  bl       #0xc48800  ; <__strrchr_chk>
0044d06c  cbz      x0, #0x44d300
0044d070  adrp     x0, #0x151000
0044d074  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d078  mov      w1, #0x2f
0044d07c  mov      w2, #0x4a
0044d080  bl       #0xc48800  ; <__strrchr_chk>
0044d084  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d088  b        #0x44d308
0044d08c  adrp     x3, #0x151000
0044d090  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d094  ldr      x8, [x23, #0x318]
0044d098  ldrb     w9, [x8, #0x220]
0044d09c  ldr      x10, [x8, #0x230]
0044d0a0  add      x8, x8, #0x221
0044d0a4  tst      w9, #1
0044d0a8  csel     x5, x8, x10, eq
0044d0ac  adrp     x24, #0x12f000
0044d0b0  add      x24, x24, #0x401  ; "[%s:%d] start init model name : %s
"
0044d0b4  adrp     x0, #0x177000
0044d0b8  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d0bc  mov      w1, #2
0044d0c0  mov      x2, x24
0044d0c4  mov      w4, #0x60c
0044d0c8  bl       #0x484908
0044d0cc  ldp      q0, q1, [x24]
0044d0d0  mov      w8, #0x7325
0044d0d4  movk     w8, #0xa, lsl #16
0044d0d8  str      w8, [sp, #0x70]
0044d0dc  stp      q0, q1, [sp, #0x50]
0044d0e0  mov      x0, x24
0044d0e4  mov      w1, #0x24
0044d0e8  bl       #0xc48820  ; <__strlen_chk>
0044d0ec  add      x8, sp, #0x50
0044d0f0  ldr      x22, [x25]
0044d0f4  add      x8, x0, x8
0044d0f8  sturb    wzr, [x8, #-1]
0044d0fc  adrp     x0, #0x151000
0044d100  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d104  mov      w1, #0x2f
0044d108  mov      w2, #0x4a
0044d10c  bl       #0xc48800  ; <__strrchr_chk>
0044d110  cbz      x0, #0x44d38c
0044d114  adrp     x0, #0x151000
0044d118  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d11c  mov      w1, #0x2f
0044d120  mov      w2, #0x4a
0044d124  bl       #0xc48800  ; <__strrchr_chk>
0044d128  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d12c  b        #0x44d394
0044d130  adrp     x3, #0x151000
0044d134  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d138  ldr      x8, [x23, #0x318]
0044d13c  ldrb     w9, [x8, #0x70]
0044d140  ldr      x10, [x8, #0x80]
0044d144  add      x8, x8, #0x71
0044d148  tst      w9, #1
0044d14c  csel     x5, x8, x10, eq
0044d150  adrp     x24, #0x12f000
0044d154  add      x24, x24, #0x401  ; "[%s:%d] start init model name : %s
"
0044d158  adrp     x0, #0x177000
0044d15c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d160  mov      w1, #2
0044d164  mov      x2, x24
0044d168  mov      w4, #0x5f1
0044d16c  bl       #0x484908
0044d170  ldp      q0, q1, [x24]
0044d174  mov      w8, #0x7325
0044d178  movk     w8, #0xa, lsl #16
0044d17c  str      w8, [sp, #0x70]
0044d180  stp      q0, q1, [sp, #0x50]
0044d184  mov      x0, x24
0044d188  mov      w1, #0x24
0044d18c  bl       #0xc48820  ; <__strlen_chk>
0044d190  add      x8, sp, #0x50
0044d194  ldr      x22, [x25]
0044d198  add      x8, x0, x8
0044d19c  sturb    wzr, [x8, #-1]
0044d1a0  adrp     x0, #0x151000
0044d1a4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d1a8  mov      w1, #0x2f
0044d1ac  mov      w2, #0x4a
0044d1b0  bl       #0xc48800  ; <__strrchr_chk>
0044d1b4  cbz      x0, #0x44d4b4
0044d1b8  adrp     x0, #0x151000
0044d1bc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d1c0  mov      w1, #0x2f
0044d1c4  mov      w2, #0x4a
0044d1c8  bl       #0xc48800  ; <__strrchr_chk>
0044d1cc  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d1d0  b        #0x44d4bc
0044d1d4  adrp     x3, #0x151000
0044d1d8  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d1dc  adrp     x24, #0x128000
0044d1e0  add      x24, x24, #0xf93  ; "[%s:%d] start init model name scene_human_seg.
"
0044d1e4  adrp     x0, #0x177000
0044d1e8  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d1ec  mov      w1, #2
0044d1f0  mov      x2, x24
0044d1f4  mov      w4, #0x61a
0044d1f8  bl       #0x484908
0044d1fc  ldp      q0, q1, [x24]
0044d200  ldr      q2, [x24, #0x20]  ; =0x128020
0044d204  stp      q0, q1, [sp, #0x50]
0044d208  str      q2, [sp, #0x70]
0044d20c  mov      x0, x24
0044d210  mov      w1, #0x30
0044d214  bl       #0xc48820  ; <__strlen_chk>
0044d218  add      x8, sp, #0x50
0044d21c  ldr      x22, [x25]
0044d220  add      x8, x0, x8
0044d224  sturb    wzr, [x8, #-1]
0044d228  adrp     x0, #0x151000
0044d22c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d230  mov      w1, #0x2f
0044d234  mov      w2, #0x4a
0044d238  bl       #0xc48800  ; <__strrchr_chk>
0044d23c  cbz      x0, #0x44d418
0044d240  adrp     x0, #0x151000
0044d244  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d248  mov      w1, #0x2f
0044d24c  mov      w2, #0x4a
0044d250  bl       #0xc48800  ; <__strrchr_chk>
0044d254  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d258  b        #0x44d420
0044d25c  adrp     x3, #0x151000
0044d260  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d264  ldr      x8, [x23, #0x318]
0044d268  ldrb     w9, [x8, #0x148]
0044d26c  ldr      x10, [x8, #0x158]
0044d270  add      x8, x8, #0x149
0044d274  tst      w9, #1
0044d278  csel     x5, x8, x10, eq
0044d27c  adrp     x24, #0x12f000
0044d280  add      x24, x24, #0x401  ; "[%s:%d] start init model name : %s
"
0044d284  adrp     x0, #0x177000
0044d288  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d28c  mov      w1, #2
0044d290  mov      x2, x24
0044d294  mov      w4, #0x5fe
0044d298  bl       #0x484908
0044d29c  ldp      q0, q1, [x24]
0044d2a0  mov      w8, #0x7325
0044d2a4  movk     w8, #0xa, lsl #16
0044d2a8  str      w8, [sp, #0x70]
0044d2ac  stp      q0, q1, [sp, #0x50]
0044d2b0  mov      x0, x24
0044d2b4  mov      w1, #0x24
0044d2b8  bl       #0xc48820  ; <__strlen_chk>
0044d2bc  add      x8, sp, #0x50
0044d2c0  ldr      x22, [x25]
0044d2c4  add      x8, x0, x8
0044d2c8  sturb    wzr, [x8, #-1]
0044d2cc  adrp     x0, #0x151000
0044d2d0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d2d4  mov      w1, #0x2f
0044d2d8  mov      w2, #0x4a
0044d2dc  bl       #0xc48800  ; <__strrchr_chk>
0044d2e0  cbz      x0, #0x44d53c
0044d2e4  adrp     x0, #0x151000
0044d2e8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d2ec  mov      w1, #0x2f
0044d2f0  mov      w2, #0x4a
0044d2f4  bl       #0xc48800  ; <__strrchr_chk>
0044d2f8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d2fc  b        #0x44d544
0044d300  adrp     x3, #0x151000
0044d304  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d308  adrp     x22, #0x139000
0044d30c  add      x22, x22, #0x684  ; "[%s:%d] init model name mismatch %d.
"
0044d310  adrp     x0, #0x177000
0044d314  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d318  mov      w1, #2
0044d31c  mov      x2, x22
0044d320  mov      w4, #0x626
0044d324  mov      w5, w19
0044d328  bl       #0x484908
0044d32c  ldp      q0, q1, [x22]
0044d330  ldur     x8, [x22, #0x1e]
0044d334  stp      q0, q1, [sp, #0x50]
0044d338  stur     x8, [sp, #0x6e]
0044d33c  mov      x0, x22
0044d340  mov      w1, #0x26
0044d344  bl       #0xc48820  ; <__strlen_chk>
0044d348  add      x8, sp, #0x50
0044d34c  ldr      x22, [x25]
0044d350  add      x8, x0, x8
0044d354  sturb    wzr, [x8, #-1]
0044d358  adrp     x0, #0x151000
0044d35c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d360  mov      w1, #0x2f
0044d364  mov      w2, #0x4a
0044d368  bl       #0xc48800  ; <__strrchr_chk>
0044d36c  cbz      x0, #0x44d5c8
0044d370  adrp     x0, #0x151000
0044d374  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d378  mov      w1, #0x2f
0044d37c  mov      w2, #0x4a
0044d380  bl       #0xc48800  ; <__strrchr_chk>
0044d384  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d388  b        #0x44d5d0
0044d38c  adrp     x3, #0x151000
0044d390  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d394  ldr      x8, [x23, #0x318]
0044d398  ldrb     w9, [x8, #0x220]
0044d39c  ldr      x10, [x8, #0x230]
0044d3a0  add      x8, x8, #0x221
0044d3a4  tst      w9, #1
0044d3a8  csel     x5, x8, x10, eq
0044d3ac  adrp     x1, #0x177000
0044d3b0  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044d3b4  add      x2, sp, #0x50
0044d3b8  mov      w0, #2
0044d3bc  mov      w4, #0x60c
0044d3c0  blr      x22
0044d3c4  ldr      x8, [x23, #0x318]
0044d3c8  ldr      x0, [x23, #0x178]
0044d3cc  add      x1, x8, #0x1b0
0044d3d0  bl       #0x42fb10
0044d3d4  cbz      w0, #0x44d5f0
0044d3d8  mov      w8, #0x6524
0044d3dc  movk     w8, #0x11, lsl #16
0044d3e0  str      w8, [x23, #0x3fc]
0044d3e4  adrp     x0, #0x151000
0044d3e8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d3ec  mov      w1, #0x2f
0044d3f0  mov      w2, #0x4a
0044d3f4  bl       #0xc48800  ; <__strrchr_chk>
0044d3f8  cbz      x0, #0x44d6d0
0044d3fc  adrp     x0, #0x151000
0044d400  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d404  mov      w1, #0x2f
0044d408  mov      w2, #0x4a
0044d40c  bl       #0xc48800  ; <__strrchr_chk>
0044d410  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d414  b        #0x44d6d8
0044d418  adrp     x3, #0x151000
0044d41c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d420  adrp     x1, #0x177000
0044d424  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044d428  add      x2, sp, #0x50
0044d42c  mov      w0, #2
0044d430  mov      w4, #0x61a
0044d434  blr      x22
0044d438  adrp     x9, #0x136000
0044d43c  add      x9, x9, #0xc36  ; "human_segmentation_768"
0044d440  mov      w8, #0x2c
0044d444  ldr      x0, [x23, #0x98]
0044d448  strb     wzr, [sp, #0x2f]
0044d44c  ldr      q0, [x9]
0044d450  ldur     x9, [x9, #0xe]
0044d454  strb     w8, [sp, #0x18]
0044d458  stur     q0, [sp, #0x19]
0044d45c  stur     x9, [sp, #0x27]
0044d460  add      x1, sp, #0x18
0044d464  bl       #0x41df68
0044d468  mov      w24, w0
0044d46c  ldrb     w8, [sp, #0x18]
0044d470  tbz      w8, #0, #0x44d47c
0044d474  ldr      x0, [sp, #0x28]
0044d478  bl       #0xc48850  ; <_ZdlPv>
0044d47c  cbz      w24, #0x44d628
0044d480  adrp     x0, #0x151000
0044d484  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d488  mov      w1, #0x2f
0044d48c  mov      w2, #0x4a
0044d490  bl       #0xc48800  ; <__strrchr_chk>
0044d494  cbz      x0, #0x44d758
0044d498  adrp     x0, #0x151000
0044d49c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d4a0  mov      w1, #0x2f
0044d4a4  mov      w2, #0x4a
0044d4a8  bl       #0xc48800  ; <__strrchr_chk>
0044d4ac  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d4b0  b        #0x44d760
0044d4b4  adrp     x3, #0x151000
0044d4b8  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d4bc  ldr      x8, [x23, #0x318]
0044d4c0  ldrb     w9, [x8, #0x70]
0044d4c4  ldr      x10, [x8, #0x80]
0044d4c8  add      x8, x8, #0x71
0044d4cc  tst      w9, #1
0044d4d0  csel     x5, x8, x10, eq
0044d4d4  adrp     x1, #0x177000
0044d4d8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044d4dc  add      x2, sp, #0x50
0044d4e0  mov      w0, #2
0044d4e4  mov      w4, #0x5f1
0044d4e8  blr      x22
0044d4ec  ldr      x0, [x23, #0xd8]
0044d4f0  ldr      x1, [x23, #0x318]
0044d4f4  bl       #0x42fb10
0044d4f8  cbz      w0, #0x44d660
0044d4fc  mov      w8, #0x6524
0044d500  movk     w8, #0x11, lsl #16
0044d504  str      w8, [x23, #0x3f8]
0044d508  adrp     x0, #0x151000
0044d50c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d510  mov      w1, #0x2f
0044d514  mov      w2, #0x4a
0044d518  bl       #0xc48800  ; <__strrchr_chk>
0044d51c  cbz      x0, #0x44d7e0
0044d520  adrp     x0, #0x151000
0044d524  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d528  mov      w1, #0x2f
0044d52c  mov      w2, #0x4a
0044d530  bl       #0xc48800  ; <__strrchr_chk>
0044d534  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d538  b        #0x44d7e8
0044d53c  adrp     x3, #0x151000
0044d540  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d544  ldr      x8, [x23, #0x318]
0044d548  ldrb     w9, [x8, #0x148]
0044d54c  ldr      x10, [x8, #0x158]
0044d550  add      x8, x8, #0x149
0044d554  tst      w9, #1
0044d558  csel     x5, x8, x10, eq
0044d55c  adrp     x1, #0x177000
0044d560  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044d564  add      x2, sp, #0x50
0044d568  mov      w0, #2
0044d56c  mov      w4, #0x5fe
0044d570  blr      x22
0044d574  ldr      x8, [x23, #0x318]
0044d578  ldr      x0, [x23, #0xd8]
0044d57c  add      x1, x8, #0xd8
0044d580  bl       #0x42fb10
0044d584  cbz      w0, #0x44d698
0044d588  mov      w8, #0x6524
0044d58c  movk     w8, #0x11, lsl #16
0044d590  str      w8, [x23, #0x3f8]
0044d594  adrp     x0, #0x151000
0044d598  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d59c  mov      w1, #0x2f
0044d5a0  mov      w2, #0x4a
0044d5a4  bl       #0xc48800  ; <__strrchr_chk>
0044d5a8  cbz      x0, #0x44d868
0044d5ac  adrp     x0, #0x151000
0044d5b0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d5b4  mov      w1, #0x2f
0044d5b8  mov      w2, #0x4a
0044d5bc  bl       #0xc48800  ; <__strrchr_chk>
0044d5c0  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d5c4  b        #0x44d870
0044d5c8  adrp     x3, #0x151000
0044d5cc  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d5d0  adrp     x1, #0x177000
0044d5d4  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044d5d8  add      x2, sp, #0x50
0044d5dc  mov      w0, #2
0044d5e0  mov      w4, #0x626
0044d5e4  mov      w5, w19
0044d5e8  blr      x22
0044d5ec  b        #0x44dd3c
0044d5f0  str      wzr, [x23, #0x3fc]
0044d5f4  adrp     x0, #0x151000
0044d5f8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d5fc  mov      w1, #0x2f
0044d600  mov      w2, #0x4a
0044d604  bl       #0xc48800  ; <__strrchr_chk>
0044d608  cbz      x0, #0x44d98c
0044d60c  adrp     x0, #0x151000
0044d610  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d614  mov      w1, #0x2f
0044d618  mov      w2, #0x4a
0044d61c  bl       #0xc48800  ; <__strrchr_chk>
0044d620  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d624  b        #0x44d994
0044d628  str      wzr, [x23, #0x400]
0044d62c  adrp     x0, #0x151000
0044d630  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d634  mov      w1, #0x2f
0044d638  mov      w2, #0x4a
0044d63c  bl       #0xc48800  ; <__strrchr_chk>
0044d640  cbz      x0, #0x44da3c
0044d644  adrp     x0, #0x151000
0044d648  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d64c  mov      w1, #0x2f
0044d650  mov      w2, #0x4a
0044d654  bl       #0xc48800  ; <__strrchr_chk>
0044d658  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d65c  b        #0x44da44
0044d660  str      wzr, [x23, #0x3f8]
0044d664  adrp     x0, #0x151000
0044d668  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d66c  mov      w1, #0x2f
0044d670  mov      w2, #0x4a
0044d674  bl       #0xc48800  ; <__strrchr_chk>
0044d678  cbz      x0, #0x44daec
0044d67c  adrp     x0, #0x151000
0044d680  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d684  mov      w1, #0x2f
0044d688  mov      w2, #0x4a
0044d68c  bl       #0xc48800  ; <__strrchr_chk>
0044d690  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d694  b        #0x44daf4
0044d698  str      wzr, [x23, #0x3f8]
0044d69c  adrp     x0, #0x151000
0044d6a0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d6a4  mov      w1, #0x2f
0044d6a8  mov      w2, #0x4a
0044d6ac  bl       #0xc48800  ; <__strrchr_chk>
0044d6b0  cbz      x0, #0x44dba0
0044d6b4  adrp     x0, #0x151000
0044d6b8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d6bc  mov      w1, #0x2f
0044d6c0  mov      w2, #0x4a
0044d6c4  bl       #0xc48800  ; <__strrchr_chk>
0044d6c8  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d6cc  b        #0x44dba8
0044d6d0  adrp     x3, #0x151000
0044d6d4  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d6d8  adrp     x22, #0x167000
0044d6dc  add      x22, x22, #0x972  ; "[%s:%d] colorfix/init failed.
"
0044d6e0  adrp     x0, #0x177000
0044d6e4  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d6e8  mov      w1, #2
0044d6ec  mov      x2, x22
0044d6f0  mov      w4, #0x612
0044d6f4  bl       #0x484908
0044d6f8  ldr      q0, [x22]
0044d6fc  ldur     q1, [x22, #0xf]
0044d700  str      q0, [sp, #0x50]
0044d704  stur     q1, [sp, #0x5f]
0044d708  mov      x0, x22
0044d70c  mov      w1, #0x1f
0044d710  bl       #0xc48820  ; <__strlen_chk>
0044d714  add      x8, sp, #0x50
0044d718  ldr      x22, [x25]
0044d71c  add      x8, x0, x8
0044d720  sturb    wzr, [x8, #-1]
0044d724  adrp     x0, #0x151000
0044d728  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d72c  mov      w1, #0x2f
0044d730  mov      w2, #0x4a
0044d734  bl       #0xc48800  ; <__strrchr_chk>
0044d738  cbz      x0, #0x44d8f0
0044d73c  adrp     x0, #0x151000
0044d740  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d744  mov      w1, #0x2f
0044d748  mov      w2, #0x4a
0044d74c  bl       #0xc48800  ; <__strrchr_chk>
0044d750  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d754  b        #0x44d8f8
0044d758  adrp     x3, #0x151000
0044d75c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d760  adrp     x22, #0x13c000
0044d764  add      x22, x22, #0x195  ; "[%s:%d] human_segmentation_768/init failed.
"
0044d768  adrp     x0, #0x177000
0044d76c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d770  mov      w1, #2
0044d774  mov      x2, x22
0044d778  mov      w4, #0x61d
0044d77c  bl       #0x484908
0044d780  ldp      q0, q1, [x22]
0044d784  ldur     q2, [x22, #0x1d]
0044d788  stp      q0, q1, [sp, #0x50]
0044d78c  stur     q2, [sp, #0x6d]
0044d790  mov      x0, x22
0044d794  mov      w1, #0x2d
0044d798  bl       #0xc48820  ; <__strlen_chk>
0044d79c  add      x8, sp, #0x50
0044d7a0  ldr      x22, [x25]
0044d7a4  add      x8, x0, x8
0044d7a8  sturb    wzr, [x8, #-1]
0044d7ac  adrp     x0, #0x151000
0044d7b0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d7b4  mov      w1, #0x2f
0044d7b8  mov      w2, #0x4a
0044d7bc  bl       #0xc48800  ; <__strrchr_chk>
0044d7c0  cbz      x0, #0x44d914
0044d7c4  adrp     x0, #0x151000
0044d7c8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d7cc  mov      w1, #0x2f
0044d7d0  mov      w2, #0x4a
0044d7d4  bl       #0xc48800  ; <__strrchr_chk>
0044d7d8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d7dc  b        #0x44d91c
0044d7e0  adrp     x3, #0x151000
0044d7e4  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d7e8  adrp     x22, #0x128000
0044d7ec  add      x22, x22, #0xf6e  ; "[%s:%d] styletrans_low/init failed.
"
0044d7f0  adrp     x0, #0x177000
0044d7f4  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d7f8  mov      w1, #2
0044d7fc  mov      x2, x22
0044d800  mov      w4, #0x5f6
0044d804  bl       #0x484908
0044d808  ldp      q0, q1, [x22]
0044d80c  ldur     x8, [x22, #0x1d]
0044d810  stp      q0, q1, [sp, #0x50]
0044d814  stur     x8, [sp, #0x6d]
0044d818  mov      x0, x22
0044d81c  mov      w1, #0x25
0044d820  bl       #0xc48820  ; <__strlen_chk>
0044d824  add      x8, sp, #0x50
0044d828  ldr      x22, [x25]
0044d82c  add      x8, x0, x8
0044d830  sturb    wzr, [x8, #-1]
0044d834  adrp     x0, #0x151000
0044d838  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d83c  mov      w1, #0x2f
0044d840  mov      w2, #0x4a
0044d844  bl       #0xc48800  ; <__strrchr_chk>
0044d848  cbz      x0, #0x44d944
0044d84c  adrp     x0, #0x151000
0044d850  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d854  mov      w1, #0x2f
0044d858  mov      w2, #0x4a
0044d85c  bl       #0xc48800  ; <__strrchr_chk>
0044d860  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d864  b        #0x44d94c
0044d868  adrp     x3, #0x151000
0044d86c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d870  adrp     x22, #0x13c000
0044d874  add      x22, x22, #0x16f  ; "[%s:%d] styletrans_high/init failed.
"
0044d878  adrp     x0, #0x177000
0044d87c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d880  mov      w1, #2
0044d884  mov      x2, x22
0044d888  mov      w4, #0x604
0044d88c  bl       #0x484908
0044d890  ldp      q0, q1, [x22]
0044d894  ldur     x8, [x22, #0x1e]
0044d898  stp      q0, q1, [sp, #0x50]
0044d89c  stur     x8, [sp, #0x6e]
0044d8a0  mov      x0, x22
0044d8a4  mov      w1, #0x26
0044d8a8  bl       #0xc48820  ; <__strlen_chk>
0044d8ac  add      x8, sp, #0x50
0044d8b0  ldr      x22, [x25]
0044d8b4  add      x8, x0, x8
0044d8b8  sturb    wzr, [x8, #-1]
0044d8bc  adrp     x0, #0x151000
0044d8c0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d8c4  mov      w1, #0x2f
0044d8c8  mov      w2, #0x4a
0044d8cc  bl       #0xc48800  ; <__strrchr_chk>
0044d8d0  cbz      x0, #0x44d968
0044d8d4  adrp     x0, #0x151000
0044d8d8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d8dc  mov      w1, #0x2f
0044d8e0  mov      w2, #0x4a
0044d8e4  bl       #0xc48800  ; <__strrchr_chk>
0044d8e8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044d8ec  b        #0x44d970
0044d8f0  adrp     x3, #0x151000
0044d8f4  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d8f8  adrp     x1, #0x177000
0044d8fc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044d900  add      x2, sp, #0x50
0044d904  mov      w0, #2
0044d908  mov      w4, #0x612
0044d90c  blr      x22
0044d910  b        #0x44dd3c
0044d914  adrp     x3, #0x151000
0044d918  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d91c  adrp     x1, #0x177000
0044d920  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044d924  add      x2, sp, #0x50
0044d928  mov      w0, #2
0044d92c  mov      w4, #0x61d
0044d930  blr      x22
0044d934  mov      w8, #0x6524
0044d938  movk     w8, #0x11, lsl #16
0044d93c  str      w8, [x23, #0x400]
0044d940  b        #0x44dd3c
0044d944  adrp     x3, #0x151000
0044d948  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d94c  adrp     x1, #0x177000
0044d950  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044d954  add      x2, sp, #0x50
0044d958  mov      w0, #2
0044d95c  mov      w4, #0x5f6
0044d960  blr      x22
0044d964  b        #0x44dd3c
0044d968  adrp     x3, #0x151000
0044d96c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d970  adrp     x1, #0x177000
0044d974  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044d978  add      x2, sp, #0x50
0044d97c  mov      w0, #2
0044d980  mov      w4, #0x604
0044d984  blr      x22
0044d988  b        #0x44dd3c
0044d98c  adrp     x23, #0x151000
0044d990  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044d994  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044d998  ldr      x8, [sp, #8]
0044d99c  adrp     x9, #0x189000
0044d9a0  sub      x8, x0, x8
0044d9a4  ldr      d8, [x9, #0xc98]  ; =0x189c98 f64=1e-06
0044d9a8  scvtf    d0, x8
0044d9ac  fmul     d0, d0, d8
0044d9b0  adrp     x24, #0x17c000
0044d9b4  add      x24, x24, #0xafc  ; "[%s:%d] duration of styletrans_colorfix/init is %.3fms.
"
0044d9b8  adrp     x0, #0x177000
0044d9bc  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044d9c0  mov      w1, #2
0044d9c4  mov      x2, x24
0044d9c8  mov      x3, x23
0044d9cc  mov      w4, #0x617
0044d9d0  bl       #0x484908
0044d9d4  ldp      q0, q1, [x24]
0044d9d8  ldr      q2, [x24, #0x20]  ; =0x17c020
0044d9dc  stp      q0, q1, [sp, #0x50]
0044d9e0  ldur     q3, [x24, #0x29]
0044d9e4  str      q2, [sp, #0x70]
0044d9e8  stur     q3, [sp, #0x79]
0044d9ec  mov      x0, x24
0044d9f0  mov      w1, #0x39
0044d9f4  bl       #0xc48820  ; <__strlen_chk>
0044d9f8  add      x8, sp, #0x50
0044d9fc  ldr      x22, [x25]
0044da00  add      x8, x0, x8
0044da04  sturb    wzr, [x8, #-1]
0044da08  adrp     x0, #0x151000
0044da0c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044da10  mov      w1, #0x2f
0044da14  mov      w2, #0x4a
0044da18  bl       #0xc48800  ; <__strrchr_chk>
0044da1c  cbz      x0, #0x44dc50
0044da20  adrp     x0, #0x151000
0044da24  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044da28  mov      w1, #0x2f
0044da2c  mov      w2, #0x4a
0044da30  bl       #0xc48800  ; <__strrchr_chk>
0044da34  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044da38  b        #0x44dc58
0044da3c  adrp     x23, #0x151000
0044da40  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044da44  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044da48  ldr      x8, [sp, #8]
0044da4c  adrp     x9, #0x189000
0044da50  sub      x8, x0, x8
0044da54  ldr      d8, [x9, #0xc98]  ; =0x189c98 f64=1e-06
0044da58  scvtf    d0, x8
0044da5c  fmul     d0, d0, d8
0044da60  adrp     x24, #0x167000
0044da64  add      x24, x24, #0x991  ; "[%s:%d] duration of human_segmentation_768/init is %.3fms.
"
0044da68  adrp     x0, #0x177000
0044da6c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044da70  mov      w1, #2
0044da74  mov      x2, x24
0044da78  mov      x3, x23
0044da7c  mov      w4, #0x623
0044da80  bl       #0x484908
0044da84  ldp      q0, q1, [x24]
0044da88  ldr      q2, [x24, #0x20]  ; =0x167020
0044da8c  stp      q0, q1, [sp, #0x50]
0044da90  ldur     q3, [x24, #0x2c]
0044da94  str      q2, [sp, #0x70]
0044da98  stur     q3, [sp, #0x7c]
0044da9c  mov      x0, x24
0044daa0  mov      w1, #0x3c
0044daa4  bl       #0xc48820  ; <__strlen_chk>
0044daa8  add      x8, sp, #0x50
0044daac  ldr      x22, [x25]
0044dab0  add      x8, x0, x8
0044dab4  sturb    wzr, [x8, #-1]
0044dab8  adrp     x0, #0x151000
0044dabc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044dac0  mov      w1, #0x2f
0044dac4  mov      w2, #0x4a
0044dac8  bl       #0xc48800  ; <__strrchr_chk>
0044dacc  cbz      x0, #0x44dc8c
0044dad0  adrp     x0, #0x151000
0044dad4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044dad8  mov      w1, #0x2f
0044dadc  mov      w2, #0x4a
0044dae0  bl       #0xc48800  ; <__strrchr_chk>
0044dae4  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044dae8  b        #0x44dc94
0044daec  adrp     x23, #0x151000
0044daf0  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044daf4  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044daf8  ldr      x8, [sp, #8]
0044dafc  adrp     x9, #0x189000
0044db00  sub      x8, x0, x8
0044db04  ldr      d8, [x9, #0xc98]  ; =0x189c98 f64=1e-06
0044db08  scvtf    d0, x8
0044db0c  fmul     d0, d0, d8
0044db10  adrp     x24, #0x15c000
0044db14  add      x24, x24, #0x433  ; "[%s:%d] duration of styletrans_low init is %.3fms.
"
0044db18  adrp     x0, #0x177000
0044db1c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044db20  mov      w1, #2
0044db24  mov      x2, x24
0044db28  mov      x3, x23
0044db2c  mov      w4, #0x5fb
0044db30  bl       #0x484908
0044db34  ldp      q0, q1, [x24]
0044db38  mov      w8, #0x2e73
0044db3c  movk     w8, #0xa, lsl #16
0044db40  str      w8, [sp, #0x80]
0044db44  ldr      q2, [x24, #0x20]  ; =0x15c020
0044db48  stp      q0, q1, [sp, #0x50]
0044db4c  str      q2, [sp, #0x70]
0044db50  mov      x0, x24
0044db54  mov      w1, #0x34
0044db58  bl       #0xc48820  ; <__strlen_chk>
0044db5c  add      x8, sp, #0x50
0044db60  ldr      x22, [x25]
0044db64  add      x8, x0, x8
0044db68  sturb    wzr, [x8, #-1]
0044db6c  adrp     x0, #0x151000
0044db70  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044db74  mov      w1, #0x2f
0044db78  mov      w2, #0x4a
0044db7c  bl       #0xc48800  ; <__strrchr_chk>
0044db80  cbz      x0, #0x44dcc8
0044db84  adrp     x0, #0x151000
0044db88  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044db8c  mov      w1, #0x2f
0044db90  mov      w2, #0x4a
0044db94  bl       #0xc48800  ; <__strrchr_chk>
0044db98  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044db9c  b        #0x44dcd0
0044dba0  adrp     x23, #0x151000
0044dba4  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044dba8  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044dbac  ldr      x8, [sp, #8]
0044dbb0  adrp     x9, #0x189000
0044dbb4  sub      x8, x0, x8
0044dbb8  ldr      d8, [x9, #0xc98]  ; =0x189c98 f64=1e-06
0044dbbc  scvtf    d0, x8
0044dbc0  fmul     d0, d0, d8
0044dbc4  adrp     x24, #0x15c000
0044dbc8  add      x24, x24, #0x467  ; "[%s:%d] duration of styletrans_high/init is %.3fms.
"
0044dbcc  adrp     x0, #0x177000
0044dbd0  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044dbd4  mov      w1, #2
0044dbd8  mov      x2, x24
0044dbdc  mov      x3, x23
0044dbe0  mov      w4, #0x609
0044dbe4  bl       #0x484908
0044dbe8  ldp      q0, q1, [x24]
0044dbec  ldr      q2, [x24, #0x20]  ; =0x15c020
0044dbf0  stp      q0, q1, [sp, #0x50]
0044dbf4  ldur     x8, [x24, #0x2d]
0044dbf8  str      q2, [sp, #0x70]
0044dbfc  stur     x8, [sp, #0x7d]
0044dc00  mov      x0, x24
0044dc04  mov      w1, #0x35
0044dc08  bl       #0xc48820  ; <__strlen_chk>
0044dc0c  add      x8, sp, #0x50
0044dc10  ldr      x22, [x25]
0044dc14  add      x8, x0, x8
0044dc18  sturb    wzr, [x8, #-1]
0044dc1c  adrp     x0, #0x151000
0044dc20  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044dc24  mov      w1, #0x2f
0044dc28  mov      w2, #0x4a
0044dc2c  bl       #0xc48800  ; <__strrchr_chk>
0044dc30  cbz      x0, #0x44dd04
0044dc34  adrp     x0, #0x151000
0044dc38  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044dc3c  mov      w1, #0x2f
0044dc40  mov      w2, #0x4a
0044dc44  bl       #0xc48800  ; <__strrchr_chk>
0044dc48  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044dc4c  b        #0x44dd0c
0044dc50  adrp     x23, #0x151000
0044dc54  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044dc58  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044dc5c  ldr      x8, [sp, #8]
0044dc60  sub      x8, x0, x8
0044dc64  scvtf    d0, x8
0044dc68  fmul     d0, d0, d8
0044dc6c  adrp     x1, #0x177000
0044dc70  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044dc74  add      x2, sp, #0x50
0044dc78  mov      w0, #2
0044dc7c  mov      x3, x23
0044dc80  mov      w4, #0x617
0044dc84  blr      x22
0044dc88  b        #0x44dd3c
0044dc8c  adrp     x23, #0x151000
0044dc90  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044dc94  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044dc98  ldr      x8, [sp, #8]
0044dc9c  sub      x8, x0, x8
0044dca0  scvtf    d0, x8
0044dca4  fmul     d0, d0, d8
0044dca8  adrp     x1, #0x177000
0044dcac  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044dcb0  add      x2, sp, #0x50
0044dcb4  mov      w0, #2
0044dcb8  mov      x3, x23
0044dcbc  mov      w4, #0x623
0044dcc0  blr      x22
0044dcc4  b        #0x44dd3c
0044dcc8  adrp     x23, #0x151000
0044dccc  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044dcd0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044dcd4  ldr      x8, [sp, #8]
0044dcd8  sub      x8, x0, x8
0044dcdc  scvtf    d0, x8
0044dce0  fmul     d0, d0, d8
0044dce4  adrp     x1, #0x177000
0044dce8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044dcec  add      x2, sp, #0x50
0044dcf0  mov      w0, #2
0044dcf4  mov      x3, x23
0044dcf8  mov      w4, #0x5fb
0044dcfc  blr      x22
0044dd00  b        #0x44dd3c
0044dd04  adrp     x23, #0x151000
0044dd08  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044dd0c  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044dd10  ldr      x8, [sp, #8]
0044dd14  sub      x8, x0, x8
0044dd18  scvtf    d0, x8
0044dd1c  fmul     d0, d0, d8
0044dd20  adrp     x1, #0x177000
0044dd24  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044dd28  add      x2, sp, #0x50
0044dd2c  mov      w0, #2
0044dd30  mov      x3, x23
0044dd34  mov      w4, #0x609
0044dd38  blr      x22
0044dd3c  ldr      w8, [x21, #0x20]
0044dd40  cmp      w8, #1
0044dd44  b.hi     #0x44dd78
0044dd48  ldr      x1, [x21, #0x48]
0044dd4c  cbz      x1, #0x44dd78
0044dd50  mov      w8, #0x14f
0044dd54  adrp     x9, #0x128000
0044dd58  add      x9, x9, #0xe52  ; "deallocate"
0044dd5c  adrp     x10, #0x11f000
0044dd60  add      x10, x10, #0x79b  ; "/mnt/sdb/work/P1/dev/styletrans_dev/private/mape/core/buffer.h"
0044dd64  str      w8, [sp, #0x50]
0044dd68  stp      x9, x10, [sp, #0x58]
0044dd6c  add      x0, sp, #0x50
0044dd70  bl       #0x4857f4
0044dd74  str      xzr, [x21, #0x48]
0044dd78  ldr      w8, [x20, #0x20]
0044dd7c  cmp      w8, #1
0044dd80  b.hi     #0x44ddb4
0044dd84  ldr      x1, [x20, #0x48]
0044dd88  cbz      x1, #0x44ddb4
0044dd8c  mov      w8, #0x14f
0044dd90  adrp     x9, #0x128000
0044dd94  add      x9, x9, #0xe52  ; "deallocate"
0044dd98  adrp     x10, #0x11f000
0044dd9c  add      x10, x10, #0x79b  ; "/mnt/sdb/work/P1/dev/styletrans_dev/private/mape/core/buffer.h"
0044dda0  str      w8, [sp, #0x50]
0044dda4  stp      x9, x10, [sp, #0x58]
0044dda8  add      x0, sp, #0x50
0044ddac  bl       #0x4857f4
0044ddb0  str      xzr, [x20, #0x48]
0044ddb4  adrp     x0, #0x151000
0044ddb8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ddbc  mov      w1, #0x2f
0044ddc0  mov      w2, #0x4a
0044ddc4  bl       #0xc48800  ; <__strrchr_chk>
0044ddc8  cbz      x0, #0x44dde8
0044ddcc  adrp     x0, #0x151000
0044ddd0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ddd4  mov      w1, #0x2f
0044ddd8  mov      w2, #0x4a
0044dddc  bl       #0xc48800  ; <__strrchr_chk>
0044dde0  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044dde4  b        #0x44ddf0
0044dde8  adrp     x3, #0x151000
0044ddec  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ddf0  adrp     x21, #0x12f000
0044ddf4  add      x21, x21, #0x425  ; "[%s:%d] init bg OK %d
"
0044ddf8  adrp     x0, #0x177000
0044ddfc  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044de00  mov      w1, #2
0044de04  mov      x2, x21
0044de08  mov      w4, #0x62c
0044de0c  mov      w5, w19
0044de10  bl       #0x484908
0044de14  ldr      q0, [x21]
0044de18  ldur     x8, [x21, #0xf]
0044de1c  str      q0, [sp, #0x50]
0044de20  stur     x8, [sp, #0x5f]
0044de24  mov      x0, x21
0044de28  mov      w1, #0x17
0044de2c  bl       #0xc48820  ; <__strlen_chk>
0044de30  add      x8, sp, #0x50
0044de34  ldr      x21, [x25]
0044de38  add      x8, x0, x8
0044de3c  sturb    wzr, [x8, #-1]
0044de40  adrp     x0, #0x151000
0044de44  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044de48  mov      w1, #0x2f
0044de4c  mov      w2, #0x4a
0044de50  bl       #0xc48800  ; <__strrchr_chk>
0044de54  cbz      x0, #0x44de74
0044de58  adrp     x0, #0x151000
0044de5c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044de60  mov      w1, #0x2f
0044de64  mov      w2, #0x4a
0044de68  bl       #0xc48800  ; <__strrchr_chk>
0044de6c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044de70  b        #0x44de7c
0044de74  adrp     x3, #0x151000
0044de78  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044de7c  adrp     x1, #0x177000
0044de80  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044de84  add      x2, sp, #0x50
0044de88  mov      w0, #2
0044de8c  mov      w4, #0x62c
0044de90  mov      w5, w19
0044de94  blr      x21
0044de98  mov      x8, #-1
0044de9c  ldaddal  x8, x8, [x28]
0044dea0  cbnz     x8, #0x44debc
0044dea4  ldr      x8, [x20]
0044dea8  mov      x0, x20
0044deac  ldr      x8, [x8, #0x10]
0044deb0  blr      x8
0044deb4  mov      x0, x20
0044deb8  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
0044debc  ldr      x19, [sp, #0x48]
0044dec0  ldr      x20, [sp, #0x10]
0044dec4  cbz      x19, #0x44def0
0044dec8  add      x8, x19, #8
0044decc  mov      x9, #-1
0044ded0  ldaddal  x9, x8, [x8]
0044ded4  cbnz     x8, #0x44def0
0044ded8  ldr      x8, [x19]
0044dedc  mov      x0, x19
0044dee0  ldr      x8, [x8, #0x10]
0044dee4  blr      x8
0044dee8  mov      x0, x19
0044deec  bl       #0xc48860  ; <_ZNSt6__ndk119__shared_weak_count14__release_weakEv>
0044def0  ldr      x8, [x20, #0x28]
0044def4  ldur     x9, [x29, #-0x20]
0044def8  cmp      x8, x9
0044defc  b.ne     #0x44e040
0044df00  mov      w0, wzr
0044df04  ldp      x20, x19, [sp, #0x1d0]
0044df08  ldp      x22, x21, [sp, #0x1c0]
0044df0c  ldp      x24, x23, [sp, #0x1b0]
0044df10  ldp      x26, x25, [sp, #0x1a0]
0044df14  ldp      x28, x27, [sp, #0x190]
0044df18  ldp      x29, x30, [sp, #0x180]
0044df1c  ldr      d8, [sp, #0x170]
0044df20  add      sp, sp, #0x1e0
0044df24  ret      
0044df28  ldrb     w8, [sp, #0x18]
0044df2c  mov      x19, x0
0044df30  tbz      w8, #0, #0x44e014
0044df34  ldr      x0, [sp, #0x28]
0044df38  bl       #0xc48850  ; <_ZdlPv>
0044df3c  b        #0x44e014
0044df40  b        #0x44e010
0044df44  b        #0x44e010
0044df48  b        #0x44e010
0044df4c  b        #0x44e010
0044df50  b        #0x44e010
0044df54  b        #0x44e010
0044df58  b        #0x44e010
0044df5c  b        #0x44e010
0044df60  b        #0x44e010
0044df64  b        #0x44e010
0044df68  b        #0x44e010
0044df6c  b        #0x44e010
0044df70  b        #0x44e010
0044df74  ldr      x8, [x27]
0044df78  mov      x19, x0
0044df7c  adrp     x9, #0xc51000
0044df80  add      x9, x9, #0x2c8  ; =0xc512c8
0044df84  str      x9, [x26]
0044df88  cbz      x8, #0x44df98
0044df8c  mov      x0, x8
0044df90  str      x8, [x20, #0x30]
0044df94  bl       #0xc48850  ; <_ZdlPv>
0044df98  mov      x0, x20
0044df9c  bl       #0xc48950  ; <_ZNSt6__ndk119__shared_weak_countD2Ev>
0044dfa0  mov      x0, x20
0044dfa4  bl       #0xc48850  ; <_ZdlPv>
0044dfa8  b        #0x44dfb0
0044dfac  mov      x19, x0
0044dfb0  mov      x0, x25
0044dfb4  bl       #0xc48850  ; <_ZdlPv>
0044dfb8  b        #0x44e01c
0044dfbc  mov      x19, x0
0044dfc0  b        #0x44e01c
0044dfc4  ldr      x8, [x25]
0044dfc8  mov      x19, x0
0044dfcc  adrp     x9, #0xc51000
0044dfd0  add      x9, x9, #0x2c8  ; =0xc512c8
0044dfd4  str      x9, [x24]
0044dfd8  cbz      x8, #0x44dfe8
0044dfdc  mov      x0, x8
0044dfe0  str      x8, [x21, #0x30]  ; =0x12f030
0044dfe4  bl       #0xc48850  ; <_ZdlPv>
0044dfe8  mov      x0, x21
0044dfec  bl       #0xc48950  ; <_ZNSt6__ndk119__shared_weak_countD2Ev>
0044dff0  mov      x0, x21
0044dff4  bl       #0xc48850  ; <_ZdlPv>
0044dff8  b        #0x44e000
0044dffc  mov      x19, x0
0044e000  mov      x0, x20
0044e004  bl       #0xc48850  ; <_ZdlPv>
0044e008  b        #0x44e024
0044e00c  b        #0x44e010
0044e010  mov      x19, x0
0044e014  add      x0, sp, #0x30
0044e018  bl       #0x43f164
0044e01c  add      x0, sp, #0x40
0044e020  bl       #0x43f164
0044e024  ldr      x8, [sp, #0x10]
0044e028  ldr      x8, [x8, #0x28]
0044e02c  ldur     x9, [x29, #-0x20]
0044e030  cmp      x8, x9
0044e034  b.ne     #0x44e040
0044e038  mov      x0, x19
0044e03c  bl       #0xc44424
0044e040  bl       #0xc48830  ; <__stack_chk_fail>
