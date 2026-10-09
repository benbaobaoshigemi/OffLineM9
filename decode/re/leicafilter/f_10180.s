; function 0x10180 size 0xc38 _ZN19MiLeicaFilterPlugin12candyProcessEPN12videoprocess16FilterFrameParamES2_NS0_11VideoFormatEP11param_lut_tP21param_shading_float_t
00010180  paciasp  
00010184  stp      x29, x30, [sp, #-0x60]!
00010188  stp      x28, x27, [sp, #0x10]
0001018c  stp      x26, x25, [sp, #0x20]
00010190  stp      x24, x23, [sp, #0x30]
00010194  stp      x22, x21, [sp, #0x40]
00010198  stp      x20, x19, [sp, #0x50]
0001019c  mov      x29, sp
000101a0  sub      sp, sp, #0x390
000101a4  mrs      x22, tpidr_el0
000101a8  adrp     x21, #0x20000
000101ac  mov      x23, x5
000101b0  ldr      x8, [x22, #0x28]
000101b4  ldr      x21, [x21, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
000101b8  mov      x25, x4
000101bc  mov      x26, x2
000101c0  mov      x28, x1
000101c4  mov      x19, x0
000101c8  stur     x8, [x29, #-0x10]
000101cc  ldr      w8, [x21]
000101d0  cmp      w8, #2
000101d4  b.hi     #0x10290
000101d8  adrp     x8, #0x20000
000101dc  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
000101e0  ldrb     w8, [x8]
000101e4  tbz      w8, #1, #0x10290
000101e8  adrp     x0, #0x5000
000101ec  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
000101f0  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000101f4  ldrb     w8, [x19, #0x38]
000101f8  ldr      x9, [x19, #0x48]
000101fc  add      x20, x19, #0x39
00010200  ldrb     w7, [x19, #0x98]
00010204  mov      x1, x0
00010208  adrp     x3, #0x7000
0001020c  add      x3, x3, #0x6b4  ; "candyProcess"
00010210  tst      w8, #1
00010214  adrp     x5, #0x7000
00010218  add      x5, x5, #0xfa7  ; "[LeicaFilter][%s], triggerChanged = %d"
0001021c  csel     x6, x20, x9, eq
00010220  mov      w0, #2
00010224  mov      w2, #0x241
00010228  mov      w4, #0x44
0001022c  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00010230  cbnz     w0, #0x10290
00010234  mov      w0, #2
00010238  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0001023c  mov      x24, x0
00010240  adrp     x0, #0x5000
00010244  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
00010248  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0001024c  ldrb     w8, [x19, #0x38]
00010250  ldr      x9, [x19, #0x48]
00010254  mov      x4, x0
00010258  adrp     x1, #0x7000
0001025c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00010260  adrp     x2, #0x5000
00010264  add      x2, x2, #0xed7  ; "%s %s:%d %s()[LeicaFilter][%s], triggerChanged = %d"
00010268  tst      w8, #1
0001026c  ldrb     w8, [x19, #0x98]
00010270  csel     x7, x20, x9, eq
00010274  adrp     x6, #0x7000
00010278  add      x6, x6, #0x6b4  ; "candyProcess"
0001027c  mov      w0, #3
00010280  mov      x3, x24
00010284  mov      w5, #0x241
00010288  str      w8, [sp]
0001028c  bl       #0x1ee00  ; <__android_log_print>
00010290  adrp     x27, #0x20000
00010294  ldr      x27, [x27, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
00010298  ldr      w8, [x27]
0001029c  cmp      w8, #2
000102a0  b.hi     #0x10310
000102a4  adrp     x8, #0x20000
000102a8  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
000102ac  ldrb     w8, [x8]
000102b0  tbz      w8, #1, #0x10310
000102b4  adrp     x8, #0x20000
000102b8  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
000102bc  ldr      w8, [x8]
000102c0  cbz      w8, #0x10310
000102c4  adrp     x0, #0x5000
000102c8  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
000102cc  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000102d0  ldrb     w8, [x19, #0x38]
000102d4  ldr      x9, [x19, #0x48]
000102d8  add      x10, x19, #0x39
000102dc  ldrb     w7, [x19, #0x98]
000102e0  mov      x2, x0
000102e4  adrp     x1, #0x6000
000102e8  add      x1, x1, #0xb34  ; =0x6b34
000102ec  tst      w8, #1
000102f0  adrp     x3, #0x7000
000102f4  add      x3, x3, #0x6b4  ; "candyProcess"
000102f8  csel     x6, x10, x9, eq
000102fc  adrp     x5, #0x7000
00010300  add      x5, x5, #0xfa7  ; "[LeicaFilter][%s], triggerChanged = %d"
00010304  mov      w0, #2
00010308  mov      w4, #0x241
0001030c  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00010310  ldr      x0, [x19, #0x90]
00010314  cbz      x0, #0x10afc
00010318  ldrb     w8, [x19, #0x98]
0001031c  cmp      w8, #1
00010320  b.ne     #0x109ac
00010324  ldr      x8, [x0]
00010328  ldr      x8, [x8, #0x68]  ; =0x20068
0001032c  blr      x8
00010330  ldr      w8, [x19, #8]
00010334  stp      xzr, xzr, [sp, #0x168]
00010338  str      xzr, [sp, #0x178]
0001033c  tbz      w8, #0, #0x1039c
00010340  mov      w0, #0x30
00010344  bl       #0x1ecc8  ; <_Znwm>
00010348  adrp     x8, #0x6000
0001034c  add      x8, x8, #0xfb4  ; "CubeLutEffect;cube_strength=1.0;lut_type=1.0;"
00010350  adrp     x9, #0x5000
00010354  ldp      q0, q1, [x8]
00010358  ldr      q2, [x9, #0x5f0]  ; =0x55f0
0001035c  str      x0, [sp, #0x190]
00010360  str      q2, [sp, #0x180]
00010364  stp      q0, q1, [x0]
00010368  ldur     q0, [x8, #0x1d]
0001036c  strb     wzr, [x0, #0x2d]
00010370  stur     q0, [x0, #0x1d]
00010374  add      x0, sp, #0x168
00010378  add      x1, sp, #0x180
0001037c  bl       #0x12618
00010380  ldrb     w8, [sp, #0x180]
00010384  tbz      w8, #0, #0x10398
00010388  ldr      x8, [sp, #0x180]
0001038c  ldr      x0, [sp, #0x190]
00010390  and      x1, x8, #0xfffffffffffffffe
00010394  bl       #0x1ed58  ; <_ZdlPvm>
00010398  ldr      w8, [x19, #8]
0001039c  tbz      w8, #1, #0x1079c
000103a0  movi     v0.2d, #0000000000000000
000103a4  ldr      w0, [x19, #0xc]
000103a8  stp      q0, q0, [sp, #0x180]
000103ac  stp      q0, q0, [sp, #0x1a0]
000103b0  stp      q0, q0, [sp, #0x1c0]
000103b4  stp      q0, q0, [sp, #0x1e0]
000103b8  stp      q0, q0, [sp, #0x200]
000103bc  stp      q0, q0, [sp, #0x220]
000103c0  stp      q0, q0, [sp, #0x240]
000103c4  stp      q0, q0, [sp, #0x260]
000103c8  stp      q0, q0, [sp, #0x280]
000103cc  stp      q0, q0, [sp, #0x2a0]
000103d0  stp      q0, q0, [sp, #0x2c0]
000103d4  stp      q0, q0, [sp, #0x2e0]
000103d8  stp      q0, q0, [sp, #0x300]
000103dc  stp      q0, q0, [sp, #0x320]
000103e0  stp      q0, q0, [sp, #0x340]
000103e4  stp      q0, q0, [sp, #0x360]
000103e8  add      x8, sp, #0x150
000103ec  add      x20, sp, #0x150
000103f0  str      x22, [sp, #0x50]
000103f4  bl       #0x1f328  ; <_ZNSt3__19to_stringEj>
000103f8  ldrb     w8, [sp, #0x150]
000103fc  ldr      x9, [sp, #0x160]
00010400  ldr      w0, [x19, #0x10]
00010404  tst      w8, #1
00010408  csinc    x21, x9, x20, ne
0001040c  add      x8, sp, #0x138
00010410  add      x20, sp, #0x138
00010414  bl       #0x1f328  ; <_ZNSt3__19to_stringEj>
00010418  ldrb     w8, [sp, #0x138]
0001041c  ldr      x9, [sp, #0x148]
00010420  ldr      s0, [x23]
00010424  tst      w8, #1
00010428  csinc    x27, x9, x20, ne
0001042c  add      x8, sp, #0x120
00010430  add      x20, sp, #0x120
00010434  bl       #0x1f340  ; <_ZNSt3__19to_stringEf>
00010438  ldrb     w8, [sp, #0x120]
0001043c  ldr      x9, [sp, #0x130]
00010440  ldr      s0, [x23, #4]
00010444  tst      w8, #1
00010448  csinc    x24, x9, x20, ne
0001044c  add      x8, sp, #0x108
00010450  add      x20, sp, #0x108
00010454  bl       #0x1f340  ; <_ZNSt3__19to_stringEf>
00010458  ldrb     w8, [sp, #0x108]
0001045c  ldr      x9, [sp, #0x118]
00010460  ldr      s0, [x23, #8]
00010464  tst      w8, #1
00010468  csinc    x22, x9, x20, ne
0001046c  add      x8, sp, #0xf0
00010470  add      x20, sp, #0xf0
00010474  bl       #0x1f340  ; <_ZNSt3__19to_stringEf>
00010478  ldrb     w8, [sp, #0xf0]
0001047c  ldr      x9, [sp, #0x100]
00010480  ldr      s0, [x23, #0xc]
00010484  tst      w8, #1
00010488  csinc    x8, x9, x20, ne
0001048c  stp      x8, x22, [sp, #0x40]
00010490  add      x8, sp, #0xd8
00010494  add      x20, sp, #0xd8
00010498  bl       #0x1f340  ; <_ZNSt3__19to_stringEf>
0001049c  ldrb     w8, [sp, #0xd8]
000104a0  ldr      x9, [sp, #0xe8]
000104a4  mov      x22, x21
000104a8  ldr      s0, [x23, #0x10]
000104ac  str      x24, [sp, #0x38]
000104b0  tst      w8, #1
000104b4  csinc    x20, x9, x20, ne
000104b8  add      x8, sp, #0xc0
000104bc  add      x21, sp, #0xc0
000104c0  bl       #0x1f340  ; <_ZNSt3__19to_stringEf>
000104c4  ldrb     w8, [sp, #0xc0]
000104c8  ldr      x9, [sp, #0xd0]
000104cc  ldr      s0, [x23, #0x14]
000104d0  str      x28, [sp, #0x30]
000104d4  tst      w8, #1
000104d8  csinc    x21, x9, x21, ne
000104dc  add      x8, sp, #0xa8
000104e0  add      x24, sp, #0xa8
000104e4  bl       #0x1f340  ; <_ZNSt3__19to_stringEf>
000104e8  ldrb     w8, [sp, #0xa8]
000104ec  ldr      x9, [sp, #0xb8]
000104f0  mov      x28, x26
000104f4  ldr      s0, [x23, #0x18]
000104f8  str      x25, [sp, #0x58]
000104fc  tst      w8, #1
00010500  csinc    x24, x9, x24, ne
00010504  add      x8, sp, #0x90
00010508  bl       #0x1f340  ; <_ZNSt3__19to_stringEf>
0001050c  ldrb     w26, [sp, #0x90]
00010510  ldr      x25, [sp, #0xa0]
00010514  ldr      s0, [x23, #0x1c]
00010518  add      x8, sp, #0x78
0001051c  add      x23, sp, #0x78
00010520  bl       #0x1f340  ; <_ZNSt3__19to_stringEf>
00010524  ldrb     w8, [sp, #0x78]
00010528  tst      w26, #1
0001052c  add      x9, sp, #0x90
00010530  ldr      x10, [sp, #0x88]
00010534  csinc    x9, x25, x9, ne
00010538  tst      w8, #1
0001053c  csinc    x8, x10, x23, ne
00010540  stp      x9, x8, [sp, #0x20]
00010544  ldp      x6, x8, [sp, #0x38]
00010548  ldr      x7, [sp, #0x48]
0001054c  nop      
00010550  adr      x3, #0x8073
00010554  add      x0, sp, #0x180
00010558  mov      w1, #0x200
0001055c  mov      w2, #0x200
00010560  mov      x4, x22
00010564  mov      x5, x27
00010568  stp      x21, x24, [sp, #0x10]
0001056c  stp      x8, x20, [sp]
00010570  bl       #0xd5d4
00010574  ldp      x22, x25, [sp, #0x50]
00010578  adrp     x21, #0x20000
0001057c  ldrb     w8, [sp, #0x78]
00010580  ldr      x21, [x21, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
00010584  mov      x26, x28
00010588  tbz      w8, #0, #0x1059c
0001058c  ldr      x8, [sp, #0x78]
00010590  ldr      x0, [sp, #0x88]
00010594  and      x1, x8, #0xfffffffffffffffe
00010598  bl       #0x1ed58  ; <_ZdlPvm>
0001059c  ldrb     w8, [sp, #0x90]
000105a0  ldr      x28, [sp, #0x30]
000105a4  tbz      w8, #0, #0x105b8
000105a8  ldr      x8, [sp, #0x90]
000105ac  ldr      x0, [sp, #0xa0]
000105b0  and      x1, x8, #0xfffffffffffffffe
000105b4  bl       #0x1ed58  ; <_ZdlPvm>
000105b8  adrp     x27, #0x20000
000105bc  ldrb     w8, [sp, #0xa8]
000105c0  ldr      x27, [x27, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
000105c4  tbnz     w8, #0, #0x1068c
000105c8  ldrb     w8, [sp, #0xc0]
000105cc  tbnz     w8, #0, #0x106a4
000105d0  ldrb     w8, [sp, #0xd8]
000105d4  tbnz     w8, #0, #0x106bc
000105d8  ldrb     w8, [sp, #0xf0]
000105dc  tbnz     w8, #0, #0x106d4
000105e0  ldrb     w8, [sp, #0x108]
000105e4  tbnz     w8, #0, #0x106ec
000105e8  ldrb     w8, [sp, #0x120]
000105ec  tbnz     w8, #0, #0x10704
000105f0  ldrb     w8, [sp, #0x138]
000105f4  tbnz     w8, #0, #0x1071c
000105f8  ldrb     w8, [sp, #0x150]
000105fc  tbz      w8, #0, #0x10610
00010600  ldr      x8, [sp, #0x150]
00010604  ldr      x0, [sp, #0x160]
00010608  and      x1, x8, #0xfffffffffffffffe
0001060c  bl       #0x1ed58  ; <_ZdlPvm>
00010610  ldrb     w8, [sp, #0x168]
00010614  ldr      x9, [sp, #0x170]
00010618  ubfx     w10, w8, #1, #7
0001061c  tst      w8, #1
00010620  csel     x8, x10, x9, eq
00010624  cbz      x8, #0x10658
00010628  mov      w8, #0x4002
0001062c  strb     wzr, [sp, #0x152]
00010630  strh     w8, [sp, #0x150]
00010634  add      x0, sp, #0x168
00010638  add      x1, sp, #0x150
0001063c  bl       #0x12618
00010640  ldrb     w8, [sp, #0x150]
00010644  tbz      w8, #0, #0x10658
00010648  ldr      x8, [sp, #0x150]
0001064c  ldr      x0, [sp, #0x160]
00010650  and      x1, x8, #0xfffffffffffffffe
00010654  bl       #0x1ed58  ; <_ZdlPvm>
00010658  add      x0, sp, #0x180
0001065c  bl       #0x1f070  ; <strlen>
00010660  cmn      x0, #8
00010664  b.hs     #0x10b34
00010668  mov      x23, x0
0001066c  cmp      x0, #0x17
00010670  b.hs     #0x10738
00010674  lsl      w8, w23, #1
00010678  add      x9, sp, #0x150
0001067c  orr      x24, x9, #1
00010680  strb     w8, [sp, #0x150]
00010684  cbnz     x23, #0x10764
00010688  b        #0x10774
0001068c  ldr      x8, [sp, #0xa8]
00010690  ldr      x0, [sp, #0xb8]
00010694  and      x1, x8, #0xfffffffffffffffe
00010698  bl       #0x1ed58  ; <_ZdlPvm>
0001069c  ldrb     w8, [sp, #0xc0]
000106a0  tbz      w8, #0, #0x105d0
000106a4  ldr      x8, [sp, #0xc0]
000106a8  ldr      x0, [sp, #0xd0]
000106ac  and      x1, x8, #0xfffffffffffffffe
000106b0  bl       #0x1ed58  ; <_ZdlPvm>
000106b4  ldrb     w8, [sp, #0xd8]
000106b8  tbz      w8, #0, #0x105d8
000106bc  ldr      x8, [sp, #0xd8]
000106c0  ldr      x0, [sp, #0xe8]
000106c4  and      x1, x8, #0xfffffffffffffffe
000106c8  bl       #0x1ed58  ; <_ZdlPvm>
000106cc  ldrb     w8, [sp, #0xf0]
000106d0  tbz      w8, #0, #0x105e0
000106d4  ldr      x8, [sp, #0xf0]
000106d8  ldr      x0, [sp, #0x100]
000106dc  and      x1, x8, #0xfffffffffffffffe
000106e0  bl       #0x1ed58  ; <_ZdlPvm>
000106e4  ldrb     w8, [sp, #0x108]
000106e8  tbz      w8, #0, #0x105e8
000106ec  ldr      x8, [sp, #0x108]
000106f0  ldr      x0, [sp, #0x118]
000106f4  and      x1, x8, #0xfffffffffffffffe
000106f8  bl       #0x1ed58  ; <_ZdlPvm>
000106fc  ldrb     w8, [sp, #0x120]
00010700  tbz      w8, #0, #0x105f0
00010704  ldr      x8, [sp, #0x120]
00010708  ldr      x0, [sp, #0x130]
0001070c  and      x1, x8, #0xfffffffffffffffe
00010710  bl       #0x1ed58  ; <_ZdlPvm>
00010714  ldrb     w8, [sp, #0x138]
00010718  tbz      w8, #0, #0x105f8
0001071c  ldr      x8, [sp, #0x138]
00010720  ldr      x0, [sp, #0x148]
00010724  and      x1, x8, #0xfffffffffffffffe
00010728  bl       #0x1ed58  ; <_ZdlPvm>
0001072c  ldrb     w8, [sp, #0x150]
00010730  tbnz     w8, #0, #0x10600
00010734  b        #0x10610
00010738  orr      x8, x23, #7
0001073c  mov      w9, #0x1a
00010740  cmp      x8, #0x17
00010744  csinc    x25, x9, x8, eq
00010748  mov      x0, x25
0001074c  bl       #0x1ecc8  ; <_Znwm>
00010750  orr      x8, x25, #1
00010754  ldr      x25, [sp, #0x58]
00010758  mov      x24, x0
0001075c  stp      x23, x0, [sp, #0x158]
00010760  str      x8, [sp, #0x150]
00010764  add      x1, sp, #0x180
00010768  mov      x0, x24
0001076c  mov      x2, x23
00010770  bl       #0x1f358  ; <memcpy>
00010774  strb     wzr, [x24, x23]
00010778  add      x0, sp, #0x168
0001077c  add      x1, sp, #0x150
00010780  bl       #0x12618
00010784  ldrb     w8, [sp, #0x150]
00010788  tbz      w8, #0, #0x1079c
0001078c  ldr      x8, [sp, #0x150]
00010790  ldr      x0, [sp, #0x160]
00010794  and      x1, x8, #0xfffffffffffffffe
00010798  bl       #0x1ed58  ; <_ZdlPvm>
0001079c  ldr      w8, [x21]
000107a0  add      x9, sp, #0x168
000107a4  orr      x24, x9, #1
000107a8  cmp      w8, #2
000107ac  b.hi     #0x10880
000107b0  adrp     x8, #0x20000
000107b4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
000107b8  ldrb     w8, [x8]
000107bc  tbz      w8, #1, #0x10880
000107c0  adrp     x0, #0x5000
000107c4  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
000107c8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000107cc  mov      x1, x0
000107d0  ldrb     w8, [x19, #0x38]
000107d4  ldr      x9, [x19, #0x48]
000107d8  add      x20, x19, #0x39
000107dc  ldrb     w10, [sp, #0x168]
000107e0  tst      w8, #1
000107e4  ldr      x8, [sp, #0x178]
000107e8  csel     x6, x20, x9, eq
000107ec  tst      w10, #1
000107f0  csel     x7, x24, x8, eq
000107f4  adrp     x3, #0x7000
000107f8  add      x3, x3, #0x6b4  ; "candyProcess"
000107fc  adrp     x5, #0x5000
00010800  add      x5, x5, #0x8a0  ; "[LeicaFilter][%s], filterScript = %s"
00010804  mov      w0, #2
00010808  mov      w2, #0x26b
0001080c  mov      w4, #0x44
00010810  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00010814  cbnz     w0, #0x10880
00010818  mov      w0, #2
0001081c  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00010820  mov      x23, x0
00010824  adrp     x0, #0x5000
00010828  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0001082c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00010830  ldrb     w8, [x19, #0x38]
00010834  ldr      x9, [x19, #0x48]
00010838  mov      x4, x0
0001083c  ldrb     w10, [sp, #0x168]
00010840  tst      w8, #1
00010844  ldr      x8, [sp, #0x178]
00010848  csel     x7, x20, x9, eq
0001084c  tst      w10, #1
00010850  csel     x8, x24, x8, eq
00010854  adrp     x1, #0x7000
00010858  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0001085c  adrp     x2, #0x7000
00010860  add      x2, x2, #0xbbf  ; "%s %s:%d %s()[LeicaFilter][%s], filterScript = %s"
00010864  adrp     x6, #0x7000
00010868  add      x6, x6, #0x6b4  ; "candyProcess"
0001086c  mov      w0, #3
00010870  mov      x3, x23
00010874  mov      w5, #0x26b
00010878  str      x8, [sp]
0001087c  bl       #0x1ee00  ; <__android_log_print>
00010880  ldr      w8, [x27]
00010884  cmp      w8, #2
00010888  b.hi     #0x10904
0001088c  adrp     x8, #0x20000
00010890  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00010894  ldrb     w8, [x8]
00010898  tbz      w8, #1, #0x10904
0001089c  adrp     x8, #0x20000
000108a0  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
000108a4  ldr      w8, [x8]
000108a8  cbz      w8, #0x10904
000108ac  adrp     x0, #0x5000
000108b0  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
000108b4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000108b8  ldrb     w8, [x19, #0x38]
000108bc  ldr      x9, [x19, #0x48]
000108c0  add      x11, x19, #0x39
000108c4  ldrb     w10, [sp, #0x168]
000108c8  mov      x2, x0
000108cc  tst      w8, #1
000108d0  ldr      x8, [sp, #0x178]
000108d4  csel     x6, x11, x9, eq
000108d8  tst      w10, #1
000108dc  csel     x7, x24, x8, eq
000108e0  adrp     x1, #0x6000
000108e4  add      x1, x1, #0xb34  ; =0x6b34
000108e8  adrp     x3, #0x7000
000108ec  add      x3, x3, #0x6b4  ; "candyProcess"
000108f0  adrp     x5, #0x5000
000108f4  add      x5, x5, #0x8a0  ; "[LeicaFilter][%s], filterScript = %s"
000108f8  mov      w0, #2
000108fc  mov      w4, #0x26b
00010900  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00010904  ldrb     w8, [sp, #0x168]
00010908  ldr      x23, [x19, #0x90]
0001090c  tbnz     w8, #0, #0x10928
00010910  add      x8, sp, #0x69
00010914  ldur     q0, [x8, #0xff]
00010918  ldr      x8, [sp, #0x178]
0001091c  str      q0, [sp, #0x60]
00010920  str      x8, [sp, #0x70]
00010924  b        #0x10934
00010928  ldp      x2, x1, [sp, #0x170]
0001092c  add      x0, sp, #0x60
00010930  bl       #0x126f8
00010934  ldr      x8, [x23]
00010938  ldr      x8, [x8, #0x50]  ; =0x20050
0001093c  add      x1, sp, #0x60
00010940  mov      x0, x23
00010944  blr      x8
00010948  ldrb     w8, [sp, #0x60]
0001094c  tbz      w8, #0, #0x10960
00010950  ldr      x8, [sp, #0x60]
00010954  ldr      x0, [sp, #0x70]
00010958  and      x1, x8, #0xfffffffffffffffe
0001095c  bl       #0x1ed58  ; <_ZdlPvm>
00010960  ldrb     w8, [x19, #8]
00010964  tbz      w8, #0, #0x10990
00010968  ldr      x0, [x19, #0x90]
0001096c  ldr      x8, [x0]
00010970  ldr      x8, [x8, #0x30]  ; =0x20030
00010974  mov      x1, x25
00010978  mov      w2, #0x11
0001097c  mov      w3, #-1
00010980  mov      w4, #3
00010984  mov      w5, #0x200
00010988  blr      x8
0001098c  tbz      w0, #0, #0x109c8
00010990  ldrb     w8, [sp, #0x168]
00010994  tbz      w8, #0, #0x109a8
00010998  ldr      x8, [sp, #0x168]
0001099c  ldr      x0, [sp, #0x178]
000109a0  and      x1, x8, #0xfffffffffffffffe
000109a4  bl       #0x1ed58  ; <_ZdlPvm>
000109a8  ldr      x0, [x19, #0x90]
000109ac  ldr      x8, [x0]
000109b0  mov      x1, x28
000109b4  mov      x2, x26
000109b8  ldr      x8, [x8, #0x60]  ; =0x20060
000109bc  blr      x8
000109c0  mov      w0, wzr
000109c4  b        #0x10b00
000109c8  ldr      w8, [x21]
000109cc  cmp      w8, #6
000109d0  b.hi     #0x10a80
000109d4  adrp     x8, #0x20000
000109d8  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
000109dc  ldrb     w8, [x8]
000109e0  tbz      w8, #1, #0x10a80
000109e4  adrp     x0, #0x5000
000109e8  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
000109ec  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
000109f0  mov      x1, x0
000109f4  ldrb     w8, [x19, #0x38]
000109f8  ldr      x9, [x19, #0x48]
000109fc  add      x21, x19, #0x39
00010a00  tst      w8, #1
00010a04  csel     x6, x21, x9, eq
00010a08  adrp     x3, #0x7000
00010a0c  add      x3, x3, #0x6b4  ; "candyProcess"
00010a10  adrp     x5, #0x5000
00010a14  add      x5, x5, #0x718  ; "[LeicaFilter][%s] addLutEffectData failed"
00010a18  mov      w0, #2
00010a1c  mov      w2, #0x276
00010a20  mov      w4, #0x45
00010a24  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
00010a28  cbnz     w0, #0x10a80
00010a2c  mov      w0, #2
00010a30  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
00010a34  mov      x20, x0
00010a38  adrp     x0, #0x5000
00010a3c  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
00010a40  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00010a44  ldrb     w8, [x19, #0x38]
00010a48  ldr      x9, [x19, #0x48]
00010a4c  mov      x4, x0
00010a50  tst      w8, #1
00010a54  csel     x7, x21, x9, eq
00010a58  adrp     x1, #0x7000
00010a5c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
00010a60  adrp     x2, #0x5000
00010a64  add      x2, x2, #0xdd3  ; "%s %s:%d %s()[LeicaFilter][%s] addLutEffectData failed"
00010a68  adrp     x6, #0x7000
00010a6c  add      x6, x6, #0x6b4  ; "candyProcess"
00010a70  mov      w0, #6
00010a74  mov      x3, x20
00010a78  mov      w5, #0x276
00010a7c  bl       #0x1ee00  ; <__android_log_print>
00010a80  ldr      w8, [x27]
00010a84  cmp      w8, #6
00010a88  b.hi     #0x10ae4
00010a8c  adrp     x8, #0x20000
00010a90  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
00010a94  ldrb     w8, [x8]
00010a98  tbz      w8, #1, #0x10ae4
00010a9c  adrp     x0, #0x5000
00010aa0  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
00010aa4  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
00010aa8  ldrb     w8, [x19, #0x38]
00010aac  ldr      x9, [x19, #0x48]
00010ab0  add      x10, x19, #0x39
00010ab4  mov      x2, x0
00010ab8  tst      w8, #1
00010abc  csel     x6, x10, x9, eq
00010ac0  adrp     x1, #0x6000
00010ac4  add      x1, x1, #0xa02  ; =0x6a02
00010ac8  adrp     x3, #0x7000
00010acc  add      x3, x3, #0x6b4  ; "candyProcess"
00010ad0  adrp     x5, #0x5000
00010ad4  add      x5, x5, #0x718  ; "[LeicaFilter][%s] addLutEffectData failed"
00010ad8  mov      w0, #2
00010adc  mov      w4, #0x276
00010ae0  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
00010ae4  ldrb     w8, [sp, #0x168]
00010ae8  tbz      w8, #0, #0x10afc
00010aec  ldr      x8, [sp, #0x168]
00010af0  ldr      x0, [sp, #0x178]
00010af4  and      x1, x8, #0xfffffffffffffffe
00010af8  bl       #0x1ed58  ; <_ZdlPvm>
00010afc  mov      w0, #-1
00010b00  ldr      x8, [x22, #0x28]
00010b04  ldur     x9, [x29, #-0x10]
00010b08  cmp      x8, x9
00010b0c  b.ne     #0x10db4
00010b10  add      sp, sp, #0x390
00010b14  ldp      x20, x19, [sp, #0x50]
00010b18  ldp      x22, x21, [sp, #0x40]
00010b1c  ldp      x24, x23, [sp, #0x30]
00010b20  ldp      x26, x25, [sp, #0x20]
00010b24  ldp      x28, x27, [sp, #0x10]
00010b28  ldp      x29, x30, [sp], #0x60
00010b2c  autiasp  
00010b30  ret      
00010b34  ldr      x8, [x22, #0x28]
00010b38  ldur     x9, [x29, #-0x10]
00010b3c  cmp      x8, x9
00010b40  b.ne     #0x10db4
00010b44  add      x0, sp, #0x150
00010b48  bl       #0x120e0
00010b4c  b        #0x10b50
00010b50  ldrb     w8, [sp, #0x150]
00010b54  mov      x19, x0
00010b58  tbnz     w8, #0, #0x10d10
00010b5c  b        #0x10d80
00010b60  ldrb     w8, [sp, #0x78]
00010b64  mov      x19, x0
00010b68  tbnz     w8, #0, #0x10bb8
00010b6c  ldrb     w8, [sp, #0x90]
00010b70  tbnz     w8, #0, #0x10be0
00010b74  ldrb     w8, [sp, #0xa8]
00010b78  tbnz     w8, #0, #0x10c08
00010b7c  ldrb     w8, [sp, #0xc0]
00010b80  tbnz     w8, #0, #0x10c30
00010b84  ldrb     w8, [sp, #0xd8]
00010b88  tbnz     w8, #0, #0x10c58
00010b8c  ldrb     w8, [sp, #0xf0]
00010b90  tbnz     w8, #0, #0x10c80
00010b94  ldrb     w8, [sp, #0x108]
00010b98  tbnz     w8, #0, #0x10ca8
00010b9c  ldrb     w8, [sp, #0x120]
00010ba0  tbnz     w8, #0, #0x10cd0
00010ba4  ldrb     w8, [sp, #0x138]
00010ba8  tbnz     w8, #0, #0x10cf8
00010bac  ldrb     w8, [sp, #0x150]
00010bb0  tbnz     w8, #0, #0x10d10
00010bb4  b        #0x10d80
00010bb8  ldr      x8, [sp, #0x78]
00010bbc  ldr      x0, [sp, #0x88]
00010bc0  and      x1, x8, #0xfffffffffffffffe
00010bc4  bl       #0x1ed58  ; <_ZdlPvm>
00010bc8  ldrb     w8, [sp, #0x90]
00010bcc  tbz      w8, #0, #0x10b74
00010bd0  b        #0x10be0
00010bd4  mov      x19, x0
00010bd8  ldrb     w8, [sp, #0x90]
00010bdc  tbz      w8, #0, #0x10b74
00010be0  ldr      x8, [sp, #0x90]
00010be4  ldr      x0, [sp, #0xa0]
00010be8  and      x1, x8, #0xfffffffffffffffe
00010bec  bl       #0x1ed58  ; <_ZdlPvm>
00010bf0  ldrb     w8, [sp, #0xa8]
00010bf4  tbz      w8, #0, #0x10b7c
00010bf8  b        #0x10c08
00010bfc  mov      x19, x0
00010c00  ldrb     w8, [sp, #0xa8]
00010c04  tbz      w8, #0, #0x10b7c
00010c08  ldr      x8, [sp, #0xa8]
00010c0c  ldr      x0, [sp, #0xb8]
00010c10  and      x1, x8, #0xfffffffffffffffe
00010c14  bl       #0x1ed58  ; <_ZdlPvm>
00010c18  ldrb     w8, [sp, #0xc0]
00010c1c  tbz      w8, #0, #0x10b84
00010c20  b        #0x10c30
00010c24  mov      x19, x0
00010c28  ldrb     w8, [sp, #0xc0]
00010c2c  tbz      w8, #0, #0x10b84
00010c30  ldr      x8, [sp, #0xc0]
00010c34  ldr      x0, [sp, #0xd0]
00010c38  and      x1, x8, #0xfffffffffffffffe
00010c3c  bl       #0x1ed58  ; <_ZdlPvm>
00010c40  ldrb     w8, [sp, #0xd8]
00010c44  tbz      w8, #0, #0x10b8c
00010c48  b        #0x10c58
00010c4c  mov      x19, x0
00010c50  ldrb     w8, [sp, #0xd8]
00010c54  tbz      w8, #0, #0x10b8c
00010c58  ldr      x8, [sp, #0xd8]
00010c5c  ldr      x0, [sp, #0xe8]
00010c60  and      x1, x8, #0xfffffffffffffffe
00010c64  bl       #0x1ed58  ; <_ZdlPvm>
00010c68  ldrb     w8, [sp, #0xf0]
00010c6c  tbz      w8, #0, #0x10b94
00010c70  b        #0x10c80
00010c74  mov      x19, x0
00010c78  ldrb     w8, [sp, #0xf0]
00010c7c  tbz      w8, #0, #0x10b94
00010c80  ldr      x8, [sp, #0xf0]
00010c84  ldr      x0, [sp, #0x100]
00010c88  and      x1, x8, #0xfffffffffffffffe
00010c8c  bl       #0x1ed58  ; <_ZdlPvm>
00010c90  ldrb     w8, [sp, #0x108]
00010c94  tbz      w8, #0, #0x10b9c
00010c98  b        #0x10ca8
00010c9c  mov      x19, x0
00010ca0  ldrb     w8, [sp, #0x108]
00010ca4  tbz      w8, #0, #0x10b9c
00010ca8  ldr      x8, [sp, #0x108]
00010cac  ldr      x0, [sp, #0x118]
00010cb0  and      x1, x8, #0xfffffffffffffffe
00010cb4  bl       #0x1ed58  ; <_ZdlPvm>
00010cb8  ldrb     w8, [sp, #0x120]
00010cbc  tbz      w8, #0, #0x10ba4
00010cc0  b        #0x10cd0
00010cc4  mov      x19, x0
00010cc8  ldrb     w8, [sp, #0x120]
00010ccc  tbz      w8, #0, #0x10ba4
00010cd0  ldr      x8, [sp, #0x120]
00010cd4  ldr      x0, [sp, #0x130]
00010cd8  and      x1, x8, #0xfffffffffffffffe
00010cdc  bl       #0x1ed58  ; <_ZdlPvm>
00010ce0  ldrb     w8, [sp, #0x138]
00010ce4  tbz      w8, #0, #0x10bac
00010ce8  b        #0x10cf8
00010cec  mov      x19, x0
00010cf0  ldrb     w8, [sp, #0x138]
00010cf4  tbz      w8, #0, #0x10bac
00010cf8  ldr      x8, [sp, #0x138]
00010cfc  ldr      x0, [sp, #0x148]
00010d00  and      x1, x8, #0xfffffffffffffffe
00010d04  bl       #0x1ed58  ; <_ZdlPvm>
00010d08  ldrb     w8, [sp, #0x150]
00010d0c  tbz      w8, #0, #0x10d80
00010d10  ldr      x0, [sp, #0x160]
00010d14  ldr      x8, [sp, #0x150]
00010d18  and      x1, x8, #0xfffffffffffffffe
00010d1c  bl       #0x1ed58  ; <_ZdlPvm>
00010d20  b        #0x10d80
00010d24  mov      x19, x0
00010d28  ldrb     w8, [sp, #0x150]
00010d2c  tbnz     w8, #0, #0x10d10
00010d30  b        #0x10d80
00010d34  b        #0x10d7c
00010d38  ldrb     w8, [sp, #0x180]
00010d3c  mov      x19, x0
00010d40  str      x22, [sp, #0x50]
00010d44  tbz      w8, #0, #0x10d80
00010d48  ldr      x0, [sp, #0x190]
00010d4c  ldr      x8, [sp, #0x180]
00010d50  b        #0x10d18
00010d54  b        #0x10d78
00010d58  b        #0x10d7c
00010d5c  ldrb     w8, [sp, #0x60]
00010d60  mov      x19, x0
00010d64  str      x22, [sp, #0x50]
00010d68  tbz      w8, #0, #0x10d80
00010d6c  ldr      x0, [sp, #0x70]
00010d70  ldr      x8, [sp, #0x60]
00010d74  b        #0x10d18
00010d78  str      x22, [sp, #0x50]
00010d7c  mov      x19, x0
00010d80  ldrb     w8, [sp, #0x168]
00010d84  tbz      w8, #0, #0x10d98
00010d88  ldr      x8, [sp, #0x168]
00010d8c  ldr      x0, [sp, #0x178]
00010d90  and      x1, x8, #0xfffffffffffffffe
00010d94  bl       #0x1ed58  ; <_ZdlPvm>
00010d98  ldr      x8, [sp, #0x50]
00010d9c  ldr      x8, [x8, #0x28]  ; =0x20028
00010da0  ldur     x9, [x29, #-0x10]
00010da4  cmp      x8, x9
00010da8  b.ne     #0x10db4
00010dac  mov      x0, x19
00010db0  bl       #0x1ece0  ; <_Unwind_Resume>
00010db4  bl       #0x1ecf8  ; <__stack_chk_fail>
