; function 0x4ea5b0 size 0xc10 _ZN15ExtensionModule29UpdateXiaomiSessionParametersEv
004ea5b0  paciasp  
004ea5b4  stp      x29, x30, [sp, #-0x60]!
004ea5b8  stp      x28, x27, [sp, #0x10]
004ea5bc  stp      x26, x25, [sp, #0x20]
004ea5c0  stp      x24, x23, [sp, #0x30]
004ea5c4  stp      x22, x21, [sp, #0x40]
004ea5c8  stp      x20, x19, [sp, #0x50]
004ea5cc  mov      x29, sp
004ea5d0  sub      sp, sp, #0x230
004ea5d4  mrs      x7, tpidr_el0
004ea5d8  str      x7, [sp, #0x18]
004ea5dc  ldr      x14, [x7, #0x28]
004ea5e0  stur     x14, [x29, #-0x18]
004ea5e4  ldr      w8, [x0, #0x490]
004ea5e8  cbz      w8, #0x4eb184
004ea5ec  adrp     x10, #0x79000
004ea5f0  add      x10, x10, #0xdd1  ; "default Client"
004ea5f4  mov      x22, x0
004ea5f8  mov      x24, xzr
004ea5fc  sub      x25, x29, #0x80
004ea600  add      x27, sp, #0xd8
004ea604  ldr      x9, [x10]
004ea608  add      x19, sp, #0xe8
004ea60c  ldur     x11, [x10, #7]
004ea610  adrp     x21, #0x5f000
004ea614  add      x21, x21, #0x4dc  ; "com.xiaomi.sessionparams"
004ea618  str      x0, [sp, #0x20]
004ea61c  stp      x11, x9, [sp, #0x28]
004ea620  b        #0x4ea658
004ea624  add      x3, sp, #0x3c
004ea628  mov      x0, x26
004ea62c  adrp     x1, #0xb1000
004ea630  add      x1, x1, #0x507  ; "com.xiaomi.camera"
004ea634  adrp     x2, #0xcb000
004ea638  add      x2, x2, #0x2b6  ; "thirdPartyCalled"
004ea63c  mov      w4, #1
004ea640  strb     wzr, [sp, #0x3c]
004ea644  bl       #0x5598d0
004ea648  ldr      w0, [x22, #0x490]
004ea64c  add      x24, x24, #1
004ea650  cmp      x24, x0
004ea654  b.hs     #0x4eb184
004ea658  ldr      x17, [x22, #0x498]
004ea65c  mov      w2, #0xc4
004ea660  mov      w4, #0x2d68
004ea664  movi     v0.2d, #0000000000000000
004ea668  add      x3, sp, #0xe8
004ea66c  adrp     x1, #0xc3000
004ea670  add      x1, x1, #0xa30  ; "com.xiaomi.camera.bokehConfig"
004ea674  stp      xzr, x2, [x27, #0x10]
004ea678  mov      w2, #0x3f800000
004ea67c  madd     x26, x24, x4, x17
004ea680  mov      w4, #0xc4
004ea684  mov      x0, x26
004ea688  str      w2, [sp, #0xf8]
004ea68c  adrp     x2, #0x91000
004ea690  add      x2, x2, #0xa4  ; "stream"
004ea694  stur     q0, [x19, #0x14]
004ea698  stur     q0, [x19, #0x24]
004ea69c  stur     q0, [x19, #0x34]
004ea6a0  stur     q0, [x19, #0x44]
004ea6a4  stur     q0, [x19, #0x54]
004ea6a8  stur     q0, [x19, #0x64]
004ea6ac  stur     q0, [x19, #0x74]
004ea6b0  stur     q0, [x19, #0x84]
004ea6b4  stur     q0, [x19, #0x94]
004ea6b8  stur     q0, [x19, #0xa4]
004ea6bc  stur     q0, [x19, #0xb4]
004ea6c0  bl       #0x5598d0
004ea6c4  ldr      w8, [x26, #0x2d20]
004ea6c8  cmp      w8, #1
004ea6cc  b.eq     #0x4ea74c
004ea6d0  adrp     x12, #0x7c6000
004ea6d4  ldrb     w9, [x12, #0xc10]  ; =0x7c6c10
004ea6d8  tbnz     w9, #0, #0x4ea73c
004ea6dc  movi     v1.2d, #0000000000000000
004ea6e0  sub      x1, x29, #0x80
004ea6e4  adrp     x0, #0x94000
004ea6e8  add      x0, x0, #0x5cf  ; "ro.build.product"
004ea6ec  adrp     x2, #0x10e000
004ea6f0  add      x2, x2, #0x7c1  ; "generic"
004ea6f4  stur     q1, [x25, #0x4c]
004ea6f8  stp      q1, q1, [x25, #0x10]
004ea6fc  stp      q1, q1, [x25, #0x30]
004ea700  str      q1, [x25]
004ea704  bl       #0x73d998  ; <property_get>
004ea708  cmp      w0, #1
004ea70c  b.lt     #0x4ea730
004ea710  sub      x0, x29, #0x80
004ea714  adrp     x1, #0xd9000
004ea718  add      x1, x1, #0x72d  ; "generic_arm64"
004ea71c  bl       #0x741550  ; <strcasecmp>
004ea720  cbnz     w0, #0x4ea730
004ea724  mov      w3, #1
004ea728  adrp     x15, #0x7c6000
004ea72c  strb     w3, [x15, #0xc14]
004ea730  mov      w8, #1
004ea734  adrp     x13, #0x7c6000
004ea738  strb     w8, [x13, #0xc10]
004ea73c  adrp     x14, #0x7c6000
004ea740  ldrb     w9, [x14, #0xc14]  ; =0x7c6c14
004ea744  cmp      w9, #1
004ea748  b.ne     #0x4eacfc
004ea74c  movi     v2.2d, #0000000000000000
004ea750  ldr      x20, [x26, #0x10]
004ea754  mov      w1, #0x10
004ea758  sub      x2, x29, #0x80
004ea75c  movk     w1, #0xc, lsl #16
004ea760  mov      w3, wzr
004ea764  mov      w4, wzr
004ea768  mov      x0, x20
004ea76c  stp      q2, q2, [x25]
004ea770  ldr      x11, [x20]
004ea774  ldr      x5, [x11, #8]
004ea778  blr      x5
004ea77c  cbz      w0, #0x4ea788
004ea780  mov      w23, wzr
004ea784  b        #0x4ea870
004ea788  ldur     w10, [x29, #-0x70]
004ea78c  cbz      w10, #0x4ea780
004ea790  ldr      x23, [x25, #8]
004ea794  lsl      x25, x10, #2
004ea798  mov      w0, #1
004ea79c  mov      x1, x25
004ea7a0  bl       #0x741c28  ; <calloc>
004ea7a4  mov      x1, x23
004ea7a8  mov      x2, x25
004ea7ac  mov      x27, x0
004ea7b0  bl       #0x742390  ; <memcpy>
004ea7b4  mov      w3, #0x2d
004ea7b8  mov      x8, xzr
004ea7bc  movk     w3, #1, lsl #16
004ea7c0  ldr      w10, [x27, x8]
004ea7c4  cmp      w10, w3
004ea7c8  b.eq     #0x4ea7e0
004ea7cc  add      x8, x8, #4
004ea7d0  cmp      x25, x8
004ea7d4  b.ne     #0x4ea7c0
004ea7d8  mov      w23, wzr
004ea7dc  b        #0x4ea85c
004ea7e0  subs     x22, x25, x8
004ea7e4  b.eq     #0x4ea84c
004ea7e8  add      x23, x27, x8
004ea7ec  sub      x12, x25, #4
004ea7f0  cmp      x12, x8
004ea7f4  b.eq     #0x4ea808
004ea7f8  sub      x2, x22, #4
004ea7fc  add      x1, x23, #4
004ea800  mov      x0, x23
004ea804  bl       #0x742420  ; <memmove>
004ea808  add      x13, x23, x22
004ea80c  sub      x14, x13, #4
004ea810  subs     x12, x14, x27
004ea814  b.eq     #0x4ea854
004ea818  ldr      x15, [x20]
004ea81c  mov      w1, #0x10
004ea820  mov      x0, x20
004ea824  movk     w1, #0xc, lsl #16
004ea828  mov      x2, x27
004ea82c  mov      w4, wzr
004ea830  mov      w5, #1
004ea834  lsr      x3, x12, #2
004ea838  ldr      x6, [x15, #0x58]  ; =0x7c6058
004ea83c  blr      x6
004ea840  cmp      w0, #0
004ea844  cset     w23, eq
004ea848  b        #0x4ea858
004ea84c  mov      w23, wzr
004ea850  b        #0x4ea858
004ea854  mov      w23, #1
004ea858  ldr      x22, [sp, #0x20]
004ea85c  mov      x0, x27
004ea860  mov      x1, x25
004ea864  bl       #0x73b6d0  ; <_ZdlPvm>
004ea868  sub      x25, x29, #0x80
004ea86c  add      x27, sp, #0xd8
004ea870  adrp     x20, #0x75f000
004ea874  adrp     x8, #0x75f000
004ea878  ldr      x20, [x20, #0xe60]  ; =0x75fe60 <g_logChxEncryption>
004ea87c  ldr      w10, [x20]
004ea880  ldr      x8, [x8, #0xe68]  ; =0x75fe68 <g_enableChxLogs>
004ea884  cmp      w10, #1
004ea888  ldr      x8, [x8, #0x20]  ; =0x75f020
004ea88c  b.ne     #0x4ea918
004ea890  tbz      w8, #0, #0x4eaa24
004ea894  mov      w0, #1
004ea898  bl       #0x73b5c8  ; <_ZN6ChxLog13GroupToStringEm>
004ea89c  mov      x28, x22
004ea8a0  adrp     x22, #0xcb000
004ea8a4  add      x22, x22, #0x30d  ; "vendor/qcom/proprietary/chi-cdk/core/chiframework/chxextensionmodule.cpp"
004ea8a8  mov      x20, x0
004ea8ac  mov      x0, x22
004ea8b0  mov      w1, #0x2f
004ea8b4  mov      w2, #0x49
004ea8b8  bl       #0x73c5b8  ; <__strrchr_chk>
004ea8bc  cmp      x0, #0
004ea8c0  ldr      w11, [x26, #0x2d50]
004ea8c4  csinc    x3, x22, x0, eq
004ea8c8  mov      x22, x28
004ea8cc  mov      w7, #0x2d
004ea8d0  mov      w28, #0x2d
004ea8d4  adrp     x0, #0xe1000
004ea8d8  add      x0, x0, #0x2d6  ; "[ INFO]"
004ea8dc  adrp     x1, #0xf4000
004ea8e0  add      x1, x1, #0xa1c  ; =0xf4a1c
004ea8e4  mov      x2, x20
004ea8e8  adrp     x4, #0xc8000
004ea8ec  add      x4, x4, #0x73a  ; "operator()"
004ea8f0  mov      w5, #0x552b
004ea8f4  adrp     x6, #0x4c000
004ea8f8  add      x6, x6, #0xc26  ; "delete key (0x%X = %d) into ANDROID_REQUEST_AVAILABLE_SESSION_KEYS keyUpdated:%d for xmlCameraId:%d"
004ea8fc  movk     w7, #1, lsl #16
004ea900  movk     w28, #1, lsl #16
004ea904  str      w11, [sp, #0x10]
004ea908  str      w23, [sp, #8]
004ea90c  str      w28, [sp]
004ea910  bl       #0x73b5b0  ; <_ZN6ChiLog19ChxEncryptLogSystemEPKcS1_S1_S1_S1_iS1_z>
004ea914  b        #0x4eaa24
004ea918  tbz      w8, #0, #0x4eaa24
004ea91c  adrp     x11, #0x75f000
004ea920  mov      x28, x22
004ea924  ldr      x11, [x11, #0xe70]  ; =0x75fe70 <g_enableSystemLog>
004ea928  ldr      w11, [x11]
004ea92c  cmp      w11, #1
004ea930  b.ne     #0x4ea9a8
004ea934  mov      w0, #1
004ea938  bl       #0x73b5c8  ; <_ZN6ChxLog13GroupToStringEm>
004ea93c  adrp     x22, #0xcb000
004ea940  add      x22, x22, #0x30d  ; "vendor/qcom/proprietary/chi-cdk/core/chiframework/chxextensionmodule.cpp"
004ea944  mov      x20, x0
004ea948  mov      x0, x22
004ea94c  mov      w1, #0x2f
004ea950  mov      w2, #0x49
004ea954  bl       #0x73c5b8  ; <__strrchr_chk>
004ea958  ldr      w12, [x26, #0x2d50]
004ea95c  cmp      x0, #0
004ea960  mov      w7, #0x2d
004ea964  mov      w10, #0x2d
004ea968  csinc    x4, x22, x0, eq
004ea96c  mov      w0, #4
004ea970  adrp     x1, #0xc1000
004ea974  add      x1, x1, #0x9fe  ; "Chi"
004ea978  adrp     x2, #0x67000
004ea97c  add      x2, x2, #0xd31  ; "[ INFO]%s %s:%d %s() delete key (0x%X = %d) into ANDROID_REQUEST_AVAILABLE_SESSION_KEYS keyUpdated:%d for xmlCameraId:%d"
004ea980  mov      x3, x20
004ea984  mov      w5, #0x552b
004ea988  adrp     x6, #0xc8000
004ea98c  add      x6, x6, #0x73a  ; "operator()"
004ea990  movk     w7, #1, lsl #16
004ea994  movk     w10, #1, lsl #16
004ea998  str      w12, [sp, #0x10]
004ea99c  str      w23, [sp, #8]
004ea9a0  str      w10, [sp]
004ea9a4  bl       #0x73b5e0  ; <__android_log_print>
004ea9a8  mov      w0, #1
004ea9ac  bl       #0x73b5c8  ; <_ZN6ChxLog13GroupToStringEm>
004ea9b0  adrp     x22, #0xcb000
004ea9b4  add      x22, x22, #0x30d  ; "vendor/qcom/proprietary/chi-cdk/core/chiframework/chxextensionmodule.cpp"
004ea9b8  mov      x20, x0
004ea9bc  mov      x0, x22
004ea9c0  mov      w1, #0x2f
004ea9c4  mov      w2, #0x49
004ea9c8  bl       #0x73c5b8  ; <__strrchr_chk>
004ea9cc  ldr      w13, [x26, #0x2d50]
004ea9d0  cmp      x0, #0
004ea9d4  mov      w7, #0x2d
004ea9d8  mov      w11, #0x2d
004ea9dc  csinc    x3, x22, x0, eq
004ea9e0  adrp     x0, #0xe1000
004ea9e4  add      x0, x0, #0x2d6  ; "[ INFO]"
004ea9e8  adrp     x1, #0xf4000
004ea9ec  add      x1, x1, #0xa1c  ; =0xf4a1c
004ea9f0  mov      x2, x20
004ea9f4  adrp     x4, #0xc8000
004ea9f8  add      x4, x4, #0x73a  ; "operator()"
004ea9fc  mov      w5, #0x552b
004eaa00  adrp     x6, #0x4c000
004eaa04  add      x6, x6, #0xc26  ; "delete key (0x%X = %d) into ANDROID_REQUEST_AVAILABLE_SESSION_KEYS keyUpdated:%d for xmlCameraId:%d"
004eaa08  movk     w7, #1, lsl #16
004eaa0c  movk     w11, #1, lsl #16
004eaa10  str      w13, [sp, #0x10]
004eaa14  str      w23, [sp, #8]
004eaa18  str      w11, [sp]
004eaa1c  bl       #0x73b5f8  ; <_ZN6ChiLog9LogSystemEPKcS1_S1_S1_S1_iS1_z>
004eaa20  mov      x22, x28
004eaa24  movi     v3.2d, #0000000000000000
004eaa28  ldr      x20, [x26, #0x10]
004eaa2c  mov      w1, #0xd
004eaa30  sub      x2, x29, #0x80
004eaa34  movk     w1, #0xc, lsl #16
004eaa38  mov      w3, wzr
004eaa3c  mov      w4, wzr
004eaa40  mov      x0, x20
004eaa44  stp      q3, q3, [x25]
004eaa48  ldr      x16, [x20]
004eaa4c  ldr      x7, [x16, #8]
004eaa50  blr      x7
004eaa54  cbz      w0, #0x4eaa60
004eaa58  mov      w23, wzr
004eaa5c  b        #0x4eab48
004eaa60  ldur     w11, [x29, #-0x70]
004eaa64  cbz      w11, #0x4eaa58
004eaa68  ldr      x23, [x25, #8]
004eaa6c  lsl      x25, x11, #2
004eaa70  mov      w0, #1
004eaa74  mov      x1, x25
004eaa78  bl       #0x741c28  ; <calloc>
004eaa7c  mov      x1, x23
004eaa80  mov      x2, x25
004eaa84  mov      x27, x0
004eaa88  bl       #0x742390  ; <memcpy>
004eaa8c  mov      w4, #0x2d
004eaa90  mov      x9, xzr
004eaa94  movk     w4, #1, lsl #16
004eaa98  ldr      w14, [x27, x9]
004eaa9c  cmp      w14, w4
004eaaa0  b.eq     #0x4eaab8
004eaaa4  add      x9, x9, #4
004eaaa8  cmp      x25, x9
004eaaac  b.ne     #0x4eaa98
004eaab0  mov      w23, wzr
004eaab4  b        #0x4eab34
004eaab8  subs     x22, x25, x9
004eaabc  b.eq     #0x4eab24
004eaac0  add      x23, x27, x9
004eaac4  sub      x17, x25, #4
004eaac8  cmp      x17, x9
004eaacc  b.eq     #0x4eaae0
004eaad0  sub      x2, x22, #4
004eaad4  add      x1, x23, #4
004eaad8  mov      x0, x23
004eaadc  bl       #0x742420  ; <memmove>
004eaae0  add      x1, x23, x22
004eaae4  sub      x3, x1, #4
004eaae8  subs     x13, x3, x27
004eaaec  b.eq     #0x4eab2c
004eaaf0  ldr      x4, [x20]
004eaaf4  mov      w1, #0xd
004eaaf8  mov      x0, x20
004eaafc  movk     w1, #0xc, lsl #16
004eab00  mov      x2, x27
004eab04  mov      w5, #1
004eab08  lsr      x3, x13, #2
004eab0c  ldr      x23, [x4, #0x58]  ; =0xc8058
004eab10  mov      w4, wzr
004eab14  blr      x23
004eab18  cmp      w0, #0
004eab1c  cset     w23, eq
004eab20  b        #0x4eab30
004eab24  mov      w23, wzr
004eab28  b        #0x4eab30
004eab2c  mov      w23, #1
004eab30  ldr      x22, [sp, #0x20]
004eab34  mov      x0, x27
004eab38  mov      x1, x25
004eab3c  bl       #0x73b6d0  ; <_ZdlPvm>
004eab40  sub      x25, x29, #0x80
004eab44  add      x27, sp, #0xd8
004eab48  adrp     x0, #0x75f000
004eab4c  adrp     x9, #0x75f000
004eab50  ldr      x0, [x0, #0xe60]  ; =0x75fe60 <g_logChxEncryption>
004eab54  ldr      w12, [x0]
004eab58  ldr      x9, [x9, #0xe68]  ; =0x75fe68 <g_enableChxLogs>
004eab5c  cmp      w12, #1
004eab60  ldr      x9, [x9, #0x20]  ; =0x75f020
004eab64  b.ne     #0x4eabf0
004eab68  tbz      w9, #0, #0x4eacfc
004eab6c  mov      w0, #1
004eab70  bl       #0x73b5c8  ; <_ZN6ChxLog13GroupToStringEm>
004eab74  mov      x28, x22
004eab78  adrp     x22, #0xcb000
004eab7c  add      x22, x22, #0x30d  ; "vendor/qcom/proprietary/chi-cdk/core/chiframework/chxextensionmodule.cpp"
004eab80  mov      x20, x0
004eab84  mov      x0, x22
004eab88  mov      w1, #0x2f
004eab8c  mov      w2, #0x49
004eab90  bl       #0x73c5b8  ; <__strrchr_chk>
004eab94  ldr      w15, [x26, #0x2d50]
004eab98  cmp      x0, #0
004eab9c  mov      w7, #0x2d
004eaba0  str      w23, [sp, #8]
004eaba4  mov      w23, #0x2d
004eaba8  csinc    x3, x22, x0, eq
004eabac  adrp     x0, #0xe1000
004eabb0  add      x0, x0, #0x2d6  ; "[ INFO]"
004eabb4  adrp     x1, #0xf4000
004eabb8  add      x1, x1, #0xa1c  ; =0xf4a1c
004eabbc  mov      x2, x20
004eabc0  adrp     x4, #0xc8000
004eabc4  add      x4, x4, #0x73a  ; "operator()"
004eabc8  mov      w5, #0x5532
004eabcc  adrp     x6, #0x4c000
004eabd0  add      x6, x6, #0xc26  ; "delete key (0x%X = %d) into ANDROID_REQUEST_AVAILABLE_SESSION_KEYS keyUpdated:%d for xmlCameraId:%d"
004eabd4  movk     w7, #1, lsl #16
004eabd8  movk     w23, #1, lsl #16
004eabdc  mov      x22, x28
004eabe0  str      w15, [sp, #0x10]
004eabe4  str      w23, [sp]
004eabe8  bl       #0x73b5b0  ; <_ZN6ChiLog19ChxEncryptLogSystemEPKcS1_S1_S1_S1_iS1_z>
004eabec  b        #0x4eacfc
004eabf0  tbz      w9, #0, #0x4eacfc
004eabf4  adrp     x10, #0x75f000
004eabf8  mov      x28, x22
004eabfc  ldr      x10, [x10, #0xe70]  ; =0x75fe70 <g_enableSystemLog>
004eac00  ldr      w13, [x10]
004eac04  cmp      w13, #1
004eac08  b.ne     #0x4eac80
004eac0c  mov      w0, #1
004eac10  bl       #0x73b5c8  ; <_ZN6ChxLog13GroupToStringEm>
004eac14  adrp     x22, #0xcb000
004eac18  add      x22, x22, #0x30d  ; "vendor/qcom/proprietary/chi-cdk/core/chiframework/chxextensionmodule.cpp"
004eac1c  mov      x20, x0
004eac20  mov      x0, x22
004eac24  mov      w1, #0x2f
004eac28  mov      w2, #0x49
004eac2c  bl       #0x73c5b8  ; <__strrchr_chk>
004eac30  ldr      w16, [x26, #0x2d50]
004eac34  cmp      x0, #0
004eac38  mov      w7, #0x2d
004eac3c  mov      w8, #0x2d
004eac40  csinc    x4, x22, x0, eq
004eac44  mov      w0, #4
004eac48  adrp     x1, #0xc1000
004eac4c  add      x1, x1, #0x9fe  ; "Chi"
004eac50  adrp     x2, #0x67000
004eac54  add      x2, x2, #0xd31  ; "[ INFO]%s %s:%d %s() delete key (0x%X = %d) into ANDROID_REQUEST_AVAILABLE_SESSION_KEYS keyUpdated:%d for xmlCameraId:%d"
004eac58  mov      x3, x20
004eac5c  mov      w5, #0x5532
004eac60  adrp     x6, #0xc8000
004eac64  add      x6, x6, #0x73a  ; "operator()"
004eac68  movk     w7, #1, lsl #16
004eac6c  movk     w8, #1, lsl #16
004eac70  str      w16, [sp, #0x10]
004eac74  str      w23, [sp, #8]
004eac78  str      w8, [sp]
004eac7c  bl       #0x73b5e0  ; <__android_log_print>
004eac80  mov      w0, #1
004eac84  bl       #0x73b5c8  ; <_ZN6ChxLog13GroupToStringEm>
004eac88  adrp     x22, #0xcb000
004eac8c  add      x22, x22, #0x30d  ; "vendor/qcom/proprietary/chi-cdk/core/chiframework/chxextensionmodule.cpp"
004eac90  mov      x20, x0
004eac94  mov      x0, x22
004eac98  mov      w1, #0x2f
004eac9c  mov      w2, #0x49
004eaca0  bl       #0x73c5b8  ; <__strrchr_chk>
004eaca4  ldr      w17, [x26, #0x2d50]
004eaca8  cmp      x0, #0
004eacac  mov      w7, #0x2d
004eacb0  mov      w9, #0x2d
004eacb4  csinc    x3, x22, x0, eq
004eacb8  adrp     x0, #0xe1000
004eacbc  add      x0, x0, #0x2d6  ; "[ INFO]"
004eacc0  adrp     x1, #0xf4000
004eacc4  add      x1, x1, #0xa1c  ; =0xf4a1c
004eacc8  mov      x2, x20
004eaccc  adrp     x4, #0xc8000
004eacd0  add      x4, x4, #0x73a  ; "operator()"
004eacd4  mov      w5, #0x5532
004eacd8  adrp     x6, #0x4c000
004eacdc  add      x6, x6, #0xc26  ; "delete key (0x%X = %d) into ANDROID_REQUEST_AVAILABLE_SESSION_KEYS keyUpdated:%d for xmlCameraId:%d"
004eace0  movk     w7, #1, lsl #16
004eace4  movk     w9, #1, lsl #16
004eace8  str      w17, [sp, #0x10]
004eacec  str      w23, [sp, #8]
004eacf0  str      w9, [sp]
004eacf4  bl       #0x73b5f8  ; <_ZN6ChiLog9LogSystemEPKcS1_S1_S1_S1_iS1_z>
004eacf8  mov      x22, x28
004eacfc  adrp     x23, #0xf5000
004ead00  add      x23, x23, #0x78c  ; "enabled"
004ead04  add      x3, sp, #0xd4
004ead08  mov      x0, x26
004ead0c  adrp     x1, #0xab000
004ead10  add      x1, x1, #0x8fa  ; "xiaomi.pro.video.movie"
004ead14  mov      x2, x23
004ead18  mov      w4, #1
004ead1c  strb     wzr, [sp, #0xd4]
004ead20  bl       #0x5598d0
004ead24  add      x3, sp, #0xd0
004ead28  mov      x0, x26
004ead2c  adrp     x1, #0xa5000
004ead30  add      x1, x1, #0xa8b  ; "xiaomi.pro.video.log"
004ead34  mov      x2, x23
004ead38  mov      w4, #1
004ead3c  strb     wzr, [sp, #0xd0]
004ead40  bl       #0x5598d0
004ead44  add      x3, sp, #0xcc
004ead48  mov      x0, x26
004ead4c  adrp     x1, #0xab000
004ead50  add      x1, x1, #0x911  ; "xiaomi.video.cinelook"
004ead54  mov      x2, x23
004ead58  mov      w4, #1
004ead5c  strb     wzr, [sp, #0xcc]
004ead60  bl       #0x5598d0
004ead64  add      x3, sp, #0xc8
004ead68  mov      x0, x26
004ead6c  adrp     x1, #0x73000
004ead70  add      x1, x1, #0x2ea  ; "xiaomi.videofilter"
004ead74  mov      x2, x23
004ead78  mov      w4, #1
004ead7c  strb     wzr, [sp, #0xc8]
004ead80  bl       #0x5598d0
004ead84  mov      w5, #0xffff
004ead88  add      x3, sp, #0xc4
004ead8c  mov      x0, x26
004ead90  adrp     x1, #0x85000
004ead94  add      x1, x1, #0xf61  ; "xiaomi.app"
004ead98  adrp     x2, #0xf7000
004ead9c  add      x2, x2, #0xd97  ; "module"
004eada0  mov      w4, #1
004eada4  str      w5, [sp, #0xc4]
004eada8  bl       #0x5598d0
004eadac  add      x3, sp, #0xc0
004eadb0  mov      x0, x26
004eadb4  mov      x1, x21
004eadb8  adrp     x2, #0x52000
004eadbc  add      x2, x2, #0x91c  ; "autoCropEnable"
004eadc0  mov      w4, #1
004eadc4  str      wzr, [sp, #0xc0]
004eadc8  bl       #0x5598d0
004eadcc  add      x3, sp, #0xbc
004eadd0  mov      x0, x26
004eadd4  adrp     x1, #0x7c000
004eadd8  add      x1, x1, #0x9ef  ; "org.codeaurora.qcamera3.sessionParameters"
004eaddc  adrp     x2, #0xd0000
004eade0  add      x2, x2, #0xa87  ; "HDRVideoMode"
004eade4  mov      w4, #1
004eade8  str      wzr, [sp, #0xbc]
004eadec  bl       #0x5598d0
004eadf0  add      x3, sp, #0xb8
004eadf4  mov      x0, x26
004eadf8  adrp     x1, #0x66000
004eadfc  add      x1, x1, #0xdf1  ; "com.xiaomi.liveshot"
004eae00  mov      x2, x23
004eae04  mov      w4, #1
004eae08  str      wzr, [sp, #0xb8]
004eae0c  bl       #0x5598d0
004eae10  add      x3, sp, #0xb4
004eae14  mov      x0, x26
004eae18  adrp     x1, #0x10b000
004eae1c  add      x1, x1, #0xd40  ; "com.xiaomi.subdev.custom"
004eae20  adrp     x2, #0x102000
004eae24  add      x2, x2, #0x185  ; "enable"
004eae28  mov      w4, #1
004eae2c  str      wzr, [sp, #0xb4]
004eae30  bl       #0x5598d0
004eae34  add      x3, sp, #0xb0
004eae38  mov      x0, x26
004eae3c  adrp     x1, #0x6d000
004eae40  add      x1, x1, #0x3fc  ; "com.xiaomi.control"
004eae44  adrp     x2, #0x8c000
004eae48  add      x2, x2, #0x35e  ; "qcfa.isSuperRemosaic"
004eae4c  mov      w4, #1
004eae50  strb     wzr, [sp, #0xb0]
004eae54  bl       #0x5598d0
004eae58  add      x3, sp, #0xac
004eae5c  mov      x0, x26
004eae60  mov      x1, x21
004eae64  adrp     x2, #0x7f000
004eae68  add      x2, x2, #0x8cc  ; "EnableVideoHDR"
004eae6c  mov      w4, #1
004eae70  str      wzr, [sp, #0xac]
004eae74  bl       #0x5598d0
004eae78  add      x3, sp, #0xa8
004eae7c  mov      x0, x26
004eae80  mov      x1, x21
004eae84  adrp     x2, #0x66000
004eae88  add      x2, x2, #0xfeb  ; "stylizationType"
004eae8c  mov      w4, #1
004eae90  str      wzr, [sp, #0xa8]
004eae94  bl       #0x5598d0
004eae98  add      x3, sp, #0xa4
004eae9c  mov      x0, x26
004eaea0  mov      x1, x21
004eaea4  adrp     x2, #0x9f000
004eaea8  add      x2, x2, #0x42  ; "enableLofic"
004eaeac  mov      w4, #1
004eaeb0  str      wzr, [sp, #0xa4]
004eaeb4  bl       #0x5598d0
004eaeb8  add      x3, sp, #0xa0
004eaebc  mov      x0, x26
004eaec0  mov      x1, x21
004eaec4  adrp     x2, #0xb8000
004eaec8  add      x2, x2, #0x1a3  ; "enableVideoSuperEis"
004eaecc  mov      w4, #1
004eaed0  str      wzr, [sp, #0xa0]
004eaed4  bl       #0x5598d0
004eaed8  sub      x3, x29, #0x80
004eaedc  mov      x0, x26
004eaee0  mov      x1, x21
004eaee4  adrp     x2, #0xd1000
004eaee8  add      x2, x2, #0xc2c  ; "previewEisMarginInfo"
004eaeec  mov      w4, #0x10
004eaef0  strb     wzr, [sp, #0x9c]
004eaef4  stp      xzr, xzr, [x25]
004eaef8  bl       #0x5598d0
004eaefc  sub      x3, x29, #0x80
004eaf00  mov      x0, x26
004eaf04  mov      x1, x21
004eaf08  adrp     x2, #0xde000
004eaf0c  add      x2, x2, #0x23e  ; "videoEisMarginInfo"
004eaf10  mov      w4, #0x10
004eaf14  bl       #0x5598d0
004eaf18  add      x3, sp, #0x9c
004eaf1c  mov      x0, x26
004eaf20  mov      x1, x21
004eaf24  adrp     x2, #0x98000
004eaf28  add      x2, x2, #0x5d4  ; "miviEisEnable"
004eaf2c  mov      w4, #1
004eaf30  bl       #0x5598d0
004eaf34  add      x3, sp, #0x98
004eaf38  mov      x0, x26
004eaf3c  mov      x1, x21
004eaf40  adrp     x2, #0x6d000
004eaf44  add      x2, x2, #0x545  ; "legendMode"
004eaf48  mov      w4, #1
004eaf4c  strb     wzr, [sp, #0x98]
004eaf50  bl       #0x5598d0
004eaf54  ldp      x12, x10, [sp, #0x28]
004eaf58  add      x3, sp, #0xd8
004eaf5c  mov      x0, x26
004eaf60  mov      x1, x21
004eaf64  adrp     x2, #0xab000
004eaf68  add      x2, x2, #0xaa4  ; "clientName"
004eaf6c  mov      w4, #0xf
004eaf70  str      x10, [x27]
004eaf74  stur     x12, [x27, #7]
004eaf78  bl       #0x5598d0
004eaf7c  add      x3, sp, #0x94
004eaf80  mov      x0, x26
004eaf84  mov      x1, x21
004eaf88  adrp     x2, #0xf8000
004eaf8c  add      x2, x2, #0x28d  ; "operation"
004eaf90  mov      w4, #1
004eaf94  str      wzr, [sp, #0x94]
004eaf98  bl       #0x5598d0
004eaf9c  add      x3, sp, #0x90
004eafa0  mov      x0, x26
004eafa4  mov      x1, x21
004eafa8  adrp     x2, #0xf8000
004eafac  add      x2, x2, #0x297  ; "processId"
004eafb0  mov      w4, #1
004eafb4  str      wzr, [sp, #0x90]
004eafb8  bl       #0x5598d0
004eafbc  add      x3, sp, #0x8c
004eafc0  mov      x0, x26
004eafc4  mov      x1, x21
004eafc8  adrp     x2, #0x4b000
004eafcc  add      x2, x2, #0xcd4  ; "cameraxConnection"
004eafd0  mov      w4, #1
004eafd4  strb     wzr, [sp, #0x8c]
004eafd8  bl       #0x5598d0
004eafdc  add      x3, sp, #0x88
004eafe0  mov      x0, x26
004eafe4  mov      x1, x21
004eafe8  adrp     x2, #0xcb000
004eafec  add      x2, x2, #0x2a0  ; "thirdPartyYUVSnapshot"
004eaff0  mov      w4, #1
004eaff4  strb     wzr, [sp, #0x88]
004eaff8  bl       #0x5598d0
004eaffc  add      x3, sp, #0x84
004eb000  mov      x0, x26
004eb004  mov      x1, x21
004eb008  adrp     x2, #0xfe000
004eb00c  add      x2, x2, #0x771  ; "selfieUnfold"
004eb010  mov      w4, #1
004eb014  str      wzr, [sp, #0x84]
004eb018  bl       #0x5598d0
004eb01c  add      x3, sp, #0x80
004eb020  mov      x0, x26
004eb024  mov      x1, x21
004eb028  adrp     x2, #0xb1000
004eb02c  add      x2, x2, #0xce1  ; "jpegrEnable"
004eb030  mov      w4, #1
004eb034  strb     wzr, [sp, #0x80]
004eb038  bl       #0x5598d0
004eb03c  add      x3, sp, #0x78
004eb040  mov      x0, x26
004eb044  mov      x1, x21
004eb048  adrp     x2, #0xbe000
004eb04c  add      x2, x2, #0x9ff  ; "remoteConnection"
004eb050  mov      w4, #1
004eb054  str      xzr, [sp, #0x78]
004eb058  bl       #0x5598d0
004eb05c  add      x3, sp, #0x70
004eb060  mov      x0, x26
004eb064  mov      x1, x21
004eb068  adrp     x2, #0xc5000
004eb06c  add      x2, x2, #0x588  ; "gestureEffect"
004eb070  mov      w4, #1
004eb074  str      xzr, [sp, #0x70]
004eb078  bl       #0x5598d0
004eb07c  add      x3, sp, #0x6c
004eb080  mov      x0, x26
004eb084  mov      x1, x21
004eb088  adrp     x2, #0xd6000
004eb08c  add      x2, x2, #0xfd9  ; "MiStreamUsecase"
004eb090  mov      w4, #1
004eb094  str      wzr, [sp, #0x6c]
004eb098  bl       #0x5598d0
004eb09c  add      x3, sp, #0x60
004eb0a0  mov      x0, x26
004eb0a4  mov      x1, x21
004eb0a8  adrp     x2, #0xf1000
004eb0ac  add      x2, x2, #0x88a  ; "customizeFunctionMask"
004eb0b0  mov      w4, #1
004eb0b4  str      xzr, [sp, #0x60]
004eb0b8  bl       #0x5598d0
004eb0bc  add      x3, sp, #0x58
004eb0c0  mov      x0, x26
004eb0c4  mov      x1, x21
004eb0c8  adrp     x2, #0xb8000
004eb0cc  add      x2, x2, #0x194  ; "trdCloudSwitch"
004eb0d0  mov      w4, #1
004eb0d4  str      xzr, [sp, #0x58]
004eb0d8  bl       #0x5598d0
004eb0dc  add      x3, sp, #0x50
004eb0e0  mov      x0, x26
004eb0e4  mov      x1, x21
004eb0e8  adrp     x2, #0xbe000
004eb0ec  add      x2, x2, #0xce  ; "enableMasterLivePhoto"
004eb0f0  mov      w4, #1
004eb0f4  str      xzr, [sp, #0x50]
004eb0f8  bl       #0x5598d0
004eb0fc  add      x3, sp, #0x48
004eb100  mov      x0, x26
004eb104  mov      x1, x21
004eb108  adrp     x2, #0x8c000
004eb10c  add      x2, x2, #0x2de  ; "enableMasterLivePhoto.roleId"
004eb110  mov      w4, #1
004eb114  str      xzr, [sp, #0x48]
004eb118  bl       #0x5598d0
004eb11c  add      x3, sp, #0x40
004eb120  mov      x0, x26
004eb124  mov      x1, x21
004eb128  adrp     x2, #0x66000
004eb12c  add      x2, x2, #0x5f5  ; "afterSaleVerifyEnable"
004eb130  mov      w4, #1
004eb134  str      xzr, [sp, #0x40]
004eb138  bl       #0x5598d0
004eb13c  bl       #0x73c0d8  ; <_ZN4CamX15SettingsManager11GetInstanceEv>
004eb140  ldr      x5, [x0]
004eb144  ldr      x1, [x5, #0x10]
004eb148  blr      x1
004eb14c  mov      w13, #0x505c
004eb150  movk     w13, #1, lsl #16
004eb154  ldrb     w1, [x0, x13]
004eb158  tbz      w1, #0, #0x4ea624
004eb15c  add      x3, sp, #0x3c
004eb160  mov      x0, x26
004eb164  adrp     x1, #0xd6000
004eb168  add      x1, x1, #0xaa0  ; "com.xiaomi.objectTrackingConfig"
004eb16c  adrp     x2, #0x4b000
004eb170  add      x2, x2, #0xd0b  ; "FeatureEnable"
004eb174  mov      w4, #1
004eb178  strb     wzr, [sp, #0x3c]
004eb17c  bl       #0x5598d0
004eb180  b        #0x4ea624
004eb184  ldr      x6, [sp, #0x18]
004eb188  ldr      x15, [x6, #0x28]  ; =0x4c028
004eb18c  ldur     x16, [x29, #-0x18]
004eb190  cmp      x15, x16
004eb194  b.ne     #0x4eb1bc
004eb198  add      sp, sp, #0x230
004eb19c  ldp      x20, x19, [sp, #0x50]
004eb1a0  ldp      x22, x21, [sp, #0x40]
004eb1a4  ldp      x24, x23, [sp, #0x30]
004eb1a8  ldp      x26, x25, [sp, #0x20]
004eb1ac  ldp      x28, x27, [sp, #0x10]
004eb1b0  ldp      x29, x30, [sp], #0x60
004eb1b4  autiasp  
004eb1b8  ret      
004eb1bc  bl       #0x7423a8  ; <__stack_chk_fail>
