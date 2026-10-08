; function 0x449518 size 0x3894 
00449518  str      d8, [sp, #-0x70]!
0044951c  stp      x29, x30, [sp, #0x10]
00449520  stp      x28, x27, [sp, #0x20]
00449524  stp      x26, x25, [sp, #0x30]
00449528  stp      x24, x23, [sp, #0x40]
0044952c  stp      x22, x21, [sp, #0x50]
00449530  stp      x20, x19, [sp, #0x60]
00449534  add      x29, sp, #0x10
00449538  sub      sp, sp, #0x4a0
0044953c  mrs      x8, tpidr_el0
00449540  mov      w21, w7
00449544  str      x8, [sp, #0x20]
00449548  mov      x20, x6
0044954c  ldr      x8, [x8, #0x28]
00449550  mov      x22, x5
00449554  mov      w23, w4
00449558  mov      w25, w3
0044955c  mov      x24, x2
00449560  mov      x26, x1
00449564  mov      x19, x0
00449568  stur     x8, [x29, #-0x28]
0044956c  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00449570  adrp     x27, #0x151000
00449574  add      x27, x27, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449578  str      x0, [x19, #0x418]
0044957c  mov      x0, x27
00449580  mov      w1, #0x2f
00449584  mov      w2, #0x4a
00449588  bl       #0xc48800  ; <__strrchr_chk>
0044958c  str      x24, [sp, #0x10]
00449590  mov      x24, x19
00449594  str      w21, [sp, #0xc]
00449598  str      w23, [sp, #0x1c]
0044959c  cbz      x0, #0x4495b8
004495a0  adrp     x0, #0x151000
004495a4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004495a8  mov      w1, #0x2f
004495ac  mov      w2, #0x4a
004495b0  bl       #0xc48800  ; <__strrchr_chk>
004495b4  add      x27, x0, #1  ; "tputArray, double, cv::RNG *)"
004495b8  adrp     x28, #0x111000
004495bc  add      x28, x28, #0x336  ; "[%s:%d] enter run.
"
004495c0  adrp     x0, #0x177000
004495c4  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
004495c8  mov      w1, #2
004495cc  mov      x2, x28
004495d0  mov      x3, x27
004495d4  mov      w4, #0x477
004495d8  ldr      w19, [x29, #0x80]
004495dc  ldr      w21, [x29, #0x78]
004495e0  ldr      w23, [x29, #0x70]
004495e4  bl       #0x484908
004495e8  adrp     x9, #0xc78000
004495ec  mov      w8, #0x2e6e
004495f0  movk     w8, #0xa, lsl #16
004495f4  adrp     x27, #0x151000
004495f8  add      x27, x27, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004495fc  ldr      q0, [x28]
00449600  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00449604  mov      x0, x27
00449608  str      w8, [sp, #0x340]
0044960c  add      x8, sp, #0x220
00449610  mov      w1, #0x2f
00449614  mov      w2, #0x4a
00449618  ldr      x28, [x9]
0044961c  strb     wzr, [sp, #0x342]
00449620  str      q0, [x8, #0x110]
00449624  bl       #0xc48800  ; <__strrchr_chk>
00449628  cbz      x0, #0x449644
0044962c  adrp     x0, #0x151000
00449630  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449634  mov      w1, #0x2f
00449638  mov      w2, #0x4a
0044963c  bl       #0xc48800  ; <__strrchr_chk>
00449640  add      x27, x0, #1  ; "tputArray, double, cv::RNG *)"
00449644  adrp     x1, #0x177000
00449648  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044964c  add      x2, sp, #0x330
00449650  mov      w0, #2
00449654  mov      x3, x27
00449658  mov      w4, #0x477
0044965c  blr      x28
00449660  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00449664  scvtf    s0, w21
00449668  str      w23, [x24, #0x348]
0044966c  str      x0, [x24, #0x408]
00449670  str      w19, [x24, #0x350]
00449674  str      s0, [x24, #0x34c]
00449678  cbz      x26, #0x449788
0044967c  cbz      x22, #0x449788
00449680  cbz      x20, #0x449788
00449684  ldr      x0, [x24, #0x1d8]
00449688  add      x1, sp, #0x330
0044968c  mov      x28, x24
00449690  str      x26, [sp, #0x330]
00449694  str      w25, [sp, #0x338]
00449698  bl       #0x4525b0
0044969c  cbz      w0, #0x4498ac
004496a0  adrp     x19, #0x151000
004496a4  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004496a8  mov      x0, x19
004496ac  mov      w1, #0x2f
004496b0  mov      w2, #0x4a
004496b4  bl       #0xc48800  ; <__strrchr_chk>
004496b8  adrp     x21, #0xc78000
004496bc  add      x22, sp, #0x330
004496c0  ldr      x21, [x21, #0x2f0]  ; =0xc782f0
004496c4  cbz      x0, #0x4496e0
004496c8  adrp     x0, #0x151000
004496cc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004496d0  mov      w1, #0x2f
004496d4  mov      w2, #0x4a
004496d8  bl       #0xc48800  ; <__strrchr_chk>
004496dc  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
004496e0  adrp     x20, #0x177000
004496e4  add      x20, x20, #0x2a0  ; "[%s:%d] %s.
"
004496e8  adrp     x0, #0x177000
004496ec  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
004496f0  adrp     x5, #0x147000
004496f4  add      x5, x5, #0x4b6  ; "Error::BAD_BUFFER"
004496f8  mov      w1, #1
004496fc  mov      x2, x20
00449700  mov      x3, x19
00449704  mov      w4, #0x484
00449708  bl       #0x484908
0044970c  ldur     x8, [x20, #5]
00449710  mov      w1, #0x2f
00449714  ldr      x9, [x20]
00449718  adrp     x20, #0x151000
0044971c  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449720  mov      w2, #0x4a
00449724  mov      x0, x20
00449728  ldr      x21, [x21]
0044972c  stur     x8, [x22, #5]
00449730  str      x9, [sp, #0x330]
00449734  strb     wzr, [sp, #0x33b]
00449738  bl       #0xc48800  ; <__strrchr_chk>
0044973c  cbz      x0, #0x449758
00449740  adrp     x0, #0x151000
00449744  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449748  mov      w1, #0x2f
0044974c  mov      w2, #0x4a
00449750  bl       #0xc48800  ; <__strrchr_chk>
00449754  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00449758  adrp     x1, #0x177000
0044975c  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00449760  adrp     x5, #0x147000
00449764  add      x5, x5, #0x4b6  ; "Error::BAD_BUFFER"
00449768  add      x2, sp, #0x330
0044976c  mov      w0, #1
00449770  mov      x3, x20
00449774  mov      w4, #0x484
00449778  mov      w19, #0x6523
0044977c  movk     w19, #0x11, lsl #16
00449780  blr      x21
00449784  b        #0x449870
00449788  adrp     x19, #0x151000
0044978c  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449790  mov      x0, x19
00449794  mov      w1, #0x2f
00449798  mov      w2, #0x4a
0044979c  bl       #0xc48800  ; <__strrchr_chk>
004497a0  cbz      x0, #0x4497bc
004497a4  adrp     x0, #0x151000
004497a8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004497ac  mov      w1, #0x2f
004497b0  mov      w2, #0x4a
004497b4  bl       #0xc48800  ; <__strrchr_chk>
004497b8  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
004497bc  adrp     x21, #0xc78000
004497c0  adrp     x20, #0x177000
004497c4  add      x20, x20, #0x2a0  ; "[%s:%d] %s.
"
004497c8  adrp     x0, #0x177000
004497cc  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
004497d0  adrp     x5, #0x14a000
004497d4  add      x5, x5, #0x2ba  ; "Error::NULL_PTR"
004497d8  mov      w1, #1
004497dc  mov      x2, x20
004497e0  mov      x3, x19
004497e4  mov      w4, #0x481
004497e8  ldr      x21, [x21, #0x2f0]  ; =0xc782f0
004497ec  add      x22, sp, #0x330
004497f0  bl       #0x484908
004497f4  adrp     x19, #0x151000
004497f8  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004497fc  ldur     x8, [x20, #5]
00449800  mov      x0, x19
00449804  ldr      x9, [x20]
00449808  mov      w1, #0x2f
0044980c  mov      w2, #0x4a
00449810  ldr      x20, [x21]
00449814  stur     x8, [x22, #5]
00449818  str      x9, [sp, #0x330]
0044981c  strb     wzr, [sp, #0x33b]
00449820  bl       #0xc48800  ; <__strrchr_chk>
00449824  cbz      x0, #0x449840
00449828  adrp     x0, #0x151000
0044982c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449830  mov      w1, #0x2f
00449834  mov      w2, #0x4a
00449838  bl       #0xc48800  ; <__strrchr_chk>
0044983c  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
00449840  adrp     x1, #0x177000
00449844  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00449848  adrp     x5, #0x14a000
0044984c  add      x5, x5, #0x2ba  ; "Error::NULL_PTR"
00449850  add      x2, sp, #0x330
00449854  mov      w0, #1
00449858  mov      x3, x19
0044985c  mov      w4, #0x481
00449860  blr      x20
00449864  mov      w8, #0x6523
00449868  movk     w8, #0x11, lsl #16
0044986c  sub      w19, w8, #1
00449870  ldr      x8, [sp, #0x20]
00449874  ldr      x8, [x8, #0x28]
00449878  ldur     x9, [x29, #-0x28]
0044987c  cmp      x8, x9
00449880  b.ne     #0x44cda8
00449884  mov      w0, w19
00449888  add      sp, sp, #0x4a0
0044988c  ldp      x20, x19, [sp, #0x60]
00449890  ldp      x22, x21, [sp, #0x50]
00449894  ldp      x24, x23, [sp, #0x40]
00449898  ldp      x26, x25, [sp, #0x30]
0044989c  ldp      x28, x27, [sp, #0x20]
004498a0  ldp      x29, x30, [sp, #0x10]
004498a4  ldr      d8, [sp], #0x70
004498a8  ret      
004498ac  ldr      x8, [sp, #0x10]
004498b0  add      x1, sp, #0x330
004498b4  ldr      x0, [x28, #0x1e8]  ; =0x1111e8
004498b8  str      x8, [sp, #0x330]
004498bc  ldr      w8, [sp, #0x1c]
004498c0  str      w8, [sp, #0x338]
004498c4  bl       #0x4525b0
004498c8  adrp     x26, #0xc78000
004498cc  add      x27, sp, #0x330
004498d0  ldr      x26, [x26, #0x2f0]  ; =0xc782f0
004498d4  cbz      w0, #0x4499b4
004498d8  adrp     x19, #0x151000
004498dc  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004498e0  mov      x0, x19
004498e4  mov      w1, #0x2f
004498e8  mov      w2, #0x4a
004498ec  bl       #0xc48800  ; <__strrchr_chk>
004498f0  cbz      x0, #0x44990c
004498f4  adrp     x0, #0x151000
004498f8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004498fc  mov      w1, #0x2f
00449900  mov      w2, #0x4a
00449904  bl       #0xc48800  ; <__strrchr_chk>
00449908  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
0044990c  adrp     x20, #0x177000
00449910  add      x20, x20, #0x2a0  ; "[%s:%d] %s.
"
00449914  adrp     x0, #0x177000
00449918  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044991c  adrp     x5, #0x147000
00449920  add      x5, x5, #0x4b6  ; "Error::BAD_BUFFER"
00449924  mov      w1, #1
00449928  mov      x2, x20
0044992c  mov      x3, x19
00449930  mov      w4, #0x486
00449934  bl       #0x484908
00449938  ldur     x8, [x20, #5]
0044993c  mov      w1, #0x2f
00449940  ldr      x9, [x20]
00449944  adrp     x20, #0x151000
00449948  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044994c  mov      w2, #0x4a
00449950  mov      x0, x20
00449954  ldr      x21, [x26]
00449958  stur     x8, [x27, #5]
0044995c  str      x9, [sp, #0x330]
00449960  strb     wzr, [sp, #0x33b]
00449964  bl       #0xc48800  ; <__strrchr_chk>
00449968  cbz      x0, #0x449984
0044996c  adrp     x0, #0x151000
00449970  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449974  mov      w1, #0x2f
00449978  mov      w2, #0x4a
0044997c  bl       #0xc48800  ; <__strrchr_chk>
00449980  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00449984  adrp     x1, #0x177000
00449988  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044998c  adrp     x5, #0x147000
00449990  add      x5, x5, #0x4b6  ; "Error::BAD_BUFFER"
00449994  add      x2, sp, #0x330
00449998  mov      w0, #1
0044999c  mov      x3, x20
004499a0  mov      w4, #0x486
004499a4  mov      w19, #0x6523
004499a8  movk     w19, #0x11, lsl #16
004499ac  blr      x21
004499b0  b        #0x449870
004499b4  ldr      x0, [x28, #0x218]  ; =0x111218
004499b8  add      x1, sp, #0x330
004499bc  ldr      w8, [sp, #0xc]
004499c0  str      x22, [sp, #0x330]
004499c4  str      w8, [sp, #0x338]
004499c8  bl       #0x4525b0
004499cc  cbz      w0, #0x449aac
004499d0  adrp     x19, #0x151000
004499d4  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004499d8  mov      x0, x19
004499dc  mov      w1, #0x2f
004499e0  mov      w2, #0x4a
004499e4  bl       #0xc48800  ; <__strrchr_chk>
004499e8  cbz      x0, #0x449a04
004499ec  adrp     x0, #0x151000
004499f0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004499f4  mov      w1, #0x2f
004499f8  mov      w2, #0x4a
004499fc  bl       #0xc48800  ; <__strrchr_chk>
00449a00  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
00449a04  adrp     x20, #0x177000
00449a08  add      x20, x20, #0x2a0  ; "[%s:%d] %s.
"
00449a0c  adrp     x0, #0x177000
00449a10  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00449a14  adrp     x5, #0x147000
00449a18  add      x5, x5, #0x4b6  ; "Error::BAD_BUFFER"
00449a1c  mov      w1, #1
00449a20  mov      x2, x20
00449a24  mov      x3, x19
00449a28  mov      w4, #0x488
00449a2c  bl       #0x484908
00449a30  ldur     x8, [x20, #5]
00449a34  mov      w1, #0x2f
00449a38  ldr      x9, [x20]
00449a3c  adrp     x20, #0x151000
00449a40  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449a44  mov      w2, #0x4a
00449a48  mov      x0, x20
00449a4c  ldr      x21, [x26]
00449a50  stur     x8, [x27, #5]
00449a54  str      x9, [sp, #0x330]
00449a58  strb     wzr, [sp, #0x33b]
00449a5c  bl       #0xc48800  ; <__strrchr_chk>
00449a60  cbz      x0, #0x449a7c
00449a64  adrp     x0, #0x151000
00449a68  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449a6c  mov      w1, #0x2f
00449a70  mov      w2, #0x4a
00449a74  bl       #0xc48800  ; <__strrchr_chk>
00449a78  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00449a7c  adrp     x1, #0x177000
00449a80  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00449a84  adrp     x5, #0x147000
00449a88  add      x5, x5, #0x4b6  ; "Error::BAD_BUFFER"
00449a8c  add      x2, sp, #0x330
00449a90  mov      w0, #1
00449a94  mov      x3, x20
00449a98  mov      w4, #0x488
00449a9c  mov      w19, #0x6523
00449aa0  movk     w19, #0x11, lsl #16
00449aa4  blr      x21
00449aa8  b        #0x449870
00449aac  ldr      w8, [x29, #0x60]
00449ab0  add      x1, sp, #0x330
00449ab4  ldr      x0, [x28, #0x228]  ; =0x111228
00449ab8  str      x20, [sp, #0x330]
00449abc  str      w8, [sp, #0x338]
00449ac0  bl       #0x4525b0
00449ac4  cbz      w0, #0x449ba4
00449ac8  adrp     x19, #0x151000
00449acc  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449ad0  mov      x0, x19
00449ad4  mov      w1, #0x2f
00449ad8  mov      w2, #0x4a
00449adc  bl       #0xc48800  ; <__strrchr_chk>
00449ae0  cbz      x0, #0x449afc
00449ae4  adrp     x0, #0x151000
00449ae8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449aec  mov      w1, #0x2f
00449af0  mov      w2, #0x4a
00449af4  bl       #0xc48800  ; <__strrchr_chk>
00449af8  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
00449afc  adrp     x20, #0x177000
00449b00  add      x20, x20, #0x2a0  ; "[%s:%d] %s.
"
00449b04  adrp     x0, #0x177000
00449b08  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00449b0c  adrp     x5, #0x147000
00449b10  add      x5, x5, #0x4b6  ; "Error::BAD_BUFFER"
00449b14  mov      w1, #1
00449b18  mov      x2, x20
00449b1c  mov      x3, x19
00449b20  mov      w4, #0x48a
00449b24  bl       #0x484908
00449b28  ldur     x8, [x20, #5]
00449b2c  mov      w1, #0x2f
00449b30  ldr      x9, [x20]
00449b34  adrp     x20, #0x151000
00449b38  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449b3c  mov      w2, #0x4a
00449b40  mov      x0, x20
00449b44  ldr      x21, [x26]
00449b48  stur     x8, [x27, #5]
00449b4c  str      x9, [sp, #0x330]
00449b50  strb     wzr, [sp, #0x33b]
00449b54  bl       #0xc48800  ; <__strrchr_chk>
00449b58  cbz      x0, #0x449b74
00449b5c  adrp     x0, #0x151000
00449b60  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449b64  mov      w1, #0x2f
00449b68  mov      w2, #0x4a
00449b6c  bl       #0xc48800  ; <__strrchr_chk>
00449b70  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00449b74  adrp     x1, #0x177000
00449b78  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00449b7c  adrp     x5, #0x147000
00449b80  add      x5, x5, #0x4b6  ; "Error::BAD_BUFFER"
00449b84  add      x2, sp, #0x330
00449b88  mov      w0, #1
00449b8c  mov      x3, x20
00449b90  mov      w4, #0x48a
00449b94  mov      w19, #0x6523
00449b98  movk     w19, #0x11, lsl #16
00449b9c  blr      x21
00449ba0  b        #0x449870
00449ba4  ldr      x8, [x28, #0x1d8]  ; =0x1111d8
00449ba8  mov      w25, #0x7274
00449bac  ldr      x0, [x28, #0x218]  ; =0x111218
00449bb0  movk     w25, #0x6575, lsl #16
00449bb4  ldr      x1, [x8, #0x30]
00449bb8  bl       #0x41e648
00449bbc  ldr      x8, [x28, #0x1e8]  ; =0x1111e8
00449bc0  ldr      x0, [x28, #0x228]  ; =0x111228
00449bc4  ldr      x1, [x8, #0x30]
00449bc8  bl       #0x41e648
00449bcc  adrp     x0, #0x118000
00449bd0  add      x0, x0, #0xf0e  ; "persist.vendor.camera.styletrans.bypass.enable"
00449bd4  sub      x1, x29, #0x38
00449bd8  bl       #0xc48ad0  ; <__system_property_get>
00449bdc  ldur     w8, [x29, #-0x38]
00449be0  ldurb    w9, [x29, #-0x34]
00449be4  eor      w8, w8, w25
00449be8  orr      w8, w8, w9
00449bec  cbz      w8, #0x449e40
00449bf0  ldr      w8, [x28, #8]  ; =0x111008
00449bf4  cmp      w8, #1
00449bf8  b.eq     #0x449e40
00449bfc  mov      w8, #3
00449c00  nop      
00449c04  adr      x24, #0x44ce18
00449c08  add      x0, sp, #0x330
00449c0c  sub      x1, x29, #0x60
00449c10  add      x2, sp, #0x250
00449c14  str      w8, [sp, #0x250]
00449c18  add      x8, sp, #0x2d0
00449c1c  str      x24, [sp, #0x330]
00449c20  str      xzr, [sp, #0x338]
00449c24  stur     x28, [x29, #-0x60]
00449c28  bl       #0x44cdac
00449c2c  add      x21, x28, #0x2f8  ; ".png"
00449c30  add      x1, sp, #0x2d0
00449c34  mov      x0, x21
00449c38  bl       #0x44e044
00449c3c  add      x0, sp, #0x2d0
00449c40  bl       #0x44e088
00449c44  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00449c48  ldr      x8, [x28, #0x2f8]  ; =0x1112f8
00449c4c  mov      x20, x0
00449c50  ldr      x8, [x8]
00449c54  cbz      x8, #0x449d1c
00449c58  adrp     x22, #0x151000
00449c5c  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449c60  mov      x0, x22
00449c64  mov      w1, #0x2f
00449c68  mov      w2, #0x4a
00449c6c  bl       #0xc48800  ; <__strrchr_chk>
00449c70  cbz      x0, #0x449c8c
00449c74  adrp     x0, #0x151000
00449c78  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449c7c  mov      w1, #0x2f
00449c80  mov      w2, #0x4a
00449c84  bl       #0xc48800  ; <__strrchr_chk>
00449c88  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
00449c8c  adrp     x23, #0x154000
00449c90  add      x23, x23, #0x415  ; "[%s:%d] m_thread_humanseg join.
"
00449c94  adrp     x0, #0x177000
00449c98  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00449c9c  mov      w1, #2
00449ca0  mov      x2, x23
00449ca4  mov      x3, x22
00449ca8  mov      w4, #0x4b9
00449cac  bl       #0x484908
00449cb0  ldp      q1, q0, [x23]
00449cb4  adrp     x22, #0x151000
00449cb8  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449cbc  mov      x0, x22
00449cc0  mov      w1, #0x2f
00449cc4  mov      w2, #0x4a
00449cc8  strb     wzr, [sp, #0x350]
00449ccc  ldr      x19, [x26]
00449cd0  stp      q1, q0, [x27]
00449cd4  strb     wzr, [sp, #0x34f]
00449cd8  bl       #0xc48800  ; <__strrchr_chk>
00449cdc  cbz      x0, #0x449cf8
00449ce0  adrp     x0, #0x151000
00449ce4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449ce8  mov      w1, #0x2f
00449cec  mov      w2, #0x4a
00449cf0  bl       #0xc48800  ; <__strrchr_chk>
00449cf4  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
00449cf8  adrp     x1, #0x177000
00449cfc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00449d00  add      x2, sp, #0x330
00449d04  mov      w0, #2
00449d08  mov      x3, x22
00449d0c  mov      w4, #0x4b9
00449d10  blr      x19
00449d14  ldr      x0, [x21]
00449d18  bl       #0xc48c10  ; <_ZNSt6__ndk16thread4joinEv>
00449d1c  adrp     x21, #0x151000
00449d20  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449d24  mov      x0, x21
00449d28  mov      w1, #0x2f
00449d2c  mov      w2, #0x4a
00449d30  bl       #0xc48800  ; <__strrchr_chk>
00449d34  cbz      x0, #0x449d50
00449d38  adrp     x0, #0x151000
00449d3c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449d40  mov      w1, #0x2f
00449d44  mov      w2, #0x4a
00449d48  bl       #0xc48800  ; <__strrchr_chk>
00449d4c  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
00449d50  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00449d54  sub      x8, x0, x20
00449d58  adrp     x9, #0x189000
00449d5c  adrp     x22, #0x109000
00449d60  add      x22, x22, #0xab8  ; "[%s:%d] duration of m_thread_humanseg init join is %.3fms.
"
00449d64  adrp     x0, #0x177000
00449d68  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00449d6c  scvtf    d0, x8
00449d70  ldr      d8, [x9, #0xc98]  ; =0x189c98 f64=1e-06
00449d74  mov      w1, #2
00449d78  mov      x2, x22
00449d7c  mov      x3, x21
00449d80  mov      w4, #0x4bc
00449d84  fmul     d0, d0, d8
00449d88  bl       #0x484908
00449d8c  ldp      q1, q2, [x22]
00449d90  adrp     x21, #0x151000
00449d94  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449d98  mov      x0, x21
00449d9c  mov      w1, #0x2f
00449da0  mov      w2, #0x4a
00449da4  ldur     q0, [x22, #0x2c]
00449da8  stp      q1, q2, [x27]
00449dac  ldr      q3, [x22, #0x20]  ; =0x109020
00449db0  ldr      x19, [x26]
00449db4  stur     q0, [x27, #0x2c]
00449db8  str      q3, [x27, #0x20]  ; =0x151020
00449dbc  strb     wzr, [sp, #0x36a]
00449dc0  bl       #0xc48800  ; <__strrchr_chk>
00449dc4  cbz      x0, #0x449de0
00449dc8  adrp     x0, #0x151000
00449dcc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449dd0  mov      w1, #0x2f
00449dd4  mov      w2, #0x4a
00449dd8  bl       #0xc48800  ; <__strrchr_chk>
00449ddc  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
00449de0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
00449de4  sub      x8, x0, x20
00449de8  adrp     x1, #0x177000
00449dec  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00449df0  add      x2, sp, #0x330
00449df4  mov      w0, #2
00449df8  mov      x3, x21
00449dfc  scvtf    d0, x8
00449e00  mov      w4, #0x4bc
00449e04  fmul     d0, d0, d8
00449e08  blr      x19
00449e0c  ldr      w8, [x28, #0x350]  ; =0x111350
00449e10  ldr      w9, [x28, #0x35c]  ; =0x11135c
00449e14  cmp      w8, w9
00449e18  b.ge     #0x44a1a8
00449e1c  ldr      s0, [x28, #0x34c]  ; =0x11134c f32=1.21917e+22
00449e20  ldr      s1, [x28, #0x358]  ; =0x111358 f32=4.96511e+28
00449e24  fcmp     s0, s1
00449e28  b.le     #0x44a1a8
00449e2c  str      x24, [sp, #0x330]
00449e30  str      xzr, [sp, #0x338]
00449e34  stur     x28, [x29, #-0x60]
00449e38  str      wzr, [sp, #0x250]
00449e3c  b        #0x44a1bc
00449e40  adrp     x20, #0x151000
00449e44  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449e48  mov      x0, x20
00449e4c  mov      w1, #0x2f
00449e50  mov      w2, #0x4a
00449e54  bl       #0xc48800  ; <__strrchr_chk>
00449e58  cbz      x0, #0x449e74
00449e5c  adrp     x0, #0x151000
00449e60  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449e64  mov      w1, #0x2f
00449e68  mov      w2, #0x4a
00449e6c  bl       #0xc48800  ; <__strrchr_chk>
00449e70  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00449e74  adrp     x21, #0x167000
00449e78  add      x21, x21, #0x920  ; "[%s:%d] m_thread_styletrans join.
"
00449e7c  adrp     x0, #0x177000
00449e80  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00449e84  mov      w1, #2
00449e88  mov      x2, x21
00449e8c  mov      x3, x20
00449e90  mov      w4, #0x49a
00449e94  bl       #0x484908
00449e98  ldp      q0, q1, [x21]
00449e9c  mov      w8, #0x2e6e
00449ea0  adrp     x20, #0x151000
00449ea4  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449ea8  movk     w8, #0xa, lsl #16
00449eac  mov      x0, x20
00449eb0  mov      w1, #0x2f
00449eb4  mov      w2, #0x4a
00449eb8  stur     w8, [x27, #0x1f]
00449ebc  ldr      x19, [x26]
00449ec0  stp      q0, q1, [x27]
00449ec4  strb     wzr, [sp, #0x351]
00449ec8  bl       #0xc48800  ; <__strrchr_chk>
00449ecc  cbz      x0, #0x449ee8
00449ed0  adrp     x0, #0x151000
00449ed4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449ed8  mov      w1, #0x2f
00449edc  mov      w2, #0x4a
00449ee0  bl       #0xc48800  ; <__strrchr_chk>
00449ee4  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00449ee8  adrp     x1, #0x177000
00449eec  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00449ef0  add      x2, sp, #0x330
00449ef4  mov      w0, #2
00449ef8  mov      x3, x20
00449efc  mov      w4, #0x49a
00449f00  blr      x19
00449f04  ldr      x0, [x28, #0x300]  ; =0x111300
00449f08  cbz      x0, #0x449f24
00449f0c  ldr      x8, [x0]
00449f10  cbz      x8, #0x449f24
00449f14  bl       #0xc48c10  ; <_ZNSt6__ndk16thread4joinEv>
00449f18  mov      x0, x28
00449f1c  mov      w1, wzr
00449f20  bl       #0x447074
00449f24  adrp     x20, #0x151000
00449f28  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449f2c  mov      x0, x20
00449f30  mov      w1, #0x2f
00449f34  mov      w2, #0x4a
00449f38  bl       #0xc48800  ; <__strrchr_chk>
00449f3c  cbz      x0, #0x449f58
00449f40  adrp     x0, #0x151000
00449f44  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449f48  mov      w1, #0x2f
00449f4c  mov      w2, #0x4a
00449f50  bl       #0xc48800  ; <__strrchr_chk>
00449f54  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00449f58  adrp     x21, #0x186000
00449f5c  add      x21, x21, #0x80f  ; "[%s:%d] m_thread_colorfix join.
"
00449f60  adrp     x0, #0x177000
00449f64  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00449f68  mov      w1, #2
00449f6c  mov      x2, x21
00449f70  mov      x3, x20
00449f74  mov      w4, #0x4a1
00449f78  bl       #0x484908
00449f7c  ldp      q1, q0, [x21]
00449f80  adrp     x20, #0x151000
00449f84  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449f88  mov      x0, x20
00449f8c  mov      w1, #0x2f
00449f90  mov      w2, #0x4a
00449f94  strb     wzr, [sp, #0x350]
00449f98  ldr      x19, [x26]
00449f9c  stp      q1, q0, [x27]
00449fa0  strb     wzr, [sp, #0x34f]
00449fa4  bl       #0xc48800  ; <__strrchr_chk>
00449fa8  cbz      x0, #0x449fc4
00449fac  adrp     x0, #0x151000
00449fb0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449fb4  mov      w1, #0x2f
00449fb8  mov      w2, #0x4a
00449fbc  bl       #0xc48800  ; <__strrchr_chk>
00449fc0  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00449fc4  adrp     x1, #0x177000
00449fc8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
00449fcc  add      x2, sp, #0x330
00449fd0  mov      w0, #2
00449fd4  mov      x3, x20
00449fd8  mov      w4, #0x4a1
00449fdc  blr      x19
00449fe0  ldr      x0, [x28, #0x308]  ; =0x111308
00449fe4  cbz      x0, #0x44a000
00449fe8  ldr      x8, [x0]
00449fec  cbz      x8, #0x44a000
00449ff0  bl       #0xc48c10  ; <_ZNSt6__ndk16thread4joinEv>
00449ff4  mov      x0, x28
00449ff8  mov      w1, #2
00449ffc  bl       #0x447074
0044a000  adrp     x20, #0x151000
0044a004  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a008  mov      x0, x20
0044a00c  mov      w1, #0x2f
0044a010  mov      w2, #0x4a
0044a014  bl       #0xc48800  ; <__strrchr_chk>
0044a018  cbz      x0, #0x44a034
0044a01c  adrp     x0, #0x151000
0044a020  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a024  mov      w1, #0x2f
0044a028  mov      w2, #0x4a
0044a02c  bl       #0xc48800  ; <__strrchr_chk>
0044a030  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a034  adrp     x21, #0x154000
0044a038  add      x21, x21, #0x415  ; "[%s:%d] m_thread_humanseg join.
"
0044a03c  adrp     x0, #0x177000
0044a040  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044a044  mov      w1, #2
0044a048  mov      x2, x21
0044a04c  mov      x3, x20
0044a050  mov      w4, #0x4a8
0044a054  bl       #0x484908
0044a058  ldp      q1, q0, [x21]
0044a05c  adrp     x20, #0x151000
0044a060  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a064  mov      x0, x20
0044a068  mov      w1, #0x2f
0044a06c  mov      w2, #0x4a
0044a070  strb     wzr, [sp, #0x350]
0044a074  ldr      x19, [x26]
0044a078  stp      q1, q0, [x27]
0044a07c  strb     wzr, [sp, #0x34f]
0044a080  bl       #0xc48800  ; <__strrchr_chk>
0044a084  cbz      x0, #0x44a0a0
0044a088  adrp     x0, #0x151000
0044a08c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a090  mov      w1, #0x2f
0044a094  mov      w2, #0x4a
0044a098  bl       #0xc48800  ; <__strrchr_chk>
0044a09c  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a0a0  adrp     x1, #0x177000
0044a0a4  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044a0a8  add      x2, sp, #0x330
0044a0ac  mov      w0, #2
0044a0b0  mov      x3, x20
0044a0b4  mov      w4, #0x4a8
0044a0b8  blr      x19
0044a0bc  ldr      x0, [x28, #0x2f8]  ; =0x1112f8
0044a0c0  cbz      x0, #0x44a0dc
0044a0c4  ldr      x8, [x0]
0044a0c8  cbz      x8, #0x44a0dc
0044a0cc  bl       #0xc48c10  ; <_ZNSt6__ndk16thread4joinEv>
0044a0d0  mov      x0, x28
0044a0d4  mov      w1, #3
0044a0d8  bl       #0x447074
0044a0dc  adrp     x19, #0x151000
0044a0e0  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a0e4  mov      x0, x19
0044a0e8  mov      w1, #0x2f
0044a0ec  mov      w2, #0x4a
0044a0f0  bl       #0xc48800  ; <__strrchr_chk>
0044a0f4  cbz      x0, #0x44a110
0044a0f8  adrp     x0, #0x151000
0044a0fc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a100  mov      w1, #0x2f
0044a104  mov      w2, #0x4a
0044a108  bl       #0xc48800  ; <__strrchr_chk>
0044a10c  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a110  adrp     x20, #0x12f000
0044a114  add      x20, x20, #0x39f  ; "[%s:%d] styletrans bypass is true.
"
0044a118  adrp     x0, #0x177000
0044a11c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044a120  mov      w1, #2
0044a124  mov      x2, x20
0044a128  mov      x3, x19
0044a12c  mov      w4, #0x4af
0044a130  bl       #0x484908
0044a134  ldp      q0, q1, [x20]
0044a138  mov      w8, #0x2e65
0044a13c  adrp     x19, #0x151000
0044a140  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a144  movk     w8, #0xa, lsl #16
0044a148  mov      x0, x19
0044a14c  mov      w1, #0x2f
0044a150  mov      w2, #0x4a
0044a154  str      w8, [sp, #0x350]
0044a158  ldr      x20, [x26]
0044a15c  stp      q0, q1, [x27]
0044a160  strb     wzr, [sp, #0x352]
0044a164  bl       #0xc48800  ; <__strrchr_chk>
0044a168  cbz      x0, #0x44a184
0044a16c  adrp     x0, #0x151000
0044a170  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a174  mov      w1, #0x2f
0044a178  mov      w2, #0x4a
0044a17c  bl       #0xc48800  ; <__strrchr_chk>
0044a180  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a184  adrp     x1, #0x177000
0044a188  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044a18c  add      x2, sp, #0x330
0044a190  mov      w0, #2
0044a194  mov      x3, x19
0044a198  mov      w4, #0x4af
0044a19c  blr      x20
0044a1a0  mov      w19, wzr
0044a1a4  b        #0x449870
0044a1a8  mov      w8, #1
0044a1ac  str      x24, [sp, #0x330]
0044a1b0  str      xzr, [sp, #0x338]
0044a1b4  stur     x28, [x29, #-0x60]
0044a1b8  str      w8, [sp, #0x250]
0044a1bc  add      x8, sp, #0x2d0
0044a1c0  add      x0, sp, #0x330
0044a1c4  sub      x1, x29, #0x60
0044a1c8  add      x2, sp, #0x250
0044a1cc  bl       #0x44cdac
0044a1d0  add      x0, x28, #0x300  ; ":%d] duration of m_thread_styletrans exec is %.3fms.
"
0044a1d4  add      x1, sp, #0x2d0
0044a1d8  bl       #0x44e044
0044a1dc  add      x0, sp, #0x2d0
0044a1e0  bl       #0x44e088
0044a1e4  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044a1e8  adrp     x21, #0x151000
0044a1ec  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a1f0  mov      x20, x0
0044a1f4  mov      x0, x21
0044a1f8  mov      w1, #0x2f
0044a1fc  mov      w2, #0x4a
0044a200  bl       #0xc48800  ; <__strrchr_chk>
0044a204  cbz      x0, #0x44a220
0044a208  adrp     x0, #0x151000
0044a20c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a210  mov      w1, #0x2f
0044a214  mov      w2, #0x4a
0044a218  bl       #0xc48800  ; <__strrchr_chk>
0044a21c  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a220  adrp     x22, #0x17c000
0044a224  add      x22, x22, #0xa3d  ; "[%s:%d] m_thread_styletrans init thread join.
"
0044a228  adrp     x0, #0x177000
0044a22c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044a230  mov      w1, #2
0044a234  mov      x2, x22
0044a238  mov      x3, x21
0044a23c  mov      w4, #0x4c9
0044a240  bl       #0x484908
0044a244  ldp      q1, q2, [x22]
0044a248  adrp     x21, #0x151000
0044a24c  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a250  mov      x0, x21
0044a254  mov      w1, #0x2f
0044a258  mov      w2, #0x4a
0044a25c  ldur     q0, [x22, #0x1f]
0044a260  ldr      x19, [x26]
0044a264  stur     q0, [x27, #0x1f]
0044a268  stp      q1, q2, [x27]
0044a26c  strb     wzr, [sp, #0x35d]
0044a270  bl       #0xc48800  ; <__strrchr_chk>
0044a274  cbz      x0, #0x44a290
0044a278  adrp     x0, #0x151000
0044a27c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a280  mov      w1, #0x2f
0044a284  mov      w2, #0x4a
0044a288  bl       #0xc48800  ; <__strrchr_chk>
0044a28c  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a290  adrp     x1, #0x177000
0044a294  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044a298  add      x2, sp, #0x330
0044a29c  mov      w0, #2
0044a2a0  mov      x3, x21
0044a2a4  mov      w4, #0x4c9
0044a2a8  blr      x19
0044a2ac  ldr      x0, [x28, #0x300]  ; =0x111300
0044a2b0  ldr      x8, [x0]
0044a2b4  cbz      x8, #0x44a2bc
0044a2b8  bl       #0xc48c10  ; <_ZNSt6__ndk16thread4joinEv>
0044a2bc  adrp     x21, #0x151000
0044a2c0  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a2c4  mov      x0, x21
0044a2c8  mov      w1, #0x2f
0044a2cc  mov      w2, #0x4a
0044a2d0  bl       #0xc48800  ; <__strrchr_chk>
0044a2d4  cbz      x0, #0x44a2f0
0044a2d8  adrp     x0, #0x151000
0044a2dc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a2e0  mov      w1, #0x2f
0044a2e4  mov      w2, #0x4a
0044a2e8  bl       #0xc48800  ; <__strrchr_chk>
0044a2ec  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a2f0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044a2f4  sub      x8, x0, x20
0044a2f8  adrp     x22, #0x111000
0044a2fc  add      x22, x22, #0x34a  ; "[%s:%d] duration of m_thread_styletrans init join is %.3fms.
"
0044a300  adrp     x0, #0x177000
0044a304  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044a308  mov      w1, #2
0044a30c  scvtf    d0, x8
0044a310  mov      x2, x22
0044a314  mov      x3, x21
0044a318  mov      w4, #0x4cc
0044a31c  mov      w19, #2
0044a320  fmul     d0, d0, d8
0044a324  bl       #0x484908
0044a328  ldp      q1, q2, [x22]
0044a32c  adrp     x21, #0x151000
0044a330  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a334  mov      x0, x21
0044a338  mov      w1, #0x2f
0044a33c  mov      w2, #0x4a
0044a340  ldur     q0, [x22, #0x2e]
0044a344  stp      q1, q2, [x27]
0044a348  ldr      q3, [x22, #0x20]  ; =0x111020
0044a34c  ldr      x22, [x26]
0044a350  stur     q0, [x27, #0x2e]
0044a354  str      q3, [x27, #0x20]  ; =0x151020
0044a358  strb     wzr, [sp, #0x36c]
0044a35c  bl       #0xc48800  ; <__strrchr_chk>
0044a360  cbz      x0, #0x44a37c
0044a364  adrp     x0, #0x151000
0044a368  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a36c  mov      w1, #0x2f
0044a370  mov      w2, #0x4a
0044a374  bl       #0xc48800  ; <__strrchr_chk>
0044a378  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a37c  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044a380  sub      x8, x0, x20
0044a384  adrp     x1, #0x177000
0044a388  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044a38c  add      x2, sp, #0x330
0044a390  mov      w0, #2
0044a394  mov      x3, x21
0044a398  scvtf    d0, x8
0044a39c  mov      w4, #0x4cc
0044a3a0  fmul     d0, d0, d8
0044a3a4  blr      x22
0044a3a8  add      x8, sp, #0x2d0
0044a3ac  add      x0, sp, #0x330
0044a3b0  sub      x1, x29, #0x60
0044a3b4  add      x2, sp, #0x250
0044a3b8  str      x24, [sp, #0x330]
0044a3bc  str      xzr, [sp, #0x338]
0044a3c0  stur     x28, [x29, #-0x60]
0044a3c4  str      w19, [sp, #0x250]
0044a3c8  bl       #0x44cdac
0044a3cc  add      x21, x28, #0x308  ; "ation of m_thread_styletrans exec is %.3fms.
"
0044a3d0  add      x1, sp, #0x2d0
0044a3d4  mov      x0, x21
0044a3d8  bl       #0x44e044
0044a3dc  add      x0, sp, #0x2d0
0044a3e0  bl       #0x44e088
0044a3e4  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044a3e8  adrp     x22, #0x151000
0044a3ec  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a3f0  mov      x20, x0
0044a3f4  mov      x0, x22
0044a3f8  mov      w1, #0x2f
0044a3fc  mov      w2, #0x4a
0044a400  bl       #0xc48800  ; <__strrchr_chk>
0044a404  cbz      x0, #0x44a420
0044a408  adrp     x0, #0x151000
0044a40c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a410  mov      w1, #0x2f
0044a414  mov      w2, #0x4a
0044a418  bl       #0xc48800  ; <__strrchr_chk>
0044a41c  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a420  adrp     x23, #0x163000
0044a424  add      x23, x23, #0x6b5  ; "[%s:%d] m_thread_colorfix init thread join.
"
0044a428  adrp     x0, #0x177000
0044a42c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044a430  mov      w1, #2
0044a434  mov      x2, x23
0044a438  mov      x3, x22
0044a43c  mov      w4, #0x4d0
0044a440  bl       #0x484908
0044a444  ldp      q1, q2, [x23]
0044a448  adrp     x22, #0x151000
0044a44c  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a450  mov      x0, x22
0044a454  mov      w1, #0x2f
0044a458  mov      w2, #0x4a
0044a45c  ldur     q0, [x23, #0x1d]
0044a460  ldr      x19, [x26]
0044a464  stur     q0, [x27, #0x1d]
0044a468  stp      q1, q2, [x27]
0044a46c  strb     wzr, [sp, #0x35b]
0044a470  bl       #0xc48800  ; <__strrchr_chk>
0044a474  cbz      x0, #0x44a490
0044a478  adrp     x0, #0x151000
0044a47c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a480  mov      w1, #0x2f
0044a484  mov      w2, #0x4a
0044a488  bl       #0xc48800  ; <__strrchr_chk>
0044a48c  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a490  adrp     x1, #0x177000
0044a494  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044a498  add      x2, sp, #0x330
0044a49c  mov      w0, #2
0044a4a0  mov      x3, x22
0044a4a4  mov      w4, #0x4d0
0044a4a8  blr      x19
0044a4ac  ldr      x0, [x21]
0044a4b0  ldr      x8, [x0]
0044a4b4  cbz      x8, #0x44a4bc
0044a4b8  bl       #0xc48c10  ; <_ZNSt6__ndk16thread4joinEv>
0044a4bc  adrp     x21, #0x151000
0044a4c0  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a4c4  mov      x0, x21
0044a4c8  mov      w1, #0x2f
0044a4cc  mov      w2, #0x4a
0044a4d0  bl       #0xc48800  ; <__strrchr_chk>
0044a4d4  cbz      x0, #0x44a4f0
0044a4d8  adrp     x0, #0x151000
0044a4dc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a4e0  mov      w1, #0x2f
0044a4e4  mov      w2, #0x4a
0044a4e8  bl       #0xc48800  ; <__strrchr_chk>
0044a4ec  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a4f0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044a4f4  sub      x8, x0, x20
0044a4f8  adrp     x22, #0x109000
0044a4fc  add      x22, x22, #0xaf4  ; "[%s:%d] duration of m_thread_colorfix init join is %.3fms.
"
0044a500  adrp     x0, #0x177000
0044a504  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044a508  mov      w1, #2
0044a50c  scvtf    d0, x8
0044a510  mov      x2, x22
0044a514  mov      x3, x21
0044a518  mov      w4, #0x4d3
0044a51c  fmul     d0, d0, d8
0044a520  bl       #0x484908
0044a524  ldp      q1, q2, [x22]
0044a528  adrp     x21, #0x151000
0044a52c  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a530  mov      x0, x21
0044a534  mov      w1, #0x2f
0044a538  mov      w2, #0x4a
0044a53c  ldur     q0, [x22, #0x2c]
0044a540  stp      q1, q2, [x27]
0044a544  ldr      q3, [x22, #0x20]  ; =0x109020
0044a548  ldr      x19, [x26]
0044a54c  stur     q0, [x27, #0x2c]
0044a550  str      q3, [x27, #0x20]  ; =0x151020
0044a554  strb     wzr, [sp, #0x36a]
0044a558  bl       #0xc48800  ; <__strrchr_chk>
0044a55c  cbz      x0, #0x44a578
0044a560  adrp     x0, #0x151000
0044a564  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a568  mov      w1, #0x2f
0044a56c  mov      w2, #0x4a
0044a570  bl       #0xc48800  ; <__strrchr_chk>
0044a574  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a578  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044a57c  sub      x8, x0, x20
0044a580  adrp     x1, #0x177000
0044a584  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044a588  add      x2, sp, #0x330
0044a58c  mov      w0, #2
0044a590  mov      x3, x21
0044a594  scvtf    d0, x8
0044a598  mov      w4, #0x4d3
0044a59c  fmul     d0, d0, d8
0044a5a0  blr      x19
0044a5a4  mov      x0, x28
0044a5a8  bl       #0x446bcc
0044a5ac  mov      w20, w0
0044a5b0  adrp     x0, #0x151000
0044a5b4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a5b8  mov      w1, #0x2f
0044a5bc  mov      w2, #0x4a
0044a5c0  bl       #0xc48800  ; <__strrchr_chk>
0044a5c4  cbz      w20, #0x44a5e8
0044a5c8  cbz      x0, #0x44a60c
0044a5cc  adrp     x0, #0x151000
0044a5d0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a5d4  mov      w1, #0x2f
0044a5d8  mov      w2, #0x4a
0044a5dc  bl       #0xc48800  ; <__strrchr_chk>
0044a5e0  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a5e4  b        #0x44a614
0044a5e8  ldr      x20, [x29, #0x68]
0044a5ec  cbz      x0, #0x44a6ac
0044a5f0  adrp     x0, #0x151000
0044a5f4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a5f8  mov      w1, #0x2f
0044a5fc  mov      w2, #0x4a
0044a600  bl       #0xc48800  ; <__strrchr_chk>
0044a604  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a608  b        #0x44a6b4
0044a60c  adrp     x3, #0x151000
0044a610  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a614  adrp     x19, #0x12f000
0044a618  add      x19, x19, #0x35b  ; "[%s:%d] model init failed, bypass styletrans.
"
0044a61c  adrp     x0, #0x177000
0044a620  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044a624  mov      w1, #2
0044a628  mov      x2, x19
0044a62c  mov      w4, #0x4d7
0044a630  bl       #0x484908
0044a634  ldp      q1, q2, [x19]
0044a638  mov      w1, #0x2f
0044a63c  mov      w2, #0x4a
0044a640  ldur     q0, [x19, #0x1f]
0044a644  adrp     x19, #0x151000
0044a648  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a64c  ldr      x20, [x26]
0044a650  mov      x0, x19
0044a654  stur     q0, [x27, #0x1f]
0044a658  stp      q1, q2, [x27]
0044a65c  strb     wzr, [sp, #0x35d]
0044a660  bl       #0xc48800  ; <__strrchr_chk>
0044a664  cbz      x0, #0x44a680
0044a668  adrp     x0, #0x151000
0044a66c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a670  mov      w1, #0x2f
0044a674  mov      w2, #0x4a
0044a678  bl       #0xc48800  ; <__strrchr_chk>
0044a67c  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a680  adrp     x1, #0x177000
0044a684  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044a688  add      x2, sp, #0x330
0044a68c  mov      w0, #2
0044a690  mov      x3, x19
0044a694  mov      w4, #0x4d7
0044a698  blr      x20
0044a69c  mov      w8, #0x6523
0044a6a0  movk     w8, #0x11, lsl #16
0044a6a4  add      w19, w8, #1
0044a6a8  b        #0x449870
0044a6ac  adrp     x3, #0x151000
0044a6b0  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a6b4  adrp     x21, #0x151000
0044a6b8  add      x21, x21, #0x88a  ; "[%s:%d] img_file_name: %s
"
0044a6bc  adrp     x0, #0x177000
0044a6c0  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044a6c4  mov      w1, #2
0044a6c8  mov      x2, x21
0044a6cc  mov      w4, #0x4db
0044a6d0  mov      x5, x20
0044a6d4  bl       #0x484908
0044a6d8  ldur     q0, [x21, #0xb]
0044a6dc  mov      w1, #0x2f
0044a6e0  ldr      q1, [x21]
0044a6e4  adrp     x21, #0x151000
0044a6e8  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a6ec  mov      w2, #0x4a
0044a6f0  mov      x0, x21
0044a6f4  ldr      x19, [x26]
0044a6f8  stur     q0, [x27, #0xb]
0044a6fc  str      q1, [x27]
0044a700  strb     wzr, [sp, #0x349]
0044a704  bl       #0xc48800  ; <__strrchr_chk>
0044a708  cbz      x0, #0x44a724
0044a70c  adrp     x0, #0x151000
0044a710  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a714  mov      w1, #0x2f
0044a718  mov      w2, #0x4a
0044a71c  bl       #0xc48800  ; <__strrchr_chk>
0044a720  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a724  adrp     x1, #0x177000
0044a728  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044a72c  add      x2, sp, #0x330
0044a730  mov      w0, #2
0044a734  mov      x3, x21
0044a738  mov      w4, #0x4db
0044a73c  mov      x5, x20
0044a740  blr      x19
0044a744  ldrb     w8, [x20]
0044a748  cbz      w8, #0x44a9d0
0044a74c  ldr      w8, [x28, #0x310]  ; =0x111310
0044a750  cbz      w8, #0x44adec
0044a754  adrp     x0, #0xc78000
0044a758  adrp     x1, #0x136000
0044a75c  add      x1, x1, #0xc29  ; "/styletrans/"
0044a760  add      x8, sp, #0x1f0
0044a764  ldr      x0, [x0, #0x2f8]  ; =0xc782f8
0044a768  bl       #0x4445b0
0044a76c  add      x0, sp, #0x1d8
0044a770  mov      x1, x20
0044a774  bl       #0x43ef0c
0044a778  add      x8, sp, #0x208
0044a77c  add      x0, sp, #0x1f0
0044a780  add      x1, sp, #0x1d8
0044a784  bl       #0x44e0c4
0044a788  adrp     x1, #0x17c000
0044a78c  add      x1, x1, #0xa6c  ; "x_ori"
0044a790  add      x0, sp, #0x208
0044a794  bl       #0xc48c80  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc>
0044a798  ldr      x8, [x0, #0x10]  ; =0xc78010
0044a79c  ldr      q0, [x0]
0044a7a0  str      x8, [sp, #0x230]
0044a7a4  add      x8, sp, #0x220
0044a7a8  str      q0, [x8]
0044a7ac  stp      xzr, xzr, [x0, #8]
0044a7b0  str      xzr, [x0]
0044a7b4  ldr      w0, [x28, #0x348]  ; =0x111348
0044a7b8  add      x8, sp, #0x1c0
0044a7bc  bl       #0xc48c40  ; <_ZNSt6__ndk19to_stringEi>
0044a7c0  add      x8, sp, #0x238
0044a7c4  add      x0, sp, #0x220
0044a7c8  add      x1, sp, #0x1c0
0044a7cc  bl       #0x44e0c4
0044a7d0  adrp     x1, #0x167000
0044a7d4  add      x1, x1, #0x943  ; "d_lux"
0044a7d8  add      x0, sp, #0x238
0044a7dc  bl       #0xc48c80  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc>
0044a7e0  ldr      x8, [x0, #0x10]  ; =0xc78010
0044a7e4  ldr      q0, [x0]
0044a7e8  str      x8, [sp, #0x260]
0044a7ec  add      x8, sp, #0x220
0044a7f0  str      q0, [x8, #0x30]
0044a7f4  stp      xzr, xzr, [x0, #8]
0044a7f8  str      xzr, [x0]
0044a7fc  ldr      s0, [x28, #0x34c]  ; =0x11134c f32=1.21917e+22
0044a800  add      x8, sp, #0x1a8
0044a804  bl       #0xc48c70  ; <_ZNSt6__ndk19to_stringEf>
0044a808  sub      x8, x29, #0x60
0044a80c  add      x0, sp, #0x250
0044a810  add      x1, sp, #0x1a8
0044a814  bl       #0x44e0c4
0044a818  adrp     x1, #0x163000
0044a81c  add      x1, x1, #0x6e2  ; "_cct"
0044a820  sub      x0, x29, #0x60
0044a824  bl       #0xc48c80  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc>
0044a828  ldr      x8, [x0, #0x10]  ; =0xc78010
0044a82c  ldr      q0, [x0]
0044a830  str      x8, [sp, #0x2e0]
0044a834  add      x8, sp, #0x220
0044a838  str      q0, [x8, #0xb0]
0044a83c  stp      xzr, xzr, [x0, #8]
0044a840  str      xzr, [x0]
0044a844  ldr      w0, [x28, #0x350]  ; =0x111350
0044a848  add      x8, sp, #0x190
0044a84c  bl       #0xc48c40  ; <_ZNSt6__ndk19to_stringEi>
0044a850  add      x8, sp, #0x330
0044a854  add      x0, sp, #0x2d0
0044a858  add      x1, sp, #0x190
0044a85c  bl       #0x44e0c4
0044a860  adrp     x1, #0x154000
0044a864  add      x1, x1, #0x413  ; =0x154413
0044a868  add      x0, sp, #0x330
0044a86c  bl       #0xc48c80  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc>
0044a870  ldp      x8, x19, [x0, #8]
0044a874  sub      x22, x29, #0x48
0044a878  ldrb     w20, [x0]
0044a87c  ldrb     w21, [x0, #1]  ; =0xc78001
0044a880  ldur     x9, [x0, #2]
0044a884  stp      xzr, xzr, [x0, #8]
0044a888  str      xzr, [x0]
0044a88c  ldrb     w10, [x28, #0x438]  ; =0x111438
0044a890  stur     x9, [x29, #-0x48]
0044a894  stur     x8, [x22, #6]
0044a898  tbz      w10, #0, #0x44a8a4
0044a89c  ldr      x0, [x28, #0x448]  ; =0x111448
0044a8a0  bl       #0xc48850  ; <_ZdlPv>
0044a8a4  ldur     x8, [x22, #6]
0044a8a8  add      x9, x28, #0x43a  ; "ber() [BasicJsonType = mage_json::basic_json<>, InputAdapterType = mage_json::detail::input_stream_adapter]"
0044a8ac  ldur     x10, [x29, #-0x48]
0044a8b0  strb     w20, [x28, #0x438]
0044a8b4  ldrb     w11, [sp, #0x330]
0044a8b8  strb     w21, [x28, #0x439]
0044a8bc  str      x8, [x28, #0x440]  ; =0x111440
0044a8c0  str      x10, [x9]
0044a8c4  str      x19, [x28, #0x448]  ; =0x111448
0044a8c8  tbnz     w11, #0, #0x44aaa0
0044a8cc  ldrb     w8, [sp, #0x190]
0044a8d0  tbnz     w8, #0, #0x44aab0
0044a8d4  ldrb     w8, [sp, #0x2d0]
0044a8d8  tbnz     w8, #0, #0x44aac0
0044a8dc  ldurb    w8, [x29, #-0x60]
0044a8e0  tbnz     w8, #0, #0x44aad0
0044a8e4  ldrb     w8, [sp, #0x1a8]
0044a8e8  tbnz     w8, #0, #0x44aae0
0044a8ec  ldrb     w8, [sp, #0x250]
0044a8f0  tbnz     w8, #0, #0x44aaf0
0044a8f4  ldrb     w8, [sp, #0x238]
0044a8f8  tbnz     w8, #0, #0x44ab00
0044a8fc  ldrb     w8, [sp, #0x1c0]
0044a900  tbnz     w8, #0, #0x44ab10
0044a904  ldrb     w8, [sp, #0x220]
0044a908  tbnz     w8, #0, #0x44ab20
0044a90c  ldrb     w8, [sp, #0x208]
0044a910  tbnz     w8, #0, #0x44ab30
0044a914  ldrb     w8, [sp, #0x1d8]
0044a918  tbnz     w8, #0, #0x44ab40
0044a91c  ldrb     w8, [sp, #0x1f0]
0044a920  tbz      w8, #0, #0x44a92c
0044a924  ldr      x0, [sp, #0x200]
0044a928  bl       #0xc48850  ; <_ZdlPv>
0044a92c  adrp     x0, #0xc78000
0044a930  adrp     x1, #0x136000
0044a934  add      x1, x1, #0xc29  ; "/styletrans/"
0044a938  add      x8, sp, #0x330
0044a93c  add      x20, x28, #0x438  ; "umber() [BasicJsonType = mage_json::basic_json<>, InputAdapterType = mage_json::detail::input_stream_adapter]"
0044a940  add      x23, x28, #0x439  ; "mber() [BasicJsonType = mage_json::basic_json<>, InputAdapterType = mage_json::detail::input_stream_adapter]"
0044a944  ldr      x0, [x0, #0x2f8]  ; =0xc782f8
0044a948  add      x19, sp, #0x330
0044a94c  bl       #0x4445b0
0044a950  ldrb     w8, [sp, #0x330]
0044a954  orr      x10, x19, #1
0044a958  ldr      x9, [sp, #0x340]
0044a95c  mov      w1, #0x1c0
0044a960  tst      w8, #1
0044a964  csel     x0, x10, x9, eq
0044a968  bl       #0xc48c90  ; <mkdir>
0044a96c  ldrb     w8, [sp, #0x330]
0044a970  tbz      w8, #0, #0x44a97c
0044a974  ldr      x0, [sp, #0x340]
0044a978  bl       #0xc48850  ; <_ZdlPv>
0044a97c  ldrb     w8, [x28, #0x438]  ; =0x111438
0044a980  mov      w1, #0x1c0
0044a984  ldr      x9, [x28, #0x448]  ; =0x111448
0044a988  tst      w8, #1
0044a98c  csel     x0, x23, x9, eq
0044a990  bl       #0xc48c90  ; <mkdir>
0044a994  mov      w21, w0
0044a998  adrp     x0, #0x151000
0044a99c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a9a0  mov      w1, #0x2f
0044a9a4  mov      w2, #0x4a
0044a9a8  bl       #0xc48800  ; <__strrchr_chk>
0044a9ac  cbz      w21, #0x44ab54
0044a9b0  cbz      x0, #0x44ab74
0044a9b4  adrp     x0, #0x151000
0044a9b8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a9bc  mov      w1, #0x2f
0044a9c0  mov      w2, #0x4a
0044a9c4  bl       #0xc48800  ; <__strrchr_chk>
0044a9c8  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044a9cc  b        #0x44ab7c
0044a9d0  adrp     x19, #0x151000
0044a9d4  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a9d8  mov      x0, x19
0044a9dc  mov      w1, #0x2f
0044a9e0  mov      w2, #0x4a
0044a9e4  bl       #0xc48800  ; <__strrchr_chk>
0044a9e8  cbz      x0, #0x44aa04
0044a9ec  adrp     x0, #0x151000
0044a9f0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044a9f4  mov      w1, #0x2f
0044a9f8  mov      w2, #0x4a
0044a9fc  bl       #0xc48800  ; <__strrchr_chk>
0044aa00  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
0044aa04  adrp     x20, #0x154000
0044aa08  add      x20, x20, #0x436  ; "[%s:%d] input img_file_name is empty"
0044aa0c  adrp     x0, #0x177000
0044aa10  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044aa14  mov      w1, #2
0044aa18  mov      x2, x20
0044aa1c  mov      x3, x19
0044aa20  mov      w4, #0x4de
0044aa24  bl       #0x484908
0044aa28  ldp      q0, q1, [x20]
0044aa2c  adrp     x19, #0x151000
0044aa30  add      x19, x19, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044aa34  mov      x0, x19
0044aa38  mov      w1, #0x2f
0044aa3c  mov      w2, #0x4a
0044aa40  ldur     x8, [x20, #0x1d]
0044aa44  ldr      x20, [x26]
0044aa48  stur     x8, [x27, #0x1d]
0044aa4c  stp      q0, q1, [x27]
0044aa50  strb     wzr, [sp, #0x353]
0044aa54  bl       #0xc48800  ; <__strrchr_chk>
0044aa58  cbz      x0, #0x44aa74
0044aa5c  adrp     x0, #0x151000
0044aa60  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044aa64  mov      w1, #0x2f
0044aa68  mov      w2, #0x4a
0044aa6c  bl       #0xc48800  ; <__strrchr_chk>
0044aa70  add      x19, x0, #1  ; "tputArray, double, cv::RNG *)"
0044aa74  adrp     x1, #0x177000
0044aa78  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044aa7c  add      x2, sp, #0x330
0044aa80  mov      w0, #2
0044aa84  mov      x3, x19
0044aa88  mov      w4, #0x4de
0044aa8c  blr      x20
0044aa90  mov      w8, #0x6523
0044aa94  movk     w8, #0x11, lsl #16
0044aa98  sub      w19, w8, #2
0044aa9c  b        #0x449870
0044aaa0  ldr      x0, [sp, #0x340]
0044aaa4  bl       #0xc48850  ; <_ZdlPv>
0044aaa8  ldrb     w8, [sp, #0x190]
0044aaac  tbz      w8, #0, #0x44a8d4
0044aab0  ldr      x0, [sp, #0x1a0]
0044aab4  bl       #0xc48850  ; <_ZdlPv>
0044aab8  ldrb     w8, [sp, #0x2d0]
0044aabc  tbz      w8, #0, #0x44a8dc
0044aac0  ldr      x0, [sp, #0x2e0]
0044aac4  bl       #0xc48850  ; <_ZdlPv>
0044aac8  ldurb    w8, [x29, #-0x60]
0044aacc  tbz      w8, #0, #0x44a8e4
0044aad0  ldur     x0, [x29, #-0x50]
0044aad4  bl       #0xc48850  ; <_ZdlPv>
0044aad8  ldrb     w8, [sp, #0x1a8]
0044aadc  tbz      w8, #0, #0x44a8ec
0044aae0  ldr      x0, [sp, #0x1b8]
0044aae4  bl       #0xc48850  ; <_ZdlPv>
0044aae8  ldrb     w8, [sp, #0x250]
0044aaec  tbz      w8, #0, #0x44a8f4
0044aaf0  ldr      x0, [sp, #0x260]
0044aaf4  bl       #0xc48850  ; <_ZdlPv>
0044aaf8  ldrb     w8, [sp, #0x238]
0044aafc  tbz      w8, #0, #0x44a8fc
0044ab00  ldr      x0, [sp, #0x248]
0044ab04  bl       #0xc48850  ; <_ZdlPv>
0044ab08  ldrb     w8, [sp, #0x1c0]
0044ab0c  tbz      w8, #0, #0x44a904
0044ab10  ldr      x0, [sp, #0x1d0]
0044ab14  bl       #0xc48850  ; <_ZdlPv>
0044ab18  ldrb     w8, [sp, #0x220]
0044ab1c  tbz      w8, #0, #0x44a90c
0044ab20  ldr      x0, [sp, #0x230]
0044ab24  bl       #0xc48850  ; <_ZdlPv>
0044ab28  ldrb     w8, [sp, #0x208]
0044ab2c  tbz      w8, #0, #0x44a914
0044ab30  ldr      x0, [sp, #0x218]
0044ab34  bl       #0xc48850  ; <_ZdlPv>
0044ab38  ldrb     w8, [sp, #0x1d8]
0044ab3c  tbz      w8, #0, #0x44a91c
0044ab40  ldr      x0, [sp, #0x1e8]
0044ab44  bl       #0xc48850  ; <_ZdlPv>
0044ab48  ldrb     w8, [sp, #0x1f0]
0044ab4c  tbnz     w8, #0, #0x44a924
0044ab50  b        #0x44a92c
0044ab54  cbz      x0, #0x44ac38
0044ab58  adrp     x0, #0x151000
0044ab5c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ab60  mov      w1, #0x2f
0044ab64  mov      w2, #0x4a
0044ab68  bl       #0xc48800  ; <__strrchr_chk>
0044ab6c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044ab70  b        #0x44ac40
0044ab74  adrp     x3, #0x151000
0044ab78  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ab7c  ldrb     w8, [x28, #0x438]  ; =0x111438
0044ab80  adrp     x22, #0x17c000
0044ab84  add      x22, x22, #0xa72  ; "[%s:%d] failed to create dump folder %s, error code is %d.
"
0044ab88  ldr      x9, [x28, #0x448]  ; =0x111448
0044ab8c  adrp     x0, #0x177000
0044ab90  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044ab94  tst      w8, #1
0044ab98  mov      w1, #2
0044ab9c  csel     x5, x23, x9, eq
0044aba0  mov      x2, x22
0044aba4  mov      w4, #0x4ed
0044aba8  mov      w6, w21
0044abac  bl       #0x484908
0044abb0  ldp      q1, q2, [x22]
0044abb4  mov      w1, #0x2f
0044abb8  mov      w2, #0x4a
0044abbc  ldur     q0, [x22, #0x2c]
0044abc0  stp      q1, q2, [x27]
0044abc4  ldr      q3, [x22, #0x20]  ; =0x17c020
0044abc8  adrp     x22, #0x151000
0044abcc  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044abd0  ldr      x19, [x26]
0044abd4  mov      x0, x22
0044abd8  stur     q0, [x27, #0x2c]
0044abdc  str      q3, [x27, #0x20]  ; =0x151020
0044abe0  strb     wzr, [sp, #0x36a]
0044abe4  bl       #0xc48800  ; <__strrchr_chk>
0044abe8  cbz      x0, #0x44ac04
0044abec  adrp     x0, #0x151000
0044abf0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044abf4  mov      w1, #0x2f
0044abf8  mov      w2, #0x4a
0044abfc  bl       #0xc48800  ; <__strrchr_chk>
0044ac00  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044ac04  ldrb     w8, [x28, #0x438]  ; =0x111438
0044ac08  adrp     x1, #0x177000
0044ac0c  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044ac10  ldr      x9, [x28, #0x448]  ; =0x111448
0044ac14  add      x2, sp, #0x330
0044ac18  mov      w0, #2
0044ac1c  tst      w8, #1
0044ac20  mov      x3, x22
0044ac24  csel     x5, x23, x9, eq
0044ac28  mov      w4, #0x4ed
0044ac2c  mov      w6, w21
0044ac30  blr      x19
0044ac34  b        #0x44ace0
0044ac38  adrp     x3, #0x151000
0044ac3c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ac40  ldrb     w8, [x28, #0x438]  ; =0x111438
0044ac44  adrp     x21, #0x147000
0044ac48  add      x21, x21, #0x4d5  ; "[%s:%d] create dump folder %s.
"
0044ac4c  ldr      x9, [x28, #0x448]  ; =0x111448
0044ac50  adrp     x0, #0x177000
0044ac54  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044ac58  tst      w8, #1
0044ac5c  mov      w1, #2
0044ac60  csel     x5, x23, x9, eq
0044ac64  mov      x2, x21
0044ac68  mov      w4, #0x4e9
0044ac6c  bl       #0x484908
0044ac70  ldp      q1, q0, [x21]
0044ac74  adrp     x21, #0x151000
0044ac78  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ac7c  mov      x0, x21
0044ac80  mov      w1, #0x2f
0044ac84  mov      w2, #0x4a
0044ac88  ldr      x19, [x26]
0044ac8c  stp      q1, q0, [x27]
0044ac90  strb     wzr, [sp, #0x34e]
0044ac94  bl       #0xc48800  ; <__strrchr_chk>
0044ac98  cbz      x0, #0x44acb4
0044ac9c  adrp     x0, #0x151000
0044aca0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044aca4  mov      w1, #0x2f
0044aca8  mov      w2, #0x4a
0044acac  bl       #0xc48800  ; <__strrchr_chk>
0044acb0  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044acb4  ldrb     w8, [x28, #0x438]  ; =0x111438
0044acb8  adrp     x1, #0x177000
0044acbc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044acc0  ldr      x9, [x28, #0x448]  ; =0x111448
0044acc4  add      x2, sp, #0x330
0044acc8  mov      w0, #2
0044accc  tst      w8, #1
0044acd0  mov      x3, x21
0044acd4  csel     x5, x23, x9, eq
0044acd8  mov      w4, #0x4e9
0044acdc  blr      x19
0044ace0  adrp     x1, #0x154000
0044ace4  add      x1, x1, #0x45b  ; "styletrans_log.txt"
0044ace8  add      x8, sp, #0x330
0044acec  mov      x0, x20
0044acf0  add      x19, sp, #0x330
0044acf4  bl       #0x4445b0
0044acf8  ldrb     w8, [sp, #0x330]
0044acfc  orr      x10, x19, #1
0044ad00  ldr      x9, [sp, #0x340]
0044ad04  adrp     x1, #0x15f000
0044ad08  add      x1, x1, #0x5fa  ; =0x15f5fa
0044ad0c  tst      w8, #1
0044ad10  csel     x0, x10, x9, eq
0044ad14  bl       #0xc48920  ; <fopen>
0044ad18  ldrb     w8, [sp, #0x330]
0044ad1c  str      x0, [x28, #0x450]  ; =0x111450
0044ad20  tbz      w8, #0, #0x44ad30
0044ad24  ldr      x0, [sp, #0x340]
0044ad28  bl       #0xc48850  ; <_ZdlPv>
0044ad2c  ldr      x0, [x28, #0x450]  ; =0x111450
0044ad30  cbz      x0, #0x44adec
0044ad34  add      x0, sp, #0x330
0044ad38  add      x19, sp, #0x330
0044ad3c  bl       #0x44e114
0044ad40  add      x0, x19, #0x10  ; "le, cv::RNG *)"
0044ad44  adrp     x1, #0x163000
0044ad48  add      x1, x1, #0x6e7  ; "m_process_type: "
0044ad4c  mov      w2, #0x10
0044ad50  bl       #0x43ad44
0044ad54  ldr      w1, [x28, #0x364]  ; =0x111364
0044ad58  bl       #0x5455c8
0044ad5c  adrp     x1, #0x171000
0044ad60  add      x1, x1, #0xa9c  ; =0x171a9c
0044ad64  mov      w2, #1
0044ad68  bl       #0x43ad44
0044ad6c  add      x8, sp, #0x330
0044ad70  add      x20, x8, #0x18
0044ad74  add      x8, sp, #0x2d0
0044ad78  mov      x0, x20
0044ad7c  bl       #0x4518c4
0044ad80  ldrb     w21, [sp, #0x2d0]
0044ad84  ldr      x19, [sp, #0x2e0]
0044ad88  sub      x8, x29, #0x60
0044ad8c  mov      x0, x20
0044ad90  bl       #0x4518c4
0044ad94  ldurb    w9, [x29, #-0x60]
0044ad98  add      x8, sp, #0x2d0
0044ad9c  ldur     x10, [x29, #-0x58]
0044ada0  orr      x8, x8, #1
0044ada4  tst      w21, #1
0044ada8  ldr      x3, [x28, #0x450]  ; =0x111450
0044adac  csel     x0, x8, x19, eq
0044adb0  lsr      x8, x9, #1
0044adb4  tst      w9, #1
0044adb8  mov      w1, #1
0044adbc  csel     x2, x8, x10, eq
0044adc0  bl       #0xc48a50  ; <fwrite>
0044adc4  ldurb    w8, [x29, #-0x60]
0044adc8  tbz      w8, #0, #0x44add4
0044adcc  ldur     x0, [x29, #-0x50]
0044add0  bl       #0xc48850  ; <_ZdlPv>
0044add4  ldrb     w8, [sp, #0x2d0]
0044add8  tbz      w8, #0, #0x44ade4
0044addc  ldr      x0, [sp, #0x2e0]
0044ade0  bl       #0xc48850  ; <_ZdlPv>
0044ade4  add      x0, sp, #0x330
0044ade8  bl       #0x44e1f8
0044adec  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044adf0  add      x20, x28, #0x438  ; "umber() [BasicJsonType = mage_json::basic_json<>, InputAdapterType = mage_json::detail::input_stream_adapter]"
0044adf4  mov      x21, x0
0044adf8  adrp     x1, #0x13c000
0044adfc  add      x1, x1, #0x12b  ; "yuv2rgb_input_y.dat"
0044ae00  add      x8, sp, #0x178
0044ae04  mov      x0, x20
0044ae08  ldr      w22, [x28, #0x310]  ; =0x111310
0044ae0c  bl       #0x4445b0
0044ae10  ldr      x9, [x28, #0x1d8]  ; =0x1111d8
0044ae14  ldp      x12, x8, [x9, #0x10]
0044ae18  ldr      x23, [x9, #0x30]  ; =0x189030
0044ae1c  cmp      x12, x8
0044ae20  b.eq     #0x44ae40
0044ae24  sub      x9, x8, x12
0044ae28  sub      x9, x9, #8
0044ae2c  cmp      x9, #0x38
0044ae30  b.hs     #0x44ae48
0044ae34  mov      w24, #1
0044ae38  mov      x9, x12
0044ae3c  b        #0x44aea8
0044ae40  mov      w24, #1
0044ae44  b        #0x44aeb8
0044ae48  lsr      x9, x9, #3
0044ae4c  add      x10, x9, #1  ; "rray) const"
0044ae50  and      x11, x10, #0x3ffffffffffffff8
0044ae54  movi     v0.4s, #1
0044ae58  mov      x13, x11
0044ae5c  movi     v1.4s, #1
0044ae60  add      x9, x12, x11, lsl #3
0044ae64  add      x12, x12, #0x20
0044ae68  ldp      q3, q2, [x12, #-0x20]
0044ae6c  subs     x13, x13, #8
0044ae70  ldp      q5, q4, [x12], #0x40
0044ae74  uzp1     v2.4s, v3.4s, v2.4s
0044ae78  uzp1     v3.4s, v5.4s, v4.4s
0044ae7c  mul      v0.4s, v0.4s, v2.4s
0044ae80  mul      v1.4s, v1.4s, v3.4s
0044ae84  b.ne     #0x44ae68
0044ae88  mul      v0.4s, v1.4s, v0.4s
0044ae8c  cmp      x10, x11
0044ae90  ext      v1.16b, v0.16b, v0.16b, #8
0044ae94  mul      v0.2s, v0.2s, v1.2s
0044ae98  mov      w12, v0.s[1]
0044ae9c  fmov     w13, s0
0044aea0  mul      w24, w13, w12
0044aea4  b.eq     #0x44aeb8
0044aea8  ldr      w10, [x9], #8  ; =0x189008
0044aeac  cmp      x9, x8
0044aeb0  mul      w24, w24, w10
0044aeb4  b.ne     #0x44aea8
0044aeb8  adrp     x1, #0x147000
0044aebc  add      x1, x1, #0x4c8  ; "binary"
0044aec0  add      x0, sp, #0x160
0044aec4  bl       #0x43ef0c
0044aec8  add      x1, sp, #0x178
0044aecc  add      x4, sp, #0x160
0044aed0  mov      w0, w22
0044aed4  mov      x2, x23
0044aed8  mov      w3, w24
0044aedc  bl       #0x43b0c4
0044aee0  ldrb     w8, [sp, #0x160]
0044aee4  tbz      w8, #0, #0x44aef0
0044aee8  ldr      x0, [sp, #0x170]
0044aeec  bl       #0xc48850  ; <_ZdlPv>
0044aef0  ldrb     w8, [sp, #0x178]
0044aef4  tbz      w8, #0, #0x44af00
0044aef8  ldr      x0, [sp, #0x188]
0044aefc  bl       #0xc48850  ; <_ZdlPv>
0044af00  adrp     x1, #0x154000
0044af04  add      x1, x1, #0x46e  ; "yuv2rgb_input_uv.dat"
0044af08  add      x8, sp, #0x148
0044af0c  mov      x0, x20
0044af10  ldr      w22, [x28, #0x310]  ; =0x111310
0044af14  bl       #0x4445b0
0044af18  ldr      x9, [x28, #0x1e8]  ; =0x1111e8
0044af1c  ldp      x12, x8, [x9, #0x10]
0044af20  ldr      x23, [x9, #0x30]  ; =0x189030
0044af24  cmp      x12, x8
0044af28  b.eq     #0x44af48
0044af2c  sub      x9, x8, x12
0044af30  sub      x9, x9, #8
0044af34  cmp      x9, #0x38
0044af38  b.hs     #0x44af50
0044af3c  mov      w24, #1
0044af40  mov      x9, x12
0044af44  b        #0x44afb0
0044af48  mov      w24, #1
0044af4c  b        #0x44afc0
0044af50  lsr      x9, x9, #3
0044af54  add      x10, x9, #1  ; "rray) const"
0044af58  and      x11, x10, #0x3ffffffffffffff8
0044af5c  movi     v0.4s, #1
0044af60  mov      x13, x11
0044af64  movi     v1.4s, #1
0044af68  add      x9, x12, x11, lsl #3
0044af6c  add      x12, x12, #0x20
0044af70  ldp      q3, q2, [x12, #-0x20]
0044af74  subs     x13, x13, #8
0044af78  ldp      q5, q4, [x12], #0x40
0044af7c  uzp1     v2.4s, v3.4s, v2.4s
0044af80  uzp1     v3.4s, v5.4s, v4.4s
0044af84  mul      v0.4s, v0.4s, v2.4s
0044af88  mul      v1.4s, v1.4s, v3.4s
0044af8c  b.ne     #0x44af70
0044af90  mul      v0.4s, v1.4s, v0.4s
0044af94  cmp      x10, x11
0044af98  ext      v1.16b, v0.16b, v0.16b, #8
0044af9c  mul      v0.2s, v0.2s, v1.2s
0044afa0  mov      w12, v0.s[1]
0044afa4  fmov     w13, s0
0044afa8  mul      w24, w13, w12
0044afac  b.eq     #0x44afc0
0044afb0  ldr      w10, [x9], #8  ; =0x189008
0044afb4  cmp      x9, x8
0044afb8  mul      w24, w24, w10
0044afbc  b.ne     #0x44afb0
0044afc0  adrp     x1, #0x11f000
0044afc4  add      x1, x1, #0x7da  ; "app"
0044afc8  add      x0, sp, #0x130
0044afcc  bl       #0x43ef0c
0044afd0  add      x1, sp, #0x148
0044afd4  add      x4, sp, #0x130
0044afd8  mov      w0, w22
0044afdc  mov      x2, x23
0044afe0  mov      w3, w24
0044afe4  bl       #0x43b0c4
0044afe8  ldrb     w8, [sp, #0x130]
0044afec  tbnz     w8, #0, #0x44b008
0044aff0  ldrb     w8, [sp, #0x148]
0044aff4  tbnz     w8, #0, #0x44b018
0044aff8  mov      x0, x28
0044affc  bl       #0x441db8
0044b000  cbnz     w0, #0x44b02c
0044b004  b        #0x44b0fc
0044b008  ldr      x0, [sp, #0x140]
0044b00c  bl       #0xc48850  ; <_ZdlPv>
0044b010  ldrb     w8, [sp, #0x148]
0044b014  tbz      w8, #0, #0x44aff8
0044b018  ldr      x0, [sp, #0x158]
0044b01c  bl       #0xc48850  ; <_ZdlPv>
0044b020  mov      x0, x28
0044b024  bl       #0x441db8
0044b028  cbz      w0, #0x44b0fc
0044b02c  adrp     x23, #0x151000
0044b030  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b034  mov      w22, w0
0044b038  mov      x0, x23
0044b03c  mov      w1, #0x2f
0044b040  mov      w2, #0x4a
0044b044  bl       #0xc48800  ; <__strrchr_chk>
0044b048  cbz      x0, #0x44b064
0044b04c  adrp     x0, #0x151000
0044b050  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b054  mov      w1, #0x2f
0044b058  mov      w2, #0x4a
0044b05c  bl       #0xc48800  ; <__strrchr_chk>
0044b060  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b064  adrp     x24, #0x12f000
0044b068  add      x24, x24, #0x3c3  ; "[%s:%d] yuv_convert_rgb error %d.
"
0044b06c  adrp     x0, #0x177000
0044b070  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044b074  mov      w1, #2
0044b078  mov      x2, x24
0044b07c  mov      x3, x23
0044b080  mov      w4, #0x501
0044b084  mov      w5, w22
0044b088  bl       #0x484908
0044b08c  ldp      q0, q1, [x24]
0044b090  mov      w8, #0x2e64
0044b094  adrp     x23, #0x151000
0044b098  add      x23, x23, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b09c  movk     w8, #0xa, lsl #16
0044b0a0  mov      x0, x23
0044b0a4  mov      w1, #0x2f
0044b0a8  mov      w2, #0x4a
0044b0ac  stur     w8, [x27, #0x1f]
0044b0b0  ldr      x19, [x26]
0044b0b4  stp      q0, q1, [x27]
0044b0b8  strb     wzr, [sp, #0x351]
0044b0bc  bl       #0xc48800  ; <__strrchr_chk>
0044b0c0  cbz      x0, #0x44b0dc
0044b0c4  adrp     x0, #0x151000
0044b0c8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b0cc  mov      w1, #0x2f
0044b0d0  mov      w2, #0x4a
0044b0d4  bl       #0xc48800  ; <__strrchr_chk>
0044b0d8  add      x23, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b0dc  adrp     x1, #0x177000
0044b0e0  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044b0e4  add      x2, sp, #0x330
0044b0e8  mov      w0, #2
0044b0ec  mov      x3, x23
0044b0f0  mov      w4, #0x501
0044b0f4  mov      w5, w22
0044b0f8  blr      x19
0044b0fc  adrp     x22, #0x151000
0044b100  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b104  mov      x0, x22
0044b108  mov      w1, #0x2f
0044b10c  mov      w2, #0x4a
0044b110  bl       #0xc48800  ; <__strrchr_chk>
0044b114  cbz      x0, #0x44b130
0044b118  adrp     x0, #0x151000
0044b11c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b120  mov      w1, #0x2f
0044b124  mov      w2, #0x4a
0044b128  bl       #0xc48800  ; <__strrchr_chk>
0044b12c  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b130  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044b134  sub      x8, x0, x21
0044b138  adrp     x23, #0x13c000
0044b13c  add      x23, x23, #0x13f  ; "[%s:%d] duration of yuv_convert_rgb is %.3fms.
"
0044b140  adrp     x0, #0x177000
0044b144  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044b148  mov      w1, #2
0044b14c  scvtf    d0, x8
0044b150  mov      x2, x23
0044b154  mov      x3, x22
0044b158  mov      w4, #0x503
0044b15c  fmul     d0, d0, d8
0044b160  bl       #0x484908
0044b164  ldp      q2, q0, [x23, #0x10]
0044b168  adrp     x22, #0x151000
0044b16c  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b170  mov      x0, x22
0044b174  mov      w1, #0x2f
0044b178  mov      w2, #0x4a
0044b17c  ldr      q1, [x23]
0044b180  stp      q2, q0, [x27, #0x10]
0044b184  ldr      x19, [x26]
0044b188  strb     wzr, [sp, #0x35e]
0044b18c  str      q1, [x27]
0044b190  bl       #0xc48800  ; <__strrchr_chk>
0044b194  cbz      x0, #0x44b1b0
0044b198  adrp     x0, #0x151000
0044b19c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b1a0  mov      w1, #0x2f
0044b1a4  mov      w2, #0x4a
0044b1a8  bl       #0xc48800  ; <__strrchr_chk>
0044b1ac  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b1b0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044b1b4  sub      x8, x0, x21
0044b1b8  adrp     x1, #0x177000
0044b1bc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044b1c0  add      x2, sp, #0x330
0044b1c4  mov      w0, #2
0044b1c8  mov      x3, x22
0044b1cc  scvtf    d0, x8
0044b1d0  mov      w4, #0x503
0044b1d4  fmul     d0, d0, d8
0044b1d8  blr      x19
0044b1dc  ldrb     w8, [x28, #0x362]  ; =0x111362
0044b1e0  cbz      w8, #0x44b394
0044b1e4  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044b1e8  mov      x21, x0
0044b1ec  mov      x0, x28
0044b1f0  bl       #0x4434d0
0044b1f4  adrp     x22, #0x151000
0044b1f8  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b1fc  mov      x0, x22
0044b200  mov      w1, #0x2f
0044b204  mov      w2, #0x4a
0044b208  bl       #0xc48800  ; <__strrchr_chk>
0044b20c  cbz      x0, #0x44b228
0044b210  adrp     x0, #0x151000
0044b214  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b218  mov      w1, #0x2f
0044b21c  mov      w2, #0x4a
0044b220  bl       #0xc48800  ; <__strrchr_chk>
0044b224  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b228  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044b22c  sub      x8, x0, x21
0044b230  adrp     x23, #0x143000
0044b234  add      x23, x23, #0x8b4  ; "[%s:%d] duration of pad_input is %.3fms.
"
0044b238  adrp     x0, #0x177000
0044b23c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044b240  mov      w1, #2
0044b244  scvtf    d0, x8
0044b248  mov      x2, x23
0044b24c  mov      x3, x22
0044b250  mov      w4, #0x513
0044b254  fmul     d0, d0, d8
0044b258  bl       #0x484908
0044b25c  ldp      q1, q2, [x23]
0044b260  adrp     x22, #0x151000
0044b264  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b268  mov      x0, x22
0044b26c  mov      w1, #0x2f
0044b270  mov      w2, #0x4a
0044b274  ldur     q0, [x23, #0x1a]
0044b278  ldr      x19, [x26]
0044b27c  stur     q0, [x27, #0x1a]
0044b280  stp      q1, q2, [x27]
0044b284  strb     wzr, [sp, #0x358]
0044b288  bl       #0xc48800  ; <__strrchr_chk>
0044b28c  cbz      x0, #0x44b2a8
0044b290  adrp     x0, #0x151000
0044b294  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b298  mov      w1, #0x2f
0044b29c  mov      w2, #0x4a
0044b2a0  bl       #0xc48800  ; <__strrchr_chk>
0044b2a4  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b2a8  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044b2ac  sub      x8, x0, x21
0044b2b0  adrp     x1, #0x177000
0044b2b4  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044b2b8  add      x2, sp, #0x330
0044b2bc  mov      w0, #2
0044b2c0  mov      x3, x22
0044b2c4  scvtf    d0, x8
0044b2c8  mov      w4, #0x513
0044b2cc  fmul     d0, d0, d8
0044b2d0  blr      x19
0044b2d4  adrp     x21, #0x151000
0044b2d8  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b2dc  mov      x0, x21
0044b2e0  mov      w1, #0x2f
0044b2e4  mov      w2, #0x4a
0044b2e8  bl       #0xc48800  ; <__strrchr_chk>
0044b2ec  cbz      x0, #0x44b308
0044b2f0  adrp     x0, #0x151000
0044b2f4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b2f8  mov      w1, #0x2f
0044b2fc  mov      w2, #0x4a
0044b300  bl       #0xc48800  ; <__strrchr_chk>
0044b304  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b308  adrp     x22, #0x147000
0044b30c  add      x22, x22, #0x4f5  ; "[%s:%d] pad input to 4k size.
"
0044b310  adrp     x0, #0x177000
0044b314  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044b318  mov      w1, #2
0044b31c  mov      x2, x22
0044b320  mov      x3, x21
0044b324  mov      w4, #0x514
0044b328  bl       #0x484908
0044b32c  adrp     x21, #0x151000
0044b330  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b334  ldur     q0, [x22, #0xf]
0044b338  mov      x0, x21
0044b33c  ldr      q1, [x22]
0044b340  mov      w1, #0x2f
0044b344  mov      w2, #0x4a
0044b348  ldr      x19, [x26]
0044b34c  stur     q0, [x27, #0xf]
0044b350  str      q1, [x27]
0044b354  strb     wzr, [sp, #0x34d]
0044b358  bl       #0xc48800  ; <__strrchr_chk>
0044b35c  cbz      x0, #0x44b378
0044b360  adrp     x0, #0x151000
0044b364  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b368  mov      w1, #0x2f
0044b36c  mov      w2, #0x4a
0044b370  bl       #0xc48800  ; <__strrchr_chk>
0044b374  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b378  adrp     x1, #0x177000
0044b37c  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044b380  add      x2, sp, #0x330
0044b384  mov      w0, #2
0044b388  mov      x3, x21
0044b38c  mov      w4, #0x514
0044b390  blr      x19
0044b394  adrp     x1, #0x171000
0044b398  add      x1, x1, #0xa9e  ; "yuv2rgb_output.dat"
0044b39c  add      x8, sp, #0x118
0044b3a0  mov      x0, x20
0044b3a4  ldr      w21, [x28, #0x310]  ; =0x111310
0044b3a8  bl       #0x4445b0
0044b3ac  ldr      x9, [x28, #0x1f8]  ; =0x1111f8
0044b3b0  ldp      x12, x8, [x9, #0x10]
0044b3b4  ldr      x22, [x9, #0x30]  ; =0x189030
0044b3b8  cmp      x12, x8
0044b3bc  b.eq     #0x44b3dc
0044b3c0  sub      x9, x8, x12
0044b3c4  sub      x9, x9, #8
0044b3c8  cmp      x9, #0x38
0044b3cc  b.hs     #0x44b3e4
0044b3d0  mov      w23, #1
0044b3d4  mov      x9, x12
0044b3d8  b        #0x44b444
0044b3dc  mov      w23, #1
0044b3e0  b        #0x44b454
0044b3e4  lsr      x9, x9, #3
0044b3e8  add      x10, x9, #1  ; "rray) const"
0044b3ec  and      x11, x10, #0x3ffffffffffffff8
0044b3f0  movi     v0.4s, #1
0044b3f4  mov      x13, x11
0044b3f8  movi     v1.4s, #1
0044b3fc  add      x9, x12, x11, lsl #3
0044b400  add      x12, x12, #0x20
0044b404  ldp      q3, q2, [x12, #-0x20]
0044b408  subs     x13, x13, #8
0044b40c  ldp      q5, q4, [x12], #0x40
0044b410  uzp1     v2.4s, v3.4s, v2.4s
0044b414  uzp1     v3.4s, v5.4s, v4.4s
0044b418  mul      v0.4s, v0.4s, v2.4s
0044b41c  mul      v1.4s, v1.4s, v3.4s
0044b420  b.ne     #0x44b404
0044b424  mul      v0.4s, v1.4s, v0.4s
0044b428  cmp      x10, x11
0044b42c  ext      v1.16b, v0.16b, v0.16b, #8
0044b430  mul      v0.2s, v0.2s, v1.2s
0044b434  mov      w12, v0.s[1]
0044b438  fmov     w13, s0
0044b43c  mul      w23, w13, w12
0044b440  b.eq     #0x44b454
0044b444  ldr      w10, [x9], #8  ; =0x189008
0044b448  cmp      x9, x8
0044b44c  mul      w23, w23, w10
0044b450  b.ne     #0x44b444
0044b454  adrp     x1, #0x147000
0044b458  add      x1, x1, #0x4c8  ; "binary"
0044b45c  add      x0, sp, #0x100
0044b460  bl       #0x43ef0c
0044b464  add      x1, sp, #0x118
0044b468  add      x4, sp, #0x100
0044b46c  mov      w0, w21
0044b470  mov      x2, x22
0044b474  mov      w3, w23
0044b478  bl       #0x43b0c4
0044b47c  ldrb     w8, [sp, #0x100]
0044b480  tbz      w8, #0, #0x44b48c
0044b484  ldr      x0, [sp, #0x110]
0044b488  bl       #0xc48850  ; <_ZdlPv>
0044b48c  ldrb     w8, [sp, #0x118]
0044b490  tbz      w8, #0, #0x44b49c
0044b494  ldr      x0, [sp, #0x128]
0044b498  bl       #0xc48850  ; <_ZdlPv>
0044b49c  ldr      x8, [x28, #0x1f8]  ; =0x1111f8
0044b4a0  add      x0, sp, #0x2d0
0044b4a4  mov      w1, #0xc00
0044b4a8  mov      w2, #0x1000
0044b4ac  mov      w3, #0x10
0044b4b0  mov      x5, xzr
0044b4b4  ldr      x4, [x8, #0x30]
0044b4b8  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
0044b4bc  ldr      w21, [x28, #0x310]  ; =0x111310
0044b4c0  adrp     x1, #0x114000
0044b4c4  add      x1, x1, #0x8d1  ; "input_yuv2rgb.png"
0044b4c8  add      x8, sp, #0xe8
0044b4cc  mov      x0, x20
0044b4d0  bl       #0x4445b0
0044b4d4  add      x0, sp, #0x270
0044b4d8  add      x1, sp, #0x2d0
0044b4dc  bl       #0xc48bf0  ; <_ZN2cv3MatC1ERKS0_>
0044b4e0  add      x1, sp, #0xe8
0044b4e4  add      x2, sp, #0x270
0044b4e8  mov      w0, w21
0044b4ec  mov      w3, wzr
0044b4f0  mov      w4, wzr
0044b4f4  bl       #0x43b3a8
0044b4f8  add      x0, sp, #0x270
0044b4fc  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044b500  ldrb     w8, [sp, #0xe8]
0044b504  tbz      w8, #0, #0x44b510
0044b508  ldr      x0, [sp, #0xf8]
0044b50c  bl       #0xc48850  ; <_ZdlPv>
0044b510  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044b514  mov      x21, x0
0044b518  ldr      w22, [x28, #0x310]  ; =0x111310
0044b51c  adrp     x1, #0x139000
0044b520  add      x1, x1, #0x672  ; "resize1_input.dat"
0044b524  add      x8, sp, #0xd0
0044b528  mov      x0, x20
0044b52c  bl       #0x4445b0
0044b530  ldr      x9, [x28, #0x1f8]  ; =0x1111f8
0044b534  ldp      x12, x8, [x9, #0x10]
0044b538  ldr      x23, [x9, #0x30]  ; =0x189030
0044b53c  cmp      x12, x8
0044b540  b.eq     #0x44b560
0044b544  sub      x9, x8, x12
0044b548  sub      x9, x9, #8
0044b54c  cmp      x9, #0x38
0044b550  b.hs     #0x44b568
0044b554  mov      w24, #1
0044b558  mov      x9, x12
0044b55c  b        #0x44b5c8
0044b560  mov      w24, #1
0044b564  b        #0x44b5d8
0044b568  lsr      x9, x9, #3
0044b56c  add      x10, x9, #1  ; "rray) const"
0044b570  and      x11, x10, #0x3ffffffffffffff8
0044b574  movi     v0.4s, #1
0044b578  mov      x13, x11
0044b57c  movi     v1.4s, #1
0044b580  add      x9, x12, x11, lsl #3
0044b584  add      x12, x12, #0x20
0044b588  ldp      q3, q2, [x12, #-0x20]
0044b58c  subs     x13, x13, #8
0044b590  ldp      q5, q4, [x12], #0x40
0044b594  uzp1     v2.4s, v3.4s, v2.4s
0044b598  uzp1     v3.4s, v5.4s, v4.4s
0044b59c  mul      v0.4s, v0.4s, v2.4s
0044b5a0  mul      v1.4s, v1.4s, v3.4s
0044b5a4  b.ne     #0x44b588
0044b5a8  mul      v0.4s, v1.4s, v0.4s
0044b5ac  cmp      x10, x11
0044b5b0  ext      v1.16b, v0.16b, v0.16b, #8
0044b5b4  mul      v0.2s, v0.2s, v1.2s
0044b5b8  mov      w12, v0.s[1]
0044b5bc  fmov     w13, s0
0044b5c0  mul      w24, w13, w12
0044b5c4  b.eq     #0x44b5d8
0044b5c8  ldr      w10, [x9], #8  ; =0x189008
0044b5cc  cmp      x9, x8
0044b5d0  mul      w24, w24, w10
0044b5d4  b.ne     #0x44b5c8
0044b5d8  adrp     x1, #0x147000
0044b5dc  add      x1, x1, #0x4c8  ; "binary"
0044b5e0  add      x0, sp, #0xb8
0044b5e4  bl       #0x43ef0c
0044b5e8  add      x1, sp, #0xd0
0044b5ec  add      x4, sp, #0xb8
0044b5f0  mov      w0, w22
0044b5f4  mov      x2, x23
0044b5f8  mov      w3, w24
0044b5fc  bl       #0x43b0c4
0044b600  ldrb     w8, [sp, #0xb8]
0044b604  tbz      w8, #0, #0x44b610
0044b608  ldr      x0, [sp, #0xc8]
0044b60c  bl       #0xc48850  ; <_ZdlPv>
0044b610  ldrb     w8, [sp, #0xd0]
0044b614  tbz      w8, #0, #0x44b620
0044b618  ldr      x0, [sp, #0xe0]
0044b61c  bl       #0xc48850  ; <_ZdlPv>
0044b620  mov      x0, x28
0044b624  mov      w1, #1
0044b628  bl       #0x443758
0044b62c  mov      w22, w0
0044b630  cbz      w0, #0x44b718
0044b634  adrp     x0, #0x151000
0044b638  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b63c  mov      w1, #0x2f
0044b640  mov      w2, #0x4a
0044b644  bl       #0xc48800  ; <__strrchr_chk>
0044b648  cbz      x0, #0x44b668
0044b64c  adrp     x0, #0x151000
0044b650  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b654  mov      w1, #0x2f
0044b658  mov      w2, #0x4a
0044b65c  bl       #0xc48800  ; <__strrchr_chk>
0044b660  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b664  b        #0x44b670
0044b668  adrp     x3, #0x151000
0044b66c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b670  adrp     x23, #0x154000
0044b674  add      x23, x23, #0x483  ; "[%s:%d] resize1 error %d.
"
0044b678  adrp     x0, #0x177000
0044b67c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044b680  mov      w1, #1
0044b684  mov      x2, x23
0044b688  mov      w4, #0x521
0044b68c  mov      w5, w22
0044b690  bl       #0x484908
0044b694  ldr      q0, [x23]
0044b698  ldur     q1, [x23, #0xb]
0044b69c  str      q0, [x27]
0044b6a0  stur     q1, [x27, #0xb]
0044b6a4  mov      x0, x23
0044b6a8  mov      w1, #0x1b
0044b6ac  bl       #0xc48820  ; <__strlen_chk>
0044b6b0  add      x8, sp, #0x330
0044b6b4  ldr      x19, [x26]
0044b6b8  add      x8, x0, x8
0044b6bc  sturb    wzr, [x8, #-1]
0044b6c0  adrp     x0, #0x151000
0044b6c4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b6c8  mov      w1, #0x2f
0044b6cc  mov      w2, #0x4a
0044b6d0  bl       #0xc48800  ; <__strrchr_chk>
0044b6d4  cbz      x0, #0x44b6f4
0044b6d8  adrp     x0, #0x151000
0044b6dc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b6e0  mov      w1, #0x2f
0044b6e4  mov      w2, #0x4a
0044b6e8  bl       #0xc48800  ; <__strrchr_chk>
0044b6ec  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b6f0  b        #0x44b6fc
0044b6f4  adrp     x3, #0x151000
0044b6f8  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b6fc  adrp     x1, #0x177000
0044b700  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044b704  add      x2, sp, #0x330
0044b708  mov      w0, #1
0044b70c  mov      w4, #0x521
0044b710  mov      w5, w22
0044b714  blr      x19
0044b718  adrp     x0, #0x151000
0044b71c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b720  mov      w1, #0x2f
0044b724  mov      w2, #0x4a
0044b728  bl       #0xc48800  ; <__strrchr_chk>
0044b72c  cbz      x0, #0x44b74c
0044b730  adrp     x0, #0x151000
0044b734  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b738  mov      w1, #0x2f
0044b73c  mov      w2, #0x4a
0044b740  bl       #0xc48800  ; <__strrchr_chk>
0044b744  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b748  b        #0x44b754
0044b74c  adrp     x22, #0x151000
0044b750  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b754  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044b758  sub      x8, x0, x21
0044b75c  scvtf    d0, x8
0044b760  fmul     d0, d0, d8
0044b764  adrp     x23, #0x134000
0044b768  add      x23, x23, #2  ; "[%s:%d] duration of resize 1 is %.3fms.
"
0044b76c  adrp     x0, #0x177000
0044b770  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044b774  mov      w1, #2
0044b778  mov      x2, x23
0044b77c  mov      x3, x22
0044b780  mov      w4, #0x523
0044b784  bl       #0x484908
0044b788  ldp      q0, q1, [x23]
0044b78c  ldur     q2, [x23, #0x19]
0044b790  stp      q0, q1, [x27]
0044b794  stur     q2, [x27, #0x19]
0044b798  mov      x0, x23
0044b79c  mov      w1, #0x29
0044b7a0  bl       #0xc48820  ; <__strlen_chk>
0044b7a4  add      x8, sp, #0x330
0044b7a8  ldr      x19, [x26]
0044b7ac  add      x8, x0, x8
0044b7b0  sturb    wzr, [x8, #-1]
0044b7b4  adrp     x0, #0x151000
0044b7b8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b7bc  mov      w1, #0x2f
0044b7c0  mov      w2, #0x4a
0044b7c4  bl       #0xc48800  ; <__strrchr_chk>
0044b7c8  cbz      x0, #0x44b7e8
0044b7cc  adrp     x0, #0x151000
0044b7d0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b7d4  mov      w1, #0x2f
0044b7d8  mov      w2, #0x4a
0044b7dc  bl       #0xc48800  ; <__strrchr_chk>
0044b7e0  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b7e4  b        #0x44b7f0
0044b7e8  adrp     x22, #0x151000
0044b7ec  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b7f0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044b7f4  sub      x8, x0, x21
0044b7f8  scvtf    d0, x8
0044b7fc  fmul     d0, d0, d8
0044b800  adrp     x1, #0x177000
0044b804  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044b808  add      x2, sp, #0x330
0044b80c  mov      w0, #2
0044b810  mov      x3, x22
0044b814  mov      w4, #0x523
0044b818  blr      x19
0044b81c  adrp     x0, #0x151000
0044b820  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b824  mov      w1, #0x2f
0044b828  mov      w2, #0x4a
0044b82c  bl       #0xc48800  ; <__strrchr_chk>
0044b830  cbz      x0, #0x44b850
0044b834  adrp     x0, #0x151000
0044b838  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b83c  mov      w1, #0x2f
0044b840  mov      w2, #0x4a
0044b844  bl       #0xc48800  ; <__strrchr_chk>
0044b848  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b84c  b        #0x44b858
0044b850  adrp     x3, #0x151000
0044b854  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b858  adrp     x21, #0x14a000
0044b85c  add      x21, x21, #0x2d4  ; "[%s:%d] processing styletrans
"
0044b860  adrp     x0, #0x177000
0044b864  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044b868  mov      w1, #2
0044b86c  mov      x2, x21
0044b870  mov      w4, #0x525
0044b874  bl       #0x484908
0044b878  ldr      q0, [x21]
0044b87c  ldur     q1, [x21, #0xf]
0044b880  str      q0, [x27]
0044b884  stur     q1, [x27, #0xf]
0044b888  mov      x0, x21
0044b88c  mov      w1, #0x1f
0044b890  bl       #0xc48820  ; <__strlen_chk>
0044b894  add      x8, sp, #0x330
0044b898  ldr      x19, [x26]
0044b89c  add      x8, x0, x8
0044b8a0  sturb    wzr, [x8, #-1]
0044b8a4  adrp     x0, #0x151000
0044b8a8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b8ac  mov      w1, #0x2f
0044b8b0  mov      w2, #0x4a
0044b8b4  bl       #0xc48800  ; <__strrchr_chk>
0044b8b8  cbz      x0, #0x44b8d8
0044b8bc  adrp     x0, #0x151000
0044b8c0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b8c4  mov      w1, #0x2f
0044b8c8  mov      w2, #0x4a
0044b8cc  bl       #0xc48800  ; <__strrchr_chk>
0044b8d0  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b8d4  b        #0x44b8e0
0044b8d8  adrp     x3, #0x151000
0044b8dc  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b8e0  adrp     x1, #0x177000
0044b8e4  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044b8e8  add      x2, sp, #0x330
0044b8ec  mov      w0, #2
0044b8f0  mov      w4, #0x525
0044b8f4  blr      x19
0044b8f8  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044b8fc  mov      x21, x0
0044b900  mov      x0, x28
0044b904  bl       #0x444694
0044b908  mov      w22, w0
0044b90c  cbz      w0, #0x44b944
0044b910  adrp     x0, #0x151000
0044b914  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b918  mov      w1, #0x2f
0044b91c  mov      w2, #0x4a
0044b920  bl       #0xc48800  ; <__strrchr_chk>
0044b924  cbz      x0, #0x44b978
0044b928  adrp     x0, #0x151000
0044b92c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b930  mov      w1, #0x2f
0044b934  mov      w2, #0x4a
0044b938  bl       #0xc48800  ; <__strrchr_chk>
0044b93c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b940  b        #0x44b980
0044b944  adrp     x0, #0x151000
0044b948  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b94c  mov      w1, #0x2f
0044b950  mov      w2, #0x4a
0044b954  bl       #0xc48800  ; <__strrchr_chk>
0044b958  cbz      x0, #0x44ba2c
0044b95c  adrp     x0, #0x151000
0044b960  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b964  mov      w1, #0x2f
0044b968  mov      w2, #0x4a
0044b96c  bl       #0xc48800  ; <__strrchr_chk>
0044b970  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044b974  b        #0x44ba34
0044b978  adrp     x3, #0x151000
0044b97c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b980  adrp     x19, #0x114000
0044b984  add      x19, x19, #0x8e3  ; "[%s:%d] styletrans error %d.
"
0044b988  adrp     x0, #0x177000
0044b98c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044b990  mov      w1, #1
0044b994  mov      x2, x19
0044b998  mov      w4, #0x52a
0044b99c  mov      w5, w22
0044b9a0  bl       #0x484908
0044b9a4  ldr      q0, [x19]
0044b9a8  ldur     q1, [x19, #0xe]
0044b9ac  str      q0, [x27]
0044b9b0  stur     q1, [x27, #0xe]
0044b9b4  mov      x0, x19
0044b9b8  mov      w1, #0x1e
0044b9bc  bl       #0xc48820  ; <__strlen_chk>
0044b9c0  add      x8, sp, #0x330
0044b9c4  ldr      x19, [x26]
0044b9c8  add      x8, x0, x8
0044b9cc  sturb    wzr, [x8, #-1]
0044b9d0  adrp     x0, #0x151000
0044b9d4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b9d8  mov      w1, #0x2f
0044b9dc  mov      w2, #0x4a
0044b9e0  bl       #0xc48800  ; <__strrchr_chk>
0044b9e4  cbz      x0, #0x44ba04
0044b9e8  adrp     x0, #0x151000
0044b9ec  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044b9f0  mov      w1, #0x2f
0044b9f4  mov      w2, #0x4a
0044b9f8  bl       #0xc48800  ; <__strrchr_chk>
0044b9fc  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044ba00  b        #0x44ba0c
0044ba04  adrp     x3, #0x151000
0044ba08  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ba0c  adrp     x1, #0x177000
0044ba10  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044ba14  add      x2, sp, #0x330
0044ba18  mov      w0, #1
0044ba1c  mov      w4, #0x52a
0044ba20  mov      w5, w22
0044ba24  blr      x19
0044ba28  b        #0x44bf0c
0044ba2c  adrp     x22, #0x151000
0044ba30  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ba34  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044ba38  sub      x8, x0, x21
0044ba3c  scvtf    d0, x8
0044ba40  fmul     d0, d0, d8
0044ba44  adrp     x23, #0x177000
0044ba48  add      x23, x23, #0x353  ; "[%s:%d] duration of styletrans is %.3fms.
"
0044ba4c  adrp     x0, #0x177000
0044ba50  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044ba54  mov      w1, #2
0044ba58  mov      x2, x23
0044ba5c  mov      x3, x22
0044ba60  mov      w4, #0x52d
0044ba64  bl       #0x484908
0044ba68  ldp      q0, q1, [x23]
0044ba6c  ldur     q2, [x23, #0x1b]
0044ba70  stp      q0, q1, [x27]
0044ba74  stur     q2, [x27, #0x1b]
0044ba78  mov      x0, x23
0044ba7c  mov      w1, #0x2b
0044ba80  bl       #0xc48820  ; <__strlen_chk>
0044ba84  add      x8, sp, #0x330
0044ba88  ldr      x19, [x26]
0044ba8c  add      x8, x0, x8
0044ba90  sturb    wzr, [x8, #-1]
0044ba94  adrp     x0, #0x151000
0044ba98  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044ba9c  mov      w1, #0x2f
0044baa0  mov      w2, #0x4a
0044baa4  bl       #0xc48800  ; <__strrchr_chk>
0044baa8  cbz      x0, #0x44bac8
0044baac  adrp     x0, #0x151000
0044bab0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bab4  mov      w1, #0x2f
0044bab8  mov      w2, #0x4a
0044babc  bl       #0xc48800  ; <__strrchr_chk>
0044bac0  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044bac4  b        #0x44bad0
0044bac8  adrp     x22, #0x151000
0044bacc  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bad0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044bad4  sub      x8, x0, x21
0044bad8  scvtf    d0, x8
0044badc  fmul     d0, d0, d8
0044bae0  adrp     x1, #0x177000
0044bae4  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044bae8  add      x2, sp, #0x330
0044baec  mov      w0, #2
0044baf0  mov      x3, x22
0044baf4  mov      w4, #0x52d
0044baf8  blr      x19
0044bafc  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044bb00  mov      x21, x0
0044bb04  mov      x0, x28
0044bb08  mov      w1, #2
0044bb0c  bl       #0x443758
0044bb10  mov      w22, w0
0044bb14  cbz      w0, #0x44bbfc
0044bb18  adrp     x0, #0x151000
0044bb1c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bb20  mov      w1, #0x2f
0044bb24  mov      w2, #0x4a
0044bb28  bl       #0xc48800  ; <__strrchr_chk>
0044bb2c  cbz      x0, #0x44bb4c
0044bb30  adrp     x0, #0x151000
0044bb34  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bb38  mov      w1, #0x2f
0044bb3c  mov      w2, #0x4a
0044bb40  bl       #0xc48800  ; <__strrchr_chk>
0044bb44  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044bb48  b        #0x44bb54
0044bb4c  adrp     x3, #0x151000
0044bb50  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bb54  adrp     x23, #0x12f000
0044bb58  add      x23, x23, #0x3e6  ; "[%s:%d] resize2 error %d.
"
0044bb5c  adrp     x0, #0x177000
0044bb60  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044bb64  mov      w1, #1
0044bb68  mov      x2, x23
0044bb6c  mov      w4, #0x534
0044bb70  mov      w5, w22
0044bb74  bl       #0x484908
0044bb78  ldr      q0, [x23]
0044bb7c  ldur     q1, [x23, #0xb]
0044bb80  str      q0, [x27]
0044bb84  stur     q1, [x27, #0xb]
0044bb88  mov      x0, x23
0044bb8c  mov      w1, #0x1b
0044bb90  bl       #0xc48820  ; <__strlen_chk>
0044bb94  add      x8, sp, #0x330
0044bb98  ldr      x19, [x26]
0044bb9c  add      x8, x0, x8
0044bba0  sturb    wzr, [x8, #-1]
0044bba4  adrp     x0, #0x151000
0044bba8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bbac  mov      w1, #0x2f
0044bbb0  mov      w2, #0x4a
0044bbb4  bl       #0xc48800  ; <__strrchr_chk>
0044bbb8  cbz      x0, #0x44bbd8
0044bbbc  adrp     x0, #0x151000
0044bbc0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bbc4  mov      w1, #0x2f
0044bbc8  mov      w2, #0x4a
0044bbcc  bl       #0xc48800  ; <__strrchr_chk>
0044bbd0  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044bbd4  b        #0x44bbe0
0044bbd8  adrp     x3, #0x151000
0044bbdc  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bbe0  adrp     x1, #0x177000
0044bbe4  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044bbe8  add      x2, sp, #0x330
0044bbec  mov      w0, #1
0044bbf0  mov      w4, #0x534
0044bbf4  mov      w5, w22
0044bbf8  blr      x19
0044bbfc  adrp     x0, #0x151000
0044bc00  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bc04  mov      w1, #0x2f
0044bc08  mov      w2, #0x4a
0044bc0c  bl       #0xc48800  ; <__strrchr_chk>
0044bc10  cbz      x0, #0x44bc30
0044bc14  adrp     x0, #0x151000
0044bc18  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bc1c  mov      w1, #0x2f
0044bc20  mov      w2, #0x4a
0044bc24  bl       #0xc48800  ; <__strrchr_chk>
0044bc28  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044bc2c  b        #0x44bc38
0044bc30  adrp     x22, #0x151000
0044bc34  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bc38  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044bc3c  sub      x8, x0, x21
0044bc40  scvtf    d0, x8
0044bc44  fmul     d0, d0, d8
0044bc48  adrp     x23, #0x167000
0044bc4c  add      x23, x23, #0x949  ; "[%s:%d] duration of resize 2 is %.3fms.
"
0044bc50  adrp     x0, #0x177000
0044bc54  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044bc58  mov      w1, #2
0044bc5c  mov      x2, x23
0044bc60  mov      x3, x22
0044bc64  mov      w4, #0x536
0044bc68  bl       #0x484908
0044bc6c  ldp      q0, q1, [x23]
0044bc70  ldur     q2, [x23, #0x19]
0044bc74  stp      q0, q1, [x27]
0044bc78  stur     q2, [x27, #0x19]
0044bc7c  mov      x0, x23
0044bc80  mov      w1, #0x29
0044bc84  bl       #0xc48820  ; <__strlen_chk>
0044bc88  add      x8, sp, #0x330
0044bc8c  ldr      x19, [x26]
0044bc90  add      x8, x0, x8
0044bc94  sturb    wzr, [x8, #-1]
0044bc98  adrp     x0, #0x151000
0044bc9c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bca0  mov      w1, #0x2f
0044bca4  mov      w2, #0x4a
0044bca8  bl       #0xc48800  ; <__strrchr_chk>
0044bcac  cbz      x0, #0x44bccc
0044bcb0  adrp     x0, #0x151000
0044bcb4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bcb8  mov      w1, #0x2f
0044bcbc  mov      w2, #0x4a
0044bcc0  bl       #0xc48800  ; <__strrchr_chk>
0044bcc4  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044bcc8  b        #0x44bcd4
0044bccc  adrp     x22, #0x151000
0044bcd0  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bcd4  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044bcd8  sub      x8, x0, x21
0044bcdc  scvtf    d0, x8
0044bce0  fmul     d0, d0, d8
0044bce4  adrp     x1, #0x177000
0044bce8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044bcec  add      x2, sp, #0x330
0044bcf0  mov      w0, #2
0044bcf4  mov      x3, x22
0044bcf8  mov      w4, #0x536
0044bcfc  blr      x19
0044bd00  adrp     x0, #0x151000
0044bd04  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bd08  mov      w1, #0x2f
0044bd0c  mov      w2, #0x4a
0044bd10  bl       #0xc48800  ; <__strrchr_chk>
0044bd14  cbz      x0, #0x44bd34
0044bd18  adrp     x0, #0x151000
0044bd1c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bd20  mov      w1, #0x2f
0044bd24  mov      w2, #0x4a
0044bd28  bl       #0xc48800  ; <__strrchr_chk>
0044bd2c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044bd30  b        #0x44bd3c
0044bd34  adrp     x3, #0x151000
0044bd38  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bd3c  adrp     x21, #0x17c000
0044bd40  add      x21, x21, #0xaae  ; "[%s:%d] processing colorfix
"
0044bd44  adrp     x0, #0x177000
0044bd48  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044bd4c  mov      w1, #2
0044bd50  mov      x2, x21
0044bd54  mov      w4, #0x538
0044bd58  bl       #0x484908
0044bd5c  ldr      q0, [x21]
0044bd60  ldur     q1, [x21, #0xd]
0044bd64  str      q0, [x27]
0044bd68  stur     q1, [x27, #0xd]
0044bd6c  mov      x0, x21
0044bd70  mov      w1, #0x1d
0044bd74  bl       #0xc48820  ; <__strlen_chk>
0044bd78  add      x8, sp, #0x330
0044bd7c  ldr      x19, [x26]
0044bd80  add      x8, x0, x8
0044bd84  sturb    wzr, [x8, #-1]
0044bd88  adrp     x0, #0x151000
0044bd8c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bd90  mov      w1, #0x2f
0044bd94  mov      w2, #0x4a
0044bd98  bl       #0xc48800  ; <__strrchr_chk>
0044bd9c  cbz      x0, #0x44bdbc
0044bda0  adrp     x0, #0x151000
0044bda4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bda8  mov      w1, #0x2f
0044bdac  mov      w2, #0x4a
0044bdb0  bl       #0xc48800  ; <__strrchr_chk>
0044bdb4  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044bdb8  b        #0x44bdc4
0044bdbc  adrp     x3, #0x151000
0044bdc0  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bdc4  adrp     x1, #0x177000
0044bdc8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044bdcc  add      x2, sp, #0x330
0044bdd0  mov      w0, #2
0044bdd4  mov      w4, #0x538
0044bdd8  blr      x19
0044bddc  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044bde0  mov      x21, x0
0044bde4  mov      x0, x28
0044bde8  bl       #0x44788c
0044bdec  mov      w22, w0
0044bdf0  cbz      w0, #0x44be28
0044bdf4  adrp     x0, #0x151000
0044bdf8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bdfc  mov      w1, #0x2f
0044be00  mov      w2, #0x4a
0044be04  bl       #0xc48800  ; <__strrchr_chk>
0044be08  cbz      x0, #0x44be5c
0044be0c  adrp     x0, #0x151000
0044be10  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044be14  mov      w1, #0x2f
0044be18  mov      w2, #0x4a
0044be1c  bl       #0xc48800  ; <__strrchr_chk>
0044be20  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044be24  b        #0x44be64
0044be28  adrp     x0, #0x151000
0044be2c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044be30  mov      w1, #0x2f
0044be34  mov      w2, #0x4a
0044be38  bl       #0xc48800  ; <__strrchr_chk>
0044be3c  cbz      x0, #0x44bf24
0044be40  adrp     x0, #0x151000
0044be44  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044be48  mov      w1, #0x2f
0044be4c  mov      w2, #0x4a
0044be50  bl       #0xc48800  ; <__strrchr_chk>
0044be54  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044be58  b        #0x44bf2c
0044be5c  adrp     x3, #0x151000
0044be60  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044be64  adrp     x19, #0x163000
0044be68  add      x19, x19, #0x6f8  ; "[%s:%d] colorfix error %d.
"
0044be6c  adrp     x0, #0x177000
0044be70  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044be74  mov      w1, #1
0044be78  mov      x2, x19
0044be7c  mov      w4, #0x53d
0044be80  mov      w5, w22
0044be84  bl       #0x484908
0044be88  ldr      q0, [x19]
0044be8c  ldur     q1, [x19, #0xc]
0044be90  str      q0, [x27]
0044be94  stur     q1, [x27, #0xc]
0044be98  mov      x0, x19
0044be9c  mov      w1, #0x1c
0044bea0  bl       #0xc48820  ; <__strlen_chk>
0044bea4  add      x8, sp, #0x330
0044bea8  ldr      x19, [x26]
0044beac  add      x8, x0, x8
0044beb0  sturb    wzr, [x8, #-1]
0044beb4  adrp     x0, #0x151000
0044beb8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bebc  mov      w1, #0x2f
0044bec0  mov      w2, #0x4a
0044bec4  bl       #0xc48800  ; <__strrchr_chk>
0044bec8  cbz      x0, #0x44bee8
0044becc  adrp     x0, #0x151000
0044bed0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bed4  mov      w1, #0x2f
0044bed8  mov      w2, #0x4a
0044bedc  bl       #0xc48800  ; <__strrchr_chk>
0044bee0  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044bee4  b        #0x44bef0
0044bee8  adrp     x3, #0x151000
0044beec  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bef0  adrp     x1, #0x177000
0044bef4  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044bef8  add      x2, sp, #0x330
0044befc  mov      w0, #1
0044bf00  mov      w4, #0x53d
0044bf04  mov      w5, w22
0044bf08  blr      x19
0044bf0c  mov      w8, #0x6523
0044bf10  movk     w8, #0x11, lsl #16
0044bf14  add      w19, w8, #5
0044bf18  add      x0, sp, #0x2d0
0044bf1c  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044bf20  b        #0x449870
0044bf24  adrp     x22, #0x151000
0044bf28  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bf2c  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044bf30  sub      x8, x0, x21
0044bf34  scvtf    d0, x8
0044bf38  fmul     d0, d0, d8
0044bf3c  adrp     x23, #0x14a000
0044bf40  add      x23, x23, #0x2f3  ; "[%s:%d] duration of colorfix is %.3fms.
"
0044bf44  adrp     x0, #0x177000
0044bf48  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044bf4c  mov      w1, #2
0044bf50  mov      x2, x23
0044bf54  mov      x3, x22
0044bf58  mov      w4, #0x540
0044bf5c  bl       #0x484908
0044bf60  ldp      q0, q1, [x23]
0044bf64  ldur     q2, [x23, #0x19]
0044bf68  stp      q0, q1, [x27]
0044bf6c  stur     q2, [x27, #0x19]
0044bf70  mov      x0, x23
0044bf74  mov      w1, #0x29
0044bf78  bl       #0xc48820  ; <__strlen_chk>
0044bf7c  add      x8, sp, #0x330
0044bf80  ldr      x19, [x26]
0044bf84  add      x8, x0, x8
0044bf88  sturb    wzr, [x8, #-1]
0044bf8c  adrp     x0, #0x151000
0044bf90  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bf94  mov      w1, #0x2f
0044bf98  mov      w2, #0x4a
0044bf9c  bl       #0xc48800  ; <__strrchr_chk>
0044bfa0  cbz      x0, #0x44bfc0
0044bfa4  adrp     x0, #0x151000
0044bfa8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bfac  mov      w1, #0x2f
0044bfb0  mov      w2, #0x4a
0044bfb4  bl       #0xc48800  ; <__strrchr_chk>
0044bfb8  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044bfbc  b        #0x44bfc8
0044bfc0  adrp     x22, #0x151000
0044bfc4  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044bfc8  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044bfcc  sub      x8, x0, x21
0044bfd0  scvtf    d0, x8
0044bfd4  fmul     d0, d0, d8
0044bfd8  adrp     x1, #0x177000
0044bfdc  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044bfe0  add      x2, sp, #0x330
0044bfe4  mov      w0, #2
0044bfe8  mov      x3, x22
0044bfec  mov      w4, #0x540
0044bff0  blr      x19
0044bff4  ldrb     w8, [x28, #0x362]  ; =0x111362
0044bff8  cbz      w8, #0x44c1fc
0044bffc  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c000  mov      x21, x0
0044c004  mov      x0, x28
0044c008  bl       #0x443610
0044c00c  adrp     x0, #0x151000
0044c010  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c014  mov      w1, #0x2f
0044c018  mov      w2, #0x4a
0044c01c  bl       #0xc48800  ; <__strrchr_chk>
0044c020  cbz      x0, #0x44c040
0044c024  adrp     x0, #0x151000
0044c028  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c02c  mov      w1, #0x2f
0044c030  mov      w2, #0x4a
0044c034  bl       #0xc48800  ; <__strrchr_chk>
0044c038  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c03c  b        #0x44c048
0044c040  adrp     x22, #0x151000
0044c044  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c048  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c04c  sub      x8, x0, x21
0044c050  scvtf    d0, x8
0044c054  fmul     d0, d0, d8
0044c058  adrp     x23, #0x151000
0044c05c  add      x23, x23, #0x8a5  ; "[%s:%d] duration of crop_output is %.3fms.
"
0044c060  adrp     x0, #0x177000
0044c064  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044c068  mov      w1, #2
0044c06c  mov      x2, x23
0044c070  mov      x3, x22
0044c074  mov      w4, #0x547
0044c078  bl       #0x484908
0044c07c  ldp      q0, q1, [x23]
0044c080  ldur     q2, [x23, #0x1c]
0044c084  stp      q0, q1, [x27]
0044c088  stur     q2, [x27, #0x1c]
0044c08c  mov      x0, x23
0044c090  mov      w1, #0x2c
0044c094  bl       #0xc48820  ; <__strlen_chk>
0044c098  add      x8, sp, #0x330
0044c09c  ldr      x19, [x26]
0044c0a0  add      x8, x0, x8
0044c0a4  sturb    wzr, [x8, #-1]
0044c0a8  adrp     x0, #0x151000
0044c0ac  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c0b0  mov      w1, #0x2f
0044c0b4  mov      w2, #0x4a
0044c0b8  bl       #0xc48800  ; <__strrchr_chk>
0044c0bc  cbz      x0, #0x44c0dc
0044c0c0  adrp     x0, #0x151000
0044c0c4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c0c8  mov      w1, #0x2f
0044c0cc  mov      w2, #0x4a
0044c0d0  bl       #0xc48800  ; <__strrchr_chk>
0044c0d4  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c0d8  b        #0x44c0e4
0044c0dc  adrp     x22, #0x151000
0044c0e0  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c0e4  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c0e8  sub      x8, x0, x21
0044c0ec  scvtf    d0, x8
0044c0f0  fmul     d0, d0, d8
0044c0f4  adrp     x1, #0x177000
0044c0f8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044c0fc  add      x2, sp, #0x330
0044c100  mov      w0, #2
0044c104  mov      x3, x22
0044c108  mov      w4, #0x547
0044c10c  blr      x19
0044c110  adrp     x0, #0x151000
0044c114  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c118  mov      w1, #0x2f
0044c11c  mov      w2, #0x4a
0044c120  bl       #0xc48800  ; <__strrchr_chk>
0044c124  cbz      x0, #0x44c144
0044c128  adrp     x0, #0x151000
0044c12c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c130  mov      w1, #0x2f
0044c134  mov      w2, #0x4a
0044c138  bl       #0xc48800  ; <__strrchr_chk>
0044c13c  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c140  b        #0x44c14c
0044c144  adrp     x3, #0x151000
0044c148  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c14c  ldr      w5, [x28, #0x33c]  ; =0x11133c
0044c150  ldr      w6, [x28, #0x340]  ; =0x111340
0044c154  adrp     x21, #0x14a000
0044c158  add      x21, x21, #0x31c  ; "[%s:%d] crop output to original %d %d size.
"
0044c15c  adrp     x0, #0x177000
0044c160  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044c164  mov      w1, #2
0044c168  mov      x2, x21
0044c16c  mov      w4, #0x548
0044c170  bl       #0x484908
0044c174  ldp      q0, q1, [x21]
0044c178  ldur     q2, [x21, #0x1d]
0044c17c  stp      q0, q1, [x27]
0044c180  stur     q2, [x27, #0x1d]
0044c184  mov      x0, x21
0044c188  mov      w1, #0x2d
0044c18c  bl       #0xc48820  ; <__strlen_chk>
0044c190  add      x8, sp, #0x330
0044c194  ldr      x19, [x26]
0044c198  add      x8, x0, x8
0044c19c  sturb    wzr, [x8, #-1]
0044c1a0  adrp     x0, #0x151000
0044c1a4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c1a8  mov      w1, #0x2f
0044c1ac  mov      w2, #0x4a
0044c1b0  bl       #0xc48800  ; <__strrchr_chk>
0044c1b4  cbz      x0, #0x44c1d4
0044c1b8  adrp     x0, #0x151000
0044c1bc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c1c0  mov      w1, #0x2f
0044c1c4  mov      w2, #0x4a
0044c1c8  bl       #0xc48800  ; <__strrchr_chk>
0044c1cc  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c1d0  b        #0x44c1dc
0044c1d4  adrp     x3, #0x151000
0044c1d8  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c1dc  ldr      w5, [x28, #0x33c]  ; =0x11133c
0044c1e0  ldr      w6, [x28, #0x340]  ; =0x111340
0044c1e4  adrp     x1, #0x177000
0044c1e8  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044c1ec  add      x2, sp, #0x330
0044c1f0  mov      w0, #2
0044c1f4  mov      w4, #0x548
0044c1f8  blr      x19
0044c1fc  adrp     x0, #0x17c000
0044c200  add      x0, x0, #0xacb  ; "persist.vendor.camera.styletrans.exif2img.enable"
0044c204  sub      x1, x29, #0x60
0044c208  bl       #0xc48ad0  ; <__system_property_get>
0044c20c  ldur     w8, [x29, #-0x60]
0044c210  ldurb    w9, [x29, #-0x5c]
0044c214  eor      w8, w8, w25
0044c218  orr      w8, w8, w9
0044c21c  cbnz     w8, #0x44c228
0044c220  mov      x0, x28
0044c224  bl       #0x4490d0
0044c228  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c22c  mov      x21, x0
0044c230  ldr      w22, [x28, #0x310]  ; =0x111310
0044c234  adrp     x1, #0x171000
0044c238  add      x1, x1, #0xab1  ; "rgb2yuv_input.dat"
0044c23c  add      x8, sp, #0xa0
0044c240  mov      x0, x20
0044c244  bl       #0x4445b0
0044c248  ldr      x8, [x28, #0x248]  ; =0x111248
0044c24c  ldp      x13, x9, [x8, #0x10]
0044c250  cmp      x13, x9
0044c254  b.eq     #0x44c274
0044c258  sub      x10, x9, x13
0044c25c  sub      x10, x10, #8
0044c260  cmp      x10, #0x38
0044c264  b.hs     #0x44c27c
0044c268  mov      w23, #1
0044c26c  mov      x10, x13
0044c270  b        #0x44c2e8
0044c274  mov      w23, #1
0044c278  b        #0x44c2f8
0044c27c  lsr      x10, x10, #3
0044c280  add      x11, x10, #1
0044c284  and      x12, x11, #0x3ffffffffffffff8
0044c288  movi     v0.4s, #1
0044c28c  mov      x14, x12
0044c290  movi     v1.4s, #1
0044c294  add      x10, x13, x12, lsl #3
0044c298  add      x13, x13, #0x20
0044c29c  ldp      q3, q2, [x13, #-0x20]
0044c2a0  subs     x14, x14, #8
0044c2a4  ldp      q5, q4, [x13], #0x40
0044c2a8  uzp1     v2.4s, v3.4s, v2.4s
0044c2ac  uzp1     v3.4s, v5.4s, v4.4s
0044c2b0  mul      v0.4s, v0.4s, v2.4s
0044c2b4  mul      v1.4s, v1.4s, v3.4s
0044c2b8  b.ne     #0x44c29c
0044c2bc  mul      v0.4s, v1.4s, v0.4s
0044c2c0  adrp     x26, #0xc78000
0044c2c4  add      x27, sp, #0x330
0044c2c8  cmp      x11, x12
0044c2cc  ldr      x26, [x26, #0x2f0]  ; =0xc782f0
0044c2d0  ext      v1.16b, v0.16b, v0.16b, #8
0044c2d4  mul      v0.2s, v0.2s, v1.2s
0044c2d8  mov      w13, v0.s[1]
0044c2dc  fmov     w14, s0
0044c2e0  mul      w23, w14, w13
0044c2e4  b.eq     #0x44c2f8
0044c2e8  ldr      w11, [x10], #8
0044c2ec  cmp      x10, x9
0044c2f0  mul      w23, w23, w11
0044c2f4  b.ne     #0x44c2e8
0044c2f8  adrp     x1, #0x147000
0044c2fc  add      x1, x1, #0x4c8  ; "binary"
0044c300  add      x0, sp, #0x88
0044c304  ldr      x24, [x8, #0x30]
0044c308  bl       #0x43ef0c
0044c30c  add      x1, sp, #0xa0
0044c310  add      x4, sp, #0x88
0044c314  mov      w0, w22
0044c318  mov      x2, x24
0044c31c  mov      w3, w23
0044c320  bl       #0x43b0c4
0044c324  ldrb     w8, [sp, #0x88]
0044c328  tbz      w8, #0, #0x44c334
0044c32c  ldr      x0, [sp, #0x98]
0044c330  bl       #0xc48850  ; <_ZdlPv>
0044c334  ldrb     w8, [sp, #0xa0]
0044c338  tbz      w8, #0, #0x44c344
0044c33c  ldr      x0, [sp, #0xb0]
0044c340  bl       #0xc48850  ; <_ZdlPv>
0044c344  mov      x0, x28
0044c348  bl       #0x442934
0044c34c  mov      w22, w0
0044c350  cbz      w0, #0x44c43c
0044c354  adrp     x0, #0x151000
0044c358  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c35c  mov      w1, #0x2f
0044c360  mov      w2, #0x4a
0044c364  bl       #0xc48800  ; <__strrchr_chk>
0044c368  cbz      x0, #0x44c388
0044c36c  adrp     x0, #0x151000
0044c370  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c374  mov      w1, #0x2f
0044c378  mov      w2, #0x4a
0044c37c  bl       #0xc48800  ; <__strrchr_chk>
0044c380  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c384  b        #0x44c390
0044c388  adrp     x3, #0x151000
0044c38c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c390  adrp     x23, #0x15f000
0044c394  add      x23, x23, #0x5fc  ; "[%s:%d] rgb_convert_yuv error %d.
"
0044c398  adrp     x0, #0x177000
0044c39c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044c3a0  mov      w1, #1
0044c3a4  mov      x2, x23
0044c3a8  mov      w4, #0x55d
0044c3ac  mov      w5, w22
0044c3b0  bl       #0x484908
0044c3b4  ldp      q0, q1, [x23]
0044c3b8  mov      w8, #0x2e64
0044c3bc  movk     w8, #0xa, lsl #16
0044c3c0  stur     w8, [x27, #0x1f]
0044c3c4  stp      q0, q1, [x27]
0044c3c8  mov      x0, x23
0044c3cc  mov      w1, #0x23
0044c3d0  bl       #0xc48820  ; <__strlen_chk>
0044c3d4  add      x8, sp, #0x330
0044c3d8  ldr      x19, [x26]
0044c3dc  add      x8, x0, x8
0044c3e0  sturb    wzr, [x8, #-1]
0044c3e4  adrp     x0, #0x151000
0044c3e8  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c3ec  mov      w1, #0x2f
0044c3f0  mov      w2, #0x4a
0044c3f4  bl       #0xc48800  ; <__strrchr_chk>
0044c3f8  cbz      x0, #0x44c418
0044c3fc  adrp     x0, #0x151000
0044c400  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c404  mov      w1, #0x2f
0044c408  mov      w2, #0x4a
0044c40c  bl       #0xc48800  ; <__strrchr_chk>
0044c410  add      x3, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c414  b        #0x44c420
0044c418  adrp     x3, #0x151000
0044c41c  add      x3, x3, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c420  adrp     x1, #0x177000
0044c424  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044c428  add      x2, sp, #0x330
0044c42c  mov      w0, #1
0044c430  mov      w4, #0x55d
0044c434  mov      w5, w22
0044c438  blr      x19
0044c43c  adrp     x0, #0x151000
0044c440  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c444  mov      w1, #0x2f
0044c448  mov      w2, #0x4a
0044c44c  bl       #0xc48800  ; <__strrchr_chk>
0044c450  cbz      x0, #0x44c470
0044c454  adrp     x0, #0x151000
0044c458  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c45c  mov      w1, #0x2f
0044c460  mov      w2, #0x4a
0044c464  bl       #0xc48800  ; <__strrchr_chk>
0044c468  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c46c  b        #0x44c478
0044c470  adrp     x22, #0x151000
0044c474  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c478  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c47c  sub      x8, x0, x21
0044c480  scvtf    d0, x8
0044c484  fmul     d0, d0, d8
0044c488  adrp     x23, #0x186000
0044c48c  add      x23, x23, #0x830  ; "[%s:%d] duration of rgb_convert_yuv is %.3fms.
"
0044c490  adrp     x0, #0x177000
0044c494  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044c498  mov      w1, #2
0044c49c  mov      x2, x23
0044c4a0  mov      x3, x22
0044c4a4  mov      w4, #0x560
0044c4a8  bl       #0x484908
0044c4ac  ldp      q0, q1, [x23]
0044c4b0  ldr      q2, [x23, #0x20]  ; =0x186020
0044c4b4  stp      q0, q1, [x27]
0044c4b8  str      q2, [x27, #0x20]  ; =0x151020
0044c4bc  mov      x0, x23
0044c4c0  mov      w1, #0x30
0044c4c4  bl       #0xc48820  ; <__strlen_chk>
0044c4c8  add      x8, sp, #0x330
0044c4cc  ldr      x19, [x26]
0044c4d0  add      x8, x0, x8
0044c4d4  sturb    wzr, [x8, #-1]
0044c4d8  adrp     x0, #0x151000
0044c4dc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c4e0  mov      w1, #0x2f
0044c4e4  mov      w2, #0x4a
0044c4e8  bl       #0xc48800  ; <__strrchr_chk>
0044c4ec  cbz      x0, #0x44c50c
0044c4f0  adrp     x0, #0x151000
0044c4f4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c4f8  mov      w1, #0x2f
0044c4fc  mov      w2, #0x4a
0044c500  bl       #0xc48800  ; <__strrchr_chk>
0044c504  add      x22, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c508  b        #0x44c514
0044c50c  adrp     x22, #0x151000
0044c510  add      x22, x22, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c514  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c518  sub      x8, x0, x21
0044c51c  scvtf    d0, x8
0044c520  fmul     d0, d0, d8
0044c524  adrp     x1, #0x177000
0044c528  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044c52c  add      x2, sp, #0x330
0044c530  mov      w0, #2
0044c534  mov      x3, x22
0044c538  mov      w4, #0x560
0044c53c  blr      x19
0044c540  ldr      w21, [x28, #0x310]  ; =0x111310
0044c544  adrp     x1, #0x143000
0044c548  add      x1, x1, #0x8de  ; "rgb2yuv_output_y.dat"
0044c54c  add      x8, sp, #0x70
0044c550  mov      x0, x20
0044c554  bl       #0x4445b0
0044c558  ldr      x8, [x28, #0x218]  ; =0x111218
0044c55c  ldp      x13, x9, [x8, #0x10]
0044c560  cmp      x13, x9
0044c564  b.eq     #0x44c584
0044c568  sub      x10, x9, x13
0044c56c  sub      x10, x10, #8
0044c570  cmp      x10, #0x38
0044c574  b.hs     #0x44c58c
0044c578  mov      w22, #1
0044c57c  mov      x10, x13
0044c580  b        #0x44c5f8
0044c584  mov      w22, #1
0044c588  b        #0x44c608
0044c58c  lsr      x10, x10, #3
0044c590  add      x11, x10, #1
0044c594  and      x12, x11, #0x3ffffffffffffff8
0044c598  movi     v0.4s, #1
0044c59c  mov      x14, x12
0044c5a0  movi     v1.4s, #1
0044c5a4  add      x10, x13, x12, lsl #3
0044c5a8  add      x13, x13, #0x20
0044c5ac  ldp      q3, q2, [x13, #-0x20]
0044c5b0  subs     x14, x14, #8
0044c5b4  ldp      q5, q4, [x13], #0x40
0044c5b8  uzp1     v2.4s, v3.4s, v2.4s
0044c5bc  uzp1     v3.4s, v5.4s, v4.4s
0044c5c0  mul      v0.4s, v0.4s, v2.4s
0044c5c4  mul      v1.4s, v1.4s, v3.4s
0044c5c8  b.ne     #0x44c5ac
0044c5cc  mul      v0.4s, v1.4s, v0.4s
0044c5d0  adrp     x26, #0xc78000
0044c5d4  add      x27, sp, #0x330
0044c5d8  cmp      x11, x12
0044c5dc  ldr      x26, [x26, #0x2f0]  ; =0xc782f0
0044c5e0  ext      v1.16b, v0.16b, v0.16b, #8
0044c5e4  mul      v0.2s, v0.2s, v1.2s
0044c5e8  mov      w13, v0.s[1]
0044c5ec  fmov     w14, s0
0044c5f0  mul      w22, w14, w13
0044c5f4  b.eq     #0x44c608
0044c5f8  ldr      w11, [x10], #8
0044c5fc  cmp      x10, x9
0044c600  mul      w22, w22, w11
0044c604  b.ne     #0x44c5f8
0044c608  adrp     x1, #0x147000
0044c60c  add      x1, x1, #0x4c8  ; "binary"
0044c610  add      x0, sp, #0x58
0044c614  ldr      x23, [x8, #0x30]
0044c618  bl       #0x43ef0c
0044c61c  add      x1, sp, #0x70
0044c620  add      x4, sp, #0x58
0044c624  mov      w0, w21
0044c628  mov      x2, x23
0044c62c  mov      w3, w22
0044c630  bl       #0x43b0c4
0044c634  ldrb     w8, [sp, #0x58]
0044c638  tbz      w8, #0, #0x44c644
0044c63c  ldr      x0, [sp, #0x68]
0044c640  bl       #0xc48850  ; <_ZdlPv>
0044c644  ldrb     w8, [sp, #0x70]
0044c648  tbz      w8, #0, #0x44c654
0044c64c  ldr      x0, [sp, #0x80]
0044c650  bl       #0xc48850  ; <_ZdlPv>
0044c654  ldr      w21, [x28, #0x310]  ; =0x111310
0044c658  adrp     x1, #0x128000
0044c65c  add      x1, x1, #0xf58  ; "rgb2yuv_output_uv.dat"
0044c660  add      x8, sp, #0x40
0044c664  mov      x0, x20
0044c668  bl       #0x4445b0
0044c66c  ldr      x8, [x28, #0x228]  ; =0x111228
0044c670  ldp      x13, x9, [x8, #0x10]
0044c674  cmp      x13, x9
0044c678  b.eq     #0x44c698
0044c67c  sub      x10, x9, x13
0044c680  sub      x10, x10, #8
0044c684  cmp      x10, #0x38
0044c688  b.hs     #0x44c6a0
0044c68c  mov      w20, #1
0044c690  mov      x10, x13
0044c694  b        #0x44c70c
0044c698  mov      w20, #1
0044c69c  b        #0x44c71c
0044c6a0  lsr      x10, x10, #3
0044c6a4  add      x11, x10, #1
0044c6a8  and      x12, x11, #0x3ffffffffffffff8
0044c6ac  movi     v0.4s, #1
0044c6b0  mov      x14, x12
0044c6b4  movi     v1.4s, #1
0044c6b8  add      x10, x13, x12, lsl #3
0044c6bc  add      x13, x13, #0x20
0044c6c0  ldp      q3, q2, [x13, #-0x20]
0044c6c4  subs     x14, x14, #8
0044c6c8  ldp      q5, q4, [x13], #0x40
0044c6cc  uzp1     v2.4s, v3.4s, v2.4s
0044c6d0  uzp1     v3.4s, v5.4s, v4.4s
0044c6d4  mul      v0.4s, v0.4s, v2.4s
0044c6d8  mul      v1.4s, v1.4s, v3.4s
0044c6dc  b.ne     #0x44c6c0
0044c6e0  mul      v0.4s, v1.4s, v0.4s
0044c6e4  adrp     x26, #0xc78000
0044c6e8  add      x27, sp, #0x330
0044c6ec  cmp      x11, x12
0044c6f0  ldr      x26, [x26, #0x2f0]  ; =0xc782f0
0044c6f4  ext      v1.16b, v0.16b, v0.16b, #8
0044c6f8  mul      v0.2s, v0.2s, v1.2s
0044c6fc  mov      w13, v0.s[1]
0044c700  fmov     w14, s0
0044c704  mul      w20, w14, w13
0044c708  b.eq     #0x44c71c
0044c70c  ldr      w11, [x10], #8
0044c710  cmp      x10, x9
0044c714  mul      w20, w20, w11
0044c718  b.ne     #0x44c70c
0044c71c  adrp     x1, #0x11f000
0044c720  add      x1, x1, #0x7da  ; "app"
0044c724  add      x0, sp, #0x28
0044c728  ldr      x22, [x8, #0x30]
0044c72c  bl       #0x43ef0c
0044c730  add      x1, sp, #0x40
0044c734  add      x4, sp, #0x28
0044c738  mov      w0, w21
0044c73c  mov      x2, x22
0044c740  mov      w3, w20
0044c744  bl       #0x43b0c4
0044c748  ldrb     w8, [sp, #0x28]
0044c74c  tbnz     w8, #0, #0x44c764
0044c750  ldrb     w8, [sp, #0x40]
0044c754  tbnz     w8, #0, #0x44c774
0044c758  ldr      w8, [x28, #0x310]  ; =0x111310
0044c75c  cbnz     w8, #0x44c784
0044c760  b        #0x44c794
0044c764  ldr      x0, [sp, #0x38]
0044c768  bl       #0xc48850  ; <_ZdlPv>
0044c76c  ldrb     w8, [sp, #0x40]
0044c770  tbz      w8, #0, #0x44c758
0044c774  ldr      x0, [sp, #0x50]
0044c778  bl       #0xc48850  ; <_ZdlPv>
0044c77c  ldr      w8, [x28, #0x310]  ; =0x111310
0044c780  cbz      w8, #0x44c794
0044c784  ldr      x0, [x28, #0x450]  ; =0x111450
0044c788  cbz      x0, #0x44c794
0044c78c  bl       #0xc48940  ; <fclose>
0044c790  str      xzr, [x28, #0x450]  ; =0x111450
0044c794  adrp     x0, #0x151000
0044c798  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c79c  mov      w1, #0x2f
0044c7a0  mov      w2, #0x4a
0044c7a4  bl       #0xc48800  ; <__strrchr_chk>
0044c7a8  cbz      x0, #0x44c7c8
0044c7ac  adrp     x0, #0x151000
0044c7b0  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c7b4  mov      w1, #0x2f
0044c7b8  mov      w2, #0x4a
0044c7bc  bl       #0xc48800  ; <__strrchr_chk>
0044c7c0  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c7c4  b        #0x44c7d0
0044c7c8  adrp     x20, #0x151000
0044c7cc  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c7d0  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c7d4  ldr      x8, [x28, #0x408]  ; =0x111408
0044c7d8  sub      x8, x0, x8
0044c7dc  scvtf    d0, x8
0044c7e0  fmul     d0, d0, d8
0044c7e4  adrp     x21, #0x182000
0044c7e8  add      x21, x21, #0xa97  ; "[%s:%d] EXIT run, duration of run is %.3fms.
"
0044c7ec  adrp     x0, #0x177000
0044c7f0  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044c7f4  mov      w1, #2
0044c7f8  mov      x2, x21
0044c7fc  mov      x3, x20
0044c800  mov      w4, #0x573
0044c804  bl       #0x484908
0044c808  ldp      q0, q1, [x21]
0044c80c  ldur     q2, [x21, #0x1e]
0044c810  stp      q0, q1, [x27]
0044c814  stur     q2, [x27, #0x1e]
0044c818  mov      x0, x21
0044c81c  mov      w1, #0x2e
0044c820  bl       #0xc48820  ; <__strlen_chk>
0044c824  add      x8, sp, #0x330
0044c828  ldr      x19, [x26]
0044c82c  add      x8, x0, x8
0044c830  sturb    wzr, [x8, #-1]
0044c834  adrp     x0, #0x151000
0044c838  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c83c  mov      w1, #0x2f
0044c840  mov      w2, #0x4a
0044c844  bl       #0xc48800  ; <__strrchr_chk>
0044c848  cbz      x0, #0x44c868
0044c84c  adrp     x0, #0x151000
0044c850  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c854  mov      w1, #0x2f
0044c858  mov      w2, #0x4a
0044c85c  bl       #0xc48800  ; <__strrchr_chk>
0044c860  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c864  b        #0x44c870
0044c868  adrp     x20, #0x151000
0044c86c  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c870  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c874  ldr      x8, [x28, #0x408]  ; =0x111408
0044c878  sub      x8, x0, x8
0044c87c  scvtf    d0, x8
0044c880  fmul     d0, d0, d8
0044c884  adrp     x1, #0x177000
0044c888  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044c88c  add      x2, sp, #0x330
0044c890  mov      w0, #2
0044c894  mov      x3, x20
0044c898  mov      w4, #0x573
0044c89c  blr      x19
0044c8a0  adrp     x0, #0x151000
0044c8a4  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c8a8  mov      w1, #0x2f
0044c8ac  mov      w2, #0x4a
0044c8b0  bl       #0xc48800  ; <__strrchr_chk>
0044c8b4  cbz      x0, #0x44c8d4
0044c8b8  adrp     x0, #0x151000
0044c8bc  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c8c0  mov      w1, #0x2f
0044c8c4  mov      w2, #0x4a
0044c8c8  bl       #0xc48800  ; <__strrchr_chk>
0044c8cc  add      x21, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c8d0  b        #0x44c8dc
0044c8d4  adrp     x21, #0x151000
0044c8d8  add      x21, x21, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c8dc  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c8e0  ldr      x8, [x28, #0x418]  ; =0x111418
0044c8e4  sub      x8, x0, x8
0044c8e8  scvtf    d0, x8
0044c8ec  fmul     d0, d0, d8
0044c8f0  adrp     x20, #0x11f000
0044c8f4  add      x20, x20, #0x83c  ; "[%s:%d] EXIT run, duration of run/total is %.3fms.
"
0044c8f8  adrp     x0, #0x177000
0044c8fc  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
0044c900  mov      w1, #2
0044c904  mov      x2, x20
0044c908  mov      x3, x21
0044c90c  mov      w4, #0x574
0044c910  bl       #0x484908
0044c914  ldp      q0, q1, [x20]
0044c918  mov      w8, #0x2e73
0044c91c  movk     w8, #0xa, lsl #16
0044c920  str      w8, [sp, #0x360]
0044c924  ldr      q2, [x20, #0x20]  ; =0x11f020
0044c928  stp      q0, q1, [x27]
0044c92c  str      q2, [x27, #0x20]  ; =0x151020
0044c930  mov      x0, x20
0044c934  mov      w1, #0x34
0044c938  bl       #0xc48820  ; <__strlen_chk>
0044c93c  add      x8, sp, #0x330
0044c940  ldr      x19, [x26]
0044c944  add      x8, x0, x8
0044c948  sturb    wzr, [x8, #-1]
0044c94c  adrp     x0, #0x151000
0044c950  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c954  mov      w1, #0x2f
0044c958  mov      w2, #0x4a
0044c95c  bl       #0xc48800  ; <__strrchr_chk>
0044c960  cbz      x0, #0x44c980
0044c964  adrp     x0, #0x151000
0044c968  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c96c  mov      w1, #0x2f
0044c970  mov      w2, #0x4a
0044c974  bl       #0xc48800  ; <__strrchr_chk>
0044c978  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
0044c97c  b        #0x44c988
0044c980  adrp     x20, #0x151000
0044c984  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
0044c988  bl       #0xc487d0  ; <_ZNSt6__ndk16chrono12steady_clock3nowEv>
0044c98c  ldr      x8, [x28, #0x418]  ; =0x111418
0044c990  sub      x8, x0, x8
0044c994  scvtf    d0, x8
0044c998  fmul     d0, d0, d8
0044c99c  adrp     x1, #0x177000
0044c9a0  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
0044c9a4  add      x2, sp, #0x330
0044c9a8  mov      w0, #2
0044c9ac  mov      x3, x20
0044c9b0  mov      w4, #0x574
0044c9b4  blr      x19
0044c9b8  mov      w19, wzr
0044c9bc  b        #0x44bf18
0044c9c0  ldrb     w8, [sp, #0x28]
0044c9c4  mov      x19, x0
0044c9c8  tbz      w8, #0, #0x44c9dc
0044c9cc  ldr      x0, [sp, #0x38]
0044c9d0  bl       #0xc48850  ; <_ZdlPv>
0044c9d4  b        #0x44c9dc
0044c9d8  mov      x19, x0
0044c9dc  ldrb     w8, [sp, #0x40]
0044c9e0  tbz      w8, #0, #0x44cd84
0044c9e4  ldr      x0, [sp, #0x50]
0044c9e8  bl       #0xc48850  ; <_ZdlPv>
0044c9ec  b        #0x44cd84
0044c9f0  ldrb     w8, [sp, #0x58]
0044c9f4  mov      x19, x0
0044c9f8  tbz      w8, #0, #0x44ca0c
0044c9fc  ldr      x0, [sp, #0x68]
0044ca00  bl       #0xc48850  ; <_ZdlPv>
0044ca04  b        #0x44ca0c
0044ca08  mov      x19, x0
0044ca0c  ldrb     w8, [sp, #0x70]
0044ca10  tbz      w8, #0, #0x44cd84
0044ca14  ldr      x0, [sp, #0x80]
0044ca18  bl       #0xc48850  ; <_ZdlPv>
0044ca1c  b        #0x44cd84
0044ca20  ldrb     w8, [sp, #0x88]
0044ca24  mov      x19, x0
0044ca28  tbz      w8, #0, #0x44ca3c
0044ca2c  ldr      x0, [sp, #0x98]
0044ca30  bl       #0xc48850  ; <_ZdlPv>
0044ca34  b        #0x44ca3c
0044ca38  mov      x19, x0
0044ca3c  ldrb     w8, [sp, #0xa0]
0044ca40  tbz      w8, #0, #0x44cd84
0044ca44  ldr      x0, [sp, #0xb0]
0044ca48  bl       #0xc48850  ; <_ZdlPv>
0044ca4c  b        #0x44cd84
0044ca50  b        #0x44cd80
0044ca54  b        #0x44cd80
0044ca58  b        #0x44cd80
0044ca5c  b        #0x44cd80
0044ca60  ldrb     w8, [sp, #0x2d0]
0044ca64  mov      x19, x0
0044ca68  tbz      w8, #0, #0x44cd54
0044ca6c  ldr      x0, [sp, #0x2e0]
0044ca70  bl       #0xc48850  ; <_ZdlPv>
0044ca74  b        #0x44cd54
0044ca78  b        #0x44cd50
0044ca7c  b        #0x44cd80
0044ca80  b        #0x44cd80
0044ca84  b        #0x44cd80
0044ca88  b        #0x44cd80
0044ca8c  ldrb     w8, [sp, #0x330]
0044ca90  mov      x19, x0
0044ca94  tbnz     w8, #0, #0x44caf4
0044ca98  ldrb     w8, [sp, #0x190]
0044ca9c  tbnz     w8, #0, #0x44cb14
0044caa0  ldrb     w8, [sp, #0x2d0]
0044caa4  tbnz     w8, #0, #0x44cb34
0044caa8  ldurb    w8, [x29, #-0x60]
0044caac  tbnz     w8, #0, #0x44cb44
0044cab0  ldrb     w8, [sp, #0x1a8]
0044cab4  tbnz     w8, #0, #0x44cb54
0044cab8  ldrb     w8, [sp, #0x250]
0044cabc  tbnz     w8, #0, #0x44cb64
0044cac0  ldrb     w8, [sp, #0x238]
0044cac4  tbnz     w8, #0, #0x44cb74
0044cac8  ldrb     w8, [sp, #0x1c0]
0044cacc  tbnz     w8, #0, #0x44cb84
0044cad0  ldrb     w8, [sp, #0x220]
0044cad4  tbnz     w8, #0, #0x44cb94
0044cad8  ldrb     w8, [sp, #0x208]
0044cadc  tbnz     w8, #0, #0x44cba4
0044cae0  ldrb     w8, [sp, #0x1d8]
0044cae4  tbnz     w8, #0, #0x44cbb4
0044cae8  ldrb     w8, [sp, #0x1f0]
0044caec  tbnz     w8, #0, #0x44cbc4
0044caf0  b        #0x44cd8c
0044caf4  ldr      x0, [sp, #0x340]
0044caf8  bl       #0xc48850  ; <_ZdlPv>
0044cafc  ldrb     w8, [sp, #0x190]
0044cb00  tbz      w8, #0, #0x44caa0
0044cb04  b        #0x44cb14
0044cb08  mov      x19, x0
0044cb0c  ldrb     w8, [sp, #0x190]
0044cb10  tbz      w8, #0, #0x44caa0
0044cb14  ldr      x0, [sp, #0x1a0]
0044cb18  bl       #0xc48850  ; <_ZdlPv>
0044cb1c  ldrb     w8, [sp, #0x2d0]
0044cb20  tbz      w8, #0, #0x44caa8
0044cb24  b        #0x44cb34
0044cb28  mov      x19, x0
0044cb2c  ldrb     w8, [sp, #0x2d0]
0044cb30  tbz      w8, #0, #0x44caa8
0044cb34  ldr      x0, [sp, #0x2e0]
0044cb38  bl       #0xc48850  ; <_ZdlPv>
0044cb3c  ldurb    w8, [x29, #-0x60]
0044cb40  tbz      w8, #0, #0x44cab0
0044cb44  ldur     x0, [x29, #-0x50]
0044cb48  bl       #0xc48850  ; <_ZdlPv>
0044cb4c  ldrb     w8, [sp, #0x1a8]
0044cb50  tbz      w8, #0, #0x44cab8
0044cb54  ldr      x0, [sp, #0x1b8]
0044cb58  bl       #0xc48850  ; <_ZdlPv>
0044cb5c  ldrb     w8, [sp, #0x250]
0044cb60  tbz      w8, #0, #0x44cac0
0044cb64  ldr      x0, [sp, #0x260]
0044cb68  bl       #0xc48850  ; <_ZdlPv>
0044cb6c  ldrb     w8, [sp, #0x238]
0044cb70  tbz      w8, #0, #0x44cac8
0044cb74  ldr      x0, [sp, #0x248]
0044cb78  bl       #0xc48850  ; <_ZdlPv>
0044cb7c  ldrb     w8, [sp, #0x1c0]
0044cb80  tbz      w8, #0, #0x44cad0
0044cb84  ldr      x0, [sp, #0x1d0]
0044cb88  bl       #0xc48850  ; <_ZdlPv>
0044cb8c  ldrb     w8, [sp, #0x220]
0044cb90  tbz      w8, #0, #0x44cad8
0044cb94  ldr      x0, [sp, #0x230]
0044cb98  bl       #0xc48850  ; <_ZdlPv>
0044cb9c  ldrb     w8, [sp, #0x208]
0044cba0  tbz      w8, #0, #0x44cae0
0044cba4  ldr      x0, [sp, #0x218]
0044cba8  bl       #0xc48850  ; <_ZdlPv>
0044cbac  ldrb     w8, [sp, #0x1d8]
0044cbb0  tbz      w8, #0, #0x44cae8
0044cbb4  ldr      x0, [sp, #0x1e8]
0044cbb8  bl       #0xc48850  ; <_ZdlPv>
0044cbbc  ldrb     w8, [sp, #0x1f0]
0044cbc0  tbz      w8, #0, #0x44cd8c
0044cbc4  ldr      x0, [sp, #0x200]
0044cbc8  bl       #0xc48850  ; <_ZdlPv>
0044cbcc  b        #0x44cd8c
0044cbd0  mov      x19, x0
0044cbd4  ldurb    w8, [x29, #-0x60]
0044cbd8  tbz      w8, #0, #0x44cab0
0044cbdc  b        #0x44cb44
0044cbe0  mov      x19, x0
0044cbe4  ldrb     w8, [sp, #0x1a8]
0044cbe8  tbz      w8, #0, #0x44cab8
0044cbec  b        #0x44cb54
0044cbf0  mov      x19, x0
0044cbf4  ldrb     w8, [sp, #0x250]
0044cbf8  tbz      w8, #0, #0x44cac0
0044cbfc  b        #0x44cb64
0044cc00  mov      x19, x0
0044cc04  ldrb     w8, [sp, #0x238]
0044cc08  tbz      w8, #0, #0x44cac8
0044cc0c  b        #0x44cb74
0044cc10  mov      x19, x0
0044cc14  ldrb     w8, [sp, #0x1c0]
0044cc18  tbz      w8, #0, #0x44cad0
0044cc1c  b        #0x44cb84
0044cc20  mov      x19, x0
0044cc24  ldrb     w8, [sp, #0x220]
0044cc28  tbz      w8, #0, #0x44cad8
0044cc2c  b        #0x44cb94
0044cc30  mov      x19, x0
0044cc34  ldrb     w8, [sp, #0x208]
0044cc38  tbz      w8, #0, #0x44cae0
0044cc3c  b        #0x44cba4
0044cc40  mov      x19, x0
0044cc44  ldrb     w8, [sp, #0x1d8]
0044cc48  tbz      w8, #0, #0x44cae8
0044cc4c  b        #0x44cbb4
0044cc50  mov      x19, x0
0044cc54  ldrb     w8, [sp, #0x1f0]
0044cc58  tbnz     w8, #0, #0x44cbc4
0044cc5c  b        #0x44cd8c
0044cc60  b        #0x44cd80
0044cc64  b        #0x44cd80
0044cc68  ldrb     w8, [sp, #0xb8]
0044cc6c  mov      x19, x0
0044cc70  tbz      w8, #0, #0x44cc84
0044cc74  ldr      x0, [sp, #0xc8]
0044cc78  bl       #0xc48850  ; <_ZdlPv>
0044cc7c  b        #0x44cc84
0044cc80  mov      x19, x0
0044cc84  ldrb     w8, [sp, #0xd0]
0044cc88  tbz      w8, #0, #0x44cd84
0044cc8c  ldr      x0, [sp, #0xe0]
0044cc90  bl       #0xc48850  ; <_ZdlPv>
0044cc94  b        #0x44cd84
0044cc98  mov      x19, x0
0044cc9c  add      x0, sp, #0x270
0044cca0  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044cca4  b        #0x44ccac
0044cca8  mov      x19, x0
0044ccac  ldrb     w8, [sp, #0xe8]
0044ccb0  tbz      w8, #0, #0x44cd84
0044ccb4  ldr      x0, [sp, #0xf8]
0044ccb8  bl       #0xc48850  ; <_ZdlPv>
0044ccbc  b        #0x44cd84
0044ccc0  ldrb     w8, [sp, #0x100]
0044ccc4  mov      x19, x0
0044ccc8  tbz      w8, #0, #0x44ccdc
0044cccc  ldr      x0, [sp, #0x110]
0044ccd0  bl       #0xc48850  ; <_ZdlPv>
0044ccd4  b        #0x44ccdc
0044ccd8  mov      x19, x0
0044ccdc  ldrb     w8, [sp, #0x118]
0044cce0  tbz      w8, #0, #0x44cd8c
0044cce4  ldr      x0, [sp, #0x128]
0044cce8  bl       #0xc48850  ; <_ZdlPv>
0044ccec  b        #0x44cd8c
0044ccf0  ldrb     w8, [sp, #0x130]
0044ccf4  mov      x19, x0
0044ccf8  tbz      w8, #0, #0x44cd0c
0044ccfc  ldr      x0, [sp, #0x140]
0044cd00  bl       #0xc48850  ; <_ZdlPv>
0044cd04  b        #0x44cd0c
0044cd08  mov      x19, x0
0044cd0c  ldrb     w8, [sp, #0x148]
0044cd10  tbz      w8, #0, #0x44cd8c
0044cd14  ldr      x0, [sp, #0x158]
0044cd18  bl       #0xc48850  ; <_ZdlPv>
0044cd1c  b        #0x44cd8c
0044cd20  ldrb     w8, [sp, #0x160]
0044cd24  mov      x19, x0
0044cd28  tbz      w8, #0, #0x44cd3c
0044cd2c  ldr      x0, [sp, #0x170]
0044cd30  bl       #0xc48850  ; <_ZdlPv>
0044cd34  b        #0x44cd3c
0044cd38  mov      x19, x0
0044cd3c  ldrb     w8, [sp, #0x178]
0044cd40  tbz      w8, #0, #0x44cd8c
0044cd44  ldr      x0, [sp, #0x188]
0044cd48  bl       #0xc48850  ; <_ZdlPv>
0044cd4c  b        #0x44cd8c
0044cd50  mov      x19, x0
0044cd54  add      x0, sp, #0x330
0044cd58  bl       #0x44e1f8
0044cd5c  b        #0x44cd8c
0044cd60  b        #0x44cd80
0044cd64  b        #0x44cd80
0044cd68  b        #0x44cd80
0044cd6c  b        #0x44cd80
0044cd70  b        #0x44cd80
0044cd74  b        #0x44cd80
0044cd78  b        #0x44cd80
0044cd7c  b        #0x44cd80
0044cd80  mov      x19, x0
0044cd84  add      x0, sp, #0x2d0
0044cd88  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044cd8c  ldr      x8, [sp, #0x20]
0044cd90  ldr      x8, [x8, #0x28]
0044cd94  ldur     x9, [x29, #-0x28]
0044cd98  cmp      x8, x9
0044cd9c  b.ne     #0x44cda8
0044cda0  mov      x0, x19
0044cda4  bl       #0xc44424
0044cda8  bl       #0xc48830  ; <__stack_chk_fail>
