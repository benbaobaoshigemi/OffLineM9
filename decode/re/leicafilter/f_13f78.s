; function 0x13f78 size 0xa94 _ZN12ParamTrigger10triggerLutE15param_trigger_tP11param_lut_tRb
00013f78  paciasp  
00013f7c  sub      sp, sp, #0x170
00013f80  stp      d15, d14, [sp, #0xd0]
00013f84  stp      d13, d12, [sp, #0xe0]
00013f88  stp      d11, d10, [sp, #0xf0]
00013f8c  stp      d9, d8, [sp, #0x100]
00013f90  stp      x29, x30, [sp, #0x110]
00013f94  stp      x28, x27, [sp, #0x120]
00013f98  stp      x26, x25, [sp, #0x130]
00013f9c  stp      x24, x23, [sp, #0x140]
00013fa0  stp      x22, x21, [sp, #0x150]
00013fa4  stp      x20, x19, [sp, #0x160]
00013fa8  add      x29, sp, #0x110
00013fac  mrs      x19, tpidr_el0
00013fb0  mov      x23, x1
00013fb4  mov      x21, x0
00013fb8  ldr      x8, [x19, #0x28]
00013fbc  add      x0, x0, #0x50
00013fc0  add      x1, x1, #8
00013fc4  mov      x24, x3
00013fc8  mov      x22, x2
00013fcc  stur     x8, [x29, #-0x50]
00013fd0  bl       #0x1f568  ; <_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE7param_tEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEElEERKT_>
00013fd4  add      x10, x21, #0x58
00013fd8  mov      x20, x0
00013fdc  cmp      x10, x0
00013fe0  b.eq     #0x147a4
00013fe4  ldr      x0, [x20, #0x38]
00013fe8  ldrh     w1, [x20, #0x40]
00013fec  sub      x3, x29, #0x68
00013ff0  ldrh     w2, [x23]
00013ff4  sub      x4, x29, #0x80
00013ff8  stp      x10, x22, [sp, #0x50]
00013ffc  str      x19, [sp, #0x60]
00014000  stp      xzr, xzr, [x29, #-0x68]
00014004  stur     xzr, [x29, #-0x58]
00014008  stp      xzr, xzr, [x29, #-0x80]
0001400c  stur     xzr, [x29, #-0x70]
00014010  strh     wzr, [sp, #0x8c]
00014014  str      wzr, [sp, #0x88]
00014018  strh     wzr, [sp, #0x84]
0001401c  str      wzr, [sp, #0x80]
00014020  strh     wzr, [sp, #0x7c]
00014024  str      wzr, [sp, #0x78]
00014028  strh     wzr, [sp, #0x74]
0001402c  str      wzr, [sp, #0x70]
00014030  bl       #0x1f580  ; <_Z22findElementAndPreviousI11param_lux_tEbPT_ttRS1_S3_>
00014034  ldur     x0, [x29, #-0x60]
00014038  ldrh     w2, [x23, #2]
0001403c  add      x3, sp, #0x88
00014040  ldurh    w1, [x29, #-0x58]
00014044  add      x4, sp, #0x80
00014048  bl       #0x1f598  ; <_Z22findElementAndPreviousI11param_cct_tEbPT_ttRS1_S3_>
0001404c  ldur     x0, [x29, #-0x78]
00014050  ldrh     w2, [x23, #2]
00014054  add      x3, sp, #0x78
00014058  ldurh    w1, [x29, #-0x70]
0001405c  add      x4, sp, #0x70
00014060  bl       #0x1f598  ; <_Z22findElementAndPreviousI11param_cct_tEbPT_ttRS1_S3_>
00014064  adrp     x11, #0x20000
00014068  adrp     x10, #0x20000
0001406c  ldr      x11, [x11, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
00014070  ldrh     w22, [sp, #0x8c]
00014074  ldrh     w25, [sp, #0x84]
00014078  ldrh     w19, [sp, #0x7c]
0001407c  ldrh     w28, [sp, #0x74]
00014080  ldr      w8, [x11]
00014084  ldr      x10, [x10, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00014088  cmp      w8, #2
0001408c  b.hi     #0x14170
00014090  ldrb     w8, [x10]
00014094  tbz      w8, #1, #0x14170
00014098  adrp     x0, #0x6000
0001409c  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
000140a0  mov      x26, x11
000140a4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000140a8  ldrb     w8, [x21, #0x18]
000140ac  ldr      x9, [x21, #0x28]
000140b0  add      x27, x21, #0x19
000140b4  mov      x1, x0
000140b8  adrp     x3, #0x7000
000140bc  add      x3, x3, #0xae2  ; "triggerLut"
000140c0  tst      w8, #1
000140c4  adrp     x5, #0x7000
000140c8  add      x5, x5, #0xc43  ; " [LeicaFilter][%s] lut index %d, %d, %d, %d"
000140cc  csel     x6, x27, x9, eq
000140d0  mov      w0, #2
000140d4  mov      w2, #0x6c
000140d8  mov      w4, #0x44
000140dc  mov      w7, w22
000140e0  str      w28, [sp, #0x10]
000140e4  str      w19, [sp, #8]
000140e8  str      w25, [sp]
000140ec  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000140f0  adrp     x10, #0x20000
000140f4  mov      x11, x26
000140f8  ldr      x10, [x10, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
000140fc  cbnz     w0, #0x14170
00014100  mov      w0, #2
00014104  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00014108  str      x0, [sp, #0x48]
0001410c  adrp     x0, #0x6000
00014110  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014114  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014118  ldrb     w8, [x21, #0x18]
0001411c  ldr      x9, [x21, #0x28]
00014120  mov      x4, x0
00014124  ldr      x3, [sp, #0x48]
00014128  adrp     x1, #0x7000
0001412c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00014130  tst      w8, #1
00014134  adrp     x2, #0x6000
00014138  add      x2, x2, #0x70b  ; "%s %s:%d %s() [LeicaFilter][%s] lut index %d, %d, %d, %d"
0001413c  csel     x7, x27, x9, eq
00014140  adrp     x6, #0x7000
00014144  add      x6, x6, #0xae2  ; "triggerLut"
00014148  mov      w0, #3
0001414c  mov      w5, #0x6c
00014150  str      w28, [sp, #0x18]
00014154  str      w19, [sp, #0x10]
00014158  str      w25, [sp, #8]
0001415c  str      w22, [sp]
00014160  bl       #0x1ee00  ; <__android_log_print>
00014164  adrp     x10, #0x20000
00014168  mov      x11, x26
0001416c  ldr      x10, [x10, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
00014170  adrp     x26, #0x20000
00014174  adrp     x9, #0x20000
00014178  adrp     x27, #0x20000
0001417c  ldr      x26, [x26, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
00014180  ldr      w8, [x26]
00014184  ldr      x9, [x9, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00014188  ldr      x27, [x27, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0001418c  cmp      w8, #2
00014190  b.hi     #0x14224
00014194  ldrb     w8, [x9]
00014198  tbz      w8, #1, #0x14224
0001419c  ldr      w8, [x27]
000141a0  cbz      w8, #0x14224
000141a4  adrp     x0, #0x6000
000141a8  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
000141ac  mov      x26, x10
000141b0  mov      x27, x11
000141b4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000141b8  ldrb     w8, [x21, #0x18]
000141bc  ldr      x9, [x21, #0x28]
000141c0  add      x10, x21, #0x19
000141c4  mov      x2, x0
000141c8  adrp     x1, #0x6000
000141cc  add      x1, x1, #0xb34  ; =0x6b34
000141d0  tst      w8, #1
000141d4  adrp     x3, #0x7000
000141d8  add      x3, x3, #0xae2  ; "triggerLut"
000141dc  csel     x6, x10, x9, eq
000141e0  adrp     x5, #0x7000
000141e4  add      x5, x5, #0xc43  ; " [LeicaFilter][%s] lut index %d, %d, %d, %d"
000141e8  mov      w0, #2
000141ec  mov      w4, #0x6c
000141f0  mov      w7, w22
000141f4  str      w28, [sp, #0x10]
000141f8  str      w19, [sp, #8]
000141fc  str      w25, [sp]
00014200  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00014204  mov      x11, x27
00014208  mov      x10, x26
0001420c  adrp     x9, #0x20000
00014210  adrp     x27, #0x20000
00014214  adrp     x26, #0x20000
00014218  ldr      x9, [x9, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0001421c  ldr      x27, [x27, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
00014220  ldr      x26, [x26, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
00014224  ldrsh    w8, [x21]
00014228  str      x21, [sp, #0x68]
0001422c  cmp      w8, w22
00014230  b.ne     #0x143a4
00014234  ldrsh    w8, [x21, #2]
00014238  cmp      w8, w25
0001423c  b.ne     #0x143a4
00014240  ldrsh    w8, [x21, #4]
00014244  cmp      w8, w19
00014248  b.ne     #0x143a4
0001424c  ldrsh    w8, [x21, #6]
00014250  cmp      w8, w28
00014254  b.ne     #0x143a4
00014258  strh     w22, [x21]
0001425c  strh     w25, [x21, #2]
00014260  ldr      w8, [x11]
00014264  strh     w19, [x21, #4]
00014268  strh     w28, [x21, #6]
0001426c  cmp      w8, #2
00014270  b.hi     #0x1432c
00014274  ldrb     w8, [x10]
00014278  tbz      w8, #1, #0x1432c
0001427c  adrp     x0, #0x6000
00014280  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014284  mov      x23, x9
00014288  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0001428c  ldrb     w8, [x21, #0x18]
00014290  ldr      x9, [x21, #0x28]
00014294  add      x19, x21, #0x19
00014298  mov      x1, x0
0001429c  adrp     x3, #0x7000
000142a0  add      x3, x3, #0xae2  ; "triggerLut"
000142a4  tst      w8, #1
000142a8  adrp     x5, #0x7000
000142ac  add      x5, x5, #0x57b  ; " [LeicaFilter][%s] is_trigger_change = %d, no need to trigger"
000142b0  csel     x6, x19, x9, eq
000142b4  mov      w0, #2
000142b8  mov      w2, #0x8c
000142bc  mov      w4, #0x44
000142c0  mov      w7, wzr
000142c4  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000142c8  mov      x9, x23
000142cc  cbnz     w0, #0x1432c
000142d0  mov      w0, #2
000142d4  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
000142d8  mov      x22, x0
000142dc  adrp     x0, #0x6000
000142e0  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
000142e4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000142e8  ldrb     w8, [x21, #0x18]
000142ec  ldr      x9, [x21, #0x28]
000142f0  mov      x4, x0
000142f4  adrp     x1, #0x7000
000142f8  add      x1, x1, #0xf49  ; "MiAlgoEngine"
000142fc  adrp     x2, #0x7000
00014300  add      x2, x2, #0xc6f  ; "%s %s:%d %s() [LeicaFilter][%s] is_trigger_change = %d, no need to trigger"
00014304  tst      w8, #1
00014308  adrp     x6, #0x7000
0001430c  add      x6, x6, #0xae2  ; "triggerLut"
00014310  csel     x7, x19, x9, eq
00014314  mov      w0, #3
00014318  mov      x3, x22
0001431c  mov      w5, #0x8c
00014320  str      wzr, [sp]
00014324  bl       #0x1ee00  ; <__android_log_print>
00014328  mov      x9, x23
0001432c  ldr      w8, [x26]
00014330  ldp      x1, x19, [sp, #0x58]
00014334  cmp      w8, #2
00014338  b.hi     #0x14798
0001433c  ldrb     w8, [x9]
00014340  tbz      w8, #1, #0x14798
00014344  ldr      w8, [x27]
00014348  cbz      w8, #0x14798
0001434c  adrp     x0, #0x6000
00014350  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014354  mov      x22, x1
00014358  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0001435c  ldrb     w8, [x21, #0x18]
00014360  ldr      x9, [x21, #0x28]
00014364  add      x10, x21, #0x19
00014368  mov      x2, x0
0001436c  adrp     x1, #0x6000
00014370  add      x1, x1, #0xb34  ; =0x6b34
00014374  tst      w8, #1
00014378  adrp     x3, #0x7000
0001437c  add      x3, x3, #0xae2  ; "triggerLut"
00014380  csel     x6, x10, x9, eq
00014384  adrp     x5, #0x7000
00014388  add      x5, x5, #0x57b  ; " [LeicaFilter][%s] is_trigger_change = %d, no need to trigger"
0001438c  mov      w0, #2
00014390  mov      w4, #0x8c
00014394  mov      w7, wzr
00014398  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0001439c  mov      x1, x22
000143a0  b        #0x14798
000143a4  mov      w8, #1
000143a8  ldur     h1, [x29, #-0x66]
000143ac  ldur     h2, [x29, #-0x80]
000143b0  strb     w8, [x24]
000143b4  ldr      h3, [sp, #0x80]
000143b8  strh     w22, [x21]
000143bc  ucvtf    s1, s1
000143c0  ucvtf    s2, s2
000143c4  strh     w25, [x21, #2]
000143c8  strh     w19, [x21, #4]
000143cc  ldr      w8, [x11]
000143d0  strh     w28, [x21, #6]
000143d4  ldr      h0, [x23]
000143d8  fsub     s2, s2, s1
000143dc  ldr      h4, [x23, #2]
000143e0  cmp      w8, #3
000143e4  ucvtf    s0, s0
000143e8  fsub     s0, s0, s1
000143ec  ldr      h1, [sp, #0x8a]
000143f0  ucvtf    s1, s1
000143f4  fdiv     s0, s0, s2
000143f8  ucvtf    s2, s3
000143fc  ucvtf    s3, s4
00014400  ldr      h4, [sp, #0x70]
00014404  ucvtf    s4, s4
00014408  fsub     s2, s2, s1
0001440c  fsub     s1, s3, s1
00014410  fdiv     s1, s1, s2
00014414  ldr      h2, [sp, #0x7a]
00014418  ucvtf    s2, s2
0001441c  fsub     s3, s3, s2
00014420  fsub     s2, s4, s2
00014424  fdiv     s2, s3, s2
00014428  fmov     s3, #1.00000000
0001442c  fsub     s10, s3, s0
00014430  fsub     s12, s3, s1
00014434  fsub     s8, s3, s10
00014438  fsub     s13, s3, s12
0001443c  fsub     s9, s3, s2
00014440  fsub     s11, s3, s9
00014444  b.hs     #0x14550
00014448  ldrb     w8, [x10]
0001444c  tbz      w8, #1, #0x14550
00014450  adrp     x0, #0x6000
00014454  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014458  mov      x23, x11
0001445c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014460  fcvt     d14, s10
00014464  fcvt     d15, s8
00014468  ldrb     w8, [x21, #0x18]
0001446c  fcvt     d2, s12
00014470  fcvt     d3, s13
00014474  ldr      x9, [x21, #0x28]
00014478  fcvt     d4, s9
0001447c  fcvt     d5, s11
00014480  add      x24, x21, #0x19
00014484  tst      w8, #1
00014488  mov      x1, x0
0001448c  adrp     x3, #0x7000
00014490  add      x3, x3, #0xae2  ; "triggerLut"
00014494  fmov     d0, d14
00014498  fmov     d1, d15
0001449c  csel     x6, x24, x9, eq
000144a0  adrp     x5, #0x7000
000144a4  add      x5, x5, #0x36f  ; " [LeicaFilter][%s] %f, %f, %f, %f, %f, %f"
000144a8  mov      w0, #2
000144ac  mov      w2, #0xa8
000144b0  mov      w4, #0x44
000144b4  stp      d3, d2, [sp, #0x40]
000144b8  stp      d5, d4, [sp, #0x30]
000144bc  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
000144c0  adrp     x10, #0x20000
000144c4  adrp     x9, #0x20000
000144c8  mov      x11, x23
000144cc  ldr      x10, [x10, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
000144d0  ldr      x9, [x9, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
000144d4  cbnz     w0, #0x14550
000144d8  mov      w0, #2
000144dc  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
000144e0  str      x0, [sp, #0x28]
000144e4  adrp     x0, #0x6000
000144e8  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
000144ec  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000144f0  ldrb     w8, [x21, #0x18]
000144f4  fmov     d0, d14
000144f8  fmov     d1, d15
000144fc  ldr      x9, [x21, #0x28]
00014500  ldp      d3, d2, [sp, #0x40]
00014504  ldp      d5, d4, [sp, #0x30]
00014508  tst      w8, #1
0001450c  ldr      x3, [sp, #0x28]
00014510  mov      x4, x0
00014514  csel     x7, x24, x9, eq
00014518  adrp     x1, #0x7000
0001451c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00014520  adrp     x2, #0x7000
00014524  add      x2, x2, #0x6c1  ; "%s %s:%d %s() [LeicaFilter][%s] %f, %f, %f, %f, %f, %f"
00014528  adrp     x6, #0x7000
0001452c  add      x6, x6, #0xae2  ; "triggerLut"
00014530  mov      w0, #3
00014534  mov      w5, #0xa8
00014538  bl       #0x1ee00  ; <__android_log_print>
0001453c  adrp     x10, #0x20000
00014540  adrp     x9, #0x20000
00014544  mov      x11, x23
00014548  ldr      x10, [x10, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0001454c  ldr      x9, [x9, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00014550  ldr      w8, [x26]
00014554  mov      x23, x26
00014558  cmp      w8, #2
0001455c  b.hi     #0x145e8
00014560  ldrb     w8, [x9]
00014564  tbz      w8, #1, #0x145e8
00014568  ldr      w8, [x27]
0001456c  cbz      w8, #0x145e8
00014570  adrp     x0, #0x6000
00014574  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014578  mov      x26, x10
0001457c  mov      x24, x11
00014580  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014584  ldrb     w8, [x21, #0x18]
00014588  fcvt     d0, s10
0001458c  fcvt     d1, s8
00014590  fcvt     d2, s12
00014594  fcvt     d3, s13
00014598  ldr      x9, [x21, #0x28]
0001459c  fcvt     d4, s9
000145a0  fcvt     d5, s11
000145a4  add      x10, x21, #0x19
000145a8  tst      w8, #1
000145ac  mov      x2, x0
000145b0  adrp     x1, #0x6000
000145b4  add      x1, x1, #0xb34  ; =0x6b34
000145b8  csel     x6, x10, x9, eq
000145bc  adrp     x3, #0x7000
000145c0  add      x3, x3, #0xae2  ; "triggerLut"
000145c4  adrp     x5, #0x7000
000145c8  add      x5, x5, #0x36f  ; " [LeicaFilter][%s] %f, %f, %f, %f, %f, %f"
000145cc  mov      w0, #2
000145d0  mov      w4, #0xa8
000145d4  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
000145d8  adrp     x9, #0x20000
000145dc  mov      x11, x24
000145e0  mov      x10, x26
000145e4  ldr      x9, [x9, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
000145e8  fmul     s15, s10, s12
000145ec  fmul     s13, s10, s13
000145f0  ldr      w8, [x11]
000145f4  fmul     s14, s8, s9
000145f8  fmul     s12, s8, s11
000145fc  cmp      w8, #2
00014600  b.hi     #0x146e4
00014604  ldrb     w8, [x10]
00014608  tbz      w8, #1, #0x146e4
0001460c  adrp     x0, #0x6000
00014610  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014614  mov      x26, x9
00014618  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0001461c  fcvt     d8, s15
00014620  fcvt     d9, s13
00014624  ldrb     w8, [x21, #0x18]
00014628  fcvt     d10, s14
0001462c  fcvt     d11, s12
00014630  ldr      x9, [x21, #0x28]
00014634  add      x24, x21, #0x19
00014638  tst      w8, #1
0001463c  mov      x1, x0
00014640  csel     x6, x24, x9, eq
00014644  adrp     x3, #0x7000
00014648  add      x3, x3, #0xae2  ; "triggerLut"
0001464c  fmov     d0, d8
00014650  fmov     d1, d9
00014654  adrp     x5, #0x5000
00014658  add      x5, x5, #0x937  ; " [LeicaFilter][%s] %f, %f, %f, %f"
0001465c  fmov     d2, d10
00014660  fmov     d3, d11
00014664  mov      w0, #2
00014668  mov      w2, #0xb0
0001466c  mov      w4, #0x44
00014670  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00014674  mov      x9, x26
00014678  cbnz     w0, #0x146e4
0001467c  mov      w0, #2
00014680  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00014684  str      x0, [sp, #0x48]
00014688  adrp     x0, #0x6000
0001468c  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014690  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00014694  ldrb     w8, [x21, #0x18]
00014698  fmov     d0, d8
0001469c  fmov     d1, d9
000146a0  fmov     d2, d10
000146a4  fmov     d3, d11
000146a8  ldr      x9, [x21, #0x28]
000146ac  tst      w8, #1
000146b0  ldr      x3, [sp, #0x48]
000146b4  mov      x4, x0
000146b8  csel     x7, x24, x9, eq
000146bc  adrp     x1, #0x7000
000146c0  add      x1, x1, #0xf49  ; "MiAlgoEngine"
000146c4  adrp     x2, #0x5000
000146c8  add      x2, x2, #0xb79  ; "%s %s:%d %s() [LeicaFilter][%s] %f, %f, %f, %f"
000146cc  adrp     x6, #0x7000
000146d0  add      x6, x6, #0xae2  ; "triggerLut"
000146d4  mov      w0, #3
000146d8  mov      w5, #0xb0
000146dc  bl       #0x1ee00  ; <__android_log_print>
000146e0  mov      x9, x26
000146e4  ldr      w8, [x23]
000146e8  cmp      w8, #2
000146ec  b.hi     #0x14758
000146f0  ldrb     w8, [x9]
000146f4  tbz      w8, #1, #0x14758
000146f8  ldr      w8, [x27]
000146fc  cbz      w8, #0x14758
00014700  adrp     x0, #0x6000
00014704  add      x0, x0, #0x59d  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/paramTrigger.cpp"
00014708  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0001470c  ldrb     w8, [x21, #0x18]
00014710  fcvt     d0, s15
00014714  fcvt     d1, s13
00014718  fcvt     d2, s14
0001471c  fcvt     d3, s12
00014720  ldr      x9, [x21, #0x28]
00014724  add      x10, x21, #0x19
00014728  tst      w8, #1
0001472c  mov      x2, x0
00014730  csel     x6, x10, x9, eq
00014734  adrp     x1, #0x6000
00014738  add      x1, x1, #0xb34  ; =0x6b34
0001473c  adrp     x3, #0x7000
00014740  add      x3, x3, #0xae2  ; "triggerLut"
00014744  adrp     x5, #0x5000
00014748  add      x5, x5, #0x937  ; " [LeicaFilter][%s] %f, %f, %f, %f"
0001474c  mov      w0, #2
00014750  mov      w4, #0xb0
00014754  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00014758  cmp      w22, w25
0001475c  b.ne     #0x147f0
00014760  cmp      w22, w19
00014764  b.ne     #0x147f0
00014768  cmp      w22, w28
0001476c  b.ne     #0x147f0
00014770  mov      w8, #0x3993
00014774  ldr      x9, [x21, #0x40]
00014778  ldr      x19, [sp, #0x58]
0001477c  nop      
00014780  umaddl   x1, w22, w8, x9
00014784  mov      w2, #0x3993
00014788  mov      x0, x19
0001478c  bl       #0x1f358  ; <memcpy>
00014790  mov      x1, x19
00014794  ldr      x19, [sp, #0x60]
00014798  add      x0, sp, #0x68
0001479c  bl       #0x15b60
000147a0  ldr      x10, [sp, #0x50]
000147a4  ldr      x8, [x19, #0x28]
000147a8  ldur     x9, [x29, #-0x50]
000147ac  cmp      x10, x20
000147b0  cset     w0, ne
000147b4  cmp      x8, x9
000147b8  b.ne     #0x14a08
000147bc  ldp      x20, x19, [sp, #0x160]
000147c0  ldp      x22, x21, [sp, #0x150]
000147c4  ldp      x24, x23, [sp, #0x140]
000147c8  ldp      x26, x25, [sp, #0x130]
000147cc  ldp      x28, x27, [sp, #0x120]
000147d0  ldp      x29, x30, [sp, #0x110]
000147d4  ldp      d9, d8, [sp, #0x100]
000147d8  ldp      d11, d10, [sp, #0xf0]
000147dc  ldp      d13, d12, [sp, #0xe0]
000147e0  ldp      d15, d14, [sp, #0xd0]
000147e4  add      sp, sp, #0x170
000147e8  autiasp  
000147ec  ret      
000147f0  cmp      w22, w25
000147f4  b.ne     #0x14858
000147f8  fadd     s0, s15, s13
000147fc  mov      w8, #0x3993
00014800  cmp      w19, w28
00014804  b.ne     #0x148c0
00014808  fadd     s1, s14, s12
0001480c  umull    x10, w19, w8
00014810  ldp      x1, x19, [sp, #0x58]
00014814  umull    x9, w22, w8
00014818  mov      x11, x1
0001481c  ldr      x12, [x21, #0x40]
00014820  subs     x8, x8, #1
00014824  ldr      b2, [x12, x9]
00014828  ldr      b3, [x12, x10]
0001482c  add      x9, x9, #1  ; =0x20001
00014830  add      x10, x10, #1  ; =0x20001
00014834  ucvtf    s2, s2
00014838  ucvtf    s3, s3
0001483c  fmul     s2, s0, s2
00014840  fmul     s3, s1, s3
00014844  fadd     s2, s2, s3
00014848  fcvtzs   w12, s2
0001484c  strb     w12, [x11], #1
00014850  b.ne     #0x1481c
00014854  b        #0x14798
00014858  cmp      w22, w19
0001485c  b.ne     #0x14924
00014860  fadd     s0, s15, s14
00014864  mov      w8, #0x3993
00014868  cmp      w25, w28
0001486c  b.ne     #0x149a4
00014870  fadd     s1, s13, s12
00014874  ldp      x1, x19, [sp, #0x58]
00014878  umull    x9, w22, w8
0001487c  umull    x10, w25, w8
00014880  mov      x11, x1
00014884  ldr      x12, [x21, #0x40]
00014888  subs     x8, x8, #1
0001488c  ldr      b2, [x12, x9]
00014890  ldr      b3, [x12, x10]
00014894  add      x9, x9, #1  ; =0x20001
00014898  add      x10, x10, #1  ; =0x20001
0001489c  ucvtf    s2, s2
000148a0  ucvtf    s3, s3
000148a4  fmul     s2, s0, s2
000148a8  fmul     s3, s1, s3
000148ac  fadd     s2, s2, s3
000148b0  fcvtzs   w12, s2
000148b4  strb     w12, [x11], #1
000148b8  b.ne     #0x14884
000148bc  b        #0x14798
000148c0  umull    x10, w19, w8
000148c4  ldp      x1, x19, [sp, #0x58]
000148c8  umull    x9, w22, w8
000148cc  umull    x11, w28, w8
000148d0  mov      x12, x1
000148d4  ldr      x13, [x21, #0x40]
000148d8  subs     x8, x8, #1
000148dc  ldr      b1, [x13, x9]
000148e0  ldr      b2, [x13, x10]
000148e4  ldr      b3, [x13, x11]
000148e8  add      x9, x9, #1  ; =0x20001
000148ec  add      x10, x10, #1  ; =0x20001
000148f0  add      x11, x11, #1  ; =0x20001
000148f4  ucvtf    s1, s1
000148f8  ucvtf    s2, s2
000148fc  ucvtf    s3, s3
00014900  fmul     s1, s0, s1
00014904  fmul     s2, s14, s2
00014908  fadd     s1, s1, s2
0001490c  fmul     s2, s12, s3
00014910  fadd     s1, s1, s2
00014914  fcvtzs   w13, s1
00014918  strb     w13, [x12], #1
0001491c  b.ne     #0x148d4
00014920  b        #0x14798
00014924  mov      w8, #0x3993
00014928  umull    x11, w19, w8
0001492c  ldp      x1, x19, [sp, #0x58]
00014930  umull    x9, w22, w8
00014934  umull    x10, w25, w8
00014938  umull    x12, w28, w8
0001493c  mov      x13, x1
00014940  ldr      x14, [x21, #0x40]
00014944  subs     x8, x8, #1
00014948  ldr      b0, [x14, x9]
0001494c  ldr      b1, [x14, x10]
00014950  ldr      b2, [x14, x11]
00014954  ldr      b3, [x14, x12]
00014958  add      x9, x9, #1  ; =0x20001
0001495c  add      x10, x10, #1  ; =0x20001
00014960  ucvtf    s0, s0
00014964  ucvtf    s1, s1
00014968  ucvtf    s2, s2
0001496c  add      x11, x11, #1  ; =0x20001
00014970  add      x12, x12, #1
00014974  fmul     s0, s15, s0
00014978  fmul     s1, s13, s1
0001497c  fmul     s2, s14, s2
00014980  fadd     s0, s0, s1
00014984  ucvtf    s1, s3
00014988  fadd     s0, s0, s2
0001498c  fmul     s1, s12, s1
00014990  fadd     s0, s0, s1
00014994  fcvtzs   w14, s0
00014998  strb     w14, [x13], #1
0001499c  b.ne     #0x14940
000149a0  b        #0x14798
000149a4  ldp      x1, x19, [sp, #0x58]
000149a8  umull    x9, w22, w8
000149ac  umull    x10, w25, w8
000149b0  umull    x11, w28, w8
000149b4  mov      x12, x1
000149b8  ldr      x13, [x21, #0x40]
000149bc  subs     x8, x8, #1
000149c0  ldr      b1, [x13, x9]
000149c4  ldr      b2, [x13, x10]
000149c8  ldr      b3, [x13, x11]
000149cc  add      x9, x9, #1  ; =0x20001
000149d0  add      x10, x10, #1  ; =0x20001
000149d4  add      x11, x11, #1  ; =0x20001
000149d8  ucvtf    s1, s1
000149dc  ucvtf    s2, s2
000149e0  ucvtf    s3, s3
000149e4  fmul     s1, s0, s1
000149e8  fmul     s2, s13, s2
000149ec  fadd     s1, s1, s2
000149f0  fmul     s2, s12, s3
000149f4  fadd     s1, s1, s2
000149f8  fcvtzs   w13, s1
000149fc  strb     w13, [x12], #1
00014a00  b.ne     #0x149b8
00014a04  b        #0x14798
00014a08  bl       #0x1ecf8  ; <__stack_chk_fail>
