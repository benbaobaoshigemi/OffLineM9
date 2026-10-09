; function 0xeae4 size 0xbdc _ZN19MiLeicaFilterPlugin16fillMetaDataInfoER11ImageParams
0000eae4  paciasp  
0000eae8  sub      sp, sp, #0xe0
0000eaec  stp      d9, d8, [sp, #0x70]
0000eaf0  stp      x29, x30, [sp, #0x80]
0000eaf4  stp      x28, x27, [sp, #0x90]
0000eaf8  stp      x26, x25, [sp, #0xa0]
0000eafc  stp      x24, x23, [sp, #0xb0]
0000eb00  stp      x22, x21, [sp, #0xc0]
0000eb04  stp      x20, x19, [sp, #0xd0]
0000eb08  add      x29, sp, #0x80
0000eb0c  mrs      x24, tpidr_el0
0000eb10  mov      x20, x0
0000eb14  ldr      x8, [x24, #0x28]
0000eb18  stur     x8, [x29, #-0x18]
0000eb1c  ldp      x21, x19, [x1, #0x40]
0000eb20  stp      x21, x19, [x29, #-0x28]
0000eb24  cbz      x19, #0xeb34
0000eb28  add      x1, x19, #8
0000eb2c  mov      w0, #1
0000eb30  bl       #0x1ec00
0000eb34  movi     v0.2d, #0000000000000000
0000eb38  stp      q0, q0, [sp, #0x30]
0000eb3c  adrp     x1, #0x6000
0000eb40  add      x1, x1, #0x1a0  ; "com.qti.stats.internal.perFrame.frameControl.AWBFrameControl"
0000eb44  add      x8, sp, #0x30
0000eb48  mov      x0, x21
0000eb4c  bl       #0x1eda0  ; <_ZNK10MiMetadata4findEPKc>
0000eb50  adrp     x26, #0x20000
0000eb54  adrp     x25, #0x20000
0000eb58  ldr      x8, [sp, #0x40]
0000eb5c  ldr      x26, [x26, #0xd28]  ; =0x20d28 <_ZN7midebug14gMiCamLogLevelE>
0000eb60  ldr      x25, [x25, #0xd38]  ; =0x20d38 <_ZN7midebug21gMiCamOfflineLogLevelE>
0000eb64  cbz      x8, #0xecac
0000eb68  ldr      x8, [sp, #0x48]
0000eb6c  ldr      w9, [x26]
0000eb70  ldr      w22, [x8, #0xc]
0000eb74  cmp      w9, #4
0000eb78  strh     w22, [x20, #0xb2]
0000eb7c  b.hi     #0xec34
0000eb80  adrp     x8, #0x20000
0000eb84  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000eb88  ldrb     w8, [x8]
0000eb8c  tbz      w8, #1, #0xec34
0000eb90  adrp     x0, #0x5000
0000eb94  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000eb98  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000eb9c  mov      x1, x0
0000eba0  ldrb     w8, [x20, #0x38]
0000eba4  ldr      x9, [x20, #0x48]
0000eba8  add      x27, x20, #0x39
0000ebac  tst      w8, #1
0000ebb0  csel     x6, x27, x9, eq
0000ebb4  adrp     x3, #0x6000
0000ebb8  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000ebbc  adrp     x5, #0x5000
0000ebc0  add      x5, x5, #0xfe4  ; "[LeicaFilter][%s], cct = %d"
0000ebc4  mov      w0, #2
0000ebc8  mov      w2, #0x161
0000ebcc  mov      w4, #0x49
0000ebd0  mov      w7, w22
0000ebd4  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000ebd8  cbnz     w0, #0xec34
0000ebdc  mov      w0, #2
0000ebe0  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000ebe4  mov      x23, x0
0000ebe8  adrp     x0, #0x5000
0000ebec  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000ebf0  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000ebf4  ldrb     w8, [x20, #0x38]
0000ebf8  ldr      x9, [x20, #0x48]
0000ebfc  mov      x4, x0
0000ec00  tst      w8, #1
0000ec04  csel     x7, x27, x9, eq
0000ec08  adrp     x1, #0x7000
0000ec0c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000ec10  adrp     x2, #0x7000
0000ec14  add      x2, x2, #0x936  ; "%s %s:%d %s()[LeicaFilter][%s], cct = %d"
0000ec18  adrp     x6, #0x6000
0000ec1c  add      x6, x6, #0x8f9  ; "fillMetaDataInfo"
0000ec20  mov      w0, #4
0000ec24  mov      x3, x23
0000ec28  mov      w5, #0x161
0000ec2c  str      w22, [sp]
0000ec30  bl       #0x1ee00  ; <__android_log_print>
0000ec34  ldr      w8, [x25]
0000ec38  cmp      w8, #4
0000ec3c  b.hi     #0xecac
0000ec40  adrp     x8, #0x20000
0000ec44  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000ec48  ldrb     w8, [x8]
0000ec4c  tbz      w8, #1, #0xecac
0000ec50  adrp     x8, #0x20000
0000ec54  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0000ec58  ldr      w8, [x8]
0000ec5c  cbz      w8, #0xecac
0000ec60  adrp     x0, #0x5000
0000ec64  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000ec68  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000ec6c  ldrb     w8, [x20, #0x38]
0000ec70  ldr      x9, [x20, #0x48]
0000ec74  add      x10, x20, #0x39
0000ec78  mov      x2, x0
0000ec7c  tst      w8, #1
0000ec80  csel     x6, x10, x9, eq
0000ec84  adrp     x1, #0x7000
0000ec88  add      x1, x1, #0xb6f  ; =0x7b6f
0000ec8c  adrp     x3, #0x6000
0000ec90  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000ec94  adrp     x5, #0x5000
0000ec98  add      x5, x5, #0xfe4  ; "[LeicaFilter][%s], cct = %d"
0000ec9c  mov      w0, #2
0000eca0  mov      w4, #0x161
0000eca4  mov      w7, w22
0000eca8  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000ecac  adrp     x1, #0x6000
0000ecb0  add      x1, x1, #0x392  ; "com.qti.stats.internal.perFrame.frameControl.AECFrameControl"
0000ecb4  add      x8, sp, #0x10
0000ecb8  mov      x0, x21
0000ecbc  bl       #0x1eda0  ; <_ZNK10MiMetadata4findEPKc>
0000ecc0  ldp      q1, q0, [sp, #0x10]
0000ecc4  stp      q1, q0, [sp, #0x30]
0000ecc8  ldr      x8, [sp, #0x40]
0000eccc  cbz      x8, #0xee24
0000ecd0  ldr      x23, [sp, #0x48]
0000ecd4  ldr      w9, [x26]
0000ecd8  ldr      s0, [x23, #0x60]
0000ecdc  cmp      w9, #4
0000ece0  fcvtzs   w8, s0
0000ece4  strh     w8, [x20, #0xb0]
0000ece8  b.hi     #0xeda8
0000ecec  adrp     x8, #0x20000
0000ecf0  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000ecf4  ldrb     w8, [x8]
0000ecf8  tbz      w8, #1, #0xeda8
0000ecfc  adrp     x0, #0x5000
0000ed00  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000ed04  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000ed08  mov      x1, x0
0000ed0c  ldrb     w8, [x20, #0x38]
0000ed10  ldr      s0, [x23, #0x60]
0000ed14  add      x27, x20, #0x39
0000ed18  ldr      x9, [x20, #0x48]
0000ed1c  tst      w8, #1
0000ed20  fcvt     d0, s0
0000ed24  csel     x6, x27, x9, eq
0000ed28  adrp     x3, #0x6000
0000ed2c  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000ed30  adrp     x5, #0x5000
0000ed34  add      x5, x5, #0xb32  ; "[LeicaFilter][%s], lux idx = %f"
0000ed38  mov      w0, #2
0000ed3c  mov      w2, #0x16a
0000ed40  mov      w4, #0x49
0000ed44  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000ed48  cbnz     w0, #0xeda8
0000ed4c  mov      w0, #2
0000ed50  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000ed54  mov      x22, x0
0000ed58  adrp     x0, #0x5000
0000ed5c  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000ed60  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000ed64  ldrb     w8, [x20, #0x38]
0000ed68  ldr      s0, [x23, #0x60]
0000ed6c  mov      x4, x0
0000ed70  ldr      x9, [x20, #0x48]
0000ed74  tst      w8, #1
0000ed78  fcvt     d0, s0
0000ed7c  csel     x7, x27, x9, eq
0000ed80  adrp     x1, #0x7000
0000ed84  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000ed88  adrp     x2, #0x7000
0000ed8c  add      x2, x2, #0x1ba  ; "%s %s:%d %s()[LeicaFilter][%s], lux idx = %f"
0000ed90  adrp     x6, #0x6000
0000ed94  add      x6, x6, #0x8f9  ; "fillMetaDataInfo"
0000ed98  mov      w0, #4
0000ed9c  mov      x3, x22
0000eda0  mov      w5, #0x16a
0000eda4  bl       #0x1ee00  ; <__android_log_print>
0000eda8  ldr      w8, [x25]
0000edac  cmp      w8, #4
0000edb0  b.hi     #0xee24
0000edb4  adrp     x8, #0x20000
0000edb8  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000edbc  ldrb     w8, [x8]
0000edc0  tbz      w8, #1, #0xee24
0000edc4  adrp     x8, #0x20000
0000edc8  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0000edcc  ldr      w8, [x8]
0000edd0  cbz      w8, #0xee24
0000edd4  adrp     x0, #0x5000
0000edd8  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000eddc  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000ede0  ldrb     w8, [x20, #0x38]
0000ede4  ldr      s0, [x23, #0x60]
0000ede8  add      x10, x20, #0x39
0000edec  ldr      x9, [x20, #0x48]
0000edf0  mov      x2, x0
0000edf4  tst      w8, #1
0000edf8  fcvt     d0, s0
0000edfc  csel     x6, x10, x9, eq
0000ee00  adrp     x1, #0x7000
0000ee04  add      x1, x1, #0xb6f  ; =0x7b6f
0000ee08  adrp     x3, #0x6000
0000ee0c  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000ee10  adrp     x5, #0x5000
0000ee14  add      x5, x5, #0xb32  ; "[LeicaFilter][%s], lux idx = %f"
0000ee18  mov      w0, #2
0000ee1c  mov      w4, #0x16a
0000ee20  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000ee24  ldrb     w8, [x20, #0xb8]
0000ee28  tbnz     w8, #0, #0xee3c
0000ee2c  mov      w8, #0xc
0000ee30  strb     w8, [x20, #0xb8]
0000ee34  add      x8, x20, #0xb9
0000ee38  b        #0xee48
0000ee3c  mov      w9, #6
0000ee40  ldr      x8, [x20, #0xc8]
0000ee44  str      x9, [x20, #0xc0]
0000ee48  mov      w10, #0x6f63
0000ee4c  mov      w9, #0x6e6f
0000ee50  strb     wzr, [x8, #6]
0000ee54  movk     w10, #0x6d6d, lsl #16
0000ee58  strh     w9, [x8, #4]
0000ee5c  str      w10, [x8]
0000ee60  adrp     x1, #0x6000
0000ee64  add      x1, x1, #0x4d4  ; "xiaomi.ai.asd.algoSceneDetectedAIResult"
0000ee68  add      x8, sp, #0x10
0000ee6c  mov      x0, x21
0000ee70  bl       #0x1eda0  ; <_ZNK10MiMetadata4findEPKc>
0000ee74  ldp      q1, q0, [sp, #0x10]
0000ee78  stp      q1, q0, [sp, #0x30]
0000ee7c  ldr      x8, [sp, #0x40]
0000ee80  cbz      x8, #0xf148
0000ee84  ldr      x23, [sp, #0x48]
0000ee88  ldr      w8, [x23]
0000ee8c  cmp      w8, #0xe
0000ee90  b.hi     #0xef48
0000ee94  mov      w9, #1
0000ee98  lsl      w9, w9, w8
0000ee9c  tst      w9, #0x78
0000eea0  b.ne     #0xeec8
0000eea4  mov      w10, #0x4600
0000eea8  tst      w9, w10
0000eeac  b.eq     #0xef28
0000eeb0  ldrb     w8, [x20, #0xb8]
0000eeb4  tbnz     w8, #0, #0xef04
0000eeb8  mov      w8, #0xa
0000eebc  strb     w8, [x20, #0xb8]
0000eec0  add      x8, x20, #0xb9
0000eec4  b        #0xef10
0000eec8  ldrb     w8, [x20, #0xb8]
0000eecc  tbnz     w8, #0, #0xeee0
0000eed0  mov      w8, #0xc
0000eed4  strb     w8, [x20, #0xb8]
0000eed8  add      x8, x20, #0xb9
0000eedc  b        #0xeeec
0000eee0  mov      w9, #6
0000eee4  ldr      x8, [x20, #0xc8]
0000eee8  str      x9, [x20, #0xc0]
0000eeec  mov      w10, #0x6c70
0000eef0  mov      w9, #0x7374
0000eef4  movk     w10, #0x6e61, lsl #16
0000eef8  strh     w9, [x8, #4]
0000eefc  str      w10, [x8], #6  ; =0x20006
0000ef00  b        #0xefc4
0000ef04  mov      w9, #5
0000ef08  ldr      x8, [x20, #0xc8]
0000ef0c  str      x9, [x20, #0xc0]
0000ef10  mov      w10, #0x696e
0000ef14  mov      w9, #0x74
0000ef18  movk     w10, #0x6867, lsl #16
0000ef1c  strb     w9, [x8, #4]
0000ef20  str      w10, [x8], #5  ; =0x20005
0000ef24  b        #0xefc4
0000ef28  cmp      w8, #0xd
0000ef2c  b.ne     #0xef48
0000ef30  ldrb     w8, [x20, #0xb8]
0000ef34  tbnz     w8, #0, #0xef80
0000ef38  mov      w8, #0x1c
0000ef3c  strb     w8, [x20, #0xb8]
0000ef40  add      x8, x20, #0xb9
0000ef44  b        #0xef8c
0000ef48  cmp      w8, #2
0000ef4c  b.ne     #0xef68
0000ef50  ldrb     w8, [x20, #0xb8]
0000ef54  tbnz     w8, #0, #0xefac
0000ef58  mov      w8, #8
0000ef5c  strb     w8, [x20, #0xb8]
0000ef60  add      x8, x20, #0xb9
0000ef64  b        #0xefb8
0000ef68  ldrb     w8, [x20, #0xb8]
0000ef6c  tbnz     w8, #0, #0xf654
0000ef70  mov      w8, #0xc
0000ef74  strb     w8, [x20, #0xb8]
0000ef78  add      x8, x20, #0xb9
0000ef7c  b        #0xf660
0000ef80  mov      w9, #0xe
0000ef84  ldr      x8, [x20, #0xc8]
0000ef88  str      x9, [x20, #0xc0]
0000ef8c  adrp     x9, #0x7000
0000ef90  add      x9, x9, #0x360  ; "sunrise_sunset"
0000ef94  ldr      x10, [x9]
0000ef98  ldur     x9, [x9, #6]
0000ef9c  str      x10, [x8]
0000efa0  stur     x9, [x8, #6]
0000efa4  add      x8, x8, #0xe  ; =0x2000e
0000efa8  b        #0xefc4
0000efac  mov      w9, #4
0000efb0  ldr      x8, [x20, #0xc8]
0000efb4  str      x9, [x20, #0xc0]
0000efb8  mov      w9, #0x6f66
0000efbc  movk     w9, #0x646f, lsl #16
0000efc0  str      w9, [x8], #4  ; =0x20004
0000efc4  ldr      w9, [x26]
0000efc8  strb     wzr, [x8]
0000efcc  cmp      w9, #4
0000efd0  b.hi     #0xf0b8
0000efd4  adrp     x8, #0x20000
0000efd8  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000efdc  ldrb     w8, [x8]
0000efe0  tbz      w8, #1, #0xf0b8
0000efe4  adrp     x0, #0x5000
0000efe8  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000efec  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000eff0  mov      x1, x0
0000eff4  ldrb     w8, [x20, #0x38]
0000eff8  ldr      x9, [x20, #0x48]
0000effc  add      x27, x20, #0x39
0000f000  ldrb     w10, [x20, #0xb8]
0000f004  ldr      w7, [x23]
0000f008  add      x28, x20, #0xb9
0000f00c  tst      w8, #1
0000f010  ldr      x8, [x20, #0xc8]
0000f014  csel     x6, x27, x9, eq
0000f018  tst      w10, #1
0000f01c  csel     x8, x28, x8, eq
0000f020  adrp     x3, #0x6000
0000f024  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000f028  adrp     x5, #0x7000
0000f02c  add      x5, x5, #0xa9f  ; "[LeicaFilter][%s], aiscenes = %d, %s"
0000f030  mov      w0, #2
0000f034  mov      w2, #0x189
0000f038  mov      w4, #0x49
0000f03c  str      x8, [sp]
0000f040  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000f044  cbnz     w0, #0xf0b8
0000f048  mov      w0, #2
0000f04c  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000f050  mov      x22, x0
0000f054  adrp     x0, #0x5000
0000f058  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f05c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f060  ldrb     w8, [x20, #0x38]
0000f064  ldr      x9, [x20, #0x48]
0000f068  mov      x4, x0
0000f06c  ldrb     w10, [x20, #0xb8]
0000f070  tst      w8, #1
0000f074  ldr      x8, [x20, #0xc8]
0000f078  csel     x7, x27, x9, eq
0000f07c  ldr      w9, [x23]
0000f080  tst      w10, #1
0000f084  csel     x8, x28, x8, eq
0000f088  adrp     x1, #0x7000
0000f08c  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000f090  adrp     x2, #0x7000
0000f094  add      x2, x2, #0xb8d  ; "%s %s:%d %s()[LeicaFilter][%s], aiscenes = %d, %s"
0000f098  adrp     x6, #0x6000
0000f09c  add      x6, x6, #0x8f9  ; "fillMetaDataInfo"
0000f0a0  mov      w0, #4
0000f0a4  mov      x3, x22
0000f0a8  mov      w5, #0x189
0000f0ac  str      x8, [sp, #8]
0000f0b0  str      w9, [sp]
0000f0b4  bl       #0x1ee00  ; <__android_log_print>
0000f0b8  ldr      w8, [x25]
0000f0bc  cmp      w8, #4
0000f0c0  b.hi     #0xf148
0000f0c4  adrp     x8, #0x20000
0000f0c8  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000f0cc  ldrb     w8, [x8]
0000f0d0  tbz      w8, #1, #0xf148
0000f0d4  adrp     x8, #0x20000
0000f0d8  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0000f0dc  ldr      w8, [x8]
0000f0e0  cbz      w8, #0xf148
0000f0e4  adrp     x0, #0x5000
0000f0e8  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f0ec  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f0f0  ldrb     w8, [x20, #0x38]
0000f0f4  ldr      x9, [x20, #0x48]
0000f0f8  add      x10, x20, #0x39
0000f0fc  ldrb     w11, [x20, #0xb8]
0000f100  ldr      w7, [x23]
0000f104  mov      x2, x0
0000f108  tst      w8, #1
0000f10c  ldr      x8, [x20, #0xc8]
0000f110  csel     x6, x10, x9, eq
0000f114  add      x9, x20, #0xb9
0000f118  tst      w11, #1
0000f11c  csel     x8, x9, x8, eq
0000f120  adrp     x1, #0x7000
0000f124  add      x1, x1, #0xb6f  ; =0x7b6f
0000f128  adrp     x3, #0x6000
0000f12c  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000f130  adrp     x5, #0x7000
0000f134  add      x5, x5, #0xa9f  ; "[LeicaFilter][%s], aiscenes = %d, %s"
0000f138  mov      w0, #2
0000f13c  mov      w4, #0x189
0000f140  str      x8, [sp]
0000f144  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000f148  mov      w1, #6
0000f14c  add      x8, sp, #0x10
0000f150  mov      x0, x21
0000f154  movk     w1, #0x11, lsl #16
0000f158  bl       #0x1f2b0
0000f15c  ldp      q1, q0, [sp, #0x10]
0000f160  stp      q1, q0, [sp, #0x30]
0000f164  ldr      x8, [sp, #0x40]
0000f168  cbz      x8, #0xf2e8
0000f16c  ldr      w9, [x26]
0000f170  lsr      x22, x8, #2
0000f174  cmp      w9, #4
0000f178  b.hi     #0xf230
0000f17c  adrp     x8, #0x20000
0000f180  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000f184  ldrb     w8, [x8]
0000f188  tbz      w8, #1, #0xf230
0000f18c  adrp     x0, #0x5000
0000f190  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f194  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f198  mov      x1, x0
0000f19c  ldrb     w8, [x20, #0x38]
0000f1a0  ldr      x9, [x20, #0x48]
0000f1a4  add      x27, x20, #0x39
0000f1a8  tst      w8, #1
0000f1ac  csel     x6, x27, x9, eq
0000f1b0  adrp     x3, #0x6000
0000f1b4  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000f1b8  adrp     x5, #0x5000
0000f1bc  add      x5, x5, #0xb52  ; "[LeicaFilter][%s], faceROICount = %d"
0000f1c0  mov      w0, #2
0000f1c4  mov      w2, #0x193
0000f1c8  mov      w4, #0x49
0000f1cc  mov      w7, w22
0000f1d0  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000f1d4  cbnz     w0, #0xf230
0000f1d8  mov      w0, #2
0000f1dc  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000f1e0  mov      x23, x0
0000f1e4  adrp     x0, #0x5000
0000f1e8  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f1ec  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f1f0  ldrb     w8, [x20, #0x38]
0000f1f4  ldr      x9, [x20, #0x48]
0000f1f8  mov      x4, x0
0000f1fc  tst      w8, #1
0000f200  csel     x7, x27, x9, eq
0000f204  adrp     x1, #0x7000
0000f208  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000f20c  adrp     x2, #0x5000
0000f210  add      x2, x2, #0xd71  ; "%s %s:%d %s()[LeicaFilter][%s], faceROICount = %d"
0000f214  adrp     x6, #0x6000
0000f218  add      x6, x6, #0x8f9  ; "fillMetaDataInfo"
0000f21c  mov      w0, #4
0000f220  mov      x3, x23
0000f224  mov      w5, #0x193
0000f228  str      w22, [sp]
0000f22c  bl       #0x1ee00  ; <__android_log_print>
0000f230  ldr      w8, [x25]
0000f234  cmp      w8, #4
0000f238  b.hi     #0xf2a8
0000f23c  adrp     x8, #0x20000
0000f240  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000f244  ldrb     w8, [x8]
0000f248  tbz      w8, #1, #0xf2a8
0000f24c  adrp     x8, #0x20000
0000f250  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0000f254  ldr      w8, [x8]
0000f258  cbz      w8, #0xf2a8
0000f25c  adrp     x0, #0x5000
0000f260  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f264  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f268  ldrb     w8, [x20, #0x38]
0000f26c  ldr      x9, [x20, #0x48]
0000f270  add      x10, x20, #0x39
0000f274  mov      x2, x0
0000f278  tst      w8, #1
0000f27c  csel     x6, x10, x9, eq
0000f280  adrp     x1, #0x7000
0000f284  add      x1, x1, #0xb6f  ; =0x7b6f
0000f288  adrp     x3, #0x6000
0000f28c  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000f290  adrp     x5, #0x5000
0000f294  add      x5, x5, #0xb52  ; "[LeicaFilter][%s], faceROICount = %d"
0000f298  mov      w0, #2
0000f29c  mov      w4, #0x193
0000f2a0  mov      w7, w22
0000f2a4  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000f2a8  cbz      w22, #0xf2e8
0000f2ac  ldrb     w8, [x20, #0xb8]
0000f2b0  tbnz     w8, #0, #0xf2c4
0000f2b4  mov      w8, #0x10
0000f2b8  strb     w8, [x20, #0xb8]
0000f2bc  add      x8, x20, #0xb9
0000f2c0  b        #0xf2d0
0000f2c4  mov      w9, #8
0000f2c8  ldr      x8, [x20, #0xc8]
0000f2cc  str      x9, [x20, #0xc0]
0000f2d0  mov      x9, #0x7270
0000f2d4  strb     wzr, [x8, #8]
0000f2d8  movk     x9, #0x746f, lsl #16
0000f2dc  movk     x9, #0x6172, lsl #32
0000f2e0  movk     x9, #0x7469, lsl #48
0000f2e4  str      x9, [x8]
0000f2e8  mov      w1, #0x2f
0000f2ec  add      x8, sp, #0x10
0000f2f0  mov      x0, x21
0000f2f4  movk     w1, #1, lsl #16
0000f2f8  bl       #0x1f2b0
0000f2fc  ldp      q1, q0, [sp, #0x10]
0000f300  stp      q1, q0, [sp, #0x30]
0000f304  ldr      x8, [sp, #0x40]
0000f308  cbz      x8, #0xf454
0000f30c  ldr      x8, [sp, #0x48]
0000f310  ldr      w9, [x26]
0000f314  ldr      s9, [x8]
0000f318  cmp      w9, #4
0000f31c  b.hi     #0xf3d8
0000f320  adrp     x8, #0x20000
0000f324  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000f328  ldrb     w8, [x8]
0000f32c  tbz      w8, #1, #0xf3d8
0000f330  adrp     x0, #0x5000
0000f334  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f338  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f33c  mov      x1, x0
0000f340  fcvt     d8, s9
0000f344  ldrb     w8, [x20, #0x38]
0000f348  ldr      x9, [x20, #0x48]
0000f34c  add      x23, x20, #0x39
0000f350  tst      w8, #1
0000f354  csel     x6, x23, x9, eq
0000f358  fmov     d0, d8
0000f35c  adrp     x3, #0x6000
0000f360  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000f364  adrp     x5, #0x7000
0000f368  add      x5, x5, #0x54b  ; "[LeicaFilter][%s], zoom ratio = %f"
0000f36c  mov      w0, #2
0000f370  mov      w2, #0x19e
0000f374  mov      w4, #0x49
0000f378  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000f37c  cbnz     w0, #0xf3d8
0000f380  mov      w0, #2
0000f384  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000f388  mov      x22, x0
0000f38c  adrp     x0, #0x5000
0000f390  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f394  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f398  ldrb     w8, [x20, #0x38]
0000f39c  ldr      x9, [x20, #0x48]
0000f3a0  mov      x4, x0
0000f3a4  tst      w8, #1
0000f3a8  csel     x7, x23, x9, eq
0000f3ac  fmov     d0, d8
0000f3b0  adrp     x1, #0x7000
0000f3b4  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000f3b8  adrp     x2, #0x5000
0000f3bc  add      x2, x2, #0xda3  ; "%s %s:%d %s()[LeicaFilter][%s], zoom ratio = %f"
0000f3c0  adrp     x6, #0x6000
0000f3c4  add      x6, x6, #0x8f9  ; "fillMetaDataInfo"
0000f3c8  mov      w0, #4
0000f3cc  mov      x3, x22
0000f3d0  mov      w5, #0x19e
0000f3d4  bl       #0x1ee00  ; <__android_log_print>
0000f3d8  ldr      w8, [x25]
0000f3dc  cmp      w8, #4
0000f3e0  b.hi     #0xf450
0000f3e4  adrp     x8, #0x20000
0000f3e8  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000f3ec  ldrb     w8, [x8]
0000f3f0  tbz      w8, #1, #0xf450
0000f3f4  adrp     x8, #0x20000
0000f3f8  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0000f3fc  ldr      w8, [x8]
0000f400  cbz      w8, #0xf450
0000f404  adrp     x0, #0x5000
0000f408  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f40c  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f410  ldrb     w8, [x20, #0x38]
0000f414  ldr      x9, [x20, #0x48]
0000f418  add      x10, x20, #0x39
0000f41c  mov      x2, x0
0000f420  fcvt     d0, s9
0000f424  tst      w8, #1
0000f428  csel     x6, x10, x9, eq
0000f42c  adrp     x1, #0x7000
0000f430  add      x1, x1, #0xb6f  ; =0x7b6f
0000f434  adrp     x3, #0x6000
0000f438  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000f43c  adrp     x5, #0x7000
0000f440  add      x5, x5, #0x54b  ; "[LeicaFilter][%s], zoom ratio = %f"
0000f444  mov      w0, #2
0000f448  mov      w4, #0x19e
0000f44c  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000f450  str      s9, [x20, #0xb4]
0000f454  adrp     x1, #0x6000
0000f458  add      x1, x1, #0x3cf  ; "xiaomi.snapshot.imageName"
0000f45c  add      x8, sp, #0x10
0000f460  mov      x0, x21
0000f464  bl       #0x1eda0  ; <_ZNK10MiMetadata4findEPKc>
0000f468  ldp      q1, q0, [sp, #0x10]
0000f46c  stp      q1, q0, [sp, #0x30]
0000f470  ldr      x8, [sp, #0x40]
0000f474  cbz      x8, #0xf480
0000f478  ldr      x8, [sp, #0x48]
0000f47c  str      x8, [x20, #0x18]
0000f480  strb     wzr, [x20, #0x27]
0000f484  adrp     x1, #0x6000
0000f488  add      x1, x1, #0x1e4  ; "xiaomi.camera.legendMode.styleTransON"
0000f48c  add      x8, sp, #0x10
0000f490  mov      x0, x21
0000f494  bl       #0x1eda0  ; <_ZNK10MiMetadata4findEPKc>
0000f498  ldp      q1, q0, [sp, #0x10]
0000f49c  stp      q1, q0, [sp, #0x30]
0000f4a0  ldr      x8, [sp, #0x40]
0000f4a4  cbz      x8, #0xf5f0
0000f4a8  ldr      x8, [sp, #0x48]
0000f4ac  ldr      w9, [x26]
0000f4b0  ldrb     w8, [x8]
0000f4b4  cmp      w9, #4
0000f4b8  strb     w8, [x20, #0x27]
0000f4bc  b.hi     #0xf578
0000f4c0  adrp     x8, #0x20000
0000f4c4  ldr      x8, [x8, #0xd30]  ; =0x20d30 <_ZN7midebug14gMiCamLogGroupE>
0000f4c8  ldrb     w8, [x8]
0000f4cc  tbz      w8, #1, #0xf578
0000f4d0  adrp     x0, #0x5000
0000f4d4  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f4d8  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f4dc  mov      x1, x0
0000f4e0  ldrb     w8, [x20, #0x38]
0000f4e4  ldr      x9, [x20, #0x48]
0000f4e8  add      x22, x20, #0x39
0000f4ec  ldrb     w7, [x20, #0x27]
0000f4f0  tst      w8, #1
0000f4f4  csel     x6, x22, x9, eq
0000f4f8  adrp     x3, #0x6000
0000f4fc  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000f500  adrp     x5, #0x6000
0000f504  add      x5, x5, #0xa0a  ; "[LeicaFilter][%s], m_styleTransON = %d"
0000f508  mov      w0, #2
0000f50c  mov      w2, #0x1ac
0000f510  mov      w4, #0x49
0000f514  bl       #0x1edd0  ; <_ZN7midebug3Log18catchLogEncryptLogEjPKciS2_cS2_z>
0000f518  cbnz     w0, #0xf578
0000f51c  mov      w0, #2
0000f520  bl       #0x1ede8  ; <_ZN7midebug3Log16miaGroupToStringEj>
0000f524  mov      x21, x0
0000f528  adrp     x0, #0x5000
0000f52c  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f530  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f534  ldrb     w8, [x20, #0x38]
0000f538  ldr      x9, [x20, #0x48]
0000f53c  mov      x4, x0
0000f540  tst      w8, #1
0000f544  ldrb     w8, [x20, #0x27]
0000f548  csel     x7, x22, x9, eq
0000f54c  adrp     x1, #0x7000
0000f550  add      x1, x1, #0xf49  ; "MiAlgoEngine"
0000f554  adrp     x2, #0x6000
0000f558  add      x2, x2, #0xe93  ; "%s %s:%d %s()[LeicaFilter][%s], m_styleTransON = %d"
0000f55c  adrp     x6, #0x6000
0000f560  add      x6, x6, #0x8f9  ; "fillMetaDataInfo"
0000f564  mov      w0, #4
0000f568  mov      x3, x21
0000f56c  mov      w5, #0x1ac
0000f570  str      w8, [sp]
0000f574  bl       #0x1ee00  ; <__android_log_print>
0000f578  ldr      w8, [x25]
0000f57c  cmp      w8, #4
0000f580  b.hi     #0xf5f0
0000f584  adrp     x8, #0x20000
0000f588  ldr      x8, [x8, #0xd40]  ; =0x20d40 <_ZN7midebug21gMiCamOfflineLogGroupE>
0000f58c  ldrb     w8, [x8]
0000f590  tbz      w8, #1, #0xf5f0
0000f594  adrp     x8, #0x20000
0000f598  ldr      x8, [x8, #0xd48]  ; =0x20d48 <_ZN7midebug15gMiCamDebugMaskE>
0000f59c  ldr      w8, [x8]
0000f5a0  cbz      w8, #0xf5f0
0000f5a4  adrp     x0, #0x5000
0000f5a8  add      x0, x0, #0x649  ; "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/qcom/build/16/../..//leica_filter/MiLeicaFilterPlugin.cpp"
0000f5ac  bl       #0x1edb8  ; <_ZN7midebug3Log11getFileNameEPKc>
0000f5b0  ldrb     w8, [x20, #0x38]
0000f5b4  ldr      x9, [x20, #0x48]
0000f5b8  add      x10, x20, #0x39
0000f5bc  ldrb     w7, [x20, #0x27]
0000f5c0  mov      x2, x0
0000f5c4  tst      w8, #1
0000f5c8  csel     x6, x10, x9, eq
0000f5cc  adrp     x1, #0x7000
0000f5d0  add      x1, x1, #0xb6f  ; =0x7b6f
0000f5d4  adrp     x3, #0x6000
0000f5d8  add      x3, x3, #0x8f9  ; "fillMetaDataInfo"
0000f5dc  adrp     x5, #0x6000
0000f5e0  add      x5, x5, #0xa0a  ; "[LeicaFilter][%s], m_styleTransON = %d"
0000f5e4  mov      w0, #2
0000f5e8  mov      w4, #0x1ac
0000f5ec  bl       #0x1ee18  ; <_ZN7midebug3Log9logSystemEjPKcS2_S2_iS2_z>
0000f5f0  cbz      x19, #0xf61c
0000f5f4  add      x1, x19, #8
0000f5f8  mov      x0, #-1
0000f5fc  bl       #0x1ec30
0000f600  cbnz     x0, #0xf61c
0000f604  ldr      x8, [x19]
0000f608  mov      x0, x19
0000f60c  ldr      x8, [x8, #0x10]  ; =0x20010
0000f610  blr      x8
0000f614  mov      x0, x19
0000f618  bl       #0x1f2c8  ; <_ZNSt3__119__shared_weak_count14__release_weakEv>
0000f61c  ldr      x8, [x24, #0x28]
0000f620  ldur     x9, [x29, #-0x18]
0000f624  cmp      x8, x9
0000f628  b.ne     #0xf6bc
0000f62c  ldp      x20, x19, [sp, #0xd0]
0000f630  ldp      x22, x21, [sp, #0xc0]
0000f634  ldp      x24, x23, [sp, #0xb0]
0000f638  ldp      x26, x25, [sp, #0xa0]
0000f63c  ldp      x28, x27, [sp, #0x90]
0000f640  ldp      x29, x30, [sp, #0x80]
0000f644  ldp      d9, d8, [sp, #0x70]
0000f648  add      sp, sp, #0xe0
0000f64c  autiasp  
0000f650  ret      
0000f654  mov      w9, #6
0000f658  ldr      x8, [x20, #0xc8]
0000f65c  str      x9, [x20, #0xc0]
0000f660  mov      w10, #0x6f63
0000f664  mov      w9, #0x6e6f
0000f668  movk     w10, #0x6d6d, lsl #16
0000f66c  b        #0xeef8
0000f670  b        #0xf698
0000f674  b        #0xf698
0000f678  b        #0xf698
0000f67c  b        #0xf698
0000f680  b        #0xf698
0000f684  b        #0xf698
0000f688  b        #0xf698
0000f68c  b        #0xf698
0000f690  b        #0xf698
0000f694  b        #0xf698
0000f698  mov      x19, x0
0000f69c  sub      x0, x29, #0x28
0000f6a0  bl       #0x116ac
0000f6a4  ldr      x8, [x24, #0x28]
0000f6a8  ldur     x9, [x29, #-0x18]
0000f6ac  cmp      x8, x9
0000f6b0  b.ne     #0xf6bc
0000f6b4  mov      x0, x19
0000f6b8  bl       #0x1ece0  ; <_Unwind_Resume>
0000f6bc  bl       #0x1ecf8  ; <__stack_chk_fail>
