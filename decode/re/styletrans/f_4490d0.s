; function 0x4490d0 size 0x448 
004490d0  stp      x29, x30, [sp, #-0x50]!
004490d4  stp      x28, x25, [sp, #0x10]
004490d8  stp      x24, x23, [sp, #0x20]
004490dc  stp      x22, x21, [sp, #0x30]
004490e0  stp      x20, x19, [sp, #0x40]
004490e4  mov      x29, sp
004490e8  sub      sp, sp, #0x1c0
004490ec  mrs      x22, tpidr_el0
004490f0  adrp     x20, #0x151000
004490f4  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
004490f8  ldr      x8, [x22, #0x28]
004490fc  mov      x19, x0
00449100  mov      x0, x20
00449104  mov      w1, #0x2f
00449108  mov      w2, #0x4a
0044910c  stur     x8, [x29, #-8]
00449110  bl       #0xc48800  ; <__strrchr_chk>
00449114  cbz      x0, #0x449130
00449118  adrp     x0, #0x151000
0044911c  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449120  mov      w1, #0x2f
00449124  mov      w2, #0x4a
00449128  bl       #0xc48800  ; <__strrchr_chk>
0044912c  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
00449130  adrp     x21, #0x15f000
00449134  add      x21, x21, #0x5ca  ; "[%s:%d] add log to output image.
"
00449138  adrp     x0, #0x177000
0044913c  add      x0, x0, #0x28e  ; "MIALGO_STYLETRANS"
00449140  mov      w1, #2
00449144  mov      x2, x21
00449148  mov      x3, x20
0044914c  mov      w4, #0x439
00449150  bl       #0x484908
00449154  adrp     x9, #0xc78000
00449158  adrp     x20, #0x151000
0044915c  add      x20, x20, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449160  mov      w8, #0xa
00449164  ldp      q0, q1, [x21]
00449168  mov      x0, x20
0044916c  mov      w1, #0x2f
00449170  mov      w2, #0x4a
00449174  ldr      x9, [x9, #0x2f0]  ; =0xc782f0
00449178  strh     w8, [sp, #0xd0]
0044917c  stp      q0, q1, [sp, #0xb0]
00449180  strb     wzr, [sp, #0xd0]
00449184  ldr      x21, [x9]
00449188  bl       #0xc48800  ; <__strrchr_chk>
0044918c  cbz      x0, #0x4491a8
00449190  adrp     x0, #0x151000
00449194  add      x0, x0, #0x80c  ; "/mnt/sdb/work/P1/dev/styletrans_dev/src/mape/core/styletrans_pipeline.cpp"
00449198  mov      w1, #0x2f
0044919c  mov      w2, #0x4a
004491a0  bl       #0xc48800  ; <__strrchr_chk>
004491a4  add      x20, x0, #1  ; "tputArray, double, cv::RNG *)"
004491a8  adrp     x1, #0x177000
004491ac  add      x1, x1, #0x28e  ; "MIALGO_STYLETRANS"
004491b0  add      x2, sp, #0xb0
004491b4  mov      w0, #2
004491b8  mov      x3, x20
004491bc  mov      w4, #0x439
004491c0  blr      x21
004491c4  ldr      x8, [x19, #0x248]
004491c8  add      x0, sp, #0xb0
004491cc  ldr      w1, [x19, #0x33c]
004491d0  mov      w3, #0x10
004491d4  ldr      w2, [x19, #0x340]
004491d8  mov      x5, xzr
004491dc  ldr      x4, [x8, #0x30]
004491e0  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
004491e4  ldr      w0, [x19, #0x348]
004491e8  stp      xzr, xzr, [sp, #0x28]
004491ec  str      xzr, [sp, #0x38]
004491f0  add      x8, sp, #0x10
004491f4  bl       #0xc48c40  ; <_ZNSt6__ndk19to_stringEi>
004491f8  adrp     x2, #0x15f000
004491fc  add      x2, x2, #0x5ec  ; "orientation: "
00449200  add      x0, sp, #0x10
00449204  mov      x1, xzr
00449208  bl       #0xc48c50  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc>
0044920c  ldp      x8, x23, [x0, #8]
00449210  add      x20, sp, #0xa0
00449214  ldrb     w21, [x0]
00449218  ldrb     w24, [x0, #1]  ; =0x151001
0044921c  ldur     x9, [x0, #2]
00449220  stp      xzr, xzr, [x0, #8]
00449224  str      xzr, [x0]
00449228  ldrb     w10, [sp, #0x28]
0044922c  str      x9, [sp, #0xa0]
00449230  stur     x8, [x20, #6]
00449234  tbz      w10, #0, #0x449240
00449238  ldr      x0, [sp, #0x38]
0044923c  bl       #0xc48850  ; <_ZdlPv>
00449240  ldr      x8, [sp, #0xa0]
00449244  strb     w21, [sp, #0x28]
00449248  ldur     x9, [x20, #6]
0044924c  strb     w24, [sp, #0x29]
00449250  ldrb     w10, [sp, #0x10]
00449254  stur     x8, [sp, #0x2a]
00449258  stp      x9, x23, [sp, #0x30]
0044925c  tbz      w10, #0, #0x449268
00449260  ldr      x0, [sp, #0x20]
00449264  bl       #0xc48850  ; <_ZdlPv>
00449268  adrp     x9, #0x18a000
0044926c  mov      w8, #0x3010000
00449270  add      x10, sp, #0xb0
00449274  stp      xzr, xzr, [sp, #0x90]
00449278  ldr      q0, [x9, #0x3b0]  ; =0x18a3b0
0044927c  str      w8, [sp, #0x10]
00449280  stp      x10, xzr, [sp, #0x18]
00449284  str      q0, [sp]
00449288  str      q0, [sp, #0x80]
0044928c  add      x0, sp, #0x10
00449290  add      x1, sp, #0x28
00449294  fmov     d0, #3.00000000
00449298  add      x4, sp, #0x80
0044929c  mov      x2, #0xc800000000
004492a0  mov      w3, wzr
004492a4  mov      w5, #5
004492a8  mov      w6, #8
004492ac  mov      w7, wzr
004492b0  bl       #0xc48c60  ; <_ZN2cv7putTextERKNS_17_InputOutputArrayERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS_6Point_IiEEidNS_7Scalar_IdEEiib>
004492b4  ldr      s0, [x19, #0x34c]
004492b8  add      x8, sp, #0x10
004492bc  bl       #0xc48c70  ; <_ZNSt6__ndk19to_stringEf>
004492c0  adrp     x2, #0x157000
004492c4  add      x2, x2, #0x332  ; "lux: "
004492c8  add      x0, sp, #0x10
004492cc  mov      x1, xzr
004492d0  bl       #0xc48c50  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc>
004492d4  ldp      x8, x24, [x0, #8]
004492d8  add      x10, sp, #0x28
004492dc  ldrb     w23, [x0]
004492e0  orr      x21, x10, #2
004492e4  ldrb     w25, [x0, #1]  ; =0x151001
004492e8  ldur     x9, [x0, #2]
004492ec  stp      xzr, xzr, [x0, #8]
004492f0  str      xzr, [x0]
004492f4  ldrb     w11, [sp, #0x28]
004492f8  str      x9, [sp, #0xa0]
004492fc  stur     x8, [x20, #6]
00449300  tbz      w11, #0, #0x44930c
00449304  ldr      x0, [sp, #0x38]
00449308  bl       #0xc48850  ; <_ZdlPv>
0044930c  ldr      x8, [sp, #0xa0]
00449310  strb     w23, [sp, #0x28]
00449314  ldur     x9, [x20, #6]
00449318  strb     w25, [sp, #0x29]
0044931c  ldrb     w10, [sp, #0x10]
00449320  str      x24, [sp, #0x38]
00449324  str      x8, [x21]
00449328  stur     x9, [x21, #6]
0044932c  tbz      w10, #0, #0x449338
00449330  ldr      x0, [sp, #0x20]
00449334  bl       #0xc48850  ; <_ZdlPv>
00449338  mov      w8, #0x3010000
0044933c  add      x9, sp, #0xb0
00449340  ldr      q0, [sp]
00449344  stp      xzr, xzr, [sp, #0x70]
00449348  str      w8, [sp, #0x10]
0044934c  str      q0, [sp, #0x60]
00449350  stp      x9, xzr, [sp, #0x18]
00449354  add      x0, sp, #0x10
00449358  add      x1, sp, #0x28
0044935c  fmov     d0, #3.00000000
00449360  add      x4, sp, #0x60
00449364  mov      x2, #0x12c00000000
00449368  mov      w3, wzr
0044936c  mov      w5, #5
00449370  mov      w6, #8
00449374  mov      w7, wzr
00449378  bl       #0xc48c60  ; <_ZN2cv7putTextERKNS_17_InputOutputArrayERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS_6Point_IiEEidNS_7Scalar_IdEEiib>
0044937c  ldr      w0, [x19, #0x350]
00449380  add      x8, sp, #0x10
00449384  bl       #0xc48c40  ; <_ZNSt6__ndk19to_stringEi>
00449388  adrp     x2, #0x147000
0044938c  add      x2, x2, #0x4cf  ; "cct: "
00449390  add      x0, sp, #0x10
00449394  mov      x1, xzr
00449398  bl       #0xc48c50  ; <_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc>
0044939c  ldp      x8, x23, [x0, #8]
004493a0  ldrb     w19, [x0]
004493a4  ldrb     w24, [x0, #1]  ; =0x151001
004493a8  ldur     x9, [x0, #2]
004493ac  stp      xzr, xzr, [x0, #8]
004493b0  str      xzr, [x0]
004493b4  ldrb     w10, [sp, #0x28]
004493b8  str      x9, [sp, #0xa0]
004493bc  stur     x8, [x20, #6]
004493c0  tbz      w10, #0, #0x4493cc
004493c4  ldr      x0, [sp, #0x38]
004493c8  bl       #0xc48850  ; <_ZdlPv>
004493cc  ldr      x8, [sp, #0xa0]
004493d0  strb     w19, [sp, #0x28]
004493d4  ldur     x9, [x20, #6]
004493d8  strb     w24, [sp, #0x29]
004493dc  ldrb     w10, [sp, #0x10]
004493e0  str      x23, [sp, #0x38]
004493e4  str      x8, [x21]
004493e8  stur     x9, [x21, #6]
004493ec  tbz      w10, #0, #0x4493f8
004493f0  ldr      x0, [sp, #0x20]
004493f4  bl       #0xc48850  ; <_ZdlPv>
004493f8  mov      w8, #0x3010000
004493fc  add      x9, sp, #0xb0
00449400  ldr      q0, [sp]
00449404  stp      xzr, xzr, [sp, #0x50]
00449408  str      w8, [sp, #0x10]
0044940c  str      q0, [sp, #0x40]
00449410  stp      x9, xzr, [sp, #0x18]
00449414  add      x0, sp, #0x10
00449418  add      x1, sp, #0x28
0044941c  fmov     d0, #3.00000000
00449420  add      x4, sp, #0x40
00449424  mov      x2, #0x19000000000
00449428  mov      w3, wzr
0044942c  mov      w5, #5
00449430  mov      w6, #8
00449434  mov      w7, wzr
00449438  bl       #0xc48c60  ; <_ZN2cv7putTextERKNS_17_InputOutputArrayERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS_6Point_IiEEidNS_7Scalar_IdEEiib>
0044943c  ldrb     w8, [sp, #0x28]
00449440  tbz      w8, #0, #0x44944c
00449444  ldr      x0, [sp, #0x38]
00449448  bl       #0xc48850  ; <_ZdlPv>
0044944c  add      x0, sp, #0xb0
00449450  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00449454  ldr      x8, [x22, #0x28]
00449458  ldur     x9, [x29, #-8]
0044945c  cmp      x8, x9
00449460  b.ne     #0x449514
00449464  mov      w0, wzr
00449468  add      sp, sp, #0x1c0
0044946c  ldp      x20, x19, [sp, #0x40]
00449470  ldp      x22, x21, [sp, #0x30]
00449474  ldp      x24, x23, [sp, #0x20]
00449478  ldp      x28, x25, [sp, #0x10]
0044947c  ldp      x29, x30, [sp], #0x50
00449480  ret      
00449484  b        #0x4494e8
00449488  b        #0x4494a0
0044948c  b        #0x4494e8
00449490  b        #0x4494e8
00449494  b        #0x4494a0
00449498  b        #0x4494e8
0044949c  b        #0x4494e8
004494a0  ldrb     w8, [sp, #0x10]
004494a4  mov      x19, x0
004494a8  tbnz     w8, #0, #0x4494d4
004494ac  ldrb     w8, [sp, #0x28]
004494b0  tbnz     w8, #0, #0x4494f4
004494b4  add      x0, sp, #0xb0
004494b8  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004494bc  ldr      x8, [x22, #0x28]
004494c0  ldur     x9, [x29, #-8]
004494c4  cmp      x8, x9
004494c8  b.ne     #0x449514
004494cc  mov      x0, x19
004494d0  bl       #0xc44424
004494d4  ldr      x0, [sp, #0x20]
004494d8  bl       #0xc48850  ; <_ZdlPv>
004494dc  ldrb     w8, [sp, #0x28]
004494e0  tbz      w8, #0, #0x4494b4
004494e4  b        #0x4494f4
004494e8  mov      x19, x0
004494ec  ldrb     w8, [sp, #0x28]
004494f0  tbz      w8, #0, #0x4494b4
004494f4  ldr      x0, [sp, #0x38]
004494f8  bl       #0xc48850  ; <_ZdlPv>
004494fc  add      x0, sp, #0xb0
00449500  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
00449504  ldr      x8, [x22, #0x28]
00449508  ldur     x9, [x29, #-8]
0044950c  cmp      x8, x9
00449510  b.eq     #0x4494cc
00449514  bl       #0xc48830  ; <__stack_chk_fail>
