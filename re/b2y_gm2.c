// ===== 0x31330 updateInputMatadata @ 00130e04

/* OfflineB2Y::updateInputMatadata(std::__1::shared_ptr<MiMetadata>,
   std::__1::shared_ptr<MiMetadata>, int, int, int) */

void OfflineB2Y::updateInputMatadata
               (shared_ptr param_1,shared_ptr param_2,int param_3,int param_4,int param_5)

{
  long *plVar1;
  uint *puVar2;
  basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char **ppcVar17;
  char **ppcVar18;
  long *plVar19;
  uint uVar20;
  ulong *puVar21;
  char *local_1f0;
  long *plStack_1e8;
  char *local_1e0;
  long *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *plStack_118;
  char *pcStack_110;
  uint *puStack_108;
  char *local_100;
  long *local_f8;
  char *local_f0;
  long *local_e8;
  char *local_e0;
  long *plStack_d8;
  uint local_c4;
  undefined8 local_c0;
  long *plStack_b8;
  char *local_b0;
  uint *local_a8;
  char *local_a0;
  long *local_98;
  char *local_90;
  long *plStack_88;
  char *local_80;
  long *plStack_78;
  long local_70;
  
  ppcVar18 = (char **)(ulong)(uint)param_3;
  ppcVar17 = (char **)(ulong)param_2;
  uVar10 = (ulong)param_1;
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  plStack_78 = (long *)ppcVar17[1];
  local_80 = *ppcVar17;
  if (ppcVar17[1] != (char *)0x0) {
    __aarch64_ldadd8_relax(1,ppcVar17[1] + 8);
  }
  plStack_88 = (long *)ppcVar18[1];
  local_90 = *ppcVar18;
  if (ppcVar18[1] != (char *)0x0) {
    __aarch64_ldadd8_relax(1,ppcVar18[1] + 8);
  }
                    /* try { // try from 00130e84 to 00130e9f has its CatchHandler @ 00132260 */
  OfflineCamBase::updateInputMatadata(param_1,(shared_ptr)&local_80,(int)&local_90,param_4,param_5);
  plVar19 = plStack_88;
  if ((plStack_88 != (long *)0x0) &&
     (lVar11 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_88 + 1), lVar11 == 0)) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    std::__1::__shared_weak_count::__release_weak();
  }
  plVar19 = plStack_78;
  if ((plStack_78 != (long *)0x0) &&
     (lVar11 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_78 + 1), lVar11 == 0)) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    std::__1::__shared_weak_count::__release_weak();
  }
  puVar6 = PTR_gMiCamOfflineLogLevel_00176148;
  puVar5 = PTR_gMiCamLogLevel_00176138;
  puVar21 = (ulong *)(uVar10 + 0xc0);
  bVar3 = *(basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)puVar21;
  uVar12 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar12 = *(ulong *)(uVar10 + 200);
  }
  if (uVar12 == 0x15) {
    plVar19 = (long *)(uVar10 + 0xc1);
    plVar1 = plVar19;
    if (((byte)bVar3 & 1) != 0) {
      plVar1 = *(long **)(uVar10 + 0xd0);
    }
    if ((*plVar1 == 0x7761527265796142 && plVar1[1] == 0x74736e4976755932) &&
        *(long *)((long)plVar1 + 0xd) == 0x3065636e6174736e) {
      pcVar14 = *ppcVar18;
      plVar1 = (long *)ppcVar18[1];
      local_c0 = pcVar14;
      local_a0 = pcVar14;
      local_98 = plVar1;
      if (plVar1 == (long *)0x0) {
        plStack_b8 = (long *)0x0;
      }
      else {
        __aarch64_ldadd8_relax(1,plVar1 + 1);
        plStack_b8 = plVar1;
        __aarch64_ldadd8_relax(1,plVar1 + 1);
      }
      plStack_1e8 = (long *)0x0;
      local_1f0 = (char *)0x0;
      local_1d8 = (long *)0x0;
      local_1e0 = (char *)0x0;
                    /* try { // try from 00131e30 to 00131e43 has its CatchHandler @ 00132210 */
      MiMetadata::find(pcVar14);
      if (local_1e0 == (char *)0x0) {
        bVar8 = false;
      }
      else {
        bVar8 = *(byte *)local_1d8 - 5 < 4;
      }
      if ((plVar1 != (long *)0x0) &&
         (lVar11 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar1 + 1), lVar11 == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__1::__shared_weak_count::__release_weak();
      }
      plVar1 = local_98;
      if ((local_98 != (long *)0x0) &&
         (lVar11 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_98 + 1), lVar11 == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__1::__shared_weak_count::__release_weak();
      }
      if (bVar8) {
        pcVar14 = *ppcVar18;
        uVar12 = (ulong)local_c0 >> 0x20;
        local_c0 = (char *)CONCAT44((int)uVar12,0x3f800000);
        local_1f0 = (char *)((ulong)local_1f0 & 0xffffffff00000000);
        iVar9 = MiMetadata::getTagFromName("com.qti.sensorbps.gain",(uint *)&local_1f0);
        if ((iVar9 != 0) ||
           (iVar9 = MiMetadata::update((uint)pcVar14,(float *)((ulong)local_1f0 & 0xffffffff),
                                       (ulong)&local_c0), iVar9 != 0)) {
          if ((*(uint *)puVar5 < 7) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
            pcVar14 = (char *)midebug::Log::getFileName
                                        (
                                        "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                        );
            plVar1 = plVar19;
            if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
              plVar1 = *(long **)(uVar10 + 0xd0);
            }
            iVar9 = midebug::Log::catchLogEncryptLog
                              (2,pcVar14,0x2e7,"updateInputMatadata",'E',
                               "[%s] failed to update digitGain",plVar1);
            if (iVar9 == 0) {
              uVar15 = midebug::Log::miaGroupToString(2);
              uVar16 = midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                 );
              plVar1 = plVar19;
              if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
                plVar1 = *(long **)(uVar10 + 0xd0);
              }
              __android_log_print(6,"MiCamHAL","%s %s:%d %s()[%s] failed to update digitGain",uVar15
                                  ,uVar16,0x2e7,"updateInputMatadata",plVar1);
            }
          }
          if ((*(uint *)puVar6 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0))
          {
            pcVar14 = (char *)midebug::Log::getFileName
                                        (
                                        "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                        );
            if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
              plVar19 = *(long **)(uVar10 + 0xd0);
            }
            midebug::Log::logSystem
                      (2,"E",pcVar14,"updateInputMatadata",0x2e7,"[%s] failed to update digitGain",
                       plVar19);
          }
        }
      }
    }
  }
  plStack_b8 = (long *)0x0;
  local_c0 = (char *)0x0;
  local_a8 = (uint *)0x0;
  local_b0 = (char *)0x0;
  MiMetadata::find(*ppcVar18);
  lVar11 = (long)local_a8;
  if (local_b0 != (char *)0x0) {
    plStack_d8 = (long *)ppcVar18[1];
    local_e0 = *ppcVar18;
    local_c4 = 0xffffffff;
    if (ppcVar18[1] != (char *)0x0) {
      __aarch64_ldadd8_relax(1,ppcVar18[1] + 8);
    }
                    /* try { // try from 00130fdc to 00130fe3 has its CatchHandler @ 0013224c */
    uVar12 = FeatureUtils::isAllinOneBokehEnabled((shared_ptr)&local_e0,*(uint *)(uVar10 + 0x8c));
    plVar19 = plStack_d8;
    if ((uVar12 & 1) == 0) {
      if (plStack_d8 != (long *)0x0) {
        lVar13 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_d8 + 1);
        bVar8 = false;
        goto joined_r0x0013104c;
      }
      bVar8 = false;
    }
    else {
      pcVar14 = (char *)(uVar10 + 0xc1);
      if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
        pcVar14 = *(char **)(uVar10 + 0xd0);
      }
      iVar9 = strcmp(pcVar14,"BayerRaw2YuvInstanceForAISP");
      plVar19 = plStack_d8;
      bVar8 = iVar9 == 0;
      if (plStack_d8 != (long *)0x0) {
        lVar13 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_d8 + 1);
joined_r0x0013104c:
        if (lVar13 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          std::__1::__shared_weak_count::__release_weak();
        }
      }
    }
    pcVar14 = *ppcVar18;
    plVar19 = (long *)ppcVar18[1];
    local_120 = (long *)pcVar14;
    local_f0 = pcVar14;
    local_e8 = plVar19;
    if (plVar19 == (long *)0x0) {
      plStack_118 = (long *)0x0;
    }
    else {
      __aarch64_ldadd8_relax(1,plVar19 + 1);
      plStack_118 = plVar19;
      __aarch64_ldadd8_relax(1,plVar19 + 1);
    }
    plStack_1e8 = (long *)0x0;
    local_1f0 = (char *)0x0;
    local_1d8 = (long *)0x0;
    local_1e0 = (char *)0x0;
                    /* try { // try from 001310d4 to 001310e7 has its CatchHandler @ 00132238 */
    MiMetadata::find(pcVar14);
    if (local_1e0 == (char *)0x0) {
      bVar7 = false;
      if (plVar19 != (long *)0x0) goto LAB_00131114;
LAB_00131124:
      if (bVar7) goto LAB_0013116c;
LAB_0013114c:
      plVar19 = local_e8;
      if ((*(int *)(lVar11 + 0x464) == 0xc) && (*(int *)(uVar10 + 0x8c) == 0x900c))
      goto LAB_0013116c;
      if ((local_e8 != (long *)0x0) &&
         (lVar13 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_e8 + 1), lVar13 == 0)) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        std::__1::__shared_weak_count::__release_weak();
      }
    }
    else {
      bVar7 = *(byte *)local_1d8 - 5 < 4;
      if (plVar19 == (long *)0x0) goto LAB_00131124;
LAB_00131114:
      lVar13 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar19 + 1);
      if (lVar13 != 0) goto LAB_00131124;
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__1::__shared_weak_count::__release_weak();
      if (!bVar7) goto LAB_0013114c;
LAB_0013116c:
      plVar19 = local_e8;
      pcVar14 = (char *)(uVar10 + 0xc1);
      if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
        pcVar14 = *(char **)(uVar10 + 0xd0);
      }
      iVar9 = strcmp(pcVar14,"BayerRaw2YuvInstance0");
      if (iVar9 == 0) {
        bVar8 = true;
      }
      if ((plVar19 != (long *)0x0) &&
         (lVar13 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar19 + 1), lVar13 == 0)) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        std::__1::__shared_weak_count::__release_weak();
      }
      if (bVar8) {
        if ((*(byte *)(lVar11 + 3) & 1) == 0) {
          local_c4 = 1;
        }
        else {
          local_c4 = 0;
        }
      }
    }
    pcVar14 = *ppcVar18;
    plVar19 = (long *)ppcVar18[1];
    local_100 = pcVar14;
    local_f8 = plVar19;
    if (plVar19 == (long *)0x0) {
      plStack_118 = (long *)0x0;
      local_120 = (long *)pcVar14;
    }
    else {
      __aarch64_ldadd8_relax(1,plVar19 + 1);
      local_120 = (long *)pcVar14;
      plStack_118 = plVar19;
      __aarch64_ldadd8_relax(1,plVar19 + 1);
    }
    plStack_1e8 = (long *)0x0;
    local_1f0 = (char *)0x0;
    local_1d8 = (long *)0x0;
    local_1e0 = (char *)0x0;
                    /* try { // try from 0013125c to 0013126f has its CatchHandler @ 00132224 */
    MiMetadata::find(pcVar14);
    if (local_1e0 == (char *)0x0) {
      bVar8 = false;
      if (plVar19 != (long *)0x0) goto LAB_001312a4;
LAB_001312b4:
      if (bVar8) goto LAB_001312b8;
LAB_00131308:
      pcVar14 = (char *)(uVar10 + 0xc1);
      if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
        pcVar14 = *(char **)(uVar10 + 0xd0);
      }
      iVar9 = strcmp(pcVar14,"BayerRaw2YuvInstanceForRGB");
      if ((iVar9 == 0) ||
         (iVar9 = strcmp(pcVar14,"BayerRaw2YuvInstanceGainmapForRGB"), plVar19 = local_f8,
         iVar9 == 0)) {
        plVar19 = local_f8;
        if ((local_f8 != (long *)0x0) &&
           (lVar13 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_f8 + 1), lVar13 == 0)) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          std::__1::__shared_weak_count::__release_weak();
        }
LAB_001313c0:
        if ((*(byte *)(lVar11 + 3) & 1) == 0) {
          local_c4 = 1;
        }
        else {
          local_c4 = 0;
        }
      }
      else {
        iVar9 = strcmp(pcVar14,"BayerRaw2YuvInstanceGainmap");
        if ((plVar19 != (long *)0x0) &&
           (lVar13 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar19 + 1), lVar13 == 0)) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          std::__1::__shared_weak_count::__release_weak();
        }
        if (iVar9 == 0) goto LAB_001313c0;
      }
    }
    else {
      bVar8 = *(byte *)local_1d8 - 5 < 4;
      if (plVar19 == (long *)0x0) goto LAB_001312b4;
LAB_001312a4:
      lVar13 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar19 + 1);
      if (lVar13 != 0) goto LAB_001312b4;
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__1::__shared_weak_count::__release_weak();
      if (!bVar8) goto LAB_00131308;
LAB_001312b8:
      plVar19 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar13 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_f8 + 1), lVar13 == 0)) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        std::__1::__shared_weak_count::__release_weak();
      }
    }
    if ((*(uint *)puVar5 < 5) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
      pcVar14 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                  );
      lVar13 = uVar10 + 0xc1;
      if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
        lVar13 = *(long *)(uVar10 + 0xd0);
      }
      iVar9 = midebug::Log::catchLogEncryptLog
                        (2,pcVar14,0x311,"updateInputMatadata",'I',
                         "[%s] allinone need this b2y disableZoomCrop %d, is_need_cropupscale %d",
                         lVar13,(ulong)local_c4,(uint)*(byte *)(lVar11 + 3));
      if (iVar9 == 0) {
        uVar15 = midebug::Log::miaGroupToString(2);
        uVar16 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                           );
        lVar13 = uVar10 + 0xc1;
        if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
          lVar13 = *(long *)(uVar10 + 0xd0);
        }
        __android_log_print(4,"MiCamHAL",
                            "%s %s:%d %s()[%s] allinone need this b2y disableZoomCrop %d, is_need_cropupscale %d"
                            ,uVar15,uVar16,0x311,"updateInputMatadata",lVar13,local_c4,
                            *(undefined *)(lVar11 + 3));
      }
    }
    if (((*(uint *)puVar6 < 5) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
      pcVar14 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                  );
      lVar13 = uVar10 + 0xc1;
      if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
        lVar13 = *(long *)(uVar10 + 0xd0);
      }
      midebug::Log::logSystem
                (2,"I",pcVar14,"updateInputMatadata",0x311,
                 "[%s] allinone need this b2y disableZoomCrop %d, is_need_cropupscale %d",lVar13,
                 (ulong)local_c4,(uint)*(byte *)(lVar11 + 3));
    }
    if (-1 < (int)local_c4) {
      pcVar14 = *ppcVar18;
      local_1f0 = (char *)((ulong)local_1f0 & 0xffffffff00000000);
      iVar9 = MiMetadata::getTagFromName
                        ("org.quic.camera2.ref.cropsize.DisableZoomCrop",(uint *)&local_1f0);
      if ((iVar9 != 0) ||
         (iVar9 = MiMetadata::update((uint)pcVar14,(int *)((ulong)local_1f0 & 0xffffffff),
                                     (ulong)&local_c4), iVar9 != 0)) {
        if ((*(uint *)puVar5 < 6) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
          pcVar14 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                      );
          iVar9 = midebug::Log::catchLogEncryptLog
                            (2,pcVar14,0x317,"updateInputMatadata",'W',
                             "Cannot set DisableZoomCrop into metadata");
          if (iVar9 == 0) {
            uVar15 = midebug::Log::miaGroupToString(2);
            uVar16 = midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                               );
            __android_log_print(5,"MiCamHAL","%s %s:%d %s()Cannot set DisableZoomCrop into metadata"
                                ,uVar15,uVar16,0x317,"updateInputMatadata");
          }
        }
        if (((*(uint *)puVar6 < 6) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0))
           && (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
          pcVar14 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                      );
          midebug::Log::logSystem
                    (2,"W",pcVar14,"updateInputMatadata",0x317,
                     "Cannot set DisableZoomCrop into metadata");
        }
      }
    }
  }
  MiMetadata::find(*ppcVar18);
  plStack_b8 = plStack_1e8;
  local_c0 = local_1f0;
  local_a8 = (uint *)local_1d8;
  local_b0 = local_1e0;
  if (local_1e0 == (char *)0x0) {
    uVar20 = 0;
  }
  else {
    uVar20 = (uint)*(byte *)local_1d8;
  }
  if ((*(uint *)puVar5 < 5) && ((*PTR_gMiCamLogGroup_00176140 & 1) != 0)) {
    pcVar14 = (char *)midebug::Log::getFileName
                                (
                                "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                );
    lVar11 = uVar10 + 0xc1;
    if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
      lVar11 = *(long *)(uVar10 + 0xd0);
    }
    iVar9 = midebug::Log::catchLogEncryptLog
                      (1,pcVar14,0x31e,"updateInputMatadata",'I',"[%s] SrEnable:%d",lVar11,
                       (ulong)uVar20);
    if (iVar9 == 0) {
      uVar15 = midebug::Log::miaGroupToString(1);
      uVar16 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                         );
      lVar11 = uVar10 + 0xc1;
      if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
        lVar11 = *(long *)(uVar10 + 0xd0);
      }
      __android_log_print(4,"MiCamHAL","%s %s:%d %s()[%s] SrEnable:%d",uVar15,uVar16,0x31e,
                          "updateInputMatadata",lVar11,uVar20);
    }
  }
  if (((*(uint *)puVar6 < 5) && ((*PTR_gMiCamOfflineLogGroup_00176150 & 1) != 0)) &&
     (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
    pcVar14 = (char *)midebug::Log::getFileName
                                (
                                "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                );
    lVar11 = uVar10 + 0xc1;
    if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
      lVar11 = *(long *)(uVar10 + 0xd0);
    }
    midebug::Log::logSystem
              (1,"I",pcVar14,"updateInputMatadata",0x31e,"[%s] SrEnable:%d",lVar11,(ulong)uVar20);
  }
  if (((byte)*(basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)puVar21 &
      1) == 0) goto LAB_001317d8;
  lVar11 = *(long *)(uVar10 + 200);
  if (lVar11 == 0x25) {
    plVar19 = *(long **)(uVar10 + 0xd0);
    if ((((*plVar19 != 0x7761527265796142 || plVar19[1] != 0x74736e4976755932) ||
         plVar19[2] != 0x59726f4665636e61) || plVar19[3] != 0x6769537264487675) ||
        *(long *)((long)plVar19 + 0x1d) != 0x656d617246676953) goto LAB_001317d8;
LAB_001319dc:
    pcVar14 = *ppcVar18;
    local_120 = (long *)CONCAT44(local_120._4_4_,1);
    local_1f0 = (char *)((ulong)local_1f0 & 0xffffffff00000000);
    iVar9 = MiMetadata::getTagFromName
                      ("org.quic.camera2.ref.cropsize.DisableZoomCrop",(uint *)&local_1f0);
    if ((iVar9 != 0) ||
       (iVar9 = MiMetadata::update((uint)pcVar14,(int *)((ulong)local_1f0 & 0xffffffff),
                                   (ulong)&local_120), iVar9 != 0)) {
      if ((*(uint *)puVar5 < 7) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
        pcVar14 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                    );
        iVar9 = midebug::Log::catchLogEncryptLog
                          (2,pcVar14,0x326,"updateInputMatadata",'E',
                           "Not set DisableZoomCrop for yuvsr b2y");
        if (iVar9 == 0) {
          uVar15 = midebug::Log::miaGroupToString(2);
          uVar16 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                             );
          __android_log_print(6,"MiCamHAL","%s %s:%d %s()Not set DisableZoomCrop for yuvsr b2y",
                              uVar15,uVar16,0x326,"updateInputMatadata");
        }
      }
      if ((*(uint *)puVar6 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) {
        pcVar14 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                    );
        midebug::Log::logSystem
                  (2,"E",pcVar14,"updateInputMatadata",0x326,"Not set DisableZoomCrop for yuvsr b2y"
                  );
      }
    }
    lVar11 = *(long *)(uVar10 + 200);
    if ((*(byte *)(uVar10 + 0xc0) & 1) == 0) goto LAB_001317d8;
  }
  else if (lVar11 == 0x24) {
    plVar19 = *(long **)(uVar10 + 0xd0);
    if ((((*plVar19 != 0x7761527265796142 || plVar19[1] != 0x74736e4976755932) ||
         plVar19[2] != 0x59726f4665636e61) || plVar19[3] != 0x4667695372537675) ||
        *(int *)(plVar19 + 4) != 0x656d6172) goto LAB_001317d8;
    goto LAB_001319dc;
  }
  if ((lVar11 == 0x1d) &&
     (plVar19 = *(long **)(uVar10 + 0xd0),
     ((*plVar19 == 0x7761527265796142 && plVar19[1] == 0x74736e4976755932) &&
     plVar19[2] == 0x44726f4665636e61) && *(long *)((long)plVar19 + 0x15) == 0x416874706544726f)) {
    local_c4 = 0;
    plStack_1e8 = (long *)0x0;
    local_1f0 = (char *)0x0;
    local_1d8 = (long *)0x0;
    local_1e0 = (char *)0x0;
    MiMetadata::find(*ppcVar17);
    if (local_1e0 != (char *)0x0) {
      local_c4 = *(uint *)local_1d8;
    }
    MiMetadata::find(*ppcVar18);
    plStack_1e8 = plStack_118;
    local_1f0 = (char *)local_120;
    local_1d8 = (long *)puStack_108;
    local_1e0 = pcStack_110;
    if (pcStack_110 == (char *)0x0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *puStack_108;
      if ((uVar20 & 0xff) != 0) goto LAB_001317d8;
    }
    if ((char)local_c4 != '\0') {
      pcVar14 = *ppcVar18;
      local_120 = (long *)((ulong)local_120 & 0xffffffff00000000);
      iVar9 = MiMetadata::getTagFromName("xiaomi.ai.misd.motionCaptureType",(uint *)&local_120);
      if (iVar9 == 0) {
        MiMetadata::update((uint)pcVar14,(int *)((ulong)local_120 & 0xffffffff),(ulong)&local_c4);
      }
      if ((*(uint *)puVar5 < 5) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
        pcVar14 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                    );
        lVar11 = uVar10 + 0xc1;
        if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
          lVar11 = *(long *)(uVar10 + 0xd0);
        }
        iVar9 = midebug::Log::catchLogEncryptLog
                          (2,pcVar14,0x338,"updateInputMatadata",'I',
                           "%s change motionCaptureType from 0x%X to 0x%X",lVar11,(ulong)local_c4,
                           uVar20);
        if (iVar9 == 0) {
          uVar15 = midebug::Log::miaGroupToString(2);
          uVar16 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                             );
          lVar11 = uVar10 + 0xc1;
          if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
            lVar11 = *(long *)(uVar10 + 0xd0);
          }
          __android_log_print(4,"MiCamHAL",
                              "%s %s:%d %s()%s change motionCaptureType from 0x%X to 0x%X",uVar15,
                              uVar16,0x338,"updateInputMatadata",lVar11,local_c4,uVar20);
        }
      }
      if (((*(uint *)puVar6 < 5) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) &&
         (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
        pcVar14 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                    );
        lVar11 = uVar10 + 0xc1;
        if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
          lVar11 = *(long *)(uVar10 + 0xd0);
        }
        midebug::Log::logSystem
                  (2,"I",pcVar14,"updateInputMatadata",0x338,
                   "%s change motionCaptureType from 0x%X to 0x%X",lVar11,(ulong)local_c4,uVar20);
      }
    }
  }
LAB_001317d8:
  local_120 = (long *)0x0;
  plStack_118 = (long *)0x0;
  if (((*PTR_gAdapterClient_00176170 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_gAdapterClient_00176170), iVar9 != 0)) {
                    /* try { // try from 001321c0 to 001321cb has its CatchHandler @ 001321fc */
    adapter::AdapterClient::AdapterClient((AdapterClient *)PTR_gAdapterClient_00176178);
    __cxa_atexit(adapter::AdapterClient::~AdapterClient,PTR_gAdapterClient_00176178,&DAT_00174000);
    __cxa_guard_release(PTR_gAdapterClient_00176170);
  }
  adapter::AdapterClient::getFeatureSettingDecision((FeatureSettingType)PTR_gAdapterClient_00176178)
  ;
                    /* try { // try from 0013180c to 0013180f has its CatchHandler @ 00132258 */
  uVar12 = (**(code **)(*local_120 + 0x10))();
  if ((uVar12 & 1) != 0) {
    local_130 = 0;
    uStack_128 = 0;
    pcVar14 = *ppcVar18;
    puVar2 = (uint *)ppcVar18[1];
    local_1a0 = &uStack_198;
    plStack_1e8 = (long *)0x0;
    local_1f0 = (char *)0x0;
    local_1d8 = (long *)0x0;
    local_1e0 = (char *)0x0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    puStack_188 = &local_180;
    local_190 = 0;
    local_158 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    if (((puVar2 != (uint *)0x0) &&
        (__aarch64_ldadd8_relax(1,puVar2 + 2), plVar19 = local_1d8, local_1d8 != (long *)0x0)) &&
       (plVar1 = local_1d8 + 1, local_1e0 = pcVar14, local_1d8 = (long *)puVar2,
       lVar11 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar1), pcVar14 = local_1e0,
       puVar2 = (uint *)local_1d8, lVar11 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__1::__shared_weak_count::__release_weak();
      pcVar14 = local_1e0;
      puVar2 = (uint *)local_1d8;
    }
    local_1d8 = (long *)puVar2;
    local_1e0 = pcVar14;
    local_1d0 = CONCAT44(local_1d0._4_4_,*(undefined4 *)(uVar10 + 0x8c));
    if (&local_170 != puVar21) {
      bVar3 = *(basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)puVar21;
      if ((local_170 & 1) == 0) {
        if (((byte)bVar3 & 1) == 0) {
          uStack_168 = *(undefined8 *)(uVar10 + 200);
          local_170 = *puVar21;
          local_160 = *(undefined8 *)(uVar10 + 0xd0);
        }
        else {
          std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
          __assign_no_alias<true>
                    ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)
                     &local_170,*(char **)(uVar10 + 0xd0),*(ulong *)(uVar10 + 200));
        }
      }
      else {
        uVar12 = (ulong)((byte)bVar3 >> 1);
        pcVar14 = (char *)(uVar10 + 0xc1);
        if (((byte)bVar3 & 1) != 0) {
          uVar12 = *(ulong *)(uVar10 + 200);
          pcVar14 = *(char **)(uVar10 + 0xd0);
        }
                    /* try { // try from 00131c0c to 00131db7 has its CatchHandler @ 00132278 */
        std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
        __assign_no_alias<false>
                  ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)
                   &local_170,pcVar14,uVar12);
      }
    }
    uStack_1b8 = CONCAT44(4,(undefined4)uStack_1b8);
    local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(uVar10 + 0x74));
    if ((*(uint *)puVar5 < 5) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
      pcVar14 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                  );
      lVar11 = uVar10 + 0xc1;
      if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
        lVar11 = *(long *)(uVar10 + 0xd0);
      }
      iVar9 = midebug::Log::catchLogEncryptLog
                        (2,pcVar14,0x348,"updateInputMatadata",'I',
                         "[Update_Custom_Feature][%s] customFeatureParam operationMode 0x%x cameraMode 0x%x callStage %d"
                         ,lVar11,(ulong)*(uint *)(uVar10 + 0x8c),(undefined4)local_158,
                         uStack_1b8._4_4_);
      if (iVar9 == 0) {
        uVar15 = midebug::Log::miaGroupToString(2);
        uVar16 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                           );
        lVar11 = uVar10 + 0xc1;
        if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
          lVar11 = *(long *)(uVar10 + 0xd0);
        }
        __android_log_print(4,"MiCamHAL",
                            "%s %s:%d %s()[Update_Custom_Feature][%s] customFeatureParam operationMode 0x%x cameraMode 0x%x callStage %d"
                            ,uVar15,uVar16,0x348,"updateInputMatadata",lVar11,
                            *(undefined4 *)(uVar10 + 0x8c),(undefined4)local_158,uStack_1b8._4_4_);
      }
    }
    if (((*(uint *)puVar6 < 5) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
      pcVar14 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/OfflineB2Y.cpp"
                                  );
      lVar11 = uVar10 + 0xc1;
      if ((*(byte *)(uVar10 + 0xc0) & 1) != 0) {
        lVar11 = *(long *)(uVar10 + 0xd0);
      }
      midebug::Log::logSystem
                (2,"I",pcVar14,"updateInputMatadata",0x348,
                 "[Update_Custom_Feature][%s] customFeatureParam operationMode 0x%x cameraMode 0x%x callStage %d"
                 ,lVar11,(ulong)*(uint *)(uVar10 + 0x8c),(undefined4)local_158,uStack_1b8._4_4_);
    }
    (**(code **)(*local_120 + 0x20))(local_120,&local_1f0,1);
    miFs::MiCustomFeatureParam::~MiCustomFeatureParam((MiCustomFeatureParam *)&local_1f0);
  }
  plVar19 = plStack_118;
  if ((plStack_118 != (long *)0x0) &&
     (lVar11 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_118 + 1), lVar11 == 0)) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    std::__1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x30d5c getCfaPattern @ 00130afc

/* OfflineB2Y::getCfaPattern(std::__1::shared_ptr<MiMetadata>&) */

undefined8 __thiscall OfflineB2Y::getCfaPattern(OfflineB2Y *this,shared_ptr *param_1)

{
  long *plVar1;
  OfflineB2Y *pOVar2;
  long *plVar3;
  OfflineB2Y *pOVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *this_00;
  ulong uVar8;
  
  this_00 = (basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)
            (this + 0xc0);
  uVar8 = *(ulong *)(this + 200);
  pOVar2 = *(OfflineB2Y **)(this + 0xd0);
  if (((byte)*this_00 & 1) == 0) {
    pOVar2 = this + 0xc1;
    uVar8 = (ulong)((byte)*this_00 >> 1);
  }
  plVar1 = (long *)(pOVar2 + uVar8);
  pOVar4 = pOVar2;
  uVar7 = uVar8;
  if (0x17 < (long)uVar8) {
    while (plVar3 = (long *)memchr(pOVar4,0x52,uVar7 - 0x17), plVar3 != (long *)0x0) {
      if ((*plVar3 == 0x4976755932776152 && plVar3[1] == 0x4665636e6174736e) &&
          plVar3[2] == 0x4d6874706544726f) {
        if ((plVar3 != plVar1) && ((long)plVar3 - (long)pOVar2 != -1)) goto LAB_00130db0;
        break;
      }
      uVar7 = (long)plVar1 - (long)(OfflineB2Y *)((long)plVar3 + 1);
      pOVar4 = (OfflineB2Y *)((long)plVar3 + 1);
      if ((long)uVar7 < 0x18) break;
    }
    pOVar4 = pOVar2;
    uVar7 = uVar8;
    if (0x17 < (long)uVar8) {
      while (plVar3 = (long *)memchr(pOVar4,0x52,uVar7 - 0x17), plVar3 != (long *)0x0) {
        if ((*plVar3 == 0x4976755932776152 && plVar3[1] == 0x4665636e6174736e) &&
            plVar3[2] == 0x416874706544726f) {
          if ((plVar3 != plVar1) && ((long)plVar3 - (long)pOVar2 != -1)) goto LAB_00130db0;
          break;
        }
        uVar7 = (long)plVar1 - (long)(OfflineB2Y *)((long)plVar3 + 1);
        pOVar4 = (OfflineB2Y *)((long)plVar3 + 1);
        if ((long)uVar7 < 0x18) break;
      }
    }
  }
  pOVar4 = pOVar2;
  uVar7 = uVar8;
  if (0x14 < (long)uVar8) {
    while (plVar3 = (long *)memchr(pOVar4,0x42,uVar7 - 0x14), plVar3 != (long *)0x0) {
      if ((*plVar3 == 0x7761527265796142 && plVar3[1] == 0x74736e4976755932) &&
          *(long *)((long)plVar3 + 0xd) == 0x3065636e6174736e) {
        if ((plVar3 != plVar1) && ((long)plVar3 - (long)pOVar2 != -1)) goto LAB_00130db0;
        break;
      }
      uVar7 = (long)plVar1 - (long)(OfflineB2Y *)((long)plVar3 + 1);
      pOVar4 = (OfflineB2Y *)((long)plVar3 + 1);
      if ((long)uVar7 < 0x15) break;
    }
    pOVar4 = pOVar2;
    if (0x14 < (long)uVar8) {
      while (plVar3 = (long *)memchr(pOVar4,0x42,uVar8 - 0x14), plVar3 != (long *)0x0) {
        if ((*plVar3 == 0x7761527265796142 && plVar3[1] == 0x74736e4976755932) &&
            *(long *)((long)plVar3 + 0xd) == 0x3165636e6174736e) {
          if ((plVar3 != plVar1) && ((long)plVar3 - (long)pOVar2 != -1)) goto LAB_00130db0;
          break;
        }
        uVar8 = (long)plVar1 - (long)(OfflineB2Y *)((long)plVar3 + 1);
        pOVar4 = (OfflineB2Y *)((long)plVar3 + 1);
        if ((long)uVar8 < 0x15) break;
      }
    }
  }
  lVar5 = std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
          find_abi_ne200000_(this_00,"BayerRaw2YuvInstanceForSigFrame",0);
  if ((((lVar5 == -1) &&
       (lVar5 = std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
                find_abi_ne200000_(this_00,"BayerRaw2YuvInstanceGainmapAnchor",0), lVar5 == -1)) &&
      (lVar5 = std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
               find_abi_ne200000_(this_00,"BayerRaw2YuvInstanceForYuvSrSigFrame",0), lVar5 == -1))
     && (lVar5 = std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>
                 ::find_abi_ne200000_(this_00,"BayerRaw2YuvInstanceForYuvHdrSigFrame",0),
        lVar5 == -1)) {
    return 0;
  }
LAB_00130db0:
                    /* WARNING: Could not recover jumptable at 0x00130ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*(long *)this + 0x1a8))(this,param_1);
  return uVar6;
}


// ===== 0x3ddd4 updateMiviExifInfo @ 0013dd10

/* OfflineRaw2Yuv::updateMiviExifInfo(adapter::PostProcProcessParams*,
   std::__1::shared_ptr<MiMetadata>, std::__1::shared_ptr<MiMetadata>, MiExifMgr::MiExifIntf&) */

void __thiscall
OfflineRaw2Yuv::updateMiviExifInfo
          (OfflineRaw2Yuv *this,PostProcProcessParams *param_1,shared_ptr param_2,shared_ptr param_3
          ,MiExifIntf *param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  long lVar4;
  ulong extraout_x1;
  char **ppcVar5;
  void *__dest;
  ulong uVar6;
  char *pcVar7;
  undefined8 local_120;
  size_t local_118;
  void *local_110;
  basic_string local_108;
  undefined uStack_107;
  undefined uStack_106;
  undefined4 uStack_105;
  char cStack_101;
  char cStack_100;
  undefined uStack_ff;
  undefined uStack_fe;
  undefined4 uStack_fd;
  char cStack_f9;
  char cStack_f8;
  undefined uStack_f7;
  undefined6 uStack_f6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  long local_70;
  
  ppcVar5 = (char **)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pcVar7 = *ppcVar5;
  plVar1 = (long *)ppcVar5[1];
  if (plVar1 != (long *)0x0) {
    __aarch64_ldadd8_relax(1,plVar1 + 1,ppcVar5,param_3);
  }
  uStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
                    /* try { // try from 0013dd6c to 0013dd7f has its CatchHandler @ 0013e0b8 */
  MiMetadata::find(pcVar7);
  lVar4 = local_d8;
  if ((local_e0 != 0) && (local_d8 != 0)) {
    local_80 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    snprintf((char *)&local_d0,extraout_x1,(char *)ppcVar5);
    local_108 = (basic_string)0x1c;
    uStack_107 = s_MiviTuningMode_0010fd01[0];
    uStack_106 = s_MiviTuningMode_0010fd01[1];
    uStack_105._0_1_ = s_MiviTuningMode_0010fd01[2];
    uStack_105._1_1_ = s_MiviTuningMode_0010fd01[3];
    uStack_105._2_1_ = s_MiviTuningMode_0010fd01[4];
    uStack_105._3_1_ = s_MiviTuningMode_0010fd01[5];
    cStack_101 = (char)s_MiviTuningMode_0010fd01._6_2_;
    cStack_100 = SUB21(s_MiviTuningMode_0010fd01._6_2_,1);
    uStack_ff = s_MiviTuningMode_0010fd01[8];
    uStack_fe = s_MiviTuningMode_0010fd01[9];
    uStack_fd._0_1_ = s_MiviTuningMode_0010fd01[10];
    uStack_fd._1_1_ = s_MiviTuningMode_0010fd01[0xb];
    uStack_fd._2_1_ = s_MiviTuningMode_0010fd01[0xc];
    uStack_fd._3_1_ = s_MiviTuningMode_0010fd01[0xd];
    cStack_f9 = '\0';
    __n = strlen((char *)&local_d0);
    if (0xfffffffffffffff7 < __n) {
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 0013e060 to 0013e067 has its CatchHandler @ 0013e098 */
                    /* WARNING: Subroutine does not return */
        std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
        __throw_length_error_abi_ne200000_();
      }
      goto LAB_0013e0dc;
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_120 | 1);
      local_120 = CONCAT71(local_120._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_0013de54;
    }
    else {
      uVar6 = 0x1a;
      if ((__n | 7) != 0x17) {
        uVar6 = (__n | 7) + 1;
      }
                    /* try { // try from 0013de3c to 0013de43 has its CatchHandler @ 0013e098 */
      __dest = operator_new(uVar6);
      local_120 = uVar6 | 1;
      local_118 = __n;
      local_110 = __dest;
LAB_0013de54:
      memcpy(__dest,&local_d0,__n);
    }
    *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0013de68 to 0013de77 has its CatchHandler @ 0013e078 */
    MiExifMgr::MiExifIntf::
    update<std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>
              ((basic_string *)param_4,&local_108);
    if ((local_120 & 1) != 0) {
      operator_delete(local_110,local_120 & 0xfffffffffffffffe);
    }
    if (((byte)local_108 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_f6,CONCAT11(uStack_f7,cStack_f8)),
                      CONCAT17(cStack_101,CONCAT61(_uStack_107,local_108)) & 0xfffffffffffffffe);
    }
    uVar6 = 0;
    local_120 = local_120 & 0xffffffffffffff00;
    do {
      pcVar7 = (char *)(&DAT_00175308)[uVar6];
      iVar3 = strcmp(pcVar7,"AISPRGBPostProcessForHDR");
      if (((((((iVar3 == 0) || (iVar3 = strcmp(pcVar7,"AISPRGBPostProcessForSE"), iVar3 == 0)) ||
             (iVar3 = strcmp(pcVar7,"AISPRGBPostProcessForSN"), iVar3 == 0)) ||
            ((iVar3 = strcmp(pcVar7,"AISPRGBPostProcessForAINRDaylight"), iVar3 == 0 ||
             (iVar3 = strcmp(pcVar7,"AISPRGBPostProcessForAINRNight"), iVar3 == 0)))) ||
           ((iVar3 = strcmp(pcVar7,"AISPRGBPostProcessForSR"), iVar3 == 0 ||
            ((iVar3 = strcmp(pcVar7,"AISPRGBPostProcessForSNSC"), iVar3 == 0 ||
             (iVar3 = strcmp(pcVar7,"AISPIdealRAWPostProcessForELL"), iVar3 == 0)))))) ||
          (iVar3 = strcmp(pcVar7,"AISPRGBPostProcessForSRHDR"), iVar3 == 0)) &&
         (uVar6 == *(uint *)(lVar4 + 0x30))) {
        local_120 = CONCAT71(local_120._1_7_,1);
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0xc1);
    uStack_f7 = 0;
    local_108 = (basic_string)0x20;
    _uStack_ff = (undefined6)s_Algo_PostProcess_0010f7fd._8_8_;
    cStack_f9 = SUB81(s_Algo_PostProcess_0010f7fd._8_8_,6);
    cStack_f8 = SUB81(s_Algo_PostProcess_0010f7fd._8_8_,7);
    _uStack_107 = (undefined6)s_Algo_PostProcess_0010f7fd._0_8_;
    cStack_101 = SUB81(s_Algo_PostProcess_0010f7fd._0_8_,6);
    cStack_100 = SUB81(s_Algo_PostProcess_0010f7fd._0_8_,7);
                    /* try { // try from 0013dfc8 to 0013dfd3 has its CatchHandler @ 0013e068 */
    MiExifMgr::MiExifIntf::update<bool>((basic_string *)param_4,(bool *)&local_108);
    if (((byte)local_108 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_f6,CONCAT11(uStack_f7,cStack_f8)),
                      CONCAT17(cStack_101,CONCAT61(_uStack_107,local_108)) & 0xfffffffffffffffe);
    }
  }
  if ((plVar1 != (long *)0x0) &&
     (lVar4 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar1 + 1), lVar4 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_0013e0dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


