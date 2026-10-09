// ===== 0xd8d070 FUN_00e8d070 @ 00e8d070
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void FUN_00e8d070(long *param_1,long param_2)
{
  float *pfVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *__src;
  float *__src_00;
  undefined8 *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  bool bVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  ushort uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  float *pfVar27;
  int iVar28;
  uint uVar29;
  undefined8 *puVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  undefined8 *puVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined auVar52 [16];
  float fVar53;
  undefined auVar54 [16];
  float fVar55;
  undefined auVar56 [16];
  undefined auVar57 [16];
  float fVar58;
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float local_110 [8];
  float local_f0 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  lVar35 = param_1[0xe];
  __src = (undefined8 *)(lVar35 + 0x119c);
  __src_00 = (float *)(lVar35 + 0x12a0);
  puVar4 = (undefined8 *)(lVar35 + 0x13a4);
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1e1636,pcVar17,
               uVar18,"update_ihist_based_curve",&DAT_010fb780);
  }
  uVar11 = _UNK_001e4168;
  uVar10 = _DAT_001e4160;
  uVar45 = _UNK_001e4158;
  uVar19 = _DAT_001e4150;
  if (*(float *)(lVar35 + 0x129c) < 1e-06) {
    *(undefined8 *)(lVar35 + 0x11a8) = _UNK_001e3998;
    *(undefined8 *)(lVar35 + 0x11a0) = uVar18;
    uVar13 = _UNK_001e4498;
    uVar12 = _DAT_001e4490;
    *(undefined8 *)(lVar35 + 0x11b8) = uVar45;
    *(undefined8 *)(lVar35 + 0x11b0) = uVar19;
    uVar19 = _UNK_001e40b8;
    *(undefined8 *)(lVar35 + 0x11c8) = uVar11;
    *(undefined8 *)(lVar35 + 0x11c0) = uVar10;
    *(undefined8 *)(lVar35 + 0x11d8) = uVar13;
    *(undefined8 *)(lVar35 + 0x11d0) = uVar12;
    uVar10 = _UNK_001e4798;
    uVar45 = _DAT_001e4790;
    *(undefined8 *)(lVar35 + 0x11e8) = uVar19;
    *(undefined8 *)(lVar35 + 0x11e0) = uVar18;
    uVar12 = _UNK_001e4178;
    uVar11 = _DAT_001e4170;
    uVar19 = _UNK_001e3af8;
    *(undefined8 *)(lVar35 + 0x11f8) = uVar10;
    *(undefined8 *)(lVar35 + 0x11f0) = uVar45;
    uVar10 = _UNK_001e3f88;
    uVar45 = _DAT_001e3f80;
    *(undefined8 *)(lVar35 + 0x1218) = uVar19;
    *(undefined8 *)(lVar35 + 0x1210) = uVar18;
    uVar14 = _UNK_001e4188;
    uVar13 = _DAT_001e4180;
    *(undefined8 *)(lVar35 + 0x1208) = uVar12;
    *(undefined8 *)(lVar35 + 0x1200) = uVar11;
    uVar19 = _UNK_001e3aa8;
    *(undefined8 *)(lVar35 + 0x1228) = uVar10;
    *(undefined8 *)(lVar35 + 0x1220) = uVar45;
    uVar10 = _UNK_001e3f08;
    uVar45 = ram0x001e3f00;
    *(undefined8 *)(lVar35 + 0x1238) = uVar14;
    *(undefined8 *)(lVar35 + 0x1230) = uVar13;
    uVar12 = _UNK_001e3f18;
    uVar11 = _DAT_001e3f10;
    *(undefined8 *)(lVar35 + 0x1248) = uVar19;
    *(undefined8 *)(lVar35 + 0x1240) = uVar18;
    *(undefined8 *)(lVar35 + 0x1258) = uVar10;
    *(undefined8 *)(lVar35 + 0x1250) = uVar45;
    uVar14 = _UNK_001e44a8;
    uVar13 = _DAT_001e44a0;
    uVar10 = _UNK_001e3cd8;
    uVar45 = _DAT_001e3cd0;
    *(undefined8 *)(lVar35 + 0x1268) = uVar12;
    *(undefined8 *)(lVar35 + 0x1260) = uVar11;
    uVar19 = _UNK_001e3b78;
    *(undefined8 *)(lVar35 + 0x1278) = uVar10;
    *(undefined8 *)(lVar35 + 0x1270) = uVar45;
    *(undefined8 *)(lVar35 + 0x1288) = uVar14;
    *(undefined8 *)(lVar35 + 0x1280) = uVar13;
    *(undefined4 *)(lVar35 + 0x119c) = 0;
    *(undefined8 *)(lVar35 + 0x1298) = uVar19;
    *(undefined8 *)(lVar35 + 0x1290) = uVar18;
  }
  memcpy(&DAT_012ed650,__src,0x104);
  memcpy(&DAT_012ed754,__src_00,0x104);
  DAT_012ed894._4_4_ = *(float *)(lVar35 + 0x13e4);
  fRam00000000012ed880 = (float)*(undefined8 *)(lVar35 + 0x13cc);
  _DAT_012ed884 = (float)((ulong)*(undefined8 *)(lVar35 + 0x13cc) >> 0x20);
  _DAT_012ed878 = (float)*(undefined8 *)(lVar35 + 0x13c4);
  fRam00000000012ed87c = (float)((ulong)*(undefined8 *)(lVar35 + 0x13c4) >> 0x20);
  fRam00000000012ed890 = (float)*(undefined8 *)(lVar35 + 0x13dc);
  DAT_012ed894._0_4_ = (float)((ulong)*(undefined8 *)(lVar35 + 0x13dc) >> 0x20);
  _DAT_012ed888 = (float)*(undefined8 *)(lVar35 + 0x13d4);
  fRam00000000012ed88c = (float)((ulong)*(undefined8 *)(lVar35 + 0x13d4) >> 0x20);
  fRam00000000012ed860 = (float)*(undefined8 *)(lVar35 + 0x13ac);
  _DAT_012ed864 = (float)((ulong)*(undefined8 *)(lVar35 + 0x13ac) >> 0x20);
  _DAT_012ed858 = (float)*puVar4;
  fRam00000000012ed85c = (float)((ulong)*puVar4 >> 0x20);
  fRam00000000012ed870 = (float)*(undefined8 *)(lVar35 + 0x13bc);
  _DAT_012ed874 = (float)((ulong)*(undefined8 *)(lVar35 + 0x13bc) >> 0x20);
  _DAT_012ed868 = (float)*(undefined8 *)(lVar35 + 0x13b4);
  fRam00000000012ed86c = (float)((ulong)*(undefined8 *)(lVar35 + 0x13b4) >> 0x20);
  lVar36 = param_1[0xe];
  *(undefined4 *)(lVar36 + 0x13e8) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(lVar36 + 0x13ec) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(lVar36 + 0x13f0) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(lVar36 + 0x13f4) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(lVar36 + 0x13f8) = *(undefined4 *)(param_2 + 0x110);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a321,pcVar17,
               (double)*(float *)(lVar36 + 0x13e8),(double)*(float *)(lVar36 + 0x13ec),
               (double)*(float *)(lVar36 + 0x13f0),(double)*(float *)(lVar36 + 0x13f4),
               (double)*(float *)(lVar36 + 0x13f8),uVar18,"update_ihist_based_curve");
  }
  fVar50 = *(float *)(param_2 + 0xfc);
  fVar70 = *(float *)(param_2 + 0xe0);
  fVar41 = *(float *)(param_2 + 0xe4);
  fVar42 = 1.0;
  if (fVar50 < 1.0) {
    fVar42 = fVar50;
  }
  fVar46 = 0.0;
  if (0.0 < fVar50) {
    fVar46 = fVar42;
  }
  fVar42 = 1.0;
  if (fVar70 < 1.0) {
    fVar42 = fVar70;
  }
  fVar50 = 0.0;
  if (0.0 < fVar70) {
    fVar50 = fVar42;
  }
  fVar42 = 1.0;
  if (fVar41 < 1.0) {
    fVar42 = fVar41;
  }
  fVar70 = 0.0;
  if (0.0 < fVar41) {
    fVar70 = fVar42;
  }
  uVar23 = (uint)uVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116d5a,pcVar17,
               uVar18,"cumsum_clhe");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc802,pcVar17,
               uVar18,"cumsum_clhe");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
               (double)DAT_010fb780,uVar18,"cumsum_clhe");
  }
  pfVar27 = (float *)&DAT_010fb78c;
  lVar36 = 0xff;
  do {
    if (((uint)uVar18 >> 0x15 & 1) == 0) {
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8d47c;
LAB_00e8d420:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8d4c8;
LAB_00e8d424:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8d514;
LAB_00e8d428:
      uVar23 = (uint)uVar18;
    }
    else {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)pfVar27[-2],uVar18,"cumsum_clhe");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8d420;
LAB_00e8d47c:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)pfVar27[-1],uVar18,"cumsum_clhe");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8d424;
LAB_00e8d4c8:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)*pfVar27,uVar18,"cumsum_clhe");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8d428;
LAB_00e8d514:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)pfVar27[1],uVar18,"cumsum_clhe");
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)pfVar27[2],uVar18,"cumsum_clhe");
    }
    lVar36 = lVar36 + -5;
    pfVar27 = pfVar27 + 5;
  } while (lVar36 != 0);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc802,pcVar17,
               uVar18,"cumsum_clhe");
  }
  fVar42 = 0.0;
  fVar41 = 0.0;
  lVar36 = 0;
  do {
    lVar38 = lVar36 + 0x40;
    fVar53 = *(float *)((long)&DAT_010fb780 + lVar36);
    fVar55 = *(float *)((long)&DAT_010fb784 + lVar36);
    fVar58 = *(float *)((long)&DAT_010fb788 + lVar36);
    fVar64 = *(float *)((long)&DAT_010fb78c + lVar36);
    fVar67 = *(float *)((long)&DAT_010fb790 + lVar36);
    fVar40 = *(float *)((long)&DAT_010fb794 + lVar36);
    fVar49 = *(float *)((long)&DAT_010fb798 + lVar36);
    fVar47 = *(float *)((long)&DAT_010fb79c + lVar36);
    fVar51 = *(float *)((long)&DAT_010fb7a0 + lVar36);
    fVar69 = *(float *)((long)&DAT_010fb7a4 + lVar36);
    if (fVar42 <= fVar53) {
      fVar42 = fVar53;
    }
    fVar43 = *(float *)((long)&DAT_010fb7a8 + lVar36);
    fVar44 = *(float *)((long)&DAT_010fb7ac + lVar36);
    if (fVar42 <= fVar55) {
      fVar42 = fVar55;
    }
    if (fVar42 <= fVar58) {
      fVar42 = fVar58;
    }
    if (fVar42 <= fVar64) {
      fVar42 = fVar64;
    }
    fVar63 = *(float *)((long)&DAT_010fb7b0 + lVar36);
    fVar65 = *(float *)((long)&DAT_010fb7b4 + lVar36);
    if (fVar42 <= fVar67) {
      fVar42 = fVar67;
    }
    if (fVar42 <= fVar40) {
      fVar42 = fVar40;
    }
    if (fVar42 <= fVar49) {
      fVar42 = fVar49;
    }
    if (fVar42 <= fVar47) {
      fVar42 = fVar47;
    }
    fVar68 = *(float *)((long)&DAT_010fb7b8 + lVar36);
    fVar48 = *(float *)((long)&DAT_010fb7bc + lVar36);
    if (fVar42 <= fVar51) {
      fVar42 = fVar51;
    }
    fVar41 = fVar41 + fVar53 + fVar55 + fVar58 + fVar64 + fVar67 + fVar40 + fVar49 + fVar47 + fVar51
             + fVar69 + fVar43 + fVar44 + fVar63 + fVar65 + fVar68 + fVar48;
    if (fVar42 <= fVar69) {
      fVar42 = fVar69;
    }
    if (fVar42 <= fVar43) {
      fVar42 = fVar43;
    }
    if (fVar42 <= fVar44) {
      fVar42 = fVar44;
    }
    if (fVar42 <= fVar63) {
      fVar42 = fVar63;
    }
    if (fVar42 <= fVar65) {
      fVar42 = fVar65;
    }
    if (fVar42 <= fVar68) {
      fVar42 = fVar68;
    }
    if (fVar42 <= fVar48) {
      fVar42 = fVar48;
    }
    lVar36 = lVar38;
  } while (lVar38 != 0x400);
  fVar50 = fVar50 * fVar41;
  uVar37 = 0;
  fVar40 = 0.0;
  fVar46 = fVar46 * fVar42;
  DAT_012eda54 = 0;
  fVar42 = fVar70 * fVar41;
  pfVar27 = (float *)&DAT_012eda54;
  do {
    pfVar26 = pfVar27 + 2;
    fVar47 = (&DAT_010fb780)[uVar37];
    iVar22 = (int)uVar37;
    if (0.0 < fVar42) {
      fVar49 = fVar42 - fVar47;
      if (0.0 <= fVar49) {
        fVar40 = fVar40 + fVar47;
        fVar47 = 0.0;
        fVar42 = fVar49;
      }
      else {
        fVar47 = fVar47 - fVar42;
        fVar40 = fVar40 + fVar42;
        fVar42 = fVar49;
                             (
                             );
                    ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c4f90,pcVar17
                     ,uVar18,"cumsum_clhe",(ulong)(iVar22 + 1));
        }
      }
    }
    fVar49 = fVar40 + (fVar47 - fVar46);
    fVar51 = fVar46;
    if (fVar47 <= fVar46) {
      fVar49 = fVar40;
      fVar51 = fVar47;
    }
    pfVar27[1] = *pfVar27 + fVar51;
    if (((0.0 < fVar50) && (fVar41 - fVar50 < *pfVar27 + fVar51 + fVar49)) &&
       (bVar5 >> 5 & 1) != 0)) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b970,pcVar17,
                 uVar18,"cumsum_clhe",(ulong)(iVar22 + 1));
    }
    fVar47 = (float)(&DAT_010fb784)[uVar37];
    if (0.0 < fVar42) {
      fVar40 = fVar42 - fVar47;
      if (0.0 <= fVar40) {
        fVar49 = fVar49 + fVar47;
        fVar47 = 0.0;
        fVar42 = fVar40;
      }
      else {
        fVar47 = fVar47 - fVar42;
        fVar49 = fVar49 + fVar42;
        fVar42 = fVar40;
                             (
                             );
                    ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c4f90,pcVar17
                     ,uVar18,"cumsum_clhe",(ulong)(iVar22 + 2));
        }
      }
    }
    uVar37 = uVar37 + 2;
    fVar40 = fVar49 + (fVar47 - fVar46);
    fVar51 = fVar46;
    if (fVar47 <= fVar46) {
      fVar40 = fVar49;
      fVar51 = fVar47;
    }
    *pfVar26 = pfVar27[1] + fVar51;
    if (((0.0 < fVar50) && (fVar41 - fVar50 < pfVar27[1] + fVar51 + fVar40)) &&
       (bVar5 >> 5 & 1) != 0)) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b970,pcVar17,
                 uVar18,"cumsum_clhe",uVar37 & 0xffffffff);
    }
    pfVar27 = pfVar26;
  } while (uVar37 != 0x100);
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b8b5,pcVar17,
               (double)fVar41,(double)(fVar50 + fVar40),(double)(fVar70 * fVar41),(double)fVar50,
               (double)DAT_012ede54,uVar18,"cumsum_clhe");
  }
  fVar70 = *(float *)(param_2 + 0x118);
  fVar42 = 1.0;
  if (fVar70 < 1.0) {
    fVar42 = fVar70;
  }
  fVar46 = 1e-06;
  if (1e-06 < fVar70) {
    fVar46 = fVar42;
  }
  fVar46 = (fVar50 + fVar40) * fVar46;
  fVar42 = fVar46 * 0.00390625;
  uVar37 = 0;
  while( true ) {
    fVar70 = (float)NEON_fmadd(fVar42,(float)(uVar37 & 0xffffffff),(&DAT_012eda54)[uVar37]);
    fVar70 = fVar70 / (fVar46 + DAT_012ede54);
    fVar50 = 1.0;
    if (fVar70 < 1.0) {
      fVar50 = fVar70;
    }
    fVar40 = 0.0;
    if (0.0 < fVar70) {
      fVar40 = fVar50;
    }
    (&DAT_012eda54)[uVar37] = fVar40;
    if (uVar37 == 0x100) break;
    iVar22 = (int)uVar37;
    fVar40 = (float)NEON_fmadd(fVar42,(float)(ulong)(iVar22 + 1),(&DAT_012eda58)[uVar37]);
    fVar70 = (float)NEON_fmadd(fVar42,(float)(ulong)(iVar22 + 2),(&DAT_012eda5c)[uVar37]);
    fVar47 = (float)NEON_fmadd(fVar42,(float)(ulong)(iVar22 + 3),(&DAT_012eda60)[uVar37]);
    fVar40 = fVar40 / (fVar46 + DAT_012ede54);
    fVar50 = 1.0;
    if (fVar40 < 1.0) {
      fVar50 = fVar40;
    }
    fVar49 = 0.0;
    if (0.0 < fVar40) {
      fVar49 = fVar50;
    }
    (&DAT_012eda58)[uVar37] = fVar49;
    fVar70 = fVar70 / (fVar46 + DAT_012ede54);
    fVar50 = 1.0;
    if (fVar70 < 1.0) {
      fVar50 = fVar70;
    }
    fVar40 = 0.0;
    if (0.0 < fVar70) {
      fVar40 = fVar50;
    }
    (&DAT_012eda5c)[uVar37] = fVar40;
    fVar47 = fVar47 / (fVar46 + DAT_012ede54);
    fVar50 = 1.0;
    if (fVar47 < 1.0) {
      fVar50 = fVar47;
    }
    fVar70 = 0.0;
    if (0.0 < fVar47) {
      fVar70 = fVar50;
    }
    (&DAT_012eda60)[uVar37] = fVar70;
    uVar37 = uVar37 + 4;
  }
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be288,pcVar17,
               uVar18,"cumsum_clhe");
  }
  pfVar27 = (float *)&DAT_012eda70;
  lVar36 = 0x100;
  while( true ) {
    if (((uint)uVar18 >> 0x15 & 1) != 0) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-7],uVar18,"cumsum_clhe");
    }
    uVar23 = (uint)uVar18;
    if (lVar36 == 0) break;
    if ((uVar23 >> 0x15 & 1) == 0) {
      if ((uVar23 >> 0x15 & 1) != 0) goto LAB_00e8dc50;
LAB_00e8dbec:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8dc9c;
LAB_00e8dbf0:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8dce8;
LAB_00e8dbf4:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8dd34;
LAB_00e8dbf8:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8dd80;
LAB_00e8dbfc:
      uVar23 = (uint)uVar18;
    }
    else {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-6],uVar18,"cumsum_clhe");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbec;
LAB_00e8dc50:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-5],uVar18,"cumsum_clhe");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbf0;
LAB_00e8dc9c:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-4],uVar18,"cumsum_clhe");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbf4;
LAB_00e8dce8:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-3],uVar18,"cumsum_clhe");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbf8;
LAB_00e8dd34:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-2],uVar18,"cumsum_clhe");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbfc;
LAB_00e8dd80:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-1],uVar18,"cumsum_clhe");
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)*pfVar27,uVar18,"cumsum_clhe");
    }
    pfVar27 = pfVar27 + 8;
    lVar36 = lVar36 + -8;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644aa,pcVar17,
               uVar18,"cumsum_clhe");
  }
  iVar22 = 1;
  iVar25 = 5;
  iVar24 = 9;
  lVar36 = 1;
  lVar38 = lVar35 + 0x119c;
  *(undefined4 *)(lVar35 + 0x119c) = 0;
  do {
    fVar42 = 0.0;
    iVar31 = (int)lVar36;
    fVar50 = 0.0;
    iVar28 = (int)(short)((short)(iVar31 * 4) + -4);
    *(undefined4 *)(lVar38 + lVar36 * 4) = 0;
    iVar3 = iVar22;
    do {
      if ((iVar3 - 1U >> 0xf & 1) == 0) {
        fVar42 = fVar42 + (float)(&DAT_012eda54)[(int)(short)(iVar3 - 1U)];
      }
      else {
        fVar42 = fVar42 - (float)(&DAT_012eda54)[(uint)-iVar28];
      }
      fVar50 = fVar50 + 1.0;
      iVar28 = (int)(short)iVar3;
      iVar3 = iVar3 + 1;
      *(float *)(lVar38 + lVar36 * 4) = fVar42;
    } while (iVar28 <= iVar31 * 4 + 4);
    fVar70 = 0.0;
    lVar20 = lVar36 * 4;
    iVar3 = iVar31 * 4 + 8;
    iVar32 = (int)(short)(iVar31 * 4);
    *(undefined4 *)((long)__src + lVar20 + 4) = 0;
    *(float *)(lVar38 + lVar20) = fVar42 / fVar50;
    fVar42 = 0.0;
    iVar28 = iVar25;
    do {
      while( true ) {
        fVar50 = fVar42;
        if ((iVar28 - 1U >> 0xf & 1) != 0) break;
        fVar70 = fVar70 + (float)(&DAT_012eda54)[(int)(short)(iVar28 - 1U)];
        iVar32 = (int)(short)iVar28;
        iVar28 = iVar28 + 1;
        *(float *)((long)__src + lVar20 + 4) = fVar70;
        fVar42 = fVar50 + 1.0;
        if (iVar3 < iVar32) goto LAB_00e8df9c;
      }
      fVar70 = fVar70 - (float)(&DAT_012eda54)[(uint)-iVar32];
      iVar32 = (int)(short)iVar28;
      iVar28 = iVar28 + 1;
      *(float *)((long)__src + lVar20 + 4) = fVar70;
      fVar42 = fVar50 + 1.0;
    } while (iVar32 <= iVar3);
LAB_00e8df9c:
    fVar46 = 0.0;
    iVar3 = iVar31 * 4 + 0xc;
    iVar31 = (int)(short)((short)(iVar31 * 4) + 4);
    *(undefined4 *)((long)__src + lVar20 + 8) = 0;
    *(float *)((long)__src + lVar20 + 4) = fVar70 / (fVar50 + 1.0);
    fVar42 = 0.0;
    iVar28 = iVar24;
    do {
      while( true ) {
        fVar50 = fVar42;
        if ((iVar28 - 1U >> 0xf & 1) != 0) break;
        fVar46 = fVar46 + (float)(&DAT_012eda54)[(int)(short)(iVar28 - 1U)];
        iVar31 = (int)(short)iVar28;
        iVar28 = iVar28 + 1;
        *(float *)((long)__src + lVar20 + 8) = fVar46;
        fVar42 = fVar50 + 1.0;
        if (iVar3 < iVar31) goto LAB_00e8de8c;
      }
      fVar46 = fVar46 - (float)(&DAT_012eda54)[(uint)-iVar31];
      iVar31 = (int)(short)iVar28;
      iVar28 = iVar28 + 1;
      *(float *)((long)__src + lVar20 + 8) = fVar46;
      fVar42 = fVar50 + 1.0;
    } while (iVar31 <= iVar3);
LAB_00e8de8c:
    lVar36 = lVar36 + 3;
    iVar22 = iVar22 + 0xc;
    iVar25 = iVar25 + 0xc;
    iVar24 = iVar24 + 0xc;
    *(float *)((long)__src + lVar20 + 8) = fVar46 / (fVar50 + 1.0);
    fVar42 = DAT_012ede54;
  } while (lVar36 != 0x40);
  *(float *)(lVar35 + 0x129c) = DAT_012ede54;
  lVar38 = param_1[0xe];
  lVar36 = *param_1;
  fVar70 = *(float *)(lVar38 + 0x13f4) + 1.0;
  fVar50 = powf(0.0,fVar70);
  *(float *)(lVar35 + 0x119c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11a0),fVar70);
  *(float *)(lVar35 + 0x11a0) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11a4),fVar70);
  *(float *)(lVar35 + 0x11a4) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11a8),fVar70);
  *(float *)(lVar35 + 0x11a8) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11ac),fVar70);
  *(float *)(lVar35 + 0x11ac) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11b0),fVar70);
  *(float *)(lVar35 + 0x11b0) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11b4),fVar70);
  *(float *)(lVar35 + 0x11b4) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11b8),fVar70);
  *(float *)(lVar35 + 0x11b8) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11bc),fVar70);
  *(float *)(lVar35 + 0x11bc) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11c0),fVar70);
  *(float *)(lVar35 + 0x11c0) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11c4),fVar70);
  *(float *)(lVar35 + 0x11c4) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11c8),fVar70);
  *(float *)(lVar35 + 0x11c8) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11cc),fVar70);
  *(float *)(lVar35 + 0x11cc) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11d0),fVar70);
  *(float *)(lVar35 + 0x11d0) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11d4),fVar70);
  *(float *)(lVar35 + 0x11d4) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11d8),fVar70);
  *(float *)(lVar35 + 0x11d8) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11dc),fVar70);
  *(float *)(lVar35 + 0x11dc) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11e0),fVar70);
  *(float *)(lVar35 + 0x11e0) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11e4),fVar70);
  *(float *)(lVar35 + 0x11e4) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11e8),fVar70);
  *(float *)(lVar35 + 0x11e8) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11ec),fVar70);
  *(float *)(lVar35 + 0x11ec) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11f0),fVar70);
  *(float *)(lVar35 + 0x11f0) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11f4),fVar70);
  *(float *)(lVar35 + 0x11f4) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11f8),fVar70);
  *(float *)(lVar35 + 0x11f8) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x11fc),fVar70);
  *(float *)(lVar35 + 0x11fc) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1200),fVar70);
  *(float *)(lVar35 + 0x1200) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1204),fVar70);
  *(float *)(lVar35 + 0x1204) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1208),fVar70);
  *(float *)(lVar35 + 0x1208) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x120c),fVar70);
  *(float *)(lVar35 + 0x120c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1210),fVar70);
  *(float *)(lVar35 + 0x1210) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1214),fVar70);
  *(float *)(lVar35 + 0x1214) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1218),fVar70);
  *(float *)(lVar35 + 0x1218) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x121c),fVar70);
  *(float *)(lVar35 + 0x121c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1220),fVar70);
  *(float *)(lVar35 + 0x1220) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1224),fVar70);
  *(float *)(lVar35 + 0x1224) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1228),fVar70);
  *(float *)(lVar35 + 0x1228) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x122c),fVar70);
  *(float *)(lVar35 + 0x122c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1230),fVar70);
  *(float *)(lVar35 + 0x1230) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1234),fVar70);
  *(float *)(lVar35 + 0x1234) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1238),fVar70);
  *(float *)(lVar35 + 0x1238) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x123c),fVar70);
  *(float *)(lVar35 + 0x123c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1240),fVar70);
  *(float *)(lVar35 + 0x1240) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1244),fVar70);
  *(float *)(lVar35 + 0x1244) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1248),fVar70);
  *(float *)(lVar35 + 0x1248) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x124c),fVar70);
  *(float *)(lVar35 + 0x124c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1250),fVar70);
  *(float *)(lVar35 + 0x1250) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1254),fVar70);
  *(float *)(lVar35 + 0x1254) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1258),fVar70);
  *(float *)(lVar35 + 0x1258) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x125c),fVar70);
  *(float *)(lVar35 + 0x125c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1260),fVar70);
  *(float *)(lVar35 + 0x1260) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1264),fVar70);
  *(float *)(lVar35 + 0x1264) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1268),fVar70);
  *(float *)(lVar35 + 0x1268) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x126c),fVar70);
  *(float *)(lVar35 + 0x126c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1270),fVar70);
  *(float *)(lVar35 + 0x1270) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1274),fVar70);
  *(float *)(lVar35 + 0x1274) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1278),fVar70);
  *(float *)(lVar35 + 0x1278) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x127c),fVar70);
  *(float *)(lVar35 + 0x127c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1280),fVar70);
  *(float *)(lVar35 + 0x1280) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1284),fVar70);
  *(float *)(lVar35 + 0x1284) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1288),fVar70);
  *(float *)(lVar35 + 0x1288) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x128c),fVar70);
  *(float *)(lVar35 + 0x128c) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1290),fVar70);
  *(float *)(lVar35 + 0x1290) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1294),fVar70);
  *(float *)(lVar35 + 0x1294) = fVar50;
  fVar50 = powf(*(float *)(lVar35 + 0x1298),fVar70);
  *(float *)(lVar35 + 0x1298) = fVar50;
  fVar42 = powf(fVar42,fVar70);
  *(float *)(lVar35 + 0x129c) = fVar42;
  uStack_c8 = (ulong)(uint)uStack_c8._4_4_ << 0x20;
  local_d0 = 0;
  if (*(char *)(lVar38 + 0x117c) == '\x01') {
    pfVar27 = (float *)(lVar38 + 0x20);
    lVar20 = 0x3c;
  }
  else {
    bVar16 = *(int *)(lVar36 + 0x5c) != 2;
    lVar36 = 0x90;
    if (bVar16) {
      lVar36 = 0x58;
    }
    lVar20 = 0xac;
    if (bVar16) {
      lVar20 = 0x74;
    }
    pfVar27 = (float *)(lVar38 + lVar36);
  }
  fVar42 = pfVar27[5];
  iVar25 = (int)(fVar42 * 64.0);
  local_b8 = CONCAT44(local_b8._4_4_,0x3f800000);
  iVar22 = iVar25;
  if (0x3f < iVar25) {
    iVar22 = 0x40;
  }
  if (0x3e < iVar25) {
    iVar25 = 0x3f;
  }
  fVar50 = (float)NEON_fnmsub(fVar42,0x42800000,(float)iVar22);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar42,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar25 + 1),iVar22);
  }
  fVar70 = pfVar27[4];
  fVar42 = *(float *)(lVar35 + (long)iVar22 * 4 + 0x119c);
  iVar22 = (int)(fVar70 * 64.0);
  fVar42 = (float)NEON_fmadd(fVar50,*(float *)((long)__src + (long)iVar25 * 4 + 4) - fVar42,fVar42);
  if (1.0 <= fVar42) {
    fVar42 = 0.999999;
  }
  iVar25 = iVar22;
  if (0x3f < iVar22) {
    iVar25 = 0x40;
  }
  if (0x3e < iVar22) {
    iVar22 = 0x3f;
  }
  fVar50 = (float)NEON_fnmsub(fVar70,0x42800000,(float)iVar25);
  local_c0._4_4_ = fVar42;
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar70,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar22 + 1),iVar25);
  }
  fVar46 = pfVar27[3];
  fVar70 = *(float *)(lVar35 + (long)iVar25 * 4 + 0x119c);
  iVar25 = (int)(fVar46 * 64.0);
  fVar70 = (float)NEON_fmadd(fVar50,*(float *)((long)__src + (long)iVar22 * 4 + 4) - fVar70,fVar70);
  fVar50 = 0.0;
  if (0.0 <= fVar42 + -1e-06) {
    fVar50 = fVar42 + -1e-06;
  }
  if (fVar42 <= fVar70) {
    fVar70 = fVar50;
  }
  iVar22 = iVar25;
  if (0x3f < iVar25) {
    iVar22 = 0x40;
  }
  if (0x3e < iVar25) {
    iVar25 = 0x3f;
  }
  local_c0 = CONCAT44(local_c0._4_4_,fVar70);
  fVar50 = (float)NEON_fnmsub(fVar46,0x42800000,(float)iVar22);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar46,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar25 + 1),iVar22);
  }
  fVar40 = pfVar27[2];
  fVar46 = *(float *)(lVar35 + (long)iVar22 * 4 + 0x119c);
  iVar22 = (int)(fVar40 * 64.0);
  fVar46 = (float)NEON_fmadd(fVar50,*(float *)((long)__src + (long)iVar25 * 4 + 4) - fVar46,fVar46);
  fVar50 = 0.0;
  if (0.0 <= fVar70 + -1e-06) {
    fVar50 = fVar70 + -1e-06;
  }
  if (fVar70 <= fVar46) {
    fVar46 = fVar50;
  }
  iVar25 = iVar22;
  if (0x3f < iVar22) {
    iVar25 = 0x40;
  }
  if (0x3e < iVar22) {
    iVar22 = 0x3f;
  }
  fVar50 = (float)NEON_fnmsub(fVar40,0x42800000,(float)iVar25);
  uStack_c8._4_4_ = fVar46;
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar40,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar22 + 1),iVar25);
  }
  fVar47 = pfVar27[1];
  fVar40 = *(float *)(lVar35 + (long)iVar25 * 4 + 0x119c);
  iVar25 = (int)(fVar47 * 64.0);
  fVar40 = (float)NEON_fmadd(fVar50,*(float *)((long)__src + (long)iVar22 * 4 + 4) - fVar40,fVar40);
  fVar50 = 0.0;
  if (0.0 <= fVar46 + -1e-06) {
    fVar50 = fVar46 + -1e-06;
  }
  if (fVar46 <= fVar40) {
    fVar40 = fVar50;
  }
  iVar22 = iVar25;
  if (0x3f < iVar25) {
    iVar22 = 0x40;
  }
  if (0x3e < iVar25) {
    iVar25 = 0x3f;
  }
  uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar40);
  fVar50 = (float)NEON_fnmsub(fVar47,0x42800000,(float)iVar22);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar47,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar25 + 1),iVar22);
  }
  fVar47 = *(float *)(lVar35 + (long)iVar22 * 4 + 0x119c);
  fVar47 = (float)NEON_fmadd(fVar50,*(float *)((long)__src + (long)iVar25 * 4 + 4) - fVar47,fVar47);
  fVar50 = 0.0;
  if (0.0 <= fVar40 + -1e-06) {
    fVar50 = fVar40 + -1e-06;
  }
  if (fVar40 <= fVar47) {
    fVar47 = fVar50;
  }
  local_d0 = (ulong)(uint)fVar47 << 0x20;
  uVar23 = (uint)uVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d2a,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa582,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)*pfVar27,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[1],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[2],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[3],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[4],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[5],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[6],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa582,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c4fc7,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124b65,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,0,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar47,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar40,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar46,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar70,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar42,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               0x3ff0000000000000,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124b65,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da725,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x15df8b,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
               (double)*(float *)__src,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
  }
  pfVar27 = (float *)(lVar38 + lVar20);
  lVar36 = 0x40;
  puVar39 = (undefined8 *)(lVar35 + 0x11bc);
  puVar30 = puVar39;
  do {
    if (((uint)uVar18 >> 0x15 & 1) == 0) {
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8ec38;
LAB_00e8ebd0:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8ec84;
LAB_00e8ebd4:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8ecd0;
LAB_00e8ebd8:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8ed1c;
LAB_00e8ebdc:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8ed68;
LAB_00e8ebe0:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8edb4;
LAB_00e8ebe4:
      uVar23 = (uint)uVar18;
    }
    else {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)((long)puVar30 + -0x1c),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebd0;
LAB_00e8ec38:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)(puVar30 + -3),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebd4;
LAB_00e8ec84:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)((long)puVar30 + -0x14),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebd8;
LAB_00e8ecd0:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)(puVar30 + -2),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebdc;
LAB_00e8ed1c:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)((long)puVar30 + -0xc),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebe0;
LAB_00e8ed68:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)(puVar30 + -1),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebe4;
LAB_00e8edb4:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)((long)puVar30 + -4),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)puVar30,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    }
    puVar30 = puVar30 + 4;
    lVar36 = lVar36 + -8;
  } while (lVar36 != 0);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x15df8b,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
  }
  uVar21 = 0;
  lVar36 = 0;
  uVar37 = (ulong)&local_d0 | 4;
  puVar30 = __src;
  do {
    uVar2 = uVar21 + 1;
    fVar42 = *(float *)puVar30;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    do {
      if (fVar42 <= *(float *)(uVar37 + (ulong)uVar21 * 4)) goto LAB_00e8ef1c;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 5;
LAB_00e8ef1c:
    uVar34 = (ulong)uVar21;
    fVar50 = *(float *)((long)&local_d0 + uVar34 * 4);
    fVar70 = *(float *)(uVar37 + uVar34 * 4) - fVar50;
    if (1e-06 <= fVar70) {
      uVar66 = NEON_fmadd(fVar42 - fVar50,(pfVar27[uVar34 + 1] - pfVar27[uVar34]) / fVar70,
                          pfVar27[uVar34]);
      *(undefined4 *)puVar30 = uVar66;
    }
    else {
      uVar66 = NEON_fmadd(fVar42 - fVar50,0x3f800000,pfVar27[uVar34]);
      *(undefined4 *)puVar30 = uVar66;
    }
    if (lVar36 == 0x40) break;
    uVar2 = uVar21 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    do {
      if (*(float *)((long)puVar30 + 4) <= *(float *)(uVar37 + (ulong)uVar21 * 4))
      goto LAB_00e8efb4;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 5;
LAB_00e8efb4:
    uVar34 = (ulong)uVar21;
    fVar42 = *(float *)((long)&local_d0 + uVar34 * 4);
    fVar50 = *(float *)(uVar37 + uVar34 * 4) - fVar42;
    if (1e-06 <= fVar50) {
      fVar70 = pfVar27[uVar34];
      fVar50 = (pfVar27[uVar34 + 1] - fVar70) / fVar50;
    }
    else {
      fVar50 = 1.0;
      fVar70 = pfVar27[uVar34];
    }
    uVar2 = uVar21 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    uVar66 = NEON_fmadd(*(float *)((long)puVar30 + 4) - fVar42,fVar50,fVar70);
    *(undefined4 *)((long)puVar30 + 4) = uVar66;
    do {
      if (*(float *)(puVar30 + 1) <= *(float *)(uVar37 + (ulong)uVar21 * 4)) goto LAB_00e8f034;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 5;
LAB_00e8f034:
    uVar34 = (ulong)uVar21;
    fVar42 = *(float *)((long)&local_d0 + uVar34 * 4);
    fVar50 = *(float *)(uVar37 + uVar34 * 4) - fVar42;
    if (1e-06 <= fVar50) {
      fVar70 = pfVar27[uVar34];
      fVar50 = (pfVar27[uVar34 + 1] - fVar70) / fVar50;
    }
    else {
      fVar50 = 1.0;
      fVar70 = pfVar27[uVar34];
    }
    uVar2 = uVar21 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    uVar66 = NEON_fmadd(*(float *)(puVar30 + 1) - fVar42,fVar50,fVar70);
    *(undefined4 *)(puVar30 + 1) = uVar66;
    do {
      if (*(float *)((long)puVar30 + 0xc) <= *(float *)(uVar37 + (ulong)uVar21 * 4))
      goto LAB_00e8f0ac;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 5;
LAB_00e8f0ac:
    uVar34 = (ulong)uVar21;
    fVar50 = *(float *)((long)&local_d0 + uVar34 * 4);
    fVar42 = *(float *)(uVar37 + uVar34 * 4) - fVar50;
    if (fVar42 < 1e-06) {
      fVar42 = 1.0;
      fVar70 = pfVar27[uVar34];
    }
    else {
      fVar70 = pfVar27[uVar34];
      fVar42 = (pfVar27[uVar34 + 1] - fVar70) / fVar42;
    }
    lVar36 = lVar36 + 4;
    uVar66 = NEON_fmadd(*(float *)((long)puVar30 + 0xc) - fVar50,fVar42,fVar70);
    *(undefined4 *)((long)puVar30 + 0xc) = uVar66;
    puVar30 = puVar30 + 2;
  } while( true );
  uVar23 = (uint)uVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b717d,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954af,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)*pfVar27,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[1],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[2],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[3],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[4],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[5],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[6],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954af,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3b5c,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2c4,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
               (double)*(float *)__src,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
  }
  lVar36 = 0x40;
  puVar30 = puVar39;
  do {
    if (((uint)uVar18 >> 0x15 & 1) == 0) {
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8f21c;
LAB_00e8f1b4:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8f268;
LAB_00e8f1b8:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8f2b4;
LAB_00e8f1bc:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8f300;
LAB_00e8f1c0:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8f34c;
LAB_00e8f1c4:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e8f398;
LAB_00e8f1c8:
      uVar23 = (uint)uVar18;
    }
    else {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)((long)puVar30 + -0x1c),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1b4;
LAB_00e8f21c:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)(puVar30 + -3),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1b8;
LAB_00e8f268:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)((long)puVar30 + -0x14),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1bc;
LAB_00e8f2b4:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)(puVar30 + -2),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1c0;
LAB_00e8f300:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)((long)puVar30 + -0xc),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1c4;
LAB_00e8f34c:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)(puVar30 + -1),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1c8;
LAB_00e8f398:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)((long)puVar30 + -4),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)puVar30,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    }
    puVar30 = puVar30 + 4;
    lVar36 = lVar36 + -8;
  } while (lVar36 != 0);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2c4,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
  }
  uVar23 = 0;
  uVar37 = 0;
  fVar42 = *(float *)(param_1[0xe] + 0x13f8);
  local_110[2] = 0.0;
  local_110[3] = 0.0;
  local_110[0] = 0.0;
  local_110[1] = 0.0;
  local_110[6] = 0.0;
  local_110[7] = 0.0;
  local_110[4] = 0.0;
  local_110[5] = 0.0;
  local_f0[2] = 0.0;
  local_f0[3] = 0.0;
  local_f0[0] = 0.0;
  local_f0[1] = 0.0;
  local_f0[6] = 0.0;
  local_f0[7] = 0.0;
  local_f0[4] = 0.0;
  local_f0[5] = 0.0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  fVar50 = (float)NEON_fmadd(fVar41 * fVar42,0x3b800000,0x3f800000);
  fVar41 = (float)NEON_fmadd(fVar50,0x43800000,fVar41);
  uVar33 = 1;
  do {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116d7f,pcVar17,
                 uVar18,"generate_ihist_based_ltm_lce_curve",uVar37 & 0xffffffff);
    }
    uVar23 = uVar23 + 1;
    fVar46 = fVar50 + (&DAT_010fb780)[uVar37];
    fVar47 = local_f0[uVar33] + (((float)(uVar37 & 0xffffffff) + 0.5) * fVar46) / 255.5;
    fVar40 = fVar46 + *(float *)((long)&local_d0 + (ulong)uVar33 * 4);
    local_f0[uVar33] = fVar47;
    *(float *)((long)&local_d0 + (ulong)uVar33 * 4) = fVar40;
    fVar70 = log2f(fVar46 / fVar41);
    fVar70 = (float)NEON_fmsub(fVar46 / fVar41,fVar70,local_110[uVar33]);
    local_110[uVar33] = fVar70;
    if ((uVar37 == 0xff) ||
       (fVar46 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x58 + (ulong)uVar33 * 4),0x437f0000,
                                   0x3f000000), uVar29 = uVar33, (uint)(int)fVar46 <= uVar37)) {
      uVar34 = (ulong)uVar33;
                           (
                           );
        fVar49 = *(float *)(param_2 + 0x58 + uVar34 * 4);
        fVar46 = (float)NEON_fmadd(fVar49,0x437f0000,0x3f000000);
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x15dfa3,pcVar17,
                   (double)fVar49,uVar18,"generate_ihist_based_ltm_lce_curve",(ulong)uVar33,
                   (int)fVar46);
      }
      uVar6 = (ulong)uVar23;
      uVar23 = 0;
      uVar29 = 7;
      if (uVar33 + 1 < 7) {
        uVar29 = uVar33 + 1;
      }
      local_f0[uVar34] = fVar47 / fVar40;
      local_110[uVar34] = fVar70 / (float)uVar6;
    }
    uVar37 = uVar37 + 1;
    uVar33 = uVar29;
  } while (uVar37 != 0x100);
  if (uVar29 < 8) {
    uVar23 = uVar29 - 1;
    fVar41 = local_f0[uVar23];
    uVar66 = *(undefined4 *)((long)&local_d0 + (ulong)uVar23 * 4);
    local_110[uVar29] = local_110[uVar23];
    local_f0[uVar29] = fVar41;
    *(undefined4 *)((long)&local_d0 + (ulong)uVar29 * 4) = uVar66;
  }
  fVar70 = local_110[6];
  fVar41 = local_110[1];
  local_f0[7] = 1.0;
  local_110[0] = local_110[1];
  local_110[7] = local_110[6];
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x181081,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b7d1,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)fVar41,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)fVar41,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)local_110[2],uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)local_110[3],uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)local_110[4],uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)local_110[5],uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)fVar70,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)fVar70,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(puVar15 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b7d1,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  auVar61 = NEON_fmov(0x3f800000,4);
  fVar46 = 0.0;
  if (0.0 <= fVar41) {
    fVar46 = fVar41;
  }
  if (fVar46 <= local_110[2]) {
    fVar46 = local_110[2];
  }
  if (fVar46 <= local_110[3]) {
    fVar46 = local_110[3];
  }
  if (fVar46 <= local_110[4]) {
    fVar46 = local_110[4];
  }
  if (fVar46 <= local_110[5]) {
    fVar46 = local_110[5];
  }
  if (fVar46 <= fVar70) {
    fVar46 = fVar70;
  }
  if (fVar46 <= 1e-06) {
    fVar46 = 1e-06;
  }
  fVar41 = fVar41 / fVar46;
  local_110[2] = local_110[2] / fVar46;
  local_110[3] = local_110[3] / fVar46;
  local_110[4] = local_110[4] / fVar46;
  local_110[5] = local_110[5] / fVar46;
  fVar70 = fVar70 / fVar46;
  auVar52._4_4_ = local_110[2];
  auVar52._0_4_ = fVar41;
  auVar52._8_4_ = local_110[3];
  auVar52._12_4_ = local_110[4];
  auVar52 = NEON_fcmge(auVar52,auVar61,4);
  auVar56._4_4_ = local_110[2];
  auVar56._0_4_ = fVar41;
  auVar56._8_4_ = local_110[3];
  auVar56._12_4_ = local_110[4];
  auVar56 = NEON_fcmle(auVar56,0,4);
  auVar8._4_4_ = local_110[2];
  auVar8._0_4_ = fVar41;
  auVar8._8_4_ = local_110[3];
  auVar8._12_4_ = local_110[4];
  auVar52 = NEON_bsl(auVar52,auVar61,auVar8,1);
  uVar45 = NEON_fcmge(CONCAT44(fVar70,local_110[5]),uVar18,4);
  uVar19 = NEON_fcmle(CONCAT44(fVar70,local_110[5]),0,2);
  auVar59._0_4_ = auVar61._0_4_ - auVar52._0_4_;
  auVar59._4_4_ = auVar61._4_4_ - auVar52._4_4_;
  auVar59._8_4_ = auVar61._8_4_ - auVar52._8_4_;
  auVar59._12_4_ = auVar61._12_4_ - auVar52._12_4_;
  auVar52 = NEON_bit(auVar59,auVar61,auVar56,1);
  uVar45 = NEON_bsl(uVar45,uVar18,CONCAT44(fVar70,local_110[5]),1);
  fVar46 = auVar52._0_4_;
  fVar49 = (float)((ulong)uVar18 >> 0x20);
  uVar19 = NEON_bsl(uVar19,uVar18,
                    CONCAT44(fVar49 - (float)((ulong)uVar45 >> 0x20),(float)uVar18 - (float)uVar45),
                    1);
  fVar40 = (float)((ulong)uVar19 >> 0x20);
  fVar47 = (float)uVar19;
  fVar51 = auVar52._12_4_;
  local_110[2] = auVar52._4_4_;
  fVar41 = local_110[2];
  local_110[3] = auVar52._8_4_;
  fVar70 = local_110[3];
  local_110[0] = fVar46;
  local_110[1] = fVar46;
  local_110[4] = fVar51;
  local_110[5] = fVar47;
  local_110[6] = fVar40;
  local_110[7] = fVar40;
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x188202,pcVar17,
               uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1094c5,pcVar17,
               uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar46,uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar46,uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar41,uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar70,uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar51,uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar47,uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar40,uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar40,uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1094c5,pcVar17,
               uVar19,"generate_ihist_based_ltm_lce_curve");
  }
  fVar53 = *(float *)(param_2 + 0x5c);
  fVar42 = fVar42 + 1.0;
  DAT_012ed634 = powf((fVar53 + *(float *)(param_2 + 0x58)) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)DAT_012ed634,uVar19,"generate_ihist_based_ltm_lce_curve",1);
    fVar53 = *(float *)(param_2 + 0x5c);
  }
  fVar55 = *(float *)(param_2 + 0x60);
  DAT_012ed638 = powf((fVar55 + fVar53) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)DAT_012ed638,uVar19,"generate_ihist_based_ltm_lce_curve",2);
    fVar55 = *(float *)(param_2 + 0x60);
  }
  fVar53 = *(float *)(param_2 + 100);
  DAT_012ed63c = powf((fVar53 + fVar55) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)DAT_012ed63c,uVar19,"generate_ihist_based_ltm_lce_curve",3);
    fVar53 = *(float *)(param_2 + 100);
  }
  fVar55 = *(float *)(param_2 + 0x68);
  DAT_012ed640 = powf((fVar55 + fVar53) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)DAT_012ed640,uVar19,"generate_ihist_based_ltm_lce_curve",4);
    fVar55 = *(float *)(param_2 + 0x68);
  }
  fVar53 = *(float *)(param_2 + 0x6c);
  DAT_012ed644._0_4_ = powf((fVar53 + fVar55) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)(float)DAT_012ed644,uVar19,"generate_ihist_based_ltm_lce_curve",5);
    fVar53 = *(float *)(param_2 + 0x6c);
  }
  DAT_012ed644._4_4_ = powf((*(float *)(param_2 + 0x70) + fVar53) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)DAT_012ed644._4_4_,uVar19,"generate_ihist_based_ltm_lce_curve",6);
  }
  fVar67 = local_f0[6];
  fVar64 = local_f0[5];
  fVar58 = local_f0[4];
  fVar55 = local_f0[3];
  fVar53 = local_f0[2];
  fVar42 = local_f0[1];
  uVar21 = 0;
  lVar36 = 0;
  uVar37 = (ulong)local_110 | 4;
  pfVar27 = (float *)&DAT_001e9488;
  DAT_012ed630 = 0.0;
  DAT_012ed64c = 1.0;
  puVar30 = puVar4;
  do {
    uVar2 = uVar21 + 1;
    fVar69 = *pfVar27;
    if ((uVar2 & 0xfff8) == 0) {
      uVar2 = 7;
    }
    do {
      if (fVar69 <= (&DAT_012ed634)[uVar21]) goto LAB_00e8fc28;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 6;
LAB_00e8fc28:
    uVar34 = (ulong)uVar21;
    fVar43 = (&DAT_012ed630)[uVar21];
    if (1e-06 <= (&DAT_012ed634)[uVar21] - fVar43) {
      fVar44 = local_110[uVar34];
      uVar66 = NEON_fmadd(fVar69 - fVar43,
                          (*(float *)(uVar37 + uVar34 * 4) - fVar44) /
                          ((&DAT_012ed634)[uVar21] - fVar43),fVar44);
      *(undefined4 *)puVar30 = uVar66;
    }
    else {
      uVar66 = NEON_fmadd(fVar69 - fVar43,0x3f800000,local_110[uVar34]);
      *(undefined4 *)puVar30 = uVar66;
    }
    if (lVar36 == 0x10) break;
    uVar2 = uVar21 + 1;
    if ((uVar2 & 0xfff8) == 0) {
      uVar2 = 7;
    }
    do {
      if (pfVar27[1] <= (&DAT_012ed634)[uVar21]) goto LAB_00e8fcc0;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 6;
LAB_00e8fcc0:
    uVar34 = (ulong)uVar21;
    fVar69 = (&DAT_012ed634)[uVar21] - (&DAT_012ed630)[uVar21];
    if (1e-06 <= fVar69) {
      fVar43 = local_110[uVar34];
      fVar69 = (*(float *)(uVar37 + uVar34 * 4) - fVar43) / fVar69;
    }
    else {
      fVar69 = 1.0;
      fVar43 = local_110[uVar34];
    }
    uVar2 = uVar21 + 1;
    if ((uVar2 & 0xfff8) == 0) {
      uVar2 = 7;
    }
    uVar66 = NEON_fmadd(pfVar27[1] - (&DAT_012ed630)[uVar21],fVar69,fVar43);
    *(undefined4 *)((long)puVar30 + 4) = uVar66;
    do {
      if (pfVar27[2] <= (&DAT_012ed634)[uVar21]) goto LAB_00e8fd40;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 6;
LAB_00e8fd40:
    uVar34 = (ulong)uVar21;
    fVar69 = (&DAT_012ed634)[uVar21] - (&DAT_012ed630)[uVar21];
    if (1e-06 <= fVar69) {
      fVar43 = local_110[uVar34];
      fVar69 = (*(float *)(uVar37 + uVar34 * 4) - fVar43) / fVar69;
    }
    else {
      fVar69 = 1.0;
      fVar43 = local_110[uVar34];
    }
    uVar2 = uVar21 + 1;
    if ((uVar2 & 0xfff8) == 0) {
      uVar2 = 7;
    }
    uVar66 = NEON_fmadd(pfVar27[2] - (&DAT_012ed630)[uVar21],fVar69,fVar43);
    *(undefined4 *)(puVar30 + 1) = uVar66;
    pfVar26 = pfVar27 + 3;
    pfVar27 = pfVar27 + 4;
    do {
      if (*pfVar26 <= (&DAT_012ed634)[uVar21]) goto LAB_00e8fdbc;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 6;
LAB_00e8fdbc:
    uVar34 = (ulong)uVar21;
    fVar69 = (&DAT_012ed634)[uVar21] - (&DAT_012ed630)[uVar21];
    if (fVar69 < 1e-06) {
      fVar69 = 1.0;
      fVar43 = local_110[uVar34];
    }
    else {
      fVar43 = local_110[uVar34];
      fVar69 = (*(float *)(uVar37 + uVar34 * 4) - fVar43) / fVar69;
    }
    lVar36 = lVar36 + 4;
    uVar66 = NEON_fmadd(*pfVar26 - (&DAT_012ed630)[uVar21],fVar69,fVar43);
    *(undefined4 *)((long)puVar30 + 0xc) = uVar66;
    puVar30 = puVar30 + 2;
  } while( true );
  uVar21 = 0;
  lVar36 = 0;
  uVar37 = (ulong)local_110 | 4;
  pfVar27 = (float *)&DAT_001e94cc;
  local_110[1] = (fVar46 + auVar61._0_4_) * ((DAT_012ed634 - local_f0[1]) / DAT_012ed634);
  local_110[3] = (fVar70 + auVar61._8_4_) * ((DAT_012ed63c - local_f0[3]) / DAT_012ed63c);
  local_110[4] = (fVar51 + auVar61._12_4_) * ((DAT_012ed640 - local_f0[4]) / DAT_012ed640);
  local_110[2] = (fVar41 + auVar61._4_4_) * ((DAT_012ed638 - local_f0[2]) / DAT_012ed638);
  local_110[0] = local_110[1];
  local_110[6] = (fVar40 + fVar49) * ((DAT_012ed644._4_4_ - local_f0[6]) / DAT_012ed644._4_4_);
  local_110[5] = (fVar47 + (float)uVar18) *
                 (((float)DAT_012ed644 - local_f0[5]) / (float)DAT_012ed644);
  local_110[7] = local_110[6];
  pfVar26 = __src_00;
  do {
    uVar2 = uVar21 + 1;
    fVar41 = *pfVar27;
    if ((uVar2 & 0xfff8) == 0) {
      uVar2 = 7;
    }
    do {
      if (fVar41 <= (&DAT_012ed634)[uVar21]) goto LAB_00e8fed4;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 6;
LAB_00e8fed4:
    uVar34 = (ulong)uVar21;
    fVar70 = (&DAT_012ed630)[uVar21];
    if (1e-06 <= (&DAT_012ed634)[uVar21] - fVar70) {
      fVar46 = local_110[uVar34];
      fVar41 = (float)NEON_fmadd(fVar41 - fVar70,
                                 (*(float *)(uVar37 + uVar34 * 4) - fVar46) /
                                 ((&DAT_012ed634)[uVar21] - fVar70),fVar46);
      *pfVar26 = fVar41;
    }
    else {
      fVar41 = (float)NEON_fmadd(fVar41 - fVar70,0x3f800000,local_110[uVar34]);
      *pfVar26 = fVar41;
    }
    if (lVar36 == 0x40) break;
    uVar2 = uVar21 + 1;
    if ((uVar2 & 0xfff8) == 0) {
      uVar2 = 7;
    }
    do {
      if (pfVar27[1] <= (&DAT_012ed634)[uVar21]) goto LAB_00e8ff6c;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 6;
LAB_00e8ff6c:
    uVar34 = (ulong)uVar21;
    fVar41 = (&DAT_012ed634)[uVar21] - (&DAT_012ed630)[uVar21];
    if (1e-06 <= fVar41) {
      fVar70 = local_110[uVar34];
      fVar41 = (*(float *)(uVar37 + uVar34 * 4) - fVar70) / fVar41;
    }
    else {
      fVar41 = 1.0;
      fVar70 = local_110[uVar34];
    }
    uVar2 = uVar21 + 1;
    if ((uVar2 & 0xfff8) == 0) {
      uVar2 = 7;
    }
    fVar41 = (float)NEON_fmadd(pfVar27[1] - (&DAT_012ed630)[uVar21],fVar41,fVar70);
    pfVar26[1] = fVar41;
    do {
      if (pfVar27[2] <= (&DAT_012ed634)[uVar21]) goto LAB_00e8ffec;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 6;
LAB_00e8ffec:
    uVar34 = (ulong)uVar21;
    fVar41 = (&DAT_012ed634)[uVar21] - (&DAT_012ed630)[uVar21];
    if (1e-06 <= fVar41) {
      fVar70 = local_110[uVar34];
      fVar41 = (*(float *)(uVar37 + uVar34 * 4) - fVar70) / fVar41;
    }
    else {
      fVar41 = 1.0;
      fVar70 = local_110[uVar34];
    }
    uVar2 = uVar21 + 1;
    if ((uVar2 & 0xfff8) == 0) {
      uVar2 = 7;
    }
    fVar41 = (float)NEON_fmadd(pfVar27[2] - (&DAT_012ed630)[uVar21],fVar41,fVar70);
    pfVar26[2] = fVar41;
    pfVar1 = pfVar27 + 3;
    pfVar27 = pfVar27 + 4;
    do {
      if (*pfVar1 <= (&DAT_012ed634)[uVar21]) goto LAB_00e90068;
      uVar21 = uVar21 + 1;
    } while (uVar2 != uVar21);
    uVar21 = 6;
LAB_00e90068:
    uVar34 = (ulong)uVar21;
    fVar41 = (&DAT_012ed634)[uVar21] - (&DAT_012ed630)[uVar21];
    if (fVar41 < 1e-06) {
      fVar41 = 1.0;
      fVar70 = local_110[uVar34];
    }
    else {
      fVar70 = local_110[uVar34];
      fVar41 = (*(float *)(uVar37 + uVar34 * 4) - fVar70) / fVar41;
    }
    lVar36 = lVar36 + 4;
    fVar41 = (float)NEON_fmadd(*pfVar1 - (&DAT_012ed630)[uVar21],fVar41,fVar70);
    pfVar26[3] = fVar41;
    pfVar26 = pfVar26 + 4;
  } while( true );
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa59a,pcVar17,
               (double)fVar50,uVar18,"generate_ihist_based_ltm_lce_curve",8);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124b7d,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da75a,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)local_f0[0],uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar42,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar53,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar55,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar58,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar64,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar67,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               0x3ff0000000000000,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da75a,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11000a,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0dcc,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed630,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed634,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed638,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed63c,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed640,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)(float)DAT_012ed644,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed644._4_4_,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed64c,uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0dcc,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
  }
  fVar42 = 0.0;
  if (1 < *(uint *)((long)param_1 + 0x1c)) {
    fVar42 = *(float *)(param_2 + 0x11c);
  }
  fVar58 = 1.0 - fVar42;
  fVar41 = (float)_DAT_012ed650;
  uVar37 = (ulong)_DAT_012ed650 >> 0x20;
  *(ulong *)(lVar35 + 0x11a4) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x11a4) >> 0x20) * fVar58 +
                (float)((ulong)_DAT_012ed658 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x11a4) * fVar58 + (float)_DAT_012ed658 * fVar42);
  *__src = CONCAT44((float)((ulong)*__src >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                    (float)*__src * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed754;
  uVar37 = (ulong)_DAT_012ed754 >> 0x20;
  *(ulong *)(lVar35 + 0x12a8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x12a8) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed75c >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x12a8) * fVar58 +
                (float)uRam00000000012ed75c * fVar42);
  *(ulong *)(lVar35 + 0x12a0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x12a0) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x12a0) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed660;
  uVar37 = (ulong)_DAT_012ed660 >> 0x20;
  *(ulong *)(lVar35 + 0x11b4) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x11b4) >> 0x20) * fVar58 +
                (float)((ulong)_DAT_012ed668 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x11b4) * fVar58 + (float)_DAT_012ed668 * fVar42);
  *(undefined8 *)(lVar35 + 0x11ac) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  auVar61._4_4_ =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x12b0) >> 0x20) * fVar58 +
       (float)((ulong)_DAT_012ed764 >> 0x20) * fVar42;
  auVar61._0_4_ = (float)*(undefined8 *)(lVar35 + 0x12b0) * fVar58 + (float)_DAT_012ed764 * fVar42;
  auVar61._8_4_ =
       (float)*(undefined8 *)(lVar35 + 0x12b8) * fVar58 + (float)uRam00000000012ed76c * fVar42;
  auVar61._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x12b8) >> 0x20) * fVar58 +
       (float)((ulong)uRam00000000012ed76c >> 0x20) * fVar42;
  *(undefined (*) [16])(lVar35 + 0x12b0) = auVar61;
  fVar41 = (float)_DAT_012ed670;
  uVar37 = (ulong)_DAT_012ed670 >> 0x20;
  *(ulong *)(lVar35 + 0x11c4) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x11c4) >> 0x20) * fVar58 +
                (float)((ulong)_DAT_012ed678 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x11c4) * fVar58 + (float)_DAT_012ed678 * fVar42);
  *puVar39 = CONCAT44((float)((ulong)*puVar39 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                      (float)*puVar39 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed774;
  uVar37 = (ulong)_DAT_012ed774 >> 0x20;
  *(ulong *)(lVar35 + 0x12c8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x12c8) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed77c >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x12c8) * fVar58 +
                (float)uRam00000000012ed77c * fVar42);
  *(ulong *)(lVar35 + 0x12c0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x12c0) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x12c0) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed680;
  uVar37 = (ulong)_DAT_012ed680 >> 0x20;
  *(ulong *)(lVar35 + 0x11d4) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x11d4) >> 0x20) * fVar58 +
                (float)((ulong)_DAT_012ed688 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x11d4) * fVar58 + (float)_DAT_012ed688 * fVar42);
  *(undefined8 *)(lVar35 + 0x11cc) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed784;
  uVar37 = (ulong)_DAT_012ed784 >> 0x20;
  *(ulong *)(lVar35 + 0x12d8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x12d8) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed78c >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x12d8) * fVar58 +
                (float)uRam00000000012ed78c * fVar42);
  *(ulong *)(lVar35 + 0x12d0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x12d0) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x12d0) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed690;
  uVar37 = (ulong)_DAT_012ed690 >> 0x20;
  *(ulong *)(lVar35 + 0x11e4) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x11e4) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed698 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x11e4) * fVar58 +
                (float)uRam00000000012ed698 * fVar42);
  *(undefined8 *)(lVar35 + 0x11dc) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed794;
  uVar37 = (ulong)_DAT_012ed794 >> 0x20;
  *(ulong *)(lVar35 + 0x12e8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x12e8) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed79c >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x12e8) * fVar58 +
                (float)uRam00000000012ed79c * fVar42);
  *(ulong *)(lVar35 + 0x12e0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x12e0) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x12e0) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed6a0;
  uVar37 = (ulong)_DAT_012ed6a0 >> 0x20;
  uVar19 = *(undefined8 *)(lVar35 + 0x12f0);
  *(ulong *)(lVar35 + 0x11f4) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x11f4) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed6a8 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x11f4) * fVar58 +
                (float)uRam00000000012ed6a8 * fVar42);
  *(undefined8 *)(lVar35 + 0x11ec) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed7a4;
  uVar37 = (ulong)_DAT_012ed7a4 >> 0x20;
  uVar34 = (ulong)uRam00000000012ed7ac >> 0x20;
  *(float *)(lVar35 + 0x1300) =
       (float)*(undefined8 *)(lVar35 + 0x12f8) * fVar58 + (float)uRam00000000012ed7ac * fVar42;
  *(float *)(lVar35 + 0x1304) =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x12f8) >> 0x20) * fVar58 + (float)uVar34 * fVar42;
  *(float *)(lVar35 + 0x12f0) = (float)uVar19 * fVar58 + fVar41 * fVar42;
  *(float *)(lVar35 + 0x12f4) = (float)((ulong)uVar19 >> 0x20) * fVar58 + (float)uVar37 * fVar42;
  fVar41 = (float)_DAT_012ed6b0;
  uVar37 = (ulong)_DAT_012ed6b0 >> 0x20;
  uVar34 = (ulong)uRam00000000012ed6b8 >> 0x20;
  uVar19 = *(undefined8 *)(lVar35 + 0x1300);
  *(float *)(lVar35 + 0x120c) =
       (float)*(undefined8 *)(lVar35 + 0x1204) * fVar58 + (float)uRam00000000012ed6b8 * fVar42;
  *(float *)(lVar35 + 0x1210) =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x1204) >> 0x20) * fVar58 + (float)uVar34 * fVar42;
  *(float *)(undefined8 *)(lVar35 + 0x11fc) = (float)uVar18 * fVar58 + fVar41 * fVar42;
  *(float *)(lVar35 + 0x1200) = (float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42;
  fVar41 = (float)_DAT_012ed7b4;
  uVar37 = (ulong)_DAT_012ed7b4 >> 0x20;
  uVar34 = (ulong)uRam00000000012ed7bc >> 0x20;
  *(float *)(lVar35 + 0x1310) =
       (float)*(undefined8 *)(lVar35 + 0x1308) * fVar58 + (float)uRam00000000012ed7bc * fVar42;
  *(float *)(lVar35 + 0x1314) =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x1308) >> 0x20) * fVar58 + (float)uVar34 * fVar42;
  *(float *)(lVar35 + 0x1300) = (float)uVar19 * fVar58 + fVar41 * fVar42;
  *(float *)(lVar35 + 0x1304) = (float)((ulong)uVar19 >> 0x20) * fVar58 + (float)uVar37 * fVar42;
  auVar60._0_8_ =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 +
                (float)((ulong)_DAT_012ed6c0 >> 0x20) * fVar42,
                (float)uVar18 * fVar58 + (float)_DAT_012ed6c0 * fVar42);
  auVar60._8_4_ =
       (float)*(undefined8 *)(lVar35 + 0x1214) * fVar58 + (float)uRam00000000012ed6c8 * fVar42;
  auVar60._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x1214) >> 0x20) * fVar58 +
       (float)((ulong)uRam00000000012ed6c8 >> 0x20) * fVar42;
  *(long *)(lVar35 + 0x1214) = auVar60._8_8_;
  *(undefined8 *)(lVar35 + 0x120c) = auVar60._0_8_;
  auVar62._0_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1310) >> 0x20) * fVar58 +
                (float)((ulong)_DAT_012ed7c4 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1310) * fVar58 + (float)_DAT_012ed7c4 * fVar42);
  auVar62._8_4_ =
       (float)*(undefined8 *)(lVar35 + 0x1318) * fVar58 + (float)uRam00000000012ed7cc * fVar42;
  auVar62._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x1318) >> 0x20) * fVar58 +
       (float)((ulong)uRam00000000012ed7cc >> 0x20) * fVar42;
  *(long *)(lVar35 + 0x1318) = auVar62._8_8_;
  *(undefined8 *)(lVar35 + 0x1310) = auVar62._0_8_;
  fVar41 = (float)_DAT_012ed6d0;
  uVar37 = (ulong)_DAT_012ed6d0 >> 0x20;
  *(ulong *)(lVar35 + 0x1224) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1224) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed6d8 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1224) * fVar58 +
                (float)uRam00000000012ed6d8 * fVar42);
  *(undefined8 *)(lVar35 + 0x121c) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed7d4;
  uVar37 = (ulong)_DAT_012ed7d4 >> 0x20;
  *(ulong *)(lVar35 + 0x1328) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1328) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed7dc >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1328) * fVar58 +
                (float)uRam00000000012ed7dc * fVar42);
  *(ulong *)(lVar35 + 0x1320) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1320) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1320) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed6e0;
  uVar37 = (ulong)_DAT_012ed6e0 >> 0x20;
  *(ulong *)(lVar35 + 0x1234) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1234) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed6e8 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1234) * fVar58 +
                (float)uRam00000000012ed6e8 * fVar42);
  *(undefined8 *)(lVar35 + 0x122c) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed7e4;
  uVar37 = (ulong)_DAT_012ed7e4 >> 0x20;
  *(ulong *)(lVar35 + 0x1338) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1338) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed7ec >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1338) * fVar58 +
                (float)uRam00000000012ed7ec * fVar42);
  *(ulong *)(lVar35 + 0x1330) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1330) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1330) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed6f0;
  uVar37 = (ulong)_DAT_012ed6f0 >> 0x20;
  *(ulong *)(lVar35 + 0x1244) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1244) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed6f8 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1244) * fVar58 +
                (float)uRam00000000012ed6f8 * fVar42);
  *(undefined8 *)(lVar35 + 0x123c) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed7f4;
  uVar37 = (ulong)_DAT_012ed7f4 >> 0x20;
  *(ulong *)(lVar35 + 0x1348) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1348) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed7fc >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1348) * fVar58 +
                (float)uRam00000000012ed7fc * fVar42);
  *(ulong *)(lVar35 + 0x1340) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1340) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1340) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed700;
  uVar37 = (ulong)_DAT_012ed700 >> 0x20;
  *(ulong *)(lVar35 + 0x1254) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1254) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed708 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1254) * fVar58 +
                (float)uRam00000000012ed708 * fVar42);
  *(undefined8 *)(lVar35 + 0x124c) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed804;
  uVar37 = (ulong)_DAT_012ed804 >> 0x20;
  *(ulong *)(lVar35 + 0x1358) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1358) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed80c >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1358) * fVar58 +
                (float)uRam00000000012ed80c * fVar42);
  *(ulong *)(lVar35 + 0x1350) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1350) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1350) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed710;
  uVar37 = (ulong)_DAT_012ed710 >> 0x20;
  *(ulong *)(lVar35 + 0x1264) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1264) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed718 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1264) * fVar58 +
                (float)uRam00000000012ed718 * fVar42);
  *(undefined8 *)(lVar35 + 0x125c) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed814;
  uVar37 = (ulong)_DAT_012ed814 >> 0x20;
  *(ulong *)(lVar35 + 0x1368) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1368) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed81c >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1368) * fVar58 +
                (float)uRam00000000012ed81c * fVar42);
  *(ulong *)(lVar35 + 0x1360) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1360) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1360) * fVar58 + fVar41 * fVar42);
  auVar9._4_4_ = (float)((ulong)uVar18 >> 0x20) * fVar58 +
                 (float)((ulong)_DAT_012ed720 >> 0x20) * fVar42;
  auVar9._0_4_ = (float)uVar18 * fVar58 + (float)_DAT_012ed720 * fVar42;
  auVar9._8_4_ = (float)*(undefined8 *)(lVar35 + 0x1274) * fVar58 +
                 (float)uRam00000000012ed728 * fVar42;
  auVar9._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x1274) >> 0x20) * fVar58 +
       (float)((ulong)uRam00000000012ed728 >> 0x20) * fVar42;
  *(undefined (*) [16])(lVar35 + 0x126c) = auVar9;
  fVar41 = (float)_DAT_012ed824;
  uVar37 = (ulong)_DAT_012ed824 >> 0x20;
  *(ulong *)(lVar35 + 0x1378) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1378) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed82c >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1378) * fVar58 +
                (float)uRam00000000012ed82c * fVar42);
  *(ulong *)(lVar35 + 0x1370) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1370) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1370) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed730;
  uVar37 = (ulong)_DAT_012ed730 >> 0x20;
  *(ulong *)(lVar35 + 0x1284) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1284) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed738 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1284) * fVar58 +
                (float)uRam00000000012ed738 * fVar42);
  *(undefined8 *)(lVar35 + 0x127c) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed834;
  uVar37 = (ulong)_DAT_012ed834 >> 0x20;
  *(ulong *)(lVar35 + 5000) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 5000) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed83c >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 5000) * fVar58 +
                (float)uRam00000000012ed83c * fVar42);
  *(ulong *)(lVar35 + 0x1380) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1380) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1380) * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed740;
  uVar37 = (ulong)_DAT_012ed740 >> 0x20;
  *(ulong *)(lVar35 + 0x1294) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1294) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed748 >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1294) * fVar58 +
                (float)uRam00000000012ed748 * fVar42);
  *(undefined8 *)(lVar35 + 0x128c) =
       CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar58 + (float)uVar37 * fVar42,
                (float)uVar18 * fVar58 + fVar41 * fVar42);
  fVar41 = (float)_DAT_012ed844;
  uVar37 = (ulong)_DAT_012ed844 >> 0x20;
  *(ulong *)(lVar35 + 0x1398) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1398) >> 0x20) * fVar58 +
                (float)((ulong)uRam00000000012ed84c >> 0x20) * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1398) * fVar58 +
                (float)uRam00000000012ed84c * fVar42);
  *(ulong *)(lVar35 + 0x1390) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x1390) >> 0x20) * fVar58 +
                (float)uVar37 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x1390) * fVar58 + fVar41 * fVar42);
  fVar41 = _DAT_012ed854 * fVar42;
  fVar50 = _DAT_012ed858 * fVar42;
  uVar66 = NEON_fmadd(fVar42,DAT_012ed750,fVar58 * *(float *)(lVar35 + 0x129c));
  *(ulong *)(lVar35 + 0x13a8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x13a8) >> 0x20) * fVar58 +
                fRam00000000012ed860 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x13a8) * fVar58 + fRam00000000012ed85c * fVar42);
  *(ulong *)(lVar35 + 0x13a0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x13a0) >> 0x20) * fVar58 + fVar50,
                (float)*(undefined8 *)(lVar35 + 0x13a0) * fVar58 + fVar41);
  fVar55 = DAT_012ed894._4_4_;
  fVar53 = (float)DAT_012ed894;
  fVar51 = fRam00000000012ed890;
  fVar49 = fRam00000000012ed88c;
  fVar47 = _DAT_012ed888;
  fVar40 = _DAT_012ed884;
  fVar46 = fRam00000000012ed880;
  fVar70 = fRam00000000012ed87c;
  fVar50 = _DAT_012ed878;
  fVar41 = _DAT_012ed874;
  auVar54._0_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x13b0) >> 0x20) * fVar58 +
                _DAT_012ed868 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x13b0) * fVar58 + _DAT_012ed864 * fVar42);
  auVar54._8_4_ = (float)*(undefined8 *)(lVar35 + 0x13b8) * fVar58 + fRam00000000012ed86c * fVar42;
  auVar54._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x13b8) >> 0x20) * fVar58 +
       fRam00000000012ed870 * fVar42;
  *(undefined4 *)(lVar35 + 0x129c) = uVar66;
  auVar57._0_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x13c0) >> 0x20) * fVar58 + fVar50 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x13c0) * fVar58 + fVar41 * fVar42);
  auVar57._8_4_ = (float)*(undefined8 *)(lVar35 + 0x13c8) * fVar58 + fVar70 * fVar42;
  auVar57._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar35 + 0x13c8) >> 0x20) * fVar58 + fVar46 * fVar42;
  *(long *)(lVar35 + 0x13b8) = auVar54._8_8_;
  *(undefined8 *)(lVar35 + 0x13b0) = auVar54._0_8_;
  *(long *)(lVar35 + 0x13c8) = auVar57._8_8_;
  *(undefined8 *)(lVar35 + 0x13c0) = auVar57._0_8_;
  *(ulong *)(lVar35 + 0x13d8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x13d8) >> 0x20) * fVar58 + fVar51 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x13d8) * fVar58 + fVar49 * fVar42);
  *(ulong *)(lVar35 + 0x13d0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar35 + 0x13d0) >> 0x20) * fVar58 + fVar47 * fVar42,
                (float)*(undefined8 *)(lVar35 + 0x13d0) * fVar58 + fVar40 * fVar42);
  *(ulong *)(lVar35 + 0x13e0) =
       CONCAT44(fVar58 * (float)((ulong)*(undefined8 *)(lVar35 + 0x13e0) >> 0x20) + fVar42 * fVar55,
                fVar58 * (float)*(undefined8 *)(lVar35 + 0x13e0) + fVar42 * fVar53);
  uVar23 = (uint)uVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133ccd,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124baf,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
               (double)DAT_010fb780,uVar18,"update_ihist_based_curve");
  }
  pfVar26 = (float *)(lVar35 + 0x12c0);
  pfVar27 = (float *)&DAT_010fb78c;
  lVar36 = 0xff;
  do {
    if (((uint)uVar18 >> 0x15 & 1) == 0) {
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e9060c;
LAB_00e905b0:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90658;
LAB_00e905b4:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e906a4;
LAB_00e905b8:
      uVar23 = (uint)uVar18;
    }
    else {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)pfVar27[-2],uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e905b0;
LAB_00e9060c:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)pfVar27[-1],uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e905b4;
LAB_00e90658:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)*pfVar27,uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e905b8;
LAB_00e906a4:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)pfVar27[1],uVar18,"update_ihist_based_curve");
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)pfVar27[2],uVar18,"update_ihist_based_curve");
    }
    lVar36 = lVar36 + -5;
    pfVar27 = pfVar27 + 5;
  } while (lVar36 != 0);
  uVar23 = (uint)uVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124baf,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71d4,pcVar17,
               (double)fVar42,uVar18,"update_ihist_based_curve");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc835,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x156f5c,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
               (double)*(float *)__src,uVar18,"update_ihist_based_curve");
  }
  lVar36 = 0x40;
  do {
    if (((uint)uVar18 >> 0x15 & 1) == 0) {
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90854;
LAB_00e907ec:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e908a0;
LAB_00e907f0:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e908ec;
LAB_00e907f4:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90938;
LAB_00e907f8:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90984;
LAB_00e907fc:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e909d0;
LAB_00e90800:
      uVar23 = (uint)uVar18;
    }
    else {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)((long)puVar39 + -0x1c),uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907ec;
LAB_00e90854:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)(puVar39 + -3),uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907f0;
LAB_00e908a0:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)((long)puVar39 + -0x14),uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907f4;
LAB_00e908ec:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)(puVar39 + -2),uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907f8;
LAB_00e90938:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)((long)puVar39 + -0xc),uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907fc;
LAB_00e90984:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)(puVar39 + -1),uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90800;
LAB_00e909d0:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)((long)puVar39 + -4),uVar18,"update_ihist_based_curve");
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)puVar39,uVar18,"update_ihist_based_curve");
    }
    puVar39 = puVar39 + 4;
    lVar36 = lVar36 + -8;
  } while (lVar36 != 0);
  uVar23 = (uint)uVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x156f5c,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18eb7d,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c4ff9,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
               (double)*__src_00,uVar18,"update_ihist_based_curve");
  }
  lVar36 = 0x40;
  do {
    if (((uint)uVar18 >> 0x15 & 1) == 0) {
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90b78;
LAB_00e90b10:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90bc4;
LAB_00e90b14:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90c10;
LAB_00e90b18:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90c5c;
LAB_00e90b1c:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90ca8;
LAB_00e90b20:
      if (((uint)uVar18 >> 0x15 & 1) != 0) goto LAB_00e90cf4;
LAB_00e90b24:
      uVar23 = (uint)uVar18;
    }
    else {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-7],uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b10;
LAB_00e90b78:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-6],uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b14;
LAB_00e90bc4:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-5],uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b18;
LAB_00e90c10:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-4],uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b1c;
LAB_00e90c5c:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-3],uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b20;
LAB_00e90ca8:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-2],uVar18,"update_ihist_based_curve");
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b24;
LAB_00e90cf4:
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-1],uVar18,"update_ihist_based_curve");
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
                         (
                         );
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)*pfVar26,uVar18,"update_ihist_based_curve");
    }
    uVar23 = (uint)uVar18;
    pfVar26 = pfVar26 + 8;
    lVar36 = lVar36 + -8;
    if (lVar36 == 0) {
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c4ff9,pcVar17,
                   uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da773,pcVar17,
                   uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ebac,pcVar17,
                   uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)puVar4,uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13a8),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13ac),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13b0),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13b4),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13b8),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13bc),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13c0),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13c4),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13c8),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13cc),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13d0),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13d4),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13d8),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13dc),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13e0),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13e4),uVar18,"update_ihist_based_curve");
      }
      if ((uVar23 >> 0x15 & 1) == 0) {
        if (*(long *)(lVar7 + 0x28) == local_b0) {
          return;
        }
      }
      else {
                           (
                           );
        if (*(long *)(lVar7 + 0x28) == local_b0) {
                    ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ebac,pcVar17
                     ,uVar18,"update_ihist_based_curve");
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}
