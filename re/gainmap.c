// ===== 0x8bcc processRequest @ 00108bcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GainMapPlugin::processRequest(ProcessRequestInfo*) */

undefined4 __thiscall GainMapPlugin::processRequest(GainMapPlugin *this,ProcessRequestInfo *param_1)

{
  long *plVar1;
  ulong uVar2;
  gainmapOutImgWrapper *pgVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  GainMapPlugin *pGVar15;
  GainMapPlugin *pGVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  undefined4 *puVar19;
  size_t sVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  GainMapPlugin *pGVar24;
  ulong uVar25;
  uint uVar26;
  undefined4 *puVar27;
  long *plVar28;
  void *__dest;
  GainMapPlugin *pGVar29;
  undefined4 *puVar30;
  undefined4 uVar31;
  long *plVar32;
  undefined8 *puVar33;
  int *piVar34;
  long *plVar35;
  undefined8 *puVar36;
  long *this_00;
  undefined8 uVar37;
  undefined8 in_stack_fffffffffffffd70;
  undefined8 in_stack_fffffffffffffd78;
  undefined4 uVar39;
  undefined8 uVar38;
  undefined4 *local_238;
  undefined4 *local_230;
  ulong local_228;
  ulong local_220;
  void *local_218;
  ulong local_210;
  ulong local_208;
  GainMapPlugin *local_200;
  undefined8 local_1f8;
  ulong uStack_1f0;
  GainMapPlugin *local_1e8;
  char *local_1e0;
  long *local_1d8;
  long *local_1d0;
  long *plStack_1c8;
  long *local_1c0;
  long *local_1b8;
  long *local_1b0;
  long *plStack_1a8;
  long *local_1a0;
  long *plStack_198;
  long *local_190;
  long *local_188;
  long *local_180;
  long *local_178;
  long *local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  char *local_130;
  long *plStack_128;
  undefined8 local_120;
  ulong uStack_118;
  GainMapPlugin *local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  iVar6 = DAT_00118078;
  uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
  uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  puVar33 = (undefined8 *)(param_1 + 8);
  puVar36 = *(undefined8 **)param_1;
  local_130 = (char *)0x0;
  plStack_128 = (long *)0x0;
  if (puVar36 == puVar33) {
    puVar30 = (undefined4 *)0x0;
    iVar9 = 0;
    puVar27 = (undefined4 *)0x0;
    local_238 = (undefined4 *)0x0;
    local_230 = (undefined4 *)0x0;
  }
  else {
    puVar27 = (undefined4 *)0x0;
    iVar9 = 0;
    puVar30 = (undefined4 *)0x0;
    local_238 = (undefined4 *)0x0;
    local_230 = (undefined4 *)0x0;
    do {
      iVar8 = *(int *)(puVar36 + 4);
      if (iVar8 < 2) {
        if (iVar8 == 0) {
          puVar17 = puVar33;
          for (puVar21 = (undefined8 *)*puVar33; puVar21 != (undefined8 *)0x0;
              puVar21 = (undefined8 *)*puVar21) {
            if (*(int *)(puVar21 + 4) == 0) goto LAB_00108ebc;
            puVar17 = puVar21;
          }
                    /* try { // try from 00108dc8 to 00108dcf has its CatchHandler @ 0010a9a4 */
          puVar21 = (undefined8 *)operator_new(0x40);
          *(undefined4 *)(puVar21 + 4) = 0;
          puVar21[6] = 0;
          puVar21[7] = 0;
          puVar21[5] = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[2] = puVar17;
          *puVar17 = puVar21;
          puVar18 = puVar21;
          if (**(long **)param_1 != 0) {
            *(long *)param_1 = **(long **)param_1;
            puVar18 = (undefined8 *)*puVar17;
          }
          std::__1::__tree_balance_after_insert_abi_ne200000_<std::__1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_1 + 8),(__tree_node_base *)puVar18);
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
LAB_00108ebc:
          uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
          uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
          puVar27 = (undefined4 *)puVar21[5];
          if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 5) &&
             (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
                    /* try { // try from 00108ee4 to 0010941f has its CatchHandler @ 0010a9ec */
            pcVar11 = (char *)midebug::Log::getFileName
                                        (
                                        "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                        );
            in_stack_fffffffffffffd78 = CONCAT44(uVar39,puVar27[0xf]);
            in_stack_fffffffffffffd70 = CONCAT44(uVar31,puVar27[0xe]);
            iVar8 = midebug::Log::catchLogEncryptLog
                              (2,pcVar11,0xe8,"processRequest",'I',"input SDR:{%dx%d(%dx%d),fmt=%d}"
                               ,(ulong)(uint)puVar27[1],(ulong)(uint)puVar27[2],
                               in_stack_fffffffffffffd70,in_stack_fffffffffffffd78,*puVar27);
            uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
            uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
            if (iVar8 == 0) {
              uVar12 = midebug::Log::miaGroupToString(2);
              uVar13 = midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                 );
              in_stack_fffffffffffffd78 = CONCAT44(uVar39,puVar27[0xe]);
              in_stack_fffffffffffffd70 = CONCAT44(uVar31,puVar27[2]);
              __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()input SDR:{%dx%d(%dx%d),fmt=%d}",
                                  uVar12,uVar13,0xe8,"processRequest",puVar27[1],
                                  in_stack_fffffffffffffd70,in_stack_fffffffffffffd78,puVar27[0xf],
                                  *puVar27);
            }
          }
          uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
          uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
          if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
              (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
             (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
            pcVar11 = (char *)midebug::Log::getFileName
                                        (
                                        "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                        );
            in_stack_fffffffffffffd78 = CONCAT44(uVar39,puVar27[0xf]);
            in_stack_fffffffffffffd70 = CONCAT44(uVar31,puVar27[0xe]);
            midebug::Log::logSystem
                      (2,"I",pcVar11,"processRequest",0xe8,"input SDR:{%dx%d(%dx%d),fmt=%d}",
                       (ulong)(uint)puVar27[1],(ulong)(uint)puVar27[2],in_stack_fffffffffffffd70,
                       in_stack_fffffffffffffd78,*puVar27);
          }
        }
        else if (iVar8 == 1) {
          puVar21 = (undefined8 *)*puVar33;
          puVar17 = puVar33;
          while (puVar18 = puVar17, puVar21 != (undefined8 *)0x0) {
            while (puVar10 = puVar21, puVar17 = puVar10, *(uint *)(puVar10 + 4) < 2) {
              if (*(uint *)(puVar10 + 4) != 0) goto LAB_0010900c;
              puVar21 = (undefined8 *)puVar10[1];
              if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
                puVar18 = puVar10 + 1;
                goto LAB_00108ca4;
              }
            }
            puVar21 = (undefined8 *)*puVar10;
          }
LAB_00108ca4:
                    /* try { // try from 00108ca4 to 00108cab has its CatchHandler @ 0010a9ac */
          puVar10 = (undefined8 *)operator_new(0x40);
          puVar10[6] = 0;
          puVar10[7] = 0;
          *(undefined4 *)(puVar10 + 4) = 1;
          puVar10[5] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = puVar17;
          *puVar18 = puVar10;
          puVar17 = puVar10;
          if (**(long **)param_1 != 0) {
            *(long *)param_1 = **(long **)param_1;
            puVar17 = (undefined8 *)*puVar18;
          }
          std::__1::__tree_balance_after_insert_abi_ne200000_<std::__1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_1 + 8),(__tree_node_base *)puVar17);
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
LAB_0010900c:
          uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
          uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
          local_238 = (undefined4 *)puVar10[5];
          if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 5) &&
             (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
            pcVar11 = (char *)midebug::Log::getFileName
                                        (
                                        "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                        );
            in_stack_fffffffffffffd78 = CONCAT44(uVar39,local_238[0xf]);
            in_stack_fffffffffffffd70 = CONCAT44(uVar31,local_238[0xe]);
            iVar8 = midebug::Log::catchLogEncryptLog
                              (2,pcVar11,0xee,"processRequest",'I',"input HDR:{%dx%d(%dx%d),fmt=%d}"
                               ,(ulong)(uint)local_238[1],(ulong)(uint)local_238[2],
                               in_stack_fffffffffffffd70,in_stack_fffffffffffffd78,*local_238);
            uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
            uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
            if (iVar8 == 0) {
              uVar12 = midebug::Log::miaGroupToString(2);
              uVar13 = midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                 );
              in_stack_fffffffffffffd78 = CONCAT44(uVar39,local_238[0xe]);
              in_stack_fffffffffffffd70 = CONCAT44(uVar31,local_238[2]);
              __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()input HDR:{%dx%d(%dx%d),fmt=%d}",
                                  uVar12,uVar13,0xee,"processRequest",local_238[1],
                                  in_stack_fffffffffffffd70,in_stack_fffffffffffffd78,local_238[0xf]
                                  ,*local_238);
            }
          }
          uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
          uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
          iVar9 = iVar9 + 1;
          if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
              (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
             (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
            pcVar11 = (char *)midebug::Log::getFileName
                                        (
                                        "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                        );
            in_stack_fffffffffffffd78 = CONCAT44(uVar39,local_238[0xf]);
            in_stack_fffffffffffffd70 = CONCAT44(uVar31,local_238[0xe]);
            midebug::Log::logSystem
                      (2,"I",pcVar11,"processRequest",0xee,"input HDR:{%dx%d(%dx%d),fmt=%d}",
                       (ulong)(uint)local_238[1],(ulong)(uint)local_238[2],in_stack_fffffffffffffd70
                       ,in_stack_fffffffffffffd78,*local_238);
          }
        }
      }
      else if (iVar8 == 2) {
        puVar21 = (undefined8 *)*puVar33;
        puVar17 = puVar33;
        while (puVar18 = puVar17, puVar21 != (undefined8 *)0x0) {
          while (puVar17 = puVar21, *(uint *)(puVar17 + 4) < 3) {
            if (*(uint *)(puVar17 + 4) == 2) goto LAB_001092d4;
            puVar21 = (undefined8 *)puVar17[1];
            if ((undefined8 *)puVar17[1] == (undefined8 *)0x0) {
              puVar18 = puVar17 + 1;
              goto LAB_00108e60;
            }
          }
          puVar21 = (undefined8 *)*puVar17;
        }
LAB_00108e60:
                    /* try { // try from 00108e60 to 00108e67 has its CatchHandler @ 0010a9b0 */
        puVar21 = (undefined8 *)operator_new(0x40);
        puVar21[6] = 0;
        puVar21[7] = 0;
        *(undefined4 *)(puVar21 + 4) = 2;
        puVar21[5] = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21[2] = puVar17;
        *puVar18 = puVar21;
        puVar17 = puVar21;
        if (**(long **)param_1 != 0) {
          *(long *)param_1 = **(long **)param_1;
          puVar17 = (undefined8 *)*puVar18;
        }
        std::__1::__tree_balance_after_insert_abi_ne200000_<std::__1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_1 + 8),(__tree_node_base *)puVar17);
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        puVar17 = puVar21;
LAB_001092d4:
        uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
        uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
        puVar30 = (undefined4 *)puVar17[5];
        if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 5) &&
           (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
          pcVar11 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                      );
          in_stack_fffffffffffffd78 = CONCAT44(uVar39,puVar30[0xf]);
          in_stack_fffffffffffffd70 = CONCAT44(uVar31,puVar30[0xe]);
          iVar8 = midebug::Log::catchLogEncryptLog
                            (2,pcVar11,0xf5,"processRequest",'I',
                             "input LinearYUV:{%dx%d(%dx%d),fmt=%d}",(ulong)(uint)puVar30[1],
                             (ulong)(uint)puVar30[2],in_stack_fffffffffffffd70,
                             in_stack_fffffffffffffd78,*puVar30);
          uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
          uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
          if (iVar8 == 0) {
            uVar12 = midebug::Log::miaGroupToString(2);
            uVar13 = midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
            in_stack_fffffffffffffd78 = CONCAT44(uVar39,puVar30[0xe]);
            in_stack_fffffffffffffd70 = CONCAT44(uVar31,puVar30[2]);
            __android_log_print(4,"MiAlgoEngine",
                                "%s %s:%d %s()input LinearYUV:{%dx%d(%dx%d),fmt=%d}",uVar12,uVar13,
                                0xf5,"processRequest",puVar30[1],in_stack_fffffffffffffd70,
                                in_stack_fffffffffffffd78,puVar30[0xf],*puVar30);
          }
        }
        uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
        uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
        iVar9 = iVar9 + 1;
        if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
            (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
           (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
          pcVar11 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                      );
          in_stack_fffffffffffffd78 = CONCAT44(uVar39,puVar30[0xf]);
          in_stack_fffffffffffffd70 = CONCAT44(uVar31,puVar30[0xe]);
          midebug::Log::logSystem
                    (2,"I",pcVar11,"processRequest",0xf5,"input LinearYUV:{%dx%d(%dx%d),fmt=%d}",
                     (ulong)(uint)puVar30[1],(ulong)(uint)puVar30[2],in_stack_fffffffffffffd70,
                     in_stack_fffffffffffffd78,*puVar30);
        }
      }
      else if (iVar8 == 3) {
        puVar21 = (undefined8 *)*puVar33;
        puVar17 = puVar33;
        while (puVar18 = puVar17, puVar21 != (undefined8 *)0x0) {
          while (puVar17 = puVar21, *(uint *)(puVar17 + 4) < 4) {
            if (*(uint *)(puVar17 + 4) == 3) goto LAB_00109170;
            puVar21 = (undefined8 *)puVar17[1];
            if ((undefined8 *)puVar17[1] == (undefined8 *)0x0) {
              puVar18 = puVar17 + 1;
              goto LAB_00108d50;
            }
          }
          puVar21 = (undefined8 *)*puVar17;
        }
LAB_00108d50:
                    /* try { // try from 00108d50 to 00108d57 has its CatchHandler @ 0010a9a8 */
        puVar21 = (undefined8 *)operator_new(0x40);
        puVar21[6] = 0;
        puVar21[7] = 0;
        *(undefined4 *)(puVar21 + 4) = 3;
        puVar21[5] = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21[2] = puVar17;
        *puVar18 = puVar21;
        puVar17 = puVar21;
        if (**(long **)param_1 != 0) {
          *(long *)param_1 = **(long **)param_1;
          puVar17 = (undefined8 *)*puVar18;
        }
        std::__1::__tree_balance_after_insert_abi_ne200000_<std::__1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_1 + 8),(__tree_node_base *)puVar17);
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        puVar17 = puVar21;
LAB_00109170:
        uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
        uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
        local_230 = (undefined4 *)puVar17[5];
        if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 5) &&
           (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
          pcVar11 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                      );
          in_stack_fffffffffffffd78 = CONCAT44(uVar39,local_230[0xf]);
          in_stack_fffffffffffffd70 = CONCAT44(uVar31,local_230[0xe]);
          iVar8 = midebug::Log::catchLogEncryptLog
                            (2,pcVar11,0xfb,"processRequest",'I',"input RAW:{%dx%d(%dx%d),fmt=%d}",
                             (ulong)(uint)local_230[1],(ulong)(uint)local_230[2],
                             in_stack_fffffffffffffd70,in_stack_fffffffffffffd78,*local_230);
          uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
          uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
          if (iVar8 == 0) {
            uVar12 = midebug::Log::miaGroupToString(2);
            uVar13 = midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
            in_stack_fffffffffffffd78 = CONCAT44(uVar39,local_230[0xe]);
            in_stack_fffffffffffffd70 = CONCAT44(uVar31,local_230[2]);
            __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()input RAW:{%dx%d(%dx%d),fmt=%d}",
                                uVar12,uVar13,0xfb,"processRequest",local_230[1],
                                in_stack_fffffffffffffd70,in_stack_fffffffffffffd78,local_230[0xf],
                                *local_230);
          }
        }
        uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
        uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
        iVar9 = iVar9 + 1;
        if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
            (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
           (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
          pcVar11 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                      );
          in_stack_fffffffffffffd78 = CONCAT44(uVar39,local_230[0xf]);
          in_stack_fffffffffffffd70 = CONCAT44(uVar31,local_230[0xe]);
          midebug::Log::logSystem
                    (2,"I",pcVar11,"processRequest",0xfb,"input RAW:{%dx%d(%dx%d),fmt=%d}",
                     (ulong)(uint)local_230[1],(ulong)(uint)local_230[2],in_stack_fffffffffffffd70,
                     in_stack_fffffffffffffd78,*local_230);
        }
      }
      uVar31 = (undefined4)((ulong)in_stack_fffffffffffffd70 >> 0x20);
      uVar39 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
      puVar17 = (undefined8 *)puVar36[1];
      puVar21 = puVar36;
      if ((undefined8 *)puVar36[1] == (undefined8 *)0x0) {
        do {
          puVar36 = (undefined8 *)puVar21[2];
          bVar7 = puVar21 != (undefined8 *)*puVar36;
          puVar21 = puVar36;
        } while (bVar7);
      }
      else {
        do {
          puVar36 = puVar17;
          puVar17 = (undefined8 *)*puVar36;
        } while ((undefined8 *)*puVar36 != (undefined8 *)0x0);
      }
    } while (puVar36 != puVar33);
  }
  puVar36 = (undefined8 *)(param_1 + 0x20);
  for (puVar33 = *(undefined8 **)(param_1 + 0x20); puVar33 != (undefined8 *)0x0;
      puVar33 = (undefined8 *)*puVar33) {
    if (*(int *)(puVar33 + 4) == 0) goto LAB_001094d8;
    puVar36 = puVar33;
  }
                    /* try { // try from 00109480 to 00109487 has its CatchHandler @ 0010a94c */
  puVar33 = (undefined8 *)operator_new(0x40);
  *(undefined4 *)(puVar33 + 4) = 0;
  puVar33[6] = 0;
  puVar33[7] = 0;
  puVar33[5] = 0;
  *puVar33 = 0;
  puVar33[1] = 0;
  puVar33[2] = puVar36;
  *puVar36 = puVar33;
  puVar17 = puVar33;
  if (**(long **)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
    puVar17 = (undefined8 *)*puVar36;
  }
  std::__1::__tree_balance_after_insert_abi_ne200000_<std::__1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(param_1 + 0x20),(__tree_node_base *)puVar17);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
LAB_001094d8:
  piVar34 = (int *)puVar33[5];
  if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 5) &&
     (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
                    /* try { // try from 00109500 to 0010962b has its CatchHandler @ 0010a978 */
    pcVar11 = (char *)midebug::Log::getFileName
                                (
                                "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                );
    uVar13 = CONCAT44(uVar39,piVar34[0xf]);
    uVar12 = CONCAT44(uVar31,piVar34[0xe]);
    iVar8 = midebug::Log::catchLogEncryptLog
                      (2,pcVar11,0x102,"processRequest",'I',"OUT:{%dx%d(%dx%d),fmt=%d}",
                       (ulong)(uint)piVar34[1],(ulong)(uint)piVar34[2],uVar12,uVar13,*piVar34);
    uVar31 = (undefined4)((ulong)uVar12 >> 0x20);
    uVar39 = (undefined4)((ulong)uVar13 >> 0x20);
    if (iVar8 == 0) {
      uVar12 = midebug::Log::miaGroupToString(2);
      uVar13 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                         );
      uVar38 = CONCAT44(uVar39,piVar34[0xe]);
      uVar37 = CONCAT44(uVar31,piVar34[2]);
      __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()OUT:{%dx%d(%dx%d),fmt=%d}",uVar12,uVar13,
                          0x102,"processRequest",piVar34[1],uVar37,uVar38,piVar34[0xf],*piVar34);
      uVar31 = (undefined4)((ulong)uVar37 >> 0x20);
      uVar39 = (undefined4)((ulong)uVar38 >> 0x20);
    }
  }
  if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
      (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
     (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
    pcVar11 = (char *)midebug::Log::getFileName
                                (
                                "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                );
    midebug::Log::logSystem
              (2,"I",pcVar11,"processRequest",0x102,"OUT:{%dx%d(%dx%d),fmt=%d}",
               (ulong)(uint)piVar34[1],(ulong)(uint)piVar34[2],CONCAT44(uVar31,piVar34[0xe]),
               CONCAT44(uVar39,piVar34[0xf]),*piVar34);
  }
  if ((*piVar34 == 0x21) && ((uint)piVar34[6] < (uint)(piVar34[2] * piVar34[1]))) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_140 = (long *)0x0;
  local_138 = (long *)0x0;
  local_150 = (long *)0x0;
  local_148 = (long *)0x0;
  local_160 = (long *)0x0;
  local_158 = (long *)0x0;
  local_170 = (long *)0x0;
  local_168 = (long *)0x0;
  local_180 = (long *)0x0;
  local_178 = (long *)0x0;
  local_190 = (long *)0x0;
  local_188 = (long *)0x0;
                    /* try { // try from 00109664 to 0010966b has its CatchHandler @ 0010a970 */
  plVar14 = (long *)operator_new(0x180);
  puVar5 = PTR_vtable_00114b80;
  plVar1 = plVar14 + 3;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)(puVar5 + 0x10);
                    /* try { // try from 00109688 to 00109697 has its CatchHandler @ 0010a954 */
  pGVar15 = (GainMapPlugin *)
            gainmapOutImgWrapper::gainmapOutImgWrapper
                      ((gainmapOutImgWrapper *)plVar1,(ImageParams *)piVar34,false);
  local_170 = plVar1;
  local_168 = plVar14;
  if ((_DAT_0011807c >> 8 & 1) == 0) {
    plVar35 = (long *)0x0;
    this_00 = (long *)0x0;
    plVar28 = (long *)0x0;
    plVar32 = (long *)0x0;
    uVar26 = _DAT_0011807c;
  }
  else {
                    /* try { // try from 001096c0 to 001096c7 has its CatchHandler @ 0010a8f8 */
    plVar28 = (long *)operator_new(0x180);
    plVar32 = plVar28 + 3;
    plVar28[1] = 0;
    plVar28[2] = 0;
    *plVar28 = (long)(puVar5 + 0x10);
                    /* try { // try from 001096dc to 001096eb has its CatchHandler @ 0010a8e4 */
    gainmapOutImgWrapper::gainmapOutImgWrapper
              ((gainmapOutImgWrapper *)plVar32,(ImageParams *)piVar34,true);
    local_180 = plVar32;
    local_178 = plVar28;
                    /* try { // try from 001096f0 to 001096f7 has its CatchHandler @ 0010a8e0 */
    plVar35 = (long *)operator_new(0x180);
    this_00 = plVar35 + 3;
    plVar35[1] = 0;
    plVar35[2] = 0;
    *plVar35 = (long)(puVar5 + 0x10);
                    /* try { // try from 0010970c to 0010971b has its CatchHandler @ 0010a8cc */
    pGVar15 = (GainMapPlugin *)
              gainmapOutImgWrapper::gainmapOutImgWrapper
                        ((gainmapOutImgWrapper *)this_00,(ImageParams *)piVar34,true);
    uVar26 = _DAT_0011807c & 0xff;
    local_190 = this_00;
    local_188 = plVar35;
  }
  uVar26 = uVar26 & 0xff;
  if ((puVar27 == (undefined4 *)0x0 || local_238 == (undefined4 *)0x0) ||
     ((iVar9 != 1 && (uVar26 != 1)))) {
    if ((puVar30 != (undefined4 *)0x0) && ((iVar9 == 1 || (uVar26 == 2)))) {
      if (plVar28 != (long *)0x0) {
        __aarch64_ldadd8_relax(1,plVar28 + 1);
      }
      local_150 = plVar32;
      local_148 = plVar28;
      pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_relax(1,plVar14 + 1);
      local_160 = plVar1;
      local_158 = plVar14;
      if (plVar35 != (long *)0x0) {
        pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_relax(1,plVar35 + 1);
      }
      lVar22 = *(long *)(puVar30 + 0x12);
      plVar32 = *(long **)(puVar30 + 0x12);
      pcVar11 = *(char **)(puVar30 + 0x10);
      plVar28 = plStack_128;
      goto joined_r0x00109960;
    }
    if ((local_230 != (undefined4 *)0x0) && ((iVar9 == 1 || (uVar26 == 3)))) {
      if (plVar28 != (long *)0x0) {
        __aarch64_ldadd8_relax(1,plVar28 + 1);
      }
      local_150 = plVar32;
      local_148 = plVar28;
      if (plVar35 != (long *)0x0) {
        __aarch64_ldadd8_relax(1,plVar35 + 1);
      }
      local_160 = this_00;
      local_158 = plVar35;
      pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_relax(1,plVar14 + 1);
      plVar32 = *(long **)(local_230 + 0x12);
      pcVar11 = *(char **)(local_230 + 0x10);
      plVar28 = plStack_128;
      local_140 = plVar1;
      local_138 = plVar14;
      if (*(long *)(local_230 + 0x12) != 0) {
        pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_relax(1,*(long *)(local_230 + 0x12) + 8);
        plVar28 = plStack_128;
      }
      goto LAB_001099cc;
    }
    if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 7) &&
       (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
                    /* try { // try from 001097b0 to 0010989f has its CatchHandler @ 0010a9b4 */
      pcVar11 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                  );
      pGVar15 = (GainMapPlugin *)
                midebug::Log::catchLogEncryptLog
                          (2,pcVar11,0x124,"processRequest",'E',"invalid input: %p/%p/%p",puVar27,
                           local_238,local_230);
      if ((int)pGVar15 == 0) {
        uVar12 = midebug::Log::miaGroupToString(2);
        uVar13 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                           );
        pGVar15 = (GainMapPlugin *)
                  __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()invalid input: %p/%p/%p",uVar12
                                      ,uVar13,0x124,"processRequest",puVar27,local_238,local_230);
      }
    }
    if ((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 7) &&
       (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) {
      pcVar11 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                  );
      pGVar15 = (GainMapPlugin *)
                midebug::Log::logSystem
                          (2,"E",pcVar11,"processRequest",0x124,"invalid input: %p/%p/%p",puVar27,
                           local_238,local_230);
    }
    bVar7 = false;
    uVar31 = 1;
    plVar1 = local_150;
  }
  else {
    pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_relax(1,plVar14 + 1);
    local_150 = plVar1;
    local_148 = plVar14;
    if (plVar28 != (long *)0x0) {
      pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_relax(1,plVar28 + 1);
    }
    local_160 = plVar32;
    local_158 = plVar28;
    if (plVar35 != (long *)0x0) {
      pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_relax(1,plVar35 + 1);
    }
    lVar22 = *(long *)(puVar27 + 0x12);
    plVar32 = *(long **)(puVar27 + 0x12);
    pcVar11 = *(char **)(puVar27 + 0x10);
    plVar28 = plStack_128;
joined_r0x00109960:
    local_140 = this_00;
    local_138 = plVar35;
    if (lVar22 != 0) {
      plStack_128 = plVar28;
      pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_relax(1,lVar22 + 8);
      plVar28 = plStack_128;
    }
LAB_001099cc:
    local_130 = pcVar11;
    plStack_128 = plVar32;
    if ((plVar28 != (long *)0x0) &&
       (pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar28 + 1),
       pGVar15 == (GainMapPlugin *)0x0)) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
      pGVar15 = (GainMapPlugin *)std::__1::__shared_weak_count::__release_weak();
    }
    uVar31 = 0;
    bVar7 = true;
    plVar1 = local_150;
  }
  local_150 = plVar1;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 00109a10 to 00109a23 has its CatchHandler @ 0010a9b4 */
    pGVar15 = (GainMapPlugin *)
              std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
              __assign_external((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>
                                 *)(plVar1 + 0x29),"gainmap_out_HDR_div_SDR",0x17);
  }
  plVar14 = local_148;
  if (local_160 != (long *)0x0) {
    if (((byte)*(gainmapOutImgWrapper *)(local_160 + 0x29) & 1) == 0) {
      *(gainmapOutImgWrapper *)(local_160 + 0x29) = (gainmapOutImgWrapper)0x2a;
      puVar36 = (undefined8 *)((long)local_160 + 0x149);
    }
    else {
      puVar36 = (undefined8 *)local_160[0x2b];
      local_160[0x2a] = 0x15;
    }
    *(gainmapOutImgWrapper *)((long)puVar36 + 0x15) = (gainmapOutImgWrapper)0x0;
    uVar13 = s_gainmap_out_linearYuv_00103ec8._0_8_;
    uVar12 = CONCAT53(s_gainmap_out_linearYuv_00103ec8._16_5_,
                      s_gainmap_out_linearYuv_00103ec8._13_3_);
    puVar36[1] = CONCAT35(s_gainmap_out_linearYuv_00103ec8._13_3_,
                          s_gainmap_out_linearYuv_00103ec8._8_5_);
    *puVar36 = uVar13;
    *(undefined8 *)((long)puVar36 + 0xd) = uVar12;
  }
  if (local_140 != (long *)0x0) {
    if (((byte)*(gainmapOutImgWrapper *)(local_140 + 0x29) & 1) == 0) {
      *(gainmapOutImgWrapper *)(local_140 + 0x29) = (gainmapOutImgWrapper)0x1e;
      puVar36 = (undefined8 *)((long)local_140 + 0x149);
    }
    else {
      puVar36 = (undefined8 *)local_140[0x2b];
      local_140[0x2a] = 0xf;
    }
    *(gainmapOutImgWrapper *)((long)puVar36 + 0xf) = (gainmapOutImgWrapper)0x0;
    uVar12 = CONCAT71(s_gainmap_out_Raw_00104357._8_7_,s_gainmap_out_Raw_00104357[7]);
    *puVar36 = CONCAT17(s_gainmap_out_Raw_00104357[7],s_gainmap_out_Raw_00104357._0_7_);
    *(undefined8 *)((long)puVar36 + 7) = uVar12;
  }
  if (((puVar27 == (undefined4 *)0x0) || ((_DAT_0011807c >> 9 & 1) == 0)) ||
     (puVar30 == (undefined4 *)0x0)) {
    if (plVar1 != (long *)0x0 && (puVar27 != (undefined4 *)0x0 && local_238 != (undefined4 *)0x0)) {
      plStack_1a8 = local_148;
      local_1b0 = plVar1;
      if (local_148 != (long *)0x0) {
        __aarch64_ldadd8_relax(1,local_148 + 1);
      }
                    /* try { // try from 00109b54 to 00109b67 has its CatchHandler @ 0010a894 */
      pGVar15 = (GainMapPlugin *)
                generateGainMap(this,(ImageParams *)local_238,(ImageParams *)puVar27,
                                (shared_ptr)&local_1b0);
      if ((plVar14 != (long *)0x0) &&
         (pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar14 + 1),
         pGVar15 == (GainMapPlugin *)0x0)) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        pGVar15 = (GainMapPlugin *)std::__1::__shared_weak_count::__release_weak();
      }
    }
    if (puVar30 != (undefined4 *)0x0) goto LAB_00109b80;
  }
  else {
    if (plVar1 != (long *)0x0) {
      plStack_198 = local_148;
      local_1a0 = plVar1;
      if (local_148 != (long *)0x0) {
        __aarch64_ldadd8_relax(1,local_148 + 1);
      }
                    /* try { // try from 00109ae4 to 00109af7 has its CatchHandler @ 0010a8a4 */
      pGVar15 = (GainMapPlugin *)
                generateGainMap(this,(ImageParams *)puVar30,(ImageParams *)puVar27,
                                (shared_ptr)&local_1a0);
      if ((plVar14 != (long *)0x0) &&
         (pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar14 + 1),
         pGVar15 == (GainMapPlugin *)0x0)) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        pGVar15 = (GainMapPlugin *)std::__1::__shared_weak_count::__release_weak();
      }
    }
LAB_00109b80:
    if (local_160 != (long *)0x0) {
      local_1c0 = local_160;
      local_1b8 = local_158;
      if (local_158 != (long *)0x0) {
        __aarch64_ldadd8_relax(1,local_158 + 1);
      }
                    /* try { // try from 00109ba0 to 00109baf has its CatchHandler @ 0010a8fc */
      pGVar15 = (GainMapPlugin *)
                processLinearYuvInput(this,(ImageParams *)puVar30,(shared_ptr)&local_1c0);
      plVar1 = local_1b8;
      if ((local_1b8 != (long *)0x0) &&
         (pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_1b8 + 1),
         pGVar15 == (GainMapPlugin *)0x0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        pGVar15 = (GainMapPlugin *)std::__1::__shared_weak_count::__release_weak();
      }
    }
  }
  plVar14 = local_138;
  plVar1 = local_170;
  if ((local_230 != (undefined4 *)0x0) && (local_140 != (long *)0x0)) {
    local_1d0 = local_140;
    plStack_1c8 = local_138;
    if (local_138 != (long *)0x0) {
      __aarch64_ldadd8_relax(1,local_138 + 1);
    }
                    /* try { // try from 00109c04 to 00109c13 has its CatchHandler @ 0010a8bc */
    pGVar15 = (GainMapPlugin *)processRawInput((ImageParams *)this,(shared_ptr)local_230);
    plVar1 = local_170;
    if ((plVar14 != (long *)0x0) &&
       (pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar14 + 1),
       plVar1 = local_170, pGVar15 == (GainMapPlugin *)0x0)) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      pGVar15 = (GainMapPlugin *)std::__1::__shared_weak_count::__release_weak();
      plVar1 = local_170;
    }
  }
  local_170 = plVar1;
  if (bVar7) {
    local_120._4_4_ = (uint)(local_120 >> 0x20);
    fStack_d8 = 0.0;
    fStack_d4 = 0.0;
    local_e0 = 0;
    fStack_dc = 0.0;
    fStack_c8 = 0.0;
    local_c4 = 0.0;
    fStack_d0 = 0.0;
    local_cc = 0.0;
    pgVar3 = (gainmapOutImgWrapper *)((long)plVar1 + 0x111);
    if (((byte)*(gainmapOutImgWrapper *)(plVar1 + 0x22) & 1) != 0) {
      pgVar3 = (gainmapOutImgWrapper *)plVar1[0x24];
    }
    __strcpy_chk(&local_e0,pgVar3,4);
    local_c4 = *(float *)(plVar1 + 0x28);
    local_cc = (float)plVar1[0x27];
    fStack_c8 = (float)((ulong)plVar1[0x27] >> 0x20);
    fStack_d4 = (float)plVar1[0x26];
    fStack_d0 = (float)((ulong)plVar1[0x26] >> 0x20);
    fStack_dc = (float)plVar1[0x25];
    fStack_d8 = (float)((ulong)plVar1[0x25] >> 0x20);
    if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 5) &&
       (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
                    /* try { // try from 00109c98 to 00109e07 has its CatchHandler @ 0010a948 */
      pcVar11 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                  );
      iVar9 = midebug::Log::catchLogEncryptLog
                        (2,pcVar11,0x14b,"processRequest",'I',
                         "metadata{ver=%s,boost=%f/%f,gamma=%f,offset=%f/%f,hdrCap=%f/%f}",
                         (double)fStack_dc,(double)fStack_d8,(double)fStack_d4,(double)fStack_d0,
                         (double)local_cc,(double)fStack_c8,(double)local_c4,&local_e0);
      if (iVar9 == 0) {
        uVar12 = midebug::Log::miaGroupToString(2);
        uVar13 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                           );
        __android_log_print((double)fStack_dc,(double)fStack_d8,(double)fStack_d4,(double)fStack_d0,
                            (double)local_cc,(double)fStack_c8,(double)local_c4,4,"MiAlgoEngine",
                            "%s %s:%d %s()metadata{ver=%s,boost=%f/%f,gamma=%f,offset=%f/%f,hdrCap=%f/%f}"
                            ,uVar12,uVar13,0x14b,"processRequest",&local_e0);
      }
    }
    if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
        (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
       (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
      pcVar11 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                  );
      midebug::Log::logSystem
                (2,"I",pcVar11,"processRequest",0x14b,
                 "metadata{ver=%s,boost=%f/%f,gamma=%f,offset=%f/%f,hdrCap=%f/%f}",(double)fStack_dc
                 ,(double)fStack_d8,(double)fStack_d4,(double)fStack_d0,(double)local_cc,
                 (double)fStack_c8,(double)local_c4,&local_e0);
    }
    local_120 = (ulong)local_120._4_4_ << 0x20;
    uVar12 = *(undefined8 *)(piVar34 + 0x10);
                    /* try { // try from 00109e14 to 00109f33 has its CatchHandler @ 0010a974 */
    iVar9 = MiMetadata::getTagFromName("com.xiaomi.ultraHDR.metadata",(uint *)&local_120);
    if ((iVar9 != 0) ||
       (iVar9 = MiMetadata::update((uint)uVar12,(uchar *)(local_120 & 0xffffffff),(ulong)&local_e0),
       iVar9 != 0)) {
      if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 7) &&
         (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
        pcVar11 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        iVar9 = midebug::Log::catchLogEncryptLog
                          (2,pcVar11,0x151,"processRequest",'E',
                           "can\'t update ultrahdr metadata tag!");
        if (iVar9 == 0) {
          uVar12 = midebug::Log::miaGroupToString(2);
          uVar13 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                             );
          __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()can\'t update ultrahdr metadata tag!",
                              uVar12,uVar13,0x151,"processRequest");
        }
      }
      if ((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 7) &&
         (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) {
        pcVar11 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        midebug::Log::logSystem
                  (2,"E",pcVar11,"processRequest",0x151,"can\'t update ultrahdr metadata tag!");
      }
    }
    uStack_118 = 0;
    local_120 = 0;
    local_108 = 0;
    local_110 = (GainMapPlugin *)0x0;
                    /* try { // try from 00109f40 to 00109f93 has its CatchHandler @ 0010a950 */
    pGVar15 = (GainMapPlugin *)MiMetadata::find(local_130);
    uVar2 = local_108;
    if (local_110 != (GainMapPlugin *)0x0) {
      local_1f8 = local_1f8 & 0xffffffff00000000;
      uVar12 = *(undefined8 *)(piVar34 + 0x10);
      pGVar15 = (GainMapPlugin *)
                MiMetadata::getTagFromName("com.xiaomi.ultraHDR.residualGain",(uint *)&local_1f8);
      if ((int)pGVar15 == 0) {
        pGVar15 = (GainMapPlugin *)
                  MiMetadata::update((uint)uVar12,(float *)(local_1f8 & 0xffffffff),uVar2);
      }
    }
  }
  if (iVar6 != 0) {
    lVar22 = *(long *)this;
    if (puVar27 != (undefined4 *)0x0) {
      fStack_d8 = 0.0;
      fStack_d4 = 0.0;
      local_e0 = 0;
      fStack_dc = 0.0;
      fStack_c8 = 0.0;
      local_c4 = 0.0;
      fStack_d0 = 0.0;
      local_cc = 0.0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
                    /* try { // try from 00109fbc to 0010a23f has its CatchHandler @ 0010a9b4 */
      puVar19 = &local_e0;
      (**(code **)(lVar22 + 0x90))(this,puVar27);
      uStack_118 = 0;
      local_120 = 0;
      local_108 = 0;
      local_110 = (GainMapPlugin *)0x0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      snprintf((char *)&local_120,extraout_x1,(char *)puVar19);
      mialgo2::PluginUtils::dumpToFile
                ((char *)&local_120,(MiImageBuffer *)&local_e0,(basic_string *)0x0);
      lVar22 = *(long *)this;
    }
    if (local_238 != (undefined4 *)0x0) {
      fStack_d8 = 0.0;
      fStack_d4 = 0.0;
      local_e0 = 0;
      fStack_dc = 0.0;
      fStack_c8 = 0.0;
      local_c4 = 0.0;
      fStack_d0 = 0.0;
      local_cc = 0.0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      puVar19 = &local_e0;
      (**(code **)(lVar22 + 0x90))(this,local_238);
      uStack_118 = 0;
      local_120 = 0;
      local_108 = 0;
      local_110 = (GainMapPlugin *)0x0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      snprintf((char *)&local_120,extraout_x1_00,(char *)puVar19);
      mialgo2::PluginUtils::dumpToFile
                ((char *)&local_120,(MiImageBuffer *)&local_e0,(basic_string *)0x0);
      lVar22 = *(long *)this;
    }
    if (puVar30 != (undefined4 *)0x0) {
      fStack_d8 = 0.0;
      fStack_d4 = 0.0;
      local_e0 = 0;
      fStack_dc = 0.0;
      fStack_c8 = 0.0;
      local_c4 = 0.0;
      fStack_d0 = 0.0;
      local_cc = 0.0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      puVar19 = &local_e0;
      (**(code **)(lVar22 + 0x90))(this,puVar30);
      uStack_118 = 0;
      local_120 = 0;
      local_108 = 0;
      local_110 = (GainMapPlugin *)0x0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      snprintf((char *)&local_120,extraout_x1_01,(char *)puVar19);
      mialgo2::PluginUtils::dumpToFile
                ((char *)&local_120,(MiImageBuffer *)&local_e0,(basic_string *)0x0);
      lVar22 = *(long *)this;
    }
    if (local_230 != (undefined4 *)0x0) {
      fStack_d8 = 0.0;
      fStack_d4 = 0.0;
      local_e0 = 0;
      fStack_dc = 0.0;
      fStack_c8 = 0.0;
      local_c4 = 0.0;
      fStack_d0 = 0.0;
      local_cc = 0.0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      puVar30 = &local_e0;
      (**(code **)(lVar22 + 0x90))(this,local_230);
      uStack_118 = 0;
      local_120 = 0;
      local_108 = 0;
      local_110 = (GainMapPlugin *)0x0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      snprintf((char *)&local_120,extraout_x1_02,(char *)puVar30);
      mialgo2::PluginUtils::dumpToFile
                ((char *)&local_120,(MiImageBuffer *)&local_e0,(basic_string *)0x0);
      lVar22 = *(long *)this;
    }
    fStack_d8 = 0.0;
    fStack_d4 = 0.0;
    local_e0 = 0;
    fStack_dc = 0.0;
    fStack_c8 = 0.0;
    local_c4 = 0.0;
    fStack_d0 = 0.0;
    local_cc = 0.0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    puVar30 = &local_e0;
    (**(code **)(lVar22 + 0x90))(this,piVar34);
    uStack_118 = 0;
    local_120 = 0;
    local_108 = 0;
    local_110 = (GainMapPlugin *)0x0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    snprintf((char *)&local_120,extraout_x1_03,(char *)puVar30);
    pGVar15 = (GainMapPlugin *)
              mialgo2::PluginUtils::dumpToFile
                        ((char *)&local_120,(MiImageBuffer *)&local_e0,(basic_string *)0x0);
    if (local_180 != (long *)0x0) {
      fStack_d8 = 0.0;
      fStack_d4 = 0.0;
      local_e0 = 0;
      fStack_dc = 0.0;
      fStack_c8 = 0.0;
      local_c4 = 0.0;
      fStack_d0 = 0.0;
      local_cc = 0.0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      puVar30 = &local_e0;
      (**(code **)(*(long *)this + 0x90))(this,local_180);
      uStack_118 = 0;
      local_120 = 0;
      local_108 = 0;
      local_110 = (GainMapPlugin *)0x0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      snprintf((char *)&local_120,extraout_x1_04,(char *)puVar30);
      pGVar15 = (GainMapPlugin *)
                mialgo2::PluginUtils::dumpToFile
                          ((char *)&local_120,(MiImageBuffer *)&local_e0,(basic_string *)0x0);
    }
    if (local_190 != (long *)0x0) {
      fStack_d8 = 0.0;
      fStack_d4 = 0.0;
      local_e0 = 0;
      fStack_dc = 0.0;
      fStack_c8 = 0.0;
      local_c4 = 0.0;
      fStack_d0 = 0.0;
      local_cc = 0.0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      puVar30 = &local_e0;
      (**(code **)(*(long *)this + 0x90))(this,local_190);
      uStack_118 = 0;
      local_120 = 0;
      local_108 = 0;
      local_110 = (GainMapPlugin *)0x0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      snprintf((char *)&local_120,extraout_x1_05,(char *)puVar30);
      pGVar15 = (GainMapPlugin *)
                mialgo2::PluginUtils::dumpToFile
                          ((char *)&local_120,(MiImageBuffer *)&local_e0,(basic_string *)0x0);
    }
  }
  if (DAT_00118080 == 0) {
LAB_0010a668:
    plVar1 = local_188;
    if ((local_188 != (long *)0x0) &&
       (lVar22 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_188 + 1), lVar22 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__1::__shared_weak_count::__release_weak();
    }
    plVar1 = local_178;
    if ((local_178 != (long *)0x0) &&
       (lVar22 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_178 + 1), lVar22 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__1::__shared_weak_count::__release_weak();
    }
    plVar1 = local_168;
    if ((local_168 != (long *)0x0) &&
       (lVar22 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_168 + 1), lVar22 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__1::__shared_weak_count::__release_weak();
    }
    plVar1 = local_158;
    if ((local_158 != (long *)0x0) &&
       (lVar22 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_158 + 1), lVar22 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__1::__shared_weak_count::__release_weak();
    }
    plVar1 = local_148;
    if ((local_148 != (long *)0x0) &&
       (lVar22 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_148 + 1), lVar22 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__1::__shared_weak_count::__release_weak();
    }
    plVar1 = local_138;
    if ((local_138 != (long *)0x0) &&
       (lVar22 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,local_138 + 1), lVar22 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__1::__shared_weak_count::__release_weak();
    }
    plVar1 = plStack_128;
    if ((plStack_128 != (long *)0x0) &&
       (lVar22 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plStack_128 + 1), lVar22 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_78) {
      return uVar31;
    }
  }
  else {
    pcVar11 = *(char **)(puVar27 + 0x10);
    local_1d8 = *(long **)(puVar27 + 0x12);
    local_1e0 = pcVar11;
    if (local_1d8 != (long *)0x0) {
      pGVar15 = (GainMapPlugin *)__aarch64_ldadd8_relax(1,local_1d8 + 1);
    }
    local_120 = 0;
    uStack_118 = 0;
    local_110 = (GainMapPlugin *)0x0;
    if (pcVar11 == (char *)0x0) {
      uVar26 = 0;
    }
    else {
      fStack_d8 = 0.0;
      fStack_d4 = 0.0;
      local_e0 = 0;
      fStack_dc = 0.0;
      fStack_c8 = 0.0;
      local_c4 = 0.0;
      fStack_d0 = 0.0;
      local_cc = 0.0;
                    /* try { // try from 0010a278 to 0010a28b has its CatchHandler @ 0010a8b8 */
      MiMetadata::find(pcVar11);
      uVar2 = CONCAT44(local_cc,fStack_d0);
      if (uVar2 != 0) {
        if (0xfffffffffffffff7 < uVar2) {
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 0010a88c to 0010a893 has its CatchHandler @ 0010a8b4 */
                    /* WARNING: Subroutine does not return */
            std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
            __throw_length_error_abi_ne200000_();
          }
          goto LAB_0010aa14;
        }
        pGVar29 = (GainMapPlugin *)CONCAT44(local_c4,fStack_c8);
        pGVar15 = pGVar29;
        if (uVar2 < 0x17) {
          pGVar16 = (GainMapPlugin *)((ulong)&local_1f8 | 1);
          local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)fStack_d0 << 1));
          if (uVar2 < 0x20) goto LAB_0010a34c;
LAB_0010a2fc:
          if ((ulong)((long)pGVar16 - (long)pGVar29) < 0x20) goto LAB_0010a34c;
          uVar25 = uVar2 & 0xffffffffffffffe0;
          puVar36 = (undefined8 *)(pGVar29 + 0x10);
          puVar33 = (undefined8 *)(pGVar16 + 0x10);
          pGVar16 = pGVar16 + uVar25;
          pGVar15 = pGVar29 + uVar25;
          uVar23 = uVar25;
          do {
            puVar17 = puVar36 + -1;
            uVar12 = puVar36[-2];
            uVar37 = puVar36[1];
            uVar13 = *puVar36;
            uVar23 = uVar23 - 0x20;
            puVar36 = puVar36 + 4;
            puVar33[-1] = *puVar17;
            puVar33[-2] = uVar12;
            puVar33[1] = uVar37;
            *puVar33 = uVar13;
            puVar33 = puVar33 + 4;
          } while (uVar23 != 0);
          if (uVar2 != uVar25) goto LAB_0010a34c;
        }
        else {
          uVar23 = 0x1a;
          if ((uVar2 | 7) != 0x17) {
            uVar23 = (uVar2 | 7) + 1;
          }
                    /* try { // try from 0010a2e0 to 0010a2e7 has its CatchHandler @ 0010a8b4 */
          pGVar16 = (GainMapPlugin *)operator_new(uVar23);
          local_1f8 = uVar23 | 1;
          uStack_1f0 = uVar2;
          local_1e8 = pGVar16;
          if (0x1f < uVar2) goto LAB_0010a2fc;
LAB_0010a34c:
          pGVar29 = pGVar16;
          do {
            pGVar24 = pGVar15 + 1;
            pGVar16 = pGVar29 + 1;
            *pGVar29 = *pGVar15;
            pGVar29 = pGVar16;
            pGVar15 = pGVar24;
          } while (pGVar24 != pGVar29 + uVar2);
        }
        *pGVar16 = (GainMapPlugin)0x0;
        if ((local_120 & 1) != 0) {
          operator_delete(local_110,local_120 & 0xfffffffffffffffe);
        }
        uStack_118 = uStack_1f0;
        local_120 = local_1f8;
        local_110 = local_1e8;
      }
      uVar2 = uStack_118;
      pGVar29 = local_110;
      if ((local_120 & 1) == 0) {
        uVar2 = local_120 >> 1 & 0x7f;
        pGVar29 = (GainMapPlugin *)((long)&local_120 + 1);
      }
      pGVar24 = pGVar29 + uVar2;
      sVar20 = uVar2;
      pGVar16 = pGVar29;
      while (((pGVar15 = pGVar24, 0 < (long)sVar20 &&
              (pGVar16 = (GainMapPlugin *)memchr(pGVar16,0x2e,sVar20),
              pGVar16 != (GainMapPlugin *)0x0)) &&
             (pGVar15 = pGVar16, *pGVar16 != (GainMapPlugin)0x2e))) {
        pGVar16 = pGVar16 + 1;
        sVar20 = (long)pGVar24 - (long)pGVar16;
      }
      uVar23 = (long)pGVar15 - (long)pGVar29;
      if (pGVar15 == pGVar24) {
        uVar23 = 0xffffffffffffffff;
      }
      if (uVar23 <= uVar2) {
        uVar2 = uVar23;
      }
      if (0xfffffffffffffff7 < uVar2) {
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 0010a870 to 0010a877 has its CatchHandler @ 0010a90c */
                    /* WARNING: Subroutine does not return */
          std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
          __throw_length_error_abi_ne200000_();
        }
        goto LAB_0010aa14;
      }
      if (uVar2 < 0x17) {
        pGVar16 = (GainMapPlugin *)((ulong)&local_1f8 | 1);
        local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)uVar2 << 1));
        if (uVar2 != 0) goto LAB_0010a44c;
      }
      else {
        uVar23 = 0x1a;
        if ((uVar2 | 7) != 0x17) {
          uVar23 = (uVar2 | 7) + 1;
        }
                    /* try { // try from 0010a434 to 0010a43b has its CatchHandler @ 0010a90c */
        pGVar16 = (GainMapPlugin *)operator_new(uVar23);
        local_1f8 = uVar23 | 1;
        uStack_1f0 = uVar2;
        local_1e8 = pGVar16;
LAB_0010a44c:
        pGVar15 = (GainMapPlugin *)memmove(pGVar16,pGVar29,uVar2);
      }
      pGVar16[uVar2] = (GainMapPlugin)0x0;
      if ((local_120 & 1) != 0) {
        operator_delete(local_110,local_120 & 0xfffffffffffffffe);
        pGVar15 = local_110;
      }
      uStack_118 = uStack_1f0;
      local_120 = local_1f8;
      uVar2 = local_120;
      local_120._0_1_ = (byte)local_1f8;
      uVar26 = (uint)(byte)local_120;
      local_110 = local_1e8;
      local_120 = uVar2;
    }
    local_210 = 0;
    local_208 = 0;
    local_200 = (GainMapPlugin *)0x0;
    sVar20 = (ulong)(uVar26 >> 1);
    if ((uVar26 & 1) != 0) {
      sVar20 = uStack_118;
    }
    uVar2 = sVar20 + 4;
    if (uVar2 < 0xfffffffffffffff8) {
      if (uVar2 < 0x17) {
        pGVar29 = (GainMapPlugin *)((ulong)&local_210 | 1);
        local_210 = (ulong)(byte)((int)uVar2 << 1);
        if (sVar20 != 0) goto LAB_0010a4f8;
      }
      else {
        uVar23 = 0x1a;
        if ((uVar2 | 7) != 0x17) {
          uVar23 = (uVar2 | 7) + 1;
        }
                    /* try { // try from 0010a4e0 to 0010a4e7 has its CatchHandler @ 0010a97c */
        pGVar29 = (GainMapPlugin *)operator_new(uVar23);
        local_210 = uVar23 | 1;
        local_208 = uVar2;
        local_200 = pGVar29;
LAB_0010a4f8:
        pGVar15 = local_110;
        if ((uVar26 & 1) == 0) {
          pGVar15 = (GainMapPlugin *)((long)&local_120 + 1);
        }
        pGVar15 = (GainMapPlugin *)memmove(pGVar29,pGVar15,sVar20);
      }
      *(undefined *)((long)(pGVar29 + sVar20) + 4) = 0;
      *(undefined4 *)(pGVar29 + sVar20) = 0x7264735f;
                    /* try { // try from 0010a52c to 0010a537 has its CatchHandler @ 0010a928 */
      pGVar15 = (GainMapPlugin *)
                dumpYuvImgToJpeg(pGVar15,(ImageParams *)puVar27,(basic_string)&local_210);
      if ((local_210 & 1) != 0) {
        pGVar15 = local_200;
        operator_delete(local_200,local_210 & 0xfffffffffffffffe);
      }
      uVar2 = local_120;
      local_220 = 0;
      local_218 = (void *)0x0;
      local_228 = 0;
      sVar20 = local_120 >> 1 & 0x7f;
      if ((local_120 & 1) != 0) {
        sVar20 = uStack_118;
      }
      uVar23 = sVar20 + 4;
      if (uVar23 < 0xfffffffffffffff8) {
        if (uVar23 < 0x17) {
          __dest = (void *)((ulong)&local_228 | 1);
          local_228 = (ulong)(byte)((int)uVar23 << 1);
          if (sVar20 != 0) goto LAB_0010a5c0;
        }
        else {
          uVar25 = 0x1a;
          if ((uVar23 | 7) != 0x17) {
            uVar25 = (uVar23 | 7) + 1;
          }
                    /* try { // try from 0010a5a8 to 0010a5af has its CatchHandler @ 0010a97c */
          __dest = operator_new(uVar25);
          local_228 = uVar25 | 1;
          local_220 = uVar23;
          local_218 = __dest;
LAB_0010a5c0:
          pGVar15 = local_110;
          if ((uVar2 & 1) == 0) {
            pGVar15 = (GainMapPlugin *)((long)&local_120 + 1);
          }
          pGVar15 = (GainMapPlugin *)memmove(__dest,pGVar15,sVar20);
        }
        *(undefined4 *)((long)__dest + sVar20) = 0x7264685f;
        *(undefined *)((undefined4 *)((long)__dest + sVar20) + 1) = 0;
                    /* try { // try from 0010a5e8 to 0010a5f3 has its CatchHandler @ 0010a910 */
        dumpYuvImgToJpeg(pGVar15,(ImageParams *)local_238,(basic_string)&local_228);
        if ((local_228 & 1) != 0) {
          operator_delete(local_218,local_228 & 0xfffffffffffffffe);
        }
        plVar1 = local_1d8;
        if ((local_120 & 1) != 0) {
          operator_delete(local_110,local_120 & 0xfffffffffffffffe);
          plVar1 = local_1d8;
        }
        local_1d8 = plVar1;
        if ((plVar1 != (long *)0x0) &&
           (lVar22 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar1 + 1), lVar22 == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__1::__shared_weak_count::__release_weak();
        }
        goto LAB_0010a668;
      }
    }
    if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0010a854 to 0010a857 has its CatchHandler @ 0010a97c */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
  }
LAB_0010aa14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x8338 generateGainMap @ 00108338

/* GainMapPlugin::generateGainMap(ImageParams*, ImageParams*,
   std::__1::shared_ptr<GainMapPlugin::gainmapOutImgWrapper>) */

undefined8 __thiscall
GainMapPlugin::generateGainMap
          (GainMapPlugin *this,ImageParams *param_1,ImageParams *param_2,shared_ptr param_3)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  void **ppvVar11;
  uint uVar12;
  void *pvVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  void *local_258;
  ulong local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  plVar9 = (long *)(ulong)param_3;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_98 = DAT_00103740;
  uStack_78 = *(undefined8 *)(param_1 + 0x88);
  local_80 = *(undefined8 *)(param_1 + 0x80);
  local_60 = 0;
  local_70 = 0;
  uStack_68 = CONCAT44(*(uint *)(param_1 + 0x38) >> 1,*(uint *)(param_1 + 0x38) >> 1);
  local_90 = 0;
  local_d8 = 0x100000001;
  uStack_b8 = *(undefined8 *)(param_2 + 0x88);
  local_c0 = *(undefined8 *)(param_2 + 0x80);
  local_d0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  lVar10 = *plVar9;
  uStack_c8 = *(undefined8 *)(param_1 + 4);
  uStack_88 = *(undefined8 *)(param_1 + 4);
  uStack_a8 = CONCAT44(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x38));
  puVar1 = (ulong *)(lVar10 + 0x110);
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
  local_e8 = (void *)0x0;
  uStack_f0 = 0;
  if (&uStack_f8 != puVar1) {
    if (((byte)*(basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)puVar1 &
        1) == 0) {
      uStack_f0 = *(undefined8 *)(lVar10 + 0x118);
      uStack_f8 = *puVar1;
      local_e8 = *(void **)(lVar10 + 0x120);
    }
    else {
                    /* try { // try from 0010841c to 0010841f has its CatchHandler @ 00108760 */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __assign_no_alias<true>
                ((basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>> *)
                 &uStack_f8,*(char **)(lVar10 + 0x120),*(ulong *)(lVar10 + 0x118));
      lVar10 = *plVar9;
    }
  }
  uStack_138 = *(undefined8 *)(lVar10 + 0x128);
  local_120 = *(undefined8 *)(lVar10 + 0x130);
  uVar18 = (undefined4)((ulong)local_120 >> 0x20);
  uStack_108 = *(undefined8 *)(lVar10 + 0x138);
  local_260 = 0;
  local_258 = (void *)0x0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uVar16 = (undefined4)*(undefined8 *)(lVar10 + 300);
  uVar17 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 300) >> 0x20);
  local_100 = CONCAT44(1,*(undefined4 *)(lVar10 + 0x140));
  local_140 = CONCAT44((int)uStack_138,(int)uStack_138);
  uStack_128 = CONCAT44(uVar17,uVar17);
  uStack_130 = CONCAT44(uVar16,uVar16);
  uStack_118 = CONCAT44(uVar18,uVar18);
  uStack_110 = CONCAT44((int)uStack_108,(int)uStack_108);
                    /* try { // try from 00108474 to 001084a7 has its CatchHandler @ 00108768 */
  ultrahdr::JpegR::JpegR
            ((JpegR *)&local_280,(void *)0x0,4,0x55,false,1.0,0,1.175494e-38,3.402823e+38,-1.0);
  local_150 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
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
                    /* try { // try from 001084d0 to 001085fb has its CatchHandler @ 0010876c */
  ultrahdr::JpegR::generateGainMap
            ((uhdr_raw_image *)&local_280,(uhdr_raw_image *)&local_d8,
             (uhdr_gainmap_metadata_ext *)&local_98,(unique_ptr *)&local_140,SUB81(&local_258,0),
             false);
  if ((int)local_250 != 0) {
    if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 7) &&
       (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
      pcVar5 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                 );
      iVar4 = midebug::Log::catchLogEncryptLog
                        (2,pcVar5,0x65,"generateGainMap",'E',"[generateGainMap] error. ret = %d",
                         local_250 & 0xffffffff);
      if (iVar4 == 0) {
        uVar6 = midebug::Log::miaGroupToString(2);
        uVar7 = midebug::Log::getFileName
                          (
                          "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                          );
        __android_log_print(6,"MiAlgoEngine","%s %s:%d %s()[generateGainMap] error. ret = %d",uVar6,
                            uVar7,0x65,"generateGainMap",local_250 & 0xffffffff);
      }
    }
    if ((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 7) &&
       (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) {
      pcVar5 = (char *)midebug::Log::getFileName
                                 (
                                 "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                 );
      midebug::Log::logSystem
                (2,"E",pcVar5,"generateGainMap",0x65,"[generateGainMap] error. ret = %d",
                 local_250 & 0xffffffff);
    }
  }
  if (local_258 != (void *)0x0) {
    pvVar13 = local_258;
    if (*(long *)((long)local_258 + 0x18) != 0) {
      uVar2 = *(uint *)(*plVar9 + 0x38);
      iVar4 = *(int *)((long)local_258 + 0x14);
      if (*(int *)(this + 8) == 0x11) {
        uVar14 = iVar4 - 1;
        if (-1 < (int)uVar14) {
          uVar12 = uVar2 * uVar14;
          lVar10 = (ulong)uVar14 + 1;
          iVar4 = -iVar4;
          do {
            memcpy((void *)(*(long *)(*plVar9 + 0x80) +
                           (ulong)((iVar4 + *(int *)((long)local_258 + 0x14)) * uVar2)),
                   (void *)(*(long *)((long)local_258 + 0x18) + (ulong)uVar12),(ulong)uVar2);
            lVar10 = lVar10 + -1;
            iVar4 = iVar4 + 1;
            uVar12 = uVar12 - uVar2;
          } while (lVar10 != 0);
        }
      }
      else if (iVar4 != 0) {
        uVar14 = 0;
        uVar15 = 0;
        do {
          memcpy((void *)(*(long *)(*plVar9 + 0x80) + (ulong)uVar14),
                 (void *)(*(long *)((long)local_258 + 0x18) + (ulong)uVar14),(ulong)uVar2);
          uVar15 = uVar15 + 1;
          uVar14 = uVar14 + uVar2;
        } while (uVar15 < *(uint *)((long)local_258 + 0x14));
      }
      pvVar13 = local_258;
      if (*(void **)((long)local_258 + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)((long)local_258 + 0x18));
        pvVar13 = local_258;
        local_258 = (void *)0x0;
        if (pvVar13 == (void *)0x0) goto LAB_00108714;
      }
    }
    local_258 = (void *)0x0;
    ppvVar11 = *(void ***)((long)pvVar13 + 0x40);
    *(undefined8 *)((long)pvVar13 + 0x40) = 0;
    if (ppvVar11 != (void **)0x0) {
      pvVar8 = *ppvVar11;
      *ppvVar11 = (void *)0x0;
      if (pvVar8 != (void *)0x0) {
        operator_delete__(pvVar8);
      }
      operator_delete(ppvVar11,0x10);
    }
    operator_delete(pvVar13,0x48);
  }
LAB_00108714:
  if ((uStack_f8 & 1) != 0) {
    operator_delete(local_e8,uStack_f8 & 0xfffffffffffffffe);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 0xaa74 processLinearYuvInput @ 0010aa74

/* GainMapPlugin::processLinearYuvInput(ImageParams*,
   std::__1::shared_ptr<GainMapPlugin::gainmapOutImgWrapper>) */

void __thiscall
GainMapPlugin::processLinearYuvInput(GainMapPlugin *this,ImageParams *param_1,shared_ptr param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  long local_70;
  long *plStack_68;
  long local_60;
  long *local_58;
  long local_50;
  long *plStack_48;
  long local_38;
  
  plVar4 = (long *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)param_1 == 0x36) {
    plStack_48 = (long *)plVar4[1];
    local_50 = *plVar4;
    if (plVar4[1] != 0) {
      __aarch64_ldadd8_relax(1,plVar4[1] + 8);
    }
                    /* try { // try from 0010aad4 to 0010aadb has its CatchHandler @ 0010ac74 */
    iVar3 = DoProcessLinearYuvInput<unsigned_short>(this,param_1,(shared_ptr)&local_50);
    plVar7 = plStack_48;
  }
  else {
    lVar5 = *plVar4;
    if (DAT_00118088 != 0) {
      plVar7 = (long *)plVar4[1];
      local_70 = lVar5;
      plStack_68 = plVar7;
      if (plVar7 != (long *)0x0) {
        this = (GainMapPlugin *)__aarch64_ldadd8_relax(1,plVar7 + 1);
      }
                    /* try { // try from 0010ab18 to 0010ab1f has its CatchHandler @ 0010ac68 */
      DoProcessLinearYuvWithMaxRGB(this,param_1,(shared_ptr)&local_70);
      if ((plVar7 != (long *)0x0) &&
         (lVar5 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__1::__shared_weak_count::__release_weak();
      }
      iVar3 = 0;
      goto LAB_0010abbc;
    }
    local_58 = (long *)plVar4[1];
    local_60 = lVar5;
    if (local_58 != (long *)0x0) {
      __aarch64_ldadd8_relax(1,local_58 + 1);
    }
                    /* try { // try from 0010ab7c to 0010ab83 has its CatchHandler @ 0010ac5c */
    iVar3 = DoProcessLinearYuvInput<unsigned_char>(this,param_1,(shared_ptr)&local_60);
    plVar7 = local_58;
  }
  if ((plVar7 != (long *)0x0) &&
     (lVar5 = __aarch64_ldadd8_acq_rel(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__1::__shared_weak_count::__release_weak();
  }
LAB_0010abbc:
  lVar5 = *plVar4;
  if ((*(byte *)(lVar5 + 0x110) & 1) == 0) {
    *(undefined *)(lVar5 + 0x110) = 6;
    puVar6 = (undefined4 *)(lVar5 + 0x111);
  }
  else {
    puVar6 = *(undefined4 **)(lVar5 + 0x120);
    *(undefined8 *)(lVar5 + 0x118) = 3;
  }
  *puVar6 = 0x302e31;
  uVar2 = DAT_00118074;
  *(undefined4 *)(*plVar4 + 0x128) = DAT_00118074;
  *(undefined4 *)(*plVar4 + 300) = 0x3f800000;
  *(undefined4 *)(*plVar4 + 0x130) = 0x3f800000;
  *(undefined4 *)(*plVar4 + 0x134) = 0;
  *(undefined4 *)(*plVar4 + 0x138) = 0;
  *(undefined4 *)(*plVar4 + 0x13c) = 0x3f800000;
  *(undefined4 *)(*plVar4 + 0x140) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


// ===== 0xc320 DoProcessLinearYuvWithMaxRGB @ 0010c320

/* GainMapPlugin::DoProcessLinearYuvWithMaxRGB(ImageParams*,
   std::__1::shared_ptr<GainMapPlugin::gainmapOutImgWrapper>) */

undefined8 __thiscall
GainMapPlugin::DoProcessLinearYuvWithMaxRGB
          (GainMapPlugin *this,ImageParams *param_1,shared_ptr param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined auVar14 [16];
  int iVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  short sVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  timeval local_88;
  timeval local_78;
  long local_68;
  
  lVar18 = tpidr_el0;
  local_68 = *(long *)(lVar18 + 0x28);
  iVar22 = *(int *)param_1;
  if ((iVar22 != 0x11) && (iVar22 != 0x23)) {
    if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 7) &&
       (((byte)*PTR_gMiCamLogGroup_00114b60 >> 6 & 1) != 0)) {
      pcVar23 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                  );
      iVar22 = midebug::Log::catchLogEncryptLog
                         (0x40,pcVar23,0x249,"DoProcessLinearYuvWithMaxRGB",'E',
                          " Fatal error occurred and abort() was triggered, check it!");
      if (iVar22 == 0) {
        uVar24 = midebug::Log::miaGroupToString(0x40);
        uVar25 = midebug::Log::getFileName
                           (
                           "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                           );
        __android_log_print(6,"MiAlgoEngine",
                            "%s %s:%d %s() Fatal error occurred and abort() was triggered, check it!"
                            ,uVar24,uVar25,0x249,"DoProcessLinearYuvWithMaxRGB");
      }
    }
    if ((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 7) &&
       (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 6 & 1) != 0)) {
      pcVar23 = (char *)midebug::Log::getFileName
                                  (
                                  "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                  );
      midebug::Log::logSystem
                (0x40,"E",pcVar23,"DoProcessLinearYuvWithMaxRGB",0x249,
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
  lVar29 = *(long *)(ulong)param_2;
  lVar6 = *(long *)(param_1 + 0x80);
  lVar7 = *(long *)(param_1 + 0x88);
  uVar21 = *(uint *)(param_1 + 4);
  uVar5 = *(uint *)(param_1 + 8);
  uVar27 = *(uint *)(lVar29 + 4);
  uVar30 = *(uint *)(lVar29 + 8);
  iVar8 = *(int *)(param_1 + 0x38);
  lVar32 = *(long *)(lVar29 + 0x80);
  iVar9 = *(int *)(lVar29 + 0x38);
  local_78.tv_sec = 0;
  local_78.tv_usec = 0;
  if (iVar22 == 0x23) {
    lVar29 = lVar7;
    lVar7 = lVar7 + 1;
  }
  else {
    lVar29 = lVar7 + 1;
  }
  local_88.tv_sec = 0;
  local_88.tv_usec = 0;
  gettimeofday(&local_78,(__timezone_ptr_t)0x0);
  if ((uVar21 == uVar27) && (uVar5 == uVar30)) {
    if (uVar5 != 0) {
      uVar27 = 0;
      uVar28 = 1;
      uVar30 = 1;
      do {
        if (uVar21 != 0) {
          uVar31 = 0;
          uVar20 = iVar8 * (uVar27 >> 1);
          uVar3 = uVar28;
          uVar4 = uVar30;
          do {
            uVar26 = (ulong)uVar3;
            uVar1 = (ulong)uVar20;
            uVar2 = (ulong)uVar20;
            uVar31 = uVar31 + 2;
            uVar20 = uVar20 + 2;
            iVar22 = *(byte *)(lVar7 + uVar1) - 0x80;
            iVar15 = *(byte *)(lVar29 + uVar2) - 0x80;
            iVar11 = iVar22 * 0x167;
            iVar12 = iVar15 * 0x1c6;
            iVar10 = iVar15 * -0x58 + iVar22 * -0xb7;
            iVar22 = iVar11;
            if (iVar11 <= iVar10) {
              iVar22 = iVar10;
            }
            if (iVar22 == iVar12 || iVar22 + iVar15 * -0x1c6 < 0 != SBORROW4(iVar22,iVar12)) {
              iVar22 = iVar12;
            }
            iVar15 = iVar22 >> 8;
            sVar19 = (short)((uint)((iVar11 + iVar12 + iVar10 >> 8) * 0x5556) >> 0x10);
            if (iVar22 < 1) {
              iVar15 = 0;
            }
            uVar16 = uVar3 - 1;
            uVar3 = uVar3 + 2;
            iVar10 = iVar15 + (short)(sVar19 - (sVar19 >> 0xf)) >> 1;
            iVar22 = iVar10 + (uint)*(byte *)(lVar6 + (ulong)uVar16);
            iVar10 = iVar10 + (uint)*(byte *)(lVar6 + uVar26);
            if (0xfe < iVar22) {
              iVar22 = 0xff;
            }
            if (0xfe < iVar10) {
              iVar10 = 0xff;
            }
            *(byte *)(lVar32 + (ulong)(uVar4 - 1)) = (byte)iVar22 & ((byte)(iVar22 >> 0x1f) ^ 0xff);
            *(byte *)(lVar32 + (ulong)uVar4) = (byte)iVar10 & ((byte)(iVar10 >> 0x1f) ^ 0xff);
            uVar4 = uVar4 + 2;
          } while (uVar31 < uVar21);
        }
        uVar27 = uVar27 + 1;
        uVar30 = uVar30 + iVar9;
        uVar28 = uVar28 + iVar8;
      } while (uVar27 != uVar5);
    }
  }
  else if (uVar30 != 0) {
    uVar5 = 0;
    if (uVar27 != 0) {
      uVar5 = uVar21 / uVar27;
    }
    uVar21 = 0;
    uVar28 = 1;
    do {
      uVar31 = 0;
      iVar22 = uVar21 * uVar5 * iVar8;
      uVar20 = uVar28;
      do {
        iVar12 = uVar5 * (int)uVar31;
        uVar31 = uVar31 + 2;
        uVar3 = iVar12 + (uVar21 * uVar5 >> 1) * iVar8;
        iVar10 = *(byte *)(lVar7 + (ulong)uVar3) - 0x80;
        iVar17 = *(byte *)(lVar29 + (ulong)uVar3) - 0x80;
        iVar15 = iVar10 * 0x167;
        iVar13 = iVar17 * 0x1c6;
        iVar11 = iVar17 * -0x58 + iVar10 * -0xb7;
        iVar10 = iVar15;
        if (iVar15 <= iVar11) {
          iVar10 = iVar11;
        }
        if (iVar10 == iVar13 || iVar10 + iVar17 * -0x1c6 < 0 != SBORROW4(iVar10,iVar13)) {
          iVar10 = iVar13;
        }
        iVar17 = iVar10 >> 8;
        sVar19 = (short)((uint)((iVar15 + iVar13 + iVar11 >> 8) * 0x5556) >> 0x10);
        if (iVar10 < 1) {
          iVar17 = 0;
        }
        iVar11 = iVar17 + (short)(sVar19 - (sVar19 >> 0xf)) >> 1;
        iVar10 = iVar11 + (uint)*(byte *)(lVar6 + (ulong)(uint)(iVar12 + iVar22));
        iVar11 = iVar11 + (uint)*(byte *)(lVar6 + (ulong)(uint)(iVar12 + iVar22 + 1));
        if (0xfe < iVar10) {
          iVar10 = 0xff;
        }
        if (0xfe < iVar11) {
          iVar11 = 0xff;
        }
        *(byte *)(lVar32 + (ulong)(uVar20 - 1)) = (byte)iVar10 & ((byte)(iVar10 >> 0x1f) ^ 0xff);
        *(byte *)(lVar32 + (ulong)uVar20) = (byte)iVar11 & ((byte)(iVar11 >> 0x1f) ^ 0xff);
        uVar20 = uVar20 + 2;
      } while (uVar31 < uVar27);
      uVar21 = uVar21 + 1;
      uVar28 = uVar28 + iVar9;
    } while (uVar21 != uVar30);
  }
  uVar21 = gettimeofday(&local_88,(__timezone_ptr_t)0x0);
  uVar31 = (ulong)uVar21;
  if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 5) &&
     (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
    pcVar23 = (char *)midebug::Log::getFileName
                                (
                                "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                );
    auVar14 = SEXT816(local_88.tv_usec - local_78.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    uVar21 = ((int)(auVar14._8_8_ >> 7) - (auVar14._12_4_ >> 0x1f)) +
             ((int)local_88.tv_sec - (int)local_78.tv_sec) * 1000;
    uVar31 = midebug::Log::catchLogEncryptLog
                       (2,pcVar23,0x2b2,"DoProcessLinearYuvWithMaxRGB",'I',
                        "processMaxRGB, spend %dms",(ulong)uVar21);
    if ((int)uVar31 == 0) {
      uVar24 = midebug::Log::miaGroupToString(2);
      uVar25 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                         );
      uVar31 = __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()processMaxRGB, spend %dms",uVar24,
                                   uVar25,0x2b2,"DoProcessLinearYuvWithMaxRGB",uVar21);
    }
  }
  if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
      (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
     (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
    pcVar23 = (char *)midebug::Log::getFileName
                                (
                                "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                );
    auVar14 = SEXT816(local_88.tv_usec - local_78.tv_usec) * SEXT816(0x20c49ba5e353f7cf);
    uVar31 = midebug::Log::logSystem
                       (2,"I",pcVar23,"DoProcessLinearYuvWithMaxRGB",0x2b2,
                        "processMaxRGB, spend %dms",
                        (ulong)(uint)(((int)(auVar14._8_8_ >> 7) - (auVar14._12_4_ >> 0x1f)) +
                                     ((int)local_88.tv_sec - (int)local_78.tv_sec) * 1000));
  }
  if (*(long *)(lVar18 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar31);
}


// ===== 0xd080 DoProcessLinearYuvInput<unsigned_char> @ 0010d080

/* int GainMapPlugin::DoProcessLinearYuvInput<unsigned char>(ImageParams*,
   std::__1::shared_ptr<GainMapPlugin::gainmapOutImgWrapper>) */

int __thiscall
GainMapPlugin::DoProcessLinearYuvInput<unsigned_char>
          (GainMapPlugin *this,ImageParams *param_1,shared_ptr param_2)

{
  undefined (*pauVar1) [16];
  undefined8 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  char *pcVar17;
  undefined8 uVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  void *__src;
  void *__dest;
  ulong uVar31;
  uint uVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  ulong uVar53;
  uint uVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  ulong uVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  
  uVar27 = DAT_0011806c;
  puVar13 = PTR_gMiCamLogGroup_00114b60;
  puVar12 = PTR_gMiCamLogLevel_00114b58;
  lVar23 = *(long *)(ulong)param_2;
  uVar53 = *(ulong *)(param_1 + 4);
  __src = *(void **)(param_1 + 0x80);
  iVar16 = *(int *)(param_1 + 0x38);
  uVar59 = *(ulong *)(lVar23 + 4);
  __dest = *(void **)(lVar23 + 0x80);
  iVar5 = *(int *)(lVar23 + 0x38);
  uVar40 = NEON_cmeq(uVar53,uVar59,4);
  uVar51 = (uint)uVar53;
  uVar54 = (uint)(uVar53 >> 0x20);
  if (((uint)uVar40 & (uint)((ulong)uVar40 >> 0x20) & 1) == 0) {
    iVar19 = *(int *)(this + 0x78);
    uVar29 = (ulong)DAT_0011806c;
    piVar25 = &DAT_00118070;
    if (iVar19 != 0x80f3) {
      piVar4 = &DAT_00118070;
      if (iVar19 != 0x9007) {
        piVar4 = (int *)&DAT_0011806c;
      }
      piVar25 = &DAT_00118070;
      if (iVar19 != 0x9004) {
        piVar25 = piVar4;
      }
    }
    iVar19 = *piVar25;
    auVar44 = NEON_fmov(0xbff0000000000000,8);
    auVar41._0_4_ = iVar19 + uVar51;
    auVar41._4_4_ = 0;
    auVar41._8_4_ = iVar19 + uVar54;
    auVar41._12_4_ = 0;
    auVar41 = NEON_ucvtf(auVar41,8);
    uVar40 = NEON_cmeq(uVar59,CONCAT44((int)(long)(double)(long)((auVar41._8_8_ + auVar44._8_8_) /
                                                                (double)iVar19) +
                                       SUB164(ZEXT816(0x100000001),4),
                                       (int)(long)(double)(long)((auVar41._0_8_ + auVar44._0_8_) /
                                                                (double)iVar19) +
                                       SUB164(ZEXT816(0x100000001),0)) & 0xfffffffefffffffe,4);
    iVar19 = (int)(uVar59 >> 0x20);
    if (((uint)uVar40 & (uint)((ulong)uVar40 >> 0x20) & 1) == 0) {
      if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 5) &&
         (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
        pcVar17 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        iVar16 = midebug::Log::catchLogEncryptLog
                           (2,pcVar17,0x228,"DoProcessLinearYuvInput",'I',
                            "invalid param: %d/%d,%d/%d,scale=%d",uVar53 & 0xffffffff,
                            uVar59 & 0xffffffff,uVar54);
        if (iVar16 == 0) {
          uVar40 = midebug::Log::miaGroupToString(2);
          uVar18 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                             );
          __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()invalid param: %d/%d,%d/%d,scale=%d",
                              uVar40,uVar18,0x228,"DoProcessLinearYuvInput",uVar53 & 0xffffffff,
                              (int)uVar59);
        }
      }
      puVar15 = PTR_gMiCamOfflineLogGroup_00114b70;
      puVar14 = PTR_gMiCamOfflineLogLevel_00114b68;
      if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
          (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
         (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
        pcVar17 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        midebug::Log::logSystem
                  (2,"I",pcVar17,"DoProcessLinearYuvInput",0x228,
                   "invalid param: %d/%d,%d/%d,scale=%d",uVar53 & 0xffffffff,uVar59 & 0xffffffff,
                   uVar54);
      }
      if ((*(uint *)puVar12 < 7) && (((byte)*puVar13 >> 6 & 1) != 0)) {
        pcVar17 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        iVar16 = midebug::Log::catchLogEncryptLog
                           (0x40,pcVar17,0x229,"DoProcessLinearYuvInput",'E',
                            " Fatal error occurred and abort() was triggered, check it!");
        if (iVar16 == 0) {
          uVar40 = midebug::Log::miaGroupToString(0x40);
          uVar18 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                             );
          __android_log_print(6,"MiAlgoEngine",
                              "%s %s:%d %s() Fatal error occurred and abort() was triggered, check it!"
                              ,uVar40,uVar18,0x229,"DoProcessLinearYuvInput");
        }
      }
      if ((*(uint *)puVar14 < 7) && (((byte)*puVar15 >> 6 & 1) != 0)) {
        pcVar17 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        midebug::Log::logSystem
                  (0x40,"E",pcVar17,"DoProcessLinearYuvInput",0x229,
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
    if (iVar19 != 0) {
      uVar54 = DAT_0011806c * DAT_0011806c;
      iVar6 = iVar16 * DAT_0011806c;
      uVar30 = uVar29 & 0x7ffffff8;
      uVar51 = 0;
      iVar28 = 0;
      uVar53 = uVar29 & 0x7fffffe0;
      uVar26 = DAT_0011806c & 0x18;
      do {
        if ((int)uVar59 != 0) {
          uVar20 = 0;
          uVar24 = uVar51;
          do {
            iVar21 = (int)uVar20;
            if ((int)uVar27 < 1) {
              uVar39 = 0;
            }
            else {
              uVar22 = 0;
              uVar39 = 0;
              uVar3 = uVar24;
              do {
                if (uVar27 < 8) {
                  uVar31 = 0;
LAB_0010d374:
                  uVar32 = uVar3 + (int)uVar31;
                  lVar23 = uVar29 - uVar31;
                  do {
                    uVar31 = (ulong)uVar32;
                    lVar23 = lVar23 + -1;
                    uVar32 = uVar32 + 1;
                    uVar39 = uVar39 + *(byte *)((long)__src + uVar31);
                  } while (lVar23 != 0);
                }
                else {
                  uVar31 = 0;
                  if ((CARRY4(iVar28 * iVar6 + iVar21 * uVar27 + iVar16 * uVar22,(uint)(uVar29 - 1))
                      ) || (uVar29 - 1 >> 0x20 != 0)) goto LAB_0010d374;
                  if (uVar27 < 0x20) {
                    uVar31 = 0;
LAB_0010d460:
                    uVar32 = uVar3 + (int)uVar31;
                    auVar44._4_12_ = SUB1612(ZEXT816(0),4);
                    auVar44._0_4_ = uVar39;
                    lVar23 = uVar31 - uVar30;
                    auVar41 = ZEXT816(0);
                    do {
                      uVar40 = *(undefined8 *)((long)__src + (ulong)uVar32);
                      lVar23 = lVar23 + 8;
                      uVar32 = uVar32 + 8;
                      bVar34 = (byte)((ulong)uVar40 >> 8);
                      bVar33 = (byte)((ulong)uVar40 >> 0x28);
                      auVar46._0_4_ =
                           auVar41._0_4_ +
                           (CONCAT12(bVar33,(ushort)(byte)((ulong)uVar40 >> 0x20)) & 0xffff);
                      auVar46._4_4_ = auVar41._4_4_ + (uint)bVar33;
                      auVar46._8_4_ = auVar41._8_4_ + (uint)(byte)((ulong)uVar40 >> 0x30);
                      auVar46._12_4_ = auVar41._12_4_ + (uint)(byte)((ulong)uVar40 >> 0x38);
                      auVar43._0_4_ =
                           auVar44._0_4_ + ((CONCAT12(bVar34,(short)uVar40) & 0xff00ff) & 0xffff);
                      auVar43._4_4_ = auVar44._4_4_ + (uint)bVar34;
                      auVar43._8_4_ = auVar44._8_4_ + (uint)(byte)((ulong)uVar40 >> 0x10);
                      auVar43._12_4_ = auVar44._12_4_ + (uint)(byte)((ulong)uVar40 >> 0x18);
                      auVar44 = auVar43;
                      auVar41 = auVar46;
                    } while (lVar23 != 0);
                    uVar39 = auVar43._0_4_ + auVar46._0_4_ + auVar43._4_4_ + auVar46._4_4_ +
                             auVar43._8_4_ + auVar46._8_4_ + auVar43._12_4_ + auVar46._12_4_;
                    uVar31 = uVar30;
                    if (uVar30 != uVar29) goto LAB_0010d374;
                  }
                  else {
                    iVar47 = 0;
                    iVar48 = 0;
                    iVar49 = 0;
                    iVar50 = 0;
                    iVar52 = 0;
                    iVar55 = 0;
                    iVar56 = 0;
                    iVar57 = 0;
                    iVar58 = 0;
                    iVar60 = 0;
                    iVar61 = 0;
                    iVar62 = 0;
                    iVar67 = 0;
                    iVar68 = 0;
                    iVar69 = 0;
                    iVar70 = 0;
                    iVar63 = 0;
                    iVar64 = 0;
                    iVar65 = 0;
                    iVar66 = 0;
                    iVar71 = 0;
                    iVar72 = 0;
                    iVar73 = 0;
                    iVar74 = 0;
                    uVar31 = uVar53;
                    auVar41 = ZEXT416(uVar39);
                    auVar44 = ZEXT816(0);
                    uVar39 = uVar3;
                    do {
                      puVar2 = (undefined8 *)((long)__src + (ulong)uVar39);
                      uVar31 = uVar31 - 0x20;
                      uVar39 = uVar39 + 0x20;
                      uVar18 = puVar2[1];
                      uVar40 = *puVar2;
                      uVar76 = puVar2[3];
                      uVar75 = puVar2[2];
                      bVar35 = (byte)((ulong)uVar18 >> 0x28);
                      bVar34 = (byte)((ulong)uVar40 >> 8);
                      bVar36 = (byte)((ulong)uVar40 >> 0x28);
                      bVar37 = (byte)((ulong)uVar76 >> 0x28);
                      bVar33 = (byte)((ulong)uVar75 >> 8);
                      bVar38 = (byte)((ulong)uVar75 >> 0x28);
                      iVar52 = iVar52 + (CONCAT12(bVar35,(ushort)(byte)((ulong)uVar18 >> 0x20)) &
                                        0xffff);
                      iVar55 = iVar55 + (uint)bVar35;
                      iVar56 = iVar56 + (uint)(byte)((ulong)uVar18 >> 0x30);
                      iVar57 = iVar57 + (uint)(byte)((ulong)uVar18 >> 0x38);
                      iVar47 = iVar47 + ((uint)uVar18 & 0xff);
                      iVar48 = iVar48 + (uint)(byte)((ulong)uVar18 >> 8);
                      iVar49 = iVar49 + (uint)(byte)((ulong)uVar18 >> 0x10);
                      iVar50 = iVar50 + (uint)(byte)((ulong)uVar18 >> 0x18);
                      auVar45._0_4_ =
                           auVar44._0_4_ +
                           (CONCAT12(bVar36,(ushort)(byte)((ulong)uVar40 >> 0x20)) & 0xffff);
                      auVar45._4_4_ = auVar44._4_4_ + (uint)bVar36;
                      auVar45._8_4_ = auVar44._8_4_ + (uint)(byte)((ulong)uVar40 >> 0x30);
                      auVar45._12_4_ = auVar44._12_4_ + (uint)(byte)((ulong)uVar40 >> 0x38);
                      auVar42._0_4_ =
                           auVar41._0_4_ + ((CONCAT12(bVar34,(short)uVar40) & 0xff00ff) & 0xffff);
                      auVar42._4_4_ = auVar41._4_4_ + (uint)bVar34;
                      auVar42._8_4_ = auVar41._8_4_ + (uint)(byte)((ulong)uVar40 >> 0x10);
                      auVar42._12_4_ = auVar41._12_4_ + (uint)(byte)((ulong)uVar40 >> 0x18);
                      iVar71 = iVar71 + (CONCAT12(bVar37,(ushort)(byte)((ulong)uVar76 >> 0x20)) &
                                        0xffff);
                      iVar72 = iVar72 + (uint)bVar37;
                      iVar73 = iVar73 + (uint)(byte)((ulong)uVar76 >> 0x30);
                      iVar74 = iVar74 + (uint)(byte)((ulong)uVar76 >> 0x38);
                      iVar63 = iVar63 + ((uint)uVar76 & 0xff);
                      iVar64 = iVar64 + (uint)(byte)((ulong)uVar76 >> 8);
                      iVar65 = iVar65 + (uint)(byte)((ulong)uVar76 >> 0x10);
                      iVar66 = iVar66 + (uint)(byte)((ulong)uVar76 >> 0x18);
                      iVar67 = iVar67 + (CONCAT12(bVar38,(ushort)(byte)((ulong)uVar75 >> 0x20)) &
                                        0xffff);
                      iVar68 = iVar68 + (uint)bVar38;
                      iVar69 = iVar69 + (uint)(byte)((ulong)uVar75 >> 0x30);
                      iVar70 = iVar70 + (uint)(byte)((ulong)uVar75 >> 0x38);
                      iVar58 = iVar58 + ((CONCAT12(bVar33,(short)uVar75) & 0xff00ff) & 0xffff);
                      iVar60 = iVar60 + (uint)bVar33;
                      iVar61 = iVar61 + (uint)(byte)((ulong)uVar75 >> 0x10);
                      iVar62 = iVar62 + (uint)(byte)((ulong)uVar75 >> 0x18);
                      auVar41 = auVar42;
                      auVar44 = auVar45;
                    } while (uVar31 != 0);
                    uVar39 = iVar58 + auVar42._0_4_ + iVar63 + iVar47 +
                             iVar67 + auVar45._0_4_ + iVar71 + iVar52 +
                             iVar60 + auVar42._4_4_ + iVar64 + iVar48 +
                             iVar68 + auVar45._4_4_ + iVar72 + iVar55 +
                             iVar61 + auVar42._8_4_ + iVar65 + iVar49 +
                             iVar69 + auVar45._8_4_ + iVar73 + iVar56 +
                             iVar62 + auVar42._12_4_ + iVar66 + iVar50 +
                             iVar70 + auVar45._12_4_ + iVar74 + iVar57;
                    if (uVar53 != uVar29) {
                      uVar31 = uVar53;
                      if (uVar26 == 0) goto LAB_0010d374;
                      goto LAB_0010d460;
                    }
                  }
                }
                uVar22 = uVar22 + 1;
                uVar3 = uVar3 + iVar16;
              } while (uVar22 != uVar27);
            }
            uVar7 = 0;
            if (uVar54 != 0) {
              uVar7 = (undefined)(uVar39 / uVar54);
            }
            uVar20 = uVar20 + 1;
            uVar24 = uVar24 + uVar27;
            *(undefined *)((long)__dest + (ulong)(uint)(iVar28 * iVar5 + iVar21)) = uVar7;
          } while (uVar20 != (uVar59 & 0xffffffff));
        }
        iVar28 = iVar28 + 1;
        uVar51 = uVar51 + iVar6;
      } while (iVar28 != iVar19);
    }
  }
  else {
    iVar19 = *(int *)param_1;
    if ((iVar19 == 0x11) || (iVar19 == 0x23)) {
      uVar59 = (ulong)uVar54;
      if (iVar16 == iVar5) {
        memcpy(__dest,__src,(ulong)(iVar16 * uVar54));
      }
      else if (uVar54 != 0) {
        uVar51 = 0;
        uVar27 = 0;
        do {
          memcpy((void *)((long)__dest + (ulong)uVar51),(void *)((long)__src + (ulong)uVar27),
                 uVar53 & 0xffffffff);
          uVar59 = uVar59 - 1;
          uVar27 = uVar27 + iVar16;
          uVar51 = uVar51 + iVar5;
        } while (uVar59 != 0);
      }
    }
    else {
      if (iVar19 != 0x36) {
        if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 7) &&
           (((byte)*PTR_gMiCamLogGroup_00114b60 >> 6 & 1) != 0)) {
          pcVar17 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                      );
          iVar16 = midebug::Log::catchLogEncryptLog
                             (0x40,pcVar17,0x221,"DoProcessLinearYuvInput",'E',
                              " Fatal error occurred and abort() was triggered, check it!");
          if (iVar16 == 0) {
            uVar40 = midebug::Log::miaGroupToString(0x40);
            uVar18 = midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
            __android_log_print(6,"MiAlgoEngine",
                                "%s %s:%d %s() Fatal error occurred and abort() was triggered, check it!"
                                ,uVar40,uVar18,0x221,"DoProcessLinearYuvInput");
          }
        }
        if ((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 7) &&
           (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 6 & 1) != 0)) {
          pcVar17 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                      );
          midebug::Log::logSystem
                    (0x40,"E",pcVar17,"DoProcessLinearYuvInput",0x221,
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
      if (uVar54 != 0) {
        uVar59 = uVar53 & 0xffffffff;
        uVar24 = 0;
        uVar26 = 0;
        uVar27 = 0;
        uVar29 = uVar53 & 0xfffffff8;
        uVar30 = uVar53 & 0xffffffe0;
        do {
          if (uVar51 != 0) {
            if (uVar51 < 8) {
              uVar20 = 0;
            }
            else {
              uVar20 = 0;
              uVar39 = (uint)(uVar59 - 1);
              if ((((CARRY4(iVar5 * uVar27,uVar39) == false) &&
                   (CARRY4(iVar16 * uVar27,uVar39) == false)) && (uVar59 - 1 >> 0x20 == 0)) &&
                 (0x1f < (long)__dest +
                         ((ulong)(iVar5 * uVar27) - ((long)__src + (ulong)(iVar16 * uVar27))))) {
                uVar20 = uVar30;
                uVar39 = uVar24;
                uVar22 = uVar26;
                if (uVar51 < 0x20) {
                  uVar20 = 0;
                }
                else {
                  do {
                    pauVar1 = (undefined (*) [16])((long)__src + (ulong)uVar22);
                    puVar2 = (undefined8 *)((long)__dest + (ulong)uVar39);
                    uVar20 = uVar20 - 0x20;
                    auVar41 = *pauVar1;
                    uVar8 = *(undefined4 *)pauVar1[1];
                    uVar9 = *(undefined4 *)(pauVar1[1] + 4);
                    uVar10 = *(undefined4 *)(pauVar1[1] + 8);
                    uVar11 = *(undefined4 *)(pauVar1[1] + 0xc);
                    puVar2[1] = auVar41._8_8_;
                    *puVar2 = auVar41._0_8_;
                    *(undefined4 *)(puVar2 + 4) = uVar10;
                    *(undefined4 *)((long)puVar2 + 0x24) = uVar11;
                    *(undefined4 *)(puVar2 + 2) = uVar8;
                    *(undefined4 *)((long)puVar2 + 0x14) = uVar9;
                    uVar39 = uVar39 + 0x20;
                    uVar22 = uVar22 + 0x20;
                  } while (uVar20 != 0);
                  if (uVar30 == uVar59) goto LAB_0010d124;
                  uVar20 = uVar30;
                  if ((uVar53 & 0x18) == 0) goto LAB_0010d148;
                }
                lVar23 = uVar20 - uVar29;
                do {
                  iVar19 = (int)uVar20;
                  lVar23 = lVar23 + 8;
                  uVar20 = (ulong)(iVar19 + 8);
                  *(undefined8 *)((long)__dest + (ulong)(uVar24 + iVar19)) =
                       *(undefined8 *)((long)__src + (ulong)(uVar26 + iVar19));
                } while (lVar23 != 0);
                uVar20 = uVar29;
                if (uVar29 == uVar59) goto LAB_0010d124;
              }
            }
LAB_0010d148:
            lVar23 = uVar59 - uVar20;
            do {
              iVar19 = (int)uVar20;
              lVar23 = lVar23 + -1;
              uVar20 = (ulong)(iVar19 + 1);
              *(undefined *)((long)__dest + (ulong)(uVar24 + iVar19)) =
                   *(undefined *)((long)__src + (ulong)(uVar26 + iVar19));
            } while (lVar23 != 0);
          }
LAB_0010d124:
          uVar27 = uVar27 + 1;
          uVar26 = uVar26 + iVar16;
          uVar24 = uVar24 + iVar5;
        } while (uVar27 != uVar54);
      }
    }
  }
  return 0;
}


// ===== 0xc8b4 DoProcessLinearYuvInput<unsigned_short> @ 0010c8b4

/* int GainMapPlugin::DoProcessLinearYuvInput<unsigned short>(ImageParams*,
   std::__1::shared_ptr<GainMapPlugin::gainmapOutImgWrapper>) */

int __thiscall
GainMapPlugin::DoProcessLinearYuvInput<unsigned_short>
          (GainMapPlugin *this,ImageParams *param_1,shared_ptr param_2)

{
  undefined (*pauVar1) [16];
  undefined8 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined uVar7;
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  void *__src;
  void *__dest;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  ulong uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  
  uVar22 = DAT_0011806c;
  puVar10 = PTR_gMiCamLogLevel_00114b58;
  lVar18 = *(long *)(ulong)param_2;
  uVar26 = *(ulong *)(param_1 + 4);
  uVar38 = (uint)uVar26;
  uVar40 = (uint)(uVar26 >> 0x20);
  __src = *(void **)(param_1 + 0x80);
  uVar44 = *(ulong *)(lVar18 + 4);
  uVar5 = *(uint *)(param_1 + 0x38) >> 1;
  __dest = *(void **)(lVar18 + 0x80);
  uVar4 = *(uint *)(lVar18 + 0x38);
  uVar29 = NEON_cmeq(uVar26,uVar44,4);
  if (((uint)uVar29 & (uint)((ulong)uVar29 >> 0x20) & 1) == 0) {
    iVar13 = *(int *)(this + 0x78);
    uVar19 = (ulong)DAT_0011806c;
    piVar20 = &DAT_00118070;
    if (iVar13 != 0x80f3) {
      piVar3 = &DAT_00118070;
      if (iVar13 != 0x9007) {
        piVar3 = (int *)&DAT_0011806c;
      }
      piVar20 = &DAT_00118070;
      if (iVar13 != 0x9004) {
        piVar20 = piVar3;
      }
    }
    iVar13 = *piVar20;
    auVar32 = NEON_fmov(0xbff0000000000000,8);
    auVar30._0_4_ = iVar13 + uVar38;
    auVar30._4_4_ = 0;
    auVar30._8_4_ = iVar13 + uVar40;
    auVar30._12_4_ = 0;
    auVar30 = NEON_ucvtf(auVar30,8);
    uVar29 = NEON_cmeq(uVar44,CONCAT44((int)(long)(double)(long)((auVar30._8_8_ + auVar32._8_8_) /
                                                                (double)iVar13) +
                                       SUB164(ZEXT816(0x100000001),4),
                                       (int)(long)(double)(long)((auVar30._0_8_ + auVar32._0_8_) /
                                                                (double)iVar13) +
                                       SUB164(ZEXT816(0x100000001),0)) & 0xfffffffefffffffe,4);
    iVar13 = (int)(uVar44 >> 0x20);
    if (((uint)uVar29 & (uint)((ulong)uVar29 >> 0x20) & 1) == 0) {
      if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 5) &&
         (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
        pcVar14 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        iVar13 = midebug::Log::catchLogEncryptLog
                           (2,pcVar14,0x228,"DoProcessLinearYuvInput",'I',
                            "invalid param: %d/%d,%d/%d,scale=%d",uVar26 & 0xffffffff,
                            uVar44 & 0xffffffff,uVar40);
        if (iVar13 == 0) {
          uVar29 = midebug::Log::miaGroupToString(2);
          uVar15 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                             );
          __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()invalid param: %d/%d,%d/%d,scale=%d",
                              uVar29,uVar15,0x228,"DoProcessLinearYuvInput",uVar26 & 0xffffffff,
                              (int)uVar44);
        }
      }
      puVar11 = PTR_gMiCamOfflineLogLevel_00114b68;
      if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
          (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
         (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
        pcVar14 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        midebug::Log::logSystem
                  (2,"I",pcVar14,"DoProcessLinearYuvInput",0x228,
                   "invalid param: %d/%d,%d/%d,scale=%d",uVar26 & 0xffffffff,uVar44 & 0xffffffff,
                   uVar40);
      }
      if ((*(uint *)puVar10 < 7) && (((byte)*PTR_gMiCamLogGroup_00114b60 >> 6 & 1) != 0)) {
        pcVar14 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        iVar13 = midebug::Log::catchLogEncryptLog
                           (0x40,pcVar14,0x229,"DoProcessLinearYuvInput",'E',
                            " Fatal error occurred and abort() was triggered, check it!");
        if (iVar13 == 0) {
          uVar29 = midebug::Log::miaGroupToString(0x40);
          uVar15 = midebug::Log::getFileName
                             (
                             "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                             );
          __android_log_print(6,"MiAlgoEngine",
                              "%s %s:%d %s() Fatal error occurred and abort() was triggered, check it!"
                              ,uVar29,uVar15,0x229,"DoProcessLinearYuvInput");
        }
      }
      if ((*(uint *)puVar11 < 7) && (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 6 & 1) != 0)) {
        pcVar14 = (char *)midebug::Log::getFileName
                                    (
                                    "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                    );
        midebug::Log::logSystem
                  (0x40,"E",pcVar14,"DoProcessLinearYuvInput",0x229,
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
    if (iVar13 != 0) {
      uVar40 = DAT_0011806c * DAT_0011806c;
      iVar6 = DAT_0011806c * uVar5;
      uVar38 = 0;
      iVar23 = 0;
      uVar26 = uVar19 & 0x7ffffff0;
      do {
        if ((int)uVar44 != 0) {
          uVar25 = 0;
          uVar21 = uVar38;
          do {
            iVar12 = (int)uVar25;
            if ((int)uVar22 < 1) {
              uVar28 = 0;
            }
            else {
              uVar17 = 0;
              uVar28 = 0;
              uVar24 = uVar21;
              do {
                if (uVar22 < 0x10) {
                  uVar16 = 0;
LAB_0010cbd0:
                  uVar27 = uVar24 + (int)uVar16;
                  lVar18 = uVar19 - uVar16;
                  do {
                    uVar16 = (ulong)uVar27;
                    lVar18 = lVar18 + -1;
                    uVar27 = uVar27 + 1;
                    uVar28 = uVar28 + *(ushort *)((long)__src + uVar16 * 2);
                  } while (lVar18 != 0);
                }
                else {
                  uVar16 = 0;
                  if ((CARRY4(iVar23 * iVar6 + iVar12 * uVar22 + uVar5 * uVar17,(uint)(uVar19 - 1)))
                     || (uVar19 - 1 >> 0x20 != 0)) goto LAB_0010cbd0;
                  iVar34 = 0;
                  iVar35 = 0;
                  iVar36 = 0;
                  iVar37 = 0;
                  iVar39 = 0;
                  iVar41 = 0;
                  iVar42 = 0;
                  iVar43 = 0;
                  uVar16 = uVar26;
                  auVar30 = ZEXT416(uVar28);
                  auVar32 = ZEXT816(0);
                  uVar28 = uVar24;
                  do {
                    puVar2 = (undefined8 *)((long)__src + (ulong)uVar28 * 2);
                    uVar16 = uVar16 - 0x10;
                    uVar28 = uVar28 + 0x10;
                    uVar15 = puVar2[1];
                    uVar29 = *puVar2;
                    uVar46 = puVar2[3];
                    uVar45 = puVar2[2];
                    auVar33._0_4_ = auVar32._0_4_ + (uint)(ushort)uVar15;
                    auVar33._4_4_ = auVar32._4_4_ + (uint)(ushort)((ulong)uVar15 >> 0x10);
                    auVar33._8_4_ = auVar32._8_4_ + (uint)(ushort)((ulong)uVar15 >> 0x20);
                    auVar33._12_4_ = auVar32._12_4_ + (uint)(ushort)((ulong)uVar15 >> 0x30);
                    auVar31._0_4_ = auVar30._0_4_ + (uint)(ushort)uVar29;
                    auVar31._4_4_ = auVar30._4_4_ + (uint)(ushort)((ulong)uVar29 >> 0x10);
                    auVar31._8_4_ = auVar30._8_4_ + (uint)(ushort)((ulong)uVar29 >> 0x20);
                    auVar31._12_4_ = auVar30._12_4_ + (uint)(ushort)((ulong)uVar29 >> 0x30);
                    iVar39 = iVar39 + (uint)(ushort)uVar46;
                    iVar41 = iVar41 + (uint)(ushort)((ulong)uVar46 >> 0x10);
                    iVar42 = iVar42 + (uint)(ushort)((ulong)uVar46 >> 0x20);
                    iVar43 = iVar43 + (uint)(ushort)((ulong)uVar46 >> 0x30);
                    iVar34 = iVar34 + (uint)(ushort)uVar45;
                    iVar35 = iVar35 + (uint)(ushort)((ulong)uVar45 >> 0x10);
                    iVar36 = iVar36 + (uint)(ushort)((ulong)uVar45 >> 0x20);
                    iVar37 = iVar37 + (uint)(ushort)((ulong)uVar45 >> 0x30);
                    auVar30 = auVar31;
                    auVar32 = auVar33;
                  } while (uVar16 != 0);
                  uVar28 = iVar34 + auVar31._0_4_ + iVar39 + auVar33._0_4_ +
                           iVar35 + auVar31._4_4_ + iVar41 + auVar33._4_4_ +
                           iVar36 + auVar31._8_4_ + iVar42 + auVar33._8_4_ +
                           iVar37 + auVar31._12_4_ + iVar43 + auVar33._12_4_;
                  uVar16 = uVar26;
                  if (uVar26 != uVar19) goto LAB_0010cbd0;
                }
                uVar17 = uVar17 + 1;
                uVar24 = uVar24 + uVar5;
              } while (uVar17 != uVar22);
            }
            uVar7 = 0;
            if (uVar40 != 0) {
              uVar7 = (undefined)(uVar28 / uVar40 >> 8);
            }
            uVar25 = uVar25 + 1;
            uVar21 = uVar21 + uVar22;
            *(undefined *)((long)__dest + (ulong)(iVar23 * uVar4 + iVar12)) = uVar7;
          } while (uVar25 != (uVar44 & 0xffffffff));
        }
        iVar23 = iVar23 + 1;
        uVar38 = uVar38 + iVar6;
      } while (iVar23 != iVar13);
    }
  }
  else {
    iVar13 = *(int *)param_1;
    if ((iVar13 == 0x11) || (iVar13 == 0x23)) {
      uVar44 = (ulong)uVar40;
      if (uVar5 == uVar4) {
        memcpy(__dest,__src,(ulong)(uVar5 * uVar40));
      }
      else if (uVar40 != 0) {
        uVar38 = 0;
        uVar22 = 0;
        do {
          memcpy((void *)((long)__dest + (ulong)uVar38),(void *)((long)__src + (ulong)uVar22 * 2),
                 uVar26 & 0xffffffff);
          uVar44 = uVar44 - 1;
          uVar22 = uVar22 + uVar5;
          uVar38 = uVar38 + uVar4;
        } while (uVar44 != 0);
      }
    }
    else {
      if (iVar13 != 0x36) {
        if ((*(uint *)PTR_gMiCamLogLevel_00114b58 < 7) &&
           (((byte)*PTR_gMiCamLogGroup_00114b60 >> 6 & 1) != 0)) {
          pcVar14 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                      );
          iVar13 = midebug::Log::catchLogEncryptLog
                             (0x40,pcVar14,0x221,"DoProcessLinearYuvInput",'E',
                              " Fatal error occurred and abort() was triggered, check it!");
          if (iVar13 == 0) {
            uVar29 = midebug::Log::miaGroupToString(0x40);
            uVar15 = midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
            __android_log_print(6,"MiAlgoEngine",
                                "%s %s:%d %s() Fatal error occurred and abort() was triggered, check it!"
                                ,uVar29,uVar15,0x221,"DoProcessLinearYuvInput");
          }
        }
        if ((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 7) &&
           (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 6 & 1) != 0)) {
          pcVar14 = (char *)midebug::Log::getFileName
                                      (
                                      "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                                      );
          midebug::Log::logSystem
                    (0x40,"E",pcVar14,"DoProcessLinearYuvInput",0x221,
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
      if (uVar40 != 0) {
        uVar19 = uVar26 & 0xffffffff;
        uVar28 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar25 = uVar26 & 0xfffffff8;
        uVar44 = uVar26 & 0xffffffe0;
        do {
          if (uVar38 != 0) {
            if (uVar38 < 8) {
LAB_0010c980:
              uVar16 = 0;
            }
            else {
              uVar17 = uVar4 * uVar22;
              uVar16 = 0;
              uVar24 = (uint)(uVar19 - 1);
              if (((CARRY4(uVar17,uVar24) == false) && (CARRY4(uVar5 * uVar22,uVar24) == false)) &&
                 (uVar19 - 1 >> 0x20 == 0)) {
                lVar18 = (ulong)(uVar5 * uVar22) * 2;
                if (((long)__dest + (ulong)uVar17 < (long)__src + lVar18 + uVar19 * 2) &&
                   ((void *)((long)__src + lVar18) < (void *)((long)__dest + uVar17 + uVar19)))
                goto LAB_0010c980;
                uVar16 = uVar44;
                uVar17 = uVar28;
                uVar24 = uVar21;
                if (uVar38 < 0x20) {
                  uVar16 = 0;
                }
                else {
                  do {
                    pauVar1 = (undefined (*) [16])((long)__src + (ulong)uVar24 * 2);
                    uVar16 = uVar16 - 0x20;
                    auVar32 = *pauVar1;
                    auVar30 = pauVar1[1];
                    uVar15 = *(undefined8 *)(pauVar1[2] + 8);
                    auVar9 = *(undefined (*) [12])pauVar1[2];
                    uVar29 = *(undefined8 *)(pauVar1[3] + 8);
                    auVar8 = *(undefined (*) [12])pauVar1[3];
                    puVar2 = (undefined8 *)((long)__dest + (ulong)uVar17);
                    auVar32._0_8_ =
                         CONCAT17(auVar32[0xf],
                                  CONCAT16(auVar32[0xd],
                                           CONCAT15(auVar32[0xb],
                                                    CONCAT14(auVar32[9],
                                                             CONCAT13(auVar32[7],
                                                                      CONCAT12(auVar32[5],
                                                                               CONCAT11(auVar32[3],
                                                                                        auVar32[1]))
                                                                     )))));
                    auVar32[8] = auVar30[1];
                    auVar32[9] = auVar30[3];
                    auVar32[10] = auVar30[5];
                    auVar32[0xb] = auVar30[7];
                    auVar32[0xc] = auVar30[9];
                    auVar32[0xd] = auVar30[0xb];
                    auVar32[0xf] = auVar30[0xf];
                    auVar32[0xe] = auVar30[0xd];
                    puVar2[1] = auVar32._8_8_;
                    *puVar2 = auVar32._0_8_;
                    *(char *)(puVar2 + 4) = auVar8[1];
                    *(char *)((long)puVar2 + 0x21) = auVar8[3];
                    *(char *)((long)puVar2 + 0x22) = auVar8[5];
                    *(char *)((long)puVar2 + 0x23) = auVar8[7];
                    *(char *)((long)puVar2 + 0x24) = auVar8[9];
                    *(char *)((long)puVar2 + 0x25) = auVar8[0xb];
                    *(char *)((long)puVar2 + 0x26) = (char)((ulong)uVar29 >> 0x28);
                    *(char *)((long)puVar2 + 0x27) = (char)((ulong)uVar29 >> 0x38);
                    *(char *)(puVar2 + 2) = auVar9[1];
                    *(char *)((long)puVar2 + 0x11) = auVar9[3];
                    *(char *)((long)puVar2 + 0x12) = auVar9[5];
                    *(char *)((long)puVar2 + 0x13) = auVar9[7];
                    *(char *)((long)puVar2 + 0x14) = auVar9[9];
                    *(char *)((long)puVar2 + 0x15) = auVar9[0xb];
                    *(char *)((long)puVar2 + 0x16) = (char)((ulong)uVar15 >> 0x28);
                    *(char *)((long)puVar2 + 0x17) = (char)((ulong)uVar15 >> 0x38);
                    uVar17 = uVar17 + 0x20;
                    uVar24 = uVar24 + 0x20;
                  } while (uVar16 != 0);
                  if (uVar44 == uVar19) goto LAB_0010c960;
                  uVar16 = uVar44;
                  if ((uVar26 & 0x18) == 0) goto LAB_0010c984;
                }
                lVar18 = uVar16 - uVar25;
                do {
                  iVar13 = (int)uVar16;
                  lVar18 = lVar18 + 8;
                  auVar30 = *(undefined (*) [16])((long)__src + (ulong)(uVar21 + iVar13) * 2);
                  uVar16 = (ulong)(iVar13 + 8);
                  *(ulong *)((long)__dest + (ulong)(uVar28 + iVar13)) =
                       CONCAT17(auVar30[0xf],
                                CONCAT16(auVar30[0xd],
                                         CONCAT15(auVar30[0xb],
                                                  CONCAT14(auVar30[9],
                                                           CONCAT13(auVar30[7],
                                                                    CONCAT12(auVar30[5],
                                                                             CONCAT11(auVar30[3],
                                                                                      auVar30[1]))))
                                                 )));
                } while (lVar18 != 0);
                uVar16 = uVar25;
                if (uVar25 == uVar19) goto LAB_0010c960;
              }
            }
LAB_0010c984:
            lVar18 = uVar19 - uVar16;
            do {
              iVar13 = (int)uVar16;
              lVar18 = lVar18 + -1;
              uVar16 = (ulong)(iVar13 + 1);
              *(undefined *)((long)__dest + (ulong)(uVar28 + iVar13)) =
                   *(undefined *)((long)__src + (ulong)(uVar21 + iVar13) * 2 + 1);
            } while (lVar18 != 0);
          }
LAB_0010c960:
          uVar22 = uVar22 + 1;
          uVar21 = uVar21 + uVar5;
          uVar28 = uVar28 + uVar4;
        } while (uVar22 != uVar40);
      }
    }
  }
  return 0;
}


// ===== 0x8818 initialize @ 00108818

/* GainMapPlugin::initialize(CreateInfo*, MiaNodeInterface) */

undefined8 __thiscall
GainMapPlugin::initialize(GainMapPlugin *this,CreateInfo *param_1,MiaNodeInterface param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar2 = PTR_gMiCamLogLevel_00114b58;
  puVar11 = (undefined8 *)(ulong)param_2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x3c);
  puVar3 = PTR_gMiCamLogGroup_00114b60;
  uVar1 = *(uint *)puVar2;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x40);
  if ((uVar1 < 5) && (((byte)*puVar3 >> 1 & 1) != 0)) {
    pcVar8 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
    iVar7 = midebug::Log::catchLogEncryptLog
                      (2,pcVar8,0xc4,"initialize",'I',
                       "[GainMapPlugin] init framework camera id = %d",(ulong)*(uint *)(this + 8));
    if (iVar7 == 0) {
      uVar9 = midebug::Log::miaGroupToString(2);
      uVar10 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                         );
      __android_log_print(4,"MiAlgoEngine",
                          "%s %s:%d %s()[GainMapPlugin] init framework camera id = %d",uVar9,uVar10,
                          0xc4,"initialize",*(undefined4 *)(this + 8));
    }
  }
  puVar6 = PTR_gMiCamDebugMask_00114b78;
  puVar5 = PTR_gMiCamOfflineLogGroup_00114b70;
  puVar4 = PTR_gMiCamOfflineLogLevel_00114b68;
  if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
      (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
     (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
    pcVar8 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
    midebug::Log::logSystem
              (2,"I",pcVar8,"initialize",0xc4,"[GainMapPlugin] init framework camera id = %d",
               (ulong)*(uint *)(this + 8));
  }
  if ((*(uint *)puVar2 < 5) && (((byte)*puVar3 >> 1 & 1) != 0)) {
    pcVar8 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
    iVar7 = midebug::Log::catchLogEncryptLog(2,pcVar8,0xc5,"initialize",'I',"%p",this);
    if (iVar7 == 0) {
      uVar9 = midebug::Log::miaGroupToString(2);
      uVar10 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                         );
      __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()%p",uVar9,uVar10,0xc5,"initialize",this);
    }
  }
  if (((*(uint *)puVar4 < 5) && (((byte)*puVar5 >> 1 & 1) != 0)) && (*(int *)puVar6 != 0)) {
    pcVar8 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
    midebug::Log::logSystem(2,"I",pcVar8,"initialize",0xc5,"%p",this);
  }
  uVar12 = puVar11[2];
  uVar10 = puVar11[5];
  uVar9 = puVar11[4];
  uVar14 = puVar11[1];
  uVar13 = *puVar11;
  *(undefined8 *)(this + 0x28) = puVar11[3];
  *(undefined8 *)(this + 0x20) = uVar12;
  *(undefined8 *)(this + 0x38) = uVar10;
  *(undefined8 *)(this + 0x30) = uVar9;
  *(undefined8 *)(this + 0x18) = uVar14;
  *(undefined8 *)(this + 0x10) = uVar13;
  uVar15 = puVar11[9];
  uVar14 = puVar11[8];
  uVar10 = puVar11[0xb];
  uVar9 = puVar11[10];
  uVar13 = puVar11[7];
  uVar12 = puVar11[6];
  *(undefined8 *)(this + 0x70) = puVar11[0xc];
  *(undefined8 *)(this + 0x58) = uVar15;
  *(undefined8 *)(this + 0x50) = uVar14;
  *(undefined8 *)(this + 0x68) = uVar10;
  *(undefined8 *)(this + 0x60) = uVar9;
  *(undefined8 *)(this + 0x48) = uVar13;
  *(undefined8 *)(this + 0x40) = uVar12;
  return 0;
}


