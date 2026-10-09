; function 0xdafc size 0xf58 _ZN19MiLeicaFilterPlugin14processRequestEP18ProcessRequestInfo
0000dafc  paciasp  
0000db00  stp      x29, x30, [sp, #-0x60]!
0000db04  stp      x28, x27, [sp, #0x10]
0000db08  stp      x26, x25, [sp, #0x20]
0000db0c  stp      x24, x23, [sp, #0x30]
0000db10  stp      x22, x21, [sp, #0x40]
0000db14  stp      x20, x19, [sp, #0x50]
0000db18  mov      x29, sp
0000db1c  sub      sp, sp, #0x390
0000db20  mrs      x28, tpidr_el0
0000db24  movi     v0.2d, #0000000000000000
0000db28  mov      x20, x1
0000db2c  ldr      x8, [x28, #0x28]
0000db30  sub      x2, x29, #0x80
0000db34  mov      x19, x0
0000db38  stur     x8, [x29, #-0x18]
0000db3c  ldr      w8, [x1, #0x48]
0000db40  stp      q0, q0, [x29, #-0xa0]
0000db44  stp      q0, q0, [x29, #-0x80]
0000db48  str      w8, [x0, #0x14]
0000db4c  ldr      x8, [x0]
0000db50  ldr      x24, [x1]
0000db54  stp      q0, q0, [x29, #-0xc0]
0000db58  ldr      x23, [x1, #0x18]
0000db5c  stp      q0, q0, [x29, #-0xe0]
0000db60  ldr      x8, [x8, #0x90]
0000db64  stp      q0, q0, [x29, #-0x60]
0000db68  stp      q0, q0, [x29, #-0x40]
0000db6c  stp      q0, q0, [sp, #0x50]
0000db70  stp      q0, q0, [sp, #0x70]
0000db74  stp      q0, q0, [sp, #0x90]
0000db78  ldr      x1, [x24, #0x28]
0000db7c  blr      x8
0000db80  ldr      x8, [x19]
0000db84  ldr      x1, [x23, #0x28]
0000db88  sub      x2, x29, #0xe0
0000db8c  mov      x0, x19
0000db90  ldr      x8, [x8, #0x90]
0000db94  blr      x8
0000db98  ldur     d0, [x29, #-0x7c]
0000db9c  ldrb     w8, [x19, #0x22]
0000dba0  stur     d0, [x19, #0xc]
0000dba4  tbz      w8, #0, #0xdbb4
0000dba8  ldr      w8, [x19, #0xd0]
0000dbac  cbnz     w8, #0xdc1c
0000dbb0  b        #0xdbcc
0000dbb4  mov      x0, x19
0000dbb8  bl       #0x1f130  ; <_ZN19MiLeicaFilterPlugin15releaseResourceEv>
0000dbbc  mov      x0, x19
0000dbc0  bl       #0x1ee30  ; <_ZN19MiLeicaFilterPlugin12initResourceEv>
0000dbc4  ldr      w8, [x19, #0xd0]
0000dbc8  cbnz     w8, #0xdc1c
0000dbcc  ldrb     w8, [x19, #0x23]
0000dbd0  tbnz     w8, #0, #0xdc1c
0000dbd4  ldr      x0, [x19, #0x90]
0000dbd8  mov      w8, #1
0000dbdc  strb     w8, [x19, #0x23]
0000dbe0  cbz      x0, #0xdc0c
0000dbe4  ldr      x8, [x0]
0000dbe8  ldr      x8, [x8, #8]
0000dbec  blr      x8
0000dbf0  ldr      w8, [x19, #0xd0]
0000dbf4  str      xzr, [x19, #0x90]
0000dbf8  cbz      w8, #0xdc0c
0000dbfc  cmp      w8, #1
0000dc00  b.ne     #0xdc1c
0000dc04  mov      w0, #0xa
0000dc08  b        #0xdc10
0000dc0c  mov      w0, #9
0000dc10  mov      w1, wzr
0000dc14  bl       #0x1ef20  ; <_ZN16ProcessorCreator12createFilterEN12videoprocess11VideoFormatEb>
0000dc18  str      x0, [x19, #0x90]
0000dc1c  ldr      x1, [x24, #0x28]
0000dc20  mov      x0, x19
0000dc24  bl       #0x1f148  ; <_ZN19MiLeicaFilterPlugin16fillMetaDataInfoER11ImageParams>
0000dc28  ldrb     w8, [x19, #0x26]
0000dc2c  cmp      w8, #1
0000dc30  b.ne     #0xdd8c
0000dc34  ldr      w8, [x19, #0xd0]
0000dc38  cbnz     w8, #0xdd8c
0000dc3c  ldrb     w8, [x19, #0x27]
0000dc40  cbnz     w8, #0xdd8c
0000dc44  adrp     x8, #0x20000
0000dc48  mov      w9, #1
0000dc4c  ldr      x8, [x8, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
0000dc50  strb     w9, [x19, #0x28]
0000dc54  ldr      w8, [x8]
0000dc58  cmp      w8, #4
0000dc5c  b.hi     #0xdd0c
0000dc60  adrp     x8, #0x20000
0000dc64  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000dc68  ldrb     w8, [x8]
0000dc6c  tbz      w8, #1, #0xdd0c
0000dc70  adrp     x0, #0x5000
0000dc74  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000dc78  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000dc7c  ldrb     w8, [x19, #0x38]
0000dc80  ldr      x9, [x19, #0x48]
0000dc84  add      x22, x19, #0x39
0000dc88  mov      x1, x0
0000dc8c  adrp     x3, #0x6000
0000dc90  add      x3, x3, #0xfa5  ; "processRequest"
0000dc94  tst      w8, #1
0000dc98  adrp     x5, #0x6000
0000dc9c  add      x5, x5, #0x2cc  ; "[LeicaFilter][%s] use pre param for M9"
0000dca0  csel     x6, x22, x9, eq
0000dca4  mov      w0, #2
0000dca8  mov      w2, #0xa4
0000dcac  mov      w4, #0x49
0000dcb0  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000dcb4  cbnz     w0, #0xdd0c
0000dcb8  mov      w0, #2
0000dcbc  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000dcc0  mov      x21, x0
0000dcc4  adrp     x0, #0x5000
0000dcc8  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000dccc  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000dcd0  ldrb     w8, [x19, #0x38]
0000dcd4  ldr      x9, [x19, #0x48]
0000dcd8  mov      x4, x0
0000dcdc  adrp     x1, #0x7000
0000dce0  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000dce4  adrp     x2, #0x6000
0000dce8  add      x2, x2, #0xb36  ; "%s %s:%d %s()[LeicaFilter][%s] use pre param for M9"
0000dcec  tst      w8, #1
0000dcf0  adrp     x6, #0x6000
0000dcf4  add      x6, x6, #0xfa5  ; "processRequest"
0000dcf8  csel     x7, x22, x9, eq
0000dcfc  mov      w0, #4
0000dd00  mov      x3, x21
0000dd04  mov      w5, #0xa4
0000dd08  bl       #0x1ee00  ; <__android_log_print>
0000dd0c  adrp     x8, #0x20000
0000dd10  ldr      x8, [x8, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
0000dd14  ldr      w8, [x8]
0000dd18  cmp      w8, #4
0000dd1c  b.hi     #0xdd90
0000dd20  adrp     x8, #0x20000
0000dd24  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000dd28  ldrb     w8, [x8]
0000dd2c  tbz      w8, #1, #0xdd90
0000dd30  adrp     x8, #0x20000
0000dd34  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0000dd38  ldr      w8, [x8]
0000dd3c  cbz      w8, #0xdd90
0000dd40  adrp     x0, #0x5000
0000dd44  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000dd48  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000dd4c  ldrb     w8, [x19, #0x38]
0000dd50  ldr      x9, [x19, #0x48]
0000dd54  add      x10, x19, #0x39
0000dd58  mov      x2, x0
0000dd5c  adrp     x1, #0x7000
0000dd60  add      x1, x1, #0xb6f  ; =0x7b6f
0000dd64  tst      w8, #1
0000dd68  adrp     x3, #0x6000
0000dd6c  add      x3, x3, #0xfa5  ; "processRequest"
0000dd70  csel     x6, x10, x9, eq
0000dd74  adrp     x5, #0x6000
0000dd78  add      x5, x5, #0x2cc  ; "[LeicaFilter][%s] use pre param for M9"
0000dd7c  mov      w0, #2
0000dd80  mov      w4, #0xa4
0000dd84  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000dd88  b        #0xdd90
0000dd8c  strb     wzr, [x19, #0x28]
0000dd90  adrp     x8, #0x20000
0000dd94  ldr      x8, [x8, #0xd78]  ; =0x20d78 <_ZN19MiLeicaFilterPlugin11m_debugModeE>
0000dd98  ldr      w8, [x8]
0000dd9c  cbz      w8, #0xddfc
0000dda0  mov      x0, x19
0000dda4  ldrb     w10, [x0, #0xb8]!
0000dda8  mov      x9, x0
0000ddac  ldur     x11, [x0, #-0x68]
0000ddb0  ldrb     w8, [x9, #-0x60]!
0000ddb4  stur     x11, [x0, #-8]
0000ddb8  tbnz     w10, #0, #0xddd4
0000ddbc  tbnz     w8, #0, #0xddf4
0000ddc0  ldr      q0, [x9]
0000ddc4  ldr      x8, [x9, #0x10]
0000ddc8  str      q0, [x0]
0000ddcc  str      x8, [x0, #0x10]  ; =0x5010
0000ddd0  b        #0xddfc
0000ddd4  ldp      x10, x9, [x19, #0x60]
0000ddd8  lsr      x11, x8, #1
0000dddc  add      x12, x19, #0x59
0000dde0  tst      w8, #1
0000dde4  csel     x1, x12, x9, eq
0000dde8  csel     x2, x11, x10, eq
0000ddec  bl       #0x12440
0000ddf0  b        #0xddfc
0000ddf4  ldp      x2, x1, [x19, #0x60]
0000ddf8  bl       #0x1238c
0000ddfc  mov      x21, x19
0000de00  strb     wzr, [x21, #0x98]!
0000de04  ldr      x2, [x21, #8]
0000de08  cbz      x2, #0xde44
0000de0c  ldrb     w9, [x19, #0x28]
0000de10  ldr      x8, [x19, #0xb0]
0000de14  cmp      w9, #1
0000de18  b.ne     #0xde50
0000de1c  ldrb     w10, [x19, #0xb8]
0000de20  ldr      x22, [x19, #0x88]
0000de24  add      x9, sp, #0x30
0000de28  str      x8, [sp, #0x30]
0000de2c  tbnz     w10, #0, #0xde78
0000de30  ldur     q0, [x19, #0xb8]
0000de34  ldur     x8, [x19, #0xc8]
0000de38  stur     q0, [x9, #8]
0000de3c  stur     x8, [x9, #0x18]
0000de40  b        #0xde88
0000de44  mov      w8, #1
0000de48  strb     w8, [x19, #0x20]
0000de4c  b        #0xe044
0000de50  ldrb     w10, [x19, #0xb8]
0000de54  ldr      x22, [x19, #0x80]
0000de58  add      x9, sp, #0x10
0000de5c  str      x8, [sp, #0x10]
0000de60  tbnz     w10, #0, #0xdeb4
0000de64  ldur     q0, [x19, #0xb8]
0000de68  ldur     x8, [x19, #0xc8]
0000de6c  stur     q0, [x9, #8]
0000de70  stur     x8, [x9, #0x18]
0000de74  b        #0xdec4
0000de78  ldp      x2, x1, [x19, #0xc0]
0000de7c  add      x0, x9, #8
0000de80  bl       #0x126f8
0000de84  ldr      x2, [x19, #0xa0]
0000de88  ldr      x3, [x19, #0xa8]
0000de8c  add      x1, sp, #0x30
0000de90  mov      x0, x22
0000de94  mov      x4, x21
0000de98  bl       #0x1f160  ; <_ZN12ParamTrigger7triggerE15param_trigger_tP11param_lut_tP21param_shading_float_tRb>
0000de9c  ldrb     w8, [sp, #0x38]
0000dea0  mov      w21, w0
0000dea4  tbz      w8, #0, #0xdee4
0000dea8  ldr      x0, [sp, #0x48]
0000deac  ldr      x8, [sp, #0x38]
0000deb0  b        #0xdef4
0000deb4  ldp      x2, x1, [x19, #0xc0]
0000deb8  add      x0, x9, #8
0000debc  bl       #0x126f8
0000dec0  ldr      x2, [x19, #0xa0]
0000dec4  ldr      x3, [x19, #0xa8]
0000dec8  add      x1, sp, #0x10
0000decc  mov      x0, x22
0000ded0  mov      x4, x21
0000ded4  bl       #0x1f160  ; <_ZN12ParamTrigger7triggerE15param_trigger_tP11param_lut_tP21param_shading_float_tRb>
0000ded8  ldrb     w8, [sp, #0x18]
0000dedc  mov      w21, w0
0000dee0  tbnz     w8, #0, #0xdeec
0000dee4  tbz      w21, #0, #0xdf00
0000dee8  b        #0xe044
0000deec  ldr      x0, [sp, #0x28]
0000def0  ldr      x8, [sp, #0x18]
0000def4  and      x1, x8, #0xfffffffffffffffe
0000def8  bl       #0x1ed58  ; <_ZdlPvm>
0000defc  tbnz     w21, #0, #0xe044
0000df00  adrp     x8, #0x20000
0000df04  mov      w9, #1
0000df08  ldr      x8, [x8, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
0000df0c  strb     w9, [x19, #0x20]
0000df10  ldr      w8, [x8]
0000df14  cmp      w8, #4
0000df18  b.hi     #0xdfc8
0000df1c  adrp     x8, #0x20000
0000df20  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000df24  ldrb     w8, [x8]
0000df28  tbz      w8, #1, #0xdfc8
0000df2c  adrp     x0, #0x5000
0000df30  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000df34  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000df38  ldrb     w8, [x19, #0x38]
0000df3c  ldr      x9, [x19, #0x48]
0000df40  add      x22, x19, #0x39
0000df44  mov      x1, x0
0000df48  adrp     x3, #0x6000
0000df4c  add      x3, x3, #0xfa5  ; "processRequest"
0000df50  tst      w8, #1
0000df54  adrp     x5, #0x5000
0000df58  add      x5, x5, #0x870  ; "[LeicaFilter][%s] algo bypass for trigger fail!"
0000df5c  csel     x6, x22, x9, eq
0000df60  mov      w0, #2
0000df64  mov      w2, #0xba
0000df68  mov      w4, #0x49
0000df6c  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000df70  cbnz     w0, #0xdfc8
0000df74  mov      w0, #2
0000df78  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000df7c  mov      x21, x0
0000df80  adrp     x0, #0x5000
0000df84  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000df88  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000df8c  ldrb     w8, [x19, #0x38]
0000df90  ldr      x9, [x19, #0x48]
0000df94  mov      x4, x0
0000df98  adrp     x1, #0x7000
0000df9c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000dfa0  adrp     x2, #0x6000
0000dfa4  add      x2, x2, #0xe12  ; "%s %s:%d %s()[LeicaFilter][%s] algo bypass for trigger fail!"
0000dfa8  tst      w8, #1
0000dfac  adrp     x6, #0x6000
0000dfb0  add      x6, x6, #0xfa5  ; "processRequest"
0000dfb4  csel     x7, x22, x9, eq
0000dfb8  mov      w0, #4
0000dfbc  mov      x3, x21
0000dfc0  mov      w5, #0xba
0000dfc4  bl       #0x1ee00  ; <__android_log_print>
0000dfc8  adrp     x8, #0x20000
0000dfcc  ldr      x8, [x8, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
0000dfd0  ldr      w8, [x8]
0000dfd4  cmp      w8, #4
0000dfd8  b.hi     #0xe044
0000dfdc  adrp     x8, #0x20000
0000dfe0  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000dfe4  ldrb     w8, [x8]
0000dfe8  tbz      w8, #1, #0xe044
0000dfec  adrp     x8, #0x20000
0000dff0  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0000dff4  ldr      w8, [x8]
0000dff8  cbz      w8, #0xe044
0000dffc  adrp     x0, #0x5000
0000e000  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000e004  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e008  ldrb     w8, [x19, #0x38]
0000e00c  ldr      x9, [x19, #0x48]
0000e010  add      x10, x19, #0x39
0000e014  mov      x2, x0
0000e018  adrp     x1, #0x7000
0000e01c  add      x1, x1, #0xb6f  ; =0x7b6f
0000e020  tst      w8, #1
0000e024  adrp     x3, #0x6000
0000e028  add      x3, x3, #0xfa5  ; "processRequest"
0000e02c  csel     x6, x10, x9, eq
0000e030  adrp     x5, #0x5000
0000e034  add      x5, x5, #0x870  ; "[LeicaFilter][%s] algo bypass for trigger fail!"
0000e038  mov      w0, #2
0000e03c  mov      w4, #0xba
0000e040  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000e044  ldrb     w8, [x19, #0x24]
0000e048  cmp      w8, #1
0000e04c  b.ne     #0xe14c
0000e050  ldr      w8, [x19, #0xd0]
0000e054  cbnz     w8, #0xe124
0000e058  movi     v0.2d, #0000000000000000
0000e05c  ldrb     w8, [x19, #0x38]
0000e060  ldr      x9, [x19, #0x48]
0000e064  ldr      x4, [x19, #0x18]
0000e068  add      x10, x19, #0x39
0000e06c  adrp     x3, #0x6000
0000e070  add      x3, x3, #0xe4f  ; "%s_leica_filter_%s_exif.txt"
0000e074  tst      w8, #1
0000e078  add      x0, sp, #0x1b0
0000e07c  csel     x5, x10, x9, eq
0000e080  mov      w1, #0x100
0000e084  mov      w2, #0x100
0000e088  stp      q0, q0, [sp, #0x1b0]
0000e08c  stp      q0, q0, [sp, #0x1d0]
0000e090  stp      q0, q0, [sp, #0x1f0]
0000e094  stp      q0, q0, [sp, #0x210]
0000e098  stp      q0, q0, [sp, #0x230]
0000e09c  stp      q0, q0, [sp, #0x250]
0000e0a0  stp      q0, q0, [sp, #0x270]
0000e0a4  stp      q0, q0, [sp, #0x290]
0000e0a8  bl       #0xd5d4
0000e0ac  movi     v0.2d, #0000000000000000
0000e0b0  adrp     x21, #0x7000
0000e0b4  add      x21, x21, #0x916  ; "/data/vendor/camera/MIVI_leica/"
0000e0b8  adrp     x3, #0x5000
0000e0bc  add      x3, x3, #0xc43  ; "%s%s"
0000e0c0  add      x0, sp, #0xb0
0000e0c4  add      x5, sp, #0x1b0
0000e0c8  mov      w1, #0x100
0000e0cc  mov      w2, #0x100
0000e0d0  mov      x4, x21
0000e0d4  stp      q0, q0, [sp, #0xb0]
0000e0d8  stp      q0, q0, [sp, #0xd0]
0000e0dc  stp      q0, q0, [sp, #0xf0]
0000e0e0  stp      q0, q0, [sp, #0x110]
0000e0e4  stp      q0, q0, [sp, #0x130]
0000e0e8  stp      q0, q0, [sp, #0x150]
0000e0ec  stp      q0, q0, [sp, #0x170]
0000e0f0  stp      q0, q0, [sp, #0x190]
0000e0f4  bl       #0xd5d4
0000e0f8  mov      x0, x21
0000e0fc  mov      w1, #0x1ff
0000e100  bl       #0x1f178  ; <mkdir>
0000e104  adrp     x1, #0x6000
0000e108  add      x1, x1, #0xb30  ; "wb+"
0000e10c  add      x0, sp, #0xb0
0000e110  bl       #0x1eea8  ; <fopen>
0000e114  str      x0, [x19, #0x30]
0000e118  add      x0, sp, #0xb0
0000e11c  mov      w1, #0x1b6
0000e120  bl       #0x1eec0  ; <chmod>
0000e124  ldr      x1, [x19, #0x30]
0000e128  ldr      x2, [x19, #0xa0]
0000e12c  mov      x0, x19
0000e130  ldr      w4, [x20, #0x48]
0000e134  bl       #0x1f190  ; <_ZN19MiLeicaFilterPlugin8exifDumpEP7__sFILEP11param_lut_tP21param_shading_float_tj>
0000e138  ldr      w8, [x19, #0xd0]
0000e13c  cbnz     w8, #0xe14c
0000e140  ldr      x0, [x19, #0x30]
0000e144  bl       #0x1f1a8  ; <fclose>
0000e148  str      xzr, [x19, #0x30]
0000e14c  ldrb     w8, [x19, #0x20]
0000e150  cmp      w8, #1
0000e154  b.ne     #0xe2a4
0000e158  sub      x0, x29, #0xe0
0000e15c  sub      x1, x29, #0x80
0000e160  bl       #0x1f1c0  ; <_ZN7mialgo211PluginUtils12miCopyBufferEPNS_13MiImageBufferES2_>
0000e164  adrp     x8, #0x20000
0000e168  ldr      x8, [x8, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
0000e16c  ldr      w8, [x8]
0000e170  cmp      w8, #4
0000e174  b.hi     #0xe224
0000e178  adrp     x8, #0x20000
0000e17c  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000e180  ldrb     w8, [x8]
0000e184  tbz      w8, #1, #0xe224
0000e188  adrp     x0, #0x5000
0000e18c  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000e190  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e194  ldrb     w8, [x19, #0x38]
0000e198  ldr      x9, [x19, #0x48]
0000e19c  add      x21, x19, #0x39
0000e1a0  mov      x1, x0
0000e1a4  adrp     x3, #0x6000
0000e1a8  add      x3, x3, #0xfa5  ; "processRequest"
0000e1ac  tst      w8, #1
0000e1b0  adrp     x5, #0x7000
0000e1b4  add      x5, x5, #0x13f  ; "[LeicaFilter][%s] algo bypass"
0000e1b8  csel     x6, x21, x9, eq
0000e1bc  mov      w0, #2
0000e1c0  mov      w2, #0xd9
0000e1c4  mov      w4, #0x49
0000e1c8  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000e1cc  cbnz     w0, #0xe224
0000e1d0  mov      w0, #2
0000e1d4  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000e1d8  mov      x20, x0
0000e1dc  adrp     x0, #0x5000
0000e1e0  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000e1e4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e1e8  ldrb     w8, [x19, #0x38]
0000e1ec  ldr      x9, [x19, #0x48]
0000e1f0  mov      x4, x0
0000e1f4  adrp     x1, #0x7000
0000e1f8  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000e1fc  adrp     x2, #0x7000
0000e200  add      x2, x2, #0xa74  ; "%s %s:%d %s()[LeicaFilter][%s] algo bypass"
0000e204  tst      w8, #1
0000e208  adrp     x6, #0x6000
0000e20c  add      x6, x6, #0xfa5  ; "processRequest"
0000e210  csel     x7, x21, x9, eq
0000e214  mov      w0, #4
0000e218  mov      x3, x20
0000e21c  mov      w5, #0xd9
0000e220  bl       #0x1ee00  ; <__android_log_print>
0000e224  adrp     x8, #0x20000
0000e228  ldr      x8, [x8, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
0000e22c  ldr      w8, [x8]
0000e230  cmp      w8, #4
0000e234  b.hi     #0xe6bc
0000e238  adrp     x8, #0x20000
0000e23c  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000e240  ldrb     w8, [x8]
0000e244  tbz      w8, #1, #0xe6bc
0000e248  adrp     x8, #0x20000
0000e24c  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0000e250  ldr      w8, [x8]
0000e254  cbz      w8, #0xe6bc
0000e258  adrp     x0, #0x5000
0000e25c  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000e260  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e264  ldrb     w8, [x19, #0x38]
0000e268  ldr      x9, [x19, #0x48]
0000e26c  add      x10, x19, #0x39
0000e270  mov      x2, x0
0000e274  adrp     x1, #0x7000
0000e278  add      x1, x1, #0xb6f  ; =0x7b6f
0000e27c  tst      w8, #1
0000e280  adrp     x3, #0x6000
0000e284  add      x3, x3, #0xfa5  ; "processRequest"
0000e288  csel     x6, x10, x9, eq
0000e28c  adrp     x5, #0x7000
0000e290  add      x5, x5, #0x13f  ; "[LeicaFilter][%s] algo bypass"
0000e294  mov      w0, #2
0000e298  mov      w4, #0xd9
0000e29c  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000e2a0  b        #0xe6bc
0000e2a4  mov      w0, #0xd30
0000e2a8  str      xzr, [sp, #0x1b0]
0000e2ac  bl       #0x1ecc8  ; <_Znwm>
0000e2b0  ldr      x8, [x24, #0x28]
0000e2b4  mov      x20, x0
0000e2b8  ldr      x1, [x8, #0xb0]  ; =0x200b0
0000e2bc  ldr      w5, [x8]
0000e2c0  ldp      w3, w4, [x8, #4]
0000e2c4  ldr      w8, [x8, #0x38]  ; =0x20038
0000e2c8  mov      w2, wzr
0000e2cc  mov      w6, #1
0000e2d0  mov      w7, #0x333
0000e2d4  str      w8, [sp]
0000e2d8  str      x28, [sp, #8]
0000e2dc  bl       #0x1f1d8  ; <_ZN7android13GraphicBufferC1EPK13native_handleNS0_16HandleWrapMethodEjjijmj>
0000e2e0  add      x1, sp, #0x1b0
0000e2e4  mov      x0, x20
0000e2e8  str      x20, [sp, #0x1b0]
0000e2ec  bl       #0x1f1f0  ; <_ZNK7android7RefBase9incStrongEPKv>
0000e2f0  str      xzr, [sp, #0xb0]
0000e2f4  mov      w0, #0xd30
0000e2f8  bl       #0x1ecc8  ; <_Znwm>
0000e2fc  ldr      x8, [x23, #0x28]
0000e300  mov      x20, x0
0000e304  ldr      x1, [x8, #0xb0]  ; =0x200b0
0000e308  ldr      w5, [x8]
0000e30c  ldp      w3, w4, [x8, #4]
0000e310  ldr      w8, [x8, #0x38]  ; =0x20038
0000e314  mov      w2, wzr
0000e318  mov      w6, #1
0000e31c  mov      w7, #0x333
0000e320  str      w8, [sp]
0000e324  bl       #0x1f1d8  ; <_ZN7android13GraphicBufferC1EPK13native_handleNS0_16HandleWrapMethodEjjijmj>
0000e328  str      x20, [sp, #0xb0]
0000e32c  add      x1, sp, #0xb0
0000e330  mov      x0, x20
0000e334  bl       #0x1f1f0  ; <_ZNK7android7RefBase9incStrongEPKv>
0000e338  ldr      x0, [sp, #0x1b0]
0000e33c  bl       #0x1f208  ; <_ZN7android13GraphicBuffer17toAHardwareBufferEv>
0000e340  mov      x21, x0
0000e344  ldr      x0, [sp, #0xb0]
0000e348  bl       #0x1f208  ; <_ZN7android13GraphicBuffer17toAHardwareBufferEv>
0000e34c  mov      x20, x0
0000e350  mov      x0, x21
0000e354  bl       #0x1f220  ; <eglGetNativeClientBufferANDROID>
0000e358  ldr      x8, [x24, #0x28]
0000e35c  stp      x0, xzr, [sp, #0x80]
0000e360  ldr      w9, [x8, #4]  ; =0x20004
0000e364  str      w9, [sp, #0x98]
0000e368  ldr      w9, [x8, #8]  ; =0x20008
0000e36c  ldr      w8, [x8, #0x38]  ; =0x20038
0000e370  str      w9, [sp, #0x9c]
0000e374  stp      w8, w8, [sp, #0x90]
0000e378  mov      x0, x20
0000e37c  bl       #0x1f220  ; <eglGetNativeClientBufferANDROID>
0000e380  ldr      x8, [x23, #0x28]
0000e384  stp      x0, xzr, [sp, #0x50]
0000e388  ldrb     w10, [x19, #0x21]
0000e38c  ldr      w9, [x8, #4]  ; =0x20004
0000e390  cmp      w10, #1
0000e394  str      w9, [sp, #0x68]
0000e398  ldr      w9, [x8, #8]  ; =0x20008
0000e39c  ldr      w8, [x8, #0x38]  ; =0x20038
0000e3a0  str      w9, [sp, #0x6c]
0000e3a4  stp      w8, w8, [sp, #0x60]
0000e3a8  b.ne     #0xe554
0000e3ac  adrp     x23, #0x20000
0000e3b0  adrp     x25, #0x20000
0000e3b4  adrp     x24, #0x20000
0000e3b8  ldr      x23, [x23, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
0000e3bc  ldr      x25, [x25, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
0000e3c0  ldr      x24, [x24, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000e3c4  mov      w28, wzr
0000e3c8  adrp     x20, #0x5000
0000e3cc  add      x20, x20, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000e3d0  adrp     x21, #0x6000
0000e3d4  add      x21, x21, #0xfa5  ; "processRequest"
0000e3d8  add      x27, x19, #0x39
0000e3dc  mov      w22, #1
0000e3e0  b        #0xe3f0
0000e3e4  ldrb     w8, [x19, #0x21]
0000e3e8  sub      w28, w28, #1
0000e3ec  tbz      w8, #0, #0xe554
0000e3f0  ldp      x4, x5, [x19, #0xa0]
0000e3f4  add      x1, sp, #0x80
0000e3f8  add      x2, sp, #0x50
0000e3fc  mov      x0, x19
0000e400  bl       #0x1f238  ; <_ZN19MiLeicaFilterPlugin12candyProcessEPN12videoprocess16FilterFrameParamES2_NS0_11VideoFormatEP11param_lut_tP21param_shading_float_t>
0000e404  cbz      w0, #0xe554
0000e408  ldrb     w8, [x19, #0x21]
0000e40c  cmp      w8, #1
0000e410  b.ne     #0xe554
0000e414  ldr      x0, [x19, #0x90]
0000e418  cbz      x0, #0xe42c
0000e41c  ldr      x8, [x0]
0000e420  ldr      x8, [x8, #8]  ; =0x20008
0000e424  blr      x8
0000e428  str      xzr, [x19, #0x90]
0000e42c  ldr      w8, [x19, #0xd0]
0000e430  cbz      w8, #0xe444
0000e434  cmp      w8, #1
0000e438  b.ne     #0xe454
0000e43c  mov      w0, #0xa
0000e440  b        #0xe448
0000e444  mov      w0, #9
0000e448  mov      w1, wzr
0000e44c  bl       #0x1ef20  ; <_ZN16ProcessorCreator12createFilterEN12videoprocess11VideoFormatEb>
0000e450  str      x0, [x19, #0x90]
0000e454  cbz      w28, #0xe3e4
0000e458  ldr      w8, [x23]
0000e45c  strh     w22, [x19, #0x20]
0000e460  cmp      w8, #6
0000e464  b.hi     #0xe500
0000e468  adrp     x8, #0x20000
0000e46c  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000e470  ldrb     w8, [x8]
0000e474  tbz      w8, #1, #0xe500
0000e478  mov      x0, x20
0000e47c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e480  mov      x1, x0
0000e484  ldrb     w8, [x19, #0x38]
0000e488  ldr      x9, [x19, #0x48]
0000e48c  tst      w8, #1
0000e490  csel     x6, x27, x9, eq
0000e494  mov      w0, #2
0000e498  mov      w2, #0x111
0000e49c  mov      x3, x21
0000e4a0  mov      w4, #0x45
0000e4a4  adrp     x5, #0x7000
0000e4a8  add      x5, x5, #0x687  ; "[LeicaFilter][%s] candyProcess fail twice!!!"
0000e4ac  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000e4b0  cbnz     w0, #0xe500
0000e4b4  mov      w0, #2
0000e4b8  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000e4bc  mov      x26, x0
0000e4c0  mov      x0, x20
0000e4c4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e4c8  ldrb     w8, [x19, #0x38]
0000e4cc  ldr      x9, [x19, #0x48]
0000e4d0  mov      x4, x0
0000e4d4  tst      w8, #1
0000e4d8  csel     x7, x27, x9, eq
0000e4dc  mov      w0, #6
0000e4e0  adrp     x1, #0x7000
0000e4e4  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000e4e8  adrp     x2, #0x6000
0000e4ec  add      x2, x2, #0x8bf  ; "%s %s:%d %s()[LeicaFilter][%s] candyProcess fail twice!!!"
0000e4f0  mov      x3, x26
0000e4f4  mov      w5, #0x111
0000e4f8  mov      x6, x21
0000e4fc  bl       #0x1ee00  ; <__android_log_print>
0000e500  ldr      w8, [x25]
0000e504  cmp      w8, #6
0000e508  b.hi     #0xe3e4
0000e50c  ldrb     w8, [x24]
0000e510  tbz      w8, #1, #0xe3e4
0000e514  mov      x0, x20
0000e518  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e51c  ldrb     w8, [x19, #0x38]
0000e520  ldr      x9, [x19, #0x48]
0000e524  mov      x2, x0
0000e528  tst      w8, #1
0000e52c  csel     x6, x27, x9, eq
0000e530  mov      w0, #2
0000e534  adrp     x1, #0x6000
0000e538  add      x1, x1, #0xa02  ; =0x6a02
0000e53c  mov      x3, x21
0000e540  mov      w4, #0x111
0000e544  adrp     x5, #0x7000
0000e548  add      x5, x5, #0x687  ; "[LeicaFilter][%s] candyProcess fail twice!!!"
0000e54c  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000e550  b        #0xe3e4
0000e554  ldrb     w8, [x19, #0x20]
0000e558  cmp      w8, #1
0000e55c  b.ne     #0xe698
0000e560  sub      x0, x29, #0xe0
0000e564  sub      x1, x29, #0x80
0000e568  bl       #0x1f1c0  ; <_ZN7mialgo211PluginUtils12miCopyBufferEPNS_13MiImageBufferES2_>
0000e56c  adrp     x8, #0x20000
0000e570  ldr      x8, [x8, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
0000e574  ldr      w8, [x8]
0000e578  cmp      w8, #6
0000e57c  b.hi     #0xe62c
0000e580  adrp     x8, #0x20000
0000e584  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000e588  ldrb     w8, [x8]
0000e58c  tbz      w8, #1, #0xe62c
0000e590  adrp     x0, #0x5000
0000e594  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000e598  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e59c  mov      x1, x0
0000e5a0  ldrb     w8, [x19, #0x38]
0000e5a4  ldr      x9, [x19, #0x48]
0000e5a8  add      x21, x19, #0x39
0000e5ac  tst      w8, #1
0000e5b0  csel     x6, x21, x9, eq
0000e5b4  adrp     x3, #0x6000
0000e5b8  add      x3, x3, #0xfa5  ; "processRequest"
0000e5bc  adrp     x5, #0x5000
0000e5c0  add      x5, x5, #0xaf5  ; "[LeicaFilter][%s] algo bypass for candySKD fail"
0000e5c4  mov      w0, #2
0000e5c8  mov      w2, #0x118
0000e5cc  mov      w4, #0x45
0000e5d0  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000e5d4  cbnz     w0, #0xe62c
0000e5d8  mov      w0, #2
0000e5dc  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000e5e0  mov      x20, x0
0000e5e4  adrp     x0, #0x5000
0000e5e8  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000e5ec  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e5f0  ldrb     w8, [x19, #0x38]
0000e5f4  ldr      x9, [x19, #0x48]
0000e5f8  mov      x4, x0
0000e5fc  tst      w8, #1
0000e600  csel     x7, x21, x9, eq
0000e604  adrp     x1, #0x7000
0000e608  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000e60c  adrp     x2, #0x7000
0000e610  add      x2, x2, #0x15d  ; "%s %s:%d %s()[LeicaFilter][%s] algo bypass for candySKD fail"
0000e614  adrp     x6, #0x6000
0000e618  add      x6, x6, #0xfa5  ; "processRequest"
0000e61c  mov      w0, #6
0000e620  mov      x3, x20
0000e624  mov      w5, #0x118
0000e628  bl       #0x1ee00  ; <__android_log_print>
0000e62c  adrp     x8, #0x20000
0000e630  ldr      x8, [x8, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
0000e634  ldr      w8, [x8]
0000e638  cmp      w8, #6
0000e63c  b.hi     #0xe698
0000e640  adrp     x8, #0x20000
0000e644  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000e648  ldrb     w8, [x8]
0000e64c  tbz      w8, #1, #0xe698
0000e650  adrp     x0, #0x5000
0000e654  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000e658  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000e65c  ldrb     w8, [x19, #0x38]
0000e660  ldr      x9, [x19, #0x48]
0000e664  add      x10, x19, #0x39
0000e668  mov      x2, x0
0000e66c  tst      w8, #1
0000e670  csel     x6, x10, x9, eq
0000e674  adrp     x1, #0x6000
0000e678  add      x1, x1, #0xa02  ; =0x6a02
0000e67c  adrp     x3, #0x6000
0000e680  add      x3, x3, #0xfa5  ; "processRequest"
0000e684  adrp     x5, #0x5000
0000e688  add      x5, x5, #0xaf5  ; "[LeicaFilter][%s] algo bypass for candySKD fail"
0000e68c  mov      w0, #2
0000e690  mov      w4, #0x118
0000e694  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000e698  ldr      x0, [sp, #0xb0]
0000e69c  ldr      x28, [sp, #8]
0000e6a0  cbz      x0, #0xe6ac
0000e6a4  add      x1, sp, #0xb0
0000e6a8  bl       #0x1f250  ; <_ZNK7android7RefBase9decStrongEPKv>
0000e6ac  ldr      x0, [sp, #0x1b0]
0000e6b0  cbz      x0, #0xe6bc
0000e6b4  add      x1, sp, #0x1b0
0000e6b8  bl       #0x1f250  ; <_ZNK7android7RefBase9decStrongEPKv>
0000e6bc  ldrb     w8, [x19, #0x24]
0000e6c0  cmp      w8, #1
0000e6c4  b.ne     #0xe930
0000e6c8  add      x8, sp, #0x1b0
0000e6cc  stp      xzr, xzr, [sp, #0x1b8]
0000e6d0  add      x22, x8, #8  ; =0x20008
0000e6d4  str      x22, [sp, #0x1b0]
0000e6d8  mov      w0, #0x98
0000e6dc  bl       #0x1ecc8  ; <_Znwm>
0000e6e0  ldr      q0, [sp, #0xb0]
0000e6e4  mov      w9, #0x6e69
0000e6e8  mov      w8, #0xa
0000e6ec  movk     w9, #0x7570, lsl #16
0000e6f0  strb     w8, [x0, #0x20]
0000e6f4  mov      w8, #0x74
0000e6f8  stur     q0, [x0, #0x27]
0000e6fc  movi     v0.2d, #0000000000000000
0000e700  mov      x1, x0
0000e704  stur     w9, [x0, #0x21]
0000e708  ldrb     w9, [sp, #0xc0]
0000e70c  mov      x21, x0
0000e710  sturh    w8, [x0, #0x25]
0000e714  add      x23, sp, #0xb0
0000e718  strb     w9, [x0, #0x37]
0000e71c  stur     q0, [x0, #0x38]
0000e720  stur     q0, [x0, #0x48]
0000e724  stur     q0, [x0, #0x58]
0000e728  stur     q0, [x0, #0x68]
0000e72c  stur     q0, [x0, #0x78]
0000e730  stur     q0, [x0, #0x88]
0000e734  stp      xzr, xzr, [x0]
0000e738  str      x22, [x0, #0x10]  ; =0x5010
0000e73c  stp      x0, x0, [sp, #0x1b0]
0000e740  bl       #0x12d8c
0000e744  ldp      q0, q1, [x29, #-0x60]
0000e748  strb     wzr, [sp, #0xb7]
0000e74c  ldp      x20, x8, [sp, #0x1b8]
0000e750  stur     q0, [x21, #0x58]
0000e754  stur     q1, [x21, #0x68]
0000e758  ldp      q0, q1, [x29, #-0x40]
0000e75c  add      x8, x8, #1  ; =0x20001
0000e760  str      x8, [sp, #0x1c0]
0000e764  mov      w8, #0xc
0000e768  strb     w8, [sp, #0xb0]
0000e76c  mov      w8, #0x756f
0000e770  stur     q0, [x21, #0x78]
0000e774  movk     w8, #0x7074, lsl #16
0000e778  stur     q1, [x21, #0x88]
0000e77c  ldp      q0, q1, [x29, #-0x80]
0000e780  stur     w8, [x23, #1]
0000e784  mov      w8, #0x7475
0000e788  sturh    w8, [x23, #5]
0000e78c  mov      x23, x22
0000e790  stur     q0, [x21, #0x38]
0000e794  stur     q1, [x21, #0x48]
0000e798  cbz      x20, #0xe83c
0000e79c  add      x24, sp, #0xb0
0000e7a0  mov      w25, #6
0000e7a4  mov      x8, x20
0000e7a8  b        #0xe7b8
0000e7ac  ldr      x8, [x23]
0000e7b0  mov      x22, x23
0000e7b4  cbz      x8, #0xe83c
0000e7b8  mov      x23, x8
0000e7bc  ldrb     w8, [x8, #0x20]  ; =0x20020
0000e7c0  orr      x0, x24, #1
0000e7c4  ldp      x9, x11, [x23, #0x28]
0000e7c8  lsr      x10, x8, #1
0000e7cc  tst      w8, #1
0000e7d0  add      x8, x23, #0x21  ; =0x20021
0000e7d4  csel     x26, x10, x9, eq
0000e7d8  csel     x21, x8, x11, eq
0000e7dc  cmp      x26, #6
0000e7e0  mov      x1, x21
0000e7e4  csel     x22, x26, x25, lo
0000e7e8  cset     w27, hi
0000e7ec  mov      x2, x22
0000e7f0  bl       #0x1f268  ; <memcmp>
0000e7f4  cmp      w0, #0
0000e7f8  cset     w8, lt
0000e7fc  csel     w8, w27, w8, eq
0000e800  cmp      w8, #1
0000e804  b.eq     #0xe7ac
0000e808  orr      x1, x24, #1
0000e80c  mov      x0, x21
0000e810  mov      x2, x22
0000e814  bl       #0x1f268  ; <memcmp>
0000e818  cmp      x26, #6
0000e81c  cset     w8, lo
0000e820  cmp      w0, #0
0000e824  cset     w9, lt
0000e828  csel     w8, w8, w9, eq
0000e82c  tbz      w8, #0, #0xe8f4
0000e830  ldr      x8, [x23, #8]  ; =0x20008
0000e834  cbnz     x8, #0xe7b8
0000e838  add      x22, x23, #8  ; =0x20008
0000e83c  mov      w0, #0x98
0000e840  bl       #0x1ecc8  ; <_Znwm>
0000e844  ldr      q0, [sp, #0xb0]
0000e848  ldr      x8, [sp, #0xc0]
0000e84c  mov      x21, x0
0000e850  stp      xzr, xzr, [sp, #0xb8]
0000e854  mov      x1, x0
0000e858  str      q0, [x0, #0x20]  ; =0x5020
0000e85c  movi     v0.2d, #0000000000000000
0000e860  str      x8, [x0, #0x30]  ; =0x5030
0000e864  str      xzr, [sp, #0xb0]
0000e868  stp      xzr, xzr, [x0]
0000e86c  stur     q0, [x0, #0x38]
0000e870  stur     q0, [x0, #0x48]
0000e874  stur     q0, [x0, #0x58]
0000e878  stur     q0, [x0, #0x68]
0000e87c  stur     q0, [x0, #0x78]
0000e880  stur     q0, [x0, #0x88]
0000e884  str      x23, [x0, #0x10]  ; =0x5010
0000e888  str      x0, [x22]
0000e88c  ldr      x8, [sp, #0x1b0]
0000e890  ldr      x8, [x8]
0000e894  cbz      x8, #0xe8a0
0000e898  str      x8, [sp, #0x1b0]
0000e89c  ldr      x1, [x22]
0000e8a0  ldr      x0, [sp, #0x1b8]
0000e8a4  bl       #0x12d8c
0000e8a8  ldp      q0, q1, [x29, #-0xc0]
0000e8ac  ldr      x8, [sp, #0x1c0]
0000e8b0  ldrb     w9, [sp, #0xb0]
0000e8b4  add      x8, x8, #1  ; =0x20001
0000e8b8  stur     q0, [x21, #0x58]
0000e8bc  stur     q1, [x21, #0x68]
0000e8c0  ldp      q0, q1, [x29, #-0xa0]
0000e8c4  str      x8, [sp, #0x1c0]
0000e8c8  stur     q0, [x21, #0x78]
0000e8cc  stur     q1, [x21, #0x88]
0000e8d0  ldp      q0, q1, [x29, #-0xe0]
0000e8d4  stur     q0, [x21, #0x38]
0000e8d8  stur     q1, [x21, #0x48]
0000e8dc  tbz      w9, #0, #0xe918
0000e8e0  ldr      x8, [sp, #0xb0]
0000e8e4  ldr      x0, [sp, #0xc0]
0000e8e8  and      x1, x8, #0xfffffffffffffffe
0000e8ec  bl       #0x1ed58  ; <_ZdlPvm>
0000e8f0  b        #0xe918
0000e8f4  ldp      q0, q1, [x29, #-0xc0]
0000e8f8  ldp      q3, q2, [x29, #-0xa0]
0000e8fc  stur     q0, [x23, #0x58]
0000e900  stur     q1, [x23, #0x68]
0000e904  ldp      q0, q1, [x29, #-0xe0]
0000e908  stur     q3, [x23, #0x78]
0000e90c  stur     q2, [x23, #0x88]
0000e910  stur     q0, [x23, #0x38]
0000e914  stur     q1, [x23, #0x48]
0000e918  add      x1, sp, #0x1b0
0000e91c  mov      x0, x19
0000e920  bl       #0x1f280  ; <_ZN19MiLeicaFilterPlugin9dumpImageERNSt3__13mapINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEN7mialgo213MiImageBufferENS0_4lessIS7_EENS5_INS0_4pairIKS7_S9_EEEEEE>
0000e924  ldr      x1, [sp, #0x1b8]
0000e928  add      x0, sp, #0x1b0
0000e92c  bl       #0x135e8
0000e930  ldr      x8, [x28, #0x28]
0000e934  ldur     x9, [x29, #-0x18]
0000e938  cmp      x8, x9
0000e93c  b.ne     #0xea50
0000e940  mov      w0, wzr
0000e944  add      sp, sp, #0x390
0000e948  ldp      x20, x19, [sp, #0x50]
0000e94c  ldp      x22, x21, [sp, #0x40]
0000e950  ldp      x24, x23, [sp, #0x30]
0000e954  ldp      x26, x25, [sp, #0x20]
0000e958  ldp      x28, x27, [sp, #0x10]
0000e95c  ldp      x29, x30, [sp], #0x60
0000e960  autiasp  
0000e964  ret      
0000e968  bl       #0x120cc
0000e96c  bl       #0x120cc
0000e970  ldrb     w8, [sp, #0x18]
0000e974  mov      x19, x0
0000e978  str      x28, [sp, #8]
0000e97c  tbz      w8, #0, #0xea34
0000e980  ldr      x8, [sp, #0x18]
0000e984  ldr      x0, [sp, #0x28]
0000e988  and      x1, x8, #0xfffffffffffffffe
0000e98c  b        #0xea08
0000e990  ldrb     w8, [sp, #0x38]
0000e994  mov      x19, x0
0000e998  str      x28, [sp, #8]
0000e99c  tbz      w8, #0, #0xea34
0000e9a0  ldr      x8, [sp, #0x38]
0000e9a4  ldr      x0, [sp, #0x48]
0000e9a8  and      x1, x8, #0xfffffffffffffffe
0000e9ac  b        #0xea08
0000e9b0  b        #0xe9b8
0000e9b4  ldr      x20, [sp, #0x1b8]
0000e9b8  str      x28, [sp, #8]
0000e9bc  mov      x19, x0
0000e9c0  b        #0xe9d0
0000e9c4  str      x28, [sp, #8]
0000e9c8  mov      x19, x0
0000e9cc  mov      x20, xzr
0000e9d0  add      x0, sp, #0x1b0
0000e9d4  mov      x1, x20
0000e9d8  bl       #0x135e8
0000e9dc  b        #0xea34
0000e9e0  b        #0xea20
0000e9e4  b        #0xea20
0000e9e8  mov      x19, x0
0000e9ec  mov      x0, x20
0000e9f0  mov      w1, #0xd30
0000e9f4  bl       #0x1ed58  ; <_ZdlPvm>
0000e9f8  b        #0xea2c
0000e9fc  mov      x19, x0
0000ea00  mov      x0, x20
0000ea04  mov      w1, #0xd30
0000ea08  bl       #0x1ed58  ; <_ZdlPvm>
0000ea0c  b        #0xea34
0000ea10  b        #0xea20
0000ea14  b        #0xea20
0000ea18  mov      x19, x0
0000ea1c  b        #0xea2c
0000ea20  mov      x19, x0
0000ea24  add      x0, sp, #0xb0
0000ea28  bl       #0x1f298
0000ea2c  add      x0, sp, #0x1b0
0000ea30  bl       #0x1f298
0000ea34  ldr      x8, [sp, #8]
0000ea38  ldr      x8, [x8, #0x28]  ; =0x20028
0000ea3c  ldur     x9, [x29, #-0x18]
0000ea40  cmp      x8, x9
0000ea44  b.ne     #0xea50
0000ea48  mov      x0, x19
0000ea4c  bl       #0x1ece0  ; <_Unwind_Resume>
0000ea50  bl       #0x1ecf8  ; <__stack_chk_fail>
