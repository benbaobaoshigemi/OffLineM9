// ===== 0x9e78 processRequest @ 00109e78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GainMapPostProcPlugin::processRequest(ProcessRequestInfo*) */

undefined8 __thiscall
GainMapPostProcPlugin::processRequest(GainMapPostProcPlugin *this,ProcessRequestInfo *param_1)

{
  GainMapPostProcPlugin *pGVar1;
  long *plVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  long lVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined2 *puVar13;
  char *pcVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong uVar15;
  ulong uVar16;
  undefined (*pauVar17) [16];
  ulong uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  long lVar45;
  long lVar46;
  int iVar47;
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  int iVar53;
  undefined auVar55 [16];
  undefined auVar57 [16];
  undefined8 in_stack_fffffffffffffc70;
  undefined4 uVar61;
  undefined8 uVar58;
  uint *puVar59;
  ulong *puVar60;
  undefined8 in_stack_fffffffffffffc78;
  undefined4 uVar63;
  undefined8 uVar62;
  undefined8 *local_340;
  float local_324;
  float local_320;
  undefined uStack_31c;
  undefined2 uStack_31b;
  undefined uStack_319;
  undefined8 uStack_318;
  void *local_310;
  undefined8 *puStack_308;
  char *local_300;
  long *plStack_2f8;
  ulong local_2f0;
  uchar *local_2e8;
  void *local_2e0;
  void *local_2d8;
  long local_2d0;
  char *local_2c8;
  long *plStack_2c0;
  timeval local_2b8;
  timeval local_2a8;
  timeval local_298;
  timeval local_288;
  uint local_278;
  uint local_274;
  undefined8 local_270;
  undefined8 uStack_268;
  long local_260;
  uint *puStack_258;
  char *local_250;
  long *plStack_248;
  char *local_240;
  long *plStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  byte local_1a0;
  undefined2 uStack_19f;
  undefined uStack_19d;
  undefined4 uStack_19c;
  undefined uStack_198;
  undefined uStack_197;
  undefined6 uStack_196;
  void *local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  uchar *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong local_108;
  undefined4 local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  void *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_98;
  undefined auVar48 [12];
  undefined auVar54 [12];
  undefined auVar56 [16];
  
  uVar63 = (undefined4)((ulong)in_stack_fffffffffffffc78 >> 0x20);
  uVar61 = (undefined4)((ulong)in_stack_fffffffffffffc70 >> 0x20);
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_228 = 0;
  local_230 = 0;
  local_100 = CONCAT31((int3)s_gainMapPostProc_00103387._0_7_,0x1e);
  uStack_fc = SUB74(s_gainMapPostProc_00103387._0_7_,3);
  uStack_f8 = (uint)CONCAT71(s_gainMapPostProc_00103387._8_7_,s_gainMapPostProc_00103387[7]);
  uStack_f4 = SUB74(s_gainMapPostProc_00103387._8_7_,3);
  local_f0 = (void *)((ulong)local_f0 & 0xffffffffffffff00);
                    /* try { // try from 00109f0c to 00109f17 has its CatchHandler @ 0010ba6c */
  MiExifMgr::MiExifIntf::MiExifIntf
            ((MiExifIntf *)&local_230,(basic_string *)&local_100,*(long *)(param_1 + 0x58));
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0,CONCAT44(uStack_fc,local_100) & 0xfffffffffffffffe);
  }
  lVar23 = *(long *)param_1;
  lVar20 = *(long *)(param_1 + 0x18);
  uStack_158 = 0;
  local_160 = 0;
  local_148 = (uchar *)0x0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_100 = 0;
  uStack_fc = 0;
  local_e8 = (undefined8 *)0x0;
  local_f0 = (void *)0x0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
                    /* try { // try from 00109f64 to 0010a16f has its CatchHandler @ 0010bae0 */
  (**(code **)(*(long *)this + 0x90))(this,*(undefined8 *)(lVar23 + 0x28),&local_100);
  (**(code **)(*(long *)this + 0x90))(this,*(undefined8 *)(lVar20 + 0x28),&local_160);
  if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 5) &&
     (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
    pcVar9 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                               );
    pGVar1 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
    }
    uVar11 = CONCAT44(uVar63,uStack_f4);
    uVar10 = CONCAT44(uVar61,uStack_f8);
    iVar7 = midebug::Log::catchLogEncryptLog
                      (2,pcVar9,0x1e2,"processRequest",'I',
                       "[%s] in:{%dx%d(%dx%d),fmt=%d},out:{%dx%d,fmt=%d,sz=%d}",pGVar1,
                       (ulong)uStack_fc,uVar10,uVar11,local_f0._0_4_,local_100,local_160._4_4_,
                       (undefined4)uStack_158,(int)local_160,(undefined4)local_108);
    uVar61 = (undefined4)((ulong)uVar10 >> 0x20);
    uVar63 = (undefined4)((ulong)uVar11 >> 0x20);
    if (iVar7 == 0) {
      uVar10 = midebug::Log::miaGroupToString(2);
      uVar11 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                         );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      uVar62 = CONCAT44(uVar63,uStack_f8);
      uVar58 = CONCAT44(uVar61,uStack_fc);
      __android_log_print(4,"MiAlgoEngine",
                          "%s %s:%d %s()[%s] in:{%dx%d(%dx%d),fmt=%d},out:{%dx%d,fmt=%d,sz=%d}",
                          uVar10,uVar11,0x1e2,"processRequest",pGVar1,uVar58,uVar62,uStack_f4,
                          local_f0._0_4_,local_100,local_160._4_4_,(undefined4)uStack_158,
                          (int)local_160,(undefined4)local_108);
      uVar63 = (undefined4)((ulong)uVar62 >> 0x20);
      uVar61 = (undefined4)((ulong)uVar58 >> 0x20);
    }
  }
  if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 5) &&
      (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
     (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
    pcVar9 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                               );
    pGVar1 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
    }
    uVar11 = CONCAT44(uVar63,uStack_f4);
    uVar10 = CONCAT44(uVar61,uStack_f8);
    midebug::Log::logSystem
              (2,"I",pcVar9,"processRequest",0x1e2,
               "[%s] in:{%dx%d(%dx%d),fmt=%d},out:{%dx%d,fmt=%d,sz=%d}",pGVar1,(ulong)uStack_fc,
               uVar10,uVar11,local_f0._0_4_,local_100,local_160._4_4_,(undefined4)uStack_158,
               (int)local_160,(undefined4)local_108);
    uVar63 = (undefined4)((ulong)uVar11 >> 0x20);
    uVar61 = (undefined4)((ulong)uVar10 >> 0x20);
  }
  if (local_100 != 0x20203859) {
    if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 7) &&
       (((byte)*PTR_gMiCamLogGroup_00110b08 >> 6 & 1) != 0)) {
      pcVar9 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                 );
      iVar7 = midebug::Log::catchLogEncryptLog
                        (0x40,pcVar9,0x1e3,"processRequest",'E',
                         " Fatal error occurred and abort() was triggered, check it!");
      if (iVar7 == 0) {
        uVar10 = midebug::Log::miaGroupToString(0x40);
        uVar11 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                           );
        __android_log_print(6,"MiAlgoEngine",
                            "%s %s:%d %s() Fatal error occurred and abort() was triggered, check it!"
                            ,uVar10,uVar11,0x1e3,"processRequest");
      }
    }
    if ((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 7) &&
       (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 6 & 1) != 0)) {
                    /* try { // try from 0010b6e0 to 0010b9af has its CatchHandler @ 0010bae0 */
      pcVar9 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                 );
      midebug::Log::logSystem
                (0x40,"E",pcVar9,"processRequest",0x1e3,
                 " Fatal error occurred and abort() was triggered, check it!");
    }
    midebug::Log::skyNetTrigger(" Fatal error occurred and abort() was triggered, check it!");
    midebug::MiDebugInterface::getInstance(0);
    midebug::MiDebugInterface::stopOfflineLogger();
    midebug::MiDebugInterface::getInstance(1);
    midebug::MiDebugInterface::stopOfflineLogger();
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((int)local_160 != 0x21) {
    if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 7) &&
       (((byte)*PTR_gMiCamLogGroup_00110b08 >> 6 & 1) != 0)) {
      pcVar9 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                 );
      iVar7 = midebug::Log::catchLogEncryptLog
                        (0x40,pcVar9,0x1e4,"processRequest",'E',
                         " Fatal error occurred and abort() was triggered, check it!");
      if (iVar7 == 0) {
        uVar10 = midebug::Log::miaGroupToString(0x40);
        uVar11 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                           );
        __android_log_print(6,"MiAlgoEngine",
                            "%s %s:%d %s() Fatal error occurred and abort() was triggered, check it!"
                            ,uVar10,uVar11,0x1e4,"processRequest");
      }
    }
    if ((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 7) &&
       (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 6 & 1) != 0)) {
      pcVar9 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                 );
      midebug::Log::logSystem
                (0x40,"E",pcVar9,"processRequest",0x1e4,
                 " Fatal error occurred and abort() was triggered, check it!");
    }
    midebug::Log::skyNetTrigger(" Fatal error occurred and abort() was triggered, check it!");
    midebug::MiDebugInterface::getInstance(0);
    midebug::MiDebugInterface::stopOfflineLogger();
    midebug::MiDebugInterface::getInstance(1);
    midebug::MiDebugInterface::stopOfflineLogger();
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar23 = *(long *)(lVar23 + 0x28);
  pcVar9 = *(char **)(lVar23 + 0x40);
  plVar2 = *(long **)(lVar23 + 0x48);
  local_240 = pcVar9;
  plStack_238 = plVar2;
  if (plVar2 != (long *)0x0) {
    __aarch64_ldadd8_relax(1,plVar2 + 1);
  }
  lVar20 = *(long *)(lVar20 + 0x28);
  plStack_248 = *(long **)(lVar20 + 0x48);
  local_250 = *(char **)(lVar20 + 0x40);
  if (*(long *)(lVar20 + 0x48) != 0) {
    __aarch64_ldadd8_relax(1,*(long *)(lVar20 + 0x48) + 8);
  }
  puStack_258 = (uint *)0x0;
  local_260 = 0;
  uStack_268 = 0;
  local_270 = 0;
                    /* try { // try from 0010a1d8 to 0010a1eb has its CatchHandler @ 0010ba64 */
  MiMetadata::find((uint)pcVar9);
  pcVar12 = (char *)local_e8;
  uVar22 = uStack_f4;
  if (local_260 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *puStack_258;
  }
  local_288.tv_sec = 0;
  local_288.tv_usec = 0;
  local_274 = uStack_fc;
  local_278 = uStack_f8;
  local_298.tv_sec = 0;
  local_298.tv_usec = 0;
  local_2a8.tv_usec = 0;
  local_2b8.tv_usec = 0;
  local_2a8.tv_sec = 0;
  local_2b8.tv_sec = 0;
  gettimeofday(&local_288,(__timezone_ptr_t)0x0);
  if (uVar19 == 0) {
    local_340 = (undefined8 *)0x0;
    uVar21 = 0;
  }
  else {
    local_2c8 = pcVar9;
    plStack_2c0 = plVar2;
    if (plVar2 != (long *)0x0) {
      __aarch64_ldadd8_relax(1,plVar2 + 1);
    }
                    /* try { // try from 0010a254 to 0010a25f has its CatchHandler @ 0010b9e0 */
    iVar7 = isMainImageRotated((shared_ptr)this,(ImageParams *)&local_2c8);
    uVar21 = uStack_fc;
    uVar25 = uStack_f8;
    if ((plVar2 != (long *)0x0) &&
       (lVar20 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar2 + 1), uVar21 = uStack_fc,
       uVar25 = uStack_f8, lVar20 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__1::__shared_weak_count::__release_weak();
      uVar21 = uStack_fc;
      uVar25 = uStack_f8;
    }
    uStack_fc = uVar21;
    uStack_f8 = uVar25;
    if (iVar7 == 0) {
      local_340 = (undefined8 *)0x0;
      uVar21 = uVar19;
    }
    else {
                    /* try { // try from 0010a284 to 0010a287 has its CatchHandler @ 0010b9b8 */
      pcVar12 = (char *)operator_new__((ulong)(uVar25 * uVar21));
      puVar59 = &local_278;
      gainmapRotation((GainMapPostProcPlugin *)pcVar12,(uchar *)local_e8,uVar21,uVar25,uStack_f4,
                      (uchar *)pcVar12,uVar19,&local_274,puVar59);
      uVar61 = (undefined4)((ulong)puVar59 >> 0x20);
      uVar22 = local_274;
      uVar21 = 0;
      local_340 = (undefined8 *)pcVar12;
    }
  }
  gettimeofday(&local_298,(__timezone_ptr_t)0x0);
  local_2e0 = (void *)0x0;
  local_2d8 = (void *)0x0;
  local_2d0 = 0;
                    /* try { // try from 0010a310 to 0010a323 has its CatchHandler @ 0010ba5c */
  calcHistogram((uchar *)this,(uint)pcVar12,local_274,local_278);
  if (((DAT_00114080 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00114080), iVar7 != 0)) {
    DAT_00114078 = *(int *)(this + 0xa0);
    __cxa_guard_release(&DAT_00114080);
  }
  if ((long)local_2d8 - (long)local_2e0 == 0) {
    uVar27 = 0;
    uVar25 = 0;
  }
  else {
    uVar16 = (long)local_2d8 - (long)local_2e0 >> 2;
    uVar24 = uVar16;
    if (uVar16 < 2) {
      uVar24 = 1;
    }
    if (uVar16 < 8) {
      uVar25 = 0;
      uVar27 = 0;
      uVar15 = 0;
    }
    else {
      iVar26 = 0;
      iVar28 = 0;
      iVar29 = 0;
      iVar8 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      iVar7 = DAT_00114078 >> 0x1f;
      uVar15 = uVar24 & 0xfffffffffffffff8;
      pauVar17 = (undefined (*) [16])((long)local_2e0 + 0x10);
      uVar18 = uVar15;
      lVar20 = _DAT_00102d70;
      lVar23 = _UNK_00102d78;
      lVar45 = _DAT_00102cc0;
      lVar46 = _UNK_00102cc8;
      do {
        auVar49._0_8_ = lVar45 + 4;
        auVar49._8_8_ = lVar46 + 4;
        auVar51._0_8_ = lVar20 + 4;
        auVar51._8_8_ = lVar23 + 4;
        uVar18 = uVar18 - 8;
        auVar3._8_4_ = DAT_00114078;
        auVar3._0_8_ = (long)DAT_00114078;
        auVar3._12_4_ = iVar7;
        auVar55._8_8_ = lVar46;
        auVar55._0_8_ = lVar45;
        auVar55 = NEON_cmgt(auVar3,auVar55,8);
        auVar4._8_4_ = DAT_00114078;
        auVar4._0_8_ = (long)DAT_00114078;
        auVar4._12_4_ = iVar7;
        auVar52._8_8_ = lVar23;
        auVar52._0_8_ = lVar20;
        auVar57 = NEON_cmgt(auVar4,auVar52,8);
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + 8;
        lVar45 = lVar45 + 8;
        lVar46 = lVar46 + 8;
        auVar50._8_4_ = DAT_00114078;
        auVar50._0_8_ = (long)DAT_00114078;
        auVar50._12_4_ = iVar7;
        auVar52 = NEON_cmgt(auVar50,auVar51,8);
        auVar5._8_4_ = DAT_00114078;
        auVar5._0_8_ = (long)DAT_00114078;
        auVar5._12_4_ = iVar7;
        auVar50 = NEON_cmgt(auVar5,auVar49,8);
        auVar3 = pauVar17[-1];
        auVar4 = *pauVar17;
        pauVar17 = pauVar17 + 2;
        iVar53 = CONCAT13(auVar3[3] & ~auVar55[3],
                          CONCAT12(auVar3[2] & ~auVar55[2],
                                   CONCAT11(auVar3[1] & ~auVar55[1],auVar3[0] & ~auVar55[0])));
        auVar54._0_8_ =
             CONCAT17(auVar3[7] & ~auVar55[0xb],
                      CONCAT16(auVar3[6] & ~auVar55[10],
                               CONCAT15(auVar3[5] & ~auVar55[9],
                                        CONCAT14(auVar3[4] & ~auVar55[8],iVar53))));
        auVar54[8] = auVar3[8] & ~auVar57[0];
        auVar54[9] = auVar3[9] & ~auVar57[1];
        auVar54[10] = auVar3[10] & ~auVar57[2];
        auVar54[0xb] = auVar3[0xb] & ~auVar57[3];
        auVar56[0xc] = auVar3[0xc] & ~auVar57[8];
        auVar56._0_12_ = auVar54;
        auVar56[0xd] = auVar3[0xd] & ~auVar57[9];
        auVar56[0xe] = auVar3[0xe] & ~auVar57[10];
        auVar56[0xf] = auVar3[0xf] & ~auVar57[0xb];
        iVar26 = auVar3._0_4_ + iVar26;
        iVar28 = auVar3._4_4_ + iVar28;
        iVar29 = auVar3._8_4_ + iVar29;
        iVar8 = auVar3._12_4_ + iVar8;
        iVar38 = auVar4._0_4_ + iVar38;
        iVar39 = auVar4._4_4_ + iVar39;
        iVar40 = auVar4._8_4_ + iVar40;
        iVar41 = auVar4._12_4_ + iVar41;
        iVar47 = CONCAT13(auVar4[3] & ~auVar50[3],
                          CONCAT12(auVar4[2] & ~auVar50[2],
                                   CONCAT11(auVar4[1] & ~auVar50[1],auVar4[0] & ~auVar50[0])));
        auVar48._0_8_ =
             CONCAT17(auVar4[7] & ~auVar50[0xb],
                      CONCAT16(auVar4[6] & ~auVar50[10],
                               CONCAT15(auVar4[5] & ~auVar50[9],
                                        CONCAT14(auVar4[4] & ~auVar50[8],iVar47))));
        auVar48[8] = auVar4[8] & ~auVar52[0];
        auVar48[9] = auVar4[9] & ~auVar52[1];
        auVar48[10] = auVar4[10] & ~auVar52[2];
        auVar48[0xb] = auVar4[0xb] & ~auVar52[3];
        auVar57[0xc] = auVar4[0xc] & ~auVar52[8];
        auVar57._0_12_ = auVar48;
        auVar57[0xd] = auVar4[0xd] & ~auVar52[9];
        auVar57[0xe] = auVar4[0xe] & ~auVar52[10];
        auVar57[0xf] = auVar4[0xf] & ~auVar52[0xb];
        iVar30 = iVar53 + iVar30;
        iVar31 = (int)((ulong)auVar54._0_8_ >> 0x20) + iVar31;
        iVar32 = auVar54._8_4_ + iVar32;
        iVar33 = auVar56._12_4_ + iVar33;
        iVar34 = iVar47 + iVar34;
        iVar35 = (int)((ulong)auVar48._0_8_ >> 0x20) + iVar35;
        iVar36 = auVar48._8_4_ + iVar36;
        iVar37 = auVar57._12_4_ + iVar37;
      } while (uVar18 != 0);
      uVar25 = iVar38 + iVar26 + iVar39 + iVar28 + iVar40 + iVar29 + iVar41 + iVar8;
      uVar27 = iVar34 + iVar30 + iVar35 + iVar31 + iVar36 + iVar32 + iVar37 + iVar33;
      if (uVar16 == uVar15) goto code_r0x0010a450;
    }
    do {
      iVar26 = *(int *)((long)local_2e0 + uVar15 * 4);
      uVar16 = uVar15 + 1;
      iVar7 = 0;
      if ((long)DAT_00114078 <= (long)uVar15) {
        iVar7 = iVar26;
      }
      uVar25 = iVar26 + uVar25;
      uVar27 = iVar7 + uVar27;
      uVar15 = uVar16;
    } while (uVar24 != uVar16);
  }
code_r0x0010a450:
  if (((DAT_00114090 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00114090), iVar7 != 0)) {
    DAT_00114088 = *(int *)(this + 0xa4);
    __cxa_guard_release(&DAT_00114090);
  }
  if (((DAT_001140a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001140a0), iVar7 != 0)) {
    DAT_00114098 = *(int *)(this + 0xa8);
    __cxa_guard_release(&DAT_001140a0);
  }
  if (((DAT_001140b0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001140b0), iVar7 != 0)) {
    DAT_001140a8 = *(int *)(this + 0xac);
    __cxa_guard_release(&DAT_001140b0);
  }
  if (((DAT_001140c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001140c0), iVar7 != 0)) {
    DAT_001140b8 = *(int *)(this + 0xb0);
    __cxa_guard_release(&DAT_001140c0);
  }
  if (uVar25 == 0) {
    fVar44 = 0.0;
  }
  else {
    fVar44 = ((float)(ulong)uVar27 / (float)(ulong)uVar25) * 100.0;
  }
  iVar7 = DAT_00114098;
  if ((fVar44 <= (float)DAT_00114088) || (iVar7 = DAT_001140b8, (float)DAT_001140a8 <= fVar44)) {
    fVar42 = (float)iVar7;
  }
  else {
    fVar42 = ((fVar44 - (float)DAT_00114088) / (float)(DAT_001140a8 - DAT_00114088)) *
             (float)(DAT_001140b8 - DAT_00114098) + (float)DAT_00114098;
  }
  uStack_19d = 0;
  local_1a0 = 4;
  uStack_19f = 0x6c68;
                    /* try { // try from 0010a54c to 0010a553 has its CatchHandler @ 0010ba3c */
  std::__1::to_string((float)(int)(fVar44 * 100.0) / 100.0);
                    /* try { // try from 0010a554 to 0010a563 has its CatchHandler @ 0010ba1c */
  MiExifMgr::MiExifIntf::
  update<std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>
            ((basic_string *)&local_230,(basic_string *)&local_1a0);
  if ((local_1c0 & 1) != 0) {
    operator_delete(local_1b0,local_1c0 & 0xfffffffffffffffe);
  }
  fVar42 = fVar42 / 100.0;
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190,
                    CONCAT44(uStack_19c,CONCAT13(uStack_19d,CONCAT21(uStack_19f,local_1a0))) &
                    0xfffffffffffffffe);
  }
  uStack_19d = 0;
  local_1a0 = 4;
  uStack_19f = 0x6764;
  local_1c0._0_4_ = (float)(int)(fVar42 * 100.0) / 100.0;
                    /* try { // try from 0010a5c4 to 0010a5d3 has its CatchHandler @ 0010ba0c */
  MiExifMgr::MiExifIntf::update<float>((basic_string *)&local_230,(float *)&local_1a0);
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190,
                    CONCAT44(uStack_19c,CONCAT13(uStack_19d,CONCAT21(uStack_19f,local_1a0))) &
                    0xfffffffffffffffe);
  }
  if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 5) &&
     (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
                    /* try { // try from 0010a610 to 0010a753 has its CatchHandler @ 0010ba94 */
    pcVar9 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                               );
    pGVar1 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
    }
    iVar7 = midebug::Log::catchLogEncryptLog
                      (2,pcVar9,0x224,"processRequest",'I',
                       "[%s] Hist: hlNum=%d(%.2f%%),extraGain=%.2f",SUB84((double)fVar44,0),
                       (double)fVar42,pGVar1,(ulong)uVar27);
    if (iVar7 == 0) {
      uVar10 = midebug::Log::miaGroupToString(2);
      uVar11 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                         );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      __android_log_print(SUB84((double)fVar44,0),(double)fVar42,4,"MiAlgoEngine",
                          "%s %s:%d %s()[%s] Hist: hlNum=%d(%.2f%%),extraGain=%.2f",uVar10,uVar11,
                          0x224,"processRequest",pGVar1,CONCAT44(uVar61,uVar27));
    }
  }
  if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 5) &&
      (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
     (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
    pcVar9 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                               );
    pGVar1 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
    }
    midebug::Log::logSystem
              (2,"I",pcVar9,"processRequest",0x224,"[%s] Hist: hlNum=%d(%.2f%%),extraGain=%.2f",
               SUB84((double)fVar44,0),(double)fVar42,pGVar1,(ulong)uVar27);
  }
  gettimeofday(&local_2a8,(__timezone_ptr_t)0x0);
  plVar2 = plStack_238;
  uVar24 = (local_108 & 0xffffffff) - 8;
  local_2e8 = local_148;
  plStack_2f8 = plStack_238;
  local_300 = local_240;
  local_2f0 = uVar24;
  if (plStack_238 != (long *)0x0) {
    __aarch64_ldadd8_relax(1,plStack_238 + 1);
  }
                    /* try { // try from 0010a794 to 0010a7b7 has its CatchHandler @ 0010b9fc */
  puVar60 = &local_2f0;
  compressGainMapToJpeg
            (this,(shared_ptr)&local_300,(uchar *)pcVar12,local_274,local_278,uVar22,uVar21,
             &local_2e8,puVar60);
  uVar61 = (undefined4)((ulong)puVar60 >> 0x20);
  if ((plVar2 != (long *)0x0) &&
     (lVar20 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar2 + 1), lVar20 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__1::__shared_weak_count::__release_weak();
  }
  gettimeofday(&local_2b8,(__timezone_ptr_t)0x0);
  if ((local_2e8 == local_148) && (local_2f0 <= uVar24)) {
                    /* try { // try from 0010a80c to 0010a98b has its CatchHandler @ 0010ba90 */
    puVar13 = (undefined2 *)mialgo2::PluginUtils::getJpegBlob((MiImageBuffer *)&local_160);
    *puVar13 = 0xff;
    uVar22 = *(uint *)PTR_gMiCamLogLevel_00110b00;
    *(int *)(puVar13 + 2) = (int)local_2f0;
    if ((uVar22 < 5) && (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
      pcVar9 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                 );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      pcVar12 = (char *)0x23c;
      uVar10 = CONCAT44(uVar61,(undefined4)local_108);
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar9,0x23c,"processRequest",'I',"[%s] output gainmap jpeg size=%d/%d",
                         pGVar1,local_2f0,uVar10);
      uVar61 = (undefined4)((ulong)uVar10 >> 0x20);
      if (iVar7 == 0) {
        uVar10 = midebug::Log::miaGroupToString(2);
        uVar11 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                           );
        pGVar1 = this + 0x81;
        if (((byte)this[0x80] & 1) != 0) {
          pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
        }
        pcVar12 = "%s %s:%d %s()[%s] output gainmap jpeg size=%d/%d";
        uVar58 = CONCAT44(uVar63,(undefined4)local_108);
        uVar24 = local_2f0;
        __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()[%s] output gainmap jpeg size=%d/%d",
                            uVar10,uVar11,0x23c,"processRequest",pGVar1,local_2f0,uVar58);
        uVar63 = (undefined4)((ulong)uVar58 >> 0x20);
        uVar61 = (undefined4)(uVar24 >> 0x20);
      }
    }
    if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 5) &&
        (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                  );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      uVar10 = CONCAT44(uVar61,(undefined4)local_108);
      midebug::Log::logSystem
                (2,"I",pcVar12,"processRequest",0x23c,"[%s] output gainmap jpeg size=%d/%d",pGVar1,
                 local_2f0,uVar10);
      uVar61 = (undefined4)((ulong)uVar10 >> 0x20);
    }
  }
  else {
    if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 7) &&
       (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
                    /* try { // try from 0010a9b4 to 0010aaff has its CatchHandler @ 0010b9f0 */
      pcVar9 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                 );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      pcVar12 = (char *)0x235;
      uVar10 = CONCAT44(uVar63,uStack_fc);
      uVar16 = local_2f0;
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar9,0x235,"processRequest",'E',
                         "[%s] not enough jpeg size: maxOut=%ld,needed=%ld,in=%dx%d",pGVar1,uVar24,
                         local_2f0,uVar10,uStack_f8);
      uVar61 = (undefined4)(uVar16 >> 0x20);
      uVar63 = (undefined4)((ulong)uVar10 >> 0x20);
      if (iVar7 == 0) {
        uVar10 = midebug::Log::miaGroupToString(2);
        uVar11 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                           );
        pGVar1 = this + 0x81;
        if (((byte)this[0x80] & 1) != 0) {
          pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
        }
        pcVar12 = "%s %s:%d %s()[%s] not enough jpeg size: maxOut=%ld,needed=%ld,in=%dx%d";
        uVar16 = uVar24;
        uVar18 = local_2f0;
        __android_log_print(6,"MiAlgoEngine",
                            "%s %s:%d %s()[%s] not enough jpeg size: maxOut=%ld,needed=%ld,in=%dx%d"
                            ,uVar10,uVar11,0x235,"processRequest",pGVar1,uVar24,local_2f0,uStack_fc,
                            uStack_f8);
        uVar61 = (undefined4)(uVar16 >> 0x20);
        uVar63 = (undefined4)(uVar18 >> 0x20);
      }
    }
    if ((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 7) &&
       (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                  );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      uVar10 = CONCAT44(uVar63,uStack_fc);
      uVar16 = local_2f0;
      midebug::Log::logSystem
                (2,"E",pcVar12,"processRequest",0x235,
                 "[%s] not enough jpeg size: maxOut=%ld,needed=%ld,in=%dx%d",pGVar1,uVar24,local_2f0
                 ,uVar10,uStack_f8);
      uVar61 = (undefined4)(uVar16 >> 0x20);
      uVar63 = (undefined4)((ulong)uVar10 >> 0x20);
    }
    free(local_2e8);
  }
  if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 5) &&
     (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
                    /* try { // try from 0010ab30 to 0010addb has its CatchHandler @ 0010baa0 */
    pcVar9 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                               );
    auVar3 = SEXT816(local_298.tv_usec - local_288.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    auVar4 = SEXT816(local_2a8.tv_usec - local_298.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    auVar50 = SEXT816(local_2b8.tv_usec - local_2a8.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    auVar5 = SEXT816(local_2b8.tv_usec - local_288.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    iVar7 = ((int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f)) +
            ((int)local_298.tv_sec - (int)local_288.tv_sec) * 1000;
    iVar26 = ((int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f)) +
             ((int)local_2a8.tv_sec - (int)local_298.tv_sec) * 1000;
    iVar28 = ((int)(auVar50._8_8_ >> 7) - (auVar50._12_4_ >> 0x1f)) +
             ((int)local_2b8.tv_sec - (int)local_2a8.tv_sec) * 1000;
    iVar29 = ((int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f)) +
             ((int)local_2b8.tv_sec - (int)local_288.tv_sec) * 1000;
    pGVar1 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
    }
    pcVar12 = (char *)0x245;
    uVar11 = CONCAT44(uVar63,iVar7);
    uVar10 = CONCAT44(uVar61,uVar21);
    iVar8 = midebug::Log::catchLogEncryptLog
                      (2,pcVar9,0x245,"processRequest",'I',
                       "[%s] gainmap rotation(%d->%d) %dms, hist %dms, compress %dms, total %dms",
                       pGVar1,(ulong)uVar19,uVar10,uVar11,iVar26,iVar28,iVar29);
    uVar61 = (undefined4)((ulong)uVar10 >> 0x20);
    uVar63 = (undefined4)((ulong)uVar11 >> 0x20);
    if (iVar8 == 0) {
      uVar10 = midebug::Log::miaGroupToString(2);
      uVar11 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                         );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      pcVar12 = 
      "%s %s:%d %s()[%s] gainmap rotation(%d->%d) %dms, hist %dms, compress %dms, total %dms";
      uVar62 = CONCAT44(uVar63,uVar21);
      uVar58 = CONCAT44(uVar61,uVar19);
      __android_log_print(4,"MiAlgoEngine",
                          "%s %s:%d %s()[%s] gainmap rotation(%d->%d) %dms, hist %dms, compress %dms, total %dms"
                          ,uVar10,uVar11,0x245,"processRequest",pGVar1,uVar58,uVar62,iVar7,iVar26,
                          iVar28,iVar29);
      uVar63 = (undefined4)((ulong)uVar62 >> 0x20);
      uVar61 = (undefined4)((ulong)uVar58 >> 0x20);
    }
  }
  if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 5) &&
      (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
     (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
    pcVar12 = (char *)midebug::Log::getFileName
                                (
                                "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                );
    auVar3 = SEXT816(local_298.tv_usec - local_288.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    auVar4 = SEXT816(local_2a8.tv_usec - local_298.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    auVar50 = SEXT816(local_2b8.tv_usec - local_2a8.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    auVar5 = SEXT816(local_2b8.tv_usec - local_288.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    pGVar1 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
    }
    midebug::Log::logSystem
              (2,"I",pcVar12,"processRequest",0x245,
               "[%s] gainmap rotation(%d->%d) %dms, hist %dms, compress %dms, total %dms",pGVar1,
               (ulong)uVar19,CONCAT44(uVar61,uVar21),
               CONCAT44(uVar63,((int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f)) +
                               ((int)local_298.tv_sec - (int)local_288.tv_sec) * 1000),
               ((int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f)) +
               ((int)local_2a8.tv_sec - (int)local_298.tv_sec) * 1000,
               ((int)(auVar50._8_8_ >> 7) - (auVar50._12_4_ >> 0x1f)) +
               ((int)local_2b8.tv_sec - (int)local_2a8.tv_sec) * 1000,
               ((int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f)) +
               ((int)local_2b8.tv_sec - (int)local_288.tv_sec) * 1000);
  }
  pcVar9 = local_250;
  uStack_198 = 0;
  uStack_197 = 0;
  uStack_196 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  uStack_19d = 0;
  uStack_19c = 0;
  local_188 = (undefined8 *)0x0;
  local_190 = (void *)0x0;
                    /* try { // try from 0010ade8 to 0010adfb has its CatchHandler @ 0010ba98 */
  MiMetadata::find(local_250);
  fVar44 = DAT_00114074;
  if (local_190 == (void *)0x0) {
    uVar24 = extraout_x1;
    if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 7) &&
       (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
                    /* try { // try from 0010ae7c to 0010af83 has its CatchHandler @ 0010ba98 */
      pcVar9 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                 );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      pcVar12 = (char *)0x270;
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar9,0x270,"processRequest",'E',"[%s] get ultrahdr metadata failed",
                         pGVar1);
      uVar24 = extraout_x1_00;
      if (iVar7 == 0) {
        uVar10 = midebug::Log::miaGroupToString(2);
        uVar11 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                           );
        pGVar1 = this + 0x81;
        if (((byte)this[0x80] & 1) != 0) {
          pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
        }
        pcVar12 = "%s %s:%d %s()[%s] get ultrahdr metadata failed";
        __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()[%s] get ultrahdr metadata failed",uVar10
                            ,uVar11,0x270,"processRequest",pGVar1);
        uVar24 = extraout_x1_01;
      }
    }
    if ((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 7) &&
       (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                  );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      midebug::Log::logSystem
                (2,"E",pcVar12,"processRequest",0x270,"[%s] get ultrahdr metadata failed",pGVar1);
      uVar24 = extraout_x1_02;
    }
  }
  else {
    uStack_1b8 = local_188[1];
    local_1c0 = *local_188;
    uStack_1a8 = local_188[3];
    local_1b0 = (void *)local_188[2];
                    /* try { // try from 0010ae2c to 0010ae3b has its CatchHandler @ 0010b9dc */
    MiMetadata::find(local_240);
    uStack_198 = (undefined)uStack_318;
    uStack_197 = (undefined)((ulong)uStack_318 >> 8);
    uStack_196 = (undefined6)((ulong)uStack_318 >> 0x10);
    local_1a0 = SUB41(local_320,0);
    uStack_19f = (undefined2)((uint)local_320 >> 8);
    uStack_19d = (undefined)((uint)local_320 >> 0x18);
    uStack_19c = (undefined4)
                 (CONCAT17(uStack_319,CONCAT25(uStack_31b,CONCAT14(uStack_31c,local_320))) >> 0x20);
    local_188 = puStack_308;
    local_190 = local_310;
    if (local_310 == (void *)0x0) {
      if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 4) &&
         (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
                    /* try { // try from 0010afac to 0010b0c7 has its CatchHandler @ 0010ba8c */
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                    );
        pGVar1 = this + 0x81;
        if (((byte)this[0x80] & 1) != 0) {
          pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
        }
        iVar7 = midebug::Log::catchLogEncryptLog
                          (2,pcVar12,0x254,"processRequest",'D',
                           "[%s] can\'t find com.xiaomi.ultraHDR.residualGain!",pGVar1);
        if (iVar7 == 0) {
          uVar10 = midebug::Log::miaGroupToString(2);
          uVar11 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                             );
          pGVar1 = this + 0x81;
          if (((byte)this[0x80] & 1) != 0) {
            pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
          }
          __android_log_print(3,"MiAlgoEngine",
                              "%s %s:%d %s()[%s] can\'t find com.xiaomi.ultraHDR.residualGain!",
                              uVar10,uVar11,0x254,"processRequest",pGVar1);
        }
      }
      fVar43 = 1.0;
      if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 4) &&
          (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
         (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                    );
        pGVar1 = this + 0x81;
        if (((byte)this[0x80] & 1) != 0) {
          pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
        }
        midebug::Log::logSystem
                  (2,"D",pcVar12,"processRequest",0x254,
                   "[%s] can\'t find com.xiaomi.ultraHDR.residualGain!",pGVar1);
      }
    }
    else {
      fVar43 = *(float *)puStack_308;
    }
    fVar42 = fVar42 * fVar44 * fVar43;
    fVar44 = 1.0;
    if (1.0 <= fVar42) {
      fVar44 = fVar42;
    }
    local_320 = 7.404675e+28;
    uStack_31c = 0x73;
    uStack_31b = 0x74;
    local_324 = (float)(int)(fVar44 * 100.0) / 100.0;
                    /* try { // try from 0010b110 to 0010b11f has its CatchHandler @ 0010b9c4 */
    pcVar12 = (char *)&local_324;
    MiExifMgr::MiExifIntf::update<float>((basic_string *)&local_230,&local_320);
    if (((uint)local_320 & 1) != 0) {
      operator_delete(local_310,
                      CONCAT17(uStack_319,CONCAT25(uStack_31b,CONCAT14(uStack_31c,local_320))) &
                      0xfffffffffffffffe);
    }
    if ((this[0x9d] == (GainMapPostProcPlugin)0x1) && (0 < (int)*(uint *)(this + 0xb4))) {
      fVar44 = (float)(ulong)*(uint *)(this + 0xb4) / 100.0;
    }
    uStack_1a8 = CONCAT44(fVar44,(float)uStack_1a8);
    local_1c0._4_4_ = fVar44;
    if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 5) &&
       (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
                    /* try { // try from 0010b18c to 0010b35b has its CatchHandler @ 0010ba8c */
      pcVar14 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                  );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      pcVar12 = (char *)0x267;
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar14,0x267,"processRequest",'I',
                         "[%s] Update PostProc metadata{ver=%s,boost=%f/%f,gamma=%f,offset=%f/%f,hdrCap=%f/%f}"
                         ,SUB84((double)(float)uStack_1b8,0),(double)local_1c0._4_4_,
                         (double)uStack_1b8._4_4_,(double)(float)local_1b0,(double)local_1b0._4_4_,
                         (double)(float)uStack_1a8,(double)uStack_1a8._4_4_,pGVar1,&local_1c0);
      if (iVar7 == 0) {
        uVar10 = midebug::Log::miaGroupToString(2);
        uVar11 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                           );
        pGVar1 = this + 0x81;
        if (((byte)this[0x80] & 1) != 0) {
          pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
        }
        pcVar12 = 
        "%s %s:%d %s()[%s] Update PostProc metadata{ver=%s,boost=%f/%f,gamma=%f,offset=%f/%f,hdrCap=%f/%f}"
        ;
        __android_log_print(SUB84((double)(float)uStack_1b8,0),(double)local_1c0._4_4_,
                            (double)uStack_1b8._4_4_,(double)(float)local_1b0,
                            (double)local_1b0._4_4_,(double)(float)uStack_1a8,
                            (double)uStack_1a8._4_4_,4,"MiAlgoEngine",
                            "%s %s:%d %s()[%s] Update PostProc metadata{ver=%s,boost=%f/%f,gamma=%f,offset=%f/%f,hdrCap=%f/%f}"
                            ,uVar10,uVar11,0x267,"processRequest",pGVar1,&local_1c0);
      }
    }
    if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 5) &&
        (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                  );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      midebug::Log::logSystem
                (2,"I",pcVar12,"processRequest",0x267,
                 "[%s] Update PostProc metadata{ver=%s,boost=%f/%f,gamma=%f,offset=%f/%f,hdrCap=%f/%f}"
                 ,SUB84((double)(float)uStack_1b8,0),(double)local_1c0._4_4_,
                 (double)uStack_1b8._4_4_,(double)(float)local_1b0,(double)local_1b0._4_4_,
                 (double)(float)uStack_1a8,(double)uStack_1a8._4_4_,pGVar1,&local_1c0);
    }
    local_320 = 0.0;
                    /* try { // try from 0010b360 to 0010b4b7 has its CatchHandler @ 0010ba9c */
    iVar7 = MiMetadata::getTagFromName("com.xiaomi.ultraHDR.metadata",(uint *)&local_320);
    uVar24 = extraout_x1_03;
    if (iVar7 == 0) {
      pcVar12 = (char *)&local_1c0;
      iVar7 = MiMetadata::update((uint)pcVar9,(uchar *)(ulong)(uint)local_320,(ulong)pcVar12);
      uVar24 = extraout_x1_04;
      if (iVar7 == 0) goto LAB_0010b4b8;
    }
    if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 7) &&
       (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
      pcVar9 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                 );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      pcVar12 = (char *)0x26d;
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar9,0x26d,"processRequest",'E',
                         "[%s] can\'t update ultrahdr metadata tag!",pGVar1);
      uVar24 = extraout_x1_05;
      if (iVar7 == 0) {
        uVar10 = midebug::Log::miaGroupToString(2);
        uVar11 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                           );
        pGVar1 = this + 0x81;
        if (((byte)this[0x80] & 1) != 0) {
          pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
        }
        pcVar12 = "%s %s:%d %s()[%s] can\'t update ultrahdr metadata tag!";
        __android_log_print(6,"MiAlgoEngine",
                            "%s %s:%d %s()[%s] can\'t update ultrahdr metadata tag!",uVar10,uVar11,
                            0x26d,"processRequest",pGVar1);
        uVar24 = extraout_x1_06;
      }
    }
    if ((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 7) &&
       (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                  );
      pGVar1 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar1 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      midebug::Log::logSystem
                (2,"E",pcVar12,"processRequest",0x26d,"[%s] can\'t update ultrahdr metadata tag!",
                 pGVar1);
      uVar24 = extraout_x1_07;
    }
  }
LAB_0010b4b8:
  if (((byte)this[0x9c] & 1) != 0) {
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_196 = 0;
    local_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    local_188 = (undefined8 *)0x0;
    local_190 = (void *)0x0;
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    snprintf((char *)&local_1a0,uVar24,pcVar12,"GainmapPostProc_in_%dx%d",(ulong)uStack_fc,
             (ulong)uStack_f8);
                    /* try { // try from 0010b4e0 to 0010b50f has its CatchHandler @ 0010b9f8 */
    pcVar9 = (char *)0x0;
    mialgo2::PluginUtils::dumpToFile
              ((char *)&local_1a0,(MiImageBuffer *)&local_100,(basic_string *)0x0);
    snprintf((char *)&local_1a0,extraout_x1_08,pcVar9,"GainmapPostProc_out");
    mialgo2::PluginUtils::dumpToFile
              ((char *)&local_1a0,(MiImageBuffer *)&local_160,(basic_string *)0x0);
  }
  uStack_197 = 0;
  local_1a0 = 0x10;
  uStack_19f = 0x6e69;
  uStack_19d = 0x73;
  uStack_19c = 0x636e6174;
  uStack_198 = 0x65;
                    /* try { // try from 0010b530 to 0010b53f has its CatchHandler @ 0010b9f4 */
  MiExifMgr::MiExifIntf::
  update<std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>
            ((basic_string *)&local_230,(basic_string *)&local_1a0);
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190,
                    CONCAT44(uStack_19c,CONCAT13(uStack_19d,CONCAT21(uStack_19f,local_1a0))) &
                    0xfffffffffffffffe);
  }
                    /* try { // try from 0010b56c to 0010b56f has its CatchHandler @ 0010b9c0 */
  if ((*(code **)(this + 0x68) != (code *)0x0) &&
     (local_1c0._0_4_ =
           (float)(**(code **)(this + 0x68))
                            (*(undefined8 *)(this + 8),*(undefined8 *)(param_1 + 0x58)),
     (float)local_1c0 != 0.0)) {
    uStack_197 = 0;
    local_1a0 = 0x10;
    uStack_19f = 0x7270;
    uStack_19d = 0x6f;
    uStack_19c = 0x6d695463;
    uStack_198 = 0x65;
                    /* try { // try from 0010b598 to 0010b5a7 has its CatchHandler @ 0010b9b4 */
    MiExifMgr::MiExifIntf::update<int>((basic_string *)&local_230,(int *)&local_1a0);
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190,
                      CONCAT44(uStack_19c,CONCAT13(uStack_19d,CONCAT21(uStack_19f,local_1a0))) &
                      0xfffffffffffffffe);
    }
  }
                    /* try { // try from 0010b5c0 to 0010b5c7 has its CatchHandler @ 0010baa0 */
  MiExifMgr::MiExifIntf::commit();
  if (local_2e0 != (void *)0x0) {
    local_2d8 = local_2e0;
    operator_delete(local_2e0,local_2d0 - (long)local_2e0);
  }
  if (local_340 != (undefined8 *)0x0) {
    operator_delete__(local_340);
  }
  plVar2 = plStack_248;
  if ((plStack_248 != (long *)0x0) &&
     (lVar20 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_248 + 1), lVar20 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_238;
  if ((plStack_238 != (long *)0x0) &&
     (lVar20 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_238 + 1), lVar20 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__1::__shared_weak_count::__release_weak();
  }
  MiExifMgr::MiExifIntf::~MiExifIntf((MiExifIntf *)&local_230);
  if (*(long *)(lVar6 + 0x28) == local_98) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x9cc8 calcHistogram @ 00109cc8

/* GainMapPostProcPlugin::calcHistogram(unsigned char*, unsigned int, unsigned int, unsigned int) */

FILE * GainMapPostProcPlugin::calcHistogram(uchar *param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  FILE *pFVar5;
  FILE *__stream;
  uint in_w4;
  void **in_x8;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_2;
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  *in_x8 = (void *)0x0;
  in_x8[1] = (void *)0x0;
  in_x8[2] = (void *)0x0;
                    /* try { // try from 00109d18 to 00109d1f has its CatchHandler @ 00109e50 */
  pvVar4 = operator_new(0x400);
  *in_x8 = pvVar4;
  in_x8[2] = (void *)((long)pvVar4 + 0x400);
  pFVar5 = (FILE *)memset(pvVar4,0,0x400);
  in_x8[1] = (void *)((long)pvVar4 + 0x400);
  if (param_4 != 0) {
    uVar3 = 0;
    do {
      if (param_3 != 0) {
        uVar7 = 0;
        do {
          pbVar1 = (byte *)(uVar8 + uVar7);
          uVar7 = uVar7 + 1;
          *(int *)((long)*in_x8 + (ulong)*pbVar1 * 4) =
               *(int *)((long)*in_x8 + (ulong)*pbVar1 * 4) + 1;
        } while (param_3 != uVar7);
      }
      uVar3 = uVar3 + 1;
      uVar8 = uVar8 + in_w4;
    } while (uVar3 != param_4);
  }
  if ((param_1[0x9e] & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == lVar6) {
      return pFVar5;
    }
  }
  else {
    __stream = fopen("/data/vendor/camera/gainmapPostProcHist.txt","w");
    pvVar4 = *in_x8;
    pFVar5 = __stream;
    if (in_x8[1] != pvVar4) {
      uVar8 = 0;
      do {
        uVar3 = fprintf(__stream,"%d : %d\n",uVar8 & 0xffffffff,
                        (ulong)*(uint *)((long)pvVar4 + uVar8 * 4));
        pFVar5 = (FILE *)(ulong)uVar3;
        pvVar4 = *in_x8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulong)((long)in_x8[1] - (long)pvVar4 >> 2));
    }
    if (*(long *)(lVar2 + 0x28) == lVar6) {
      uVar3 = fclose(__stream);
      return (FILE *)(ulong)uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pFVar5);
}


// ===== 0x9118 compressGainMapToJpeg @ 00109118

/* GainMapPostProcPlugin::compressGainMapToJpeg(std::__1::shared_ptr<MiMetadata>, unsigned char*,
   unsigned int, unsigned int, unsigned int, int, unsigned char**, unsigned long*) */

undefined8 __thiscall
GainMapPostProcPlugin::compressGainMapToJpeg
          (GainMapPostProcPlugin *this,shared_ptr param_1,uchar *param_2,uint param_3,uint param_4,
          uint param_5,int param_6,uchar **param_7,ulong *param_8)

{
  int *piVar1;
  int *piVar2;
  GainMapPostProcPlugin *pGVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char **ppcVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong __n;
  uint uVar24;
  ulong uVar25;
  long *plVar26;
  uint *local_378;
  char *local_370;
  char *pcStack_368;
  uint *local_358;
  uint *local_350;
  uint *local_348;
  char *local_340;
  char *pcStack_338;
  void *local_330;
  long lStack_328;
  long local_320;
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
  uint **local_280;
  undefined8 uStack_278;
  long local_270;
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
  
  ppcVar14 = (char **)(ulong)param_1;
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar21 = (ulong)param_4;
  if (((byte)this[0x98] & 1) == 0) {
    uStack_278 = 0;
    local_280 = (uint **)0x0;
    local_268 = (uint *)0x0;
    local_270 = 0;
    MiMetadata::find(*ppcVar14);
    if (local_270 != 0) {
      uVar24 = *local_268;
      if ((uVar24 >> 0x11 & 1) == 0) {
        if ((uVar24 & 0x1e01c) == 0) {
          uVar22 = 0;
          uVar16 = 0;
          uVar23 = 0;
          uVar25 = 0;
        }
        else {
          plVar26 = (long *)ppcVar14[1];
          pcStack_368 = ppcVar14[1];
          local_370 = *ppcVar14;
          if (plVar26 != (long *)0x0) {
            __aarch64_ldadd8_relax(1,plVar26 + 1);
          }
                    /* try { // try from 001091d8 to 001091ef has its CatchHandler @ 00109c38 */
          uVar8 = getLeicaWatermarkHeight(this,(shared_ptr)&local_370,param_3,param_4,uVar24);
          if ((plVar26 != (long *)0x0) &&
             (lVar10 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar26 + 1), lVar10 == 0)) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            std::__1::__shared_weak_count::__release_weak();
          }
          uVar23 = uVar8;
          if (uVar8 == 0) {
LAB_001093f4:
            uVar25 = (ulong)uVar23;
            uVar22 = 0;
            uVar16 = 0;
            uVar23 = 0;
          }
          else {
            iVar9 = *(int *)(this + 0x78);
            piVar1 = &DAT_00114070;
            if (iVar9 != 0x9007) {
              piVar1 = &DAT_0011406c;
            }
            piVar2 = &DAT_00114070;
            if (iVar9 != 0x9004) {
              piVar2 = piVar1;
            }
            piVar1 = &DAT_00114070;
            if (iVar9 != 0x80f3) {
              piVar1 = piVar2;
            }
            uVar23 = (int)(((double)(ulong)(*piVar1 + uVar8) + -1.0) / (double)*piVar1) + 1U &
                     0xfffffffe;
            if (param_6 < 0xb4) {
              if (param_6 == 0) {
                uVar25 = 0;
                uVar16 = 0;
                uVar22 = 0;
                goto LAB_00109650;
              }
              if (param_6 == 0x5a) {
                uVar16 = 0;
                uVar22 = uVar23;
              }
              else {
LAB_00109630:
                uVar22 = 0;
                uVar16 = 0;
              }
            }
            else {
              if (param_6 == 0xb4) goto LAB_001093f4;
              if (param_6 != 0x10e) goto LAB_00109630;
              uVar22 = 0;
              uVar16 = uVar23;
            }
            uVar23 = 0;
            uVar25 = 0;
          }
LAB_00109650:
          if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 4) &&
             (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
            pcVar11 = (char *)midebug::Log::getFileName
                                        (
                                        "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                        );
            pGVar3 = this + 0x81;
            if (((byte)this[0x80] & 1) != 0) {
              pGVar3 = *(GainMapPostProcPlugin **)(this + 0x90);
            }
            iVar9 = midebug::Log::catchLogEncryptLog
                              (2,pcVar11,0x178,"compressGainMapToJpeg",'D',
                               "[%s] leica watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d %d",
                               pGVar3,uVar25,uVar23,uVar16,uVar22,param_3,param_4,uVar8);
            if (iVar9 == 0) {
              uVar12 = midebug::Log::miaGroupToString(2);
              uVar13 = midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                 );
              pGVar3 = this + 0x81;
              if (((byte)this[0x80] & 1) != 0) {
                pGVar3 = *(GainMapPostProcPlugin **)(this + 0x90);
              }
              __android_log_print(3,"MiAlgoEngine",
                                  "%s %s:%d %s()[%s] leica watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d %d"
                                  ,uVar12,uVar13,0x178,"compressGainMapToJpeg",pGVar3,(int)uVar25,
                                  uVar23,uVar16,uVar22,param_3,param_4,uVar8);
            }
          }
          if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 4) &&
              (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
             (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
            pcVar11 = (char *)midebug::Log::getFileName
                                        (
                                        "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                        );
            pGVar3 = this + 0x81;
            if (((byte)this[0x80] & 1) != 0) {
              pGVar3 = *(GainMapPostProcPlugin **)(this + 0x90);
            }
            midebug::Log::logSystem
                      (2,"D",pcVar11,"compressGainMapToJpeg",0x178,
                       "[%s] leica watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d %d",pGVar3,
                       uVar25,uVar23,uVar16,uVar22,param_3,param_4,uVar8);
          }
        }
      }
      else {
        plVar26 = (long *)ppcVar14[1];
        pcStack_338 = ppcVar14[1];
        local_340 = *ppcVar14;
        local_330 = (void *)0x0;
        lStack_328 = 0;
        local_320 = 0;
        if (plVar26 != (long *)0x0) {
          __aarch64_ldadd8_relax(1,plVar26 + 1);
        }
                    /* try { // try from 001092e8 to 00109303 has its CatchHandler @ 00109c44 */
        getFourSideLeicaeWatermarkHeight((shared_ptr)this,(uint)&local_340,param_3,param_4);
        if ((plVar26 != (long *)0x0) &&
           (lVar10 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar26 + 1), lVar10 == 0)) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          std::__1::__shared_weak_count::__release_weak();
        }
        pvVar5 = local_330;
        if (lStack_328 - (long)local_330 == 0x10) {
          local_358 = (uint *)0x0;
          local_350 = (uint *)0x0;
          local_348 = (uint *)0x0;
                    /* try { // try from 0010934c to 0010935b has its CatchHandler @ 00109c34 */
          getFourSideLeicaeWatermarkGainmapHeight((vector *)this);
          if (param_6 < 0xb4) {
            if (param_6 == 0) {
              puVar19 = local_358 + 3;
              puVar15 = local_358;
              puVar18 = local_358 + 1;
              puVar20 = local_358 + 2;
              goto LAB_00109450;
            }
            if (param_6 == 0x5a) {
              puVar15 = local_358 + 1;
              puVar18 = local_358 + 2;
              puVar19 = local_358;
              puVar20 = local_358 + 3;
              goto LAB_00109450;
            }
LAB_00109404:
            uVar17 = 0;
            uVar8 = 0;
            uVar25 = 0;
            uVar23 = 0;
            uVar16 = 0;
            uVar22 = 0;
            uVar6 = 0;
            uVar7 = 0;
            if (local_358 == (uint *)0x0) goto LAB_00109480;
          }
          else {
            if (param_6 == 0xb4) {
              puVar15 = local_358 + 2;
              puVar18 = local_358 + 3;
              puVar19 = local_358 + 1;
              puVar20 = local_358;
            }
            else {
              if (param_6 != 0x10e) goto LAB_00109404;
              puVar15 = local_358 + 3;
              puVar19 = local_358 + 2;
              puVar18 = local_358;
              puVar20 = local_358 + 1;
            }
LAB_00109450:
            uVar8 = *puVar20;
            uVar17 = *puVar18;
            uVar6 = *puVar19;
            uVar7 = *puVar15;
          }
          uVar16 = uVar7;
          uVar23 = uVar6;
          local_350 = local_358;
          uVar25 = (ulong)uVar17;
          operator_delete(local_358,(long)local_348 - (long)local_358);
          uVar22 = uVar8;
        }
        else {
          uVar22 = 0;
          uVar16 = 0;
          uVar23 = 0;
          uVar25 = 0;
        }
LAB_00109480:
        if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 4) &&
           (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
                    /* try { // try from 001094a8 to 00109617 has its CatchHandler @ 00109c54 */
          pcVar11 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                      );
          pGVar3 = this + 0x81;
          if (((byte)this[0x80] & 1) != 0) {
            pGVar3 = *(GainMapPostProcPlugin **)(this + 0x90);
          }
          iVar9 = midebug::Log::catchLogEncryptLog
                            (2,pcVar11,0x168,"compressGainMapToJpeg",'D',
                             "[%s] four side leica watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d"
                             ,pGVar3,uVar25,uVar23,uVar16,uVar22,param_3,param_4);
          if (iVar9 == 0) {
            uVar12 = midebug::Log::miaGroupToString(2);
            uVar13 = midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                               );
            pGVar3 = this + 0x81;
            if (((byte)this[0x80] & 1) != 0) {
              pGVar3 = *(GainMapPostProcPlugin **)(this + 0x90);
            }
            __android_log_print(3,"MiAlgoEngine",
                                "%s %s:%d %s()[%s] four side leica watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d"
                                ,uVar12,uVar13,0x168,"compressGainMapToJpeg",pGVar3,(int)uVar25,
                                uVar23,uVar16,uVar22,param_3,param_4);
          }
        }
        if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 4) &&
            (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
           (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
          pcVar11 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                      );
          pGVar3 = this + 0x81;
          if (((byte)this[0x80] & 1) != 0) {
            pGVar3 = *(GainMapPostProcPlugin **)(this + 0x90);
          }
          midebug::Log::logSystem
                    (2,"D",pcVar11,"compressGainMapToJpeg",0x168,
                     "[%s] four side leica watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d",pGVar3
                     ,uVar25,uVar23,uVar16,uVar22,param_3,param_4);
        }
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5,local_320 - (long)pvVar5);
        }
      }
      if ((uVar24 & 0x700) != 0) {
        uVar24 = param_4;
        if (param_3 <= param_4) {
          uVar24 = param_3;
        }
        uVar16 = (uint)((float)uVar24 * 0.07407407);
        uVar24 = uVar16 & 7;
        if ((int)uVar16 < 1) {
          uVar24 = -(-uVar16 & 7);
        }
        uVar16 = uVar16 - uVar24;
        uVar25 = (ulong)uVar16;
        if ((*(uint *)PTR_gMiCamLogLevel_00110b00 < 4) &&
           (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
          pcVar11 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                      );
          pGVar3 = this + 0x81;
          if (((byte)this[0x80] & 1) != 0) {
            pGVar3 = *(GainMapPostProcPlugin **)(this + 0x90);
          }
          iVar9 = midebug::Log::catchLogEncryptLog
                            (2,pcVar11,0x183,"compressGainMapToJpeg",'D',
                             "[%s] ross watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d",pGVar3,
                             uVar25,uVar16,uVar16,uVar16,param_3,param_4);
          if (iVar9 == 0) {
            uVar12 = midebug::Log::miaGroupToString(2);
            uVar13 = midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                               );
            pGVar3 = this + 0x81;
            if (((byte)this[0x80] & 1) != 0) {
              pGVar3 = *(GainMapPostProcPlugin **)(this + 0x90);
            }
            __android_log_print(3,"MiAlgoEngine",
                                "%s %s:%d %s()[%s] ross watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d"
                                ,uVar12,uVar13,0x183,"compressGainMapToJpeg",pGVar3,uVar16,uVar16,
                                uVar16,uVar16,param_3,param_4);
          }
        }
        uVar23 = uVar16;
        uVar22 = uVar16;
        if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 4) &&
            (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
           (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
          pcVar11 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                                      );
          pGVar3 = this + 0x81;
          if (((byte)this[0x80] & 1) != 0) {
            pGVar3 = *(GainMapPostProcPlugin **)(this + 0x90);
          }
          midebug::Log::logSystem
                    (2,"D",pcVar11,"compressGainMapToJpeg",0x183,
                     "[%s] ross watermark: pad=[%d,%d,%d,%d](t,b,l,r),input=%dx%d",pGVar3,uVar25,
                     uVar16,uVar16,uVar16,param_3,param_4);
        }
      }
      goto LAB_001099e4;
    }
  }
  uVar16 = 0;
  uVar25 = 0;
  uVar23 = 0;
  uVar22 = 0;
LAB_001099e4:
  local_358 = (uint *)0x0;
  local_350 = (uint *)0x0;
  local_348 = (uint *)0x0;
  uVar24 = uVar22 + param_3 + uVar16;
  __n = (ulong)uVar24;
  local_280 = &local_358;
  if (uVar24 != 0) {
    uStack_278 = 0;
                    /* try { // try from 00109a0c to 00109a13 has its CatchHandler @ 00109c6c */
    local_358 = (uint *)operator_new(__n);
    puVar15 = (uint *)((long)local_358 + __n);
    local_348 = puVar15;
    memset(local_358,0,__n);
    local_350 = puVar15;
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
  local_270 = 0;
  uStack_278 = 0;
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
  lStack_328 = 0;
  local_330 = (void *)0x0;
  uStack_318 = 0;
  local_320 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
                    /* try { // try from 00109abc to 00109b23 has its CatchHandler @ 00109c7c */
  local_280 = (uint **)jpeg_std_error(&local_330);
  jpeg_CreateCompress(&local_280,0x3e,0x208);
  jpeg_mem_dest(&local_280,param_7,param_8);
  uVar8 = (uint)uVar25;
  uStack_250 = CONCAT44(uVar23 + param_4 + uVar8,uVar24);
  local_248 = 0x100000001;
  jpeg_set_defaults(&local_280);
  jpeg_set_quality(&local_280,0x62,1);
  jpeg_start_compress(&local_280,1);
  puVar15 = local_378;
  local_378 = local_358;
  while (local_358 = local_378, uVar8 != 0) {
                    /* try { // try from 00109b30 to 00109b3f has its CatchHandler @ 00109c88 */
    jpeg_write_scanlines(&local_280,&local_378,1);
    uVar8 = (int)uVar25 - 1;
    uVar25 = (ulong)uVar8;
    puVar15 = local_378;
    local_378 = local_358;
  }
  if (param_4 != 0) {
    uVar24 = 0;
    do {
      local_378 = puVar15;
      puVar15 = (uint *)(param_2 + uVar24);
      if ((uVar16 | uVar22) != 0) {
        memcpy((uchar *)((long)local_358 + (ulong)uVar16),param_2 + uVar24,(ulong)param_3);
        puVar15 = local_358;
      }
                    /* try { // try from 00109b84 to 00109b93 has its CatchHandler @ 00109c84 */
      local_378 = puVar15;
      jpeg_write_scanlines(&local_280,&local_378,1);
      uVar21 = uVar21 - 1;
      uVar24 = uVar24 + param_5;
      puVar15 = local_378;
    } while (uVar21 != 0);
  }
  local_378 = puVar15;
  if (uVar23 != 0) {
    memset(local_358,0,__n);
    do {
      local_378 = local_358;
                    /* try { // try from 00109bbc to 00109bcb has its CatchHandler @ 00109c80 */
      jpeg_write_scanlines(&local_280,&local_378,1);
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
                    /* try { // try from 00109bd4 to 00109be3 has its CatchHandler @ 00109c7c */
  jpeg_finish_compress(&local_280);
  jpeg_destroy_compress(&local_280);
  if (local_358 != (uint *)0x0) {
    local_350 = local_358;
    operator_delete(local_358,(long)local_348 - (long)local_358);
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x81ac initialize @ 001081ac

/* GainMapPostProcPlugin::initialize(CreateInfo*, MiaNodeInterface) */

undefined8 __thiscall
GainMapPostProcPlugin::initialize
          (GainMapPostProcPlugin *this,CreateInfo *param_1,MiaNodeInterface param_2)

{
  undefined8 *this_00;
  ulong uVar1;
  GainMapPostProcPlugin *pGVar2;
  uint uVar3;
  basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> bVar4;
  CreateInfo *pCVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_ffffffffffffffc0;
  GainMapPostProcPlugin *pGVar17;
  
  uVar8 = (undefined4)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
  puVar12 = (undefined8 *)(ulong)param_2;
  uVar13 = puVar12[3];
  uVar11 = puVar12[2];
  uVar10 = puVar12[4];
  uVar15 = puVar12[1];
  uVar14 = *puVar12;
  *(undefined8 *)(this + 0x30) = puVar12[5];
  *(undefined8 *)(this + 0x28) = uVar10;
  *(undefined8 *)(this + 0x20) = uVar13;
  *(undefined8 *)(this + 0x18) = uVar11;
  *(undefined8 *)(this + 0x10) = uVar15;
  *(undefined8 *)(this + 8) = uVar14;
  uVar16 = puVar12[9];
  uVar15 = puVar12[8];
  uVar11 = puVar12[0xb];
  uVar10 = puVar12[10];
  uVar14 = puVar12[7];
  uVar13 = puVar12[6];
  *(undefined8 *)(this + 0x68) = puVar12[0xc];
  *(undefined8 *)(this + 0x60) = uVar11;
  *(undefined8 *)(this + 0x58) = uVar10;
  *(undefined8 *)(this + 0x50) = uVar16;
  *(undefined8 *)(this + 0x48) = uVar15;
  *(undefined8 *)(this + 0x40) = uVar14;
  *(undefined8 *)(this + 0x38) = uVar13;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x3c);
  puVar12 = (undefined8 *)(param_1 + 8);
  this_00 = (undefined8 *)(this + 0x80);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x40);
  if (this_00 != puVar12) {
    bVar4 = *(basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)puVar12;
    if (((byte)*(basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)this_00
        & 1) == 0) {
      if (((byte)bVar4 & 1) == 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        uVar10 = *puVar12;
        *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(this + 0x88) = uVar11;
        *this_00 = uVar10;
      }
      else {
        std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
        __assign_no_alias<true>
                  ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)
                   this_00,*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
      }
    }
    else {
      uVar1 = (ulong)((byte)bVar4 >> 1);
      pCVar5 = param_1 + 9;
      if (((byte)bVar4 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 0x10);
        pCVar5 = *(CreateInfo **)(param_1 + 0x18);
      }
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __assign_no_alias<false>
                ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)this_00
                 ,(char *)pCVar5,uVar1);
    }
  }
  uVar3 = *(uint *)PTR_gMiCamLogLevel_00110b00;
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x100);
  if ((uVar3 < 5) && (((byte)*PTR_gMiCamLogGroup_00110b08 >> 1 & 1) != 0)) {
    pcVar9 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                               );
    pGVar2 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pGVar2 = *(GainMapPostProcPlugin **)(this + 0x90);
    }
    uVar10 = CONCAT44(uVar8,*(undefined4 *)(this + 0x98));
    iVar7 = midebug::Log::catchLogEncryptLog
                      (2,pcVar9,0x93,"initialize",'I',"[%s] this=%p prop=0x%x",pGVar2,this,uVar10);
    uVar8 = (undefined4)((ulong)uVar10 >> 0x20);
    if (iVar7 == 0) {
      uVar10 = midebug::Log::miaGroupToString(2);
      uVar11 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                         );
      pGVar2 = this + 0x81;
      if (((byte)this[0x80] & 1) != 0) {
        pGVar2 = *(GainMapPostProcPlugin **)(this + 0x90);
      }
      pGVar17 = this;
      __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()[%s] this=%p prop=0x%x",uVar10,uVar11,0x93,
                          "initialize",pGVar2,this,*(undefined4 *)(this + 0x98));
      uVar8 = (undefined4)((ulong)pGVar17 >> 0x20);
    }
  }
  if (((*(uint *)PTR_gMiCamOfflineLogLevel_00110b10 < 5) &&
      (((byte)*PTR_gMiCamOfflineLogGroup_00110b18 >> 1 & 1) != 0)) &&
     (*(int *)PTR_gMiCamDebugMask_00110b20 != 0)) {
    pcVar9 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPostProcPlugin.cpp"
                               );
    pGVar2 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      pGVar2 = *(GainMapPostProcPlugin **)(this + 0x90);
    }
    midebug::Log::logSystem
              (2,"I",pcVar9,"initialize",0x93,"[%s] this=%p prop=0x%x",pGVar2,this,
               CONCAT44(uVar8,*(undefined4 *)(this + 0x98)));
  }
  uVar8 = property_get_int32("persist.vendor.camera.gainmappp.highLightVal",0xfa);
  *(undefined4 *)(this + 0xa0) = uVar8;
  uVar8 = property_get_int32("persist.vendor.camera.gainmappp.hlAnc1",8);
  *(undefined4 *)(this + 0xa4) = uVar8;
  uVar8 = property_get_int32("persist.vendor.camera.gainmappp.hlG1",100);
  *(undefined4 *)(this + 0xa8) = uVar8;
  uVar8 = property_get_int32("persist.vendor.camera.gainmappp.hlAnc2",0x14);
  *(undefined4 *)(this + 0xac) = uVar8;
  uVar8 = property_get_int32("persist.vendor.camera.gainmappp.hlG2",0x50);
  *(undefined4 *)(this + 0xb0) = uVar8;
  uVar8 = property_get_int32("persist.vendor.camera.gainmap.maxHdrBoost",100);
  *(undefined4 *)(this + 0xb4) = uVar8;
  cVar6 = property_get_bool("persist.vendor.camera.algoengine.gainmap.dump",0);
  this[0x9c] = (GainMapPostProcPlugin)(cVar6 != '\0');
  cVar6 = property_get_bool("persist.vendor.camera.gainmap.histdump",0);
  this[0x9e] = (GainMapPostProcPlugin)(cVar6 != '\0');
  cVar6 = property_get_bool("persist.vendor.camera.gainmap.forceMaxHdrBoost",0);
  this[0x9d] = (GainMapPostProcPlugin)(cVar6 != '\0');
  return 0;
}


