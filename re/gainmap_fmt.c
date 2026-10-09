// ===== 0xdbb0 customizeOutBufferFormats @ 0010dbb0

/* GainMapPlugin::customizeOutBufferFormats(std::__1::map<int, MiaFrameInfo, std::__1::less<int>,
   std::__1::allocator<std::__1::pair<int const, MiaFrameInfo> > >&, std::__1::map<int,
   MiaFrameInfo, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, MiaFrameInfo> >
   > const&, std::__1::map<int, MiaFrameInfo, std::__1::less<int>,
   std::__1::allocator<std::__1::pair<int const, MiaFrameInfo> > > const&,
   mialgo2::customizeOutExtend const&) */

void GainMapPlugin::customizeOutBufferFormats
               (map *param_1,map *param_2,map *param_3,customizeOutExtend *param_4)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar21;
  undefined auVar20 [16];
  undefined auVar22 [16];
  undefined4 local_64;
  
  lVar3 = tpidr_el0;
  lVar13 = *(long *)(lVar3 + 0x28);
  lVar14 = *(long *)param_3;
  iVar7 = *(int *)(param_1 + 0x78);
  auVar4 = *(undefined (*) [16])(lVar14 + 0x34);
  auVar5 = *(undefined (*) [16])(lVar14 + 0x44);
  uVar11 = *(undefined8 *)(lVar14 + 0x58);
  uVar10 = *(undefined8 *)(lVar14 + 0x50);
  local_64 = (undefined4)uVar10;
  piVar15 = &DAT_00118070;
  if (iVar7 != 0x80f3) {
    piVar1 = &DAT_00118070;
    if (iVar7 != 0x9007) {
      piVar1 = &DAT_0011806c;
    }
    piVar15 = &DAT_00118070;
    if (iVar7 != 0x9004) {
      piVar15 = piVar1;
    }
  }
  iVar7 = *piVar15;
  puVar16 = (undefined8 *)(param_2 + 8);
  auVar20._0_4_ = iVar7 + (int)*(undefined8 *)(lVar14 + 0x2c);
  auVar22 = NEON_fmov(0xbff0000000000000,8);
  auVar20._4_4_ = 0;
  auVar20._8_4_ = iVar7 + (int)((ulong)*(undefined8 *)(lVar14 + 0x2c) >> 0x20);
  auVar20._12_4_ = 0;
  auVar20 = NEON_ucvtf(auVar20,8);
  uVar18 = (int)(long)(double)(long)((auVar20._0_8_ + auVar22._0_8_) / (double)iVar7) +
           SUB164(ZEXT816(0x100000001),0);
  uVar19 = CONCAT44((int)(long)(double)(long)((auVar20._8_8_ + auVar22._8_8_) / (double)iVar7) +
                    SUB164(ZEXT816(0x100000001),4),uVar18) & 0xfffffffefffffffe;
  puVar12 = (undefined8 *)*puVar16;
  puVar17 = puVar16;
  if ((undefined8 *)*puVar16 != (undefined8 *)0x0) {
    do {
      while (puVar8 = puVar12, puVar16 = puVar8, 0 < *(int *)(puVar8 + 4)) {
        puVar12 = (undefined8 *)*puVar8;
        puVar17 = puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_0010dcb4;
      }
      if (-1 < *(int *)(puVar8 + 4)) goto LAB_0010dd20;
      puVar12 = (undefined8 *)puVar8[1];
    } while ((undefined8 *)puVar8[1] != (undefined8 *)0x0);
    puVar17 = puVar8 + 1;
  }
LAB_0010dcb4:
  puVar8 = (undefined8 *)operator_new(0x60);
  *(undefined4 *)(puVar8 + 4) = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  *(undefined4 *)(puVar8 + 9) = 1;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[8] = 0;
  puVar8[7] = 0;
  puVar8[2] = puVar16;
  puVar8[0xb] = 0xffffffff;
  *puVar17 = puVar8;
  puVar12 = puVar8;
  if (**(long **)param_2 != 0) {
    *(long *)param_2 = **(long **)param_2;
    puVar12 = (undefined8 *)*puVar17;
  }
  std::__1::__tree_balance_after_insert_abi_ne200000_<std::__1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(param_2 + 8),(__tree_node_base *)puVar12);
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
LAB_0010dd20:
  puVar6 = PTR_gMiCamLogLevel_00114b58;
  *(undefined4 *)(puVar8 + 5) = 0x20203859;
  uVar2 = *(uint *)puVar6;
  *(ulong *)((long)puVar8 + 0x2c) = uVar19;
  auVar22._12_4_ = local_64;
  auVar22._0_12_ = auVar5._0_12_;
  *(long *)((long)puVar8 + 0x3c) = auVar4._8_8_;
  *(long *)((long)puVar8 + 0x34) = auVar4._0_8_;
  *(long *)((long)puVar8 + 0x4c) = auVar22._8_8_;
  *(long *)((long)puVar8 + 0x44) = auVar5._0_8_;
  puVar8[0xb] = uVar11;
  puVar8[10] = uVar10;
  uVar21 = (uint)(uVar19 >> 0x20);
  if ((uVar2 < 5) && (((byte)*PTR_gMiCamLogGroup_00114b60 >> 1 & 1) != 0)) {
    pcVar9 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
    iVar7 = midebug::Log::catchLogEncryptLog
                      (2,pcVar9,0x2fc,"customizeOutBufferFormats",'I',
                       "set customOutSize size(%d,%d),fmt=%d",(ulong)uVar18 & 0xfffffffe,
                       (ulong)uVar21,0x20203859);
    if (iVar7 == 0) {
      uVar10 = midebug::Log::miaGroupToString(2);
      uVar11 = midebug::Log::getFileName
                         (
                         "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                         );
      __android_log_print(4,"MiAlgoEngine","%s %s:%d %s()set customOutSize size(%d,%d),fmt=%d",
                          uVar10,uVar11,0x2fc,"customizeOutBufferFormats",uVar18 & 0xfffffffe,uVar21
                          ,0x20203859);
    }
  }
  if (((*(uint *)PTR_gMiCamOfflineLogLevel_00114b68 < 5) &&
      (((byte)*PTR_gMiCamOfflineLogGroup_00114b70 >> 1 & 1) != 0)) &&
     (*(int *)PTR_gMiCamDebugMask_00114b78 != 0)) {
    pcVar9 = (char *)midebug::Log::getFileName
                               (
                               "vendor/xiaomi/proprietary/mivifwk/external/odm/plugins/general/gainmap/GainMapPlugin.cpp"
                               );
    if (*(long *)(lVar3 + 0x28) != lVar13) {
LAB_0010dec0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    midebug::Log::logSystem
              (2,"I",pcVar9,"customizeOutBufferFormats",0x2fc,"set customOutSize size(%d,%d),fmt=%d"
               ,(ulong)uVar18 & 0xfffffffe,(ulong)uVar21,0x20203859);
  }
  else if (*(long *)(lVar3 + 0x28) != lVar13) goto LAB_0010dec0;
  return;
}


