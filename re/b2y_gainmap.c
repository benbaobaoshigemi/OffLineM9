// ===== 0x4bde4 updateMetaForGainMap @ 0014bde4

/* OfflineCamBase::updateMetaForGainMap(std::__1::vector<ImageParams,
   std::__1::allocator<ImageParams> >&, std::__1::map<unsigned int, std::__1::vector<ImageParams,
   std::__1::allocator<ImageParams> >, std::__1::less<unsigned int>,
   std::__1::allocator<std::__1::pair<unsigned int const, std::__1::vector<ImageParams,
   std::__1::allocator<ImageParams> > > > >*, std::__1::basic_string<char,
   std::__1::char_traits<char>, std::__1::allocator<char> >&) */

void __thiscall
OfflineCamBase::updateMetaForGainMap
          (OfflineCamBase *this,vector *param_1,map *param_2,basic_string *param_3)

{
  long *plVar1;
  float *pfVar2;
  int *piVar3;
  OfflineCamBase *pOVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  basic_ostream *pbVar15;
  FILE *__stream;
  ulong *puVar16;
  char *pcVar17;
  void **ppvVar18;
  uint uVar19;
  void *pvVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  void *pvVar26;
  ulong uVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  undefined4 uVar32;
  undefined4 *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long *plVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  long lVar42;
  undefined4 uVar43;
  float local_44c;
  uint local_428;
  undefined4 uStack_424;
  void *local_418;
  undefined8 local_410;
  ulong uStack_408;
  void *local_400;
  char *local_3f0;
  long *plStack_3e8;
  timeval local_3e0;
  timeval local_3d0;
  char *local_3c0;
  long *plStack_3b8;
  char *local_3b0;
  long *plStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  int local_378;
  int local_374;
  int iStack_370;
  undefined8 uStack_36c;
  undefined local_364 [4];
  char *local_360;
  long *plStack_358;
  void *local_350;
  void *pvStack_348;
  void *local_340;
  float *local_338;
  undefined8 local_328;
  ulong local_320;
  void *local_318;
  long local_310 [3];
  undefined *puStack_2f8;
  void *apvStack_2f0 [3];
  ulong uStack_2d8;
  void *pvStack_2d0;
  ulong local_2c8;
  undefined8 local_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  void *local_2a8;
  ulong local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  undefined4 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  long local_b8;
  
  lVar6 = tpidr_el0;
  local_b8 = *(long *)(lVar6 + 0x28);
  local_200 = 0;
  plVar1 = local_310 + 2;
  puStack_2f8 = (undefined *)0x0;
  local_310[2] = 0;
  apvStack_2f0[1] = (void *)0x0;
  apvStack_2f0[0] = (void *)0x0;
  uStack_2d8 = 0;
  apvStack_2f0[2] = (void *)0x0;
  local_2c8 = 0;
  pvStack_2d0 = (void *)0x0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  local_2a8 = (void *)0x0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  local_310[1] = 0;
  local_310[0] = 0;
  std::__1::basic_stringstream<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
  basic_stringstream_abi_ne200000_();
                    /* try { // try from 0014be74 to 0014be87 has its CatchHandler @ 0014eb4c */
  std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
            ((basic_ostream *)plVar1,"gainmap{",8);
  lVar21 = *(long *)param_1;
  *(uint *)((long)&puStack_2f8 + *(long *)(local_310[2] + -0x18)) =
       *(uint *)((long)&puStack_2f8 + *(long *)(local_310[2] + -0x18)) & 0xfffffeff | 4;
  *(undefined8 *)((long)apvStack_2f0 + *(long *)(local_310[2] + -0x18)) = 2;
  pcVar12 = *(char **)(lVar21 + 0x50);
  plVar5 = *(long **)(lVar21 + 0x58);
  local_360 = pcVar12;
  plStack_358 = plVar5;
  if (plVar5 != (long *)0x0) {
    __aarch64_ldadd8_relax(1,plVar5 + 1);
  }
                    /* try { // try from 0014bedc to 0014bee3 has its CatchHandler @ 0014eb30 */
  if ((pcVar12 == (char *)0x0) || (uVar11 = MiMetadata::isEmpty(), (uVar11 & 1) != 0)) {
    lVar21 = *(long *)param_1;
    plVar37 = *(long **)(lVar21 + 0x48);
    pcVar12 = *(char **)(lVar21 + 0x40);
    if (*(long *)(lVar21 + 0x48) != 0) {
      __aarch64_ldadd8_relax(1,*(long *)(lVar21 + 0x48) + 8);
    }
    local_360 = pcVar12;
    plStack_358 = plVar37;
    if ((plVar5 != (long *)0x0) &&
       (lVar21 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar5 + 1), lVar21 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__1::__shared_weak_count::__release_weak();
    }
  }
  pcVar12 = local_360;
  local_1f0 = (ulong)local_1f0._4_4_ << 0x20;
  local_364[0] = 1;
                    /* try { // try from 0014bf4c to 0014c0af has its CatchHandler @ 0014eb68 */
  iVar7 = MiMetadata::getTagFromName("com.xiaomi.ultraHDR.linearFrame",(uint *)&local_1f0);
  puVar28 = (uint *)PTR_gMiCamOfflineLogLevel_00176148;
  puVar31 = (uint *)PTR_gMiCamLogLevel_00176138;
  if ((iVar7 != 0) ||
     (iVar7 = MiMetadata::update((uint)pcVar12,(uchar *)(local_1f0 & 0xffffffff),(ulong)local_364),
     iVar7 != 0)) {
    if ((*puVar31 < 7) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      pOVar4 = this + 0xc1;
      if (((byte)this[0xc0] & 1) != 0) {
        pOVar4 = *(OfflineCamBase **)(this + 0xd0);
      }
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar12,0x446,"updateMetaForGainMap",'E',
                         "[%s] failed to set com.xiaomi.ultraHDR.linearFrame",pOVar4);
      if (iVar7 == 0) {
        uVar13 = midebug::Log::miaGroupToString(2);
        uVar14 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                           );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        __android_log_print(6,"MiAlgoEngine",
                            "%s %s:%d %s()[%s] failed to set com.xiaomi.ultraHDR.linearFrame",uVar13
                            ,uVar14,0x446,"updateMetaForGainMap",pOVar4);
      }
    }
    if ((*puVar28 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      pOVar4 = this + 0xc1;
      if (((byte)this[0xc0] & 1) != 0) {
        pOVar4 = *(OfflineCamBase **)(this + 0xd0);
      }
      midebug::Log::logSystem
                (2,"E",pcVar12,"updateMetaForGainMap",0x446,
                 "[%s] failed to set com.xiaomi.ultraHDR.linearFrame",pOVar4);
    }
  }
  pcVar12 = local_360;
  if ((int)*(undefined8 *)(this + 0x280) == 0) {
                    /* try { // try from 0014c0c4 to 0014c0d7 has its CatchHandler @ 0014ead0 */
    MiMetadata::find((uint)local_360);
    if (local_1e0 == 0) {
      if ((*puVar31 < 7) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
                    /* try { // try from 0014c120 to 0014c23b has its CatchHandler @ 0014eb68 */
        pcVar17 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        iVar7 = midebug::Log::catchLogEncryptLog
                          (2,pcVar17,0x451,"updateMetaForGainMap",'E',
                           "[%s] can\'t find AE Comp step, cam=%d",pOVar4,
                           (ulong)*(uint *)(this + 0x80));
        if (iVar7 == 0) {
          uVar13 = midebug::Log::miaGroupToString(2);
          uVar14 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                             );
          pOVar4 = this + 0xc1;
          if (((byte)this[0xc0] & 1) != 0) {
            pOVar4 = *(OfflineCamBase **)(this + 0xd0);
          }
          __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()[%s] can\'t find AE Comp step, cam=%d",
                              uVar13,uVar14,0x451,"updateMetaForGainMap",pOVar4,
                              *(undefined4 *)(this + 0x80));
        }
      }
      if ((*puVar28 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) {
        pcVar17 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        midebug::Log::logSystem
                  (2,"E",pcVar17,"updateMetaForGainMap",0x451,
                   "[%s] can\'t find AE Comp step, cam=%d",pOVar4,(ulong)*(uint *)(this + 0x80));
      }
    }
    else {
      *(undefined4 *)(this + 0x27c) = *puStack_1d8;
      *(undefined4 *)(this + 0x280) = puStack_1d8[1];
    }
  }
  local_c0 = 0;
  puStack_1d8 = (undefined4 *)0x0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  local_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
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
  uStack_1e8 = 0;
  local_1f0 = 0;
                    /* try { // try from 0014c26c to 0014c27f has its CatchHandler @ 0014eb48 */
  MiMetadata::find(pcVar12);
  if (local_390 == 0) {
    if ((*puVar31 < 7) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
                    /* try { // try from 0014c60c to 0014c717 has its CatchHandler @ 0014ead8 */
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      pOVar4 = this + 0xc1;
      if (((byte)this[0xc0] & 1) != 0) {
        pOVar4 = *(OfflineCamBase **)(this + 0xd0);
      }
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar12,0x45c,"updateMetaForGainMap",'E',
                         "[%s] failed to get AECFrameControl, return now",pOVar4);
      if (iVar7 == 0) {
        uVar13 = midebug::Log::miaGroupToString(2);
        uVar14 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                           );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        __android_log_print(6,"MiAlgoEngine",
                            "%s %s:%d %s()[%s] failed to get AECFrameControl, return now",uVar13,
                            uVar14,0x45c,"updateMetaForGainMap",pOVar4);
      }
    }
    if ((*puVar28 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      pOVar4 = this + 0xc1;
      if (((byte)this[0xc0] & 1) != 0) {
        pOVar4 = *(OfflineCamBase **)(this + 0xd0);
      }
      midebug::Log::logSystem
                (2,"E",pcVar12,"updateMetaForGainMap",0x45c,
                 "[%s] failed to get AECFrameControl, return now",pOVar4);
    }
  }
  else {
    memcpy(&local_1f0,local_388,0x138);
    uStack_36c = 0;
    iStack_370 = 0;
    local_378 = 0;
    local_374 = 0;
    local_380 = 0;
    uStack_398 = 0;
    local_3a0 = 0;
    local_388 = (void *)0x0;
    local_390 = 0;
    if (((*PTR_jsonUtils_00176218 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_jsonUtils_00176218), iVar7 != 0)) {
                    /* try { // try from 0014e644 to 0014e64f has its CatchHandler @ 0014ea68 */
      JsonUtils::JsonUtils((JsonUtils *)PTR_jsonUtils_00176220);
      __cxa_atexit(JsonUtils::~JsonUtils,PTR_jsonUtils_00176220,&DAT_00174000);
      __cxa_guard_release(PTR_jsonUtils_00176218);
    }
                    /* try { // try from 0014c2b8 to 0014c3f3 has its CatchHandler @ 0014eb54 */
    uVar11 = JsonUtils::getUltraHdrConfigInfoFromJsonData
                       ((JsonUtils *)PTR_jsonUtils_00176220,(UltraHdrConfigInfo *)&local_3a0);
    if ((uVar11 & 1) == 0) {
      if ((*puVar31 < 7) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        iVar7 = midebug::Log::catchLogEncryptLog
                          (2,pcVar12,0x463,"updateMetaForGainMap",'E',
                           "[%s] get ultrahdr Config info failed!",pOVar4);
        if (iVar7 == 0) {
          uVar13 = midebug::Log::miaGroupToString(2);
          uVar14 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                             );
          pOVar4 = this + 0xc1;
          if (((byte)this[0xc0] & 1) != 0) {
            pOVar4 = *(OfflineCamBase **)(this + 0xd0);
          }
          __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()[%s] get ultrahdr Config info failed!",
                              uVar13,uVar14,0x463,"updateMetaForGainMap",pOVar4);
        }
      }
      if ((*puVar28 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) {
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        midebug::Log::logSystem
                  (2,"E",pcVar12,"updateMetaForGainMap",0x463,
                   "[%s] get ultrahdr Config info failed!",pOVar4);
      }
    }
    pcVar12 = local_360;
                    /* try { // try from 0014c3f8 to 0014c40b has its CatchHandler @ 0014eb2c */
    MiMetadata::find(local_360);
    pfVar2 = (float *)0x0;
    if (local_340 != (void *)0x0) {
      pfVar2 = local_338;
    }
                    /* try { // try from 0014c41c to 0014c42f has its CatchHandler @ 0014eb28 */
    MiMetadata::find(pcVar12);
    pvVar26 = local_340;
    plVar5 = plStack_358;
    if (local_340 == (void *)0x0) {
      local_3b0 = pcVar12;
      plStack_3a8 = plStack_358;
      if (plStack_358 != (long *)0x0) {
        __aarch64_ldadd8_relax(1,plStack_358 + 1);
      }
      pvStack_348 = (void *)0x0;
      local_350 = (void *)0x0;
      local_338 = (float *)0x0;
      local_340 = (void *)0x0;
                    /* try { // try from 0014c740 to 0014c753 has its CatchHandler @ 0014ea98 */
      MiMetadata::find(pcVar12);
      if (local_340 == (void *)0x0) {
        uVar30 = 0;
      }
      else {
        uVar30 = (uint)(*(char *)local_338 != '\0');
      }
      if ((plVar5 != (long *)0x0) &&
         (lVar21 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar5 + 1), lVar21 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__1::__shared_weak_count::__release_weak();
      }
      plVar5 = plStack_358;
      pcVar12 = local_360;
      local_3c0 = local_360;
      plStack_3b8 = plStack_358;
      if (plStack_358 != (long *)0x0) {
        __aarch64_ldadd8_relax(1,plStack_358 + 1);
      }
      pvStack_348 = (void *)0x0;
      local_350 = (void *)0x0;
      local_338 = (float *)0x0;
      local_340 = (void *)0x0;
                    /* try { // try from 0014c7c4 to 0014c7d7 has its CatchHandler @ 0014ea88 */
      MiMetadata::find(pcVar12);
      if (local_340 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)*(byte *)local_338;
      }
      if ((plVar5 != (long *)0x0) &&
         (lVar21 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar5 + 1), lVar21 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__1::__shared_weak_count::__release_weak();
      }
      uVar8 = uVar8 - 1;
      if (((uint)(3 < uVar8) & (uVar30 ^ 0xffffffff)) != 0) goto LAB_0014c9a0;
      if ((*puVar31 < 5) && ((*PTR_gMiCamLogGroup_00176140 & 1) != 0)) {
                    /* try { // try from 0014c854 to 0014c99b has its CatchHandler @ 0014ea80 */
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        iVar7 = midebug::Log::catchLogEncryptLog
                          (1,pcVar12,0x48e,"updateMetaForGainMap",'I',
                           "[%s] adjust gainmap bright for evx for hdrEnable=%d, TFSNEnable=%d",
                           pOVar4,(ulong)uVar30,(uint)(uVar8 < 4));
        if (iVar7 == 0) {
          uVar13 = midebug::Log::miaGroupToString(1);
          uVar14 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                             );
          pOVar4 = this + 0xc1;
          if (((byte)this[0xc0] & 1) != 0) {
            pOVar4 = *(OfflineCamBase **)(this + 0xd0);
          }
          __android_log_print(4,"MiAlgoEngine",
                              "%s %s:%d %s()[%s] adjust gainmap bright for evx for hdrEnable=%d, TFSNEnable=%d"
                              ,uVar13,uVar14,0x48e,"updateMetaForGainMap",pOVar4,uVar30,
                              (uint)(uVar8 < 4));
        }
      }
      if (*puVar28 < 5) {
        uVar22 = 1;
        if (((*PTR_gMiCamOfflineLogGroup_00176150 & 1) != 0) &&
           (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
          pcVar12 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                      );
          pOVar4 = this + 0xc1;
          if (((byte)this[0xc0] & 1) != 0) {
            pOVar4 = *(OfflineCamBase **)(this + 0xd0);
          }
          midebug::Log::logSystem
                    (1,"I",pcVar12,"updateMetaForGainMap",0x48e,
                     "[%s] adjust gainmap bright for evx for hdrEnable=%d, TFSNEnable=%d",pOVar4,
                     (ulong)uVar30,(uint)(uVar8 < 4));
        }
        goto LAB_0014c9ac;
      }
LAB_0014c9a8:
      uVar22 = 1;
    }
    else {
      fVar34 = local_338[0x119];
                    /* try { // try from 0014c440 to 0014c453 has its CatchHandler @ 0014ead4 */
      MiMetadata::find(pcVar12);
      pvVar20 = local_340;
      if (local_340 != (void *)0x0) {
        pvVar20 = (void *)(ulong)*(byte *)local_338;
      }
      if ((fVar34 == 4.203895e-45) && ((int)pvVar20 == 0)) {
LAB_0014c490:
        if (pfVar2 != (float *)0x0) {
LAB_0014c498:
          if ((*(byte *)(pfVar2 + 0x1c) & 1) == 0) {
            if ((*puVar31 < 5) && ((*PTR_gMiCamLogGroup_00176140 & 1) != 0)) {
                    /* try { // try from 0014c4c0 to 0014c5eb has its CatchHandler @ 0014ea7c */
              pcVar12 = (char *)midebug::Log::getFileName
                                          (
                                          "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                          );
              pOVar4 = this + 0xc1;
              if (((byte)this[0xc0] & 1) != 0) {
                pOVar4 = *(OfflineCamBase **)(this + 0xd0);
              }
              iVar7 = midebug::Log::catchLogEncryptLog
                                (1,pcVar12,0x481,"updateMetaForGainMap",'I',
                                 "[%s] adjust gainmap bright for evx in algotype=%d",pOVar4,
                                 (ulong)(uint)fVar34);
              if (iVar7 == 0) {
                uVar13 = midebug::Log::miaGroupToString(1);
                uVar14 = midebug::Log::getFileName
                                   (
                                   "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                   );
                pOVar4 = this + 0xc1;
                if (((byte)this[0xc0] & 1) != 0) {
                  pOVar4 = *(OfflineCamBase **)(this + 0xd0);
                }
                __android_log_print(4,"MiAlgoEngine",
                                    "%s %s:%d %s()[%s] adjust gainmap bright for evx in algotype=%d"
                                    ,uVar13,uVar14,0x481,"updateMetaForGainMap",pOVar4,fVar34);
              }
            }
            if (4 < *puVar28) goto LAB_0014c9a8;
            uVar22 = 1;
            if (((*PTR_gMiCamOfflineLogGroup_00176150 & 1) != 0) &&
               (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
              pcVar12 = (char *)midebug::Log::getFileName
                                          (
                                          "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                          );
              pOVar4 = this + 0xc1;
              if (((byte)this[0xc0] & 1) != 0) {
                pOVar4 = *(OfflineCamBase **)(this + 0xd0);
              }
              midebug::Log::logSystem
                        (1,"I",pcVar12,"updateMetaForGainMap",0x481,
                         "[%s] adjust gainmap bright for evx in algotype=%d",pOVar4,
                         (ulong)(uint)fVar34);
            }
            goto LAB_0014c9ac;
          }
        }
LAB_0014c9a0:
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        if ((uint)fVar34 < 0x10) {
          if ((1 << (ulong)((uint)fVar34 & 0x1f) & 0xc060U) != 0) goto LAB_0014c490;
          if ((fVar34 == 5.605194e-45) || (fVar34 == 1.121039e-44)) {
            uVar22 = 0;
            if (((int)pvVar20 == 0) && (uVar22 = 0, pfVar2 != (float *)0x0)) goto LAB_0014c498;
          }
        }
      }
    }
LAB_0014c9ac:
                    /* try { // try from 0014c9b0 to 0014c9bf has its CatchHandler @ 0014eb24 */
    MiMetadata::find(local_360);
    if (local_340 == (void *)0x0) {
      uVar30 = 0;
    }
    else {
      uVar30 = (uint)*(byte *)local_338;
    }
    if ((*puVar31 < 5) && ((*PTR_gMiCamLogGroup_00176140 & 1) != 0)) {
                    /* try { // try from 0014c9f4 to 0014cb73 has its CatchHandler @ 0014eb70 */
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      pOVar4 = this + 0xc1;
      if (((byte)this[0xc0] & 1) != 0) {
        pOVar4 = *(OfflineCamBase **)(this + 0xd0);
      }
      iVar7 = midebug::Log::catchLogEncryptLog
                        (1,pcVar12,0x495,"updateMetaForGainMap",'I',"[%s] legendMode:%d",pOVar4,
                         (ulong)uVar30);
      if (iVar7 == 0) {
        uVar13 = midebug::Log::miaGroupToString(1);
        uVar14 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                           );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()[%s] legendMode:%d",uVar13,uVar14,0x495,
                            "updateMetaForGainMap",pOVar4,uVar30);
      }
    }
    if (((*puVar28 < 5) && ((*PTR_gMiCamOfflineLogGroup_00176150 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      pOVar4 = this + 0xc1;
      if (((byte)this[0xc0] & 1) != 0) {
        pOVar4 = *(OfflineCamBase **)(this + 0xd0);
      }
      midebug::Log::logSystem
                (1,"I",pcVar12,"updateMetaForGainMap",0x495,"[%s] legendMode:%d",pOVar4,
                 (ulong)uVar30);
    }
    fVar34 = (float)local_160;
    local_44c = 1.0;
    uVar8 = uVar22;
    if ((float)local_160 == 0.0) {
      uVar8 = 1;
    }
    if (uVar8 == 0) {
      pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                          ((basic_ostream *)plVar1,"Pre(adrc=",9);
      pbVar15 = (basic_ostream *)
                std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,fVar34);
      std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                (pbVar15,");",2);
      local_44c = fVar34;
    }
    uVar8 = (**(code **)(*(long *)this + 0x2b0))();
    if ((uVar22 | uVar8 & 1) == 0) {
      if (uVar30 - 1 < 2) {
                    /* try { // try from 0014cc7c to 0014ccaf has its CatchHandler @ 0014eb70 */
        std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                  ((basic_ostream *)plVar1,"dg*=0.3;",8);
        fVar34 = 0.3;
      }
      else {
        std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                  ((basic_ostream *)plVar1,"dg*=0.6;",8);
        fVar34 = 0.6;
      }
      if (((DAT_001788c8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001788c8), iVar7 != 0)) {
        DAT_001788c0 = (float)(int)local_380 / 100.0;
        __cxa_guard_release(&DAT_001788c8);
      }
      if (((DAT_001788d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001788d8), iVar7 != 0)) {
        DAT_001788d0 = local_380._4_4_;
        __cxa_guard_release(&DAT_001788d8);
      }
      fVar38 = DAT_001788c0;
      if (((float)DAT_001788d0 < (float)local_190) &&
         (fVar41 = (float)local_160, (float)local_160 < DAT_001788c0)) {
                    /* try { // try from 0014cd08 to 0014cd37 has its CatchHandler @ 0014ea84 */
        pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                            ((basic_ostream *)plVar1,"LDR(dg*=",8);
        pbVar15 = (basic_ostream *)
                  std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,
                             fVar41 / fVar38);
        std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                  (pbVar15,");",2);
        fVar34 = fVar34 * (fVar41 / fVar38);
      }
      if ((*puVar31 < 5) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
                    /* try { // try from 0014cd58 to 0014ce8f has its CatchHandler @ 0014eb70 */
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        iVar7 = midebug::Log::catchLogEncryptLog
                          (2,pcVar12,0x530,"updateMetaForGainMap",'I',
                           "regular algo: adrc=%.2f,knee=%.2f,luxIdx=%.2f,dgain=%.2f",
                           (double)(float)local_160,(double)DAT_001788c0,(double)(float)local_190,
                           (double)fVar34);
        if (iVar7 == 0) {
          uVar13 = midebug::Log::miaGroupToString(2);
          uVar14 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                             );
          __android_log_print((double)(float)local_160,(double)DAT_001788c0,(double)(float)local_190
                              ,(double)fVar34,4,"MiAlgoEngine",
                              "%s %s:%d %s()regular algo: adrc=%.2f,knee=%.2f,luxIdx=%.2f,dgain=%.2f"
                              ,uVar13,uVar14,0x530,"updateMetaForGainMap");
        }
      }
      if (((*puVar28 < 5) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) &&
         (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        midebug::Log::logSystem
                  (2,"I",pcVar12,"updateMetaForGainMap",0x530,
                   "regular algo: adrc=%.2f,knee=%.2f,luxIdx=%.2f,dgain=%.2f",
                   (double)(float)local_160,(double)DAT_001788c0,(double)(float)local_190,
                   (double)fVar34);
      }
    }
    else {
      local_328 = &local_350;
      local_350 = (void *)0x0;
      pvStack_348 = (void *)0x0;
      local_340 = (void *)0x0;
      local_320 = 0;
                    /* try { // try from 0014cb90 to 0014cb97 has its CatchHandler @ 0014eac0 */
      local_350 = operator_new(0x3fffc);
      pvVar20 = (void *)((long)local_350 + 0x3fffc);
      local_340 = pvVar20;
      memset(local_350,0,0x3fffc);
      puVar33 = *(undefined4 **)param_1;
      pvStack_348 = pvVar20;
      if (((DAT_00178828 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178828), iVar7 != 0)) {
        DAT_00178820 = (uint)local_3a0;
        __cxa_guard_release(&DAT_00178828);
      }
      if (((DAT_00178838 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178838), iVar7 != 0)) {
        DAT_00178830 = local_3a0._4_4_;
        __cxa_guard_release(&DAT_00178838);
      }
      local_3d0.tv_sec = 0;
      local_3d0.tv_usec = 0;
      local_3e0.tv_sec = 0;
      local_3e0.tv_usec = 0;
      gettimeofday(&local_3d0,(__timezone_ptr_t)0x0);
      uVar30 = puVar33[2];
      if (uVar30 == 0) {
        uVar23 = puVar33[1];
      }
      else {
        uVar23 = puVar33[1];
        uVar19 = 0;
        uVar9 = uVar23;
        do {
          if (uVar9 != 0) {
            iVar7 = puVar33[0xe];
            lVar21 = *(long *)(puVar33 + 0x20);
            uVar30 = 0;
            do {
              uVar11 = (ulong)*(ushort *)(lVar21 + (ulong)(iVar7 * uVar19) + (long)(int)uVar30 * 2);
              *(int *)((long)local_350 + uVar11 * 4) = *(int *)((long)local_350 + uVar11 * 4) + 1;
              uVar23 = puVar33[1];
              uVar30 = DAT_00178820 + uVar30;
            } while (uVar30 < uVar23);
            uVar30 = puVar33[2];
            uVar9 = uVar23;
          }
          uVar19 = DAT_00178830 + uVar19;
        } while (uVar19 < uVar30);
      }
      uVar9 = DAT_00178830;
      uVar19 = DAT_00178820;
      gettimeofday(&local_3e0,(__timezone_ptr_t)0x0);
      if (((DAT_00178848 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178848), iVar7 != 0)) {
                    /* try { // try from 0014e89c to 0014e8ab has its CatchHandler @ 0014ea24 */
        DAT_00178840 = property_get_int32("persist.vendor.camera.gainmap.histdump",0);
        __cxa_guard_release(&DAT_00178848);
      }
      uVar29 = 0;
      if (uVar19 != 0) {
        uVar29 = uVar23 / uVar19;
      }
      uVar23 = 0;
      if (uVar9 != 0) {
        uVar23 = uVar30 / uVar9;
      }
      if (DAT_00178840 != 0) {
        __stream = fopen("/data/vendor/camera/gainmapPreProcHist.txt","w");
        if (pvStack_348 != local_350) {
          uVar11 = 0;
          do {
            fprintf(__stream,"%d : %d\n",uVar11 & 0xffffffff,
                    (ulong)*(uint *)((long)local_350 + uVar11 * 4));
            uVar11 = uVar11 + 1;
          } while (uVar11 < (ulong)((long)pvStack_348 - (long)local_350 >> 2));
        }
        fclose(__stream);
      }
      if (((DAT_00178858 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178858), iVar7 != 0)) {
        DAT_00178850 = (int)uStack_398;
        __cxa_guard_release(&DAT_00178858);
      }
      uVar30 = 0;
      uVar19 = 0;
      uVar27 = 0;
      uVar23 = uVar23 * uVar29 * DAT_00178850;
      uVar25 = (ulong)((long)pvStack_348 - (long)local_350) >> 2;
      uVar9 = (int)uVar25 - 1;
      uVar11 = (ulong)uVar9;
      uVar29 = uVar19;
      if ((int)uVar9 < 0) {
LAB_0014cfb8:
        uVar24 = 0;
      }
      else {
        do {
          uVar9 = *(uint *)((long)local_350 + uVar11 * 4);
          uVar24 = (int)uVar25 - 1;
          uVar25 = (ulong)uVar24;
          uVar27 = uVar27 + uVar11 * uVar9;
          uVar30 = uVar9 + uVar30;
          uVar19 = 0;
          if (uVar9 != 0) {
            uVar19 = uVar24;
          }
          if (uVar29 != 0) {
            uVar19 = uVar29;
          }
          if ((long)uVar11 < 1) goto LAB_0014cfb8;
          uVar11 = uVar11 - 1;
          uVar29 = uVar19;
        } while (uVar30 <= uVar23 / 1000000);
      }
      uVar32 = *puVar33;
      plStack_3e8 = plStack_358;
      local_3f0 = local_360;
      if (plStack_358 != (long *)0x0) {
        __aarch64_ldadd8_relax(1,plStack_358 + 1);
      }
                    /* try { // try from 0014cfe8 to 0014cff7 has its CatchHandler @ 0014eaa8 */
      uVar9 = (**(code **)(*(long *)this + 0x158))(this,uVar32,&local_3f0,0);
      plVar5 = plStack_3e8;
      uVar11 = 0;
      if ((ulong)uVar30 != 0) {
        uVar11 = uVar27 / uVar30;
      }
      if ((plStack_3e8 != (long *)0x0) &&
         (lVar21 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_3e8 + 1), lVar21 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__1::__shared_weak_count::__release_weak();
      }
      fVar38 = (float)(ulong)(uint)~(-1 << (ulong)(uVar9 & 0x1f)) / (float)(uVar11 & 0xffffffff);
      uVar23 = uVar23 / 1000000;
      uVar32 = (undefined4)uVar11;
      if ((*(uint *)PTR_gMiCamLogLevel_00176138 < 5) &&
         (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
                    /* try { // try from 0014d070 to 0014d20f has its CatchHandler @ 0014eb38 */
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        uVar11 = local_3e0.tv_usec + (local_3e0.tv_sec - local_3d0.tv_sec) * 1000000;
        lVar21 = 0;
        if ((ulong)local_3d0.tv_usec <= uVar11) {
          lVar21 = uVar11 - local_3d0.tv_usec;
        }
        lVar42 = lVar21;
        iVar7 = midebug::Log::catchLogEncryptLog
                          (2,pcVar12,0x4cf,"updateMetaForGainMap",'I',
                           "bright area: pixNum=%u,val={max=%d,min=%d,avg=%d},gain=%f,time=%lldus",
                           (double)fVar38,(ulong)(DAT_00178820 * uVar23 * DAT_00178830),
                           (ulong)uVar19,uVar24,uVar32,lVar21);
        uVar43 = (undefined4)((ulong)lVar42 >> 0x20);
        if (iVar7 == 0) {
          uVar13 = midebug::Log::miaGroupToString(2);
          uVar14 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                             );
          __android_log_print((double)fVar38,4,"MiAlgoEngine",
                              "%s %s:%d %s()bright area: pixNum=%u,val={max=%d,min=%d,avg=%d},gain=%f,time=%lldus"
                              ,uVar13,uVar14,0x4cf,"updateMetaForGainMap",
                              DAT_00178820 * uVar23 * DAT_00178830,uVar19,uVar24,
                              CONCAT44(uVar43,uVar32),lVar21);
        }
      }
      if (((*(uint *)PTR_gMiCamOfflineLogLevel_00176148 < 5) &&
          (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) &&
         (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        uVar11 = local_3e0.tv_usec + (local_3e0.tv_sec - local_3d0.tv_sec) * 1000000;
        lVar21 = 0;
        if ((ulong)local_3d0.tv_usec <= uVar11) {
          lVar21 = uVar11 - local_3d0.tv_usec;
        }
        midebug::Log::logSystem
                  (2,"I",pcVar12,"updateMetaForGainMap",0x4cf,
                   "bright area: pixNum=%u,val={max=%d,min=%d,avg=%d},gain=%f,time=%lldus",
                   (double)fVar38,(ulong)(DAT_00178820 * uVar23 * DAT_00178830),(ulong)uVar19,uVar24
                   ,uVar32,lVar21);
      }
      puVar28 = (uint *)PTR_gMiCamOfflineLogLevel_00176148;
      puVar31 = (uint *)PTR_gMiCamLogLevel_00176138;
      if (pfVar2 == (float *)0x0) {
        if ((*(uint *)PTR_gMiCamLogLevel_00176138 < 7) &&
           (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
                    /* try { // try from 0014d3ac to 0014d4c3 has its CatchHandler @ 0014eb38 */
          pcVar12 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                      );
          pOVar4 = this + 0xc1;
          if (((byte)this[0xc0] & 1) != 0) {
            pOVar4 = *(OfflineCamBase **)(this + 0xd0);
          }
          iVar7 = midebug::Log::catchLogEncryptLog
                            (2,pcVar12,0x510,"updateMetaForGainMap",'E',
                             "[%s] can\'t find asdTriggerInfo",pOVar4);
          if (iVar7 == 0) {
            uVar13 = midebug::Log::miaGroupToString(2);
            uVar14 = midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                               );
            pOVar4 = this + 0xc1;
            if (((byte)this[0xc0] & 1) != 0) {
              pOVar4 = *(OfflineCamBase **)(this + 0xd0);
            }
            __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()[%s] can\'t find asdTriggerInfo",
                                uVar13,uVar14,0x510,"updateMetaForGainMap",pOVar4);
          }
        }
        fVar34 = 1.0;
        if ((*(uint *)PTR_gMiCamOfflineLogLevel_00176148 < 7) &&
           (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) {
          pcVar12 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                      );
          pOVar4 = this + 0xc1;
          if (((byte)this[0xc0] & 1) != 0) {
            pOVar4 = *(OfflineCamBase **)(this + 0xd0);
          }
          midebug::Log::logSystem
                    (2,"E",pcVar12,"updateMetaForGainMap",0x510,"[%s] can\'t find asdTriggerInfo",
                     pOVar4);
        }
      }
      else {
        local_328 = (void **)0x0;
        local_320 = 0;
        local_318 = (void *)0x0;
        if (pfVar2[1] != 0.0) {
          uVar11 = 0;
          do {
                    /* try { // try from 0014d268 to 0014d26f has its CatchHandler @ 0014eb74 */
            std::__1::to_string((int)pfVar2[uVar11 + 2]);
                    /* try { // try from 0014d270 to 0014d27b has its CatchHandler @ 0014eb9c */
            puVar16 = (ulong *)std::__1::
                               basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>
                               ::append((char *)&local_428);
            local_400 = (void *)puVar16[2];
            uStack_408 = puVar16[1];
            local_410 = *puVar16;
            puVar16[1] = 0;
            puVar16[2] = 0;
            *puVar16 = 0;
                    /* try { // try from 0014d294 to 0014d29f has its CatchHandler @ 0014ebc4 */
            std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
            append_abi_ne200000_
                      ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)
                       &local_328,(basic_string *)&local_410);
            if ((local_410 & 1) != 0) {
              operator_delete(local_400,local_410 & 0xfffffffffffffffe);
            }
            if ((local_428 & 1) != 0) {
              operator_delete(local_418,CONCAT44(uStack_424,local_428) & 0xfffffffffffffffe);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)pfVar2[1]);
        }
        if (((DAT_00178868 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178868), iVar7 != 0)) {
          DAT_00178860 = uStack_398._4_4_;
          __cxa_guard_release(&DAT_00178868);
        }
        if (((DAT_00178878 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178878), iVar7 != 0)) {
          DAT_00178870 = (int)local_390;
          __cxa_guard_release(&DAT_00178878);
        }
        if (((DAT_00178888 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178888), iVar7 != 0)) {
          DAT_00178880 = local_390._4_4_;
          __cxa_guard_release(&DAT_00178888);
        }
        if (((DAT_00178898 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178898), iVar7 != 0)) {
          DAT_00178890 = (int)local_388;
          __cxa_guard_release(&DAT_00178898);
        }
        if (((DAT_001788a8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001788a8), iVar7 != 0)) {
          DAT_001788a0 = local_388._4_4_;
          __cxa_guard_release(&DAT_001788a8);
        }
        if (((DAT_001788b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001788b8), iVar7 != 0)) {
                    /* try { // try from 0014e9d4 to 0014e9e3 has its CatchHandler @ 0014ea08 */
          DAT_001788b0 = property_get_int32("persist.vendor.camera.gainmap.evTarget",0);
          __cxa_guard_release(&DAT_001788b8);
          puVar28 = (uint *)PTR_gMiCamOfflineLogLevel_00176148;
          puVar31 = (uint *)PTR_gMiCamLogLevel_00176138;
        }
        if (pvVar26 == (void *)0x0) {
          fVar40 = 1.0;
          fVar41 = *pfVar2;
        }
        else {
          fVar40 = pfVar2[0x1b];
          if ((float)(int)fVar40 <= 0.0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int)*(undefined8 *)(this + 0x27c);
            if (iVar7 != 0) {
              fVar34 = log2f((float)(int)fVar40);
              iVar7 = 0;
              iVar10 = (int)*(undefined8 *)(this + 0x27c);
              if (iVar10 != 0) {
                iVar7 = (int)*(undefined8 *)(this + 0x280) / iVar10;
              }
              iVar7 = (int)(fVar34 * (float)iVar7);
            }
          }
          fVar41 = (float)-iVar7;
        }
        iVar7 = DAT_001788b0;
        if (DAT_001788b0 == 0) {
          if (fVar41 == 0.0) {
            iVar7 = -10;
          }
          else {
            iVar7 = DAT_00178870;
            if ((((float)DAT_001788a0 <= (float)local_190) &&
                ((int)fVar41 - DAT_00178860 != 0 && DAT_00178860 <= (int)fVar41)) &&
               (iVar7 = DAT_00178890, (int)fVar41 < DAT_00178880)) {
              iVar7 = (int)(((float)((int)fVar41 - DAT_00178860) /
                            (float)(DAT_00178880 - DAT_00178860)) *
                            (float)(DAT_00178890 - DAT_00178870) + (float)DAT_00178870);
            }
          }
        }
        fVar35 = 1.0;
        if ((int)*(undefined8 *)(this + 0x280) != 0) {
          fVar35 = exp2f(((float)(iVar7 - (int)fVar41) * (float)(int)*(undefined8 *)(this + 0x27c))
                         / (float)(int)*(undefined8 *)(this + 0x280));
        }
        fVar34 = fVar35;
        if ((1.0 <= fVar35) && (fVar38 < fVar35)) {
          local_44c = local_44c * (fVar35 / fVar38);
          fVar34 = fVar38;
        }
                    /* try { // try from 0014d608 to 0014d823 has its CatchHandler @ 0014eb64 */
        pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                            ((basic_ostream *)plVar1,"Hist(alignEv=",0xd);
        pbVar15 = (basic_ostream *)
                  std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,(int)fVar41)
        ;
        pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                            (pbVar15,",EvxGain=",9);
        pbVar15 = (basic_ostream *)
                  std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,fVar40);
        pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                            (pbVar15,",tgtEv=",7);
        pbVar15 = (basic_ostream *)
                  std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,iVar7);
        pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                            (pbVar15,",dg=",4);
        pbVar15 = (basic_ostream *)
                  std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,fVar34);
        pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                            (pbVar15,",adrc=",6);
        pbVar15 = (basic_ostream *)
                  std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,local_44c);
        std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                  (pbVar15,");",2);
        if ((*puVar31 < 5) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
          pcVar12 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                      );
          pvVar26 = local_318;
          if (((ulong)local_328 & 1) == 0) {
            pvVar26 = (void *)((long)&local_328 + 1);
          }
          iVar10 = midebug::Log::catchLogEncryptLog
                             (2,pcVar12,0x50e,"updateMetaForGainMap",'I',
                              "inEV:[%s] evAlign=%d evxGain=%.2f target:EV=%d,gain=%.2f; rst:dgain=%.2f,adrc=%.2f"
                              ,(double)fVar40,(double)fVar35,(double)fVar34,(double)local_44c,
                              pvVar26,(ulong)(uint)fVar41,iVar7);
          if (iVar10 == 0) {
            uVar13 = midebug::Log::miaGroupToString(2);
            uVar14 = midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                               );
            pvVar26 = (void *)((ulong)&local_328 | 1);
            if (((ulong)local_328 & 1) != 0) {
              pvVar26 = local_318;
            }
            __android_log_print((double)fVar40,(double)fVar35,(double)fVar34,(double)local_44c,4,
                                "MiAlgoEngine",
                                "%s %s:%d %s()inEV:[%s] evAlign=%d evxGain=%.2f target:EV=%d,gain=%.2f; rst:dgain=%.2f,adrc=%.2f"
                                ,uVar13,uVar14,0x50e,"updateMetaForGainMap",pvVar26,fVar41,iVar7);
          }
        }
        if (((*puVar28 < 5) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) &&
           (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
          pcVar12 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                      );
          pvVar26 = local_318;
          if (((ulong)local_328 & 1) == 0) {
            pvVar26 = (void *)((long)&local_328 + 1);
          }
          midebug::Log::logSystem
                    (2,"I",pcVar12,"updateMetaForGainMap",0x50e,
                     "inEV:[%s] evAlign=%d evxGain=%.2f target:EV=%d,gain=%.2f; rst:dgain=%.2f,adrc=%.2f"
                     ,(double)fVar40,(double)fVar35,(double)fVar34,(double)local_44c,pvVar26,
                     (ulong)(uint)fVar41,iVar7);
        }
        if (((ulong)local_328 & 1) != 0) {
          operator_delete(local_318,(ulong)local_328 & 0xfffffffffffffffe);
        }
      }
      if (*(int *)(this + 0x74) == 0x11) {
                    /* try { // try from 0014d84c to 0014d85f has its CatchHandler @ 0014eb38 */
        std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                  ((basic_ostream *)plVar1,"Front(dg*=0.6);",0xf);
        fVar34 = fVar34 * 0.6;
      }
      puVar28 = (uint *)PTR_gMiCamOfflineLogLevel_00176148;
      puVar31 = (uint *)PTR_gMiCamLogLevel_00176138;
      if (local_350 != (void *)0x0) {
        pvStack_348 = local_350;
        operator_delete(local_350,(long)local_340 - (long)local_350);
      }
    }
    if (((DAT_001788e8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001788e8), iVar7 != 0)) {
      DAT_001788e0 = local_378;
      __cxa_guard_release(&DAT_001788e8);
    }
    if (((DAT_001788f8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001788f8), iVar7 != 0)) {
      DAT_001788f0 = local_374;
      __cxa_guard_release(&DAT_001788f8);
    }
    if (((DAT_00178908 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178908), iVar7 != 0)) {
      DAT_00178900 = iStack_370;
      __cxa_guard_release(&DAT_00178908);
    }
    if (((DAT_00178918 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178918), iVar7 != 0)) {
      DAT_00178910 = (undefined4)uStack_36c;
      __cxa_guard_release(&DAT_00178918);
    }
    if (((DAT_00178928 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178928), iVar7 != 0)) {
      DAT_00178920 = uStack_36c._4_4_;
      __cxa_guard_release(&DAT_00178928);
    }
    fVar38 = (float)local_190;
    piVar3 = &DAT_00178910;
    if ((uVar22 | uVar8 & 1) == 0) {
      piVar3 = &DAT_00178920;
    }
    if ((float)local_190 <= (float)DAT_001788e0) {
      fVar41 = (float)DAT_001788f0;
    }
    else if ((float)DAT_00178900 <= (float)local_190) {
      fVar41 = (float)*piVar3;
    }
    else {
      fVar41 = (((float)local_190 - (float)DAT_001788e0) / (float)(DAT_00178900 - DAT_001788e0)) *
               (float)(*piVar3 - DAT_001788f0) + (float)DAT_001788f0;
    }
                    /* try { // try from 0014d978 to 0014dac7 has its CatchHandler @ 0014eb6c */
    pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                        ((basic_ostream *)plVar1,"Lux(dg*=",8);
    pbVar15 = (basic_ostream *)
              std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,fVar41 / 100.0);
    std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
              (pbVar15,");",2);
    fVar34 = fVar34 * (fVar41 / 100.0);
    if ((*puVar31 < 5) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      dVar39 = (double)fVar38;
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar12,0x54d,"updateMetaForGainMap",'I',"luxIndex=%.2f,dGain=%.2f",
                         dVar39,(double)fVar34);
      if (iVar7 == 0) {
        uVar13 = midebug::Log::miaGroupToString(2);
        uVar14 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                           );
        __android_log_print(dVar39,(double)fVar34,4,"MiAlgoEngine",
                            "%s %s:%d %s()luxIndex=%.2f,dGain=%.2f",uVar13,uVar14,0x54d,
                            "updateMetaForGainMap");
      }
    }
    if (((*puVar28 < 5) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      midebug::Log::logSystem
                (2,"I",pcVar12,"updateMetaForGainMap",0x54d,"luxIndex=%.2f,dGain=%.2f",
                 (double)fVar38,(double)fVar34);
    }
    pcVar12 = local_360;
                    /* try { // try from 0014dacc to 0014dadf has its CatchHandler @ 0014eb20 */
    MiMetadata::find(local_360);
    if (local_340 == (void *)0x0) {
      fVar38 = 0.0;
    }
    else {
      fVar38 = *local_338;
    }
                    /* try { // try from 0014daf8 to 0014db0b has its CatchHandler @ 0014eb1c */
    MiMetadata::find(pcVar12);
    if (local_340 == (void *)0x0) {
      fVar41 = 0.0;
    }
    else {
      fVar41 = *local_338;
    }
                    /* try { // try from 0014db24 to 0014db37 has its CatchHandler @ 0014eb18 */
    MiMetadata::find(pcVar12);
    if (local_340 == (void *)0x0) {
      fVar40 = 1.0;
    }
    else {
      fVar40 = *local_338;
    }
    if (((5.0 < fVar38) && (fVar38 < fVar41)) && (5.0 < fVar41)) {
                    /* try { // try from 0014db6c to 0014dbfb has its CatchHandler @ 0014eb60 */
      pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                          ((basic_ostream *)plVar1,"luma(cur=",9);
      pbVar15 = (basic_ostream *)
                std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,(int)fVar41);
      pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                          (pbVar15,",tgt=",5);
      pbVar15 = (basic_ostream *)
                std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,(int)fVar38);
      pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                          (pbVar15,",dg*=",5);
      fVar36 = 1.0 - (fVar41 - fVar38) / (255.0 - fVar38);
      fVar35 = fVar36 * 0.5;
      fVar35 = fVar35 + fVar35 * fVar36;
      pbVar15 = (basic_ostream *)
                std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,fVar35);
      std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                (pbVar15,");",2);
      fVar34 = fVar34 * fVar35;
    }
    if ((*puVar31 < 5) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
                    /* try { // try from 0014dc1c to 0014ddb3 has its CatchHandler @ 0014eb5c */
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar12,0x568,"updateMetaForGainMap",'I',
                         "luma{frame=%.1f,target=%.1f},adrc{cur=%.2f,prev=%.2f},dgain=%.2f",
                         (double)fVar41,(double)fVar38,(double)(float)local_160,(double)fVar40,
                         (double)fVar34);
      if (iVar7 == 0) {
        uVar13 = midebug::Log::miaGroupToString(2);
        uVar14 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                           );
        __android_log_print((double)fVar41,(double)fVar38,(double)(float)local_160,(double)fVar40,
                            (double)fVar34,4,"MiAlgoEngine",
                            "%s %s:%d %s()luma{frame=%.1f,target=%.1f},adrc{cur=%.2f,prev=%.2f},dgain=%.2f"
                            ,uVar13,uVar14,0x568,"updateMetaForGainMap");
      }
    }
    if (((*puVar28 < 5) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      midebug::Log::logSystem
                (2,"I",pcVar12,"updateMetaForGainMap",0x568,
                 "luma{frame=%.1f,target=%.1f},adrc{cur=%.2f,prev=%.2f},dgain=%.2f",(double)fVar41,
                 (double)fVar38,(double)(float)local_160,(double)fVar40,(double)fVar34);
    }
    if (((DAT_00178938 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178938), iVar7 != 0)) {
                    /* try { // try from 0014e764 to 0014e773 has its CatchHandler @ 0014ea54 */
      DAT_00178930 = property_get_int32("persist.vendor.camera.gainmap.debugDgain",0);
      __cxa_guard_release(&DAT_00178938);
    }
    if (DAT_00178930 != 0) {
      iVar7 = property_get_int32("persist.vendor.camera.gainmap.debugDgain",0);
      fVar34 = (float)iVar7 / 100.0;
    }
    if (((DAT_00178948 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_00178948), iVar7 != 0)) {
                    /* try { // try from 0014e798 to 0014e7a7 has its CatchHandler @ 0014ea40 */
      DAT_00178940 = property_get_int32("persist.vendor.camera.gainmap.debugADRCgain",0);
      __cxa_guard_release(&DAT_00178948);
    }
    if (DAT_00178940 != 0) {
      iVar7 = property_get_int32("persist.vendor.camera.gainmap.debugADRCgain",0);
      local_44c = (float)iVar7 / 100.0;
    }
    local_350 = (void *)((ulong)local_350 & 0xffffffff00000000);
    fVar38 = 1.0;
    if (param_2 == (map *)0x0 || 1.0 <= fVar34) {
      fVar38 = fVar34;
      fVar34 = 1.0;
    }
    uVar13 = *(undefined8 *)(*(long *)(*(long *)param_2 + 0x28) + 0x40);
    local_410 = CONCAT44(local_410._4_4_,fVar34);
                    /* try { // try from 0014de00 to 0014e2cb has its CatchHandler @ 0014ec18 */
    iVar7 = MiMetadata::getTagFromName("com.xiaomi.ultraHDR.residualGain",(uint *)&local_350);
    if ((iVar7 != 0) ||
       (iVar7 = MiMetadata::update((uint)uVar13,(float *)((ulong)local_350 & 0xffffffff),
                                   (ulong)&local_410), iVar7 != 0)) {
      if ((*puVar31 < 7) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        iVar7 = midebug::Log::catchLogEncryptLog
                          (2,pcVar12,0x581,"updateMetaForGainMap",'E',"[%s]set residualGain failed",
                           pOVar4);
        if (iVar7 == 0) {
          uVar13 = midebug::Log::miaGroupToString(2);
          uVar14 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                             );
          pOVar4 = this + 0xc1;
          if (((byte)this[0xc0] & 1) != 0) {
            pOVar4 = *(OfflineCamBase **)(this + 0xd0);
          }
          __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()[%s]set residualGain failed",uVar13,
                              uVar14,0x581,"updateMetaForGainMap",pOVar4);
        }
      }
      if ((*puVar28 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) {
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        midebug::Log::logSystem
                  (2,"E",pcVar12,"updateMetaForGainMap",0x581,"[%s]set residualGain failed",pOVar4);
      }
    }
    pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                        ((basic_ostream *)plVar1,"Final(dg=",9);
    pbVar15 = (basic_ostream *)
              std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,fVar38);
    pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                        (pbVar15,",adrc=",6);
    pbVar15 = (basic_ostream *)
              std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,local_44c);
    pbVar15 = std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
                        (pbVar15,",rsdG=",6);
    pbVar15 = (basic_ostream *)
              std::__1::basic_ostream<char,std::__1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__1::char_traits<char>> *)pbVar15,(float)local_410
                        );
    std::__1::__put_character_sequence_abi_ne200000_<char,std::__1::char_traits<char>>
              (pbVar15,");",2);
    if ((*puVar31 < 5) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      pOVar4 = this + 0xc1;
      if (((byte)this[0xc0] & 1) != 0) {
        pOVar4 = *(OfflineCamBase **)(this + 0xd0);
      }
      iVar7 = midebug::Log::catchLogEncryptLog
                        (2,pcVar12,0x588,"updateMetaForGainMap",'I',
                         "%s update AEC: predGain:%.2f->%.2f,adrc:%.2f->%.2f,resGain=%.2f",
                         (double)(float)local_168,(double)fVar38,(double)(float)local_160,
                         (double)local_44c,(double)(float)local_410,pOVar4);
      if (iVar7 == 0) {
        uVar13 = midebug::Log::miaGroupToString(2);
        uVar14 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                           );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        __android_log_print((double)(float)local_168,(double)fVar38,(double)(float)local_160,
                            (double)local_44c,(double)(float)local_410,4,"MiAlgoEngine",
                            "%s %s:%d %s()%s update AEC: predGain:%.2f->%.2f,adrc:%.2f->%.2f,resGain=%.2f"
                            ,uVar13,uVar14,0x588,"updateMetaForGainMap",pOVar4);
      }
    }
    if (((*puVar28 < 5) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00176158 != 0)) {
      pcVar12 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                  );
      pOVar4 = this + 0xc1;
      if (((byte)this[0xc0] & 1) != 0) {
        pOVar4 = *(OfflineCamBase **)(this + 0xd0);
      }
      midebug::Log::logSystem
                (2,"I",pcVar12,"updateMetaForGainMap",0x588,
                 "%s update AEC: predGain:%.2f->%.2f,adrc:%.2f->%.2f,resGain=%.2f",
                 (double)(float)local_168,(double)fVar38,(double)(float)local_160,(double)local_44c,
                 (double)(float)local_410,pOVar4);
    }
    pcVar12 = local_360;
    local_1e0 = CONCAT44(fVar38,(undefined4)local_1e0);
    local_1c0 = CONCAT44(fVar38,(undefined4)local_1c0);
    local_160 = CONCAT44(local_160._4_4_,local_44c);
    local_168 = CONCAT44(local_168._4_4_,fVar38);
    local_1a0 = CONCAT44(fVar38,(undefined4)local_1a0);
    local_350 = (void *)((ulong)local_350 & 0xffffffff00000000);
    iVar7 = MiMetadata::getTagFromName
                      ("com.qti.stats.internal.perFrame.frameControl.AECFrameControl",
                       (uint *)&local_350);
    if ((iVar7 != 0) ||
       (iVar7 = MiMetadata::update((uint)pcVar12,(uchar *)((ulong)local_350 & 0xffffffff),
                                   (ulong)&local_1f0), iVar7 != 0)) {
      if ((*puVar31 < 7) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
        pcVar17 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        iVar7 = midebug::Log::catchLogEncryptLog
                          (2,pcVar17,0x592,"updateMetaForGainMap",'E',
                           "[%s] failed to update AECFrameControl",pOVar4);
        if (iVar7 == 0) {
          uVar13 = midebug::Log::miaGroupToString(2);
          uVar14 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                             );
          pOVar4 = this + 0xc1;
          if (((byte)this[0xc0] & 1) != 0) {
            pOVar4 = *(OfflineCamBase **)(this + 0xd0);
          }
          __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()[%s] failed to update AECFrameControl",
                              uVar13,uVar14,0x592,"updateMetaForGainMap",pOVar4);
        }
      }
      if ((*puVar28 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) {
        pcVar17 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        midebug::Log::logSystem
                  (2,"E",pcVar17,"updateMetaForGainMap",0x592,
                   "[%s] failed to update AECFrameControl",pOVar4);
      }
    }
    local_350 = (void *)((ulong)local_350 & 0xffffffff00000000);
    local_428 = 0x3f800000;
                    /* try { // try from 0014e2d8 to 0014e42b has its CatchHandler @ 0014eb58 */
    iVar7 = MiMetadata::getTagFromName("com.qti.sensorbps.gain",(uint *)&local_350);
    if ((iVar7 != 0) ||
       (iVar7 = MiMetadata::update((uint)pcVar12,(float *)((ulong)local_350 & 0xffffffff),
                                   (ulong)&local_428), iVar7 != 0)) {
      if ((*puVar31 < 7) && (((byte)*PTR_gMiCamLogGroup_00176140 >> 1 & 1) != 0)) {
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        iVar7 = midebug::Log::catchLogEncryptLog
                          (2,pcVar12,0x599,"updateMetaForGainMap",'E',
                           "[%s] failed to update digitGain",pOVar4);
        if (iVar7 == 0) {
          uVar13 = midebug::Log::miaGroupToString(2);
          uVar14 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                             );
          pOVar4 = this + 0xc1;
          if (((byte)this[0xc0] & 1) != 0) {
            pOVar4 = *(OfflineCamBase **)(this + 0xd0);
          }
          __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()[%s] failed to update digitGain",uVar13
                              ,uVar14,0x599,"updateMetaForGainMap",pOVar4);
        }
      }
      if ((*puVar28 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00176150 >> 1 & 1) != 0)) {
        pcVar12 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk-adapter/plugins/offcamplugin/raw2yuv/bayer2yuv/../../base/OfflineCamBase.cpp"
                                    );
        pOVar4 = this + 0xc1;
        if (((byte)this[0xc0] & 1) != 0) {
          pOVar4 = *(OfflineCamBase **)(this + 0xd0);
        }
        midebug::Log::logSystem
                  (2,"E",pcVar12,"updateMetaForGainMap",0x599,"[%s] failed to update digitGain",
                   pOVar4);
      }
    }
    if (((uint)uStack_298 >> 4 & 1) == 0) {
      if (((uint)uStack_298 >> 3 & 1) != 0) {
        ppvVar18 = apvStack_2f0 + 1;
        uVar11 = uStack_2d8;
        goto LAB_0014e47c;
      }
      uVar11 = 0;
      local_328 = (void **)((ulong)local_328._1_7_ << 8);
      pvVar20 = (void *)((ulong)&local_328 | 1);
    }
    else {
      if (local_2a0 < local_2c8) {
        local_2a0 = local_2c8;
      }
      ppvVar18 = &pvStack_2d0;
      uVar11 = local_2a0;
LAB_0014e47c:
      pvVar26 = *ppvVar18;
      uVar11 = uVar11 - (long)pvVar26;
      if (0xfffffffffffffff7 < uVar11) {
        if (*(long *)(lVar6 + 0x28) == local_b8) {
                    /* try { // try from 0014e7d0 to 0014e7d7 has its CatchHandler @ 0014eb34 */
                    /* WARNING: Subroutine does not return */
          std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
          __throw_length_error_abi_ne200000_();
        }
        goto LAB_0014ec48;
      }
      if (uVar11 < 0x17) {
        pvVar20 = (void *)((ulong)&local_328 | 1);
        local_328 = (void **)CONCAT71(local_328._1_7_,(char)((int)uVar11 << 1));
        if (uVar11 == 0) goto LAB_0014e4e4;
      }
      else {
        uVar25 = 0x1a;
        if ((uVar11 | 7) != 0x17) {
          uVar25 = (uVar11 | 7) + 1;
        }
                    /* try { // try from 0014e4bc to 0014e4c3 has its CatchHandler @ 0014eb34 */
        pvVar20 = operator_new(uVar25);
        local_328 = (void **)(uVar25 | 1);
        local_320 = uVar11;
        local_318 = pvVar20;
      }
      memmove(pvVar20,pvVar26,uVar11);
    }
LAB_0014e4e4:
    *(undefined *)((long)pvVar20 + uVar11) = 0;
                    /* try { // try from 0014e4e8 to 0014e4f7 has its CatchHandler @ 0014eafc */
    ppvVar18 = (void **)std::__1::
                        basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
                        append((char *)&local_328);
    local_340 = ppvVar18[2];
    pvStack_348 = ppvVar18[1];
    local_350 = *ppvVar18;
    ppvVar18[1] = (void *)0x0;
    ppvVar18[2] = (void *)0x0;
    *ppvVar18 = (void *)0x0;
                    /* try { // try from 0014e510 to 0014e51b has its CatchHandler @ 0014eadc */
    std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
    append_abi_ne200000_
              ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)param_3,
               (basic_string *)&local_350);
    if (((ulong)local_350 & 1) != 0) {
      operator_delete(local_340,(ulong)local_350 & 0xfffffffffffffffe);
    }
    if (((ulong)local_328 & 1) != 0) {
      operator_delete(local_318,(ulong)local_328 & 0xfffffffffffffffe);
    }
  }
  plVar1 = plStack_358;
  if ((plStack_358 != (long *)0x0) &&
     (lVar21 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_358 + 1), lVar21 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__1::__shared_weak_count::__release_weak();
  }
  local_310[0] = *(long *)PTR_VTT_00176238;
  lVar21 = *(long *)(PTR_VTT_00176238 + 0x48);
  *(undefined8 *)((long)local_310 + *(long *)(local_310[0] + -0x18)) =
       *(undefined8 *)(PTR_VTT_00176238 + 0x40);
  puStack_2f8 = PTR_vtable_001761c0 + 0x10;
  local_310[2] = lVar21;
  if ((uStack_2b8 & 1) != 0) {
    operator_delete(local_2a8,uStack_2b8 & 0xfffffffffffffffe);
  }
  std::__1::basic_streambuf<char,std::__1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__1::char_traits<char>> *)&puStack_2f8);
  std::__1::basic_iostream<char,std::__1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__1::char_traits<char>> *)local_310);
  std::__1::basic_ios<char,std::__1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__1::char_traits<char>> *)&uStack_290);
  if (*(long *)(lVar6 + 0x28) == local_b8) {
    return;
  }
LAB_0014ec48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


