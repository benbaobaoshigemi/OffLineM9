// ===== 0x28ba80 FUN_0038b760 @ 0038b760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0038b760(long param_1,long param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  
  lVar13 = *(long *)(param_1 + 0x98);
  if (lVar13 != 0) {
    lVar9 = *(long *)(param_2 + 0x30);
    puVar8 = *(undefined8 **)(param_2 + 0x100);
    *(undefined8 *)(lVar13 + 0x70) = *(undefined8 *)(param_1 + 0xb4);
    iVar1 = *(int *)(lVar9 + 0x30a4);
    uVar10 = *puVar8;
    uVar12 = puVar8[0x199];
    *(int *)(lVar13 + 0x34) = iVar1;
    *(undefined8 *)(lVar13 + 0x38) = uVar10;
    *(undefined8 *)(lVar13 + 0x68) = uVar12;
    dVar6 = _UNK_001e6b98;
    dVar5 = _DAT_001e6b90;
    dVar4 = DAT_001e4a40;
    if (iVar1 != 5) {
      dVar17 = (double)((float)iVar1 / 10.0 + (float)iVar1 / 10.0);
      dVar2 = (double)NEON_fmadd(dVar17,DAT_001e49a8,DAT_001e48e0);
      dVar21 = (double)NEON_fmadd(dVar17,DAT_001e4970,DAT_001e4a40);
      dVar22 = (double)NEON_fmadd(dVar17,DAT_001e4a80,DAT_001e4998);
      dVar26 = (double)NEON_fmadd(dVar17,DAT_001e4958,DAT_001e4a40);
      dVar3 = _DAT_001e6730 * dVar17 + _DAT_001e6350;
      dVar25 = _UNK_001e6358 - _UNK_001e6738 * dVar17;
      dVar23 = _DAT_001e6350 + _DAT_001e6d00 * dVar17;
      dVar24 = _UNK_001e6358 + _UNK_001e6d08 * dVar17;
      dVar14 = _DAT_001e5640 * dVar17;
      dVar15 = _UNK_001e5648 * dVar17;
      *(float *)(lVar13 + 0x30) = (float)dVar26;
      *(ulong *)(lVar13 + 0x18) =
           CONCAT44((float)(dVar22 + dVar6 * dVar17),(float)(dVar4 + dVar5 * dVar17));
      *(ulong *)(lVar13 + 0x10) = CONCAT44((float)dVar25,(float)dVar3);
      *(ulong *)(lVar13 + 0x28) = CONCAT44((float)dVar24,(float)dVar23);
      *(ulong *)(lVar13 + 0x20) = CONCAT44((float)(dVar21 + dVar15),(float)(dVar2 + dVar14));
    }
    lVar9 = *(long *)(param_2 + 0xd8);
    puVar11 = *(undefined8 **)(param_2 + 0x118);
    iVar1 = **(int **)(param_2 + 0xc0);
    *(int *)(lVar13 + 0x40) = iVar1;
    uVar10 = *(undefined8 *)(lVar9 + 0x54);
    lVar9 = *(long *)(param_2 + 0x38);
    *(undefined8 *)(lVar13 + 0x4c) = *puVar11;
    *(undefined8 *)(lVar13 + 0x44) = uVar10;
    *(undefined *)(lVar13 + 0x58) = *(undefined *)((long)puVar11 + 9);
    if (lVar9 != 0) {
      *(undefined4 *)(lVar13 + 0x54) = *(undefined4 *)(*(long *)(lVar9 + 8) + 10000);
    }
    if (iVar1 == 1) {
      uVar10 = *(undefined8 *)((long)puVar8 + 0x6c);
      uVar16 = *(undefined8 *)((long)puVar8 + 100);
      uVar12 = *(undefined8 *)((long)puVar8 + 0x5c);
      uVar19 = *(undefined8 *)((long)puVar8 + 0x54);
      uVar18 = *(undefined8 *)((long)puVar8 + 0x4c);
      *(undefined8 *)(lVar13 + 0xa0) = *(undefined8 *)((long)puVar8 + 0x74);
      *(undefined8 *)(lVar13 + 0x98) = uVar10;
      *(undefined8 *)(lVar13 + 0x90) = uVar16;
      *(undefined8 *)(lVar13 + 0x88) = uVar12;
      *(undefined8 *)(lVar13 + 0x80) = uVar19;
      *(undefined8 *)(lVar13 + 0x78) = uVar18;
      uVar10 = *(undefined8 *)((long)puVar8 + 0xac);
      uVar16 = *(undefined8 *)((long)puVar8 + 0xa4);
      uVar12 = *(undefined8 *)((long)puVar8 + 0x9c);
      uVar19 = *(undefined8 *)((long)puVar8 + 0x94);
      uVar18 = *(undefined8 *)((long)puVar8 + 0x8c);
      uVar27 = *(undefined8 *)((long)puVar8 + 0x84);
      uVar20 = *(undefined8 *)((long)puVar8 + 0x7c);
      *(undefined8 *)(lVar13 + 0xe0) = *(undefined8 *)((long)puVar8 + 0xb4);
      *(undefined8 *)(lVar13 + 0xd8) = uVar10;
      *(undefined8 *)(lVar13 + 0xd0) = uVar16;
      *(undefined8 *)(lVar13 + 200) = uVar12;
      *(undefined8 *)(lVar13 + 0xc0) = uVar19;
      *(undefined8 *)(lVar13 + 0xb8) = uVar18;
      *(undefined8 *)(lVar13 + 0xb0) = uVar27;
      *(undefined8 *)(lVar13 + 0xa8) = uVar20;
      uVar12 = *(undefined8 *)((long)puVar8 + 0xf4);
      uVar10 = *(undefined8 *)((long)puVar8 + 0xec);
      uVar16 = *(undefined8 *)((long)puVar8 + 0xdc);
      uVar19 = *(undefined8 *)((long)puVar8 + 0xd4);
      uVar18 = *(undefined8 *)((long)puVar8 + 0xcc);
      uVar28 = *(undefined4 *)((long)puVar8 + 0xbc);
      uVar29 = *(undefined4 *)(puVar8 + 0x18);
      uVar30 = *(undefined4 *)((long)puVar8 + 0xc4);
      uVar31 = *(undefined4 *)(puVar8 + 0x19);
      *(undefined8 *)(lVar13 + 0x110) = *(undefined8 *)((long)puVar8 + 0xe4);
      *(undefined8 *)(lVar13 + 0x108) = uVar16;
      *(undefined8 *)(lVar13 + 0x120) = uVar12;
      *(undefined8 *)(lVar13 + 0x118) = uVar10;
      *(undefined8 *)(lVar13 + 0x100) = uVar19;
      *(undefined8 *)(lVar13 + 0xf8) = uVar18;
      *(undefined4 *)(lVar13 + 0xe8) = uVar28;
      *(undefined4 *)(lVar13 + 0xec) = uVar29;
      *(undefined4 *)(lVar13 + 0xf0) = uVar30;
      *(undefined4 *)(lVar13 + 0xf4) = uVar31;
      uVar19 = *(undefined8 *)((long)puVar8 + 0x114);
      uVar18 = *(undefined8 *)((long)puVar8 + 0x10c);
      uVar16 = *(undefined8 *)((long)puVar8 + 0x124);
      uVar12 = *(undefined8 *)((long)puVar8 + 0x11c);
      uVar20 = *(undefined8 *)((long)puVar8 + 0x104);
      uVar10 = *(undefined8 *)((long)puVar8 + 0xfc);
      *(undefined4 *)(lVar13 + 0x158) = *(undefined4 *)((long)puVar8 + 300);
      *(undefined8 *)(lVar13 + 0x140) = uVar19;
      *(undefined8 *)(lVar13 + 0x138) = uVar18;
      *(undefined8 *)(lVar13 + 0x150) = uVar16;
      *(undefined8 *)(lVar13 + 0x148) = uVar12;
      *(undefined8 *)(lVar13 + 0x130) = uVar20;
      *(undefined8 *)(lVar13 + 0x128) = uVar10;
      uVar10 = *(undefined8 *)(param_1 + 0x184);
      *(undefined4 *)(lVar13 + 0x164) = *(undefined4 *)(param_1 + 0x18c);
      *(undefined8 *)(lVar13 + 0x15c) = uVar10;
      uVar10 = *(undefined8 *)(param_1 + 400);
      *(undefined4 *)(lVar13 + 0x170) = *(undefined4 *)(param_1 + 0x198);
      *(undefined8 *)(lVar13 + 0x168) = uVar10;
      uVar10 = *(undefined8 *)(param_1 + 0x19c);
      *(undefined4 *)(lVar13 + 0x17c) = *(undefined4 *)(param_1 + 0x1a4);
      *(undefined8 *)(lVar13 + 0x174) = uVar10;
      uVar10 = *(undefined8 *)(param_1 + 0x16c);
      *(undefined4 *)(lVar13 + 0x188) = *(undefined4 *)(param_1 + 0x174);
      *(undefined8 *)(lVar13 + 0x180) = uVar10;
      uVar10 = *(undefined8 *)(param_1 + 0x178);
      *(undefined4 *)(lVar13 + 0x194) = *(undefined4 *)(param_1 + 0x180);
      *(undefined8 *)(lVar13 + 0x18c) = uVar10;
      *(undefined4 *)(lVar13 + 0x198) = *(undefined4 *)(param_1 + 0x168);
    }
    if (((byte)PTR_g_logInfo_00648448[0x2a] >> 5 & 1) != 0) {
      pcVar7 = (char *)CamX::Log::GroupToString(0x200000);
      uVar10 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlcolorcorrection141p.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x14ecc1,pcVar7,
                 (double)*(float *)(lVar13 + 0x180),(double)*(float *)(lVar13 + 0x184),
                 SUB84((double)*(float *)(lVar13 + 0x188),0),(double)*(float *)(lVar13 + 0x18c),
                 (double)*(float *)(lVar13 + 400),(double)*(float *)(lVar13 + 0x194),
                 (double)*(float *)(lVar13 + 0x15c),(double)*(float *)(lVar13 + 0x160),uVar10,
                 "FillDependencyData",*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_2 + 0x10)
                 ,*(undefined4 *)(lVar13 + 0x40),**(undefined4 **)(param_2 + 0xc0),
                 *(undefined4 *)(lVar13 + 0x158),*(undefined4 *)(lVar13 + 0x78),
                 *(undefined4 *)(lVar13 + 0x130),*(undefined4 *)(lVar13 + 0x198),
                 (double)*(float *)(lVar13 + 0x164),(double)*(float *)(lVar13 + 0x168),
                 (double)*(float *)(lVar13 + 0x16c),(double)*(float *)(lVar13 + 0x170),
                 (double)*(float *)(lVar13 + 0x174),(double)*(float *)(lVar13 + 0x178),
                 (double)*(float *)(lVar13 + 0x17c));
    }
  }
  return 0;
}


// ===== 0x2c4734 FUN_003c4050 @ 003c4050

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_003c4050(undefined param_1 [16],undefined param_2 [16],float param_3,float param_4,
            undefined8 param_5,ulong param_6,undefined8 param_7,uint param_8,undefined8 param_9,
            undefined8 param_10)

{
  int *piVar1;
  char *pcVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined (*pauVar7) [16];
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  char *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *puVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined4 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  
  auVar16._0_8_ = (double)param_3;
  auVar16._8_8_ = 0;
  auVar28._0_8_ = (double)param_4;
  auVar28._8_8_ = 0;
  CamX::Log::LogSystem
            ((Log *)(BYTE_ARRAY_001ffff9 + 7),param_6,(char *)0x5,param_8,unaff_x21,auVar16,auVar28,
             param_10,"FillDependencyData");
  lVar3 = *(long *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x100) + 0xc88);
  unaff_x22[0xae] = *(long *)(unaff_x20 + 0xb8) + 8;
  unaff_x22[0xd3] = uVar10;
  if (lVar3 != 0) {
    *(undefined4 *)(unaff_x22 + 0xb1) = *(undefined4 *)(*(long *)(lVar3 + 8) + 10000);
  }
  if ((*(int *)(unaff_x19 + 0x10c) == 1) ||
     (lVar3 = *(long *)(unaff_x20 + 0x120), *(int *)(lVar3 + 0x30) == 0)) {
    if ((*(byte *)(unaff_x23 + 0x2a) >> 5 & 1) != 0) {
      pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
      uVar10 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x18eb93,pcVar2,uVar10,
                 "FillDependencyData",*(undefined8 *)(unaff_x19 + 8));
    }
    pauVar7 = (undefined (*) [16])&DAT_001e9ed8;
  }
  else {
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x88) + 0x818);
    auVar24 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 4),4);
    auVar14 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x14),4);
    auVar17 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x24),4);
    auVar19 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x34),4);
    auVar16 = *(undefined (*) [16])(lVar9 + 0x54);
    auVar21 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x74),4);
    auVar25 = *(undefined (*) [16])(lVar9 + 100);
    auVar22 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x84),4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x94);
    auVar20 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x44),4);
    auVar15 = *(undefined (*) [16])(lVar9 + 0xa4);
    unaff_x22[1] = auVar24._8_8_;
    *unaff_x22 = auVar24._0_8_;
    unaff_x22[3] = auVar14._8_8_;
    unaff_x22[2] = auVar14._0_8_;
    auVar24 = NEON_ucvtf(auVar16,4);
    auVar16 = *(undefined (*) [16])(lVar9 + 0x104);
    auVar14 = *(undefined (*) [16])(lVar9 + 0x114);
    auVar25 = NEON_ucvtf(auVar25,4);
    unaff_x22[5] = auVar17._8_8_;
    unaff_x22[4] = auVar17._0_8_;
    unaff_x22[7] = auVar19._8_8_;
    unaff_x22[6] = auVar19._0_8_;
    auVar23 = NEON_ucvtf(auVar28,4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x124);
    auVar17 = *(undefined (*) [16])(lVar9 + 0x134);
    auVar19 = NEON_ucvtf(auVar16,4);
    auVar14 = NEON_ucvtf(auVar14,4);
    auVar16 = *(undefined (*) [16])(lVar9 + 0xb4);
    unaff_x22[9] = auVar20._8_8_;
    unaff_x22[8] = auVar20._0_8_;
    unaff_x22[0xb] = auVar24._8_8_;
    unaff_x22[10] = auVar24._0_8_;
    auVar24 = NEON_ucvtf(auVar15,4);
    auVar20 = NEON_ucvtf(auVar28,4);
    unaff_x22[0xd] = auVar25._8_8_;
    unaff_x22[0xc] = auVar25._0_8_;
    unaff_x22[0xf] = auVar21._8_8_;
    unaff_x22[0xe] = auVar21._0_8_;
    auVar17 = NEON_ucvtf(auVar17,4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0xc4);
    auVar25 = NEON_ucvtf(auVar16,4);
    auVar16 = *(undefined (*) [16])(lVar9 + 0xd4);
    unaff_x22[0x11] = auVar22._8_8_;
    unaff_x22[0x10] = auVar22._0_8_;
    unaff_x22[0x13] = auVar23._8_8_;
    unaff_x22[0x12] = auVar23._0_8_;
    unaff_x22[0x21] = auVar19._8_8_;
    unaff_x22[0x20] = auVar19._0_8_;
    unaff_x22[0x23] = auVar14._8_8_;
    unaff_x22[0x22] = auVar14._0_8_;
    auVar15 = *(undefined (*) [16])(lVar9 + 0x184);
    auVar14 = *(undefined (*) [16])(lVar9 + 0x194);
    auVar21 = NEON_ucvtf(auVar28,4);
    unaff_x22[0x25] = auVar20._8_8_;
    unaff_x22[0x24] = auVar20._0_8_;
    unaff_x22[0x27] = auVar17._8_8_;
    unaff_x22[0x26] = auVar17._0_8_;
    auVar17 = NEON_ucvtf(auVar16,4);
    unaff_x22[0x15] = auVar24._8_8_;
    unaff_x22[0x14] = auVar24._0_8_;
    unaff_x22[0x17] = auVar25._8_8_;
    unaff_x22[0x16] = auVar25._0_8_;
    auVar19 = NEON_ucvtf(auVar15,4);
    auVar20 = NEON_ucvtf(auVar14,4);
    auVar16 = *(undefined (*) [16])(lVar9 + 0x1c4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x1d4);
    auVar23 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0xe4),4);
    auVar24 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x1a4),4);
    auVar15 = *(undefined (*) [16])(lVar9 + 0xf4);
    auVar25 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x1b4),4);
    unaff_x22[0x19] = auVar21._8_8_;
    unaff_x22[0x18] = auVar21._0_8_;
    unaff_x22[0x1b] = auVar17._8_8_;
    unaff_x22[0x1a] = auVar17._0_8_;
    auVar14 = *(undefined (*) [16])(lVar9 + 0x1e4);
    auVar17 = *(undefined (*) [16])(lVar9 + 500);
    auVar21 = NEON_ucvtf(auVar16,4);
    auVar26 = NEON_ucvtf(auVar15,4);
    unaff_x22[0x31] = auVar19._8_8_;
    unaff_x22[0x30] = auVar19._0_8_;
    unaff_x22[0x33] = auVar20._8_8_;
    unaff_x22[0x32] = auVar20._0_8_;
    auVar19 = NEON_ucvtf(auVar28,4);
    auVar20 = NEON_ucvtf(auVar14,4);
    auVar16 = *(undefined (*) [16])(lVar9 + 0x214);
    auVar17 = NEON_ucvtf(auVar17,4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x264);
    auVar15 = *(undefined (*) [16])(lVar9 + 0x274);
    auVar22 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x204),4);
    unaff_x22[0x1d] = auVar23._8_8_;
    unaff_x22[0x1c] = auVar23._0_8_;
    *(undefined (*) [16])(unaff_x22 + 0x1e) = auVar26;
    auVar23 = NEON_ucvtf(auVar16,4);
    unaff_x22[0x35] = auVar24._8_8_;
    unaff_x22[0x34] = auVar24._0_8_;
    unaff_x22[0x37] = auVar25._8_8_;
    unaff_x22[0x36] = auVar25._0_8_;
    auVar16 = *(undefined (*) [16])(lVar9 + 0x234);
    auVar26 = NEON_ucvtf(auVar28,4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x144);
    auVar14 = *(undefined (*) [16])(lVar9 + 0x154);
    auVar27 = NEON_ucvtf(auVar15,4);
    auVar25 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x224),4);
    unaff_x22[0x39] = auVar21._8_8_;
    unaff_x22[0x38] = auVar21._0_8_;
    unaff_x22[0x3b] = auVar19._8_8_;
    unaff_x22[0x3a] = auVar19._0_8_;
    auVar19 = NEON_ucvtf(auVar16,4);
    unaff_x22[0x3d] = auVar20._8_8_;
    unaff_x22[0x3c] = auVar20._0_8_;
    unaff_x22[0x3f] = auVar17._8_8_;
    unaff_x22[0x3e] = auVar17._0_8_;
    auVar16 = *(undefined (*) [16])(lVar9 + 0x254);
    auVar20 = NEON_ucvtf(auVar28,4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x2a4);
    auVar15 = *(undefined (*) [16])(lVar9 + 0x2b4);
    auVar24 = NEON_ucvtf(auVar14,4);
    auVar21 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x244),4);
    unaff_x22[0x41] = auVar22._8_8_;
    unaff_x22[0x40] = auVar22._0_8_;
    unaff_x22[0x43] = auVar23._8_8_;
    unaff_x22[0x42] = auVar23._0_8_;
    auVar22 = NEON_ucvtf(auVar16,4);
    unaff_x22[0x45] = auVar25._8_8_;
    unaff_x22[0x44] = auVar25._0_8_;
    unaff_x22[0x47] = auVar19._8_8_;
    unaff_x22[0x46] = auVar19._0_8_;
    auVar16 = *(undefined (*) [16])(lVar9 + 0x294);
    auVar17 = NEON_ucvtf(auVar28,4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x164);
    auVar14 = *(undefined (*) [16])(lVar9 + 0x174);
    auVar19 = NEON_ucvtf(auVar15,4);
    auVar15 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x284),4);
    unaff_x22[0x29] = auVar20._8_8_;
    unaff_x22[0x28] = auVar20._0_8_;
    unaff_x22[0x2b] = auVar24._8_8_;
    unaff_x22[0x2a] = auVar24._0_8_;
    auVar16 = NEON_ucvtf(auVar16,4);
    unaff_x22[0x49] = auVar21._8_8_;
    unaff_x22[0x48] = auVar21._0_8_;
    unaff_x22[0x4b] = auVar22._8_8_;
    unaff_x22[0x4a] = auVar22._0_8_;
    auVar20 = NEON_ucvtf(auVar28,4);
    unaff_x22[0x4d] = auVar26._8_8_;
    unaff_x22[0x4c] = auVar26._0_8_;
    *(undefined (*) [16])(unaff_x22 + 0x4e) = auVar27;
    auVar14 = NEON_ucvtf(auVar14,4);
    unaff_x22[0x55] = auVar17._8_8_;
    unaff_x22[0x54] = auVar17._0_8_;
    unaff_x22[0x57] = auVar19._8_8_;
    unaff_x22[0x56] = auVar19._0_8_;
    unaff_x22[0x51] = auVar15._8_8_;
    unaff_x22[0x50] = auVar15._0_8_;
    unaff_x22[0x53] = auVar16._8_8_;
    unaff_x22[0x52] = auVar16._0_8_;
    auVar16 = *(undefined (*) [16])(lVar9 + 0x2c4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x2d4);
    unaff_x22[0x2d] = auVar20._8_8_;
    unaff_x22[0x2c] = auVar20._0_8_;
    unaff_x22[0x2f] = auVar14._8_8_;
    unaff_x22[0x2e] = auVar14._0_8_;
    auVar15 = NEON_ucvtf(auVar16,4);
    auVar14 = NEON_ucvtf(auVar28,4);
    auVar17 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x2e4),4);
    auVar19 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x2f4),4);
    auVar16 = *(undefined (*) [16])(lVar9 + 0x324);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x334);
    auVar20 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x304),4);
    auVar24 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x314),4);
    unaff_x22[0x59] = auVar15._8_8_;
    unaff_x22[0x58] = auVar15._0_8_;
    unaff_x22[0x5b] = auVar14._8_8_;
    unaff_x22[0x5a] = auVar14._0_8_;
    auVar25 = NEON_ucvtf(auVar16,4);
    auVar16 = *(undefined (*) [16])(lVar9 + 0x354);
    auVar21 = NEON_ucvtf(auVar28,4);
    auVar28 = *(undefined (*) [16])(lVar9 + 900);
    auVar15 = *(undefined (*) [16])(lVar9 + 0x394);
    auVar22 = NEON_ucvtf(*(undefined (*) [16])(lVar9 + 0x344),4);
    unaff_x22[0x5d] = auVar17._8_8_;
    unaff_x22[0x5c] = auVar17._0_8_;
    unaff_x22[0x5f] = auVar19._8_8_;
    unaff_x22[0x5e] = auVar19._0_8_;
    auVar17 = NEON_ucvtf(auVar16,4);
    unaff_x22[0x61] = auVar20._8_8_;
    unaff_x22[0x60] = auVar20._0_8_;
    unaff_x22[99] = auVar24._8_8_;
    unaff_x22[0x62] = auVar24._0_8_;
    auVar16 = *(undefined (*) [16])(lVar9 + 0x364);
    auVar14 = *(undefined (*) [16])(lVar9 + 0x374);
    auVar24 = NEON_ucvtf(auVar28,4);
    auVar23 = NEON_ucvtf(auVar15,4);
    unaff_x22[0x65] = auVar25._8_8_;
    unaff_x22[100] = auVar25._0_8_;
    unaff_x22[0x67] = auVar21._8_8_;
    unaff_x22[0x66] = auVar21._0_8_;
    auVar28 = *(undefined (*) [16])(lVar9 + 0x3c4);
    auVar15 = *(undefined (*) [16])(lVar9 + 0x3d4);
    auVar19 = NEON_ucvtf(auVar16,4);
    auVar20 = NEON_ucvtf(auVar14,4);
    unaff_x22[0x69] = auVar22._8_8_;
    unaff_x22[0x68] = auVar22._0_8_;
    unaff_x22[0x6b] = auVar17._8_8_;
    unaff_x22[0x6a] = auVar17._0_8_;
    auVar16 = *(undefined (*) [16])(lVar9 + 0x3a4);
    auVar14 = *(undefined (*) [16])(lVar9 + 0x3b4);
    auVar17 = NEON_ucvtf(auVar28,4);
    auVar25 = NEON_ucvtf(auVar15,4);
    unaff_x22[0x71] = auVar24._8_8_;
    unaff_x22[0x70] = auVar24._0_8_;
    unaff_x22[0x73] = auVar23._8_8_;
    unaff_x22[0x72] = auVar23._0_8_;
    auVar15 = NEON_ucvtf(auVar16,4);
    auVar14 = NEON_ucvtf(auVar14,4);
    unaff_x22[0x6d] = auVar19._8_8_;
    unaff_x22[0x6c] = auVar19._0_8_;
    unaff_x22[0x6f] = auVar20._8_8_;
    unaff_x22[0x6e] = auVar20._0_8_;
    auVar16 = *(undefined (*) [16])(lVar9 + 0x3e4);
    auVar28 = *(undefined (*) [16])(lVar9 + 0x3f4);
    pauVar7 = (undefined (*) [16])(lVar3 + 0x34);
    unaff_x22[0x79] = auVar17._8_8_;
    unaff_x22[0x78] = auVar17._0_8_;
    unaff_x22[0x7b] = auVar25._8_8_;
    unaff_x22[0x7a] = auVar25._0_8_;
    *(undefined4 *)(unaff_x22 + 0x80) = 0x457ff000;
    auVar16 = NEON_ucvtf(auVar16,4);
    auVar28 = NEON_ucvtf(auVar28,4);
    unaff_x22[0x75] = auVar15._8_8_;
    unaff_x22[0x74] = auVar15._0_8_;
    unaff_x22[0x77] = auVar14._8_8_;
    unaff_x22[0x76] = auVar14._0_8_;
    unaff_x22[0x7d] = auVar16._8_8_;
    unaff_x22[0x7c] = auVar16._0_8_;
    *(undefined (*) [16])(unaff_x22 + 0x7e) = auVar28;
  }
  auVar15 = NEON_ucvtf(*pauVar7,4);
  lVar3 = *(long *)(unaff_x20 + 0xd8);
  auVar14 = NEON_ucvtf(pauVar7[1],4);
  auVar17 = NEON_ucvtf(pauVar7[2],4);
  auVar19 = NEON_ucvtf(pauVar7[3],4);
  auVar16 = pauVar7[4];
  auVar28 = pauVar7[5];
  *(long *)((long)unaff_x22 + 0x454) = auVar15._8_8_;
  *(long *)((long)unaff_x22 + 0x44c) = auVar15._0_8_;
  *(long *)((long)unaff_x22 + 0x464) = auVar14._8_8_;
  *(long *)((long)unaff_x22 + 0x45c) = auVar14._0_8_;
  *(long *)((long)unaff_x22 + 0x474) = auVar17._8_8_;
  *(long *)((long)unaff_x22 + 0x46c) = auVar17._0_8_;
  auVar17 = NEON_ucvtf(auVar16,4);
  auVar16 = pauVar7[6];
  auVar20 = NEON_ucvtf(auVar28,4);
  auVar28 = pauVar7[7];
  auVar15 = pauVar7[8];
  *(long *)((long)unaff_x22 + 0x484) = auVar19._8_8_;
  *(long *)((long)unaff_x22 + 0x47c) = auVar19._0_8_;
  auVar19 = NEON_ucvtf(auVar16,4);
  auVar16 = pauVar7[9];
  auVar14 = pauVar7[10];
  auVar24 = NEON_ucvtf(auVar28,4);
  auVar25 = NEON_ucvtf(auVar15,4);
  *(long *)((long)unaff_x22 + 0x494) = auVar17._8_8_;
  *(long *)((long)unaff_x22 + 0x48c) = auVar17._0_8_;
  auVar28 = pauVar7[0xb];
  auVar15 = pauVar7[0xc];
  auVar17 = NEON_ucvtf(auVar16,4);
  auVar21 = NEON_ucvtf(auVar14,4);
  *(long *)((long)unaff_x22 + 0x4a4) = auVar20._8_8_;
  *(long *)((long)unaff_x22 + 0x49c) = auVar20._0_8_;
  auVar16 = pauVar7[0xd];
  auVar14 = pauVar7[0xe];
  auVar20 = NEON_ucvtf(auVar28,4);
  auVar28 = pauVar7[0xf];
  auVar15 = NEON_ucvtf(auVar15,4);
  *(long *)((long)unaff_x22 + 0x4b4) = auVar19._8_8_;
  *(long *)((long)unaff_x22 + 0x4ac) = auVar19._0_8_;
  auVar16 = NEON_ucvtf(auVar16,4);
  *(long *)((long)unaff_x22 + 0x4c4) = auVar24._8_8_;
  *(long *)((long)unaff_x22 + 0x4bc) = auVar24._0_8_;
  auVar14 = NEON_ucvtf(auVar14,4);
  *(long *)((long)unaff_x22 + 0x4d4) = auVar25._8_8_;
  *(long *)((long)unaff_x22 + 0x4cc) = auVar25._0_8_;
  auVar28 = NEON_ucvtf(auVar28,4);
  *(long *)((long)unaff_x22 + 0x4e4) = auVar17._8_8_;
  *(long *)((long)unaff_x22 + 0x4dc) = auVar17._0_8_;
  *(long *)((long)unaff_x22 + 0x4f4) = auVar21._8_8_;
  *(long *)((long)unaff_x22 + 0x4ec) = auVar21._0_8_;
  *(long *)((long)unaff_x22 + 0x504) = auVar20._8_8_;
  *(long *)((long)unaff_x22 + 0x4fc) = auVar20._0_8_;
  *(long *)((long)unaff_x22 + 0x514) = auVar15._8_8_;
  *(long *)((long)unaff_x22 + 0x50c) = auVar15._0_8_;
  *(long *)((long)unaff_x22 + 0x524) = auVar16._8_8_;
  *(long *)((long)unaff_x22 + 0x51c) = auVar16._0_8_;
  *(long *)((long)unaff_x22 + 0x534) = auVar14._8_8_;
  *(long *)((long)unaff_x22 + 0x52c) = auVar14._0_8_;
  *(long *)((long)unaff_x22 + 0x544) = auVar28._8_8_;
  *(long *)((long)unaff_x22 + 0x53c) = auVar28._0_8_;
  piVar8 = (int *)(lVar3 + 0x54);
  iVar6 = *piVar8;
  uVar18 = NEON_ucvtf(*(undefined4 *)pauVar7[0x10]);
  *(undefined4 *)((long)unaff_x22 + 0x54c) = uVar18;
  if (((((*(int *)((long)unaff_x22 + 0x424) != iVar6) ||
        (*(int *)((long)unaff_x22 + 0x434) != *(int *)(lVar3 + 0x58))) ||
       (*(int *)((long)unaff_x22 + 0x57c) != *(int *)(lVar3 + 0x1c))) ||
      ((iVar6 = *(int *)((long)unaff_x22 + 0x584), iVar6 != **(int **)(unaff_x20 + 0xc0) ||
       (piVar12 = *(int **)(unaff_x20 + 0x118), *(int *)((long)unaff_x22 + 0x444) != *piVar12)))) ||
     ((*(int *)(unaff_x22 + 0x89) != piVar12[1] ||
      (*(char *)((long)unaff_x22 + 0x58c) != *(char *)(piVar12 + 2))))) {
    iVar6 = *(int *)(lVar3 + 0x1c);
    *(int *)((long)unaff_x22 + 0x57c) = iVar6;
    if (iVar6 != 0) {
      uVar11 = 0;
      do {
        piVar1 = (int *)((long)unaff_x22 + uVar11 * 4 + 0x424);
        uVar11 = uVar11 + 1;
        *piVar1 = *piVar8;
        piVar12 = piVar8 + 1;
        piVar8 = piVar8 + 2;
        piVar1[4] = *piVar12;
      } while (uVar11 < *(uint *)((long)unaff_x22 + 0x57c));
    }
    if (*(int *)((long)unaff_x22 + 0x59c) == 1) {
      *(undefined4 *)((long)unaff_x22 + 0x57c) = 1;
    }
    else if (*(int *)(unaff_x19 + 0x11d0) == 8) {
      *(undefined4 *)((long)unaff_x22 + 0x59c) = 0;
      *(undefined4 *)((long)unaff_x22 + 0x57c) = 1;
    }
    puVar13 = *(undefined8 **)(unaff_x20 + 0x118);
    iVar6 = **(int **)(unaff_x20 + 0xc0);
    *(undefined4 *)(unaff_x22 + 0xb3) = **(undefined4 **)(unaff_x20 + 0x70);
    *(int *)((long)unaff_x22 + 0x584) = iVar6;
    *(undefined8 *)((long)unaff_x22 + 0x444) = *puVar13;
    *(undefined *)((long)unaff_x22 + 0x58c) = *(undefined *)(puVar13 + 1);
  }
  puVar4 = *(uint **)(unaff_x20 + 0x78);
  *(undefined2 *)(unaff_x22 + 0xad) = 0;
  if ((puVar4[10] != 0) || ((*puVar4 | 2) == 3)) {
    *(undefined4 *)(unaff_x22 + 0xb0) = 1;
  }
  uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  if (iVar6 == 1) {
    lVar3 = *(long *)(unaff_x20 + 0x100);
    auVar28 = *(undefined (*) [16])(lVar3 + 0x3c4);
    auVar16 = *(undefined (*) [16])(lVar3 + 0x3d4);
    unaff_x22[0xb7] = auVar16._8_8_;
    unaff_x22[0xb6] = auVar16._0_8_;
    unaff_x22[0xb5] = auVar28._8_8_;
    unaff_x22[0xb4] = auVar28._0_8_;
    auVar28 = *(undefined (*) [16])(lVar3 + 0x404);
    auVar16 = *(undefined (*) [16])(lVar3 + 0x414);
    auVar14 = *(undefined (*) [16])(lVar3 + 0x3e4);
    auVar15 = *(undefined (*) [16])(lVar3 + 0x3f4);
    unaff_x22[0xbf] = auVar16._8_8_;
    unaff_x22[0xbe] = auVar16._0_8_;
    unaff_x22[0xbd] = auVar28._8_8_;
    unaff_x22[0xbc] = auVar28._0_8_;
    unaff_x22[0xbb] = auVar15._8_8_;
    unaff_x22[0xba] = auVar15._0_8_;
    unaff_x22[0xb9] = auVar14._8_8_;
    unaff_x22[0xb8] = auVar14._0_8_;
    auVar28 = *(undefined (*) [16])(lVar3 + 0x434);
    auVar16 = *(undefined (*) [16])(lVar3 + 0x444);
    auVar15 = *(undefined (*) [16])(lVar3 + 0x424);
    *(undefined4 *)(unaff_x22 + 0xc6) = *(undefined4 *)(lVar3 + 0x454);
    unaff_x22[0xc5] = auVar16._8_8_;
    unaff_x22[0xc4] = auVar16._0_8_;
    unaff_x22[0xc3] = auVar28._8_8_;
    unaff_x22[0xc2] = auVar28._0_8_;
    unaff_x22[0xc1] = auVar15._8_8_;
    unaff_x22[0xc0] = auVar15._0_8_;
    lVar3 = *(long *)(unaff_x20 + 0x100);
    auVar16 = *(undefined (*) [16])(lVar3 + 0xb30);
    auVar28 = *(undefined (*) [16])(lVar3 + 0xb20);
    *(long *)((long)unaff_x22 + 0x644) = auVar28._8_8_;
    *(long *)((long)unaff_x22 + 0x63c) = auVar28._0_8_;
    *(long *)((long)unaff_x22 + 0x654) = auVar16._8_8_;
    *(long *)((long)unaff_x22 + 0x64c) = auVar16._0_8_;
    auVar16 = *(undefined (*) [16])(lVar3 + 0xb60);
    auVar28 = *(undefined (*) [16])(lVar3 + 0xb50);
    auVar15 = *(undefined (*) [16])(lVar3 + 0xb40);
    *(undefined8 *)((long)unaff_x22 + 0x68c) = *(undefined8 *)(lVar3 + 0xb70);
    *(long *)((long)unaff_x22 + 0x674) = auVar28._8_8_;
    *(long *)((long)unaff_x22 + 0x66c) = auVar28._0_8_;
    *(long *)((long)unaff_x22 + 0x684) = auVar16._8_8_;
    *(long *)((long)unaff_x22 + 0x67c) = auVar16._0_8_;
    *(long *)((long)unaff_x22 + 0x664) = auVar15._8_8_;
    *(long *)((long)unaff_x22 + 0x65c) = auVar15._0_8_;
    uVar18 = *(undefined4 *)(unaff_x19 + 0x11e8);
    *(undefined4 *)(unaff_x22 + 199) = *(undefined4 *)(unaff_x19 + 0x11e4);
    *(undefined4 *)((long)unaff_x22 + 0x634) = uVar18;
    if ((uVar5 >> 0x15 & 1) != 0) {
      pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
      uVar10 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                         );
      auVar15._0_8_ = (double)*(float *)((long)unaff_x22 + 0x62c);
      auVar15._8_8_ = 0;
      auVar21._0_8_ = (double)*(float *)((long)unaff_x22 + 0x66c);
      auVar21._8_8_ = 0;
      auVar14._0_8_ = (double)*(float *)((long)unaff_x22 + 0x654);
      auVar14._8_8_ = 0;
      auVar17._0_8_ = (double)*(float *)(unaff_x22 + 0xcb);
      auVar17._8_8_ = 0;
      auVar19._0_8_ = (double)*(float *)((long)unaff_x22 + 0x65c);
      auVar19._8_8_ = 0;
      auVar20._0_8_ = (double)*(float *)(unaff_x22 + 0xcc);
      auVar20._8_8_ = 0;
      auVar25._0_8_ = (double)*(float *)(unaff_x22 + 0xcd);
      auVar25._8_8_ = 0;
      auVar24._0_8_ = (double)*(float *)((long)unaff_x22 + 0x664);
      auVar24._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x1421e3,pcVar2,auVar15,
                 auVar14,auVar17,auVar19,auVar20,auVar24,auVar25,auVar21,uVar10,"FillDependencyData"
                 ,*(undefined8 *)(unaff_x19 + 8));
      uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
    }
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x1a1975,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
    uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x167b35,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
    uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x1bb87f,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
    uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x142325,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
    uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x19b595,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
    uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x1bb8a9,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
    uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x1c1d38,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
    uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x1289f8,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
    uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x187e67,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
    uVar5 = (uint)*(undefined8 *)(unaff_x23 + 0x28);
  }
  if ((uVar5 >> 0x15 & 1) != 0) {
    pcVar2 = (char *)CamX::Log::GroupToString(0x200000);
    uVar10 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/ipehwl/hwdriver/ipeiqmodule/apollo980/camxipehwlltm203p.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)(BYTE_ARRAY_001ffff9 + 7),0x17df4f,(char *)0x5,0x12268e,pcVar2,uVar10,
               "DumpDependencyData",*(undefined8 *)(unaff_x19 + 8));
  }
  return 0;
}


