// ===== 0x15574 getGainmapISOData @ 00115574

/* GainmapProcessor::getGainmapISOData(ultrahdr::uhdr_gainmap_metadata_ext*) */

void __thiscall
GainmapProcessor::getGainmapISOData(GainmapProcessor *this,uhdr_gainmap_metadata_ext *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *in_x8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_70 = 0;
  local_f0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ultrahdr::uhdr_gainmap_metadata_frac::gainmapMetadataFloatToFraction
            ((uhdr_gainmap_metadata_ext *)this,(uhdr_gainmap_metadata_frac *)&local_e0);
  if ((int)local_1f0 == 0) {
    local_f0 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
                    /* try { // try from 0011572c to 0011584b has its CatchHandler @ 00115878 */
    ultrahdr::uhdr_gainmap_metadata_frac::encodeGainmapMetadata
              ((uhdr_gainmap_metadata_frac *)&local_e0,(vector *)in_x8);
    if ((int)local_1f0 != 0) {
      if ((*(uint *)PTR_gMiCamLogLevel_00138fc0 < 7) &&
         (((byte)*PTR_gMiCamLogGroup_00138fc8 >> 1 & 1) != 0)) {
        pcVar3 = (char *)midebug::Log::getFileName
                                   (
                                   "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                                   );
        iVar2 = midebug::Log::catchLogEncryptLog
                          (2,pcVar3,0x180,"getGainmapISOData",'E',
                           "GetGainmapISOData error, error log:%s",(ulong)&local_1f0 | 8);
        if (iVar2 == 0) {
          uVar4 = midebug::Log::miaGroupToString(2);
          uVar5 = midebug::Log::getFileName
                            (
                            "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                            );
          __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()GetGainmapISOData error, error log:%s",
                              uVar4,uVar5,0x180,"getGainmapISOData",(ulong)&local_1f0 | 8);
        }
      }
      if ((*(uint *)PTR_gMiCamOfflineLogLevel_00138fd0 < 7) &&
         (((byte)*PTR_gMiCamOfflineLogGroup_00138fd8 >> 1 & 1) != 0)) {
        pcVar3 = (char *)midebug::Log::getFileName
                                   (
                                   "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                                   );
        midebug::Log::logSystem
                  (2,"E",pcVar3,"getGainmapISOData",0x180,"GetGainmapISOData error, error log:%s",
                   (ulong)&local_1f0 | 8);
      }
    }
  }
  else {
    if ((*(uint *)PTR_gMiCamLogLevel_00138fc0 < 7) &&
       (((byte)*PTR_gMiCamLogGroup_00138fc8 >> 1 & 1) != 0)) {
      pcVar3 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                                 );
      iVar2 = midebug::Log::catchLogEncryptLog
                        (2,pcVar3,0x17e,"getGainmapISOData",'E',
                         "GetGainmapISOData error, error log:%s",(ulong)&local_1f0 | 8);
      if (iVar2 == 0) {
        uVar4 = midebug::Log::miaGroupToString(2);
        uVar5 = midebug::Log::getFileName
                          (
                          "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                          );
        __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()GetGainmapISOData error, error log:%s",
                            uVar4,uVar5,0x17e,"getGainmapISOData",(ulong)&local_1f0 | 8);
      }
    }
    if ((*(uint *)PTR_gMiCamOfflineLogLevel_00138fd0 < 7) &&
       (((byte)*PTR_gMiCamOfflineLogGroup_00138fd8 >> 1 & 1) != 0)) {
      pcVar3 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                                 );
      midebug::Log::logSystem
                (2,"E",pcVar3,"getGainmapISOData",0x17e,"GetGainmapISOData error, error log:%s",
                 (ulong)&local_1f0 | 8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x14b90 compressGainMap @ 00114b90

/* GainmapProcessor::compressGainMap(std::__1::shared_ptr<MiMetadata>, unsigned char*, unsigned int,
   unsigned int, unsigned int, int, unsigned char**, unsigned long*, unsigned int) */

undefined8
GainmapProcessor::compressGainMap
          (char **param_1,long param_2,uint param_3,uint param_4,int param_5,int param_6,
          undefined8 param_7,undefined8 param_8,int param_11)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong __n;
  void *local_370;
  void *local_368;
  void *local_360;
  void *local_358;
  void **local_350;
  undefined8 uStack_348;
  long local_340;
  uint *local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  void **local_280;
  undefined8 uStack_278;
  long lStack_270;
  uint *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uStack_348 = 0;
  local_350 = (void **)0x0;
  local_338 = (uint *)0x0;
  local_340 = 0;
  MiMetadata::find(*param_1);
  if (local_340 == 0) {
    uVar10 = 0;
    uVar15 = 0;
    uVar12 = 0;
    uVar14 = 0;
    goto LAB_00114e84;
  }
  uVar3 = *local_338;
  if ((uVar3 & 0x1c) == 0) {
LAB_00114ccc:
    uVar10 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    MiMetadata::find(*param_1);
    uStack_348 = uStack_278;
    local_350 = local_280;
    local_338 = local_268;
    local_340 = lStack_270;
    if ((lStack_270 == 0) || (local_268[3] == 0)) goto LAB_00114ccc;
    piVar1 = &DAT_0013c070;
    if (param_11 != 0x9007) {
      piVar1 = &DAT_0013c06c;
    }
    piVar2 = &DAT_0013c070;
    if (param_11 != 0x9004) {
      piVar2 = piVar1;
    }
    piVar1 = &DAT_0013c070;
    if (param_11 != 0x80f3) {
      piVar1 = piVar2;
    }
    uVar11 = (int)(((double)(ulong)(*piVar1 + local_268[3]) + -1.0) / (double)*piVar1) + 1U &
             0xfffffffe;
    if (param_6 < 0xb4) {
      if (param_6 == 0) {
        uVar10 = 0;
        uVar12 = 0;
        uVar15 = 0;
        uVar14 = uVar11;
      }
      else {
        if (param_6 == 0x5a) {
          uVar10 = uVar11;
          uVar11 = 0;
        }
        else {
LAB_001150f4:
          uVar10 = 0;
          uVar11 = 0;
        }
LAB_00115100:
        uVar15 = 0;
        uVar12 = uVar11;
        uVar14 = 0;
      }
    }
    else {
      if (param_6 != 0xb4) {
        if (param_6 != 0x10e) goto LAB_001150f4;
        uVar10 = 0;
        goto LAB_00115100;
      }
      uVar10 = 0;
      uVar12 = 0;
      uVar14 = 0;
      uVar15 = uVar11;
    }
    if ((*(uint *)PTR_gMiCamLogLevel_00138fc0 < 4) &&
       (((byte)*PTR_gMiCamLogGroup_00138fc8 >> 1 & 1) != 0)) {
      pcVar6 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                                 );
      iVar5 = midebug::Log::catchLogEncryptLog
                        (2,pcVar6,0xe0,"compressGainMap",'D',
                         "leica watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d",(ulong)uVar15,
                         (ulong)uVar14,uVar12,uVar10,param_3,param_4);
      if (iVar5 == 0) {
        uVar7 = midebug::Log::miaGroupToString(2);
        uVar8 = midebug::Log::getFileName
                          (
                          "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                          );
        __android_log_print(3,"MiAlgoEngine",
                            "%s %s:%d %s()leica watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d",
                            uVar7,uVar8,0xe0,"compressGainMap",uVar15,uVar14,uVar12,uVar10,param_3,
                            param_4);
      }
    }
    if (((*(uint *)PTR_gMiCamOfflineLogLevel_00138fd0 < 4) &&
        (((byte)*PTR_gMiCamOfflineLogGroup_00138fd8 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00138fe0 != 0)) {
      pcVar6 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                                 );
      midebug::Log::logSystem
                (2,"D",pcVar6,"compressGainMap",0xe0,
                 "leica watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d",(ulong)uVar15,
                 (ulong)uVar14,uVar12,uVar10,param_3,param_4);
    }
  }
  if ((uVar3 & 0x700) != 0) {
    uVar10 = param_4;
    if (param_3 <= param_4) {
      uVar10 = param_3;
    }
    uVar10 = (uint)((float)uVar10 * 0.07407407);
    uVar15 = uVar10 & 7;
    if ((int)uVar10 < 1) {
      uVar15 = -(-uVar10 & 7);
    }
    uVar10 = uVar10 - uVar15;
    if ((*(uint *)PTR_gMiCamLogLevel_00138fc0 < 4) &&
       (((byte)*PTR_gMiCamLogGroup_00138fc8 >> 1 & 1) != 0)) {
      pcVar6 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                                 );
      iVar5 = midebug::Log::catchLogEncryptLog
                        (2,pcVar6,0xec,"compressGainMap",'D',
                         "ross watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d",(ulong)uVar10,
                         (ulong)uVar10,uVar10,uVar10,param_3,param_4);
      if (iVar5 == 0) {
        uVar7 = midebug::Log::miaGroupToString(2);
        uVar8 = midebug::Log::getFileName
                          (
                          "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                          );
        __android_log_print(3,"MiAlgoEngine",
                            "%s %s:%d %s()ross watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d",
                            uVar7,uVar8,0xec,"compressGainMap",uVar10,uVar10,uVar10,uVar10,param_3,
                            param_4);
      }
    }
    uVar15 = uVar10;
    uVar12 = uVar10;
    uVar14 = uVar10;
    if (((*(uint *)PTR_gMiCamOfflineLogLevel_00138fd0 < 4) &&
        (((byte)*PTR_gMiCamOfflineLogGroup_00138fd8 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00138fe0 != 0)) {
      pcVar6 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/jpegraggr/jpegrGainmapProcessor.h"
                                 );
      midebug::Log::logSystem
                (2,"D",pcVar6,"compressGainMap",0xec,
                 "ross watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d",(ulong)uVar10,
                 (ulong)uVar10,uVar10,uVar10,param_3,param_4);
    }
  }
LAB_00114e84:
  local_368 = (void *)0x0;
  local_360 = (void *)0x0;
  uVar3 = uVar10 + param_3 + uVar12;
  __n = (ulong)uVar3;
  local_280 = &local_368;
  local_358 = (void *)0x0;
  if (uVar3 != 0) {
    uStack_278 = 0;
                    /* try { // try from 00114eac to 00114eb3 has its CatchHandler @ 00115294 */
    local_368 = operator_new(__n);
    pvVar9 = (void *)((long)local_368 + __n);
    local_358 = pvVar9;
    memset(local_368,0,__n);
    local_360 = pvVar9;
  }
  local_290 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_180 = 0;
  local_188 = 0;
  uStack_190 = 0;
  local_198 = 0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  uStack_1c0 = 0;
  local_1c8 = 0;
  uStack_1d0 = 0;
  local_1d8 = 0;
  uStack_1e0 = 0;
  local_1e8 = 0;
  uStack_1f0 = 0;
  local_1f8 = 0;
  uStack_200 = 0;
  local_208 = 0;
  uStack_210 = 0;
  local_218 = 0;
  uStack_220 = 0;
  local_228 = 0;
  uStack_230 = 0;
  local_238 = 0;
  uStack_240 = 0;
  local_248 = 0;
  uStack_250 = 0;
  local_258 = 0;
  uStack_260 = 0;
  local_268 = (uint *)0x0;
  lStack_270 = 0;
  uStack_278 = 0;
  uStack_328 = 0;
  local_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
                    /* try { // try from 00114f5c to 00114fc3 has its CatchHandler @ 001152a4 */
  local_280 = (void **)jpeg_std_error(&local_330);
  jpeg_CreateCompress(&local_280,0x3e,0x208);
  jpeg_mem_dest(&local_280,param_7,param_8);
  uStack_250 = CONCAT44(uVar14 + param_4 + uVar15,uVar3);
  local_248 = 0x100000001;
  jpeg_set_defaults(&local_280);
  jpeg_set_quality(&local_280,0x62,1);
  jpeg_start_compress(&local_280,1);
  pvVar9 = local_370;
  local_370 = local_368;
  for (; local_368 = local_370, uVar15 != 0; uVar15 = uVar15 - 1) {
                    /* try { // try from 00114fd0 to 00114fdf has its CatchHandler @ 001152b0 */
    jpeg_write_scanlines(&local_280,&local_370,1);
    pvVar9 = local_370;
    local_370 = local_368;
  }
  if (param_4 != 0) {
    uVar15 = 0;
    uVar13 = (ulong)param_4;
    do {
      local_370 = pvVar9;
      pvVar9 = (void *)(param_2 + (ulong)uVar15);
      if ((uVar12 | uVar10) != 0) {
        memcpy((void *)((long)local_368 + (ulong)uVar12),(void *)(param_2 + (ulong)uVar15),
               (ulong)param_3);
        pvVar9 = local_368;
      }
                    /* try { // try from 00115024 to 00115033 has its CatchHandler @ 001152ac */
      local_370 = pvVar9;
      jpeg_write_scanlines(&local_280,&local_370,1);
      uVar13 = uVar13 - 1;
      uVar15 = uVar15 + param_5;
      pvVar9 = local_370;
    } while (uVar13 != 0);
  }
  local_370 = pvVar9;
  if (uVar14 != 0) {
    memset(local_368,0,__n);
    do {
      local_370 = local_368;
                    /* try { // try from 0011505c to 0011506b has its CatchHandler @ 001152a8 */
      jpeg_write_scanlines(&local_280,&local_370,1);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
                    /* try { // try from 00115074 to 00115083 has its CatchHandler @ 001152a4 */
  jpeg_finish_compress(&local_280);
  jpeg_destroy_compress(&local_280);
  if (local_368 != (void *)0x0) {
    local_360 = local_368;
    operator_delete(local_368,(long)local_358 - (long)local_368);
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x2834c processRequest @ 0012834c

/* jpegrAggrPlugin::processRequest(ProcessRequestInfoV2*) */

undefined8 jpegrAggrPlugin::processRequest(ProcessRequestInfoV2 *param_1)

{
  return 0;
}


// ===== 0x19b00 generatePrimaryXmp @ 00119b00

/* jpegrAggrPlugin::generatePrimaryXmp(GainmapProcessor::CompressedGainMapBuf const&,
   miSubImageManager const&, std::__1::shared_ptr<MiMetadata>, std::__1::shared_ptr<MiMetadata>,
   tag_disparity_fileheader_t*, int) */

void jpegrAggrPlugin::generatePrimaryXmp
               (ulong *param_1_00,long param_1,XmlWriter *param_2,miSubImageManager *param_4,
               shared_ptr *param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  size_t sVar6;
  long lVar7;
  ulong *puVar8;
  void **ppvVar9;
  undefined *__dest;
  ulong uVar10;
  byte *pbVar11;
  long *plVar12;
  char *pcVar13;
  void *pvVar14;
  ulong local_240;
  size_t sStack_238;
  char *local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  size_t local_208;
  void *local_200;
  undefined8 local_1f8;
  size_t sStack_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  byte *local_1c0;
  byte *pbStack_1b8;
  long local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long local_190 [3];
  undefined *puStack_178;
  undefined8 uStack_170;
  void *local_168;
  undefined8 local_160;
  ulong uStack_158;
  void *pvStack_150;
  ulong local_148;
  undefined8 local_140;
  ulong uStack_138;
  undefined8 uStack_130;
  void *local_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_80 = 0;
  puStack_178 = (undefined *)0x0;
  local_190[2] = 0;
  local_168 = (void *)0x0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_148 = 0;
  pvStack_150 = (void *)0x0;
  uStack_138 = 0;
  local_140 = 0;
  local_128 = (void *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_190[1] = 0;
  local_190[0] = 0;
  std::__1::basic_stringstream<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
  basic_stringstream_abi_ne200000_();
  local_1a0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  local_1c8 = (void *)0x0;
  uStack_1d0 = 0;
  pbStack_1b8 = (byte *)0x0;
  local_1c0 = (byte *)0x0;
  uStack_1a8 = 0;
  local_1b0 = 0;
                    /* try { // try from 00119b94 to 00119b9f has its CatchHandler @ 0011a414 */
  photos_editing_formats::image_io::XmlWriter::XmlWriter
            ((XmlWriter *)&local_1e0,(basic_ostream *)(local_190 + 2));
  sVar6 = strlen("x:xmpmeta");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0011a2e4 to 0011a2eb has its CatchHandler @ 0011a444 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_0011a494;
  }
  if (sVar6 < 0x17) {
    pcVar13 = (char *)((ulong)&local_1f8 | 1);
    local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00119c04;
  }
  else {
    uVar10 = 0x1a;
    if ((sVar6 | 7) != 0x17) {
      uVar10 = (sVar6 | 7) + 1;
    }
                    /* try { // try from 00119bec to 00119bf3 has its CatchHandler @ 0011a444 */
    pcVar13 = (char *)operator_new(uVar10);
    local_1f8 = uVar10 | 1;
    sStack_1f0 = sVar6;
    local_1e8 = pcVar13;
LAB_00119c04:
    memcpy(pcVar13,"x:xmpmeta",sVar6);
  }
  pcVar13[sVar6] = '\0';
                    /* try { // try from 00119c1c to 00119c27 has its CatchHandler @ 0011a404 */
  photos_editing_formats::image_io::XmlWriter::StartWritingElement((basic_string *)&local_1e0);
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8,local_1f8 & 0xfffffffffffffffe);
  }
  sVar6 = strlen("x");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0011a300 to 0011a307 has its CatchHandler @ 0011a43c */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_0011a494;
  }
  if (sVar6 < 0x17) {
    pcVar13 = (char *)((ulong)&local_1f8 | 1);
    local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00119ca0;
  }
  else {
    uVar10 = 0x1a;
    if ((sVar6 | 7) != 0x17) {
      uVar10 = (sVar6 | 7) + 1;
    }
                    /* try { // try from 00119c88 to 00119c8f has its CatchHandler @ 0011a43c */
    pcVar13 = (char *)operator_new(uVar10);
    local_1f8 = uVar10 | 1;
    sStack_1f0 = sVar6;
    local_1e8 = pcVar13;
LAB_00119ca0:
    memcpy(pcVar13,&DAT_00109b87,sVar6);
  }
  pcVar13[sVar6] = '\0';
  sVar6 = strlen("adobe:ns:meta/");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0011a31c to 0011a323 has its CatchHandler @ 0011a438 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_0011a494;
  }
  if (sVar6 < 0x17) {
    pvVar14 = (void *)((ulong)&local_210 | 1);
    local_210 = CONCAT71(local_210._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00119d18;
  }
  else {
    uVar10 = 0x1a;
    if ((sVar6 | 7) != 0x17) {
      uVar10 = (sVar6 | 7) + 1;
    }
                    /* try { // try from 00119d00 to 00119d07 has its CatchHandler @ 0011a438 */
    pvVar14 = operator_new(uVar10);
    local_210 = uVar10 | 1;
    local_208 = sVar6;
    local_200 = pvVar14;
LAB_00119d18:
    memcpy(pvVar14,"adobe:ns:meta/",sVar6);
  }
  *(undefined *)((long)pvVar14 + sVar6) = 0;
                    /* try { // try from 00119d30 to 00119d3f has its CatchHandler @ 0011a3e4 */
  photos_editing_formats::image_io::XmlWriter::WriteXmlns
            ((basic_string *)&local_1e0,(basic_string *)&local_1f8);
  if ((local_210 & 1) != 0) {
    operator_delete(local_200,local_210 & 0xfffffffffffffffe);
  }
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8,local_1f8 & 0xfffffffffffffffe);
  }
  sVar6 = strlen("x:xmptk");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0011a338 to 0011a33f has its CatchHandler @ 0011a430 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_0011a494;
  }
  if (sVar6 < 0x17) {
    pcVar13 = (char *)((ulong)&local_1f8 | 1);
    local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00119dd0;
  }
  else {
    uVar10 = 0x1a;
    if ((sVar6 | 7) != 0x17) {
      uVar10 = (sVar6 | 7) + 1;
    }
                    /* try { // try from 00119db8 to 00119dbf has its CatchHandler @ 0011a430 */
    pcVar13 = (char *)operator_new(uVar10);
    local_1f8 = uVar10 | 1;
    sStack_1f0 = sVar6;
    local_1e8 = pcVar13;
LAB_00119dd0:
    memcpy(pcVar13,"x:xmptk",sVar6);
  }
  pcVar13[sVar6] = '\0';
                    /* try { // try from 00119de8 to 00119dfb has its CatchHandler @ 0011a3e0 */
  photos_editing_formats::image_io::XmlWriter::WriteAttributeNameAndValue<char[21]>
            ((XmlWriter *)&local_1e0,(basic_string *)&local_1f8,"Adobe XMP Core 5.1.2");
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8,local_1f8 & 0xfffffffffffffffe);
  }
  sVar6 = strlen("rdf:RDF");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0011a354 to 0011a35b has its CatchHandler @ 0011a428 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_0011a494;
  }
  if (sVar6 < 0x17) {
    pcVar13 = (char *)((ulong)&local_1f8 | 1);
    local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00119e74;
  }
  else {
    uVar10 = 0x1a;
    if ((sVar6 | 7) != 0x17) {
      uVar10 = (sVar6 | 7) + 1;
    }
                    /* try { // try from 00119e5c to 00119e63 has its CatchHandler @ 0011a428 */
    pcVar13 = (char *)operator_new(uVar10);
    local_1f8 = uVar10 | 1;
    sStack_1f0 = sVar6;
    local_1e8 = pcVar13;
LAB_00119e74:
    memcpy(pcVar13,"rdf:RDF",sVar6);
  }
  pcVar13[sVar6] = '\0';
                    /* try { // try from 00119e8c to 00119e97 has its CatchHandler @ 0011a3dc */
  photos_editing_formats::image_io::XmlWriter::StartWritingElement((basic_string *)&local_1e0);
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8,local_1f8 & 0xfffffffffffffffe);
  }
  sVar6 = strlen("rdf");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0011a370 to 0011a377 has its CatchHandler @ 0011a420 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_0011a494;
  }
  if (sVar6 < 0x17) {
    pcVar13 = (char *)((ulong)&local_1f8 | 1);
    local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00119f10;
  }
  else {
    uVar10 = 0x1a;
    if ((sVar6 | 7) != 0x17) {
      uVar10 = (sVar6 | 7) + 1;
    }
                    /* try { // try from 00119ef8 to 00119eff has its CatchHandler @ 0011a420 */
    pcVar13 = (char *)operator_new(uVar10);
    local_1f8 = uVar10 | 1;
    sStack_1f0 = sVar6;
    local_1e8 = pcVar13;
LAB_00119f10:
    memcpy(pcVar13,&DAT_00109eaf,sVar6);
  }
  pcVar13[sVar6] = '\0';
  sVar6 = strlen("http://www.w3.org/1999/02/22-rdf-syntax-ns#");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0011a38c to 0011a393 has its CatchHandler @ 0011a41c */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_0011a494;
  }
  if (sVar6 < 0x17) {
    pvVar14 = (void *)((ulong)&local_210 | 1);
    local_210 = CONCAT71(local_210._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00119f88;
  }
  else {
    uVar10 = 0x1a;
    if ((sVar6 | 7) != 0x17) {
      uVar10 = (sVar6 | 7) + 1;
    }
                    /* try { // try from 00119f70 to 00119f77 has its CatchHandler @ 0011a41c */
    pvVar14 = operator_new(uVar10);
    local_210 = uVar10 | 1;
    local_208 = sVar6;
    local_200 = pvVar14;
LAB_00119f88:
    memcpy(pvVar14,"http://www.w3.org/1999/02/22-rdf-syntax-ns#",sVar6);
  }
  *(undefined *)((long)pvVar14 + sVar6) = 0;
                    /* try { // try from 00119fa0 to 00119faf has its CatchHandler @ 0011a3d8 */
  photos_editing_formats::image_io::XmlWriter::WriteXmlns
            ((basic_string *)&local_1e0,(basic_string *)&local_1f8);
  if ((local_210 & 1) != 0) {
    operator_delete(local_200,local_210 & 0xfffffffffffffffe);
  }
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8,local_1f8 & 0xfffffffffffffffe);
  }
  plVar12 = (long *)param_6[1];
  uStack_218 = param_6[1];
  local_220 = *param_6;
  local_1f8 = 0;
  sStack_1f0 = 0;
  local_1e8 = (char *)0x0;
  if (plVar12 != (long *)0x0) {
    __aarch64_ldadd8_relax(1,plVar12 + 1);
  }
                    /* try { // try from 0011a008 to 0011a01f has its CatchHandler @ 0011a3c8 */
  bokehInteraction::addBokehDepthMapInfo((bokehInteraction *)&local_1f8);
  if ((plVar12 == (long *)0x0) ||
     (lVar7 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar12 + 1), lVar7 != 0)) {
    if ((local_1f8 & 1) != 0) goto LAB_0011a070;
LAB_0011a03c:
    sStack_238 = sStack_1f0;
    local_240 = local_1f8;
    local_230 = local_1e8;
  }
  else {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__1::__shared_weak_count::__release_weak();
    if ((local_1f8 & 1) == 0) goto LAB_0011a03c;
LAB_0011a070:
                    /* try { // try from 0011a074 to 0011a07b has its CatchHandler @ 0011a44c */
    std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)
               &local_240,local_1e8,sStack_1f0);
  }
                    /* try { // try from 0011a07c to 0011a08b has its CatchHandler @ 0011a3b0 */
  puVar8 = &local_240;
  miSubImageManager::writeXmpRDF(param_4,&local_1e0);
  if ((local_240 & 1) != 0) {
    operator_delete(local_230,local_240 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
                    /* try { // try from 0011a0ac to 0011a183 has its CatchHandler @ 0011a44c */
    GainmapProcessor::writeImageGoogleContainerRDF
              ((GainmapProcessor *)&local_1e0,param_2,(CompressedGainMapBuf *)puVar8);
  }
  if (((*(byte *)(param_1 + 0xd0) >> 2 & 1) == 0) &&
     ((*(int *)(param_1 + 0xb0) == 0x80f1 || (*(int *)(param_1 + 0xb0) == 0x8002)))) {
    bokehInteraction::addBokehInteraction((XmlWriter *)&local_1e0,param_5,*(uint *)(param_1 + 0xd4))
    ;
  }
  photos_editing_formats::image_io::XmlWriter::FinishWritingElement();
  photos_editing_formats::image_io::XmlWriter::FinishWritingElement();
  if (((uint)uStack_118 >> 4 & 1) == 0) {
    if (((uint)uStack_118 >> 3 & 1) != 0) {
      ppvVar9 = &local_168;
      uVar10 = uStack_158;
      goto LAB_0011a144;
    }
    uVar10 = 0;
    __dest = (undefined *)((long)param_1_00 + 1);
    *(undefined *)param_1_00 = 0;
  }
  else {
    if (local_120 < local_148) {
      local_120 = local_148;
    }
    ppvVar9 = &pvStack_150;
    uVar10 = local_120;
LAB_0011a144:
    pvVar14 = *ppvVar9;
    uVar10 = uVar10 - (long)pvVar14;
    if (0xfffffffffffffff7 < uVar10) {
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0011a3a8 to 0011a3af has its CatchHandler @ 0011a44c */
                    /* WARNING: Subroutine does not return */
        std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
        __throw_length_error_abi_ne200000_();
      }
      goto LAB_0011a494;
    }
    if (uVar10 < 0x17) {
      __dest = (undefined *)((long)param_1_00 + 1);
      *(char *)param_1_00 = (char)((int)uVar10 << 1);
      if (uVar10 == 0) goto LAB_0011a1a4;
    }
    else {
      uVar1 = 0x1a;
      if ((uVar10 | 7) != 0x17) {
        uVar1 = (uVar10 | 7) + 1;
      }
      __dest = (undefined *)operator_new(uVar1);
      param_1_00[1] = uVar10;
      param_1_00[2] = (ulong)__dest;
      *param_1_00 = uVar1 | 1;
    }
    memmove(__dest,pvVar14,uVar10);
  }
LAB_0011a1a4:
  __dest[uVar10] = 0;
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8,local_1f8 & 0xfffffffffffffffe);
  }
  pbVar5 = local_1c0;
  pbVar11 = pbStack_1b8;
  if (local_1c0 != (byte *)0x0) {
    while (pbVar4 = pbVar11, pbVar5 != pbVar4) {
      pbVar11 = pbVar4 + -0x20;
      if ((*pbVar11 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x10),*(ulong *)(pbVar4 + -0x20) & 0xfffffffffffffffe);
      }
    }
    pbStack_1b8 = pbVar5;
    operator_delete(local_1c0,local_1b0 - (long)local_1c0);
  }
  if ((uStack_1d8 & 1) != 0) {
    operator_delete(local_1c8,uStack_1d8 & 0xfffffffffffffffe);
  }
  local_190[0] = *(long *)PTR_VTT_00138fb0;
  uVar2 = *(undefined8 *)(PTR_VTT_00138fb0 + 0x48);
  *(undefined8 *)((long)local_190 + *(long *)(local_190[0] + -0x18)) =
       *(undefined8 *)(PTR_VTT_00138fb0 + 0x40);
  puStack_178 = PTR_vtable_00138fb8 + 0x10;
  local_190[2] = uVar2;
  if ((uStack_138 & 1) != 0) {
    operator_delete(local_128,uStack_138 & 0xfffffffffffffffe);
  }
  std::__1::basic_streambuf<char,std::__1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__1::char_traits<char>> *)&puStack_178);
  std::__1::basic_iostream<char,std::__1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__1::char_traits<char>> *)local_190);
  std::__1::basic_ios<char,std::__1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__1::char_traits<char>> *)&uStack_110);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
LAB_0011a494:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x158b4 writeImageGoogleContainerRDF @ 001158b4

/* WARNING: Type propagation algorithm not settling */
/* GainmapProcessor::writeImageGoogleContainerRDF(photos_editing_formats::image_io::XmlWriter&,
   GainmapProcessor::CompressedGainMapBuf const&) */

void __thiscall
GainmapProcessor::writeImageGoogleContainerRDF
          (GainmapProcessor *this,XmlWriter *param_1,CompressedGainMapBuf *param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  CompressedGainMapBuf *pCVar5;
  basic_string *pbVar6;
  size_t __n;
  byte *pbVar7;
  void *pvVar8;
  char *pcVar9;
  byte *local_2f8;
  byte *local_2f0;
  long local_2e8;
  byte *local_2e0;
  byte *local_2d8;
  long local_2d0;
  ulong local_2c8;
  undefined8 uStack_2c0;
  void *local_2b8;
  ulong local_2b0;
  undefined8 uStack_2a8;
  void *local_2a0;
  ulong local_298;
  undefined8 uStack_290;
  void *local_288;
  ulong local_280;
  undefined8 uStack_278;
  void *local_270;
  ulong local_268;
  undefined8 uStack_260;
  void *local_258;
  ulong local_250;
  undefined8 uStack_248;
  void *local_240;
  ulong local_238;
  undefined8 uStack_230;
  void *local_228;
  ulong local_220;
  undefined8 uStack_218;
  void *local_210;
  ulong local_208;
  undefined8 uStack_200;
  void *local_1f8;
  undefined8 local_1f0;
  basic_string *local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  basic_string *local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  basic_string *local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  basic_string *local_1a0;
  void *local_198;
  undefined8 local_190;
  basic_string *local_188;
  void *local_180;
  ulong local_178;
  undefined8 uStack_170;
  void *local_168;
  ulong local_160;
  undefined8 uStack_158;
  void *local_150;
  ulong local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 local_130;
  basic_string *local_128;
  void *local_120;
  undefined8 local_118;
  basic_string *local_110;
  void *local_108;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  ulong local_e8;
  basic_string *pbStack_e0;
  char *local_d8;
  undefined8 local_d0;
  CompressedGainMapBuf *local_c8;
  void *local_c0;
  undefined8 local_b8;
  CompressedGainMapBuf *local_b0;
  void *local_a8;
  undefined8 local_a0;
  basic_string *pbStack_98;
  char *local_90;
  undefined8 local_88;
  size_t sStack_80;
  char *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b8 = 0;
  local_b0 = (CompressedGainMapBuf *)0x0;
  local_a8 = (void *)0x0;
  pCVar5 = (CompressedGainMapBuf *)strlen("http://ns.google.com/photos/1.0/container/");
  if ((CompressedGainMapBuf *)0xfffffffffffffff7 < pCVar5) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pCVar5 < (CompressedGainMapBuf *)0x17) {
    pvVar8 = (void *)((ulong)&local_b8 | 1);
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)pCVar5 << 1));
    if (pCVar5 != (CompressedGainMapBuf *)0x0) goto LAB_00115954;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pCVar5 | 7) != 0x17) {
      uVar1 = ((ulong)pCVar5 | 7) + 1;
    }
    pvVar8 = operator_new(uVar1);
    local_b8 = uVar1 | 1;
    local_b0 = pCVar5;
    local_a8 = pvVar8;
LAB_00115954:
    param_2 = pCVar5;
    memcpy(pvVar8,"http://ns.google.com/photos/1.0/container/",(size_t)pCVar5);
  }
  *(CompressedGainMapBuf *)((long)pvVar8 + (long)pCVar5) = (CompressedGainMapBuf)0x0;
  local_d0 = 0;
  local_c8 = (CompressedGainMapBuf *)0x0;
  local_c0 = (void *)0x0;
  pCVar5 = (CompressedGainMapBuf *)strlen("Container");
  if ((CompressedGainMapBuf *)0xfffffffffffffff7 < pCVar5) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117068 to 0011706f has its CatchHandler @ 00117628 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pCVar5 < (CompressedGainMapBuf *)0x17) {
    pvVar8 = (void *)((ulong)&local_d0 | 1);
    local_d0 = CONCAT71(local_d0._1_7_,(char)((int)pCVar5 << 1));
    if (pCVar5 != (CompressedGainMapBuf *)0x0) goto LAB_001159d4;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pCVar5 | 7) != 0x17) {
      uVar1 = ((ulong)pCVar5 | 7) + 1;
    }
                    /* try { // try from 001159bc to 001159c3 has its CatchHandler @ 00117628 */
    pvVar8 = operator_new(uVar1);
    local_d0 = uVar1 | 1;
    local_c8 = pCVar5;
    local_c0 = pvVar8;
LAB_001159d4:
    param_2 = pCVar5;
    memcpy(pvVar8,"Container",(size_t)pCVar5);
  }
  *(CompressedGainMapBuf *)((long)pvVar8 + (long)pCVar5) = (CompressedGainMapBuf)0x0;
  local_e8 = 0;
  pbStack_e0 = (basic_string *)0x0;
  local_d8 = (char *)0x0;
  pbVar6 = (basic_string *)strlen("Directory");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117080 to 00117087 has its CatchHandler @ 00117620 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115a54;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115a3c to 00115a43 has its CatchHandler @ 00117620 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00115a54:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"Directory",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00115a6c to 00115a7b has its CatchHandler @ 001174f4 */
  Name((GainmapProcessor *)&local_d0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = (char *)0x0;
  pbVar6 = (basic_string *)strlen("Item");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117098 to 0011709f has its CatchHandler @ 00117618 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115afc;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115ae4 to 00115aeb has its CatchHandler @ 00117618 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00115afc:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,&DAT_0010a8e7,(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00115b14 to 00115b23 has its CatchHandler @ 001174dc */
  Name((GainmapProcessor *)&local_d0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_118 = 0;
  local_110 = (basic_string *)0x0;
  local_108 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("http://ns.google.com/photos/1.0/container/item/");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001170b0 to 001170b7 has its CatchHandler @ 00117608 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pvVar8 = (void *)((ulong)&local_118 | 1);
    local_118 = CONCAT71(local_118._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115ba4;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115b8c to 00115b93 has its CatchHandler @ 00117608 */
    pvVar8 = operator_new(uVar1);
    local_118 = uVar1 | 1;
    local_110 = pbVar6;
    local_108 = pvVar8;
LAB_00115ba4:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pvVar8,"http://ns.google.com/photos/1.0/container/item/",(size_t)pbVar6);
  }
  *(basic_string *)((long)pvVar8 + (long)pbVar6) = (basic_string)0x0;
  local_130 = 0;
  local_128 = (basic_string *)0x0;
  local_120 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("Item");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001170c8 to 001170cf has its CatchHandler @ 001175f8 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pvVar8 = (void *)((ulong)&local_130 | 1);
    local_130 = CONCAT71(local_130._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115c24;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115c0c to 00115c13 has its CatchHandler @ 001175f8 */
    pvVar8 = operator_new(uVar1);
    local_130 = uVar1 | 1;
    local_128 = pbVar6;
    local_120 = pvVar8;
LAB_00115c24:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pvVar8,&DAT_0010a8e7,(size_t)pbVar6);
  }
  *(basic_string *)((long)pvVar8 + (long)pbVar6) = (basic_string)0x0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("Length");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001170e0 to 001170e7 has its CatchHandler @ 001175f0 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115ca4;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115c8c to 00115c93 has its CatchHandler @ 001175f0 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00115ca4:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"Length",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00115cbc to 00115ccb has its CatchHandler @ 001174c4 */
  Name((GainmapProcessor *)&local_130,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_160 = 0;
  uStack_158 = 0;
  local_150 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("Mime");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001170f8 to 001170ff has its CatchHandler @ 001175e8 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115d4c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115d34 to 00115d3b has its CatchHandler @ 001175e8 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00115d4c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,&DAT_0010a54b,(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00115d64 to 00115d73 has its CatchHandler @ 001174ac */
  Name((GainmapProcessor *)&local_130,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_178 = 0;
  uStack_170 = 0;
  local_168 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("Semantic");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117110 to 00117117 has its CatchHandler @ 001175e0 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115df4;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115ddc to 00115de3 has its CatchHandler @ 001175e0 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00115df4:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"Semantic",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00115e0c to 00115e1b has its CatchHandler @ 00117494 */
  Name((GainmapProcessor *)&local_130,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_190 = 0;
  local_188 = (basic_string *)0x0;
  local_180 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("Primary");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117128 to 0011712f has its CatchHandler @ 001175d0 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pvVar8 = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115e9c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115e84 to 00115e8b has its CatchHandler @ 001175d0 */
    pvVar8 = operator_new(uVar1);
    local_190 = uVar1 | 1;
    local_188 = pbVar6;
    local_180 = pvVar8;
LAB_00115e9c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pvVar8,"Primary",(size_t)pbVar6);
  }
  *(basic_string *)((long)pvVar8 + (long)pbVar6) = (basic_string)0x0;
  local_1a8 = 0;
  local_1a0 = (basic_string *)0x0;
  local_198 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("GainMap");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117140 to 00117147 has its CatchHandler @ 001175c0 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pvVar8 = (void *)((ulong)&local_1a8 | 1);
    local_1a8 = CONCAT71(local_1a8._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115f1c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115f04 to 00115f0b has its CatchHandler @ 001175c0 */
    pvVar8 = operator_new(uVar1);
    local_1a8 = uVar1 | 1;
    local_1a0 = pbVar6;
    local_198 = pvVar8;
LAB_00115f1c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pvVar8,"GainMap",(size_t)pbVar6);
  }
  *(basic_string *)((long)pvVar8 + (long)pbVar6) = (basic_string)0x0;
  local_1c0 = 0;
  local_1b8 = (basic_string *)0x0;
  local_1b0 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("image/jpeg");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117158 to 0011715f has its CatchHandler @ 001175b0 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pvVar8 = (void *)((ulong)&local_1c0 | 1);
    local_1c0 = CONCAT71(local_1c0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00115f9c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00115f84 to 00115f8b has its CatchHandler @ 001175b0 */
    pvVar8 = operator_new(uVar1);
    local_1c0 = uVar1 | 1;
    local_1b8 = pbVar6;
    local_1b0 = pvVar8;
LAB_00115f9c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pvVar8,"image/jpeg",(size_t)pbVar6);
  }
  *(basic_string *)((long)pvVar8 + (long)pbVar6) = (basic_string)0x0;
  local_1d8 = 0;
  local_1d0 = (basic_string *)0x0;
  local_1c8 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("http://ns.adobe.com/hdr-gain-map/1.0/");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117170 to 00117177 has its CatchHandler @ 001175a0 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pvVar8 = (void *)((ulong)&local_1d8 | 1);
    local_1d8 = CONCAT71(local_1d8._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_0011601c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00116004 to 0011600b has its CatchHandler @ 001175a0 */
    pvVar8 = operator_new(uVar1);
    local_1d8 = uVar1 | 1;
    local_1d0 = pbVar6;
    local_1c8 = pvVar8;
LAB_0011601c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pvVar8,"http://ns.adobe.com/hdr-gain-map/1.0/",(size_t)pbVar6);
  }
  *(basic_string *)((long)pvVar8 + (long)pbVar6) = (basic_string)0x0;
  local_1f0 = 0;
  local_1e8 = (basic_string *)0x0;
  local_1e0 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("hdrgm");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117188 to 0011718f has its CatchHandler @ 00117590 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pvVar8 = (void *)((ulong)&local_1f0 | 1);
    local_1f0 = CONCAT71(local_1f0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_0011609c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00116084 to 0011608b has its CatchHandler @ 00117590 */
    pvVar8 = operator_new(uVar1);
    local_1f0 = uVar1 | 1;
    local_1e8 = pbVar6;
    local_1e0 = pvVar8;
LAB_0011609c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pvVar8,"hdrgm",(size_t)pbVar6);
  }
  *(basic_string *)((long)pvVar8 + (long)pbVar6) = (basic_string)0x0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("Version");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001171a0 to 001171a7 has its CatchHandler @ 00117588 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_0011611c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00116104 to 0011610b has its CatchHandler @ 00117588 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_0011611c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"Version",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00116134 to 00116143 has its CatchHandler @ 0011747c */
  Name((GainmapProcessor *)&local_1f0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_220 = 0;
  uStack_218 = 0;
  local_210 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("GainMapMin");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001171b8 to 001171bf has its CatchHandler @ 00117580 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_001161c4;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 001161ac to 001161b3 has its CatchHandler @ 00117580 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_001161c4:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"GainMapMin",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 001161dc to 001161eb has its CatchHandler @ 00117464 */
  Name((GainmapProcessor *)&local_1f0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_238 = 0;
  uStack_230 = 0;
  local_228 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("GainMapMax");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001171d0 to 001171d7 has its CatchHandler @ 00117578 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_0011626c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00116254 to 0011625b has its CatchHandler @ 00117578 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_0011626c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"GainMapMax",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00116284 to 00116293 has its CatchHandler @ 0011744c */
  Name((GainmapProcessor *)&local_1f0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_250 = 0;
  uStack_248 = 0;
  local_240 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("Gamma");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001171e8 to 001171ef has its CatchHandler @ 00117570 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00116314;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 001162fc to 00116303 has its CatchHandler @ 00117570 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00116314:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"Gamma",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 0011632c to 0011633b has its CatchHandler @ 00117434 */
  Name((GainmapProcessor *)&local_1f0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_268 = 0;
  uStack_260 = 0;
  local_258 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("OffsetSDR");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117200 to 00117207 has its CatchHandler @ 00117568 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_001163bc;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 001163a4 to 001163ab has its CatchHandler @ 00117568 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_001163bc:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"OffsetSDR",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 001163d4 to 001163e3 has its CatchHandler @ 0011741c */
  Name((GainmapProcessor *)&local_1f0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_280 = 0;
  uStack_278 = 0;
  local_270 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("OffsetHDR");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117218 to 0011721f has its CatchHandler @ 00117560 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00116464;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 0011644c to 00116453 has its CatchHandler @ 00117560 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00116464:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"OffsetHDR",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 0011647c to 0011648b has its CatchHandler @ 00117404 */
  Name((GainmapProcessor *)&local_1f0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_298 = 0;
  uStack_290 = 0;
  local_288 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("HDRCapacityMin");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117230 to 00117237 has its CatchHandler @ 00117558 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_0011650c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 001164f4 to 001164fb has its CatchHandler @ 00117558 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_0011650c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"HDRCapacityMin",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00116524 to 00116533 has its CatchHandler @ 001173ec */
  Name((GainmapProcessor *)&local_1f0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2a0 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("HDRCapacityMax");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117248 to 0011724f has its CatchHandler @ 00117550 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_001165b4;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 0011659c to 001165a3 has its CatchHandler @ 00117550 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_001165b4:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"HDRCapacityMax",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 001165cc to 001165db has its CatchHandler @ 001173d4 */
  Name((GainmapProcessor *)&local_1f0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = (void *)0x0;
  pbVar6 = (basic_string *)strlen("BaseRenditionIsHDR");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117260 to 00117267 has its CatchHandler @ 00117548 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_0011665c;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00116644 to 0011664b has its CatchHandler @ 00117548 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_0011665c:
    param_2 = (CompressedGainMapBuf *)pbVar6;
    memcpy(pcVar9,"BaseRenditionIsHDR",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00116674 to 00116683 has its CatchHandler @ 001173bc */
  Name((GainmapProcessor *)&local_1f0,(basic_string *)&local_a0,(basic_string *)param_2);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_2e0 = (byte *)0x0;
  local_2d8 = (byte *)0x0;
  local_2d0 = 0;
  if ((local_e8 & 1) == 0) {
    pbStack_98 = pbStack_e0;
    local_a0 = local_e8;
    local_90 = local_d8;
  }
  else {
                    /* try { // try from 001166c8 to 001166cf has its CatchHandler @ 00117324 */
    std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)&local_a0
               ,local_d8,(ulong)pbStack_e0);
  }
  __n = strlen("rdf:Seq");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117278 to 00117283 has its CatchHandler @ 00117528 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (__n < 0x17) {
    pcVar9 = (char *)((long)&local_88 + 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00116730;
  }
  else {
    uVar1 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar1 = (__n | 7) + 1;
    }
                    /* try { // try from 00116718 to 0011671f has its CatchHandler @ 00117528 */
    pcVar9 = (char *)operator_new(uVar1);
    local_88 = uVar1 | 1;
    sStack_80 = __n;
    local_78 = pcVar9;
LAB_00116730:
    memcpy(pcVar9,"rdf:Seq",__n);
  }
  pcVar9[__n] = '\0';
                    /* try { // try from 00116748 to 00116757 has its CatchHandler @ 00117394 */
  std::__1::
  vector<std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>,std::__1::allocator<std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>
  ::vector_abi_ne200000_((initializer_list)&local_2e0);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78,local_88 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  local_2f8 = (byte *)0x0;
  local_2f0 = (byte *)0x0;
  local_2e8 = 0;
  pbVar6 = (basic_string *)strlen("rdf:li");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00117294 to 0011729b has its CatchHandler @ 00117520 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_001167f0;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 001167d8 to 001167df has its CatchHandler @ 00117520 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_001167f0:
    memcpy(pcVar9,"rdf:li",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
  if ((local_100 & 1) == 0) {
    sStack_80 = uStack_f8;
    local_88 = local_100;
    local_78 = local_f0;
  }
  else {
                    /* try { // try from 0011682c to 00116833 has its CatchHandler @ 00117314 */
    std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)&local_88
               ,local_f0,uStack_f8);
  }
                    /* try { // try from 00116834 to 00116843 has its CatchHandler @ 0011735c */
  std::__1::
  vector<std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>,std::__1::allocator<std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>
  ::vector_abi_ne200000_((initializer_list)&local_2f8);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78,local_88 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  pbVar6 = (basic_string *)strlen("rdf:Description");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001172ac to 001172b3 has its CatchHandler @ 0011751c */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_001168d4;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 001168bc to 001168c3 has its CatchHandler @ 0011751c */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_001168d4:
    memcpy(pcVar9,"rdf:Description",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 001168ec to 001168f7 has its CatchHandler @ 0011733c */
  photos_editing_formats::image_io::XmlWriter::StartWritingElement((basic_string *)this);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
                    /* try { // try from 00116914 to 00116963 has its CatchHandler @ 00117630 */
  photos_editing_formats::image_io::XmlWriter::WriteXmlns
            ((basic_string *)this,(basic_string *)&local_d0);
  photos_editing_formats::image_io::XmlWriter::WriteXmlns
            ((basic_string *)this,(basic_string *)&local_130);
  photos_editing_formats::image_io::XmlWriter::WriteXmlns
            ((basic_string *)this,(basic_string *)&local_1f0);
  photos_editing_formats::image_io::XmlWriter::WriteAttributeNameAndValue
            ((basic_string *)this,(basic_string *)&local_208,(bool)((char)param_1 + -0x60));
  photos_editing_formats::image_io::XmlWriter::StartWritingElements((vector *)this);
  pbVar6 = (basic_string *)strlen("rdf:li");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001172c4 to 001172cb has its CatchHandler @ 00117518 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_001169c4;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 001169ac to 001169b3 has its CatchHandler @ 00117518 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_001169c4:
    memcpy(pcVar9,"rdf:li",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 001169dc to 001169e7 has its CatchHandler @ 00117338 */
  photos_editing_formats::image_io::XmlWriter::StartWritingElement((basic_string *)this);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  pbVar6 = (basic_string *)strlen("rdf:parseType");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001172dc to 001172e3 has its CatchHandler @ 00117514 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00116a64;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00116a4c to 00116a53 has its CatchHandler @ 00117514 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00116a64:
    memcpy(pcVar9,"rdf:parseType",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00116a7c to 00116a8f has its CatchHandler @ 00117334 */
  photos_editing_formats::image_io::XmlWriter::WriteAttributeNameAndValue<char[9]>
            ((XmlWriter *)this,(basic_string *)&local_a0,"Resource");
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
                    /* try { // try from 00116aa8 to 00116ae7 has its CatchHandler @ 00117634 */
  photos_editing_formats::image_io::XmlWriter::StartWritingElement((basic_string *)this);
  photos_editing_formats::image_io::XmlWriter::WriteAttributeNameAndValue
            ((basic_string *)this,(basic_string *)&local_178,SUB81(&local_190,0));
  photos_editing_formats::image_io::XmlWriter::WriteAttributeNameAndValue
            ((basic_string *)this,(basic_string *)&local_160,SUB81(&local_1c0,0));
  photos_editing_formats::image_io::XmlWriter::FinishWritingElementsToDepth((ulong)this);
  pbVar6 = (basic_string *)strlen("rdf:li");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001172f4 to 001172fb has its CatchHandler @ 00117510 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00116b48;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00116b30 to 00116b37 has its CatchHandler @ 00117510 */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00116b48:
    memcpy(pcVar9,"rdf:li",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00116b60 to 00116b6b has its CatchHandler @ 00117330 */
  photos_editing_formats::image_io::XmlWriter::StartWritingElement((basic_string *)this);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
  pbVar6 = (basic_string *)strlen("rdf:parseType");
  if ((basic_string *)0xfffffffffffffff7 < pbVar6) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0011730c to 00117313 has its CatchHandler @ 0011750c */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001178c8;
  }
  if (pbVar6 < (basic_string *)0x17) {
    pcVar9 = (char *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar6 << 1));
    if (pbVar6 != (basic_string *)0x0) goto LAB_00116be4;
  }
  else {
    uVar1 = 0x1a;
    if (((ulong)pbVar6 | 7) != 0x17) {
      uVar1 = ((ulong)pbVar6 | 7) + 1;
    }
                    /* try { // try from 00116bcc to 00116bd3 has its CatchHandler @ 0011750c */
    pcVar9 = (char *)operator_new(uVar1);
    local_a0 = uVar1 | 1;
    pbStack_98 = pbVar6;
    local_90 = pcVar9;
LAB_00116be4:
    memcpy(pcVar9,"rdf:parseType",(size_t)pbVar6);
  }
  pcVar9[(long)pbVar6] = '\0';
                    /* try { // try from 00116bfc to 00116c0f has its CatchHandler @ 0011732c */
  photos_editing_formats::image_io::XmlWriter::WriteAttributeNameAndValue<char[9]>
            ((XmlWriter *)this,(basic_string *)&local_a0,"Resource");
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90,local_a0 & 0xfffffffffffffffe);
  }
                    /* try { // try from 00116c28 to 00116c77 has its CatchHandler @ 00117634 */
  photos_editing_formats::image_io::XmlWriter::StartWritingElement((basic_string *)this);
  photos_editing_formats::image_io::XmlWriter::WriteAttributeNameAndValue
            ((basic_string *)this,(basic_string *)&local_178,SUB81(&local_1a8,0));
  photos_editing_formats::image_io::XmlWriter::WriteAttributeNameAndValue
            ((basic_string *)this,(basic_string *)&local_160,SUB81(&local_1c0,0));
  photos_editing_formats::image_io::XmlWriter::WriteAttributeNameAndValue<unsigned_int>
            ((XmlWriter *)this,(basic_string *)&local_148,(uint *)(param_1 + 0x54));
  photos_editing_formats::image_io::XmlWriter::FinishWritingElementsToDepth((ulong)this);
  pbVar4 = local_2f8;
  pbVar7 = local_2f0;
  if (local_2f8 != (byte *)0x0) {
    while (pbVar3 = pbVar7, pbVar4 != pbVar3) {
      pbVar7 = pbVar3 + -0x18;
      if ((*pbVar7 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8),*(ulong *)(pbVar3 + -0x18) & 0xfffffffffffffffe);
      }
    }
    local_2f0 = pbVar4;
    operator_delete(local_2f8,local_2e8 - (long)local_2f8);
  }
  pbVar4 = local_2e0;
  pbVar7 = local_2d8;
  if (local_2e0 != (byte *)0x0) {
    while (pbVar3 = pbVar7, pbVar4 != pbVar3) {
      pbVar7 = pbVar3 + -0x18;
      if ((*pbVar7 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8),*(ulong *)(pbVar3 + -0x18) & 0xfffffffffffffffe);
      }
    }
    local_2d8 = pbVar4;
    operator_delete(local_2e0,local_2d0 - (long)local_2e0);
  }
  if ((local_2c8 & 1) != 0) {
    operator_delete(local_2b8,local_2c8 & 0xfffffffffffffffe);
  }
  if ((local_2b0 & 1) != 0) {
    operator_delete(local_2a0,local_2b0 & 0xfffffffffffffffe);
  }
  if ((local_298 & 1) != 0) {
    operator_delete(local_288,local_298 & 0xfffffffffffffffe);
  }
  if ((local_280 & 1) != 0) {
    operator_delete(local_270,local_280 & 0xfffffffffffffffe);
  }
  if ((local_268 & 1) != 0) {
    operator_delete(local_258,local_268 & 0xfffffffffffffffe);
  }
  if ((local_250 & 1) != 0) {
    operator_delete(local_240,local_250 & 0xfffffffffffffffe);
  }
  if ((local_238 & 1) != 0) {
    operator_delete(local_228,local_238 & 0xfffffffffffffffe);
  }
  if ((local_220 & 1) != 0) {
    operator_delete(local_210,local_220 & 0xfffffffffffffffe);
  }
  if ((local_208 & 1) != 0) {
    operator_delete(local_1f8,local_208 & 0xfffffffffffffffe);
  }
  if ((local_1f0 & 1) != 0) {
    operator_delete(local_1e0,local_1f0 & 0xfffffffffffffffe);
  }
  if ((local_1d8 & 1) != 0) {
    operator_delete(local_1c8,local_1d8 & 0xfffffffffffffffe);
  }
  if ((local_1c0 & 1) != 0) {
    operator_delete(local_1b0,local_1c0 & 0xfffffffffffffffe);
  }
  if ((local_1a8 & 1) != 0) {
    operator_delete(local_198,local_1a8 & 0xfffffffffffffffe);
  }
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  if ((local_178 & 1) != 0) {
    operator_delete(local_168,local_178 & 0xfffffffffffffffe);
  }
  if ((local_160 & 1) != 0) {
    operator_delete(local_150,local_160 & 0xfffffffffffffffe);
  }
  if ((local_148 & 1) != 0) {
    operator_delete(local_138,local_148 & 0xfffffffffffffffe);
  }
  if ((local_130 & 1) != 0) {
    operator_delete(local_120,local_130 & 0xfffffffffffffffe);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108,local_118 & 0xfffffffffffffffe);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0,local_100 & 0xfffffffffffffffe);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8,local_e8 & 0xfffffffffffffffe);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0,local_d0 & 0xfffffffffffffffe);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8,local_b8 & 0xfffffffffffffffe);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_001178c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x1bcd8 processRequest @ 0011bcd8
// failed: Exception while decompiling 0011bcd8: Decompiler process died

