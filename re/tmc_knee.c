// ===== 0xd9c940 FUN_00e9c940 @ 00e9c940
/* WARNING: Type propagation algorithm not settling */
void FUN_00e9c940(long *param_1,float *param_2)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  long lVar10;
  bool bVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  float *pfVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  undefined4 *puVar21;
  float *pfVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float local_c4;
  float fStack_c0;
  undefined8 local_bc;
  float local_b4;
  long local_b0;
  lVar10 = tpidr_el0;
  local_b0 = *(long *)(lVar10 + 0x28);
  lVar19 = *param_1;
  puVar21 = (undefined4 *)param_1[0xe];
  uVar27 = *(undefined4 *)(lVar19 + 0x6c);
  *(undefined8 *)(puVar21 + 0x460) = *(undefined8 *)(lVar19 + 0x74);
  iVar18 = *(int *)(lVar19 + 0x58);
  *(char *)(puVar21 + 0x45f) = (char)uVar27;
  if (iVar18 == 0) {
    param_2[4] = 0.0;
    uVar16 = *(uint *)(lVar19 + 0x5c);
  }
  else {
    fVar39 = param_2[4];
    param_2[4] = *param_2 * fVar39;
    *param_2 = *param_2 * (1.0 - fVar39);
    uVar16 = *(uint *)(lVar19 + 0x5c);
  }
  lVar20 = lVar19;
  if (uVar16 < 3) {
    memset((void *)((long)param_2 + *(long *)(&DAT_001eca08 + (ulong)uVar16 * 8)),0,
           *(size_t *)(&DAT_001eca20 + (ulong)uVar16 * 8));
    lVar20 = *param_1;
  }
  fVar33 = *(float *)(lVar20 + 0x68);
  uVar14 = *(undefined8 *)(param_2 + 0x27);
  fVar29 = *(float *)((long)param_1 + 0x34);
  fVar25 = (float)NEON_fmadd(*(float *)((long)param_1 + 0xc) + -1.0,param_2[0x10],0x3f800000);
  fVar26 = (float)NEON_fmadd(*(float *)(param_1 + 3) + -1.0,param_2[0x13],0x3f800000);
  pfVar1 = (float *)(puVar21 + 8);
  local_b4 = 1.0;
  fVar25 = param_2[0x11] + fVar25;
  fVar26 = param_2[0x14] + fVar26;
  fVar39 = 1023.0;
  if (fVar25 < 1023.0) {
    fVar39 = fVar25;
  }
  fStack_c0 = 1e-06;
  if (1e-06 < fVar25) {
    fStack_c0 = fVar39;
  }
  fVar39 = 1023.0;
  if (fVar26 < 1023.0) {
    fVar39 = fVar26;
  }
  uVar24 = *(undefined8 *)(param_2 + 0x26);
  uVar23 = *(undefined8 *)(param_2 + 0x24);
  fVar25 = 1e-06;
  if (1e-06 < fVar26) {
    fVar25 = fVar39;
  }
  uVar27 = *(undefined4 *)((long)param_1 + 0x44);
  *(undefined8 *)(puVar21 + 0xd) = *(undefined8 *)(param_2 + 0x29);
  *(undefined8 *)(puVar21 + 0xb) = uVar14;
  *(undefined8 *)(puVar21 + 10) = uVar24;
  *(undefined8 *)(puVar21 + 8) = uVar23;
  uVar16 = *(uint *)(lVar20 + 0x60);
  fVar39 = fStack_c0 * fVar25;
  if (fVar33 <= fStack_c0 * fVar25) {
    fVar39 = fVar33;
  }
  fVar26 = param_2[0x25] / fVar39;
  fVar25 = 0.9995;
  if (fVar26 < 0.9995) {
    fVar25 = fVar26;
  }
  fVar33 = (float)puVar21[8] + 0.0001;
  if ((float)puVar21[8] + 0.0001 < fVar26) {
    fVar33 = fVar25;
  }
  pfVar22 = (float *)(puVar21 + 9);
  *pfVar22 = fVar33;
  pfVar2 = (float *)(puVar21 + 0xf);
  pfVar7 = (float *)(puVar21 + 0x504);
  pfVar8 = (float *)(puVar21 + 0x50b);
  fVar26 = param_2[0x26] / fStack_c0;
  local_bc = NEON_fmov(0x3f800000,4);
  fVar25 = 0.9996;
  if (fVar26 < 0.9996) {
    fVar25 = fVar26;
  }
  fVar32 = fVar33 + 0.0001;
  if (fVar33 + 0.0001 < fVar26) {
    fVar32 = fVar25;
  }
  puVar21[10] = fVar32;
  if (uVar16 < 2) {
    fVar30 = fStack_c0 + -1.0;
    fVar26 = (float)NEON_fmadd(fVar30,param_2[0x27],0x3f800000);
    fVar31 = (param_2[0x2a] - param_2[0x26]) * 0.25;
    fVar33 = (param_2[0x26] + fVar31) / fVar26;
    fVar25 = 0.9997;
    if (fVar33 < 0.9997) {
      fVar25 = fVar33;
    }
    fVar28 = fVar32 + 0.0001;
    if (fVar32 + 0.0001 < fVar33) {
      fVar28 = fVar25;
    }
    puVar21[0xb] = fVar28;
    fVar25 = (float)NEON_fmadd(fVar30,param_2[0x28],0x3f800000);
    fVar33 = (fVar31 + fVar31 + param_2[0x26]) / fVar25;
    local_bc = CONCAT44(fVar25,fVar26);
    fVar25 = 0.9998;
    if (fVar33 < 0.9998) {
      fVar25 = fVar33;
    }
    fVar26 = fVar28 + 0.0001;
    if (fVar28 + 0.0001 < fVar33) {
      fVar26 = fVar25;
    }
    puVar21[0xc] = fVar26;
    local_b4 = (float)NEON_fmadd(fVar30,param_2[0x29],0x3f800000);
    fVar33 = (float)NEON_fmadd(fVar31,0x40400000,param_2[0x26]);
    fVar33 = fVar33 / local_b4;
    fVar25 = 0.9999;
    if (fVar33 < 0.9999) {
      fVar25 = fVar33;
    }
    fVar32 = fVar26 + 0.0001;
    if (fVar26 + 0.0001 < fVar33) {
      fVar32 = fVar25;
    }
    puVar21[0xd] = fVar32;
  }
  local_c4 = fVar39;
  FUN_00e9fd50(*param_2,*param_1,pfVar1,pfVar1,pfVar2,&local_c4,
               *(undefined4 *)(param_1[0xe] + 0x1194));
  puVar12 = PTR_g_logInfo_010f56f8;
  if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12ba29,pcVar13,
               (double)*param_2,uVar14,"CalculateAnchorKneePoints");
  }
  FUN_00e9fd50(param_2[4],*param_1,pfVar2,pfVar7,pfVar8,&local_c4,
               *(undefined4 *)(param_1[0xe] + 0x1194));
  if (((byte)puVar12[0x2a] >> 5 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12ba81,pcVar13,
               (double)param_2[4],uVar14,"CalculateAnchorKneePoints");
  }
  lVar17 = param_1[0xe];
  pfVar3 = (float *)(puVar21 + 0x16);
  pfVar4 = (float *)(puVar21 + 0x1d);
  pfVar5 = (float *)(puVar21 + 0x24);
  pfVar6 = (float *)(puVar21 + 0x2b);
  if (*(int *)(lVar17 + 0x1180) == 0) {
    if (*(int *)(lVar20 + 0x70) == 0) {
      FUN_00e9fd50(param_2[8],*param_1,pfVar1,pfVar3,pfVar4,&local_c4,
                   *(undefined4 *)(lVar17 + 0x1194));
      fVar25 = param_2[0xc];
      lVar20 = *param_1;
      uVar9 = *(undefined4 *)(param_1[0xe] + 0x1194);
      pfVar15 = pfVar1;
    }
    else {
      uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
      if ((uVar16 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14123f,pcVar13,
                   uVar14,"CalculateAnchorKneePoints");
        lVar17 = param_1[0xe];
        uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
      }
      *(undefined4 *)(lVar17 + 0x1198) = 1;
      if ((uVar16 >> 0x15 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ad8e,pcVar13,
                   (double)param_2[8],uVar14,"CalculateAnchorKneePoints");
        lVar17 = param_1[0xe];
      }
      FUN_00e9fd50(param_2[8],*param_1,pfVar8,pfVar3,pfVar4,&local_c4,
                   *(undefined4 *)(lVar17 + 0x1194));
      if (((byte)puVar12[0x2a] >> 5 & 1) != 0) {
                           (
                           );
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16baa9,pcVar13,
                   (double)param_2[0xc],uVar14,"CalculateAnchorKneePoints");
      }
      fVar25 = param_2[0xc];
      lVar20 = *param_1;
      uVar9 = *(undefined4 *)(param_1[0xe] + 0x1194);
      pfVar15 = pfVar4;
    }
    FUN_00e9fd50(fVar25,lVar20,pfVar15,pfVar5,pfVar6,&local_c4,uVar9);
    lVar20 = param_1[0xe];
    iVar18 = *(int *)(lVar20 + 0x1184);
  }
  else {
    lVar20 = param_1[0xe];
    iVar18 = *(int *)(lVar20 + 0x1184);
  }
  if ((iVar18 == 0) && ((int *)param_1[5] != (int *)0x0)) {
    fVar25 = *(float *)(param_1 + 8);
    if ((fVar25 <= 1e-06) || (*(int *)param_1[5] == 0)) {
      bVar11 = true;
      fVar25 = 1.677722e+07;
    }
    else {
      bVar11 = false;
    }
    fVar30 = 1.0;
    fVar33 = (float)NEON_fmadd(uVar27,param_2[0x36],param_2[0x37]);
    fVar32 = param_2[0x35];
    fVar25 = param_2[0x33] / fVar25;
    fVar26 = fVar30;
    if (fVar33 < 1.0) {
      fVar26 = fVar33;
    }
    fVar31 = 0.0;
    if (0.0 < fVar33) {
      fVar31 = fVar26;
    }
    fVar26 = param_2[0x34];
    if (fVar25 < param_2[0x34]) {
      fVar26 = fVar25;
    }
    fVar33 = fVar30;
    if (1.0 < fVar25) {
      fVar33 = fVar26;
    }
    fVar25 = fVar33;
    if (*(int *)(param_1 + 0xb) == 1) {
      fVar25 = *(float *)((long)param_1 + 0x3c);
      if (*(float *)((long)param_1 + 0x3c) <= 1.0) {
        fVar25 = fVar30;
      }
      if ((bVar11) &&
         (fVar26 = (float)NEON_fminnm(ABS(*(float *)(param_1 + 2) - *(float *)((long)param_1 + 0x14)
                                         ) / ((*(float *)(param_1 + 2) +
                                              *(float *)((long)param_1 + 0x14)) * 0.5),
                                      ABS(fVar25 - fVar33) / ((fVar33 + fVar25) * 0.5)),
         fVar26 < 0.01)) {
        fVar32 = 1.0;
      }
    }
    if ((*(int *)(param_1 + 0xf) == 0) &&
       (fVar33 = (float)NEON_fmadd(fVar32,fVar25,fVar33 * (1.0 - fVar32)),
       ((byte)puVar12[0x28] >> 3 & 1) != 0)) {
                         (
                         );
                ((Log *)0x8,0x174c9b,(char *)0x5,0x124c9f,pcVar13,(double)fVar31,(double)fVar33,
                 uVar14,"CalculateFaceAdjustment");
      lVar20 = param_1[0xe];
    }
    *(float *)(lVar20 + 0x1190) = fVar33;
    fVar26 = powf(fVar33,param_2[2]);
    iVar18 = *(int *)(lVar20 + 0x1180);
    fVar25 = 1e-06;
    if (1e-06 <= fVar26) {
      fVar25 = fVar26;
    }
    fVar32 = 1.0 - fVar31;
    fVar26 = (float)NEON_fmadd(fVar31,1.0 / fVar25,fVar32);
    fVar30 = (float)puVar21[9] * fVar26;
    fVar26 = (float)puVar21[10] * fVar26;
    fVar25 = 0.9995;
    if (fVar30 < 0.9995) {
      fVar25 = fVar30;
    }
    fVar28 = (float)puVar21[8] + 0.0001;
    if ((float)puVar21[8] + 0.0001 < fVar30) {
      fVar28 = fVar25;
    }
    fVar25 = 0.9996;
    if (fVar26 < 0.9996) {
      fVar25 = fVar26;
    }
    fVar30 = fVar28 + 0.0001;
    if (fVar28 + 0.0001 < fVar26) {
      fVar30 = fVar25;
    }
    puVar21[9] = fVar28;
    puVar21[10] = fVar30;
    if (iVar18 == 0) {
      fVar26 = powf(fVar33,param_2[10]);
      fVar25 = 1e-06;
      if (1e-06 <= fVar26) {
        fVar25 = fVar26;
      }
      fVar26 = (float)NEON_fmadd(fVar31,1.0 / fVar25,fVar32);
      fVar30 = (float)puVar21[0x17] * fVar26;
      fVar26 = (float)puVar21[0x18] * fVar26;
      fVar25 = 0.9995;
      if (fVar30 < 0.9995) {
        fVar25 = fVar30;
      }
      fVar28 = (float)puVar21[0x16] + 0.0001;
      if ((float)puVar21[0x16] + 0.0001 < fVar30) {
        fVar28 = fVar25;
      }
      fVar25 = 0.9996;
      if (fVar26 < 0.9996) {
        fVar25 = fVar26;
      }
      fVar30 = fVar28 + 0.0001;
      if (fVar28 + 0.0001 < fVar26) {
        fVar30 = fVar25;
      }
      puVar21[0x17] = fVar28;
      puVar21[0x18] = fVar30;
      fVar26 = powf(fVar33,param_2[0xe]);
      fVar25 = 1e-06;
      if (1e-06 <= fVar26) {
        fVar25 = fVar26;
      }
      fVar26 = (float)NEON_fmadd(fVar31,1.0 / fVar25,fVar32);
      fVar33 = (float)puVar21[0x25] * fVar26;
      fVar26 = (float)puVar21[0x26] * fVar26;
      fVar25 = 0.9995;
      if (fVar33 < 0.9995) {
        fVar25 = fVar33;
      }
      fVar32 = (float)puVar21[0x24] + 0.0001;
      if ((float)puVar21[0x24] + 0.0001 < fVar33) {
        fVar32 = fVar25;
      }
      fVar25 = 0.9996;
      if (fVar26 < 0.9996) {
        fVar25 = fVar26;
      }
      fVar33 = fVar32 + 0.0001;
      if (fVar32 + 0.0001 < fVar26) {
        fVar33 = fVar25;
      }
      puVar21[0x25] = fVar32;
      puVar21[0x26] = fVar33;
    }
  }
  if ((*(char *)((long)param_1 + 0x49) == '\x01') && (*(char *)(param_1 + 9) == '\0')) {
    fVar25 = 8.0;
    if (fVar29 < 8.0) {
      fVar25 = fVar29;
    }
    fVar26 = 1.0;
    if (1.0 < fVar29) {
      fVar26 = fVar25;
    }
    fVar29 = powf(fVar26,param_2[3]);
    iVar18 = *(int *)(lVar20 + 0x1180);
    fVar25 = 1e-06;
    if (1e-06 <= fVar29) {
      fVar25 = fVar29;
    }
    fVar29 = (float)puVar21[9] * (1.0 / fVar25);
    fVar33 = (1.0 / fVar25) * (float)puVar21[10];
    fVar25 = 0.9995;
    if (fVar29 < 0.9995) {
      fVar25 = fVar29;
    }
    fVar32 = (float)puVar21[8] + 0.0001;
    if ((float)puVar21[8] + 0.0001 < fVar29) {
      fVar32 = fVar25;
    }
    fVar25 = 0.9996;
    if (fVar33 < 0.9996) {
      fVar25 = fVar33;
    }
    fVar29 = fVar32 + 0.0001;
    if (fVar32 + 0.0001 < fVar33) {
      fVar29 = fVar25;
    }
    puVar21[9] = fVar32;
    puVar21[10] = fVar29;
    if (iVar18 == 0) {
      fVar29 = powf(fVar26,param_2[0xb]);
      fVar25 = 1e-06;
      if (1e-06 <= fVar29) {
        fVar25 = fVar29;
      }
      fVar29 = (float)puVar21[0x17] * (1.0 / fVar25);
      fVar33 = (1.0 / fVar25) * (float)puVar21[0x18];
      fVar25 = 0.9995;
      if (fVar29 < 0.9995) {
        fVar25 = fVar29;
      }
      fVar32 = (float)puVar21[0x16] + 0.0001;
      if ((float)puVar21[0x16] + 0.0001 < fVar29) {
        fVar32 = fVar25;
      }
      fVar25 = 0.9996;
      if (fVar33 < 0.9996) {
        fVar25 = fVar33;
      }
      fVar29 = fVar32 + 0.0001;
      if (fVar32 + 0.0001 < fVar33) {
        fVar29 = fVar25;
      }
      puVar21[0x17] = fVar32;
      puVar21[0x18] = fVar29;
      fVar26 = powf(fVar26,param_2[0xf]);
      fVar25 = 1e-06;
      if (1e-06 <= fVar26) {
        fVar25 = fVar26;
      }
      fVar26 = (float)puVar21[0x25] * (1.0 / fVar25);
      fVar29 = (1.0 / fVar25) * (float)puVar21[0x26];
      fVar25 = 0.9995;
      if (fVar26 < 0.9995) {
        fVar25 = fVar26;
      }
      fVar33 = (float)puVar21[0x24] + 0.0001;
      if ((float)puVar21[0x24] + 0.0001 < fVar26) {
        fVar33 = fVar25;
      }
      fVar25 = 0.9996;
      if (fVar29 < 0.9996) {
        fVar25 = fVar29;
      }
      fVar26 = fVar33 + 0.0001;
      if (fVar33 + 0.0001 < fVar29) {
        fVar26 = fVar25;
      }
      puVar21[0x25] = fVar33;
      puVar21[0x26] = fVar26;
    }
  }
  uVar14 = *(undefined8 *)(puVar12 + 0x28);
  *(float *)(lVar20 + 0x18) = fVar39;
  uVar16 = (uint)uVar14;
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16ba6e,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x188265,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)*pfVar1,uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)*pfVar22,uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[10],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[0xb],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[0xc],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[0xd],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[0xe],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x188265,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ad53,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc987,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)*pfVar6,uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x2c],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x2d],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x2e],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x2f],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x30],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x31],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) == 0) {
    iVar18 = *(int *)(param_1[0xe] + 0x1194);
  }
  else {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc987,pcVar13,
               uVar14,"CalculateKneePoints");
    iVar18 = *(int *)(param_1[0xe] + 0x1194);
  }
  if (iVar18 == 1) {
    if ((param_2 + 0x23 > pfVar22 && param_2 <= puVar21 + 0x511) &&
        (param_2 + 0x23 <= pfVar22 || (float *)(puVar21 + 0x511) != param_2)) {
      iVar18 = 0;
      lVar20 = 0;
      while (lVar17 = lVar20, lVar17 != 0x18) {
        fVar25 = *(float *)((long)param_2 + lVar17 + 0x78);
        *(float *)((long)puVar21 + lVar17 + 0x94) = fVar25;
        *(float *)((long)puVar21 + lVar17 + 0x5c) = fVar25;
        *(float *)((long)puVar21 + lVar17 + 0x1414) = fVar25;
        *(float *)((long)puVar21 + lVar17 + 0x24) = fVar25;
        fVar39 = powf(*(float *)((long)puVar21 + lVar17 + 0x40) / fVar25,*param_2);
        *(float *)((long)puVar21 + lVar17 + 0x40) = fVar25 * fVar39;
        fVar39 = powf(*(float *)((long)puVar21 + lVar17 + 0x1430) / fVar25,param_2[4]);
        *(float *)((long)puVar21 + lVar17 + 0x1430) = fVar25 * fVar39;
        fVar39 = powf(*(float *)((long)puVar21 + lVar17 + 0x78) / fVar25,param_2[8]);
        *(float *)((long)puVar21 + lVar17 + 0x78) = fVar25 * fVar39;
        fVar39 = powf(*(float *)((long)puVar21 + lVar17 + 0xb0) / fVar25,param_2[0xc]);
        lVar20 = lVar17 + 8;
        iVar18 = iVar18 + 2;
        *(float *)((long)puVar21 + lVar17 + 0xb0) = fVar25 * fVar39;
        if ((iVar18 != 0) && (iVar18 != 6)) {
          fVar25 = *(float *)((long)param_2 + lVar17 + 0x7c);
          *(float *)((long)puVar21 + lVar17 + 0x98) = fVar25;
          *(float *)((long)puVar21 + lVar17 + 0x60) = fVar25;
          *(float *)((long)puVar21 + lVar17 + 0x1418) = fVar25;
          *(float *)((long)puVar21 + lVar17 + 0x28) = fVar25;
          fVar39 = powf(*(float *)((long)puVar21 + lVar17 + 0x44) / fVar25,*param_2);
          *(float *)((long)puVar21 + lVar17 + 0x44) = fVar25 * fVar39;
          fVar39 = powf(*(float *)((long)puVar21 + lVar17 + 0x1434) / fVar25,param_2[4]);
          *(float *)((long)puVar21 + lVar17 + 0x1434) = fVar25 * fVar39;
          fVar39 = powf(*(float *)((long)puVar21 + lVar17 + 0x7c) / fVar25,param_2[8]);
          *(float *)((long)puVar21 + lVar17 + 0x7c) = fVar25 * fVar39;
          fVar39 = powf(*(float *)((long)puVar21 + lVar17 + 0xb4) / fVar25,param_2[0xc]);
          *(float *)((long)puVar21 + lVar17 + 0xb4) = fVar25 * fVar39;
        }
      }
    }
    else {
      uVar37 = *(undefined8 *)(param_2 + 0x20);
      uVar24 = *(undefined8 *)(param_2 + 0x1e);
      uVar23 = *(undefined8 *)(puVar21 + 0x12);
      uVar14 = *(undefined8 *)(puVar21 + 0x10);
      fVar31 = *param_2;
      fVar33 = param_2[0xc];
      fVar34 = (float)uVar24;
      fVar35 = (float)((ulong)uVar24 >> 0x20);
      fVar36 = (float)uVar37;
      fVar38 = (float)((ulong)uVar37 >> 0x20);
      fVar32 = param_2[8];
      fVar30 = param_2[4];
      *(undefined8 *)(puVar21 + 0x27) = uVar37;
      *(undefined8 *)(puVar21 + 0x25) = uVar24;
      *(undefined8 *)(puVar21 + 0x19) = uVar37;
      *(undefined8 *)(puVar21 + 0x17) = uVar24;
      *(undefined8 *)(puVar21 + 0x507) = uVar37;
      *(undefined8 *)(puVar21 + 0x505) = uVar24;
      *(undefined8 *)(puVar21 + 0xb) = uVar37;
      *(undefined8 *)(puVar21 + 9) = uVar24;
      fVar39 = powf((float)uVar14 / fVar34,fVar31);
      fVar25 = powf((float)((ulong)uVar14 >> 0x20) / fVar35,fVar31);
      fVar26 = powf((float)uVar23 / fVar36,fVar31);
      fVar29 = powf((float)((ulong)uVar23 >> 0x20) / fVar38,fVar31);
      uVar23 = *(undefined8 *)(puVar21 + 0x50e);
      uVar14 = *(undefined8 *)(puVar21 + 0x50c);
      *(ulong *)(puVar21 + 0x12) = CONCAT44(fVar38 * fVar29,fVar36 * fVar26);
      *(ulong *)(puVar21 + 0x10) = CONCAT44(fVar35 * fVar25,fVar34 * fVar39);
      fVar39 = powf((float)uVar14 / fVar34,fVar30);
      fVar25 = powf((float)((ulong)uVar14 >> 0x20) / fVar35,fVar30);
      fVar26 = powf((float)uVar23 / fVar36,fVar30);
      fVar29 = powf((float)((ulong)uVar23 >> 0x20) / fVar38,fVar30);
      uVar23 = *(undefined8 *)(puVar21 + 0x20);
      uVar14 = *(undefined8 *)(puVar21 + 0x1e);
      *(ulong *)(puVar21 + 0x50e) = CONCAT44(fVar38 * fVar29,fVar36 * fVar26);
      *(ulong *)(puVar21 + 0x50c) = CONCAT44(fVar35 * fVar25,fVar34 * fVar39);
      fVar39 = powf((float)uVar14 / fVar34,fVar32);
      fVar25 = powf((float)((ulong)uVar14 >> 0x20) / fVar35,fVar32);
      fVar26 = powf((float)uVar23 / fVar36,fVar32);
      fVar29 = powf((float)((ulong)uVar23 >> 0x20) / fVar38,fVar32);
      uVar23 = *(undefined8 *)(puVar21 + 0x2e);
      uVar14 = *(undefined8 *)(puVar21 + 0x2c);
      *(ulong *)(puVar21 + 0x20) = CONCAT44(fVar38 * fVar29,fVar36 * fVar26);
      *(ulong *)(puVar21 + 0x1e) = CONCAT44(fVar35 * fVar25,fVar34 * fVar39);
      fVar39 = powf((float)uVar14 / fVar34,fVar33);
      fVar25 = powf((float)((ulong)uVar14 >> 0x20) / fVar35,fVar33);
      fVar26 = powf((float)uVar23 / fVar36,fVar33);
      fVar29 = powf((float)((ulong)uVar23 >> 0x20) / fVar38,fVar33);
      fVar28 = param_2[0x22];
      puVar21[0x29] = fVar28;
      puVar21[0x1b] = fVar28;
      puVar21[0x509] = fVar28;
      puVar21[0xd] = fVar28;
      *(ulong *)(puVar21 + 0x2e) = CONCAT44(fVar38 * fVar29,fVar36 * fVar26);
      *(ulong *)(puVar21 + 0x2c) = CONCAT44(fVar35 * fVar25,fVar34 * fVar39);
      fVar39 = powf((float)puVar21[0x14] / fVar28,fVar31);
      puVar21[0x14] = fVar28 * fVar39;
      fVar39 = powf((float)puVar21[0x510] / fVar28,fVar30);
      puVar21[0x510] = fVar28 * fVar39;
      fVar39 = powf((float)puVar21[0x22] / fVar28,fVar32);
      puVar21[0x22] = fVar28 * fVar39;
      fVar39 = powf((float)puVar21[0x30] / fVar28,fVar33);
      puVar21[0x30] = fVar28 * fVar39;
    }
  }
  FUN_00e9fa30(pfVar1,pfVar2,puVar21 + 0x32,*(undefined4 *)(param_1 + 0xf));
  FUN_00e9fa30(pfVar7,pfVar8,puVar21 + 0x512,*(undefined4 *)(param_1 + 0xf));
  if (*(int *)(param_1[0xe] + 0x1180) == 0) {
    FUN_00e9fa30(pfVar3,pfVar4,puVar21 + 0x41,*(undefined4 *)(param_1 + 0xf));
    FUN_00e9fa30(pfVar5,pfVar6,puVar21 + 0x50,*(undefined4 *)(param_1 + 0xf));
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  else {
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f85e,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172f11,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)*pfVar1,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)*pfVar22,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[10],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[0xb],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[0xc],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[0xd],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[0xe],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172f11,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9fb,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x181106,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)*pfVar2,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x10],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x11],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x12],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x13],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x14],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x15],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x181106,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16ba34,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ff,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)*pfVar7,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x505],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x506],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x507],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x508],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x509],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x50a],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ff,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ad19,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e6b,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)*pfVar8,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x50c],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x50d],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x50e],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x50f],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x510],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x511],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e6b,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11dad5,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c918,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)*pfVar3,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x17],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x18],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x19],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x1a],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x1b],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x1c],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c918,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172f2a,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x15dff6,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)*pfVar4,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x1e],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x1f],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x20],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x21],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x22],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x23],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x15dff6,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec80,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116e28,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)*pfVar5,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x25],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x26],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x27],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x28],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x29],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x2a],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116e28,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172f67,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172fa4,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)*pfVar6,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x2c],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x2d],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x2e],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x2f],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x30],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x31],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
                       (
                       );
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172fa4,pcVar13,
               uVar14,"CalculateGainCurve");
  }
  uVar27 = *(undefined4 *)(lVar19 + 8);
  *(undefined8 *)(puVar21 + 1) = 0x100000009;
  fVar39 = *param_2;
  *puVar21 = uVar27;
  uVar14 = *(undefined8 *)(lVar19 + 0x54);
  puVar21[0x501] = fVar39;
  fVar39 = param_2[8];
  fVar25 = param_2[4];
  *(undefined8 *)(puVar21 + 3) = uVar14;
  uVar16 = *(uint *)(lVar19 + 0x60);
  puVar21[5] = *(undefined4 *)(lVar19 + 0x5c);
  puVar21[7] = uVar16 & 3;
  puVar21[0x502] = fVar39 + fVar25;
  puVar21[0x503] = param_2[0xc];
  if (*(long *)(lVar10 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
// ===== 0xd933c0 FUN_00e933c0 @ 00e933c0
/* WARNING: Type propagation algorithm not settling */
void FUN_00e933c0(long param_1,long param_2)
{
  undefined (*pauVar1) [16];
  ushort uVar2;
