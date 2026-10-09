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
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12ba29,pcVar13,
               (double)*param_2,uVar14,"CalculateAnchorKneePoints");
  }
  FUN_00e9fd50(param_2[4],*param_1,pfVar2,pfVar7,pfVar8,&local_c4,
               *(undefined4 *)(param_1[0xe] + 0x1194));
  if (((byte)puVar12[0x2a] >> 5 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
        pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
        uVar14 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14123f,pcVar13,
                   uVar14,"CalculateAnchorKneePoints");
        lVar17 = param_1[0xe];
        uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
      }
      *(undefined4 *)(lVar17 + 0x1198) = 1;
      if ((uVar16 >> 0x15 & 1) != 0) {
        pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
        uVar14 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ad8e,pcVar13,
                   (double)param_2[8],uVar14,"CalculateAnchorKneePoints");
        lVar17 = param_1[0xe];
      }
      FUN_00e9fd50(param_2[8],*param_1,pfVar8,pfVar3,pfVar4,&local_c4,
                   *(undefined4 *)(lVar17 + 0x1194));
      if (((byte)puVar12[0x2a] >> 5 & 1) != 0) {
        pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
        uVar14 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
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
      pcVar13 = (char *)CamX::Log::GroupToString(8);
      uVar14 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
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
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16ba6e,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x188265,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)*pfVar1,uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)*pfVar22,uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[10],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[0xb],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[0xc],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[0xd],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18827e,pcVar13,
               (double)(float)puVar21[0xe],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x188265,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ad53,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc987,pcVar13,
               uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)*pfVar6,uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x2c],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x2d],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x2e],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x2f],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x30],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141224,pcVar13,
               (double)(float)puVar21[0x31],uVar14,"CalculateKneePoints");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) == 0) {
    iVar18 = *(int *)(param_1[0xe] + 0x1194);
  }
  else {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f85e,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172f11,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)*pfVar1,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)*pfVar22,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[10],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[0xb],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[0xc],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[0xd],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c69,pcVar13,
               (double)(float)puVar21[0xe],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172f11,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9fb,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x181106,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)*pfVar2,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x10],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x11],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x12],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x13],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x14],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec65,pcVar13,
               (double)(float)puVar21[0x15],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x181106,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16ba34,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ff,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)*pfVar7,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x505],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x506],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x507],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x508],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x509],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acfe,pcVar13,
               (double)(float)puVar21[0x50a],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ff,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ad19,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e6b,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)*pfVar8,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x50c],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x50d],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x50e],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x50f],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x510],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a3cc,pcVar13,
               (double)(float)puVar21[0x511],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e6b,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11dad5,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c918,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)*pfVar3,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x17],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x18],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x19],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x1a],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x1b],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18111f,pcVar13,
               (double)(float)puVar21[0x1c],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c918,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172f2a,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x15dff6,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)*pfVar4,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x1e],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x1f],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x20],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x21],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x22],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e84,pcVar13,
               (double)(float)puVar21[0x23],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x15dff6,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec80,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116e28,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)*pfVar5,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x25],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x26],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x27],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x28],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x29],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141209,pcVar13,
               (double)(float)puVar21[0x2a],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116e28,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172f67,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172fa4,pcVar13,
               uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)*pfVar6,uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x2c],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x2d],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x2e],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x2f],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x30],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c84,pcVar13,
               (double)(float)puVar21[0x31],uVar14,"CalculateGainCurve");
    uVar16 = (uint)*(undefined8 *)(puVar12 + 0x28);
  }
  if ((uVar16 >> 0x15 & 1) != 0) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x200000);
    uVar14 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
  uint uVar3;
  undefined (*pauVar4) [16];
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined auVar17 [12];
  undefined8 *puVar18;
  undefined (*pauVar19) [16];
  undefined (*pauVar20) [16];
  undefined *puVar21;
  char *pcVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *puVar25;
  float *pfVar26;
  float *pfVar27;
  undefined4 *puVar28;
  uint uVar29;
  long lVar30;
  undefined (*pauVar31) [16];
  undefined (*pauVar32) [16];
  float *pfVar33;
  ushort uVar34;
  ulong uVar35;
  ulong uVar36;
  float *pfVar37;
  float fVar38;
  float fVar112;
  float fVar113;
  undefined auVar39 [16];
  float fVar114;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar98 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  float fVar115;
  float fVar116;
  undefined auVar117 [16];
  float fVar119;
  undefined auVar118 [16];
  float fVar120;
  float fVar121;
  float fVar123;
  float fVar124;
  undefined auVar122 [16];
  float fVar125;
  float fVar128;
  float fVar129;
  undefined auVar126 [16];
  float fVar130;
  undefined auVar127 [16];
  undefined auVar131 [16];
  undefined auVar132 [16];
  undefined auVar133 [16];
  undefined auVar134 [16];
  undefined auVar135 [16];
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined4 uVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  undefined auVar150 [16];
  undefined auVar151 [16];
  undefined auVar152 [16];
  undefined auVar153 [16];
  undefined auVar154 [16];
  float fVar155;
  undefined auVar156 [16];
  undefined auVar157 [16];
  undefined auVar158 [16];
  undefined auVar159 [16];
  float fVar160;
  float fVar161;
  undefined auVar162 [16];
  undefined auVar163 [16];
  float fVar164;
  undefined auVar165 [16];
  undefined auVar166 [16];
  float fVar167;
  float fVar168;
  long lVar169;
  long lVar173;
  undefined auVar170 [16];
  undefined auVar171 [16];
  undefined auVar172 [16];
  float fVar174;
  undefined auVar175 [16];
  undefined auVar176 [16];
  undefined auVar177 [16];
  undefined auVar178 [16];
  float fVar179;
  float fVar180;
  long lVar181;
  long lVar183;
  undefined auVar182 [16];
  float fVar184;
  long lVar185;
  long lVar187;
  undefined auVar186 [16];
  float fVar188;
  float fVar189;
  float fVar190;
  long lVar191;
  long lVar195;
  undefined auVar192 [16];
  undefined auVar193 [16];
  undefined auVar194 [16];
  float fVar196;
  float fVar197;
  long lVar198;
  long lVar201;
  undefined auVar199 [16];
  undefined auVar200 [16];
  long lVar202;
  long lVar206;
  undefined auVar203 [16];
  undefined auVar204 [16];
  undefined auVar205 [16];
  float fVar207;
  float fVar208;
  long lVar209;
  long lVar212;
  undefined auVar210 [16];
  undefined auVar211 [16];
  float fVar213;
  float fVar214;
  long lVar215;
  long lVar217;
  undefined auVar216 [16];
  float fVar218;
  undefined auVar219 [16];
  undefined auVar220 [16];
  float fVar221;
  float fVar222;
  undefined auVar223 [16];
  undefined auVar224 [16];
  undefined auVar225 [16];
  float local_10b4 [8];
  float local_1094 [8];
  float local_1074 [17];
  undefined local_1030 [3964];
  float local_b4;
  long local_b0;
  
  lVar5 = tpidr_el0;
  lVar169 = 0;
  lVar173 = 0;
  local_b0 = *(long *)(lVar5 + 0x28);
  lVar181 = 0;
  lVar183 = 0;
  lVar191 = 0;
  lVar195 = 0;
  uVar35 = 0xfffffffffffffff0;
  lVar202 = 0;
  lVar206 = 0;
  lVar215 = 0;
  lVar217 = 0;
  lVar198 = 0;
  lVar201 = 0;
  lVar24 = *(long *)(param_1 + 0x70);
  lVar185 = 0;
  lVar187 = 0;
  lVar209 = 0;
  lVar212 = 0;
  lVar30 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar24 + 0x13e8) = *(undefined4 *)(param_2 + 0x100);
  pauVar31 = (undefined (*) [16])(lVar30 + 0x80);
  *(undefined4 *)(lVar24 + 0x13ec) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(lVar24 + 0x13f0) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(lVar24 + 0x13f4) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(lVar24 + 0x13f8) = *(undefined4 *)(param_2 + 0x110);
  puVar21 = PTR_g_logInfo_010f56f8;
  pauVar32 = pauVar31;
  do {
    auVar117 = pauVar32[-8];
    auVar223 = pauVar32[-7];
    uVar35 = uVar35 + 0x40;
    auVar39 = pauVar32[-6];
    auVar199 = pauVar32[-5];
    auVar126 = pauVar32[-4];
    auVar220 = pauVar32[-3];
    auVar131 = pauVar32[-2];
    pauVar4 = pauVar32 + -1;
    pauVar19 = pauVar32 + -1;
    auVar150 = *pauVar32;
    auVar156 = pauVar32[1];
    auVar177 = pauVar32[2];
    auVar165 = pauVar32[3];
    auVar210 = pauVar32[4];
    auVar224 = pauVar32[5];
    lVar169 = lVar169 + (ulong)auVar117._0_4_ + (ulong)auVar126._0_4_ + (ulong)auVar150._0_4_ +
              (ulong)auVar210._0_4_;
    lVar173 = lVar173 + (ulong)auVar117._4_4_ + (ulong)auVar126._4_4_ + (ulong)auVar150._4_4_ +
              (ulong)auVar210._4_4_;
    lVar181 = lVar181 + (auVar117._8_8_ & 0xffffffff) + (auVar126._8_8_ & 0xffffffff) +
              (auVar150._8_8_ & 0xffffffff) + (auVar210._8_8_ & 0xffffffff);
    lVar183 = lVar183 + (auVar117._8_8_ >> 0x20) + (auVar126._8_8_ >> 0x20) +
              (auVar150._8_8_ >> 0x20) + (auVar210._8_8_ >> 0x20);
    pauVar1 = pauVar32 + 6;
    pauVar20 = pauVar32 + 6;
    auVar117 = pauVar32[7];
    lVar191 = lVar191 + (ulong)auVar223._0_4_ + (ulong)auVar220._0_4_ + (ulong)auVar156._0_4_ +
              (ulong)auVar224._0_4_;
    lVar195 = lVar195 + (ulong)auVar223._4_4_ + (ulong)auVar220._4_4_ + (ulong)auVar156._4_4_ +
              (ulong)auVar224._4_4_;
    pauVar32 = pauVar32 + 0x10;
    lVar202 = lVar202 + (auVar223._8_8_ & 0xffffffff) + (auVar220._8_8_ & 0xffffffff) +
              (auVar156._8_8_ & 0xffffffff) + (auVar224._8_8_ & 0xffffffff);
    lVar206 = lVar206 + (auVar223._8_8_ >> 0x20) + (auVar220._8_8_ >> 0x20) +
              (auVar156._8_8_ >> 0x20) + (auVar224._8_8_ >> 0x20);
    lVar215 = lVar215 + (ulong)auVar39._0_4_ + (ulong)auVar131._0_4_ + (ulong)auVar177._0_4_ +
              (*(ulong *)*pauVar1 & 0xffffffff);
    lVar217 = lVar217 + (ulong)auVar39._4_4_ + (ulong)auVar131._4_4_ + (ulong)auVar177._4_4_ +
              (*(ulong *)*pauVar1 >> 0x20);
    lVar198 = lVar198 + (auVar39._8_8_ & 0xffffffff) + (auVar131._8_8_ & 0xffffffff) +
              (auVar177._8_8_ & 0xffffffff) + (*(ulong *)(*pauVar20 + 8) & 0xffffffff);
    lVar201 = lVar201 + (auVar39._8_8_ >> 0x20) + (auVar131._8_8_ >> 0x20) +
              (auVar177._8_8_ >> 0x20) + (*(ulong *)(*pauVar20 + 8) >> 0x20);
    lVar185 = lVar185 + (ulong)auVar199._0_4_ + (*(ulong *)*pauVar4 & 0xffffffff) +
              (ulong)auVar165._0_4_ + (ulong)auVar117._0_4_;
    lVar187 = lVar187 + (ulong)auVar199._4_4_ + (*(ulong *)*pauVar4 >> 0x20) + (ulong)auVar165._4_4_
              + (ulong)auVar117._4_4_;
    lVar209 = lVar209 + (auVar199._8_8_ & 0xffffffff) + (*(ulong *)(*pauVar19 + 8) & 0xffffffff) +
              (auVar165._8_8_ & 0xffffffff) + (auVar117._8_8_ & 0xffffffff);
    lVar212 = lVar212 + (auVar199._8_8_ >> 0x20) + (*(ulong *)(*pauVar19 + 8) >> 0x20) +
              (auVar165._8_8_ >> 0x20) + (auVar117._8_8_ >> 0x20);
  } while (uVar35 < 0x3f0);
  if (lVar169 + lVar181 + lVar191 + lVar202 + lVar215 + lVar198 + lVar185 + lVar209 +
      lVar173 + lVar183 + lVar195 + lVar206 + lVar217 + lVar201 + lVar187 + lVar212 == 0) {
    if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7214,pcVar22,
                 uVar23,"KNP_bhist_for_gtm");
    }
  }
  else {
    uVar35 = 0xfffffffffffffff0;
    puVar25 = (undefined8 *)&DAT_010fb800;
    do {
      uVar35 = uVar35 + 0x40;
      auVar39 = NEON_ucvtf(pauVar31[-4],4);
      auVar126 = NEON_ucvtf(pauVar31[-3],4);
      auVar117._12_4_ = (int)((ulong)*(undefined8 *)(pauVar31[-8] + 8) >> 0x20);
      auVar117._0_12_ = *(undefined (*) [12])pauVar31[-8];
      auVar150 = NEON_ucvtf(auVar117,4);
      auVar117 = pauVar31[2];
      uVar23 = *(undefined8 *)(pauVar31[3] + 8);
      auVar17 = *(undefined (*) [12])pauVar31[3];
      auVar220._12_4_ = (int)((ulong)*(undefined8 *)(pauVar31[-7] + 8) >> 0x20);
      auVar220._0_12_ = *(undefined (*) [12])pauVar31[-7];
      auVar131 = NEON_ucvtf(auVar220,4);
      auVar199 = pauVar31[-6];
      auVar220 = pauVar31[-5];
      puVar25[-7] = auVar39._8_8_;
      puVar25[-8] = auVar39._0_8_;
      puVar25[-5] = auVar126._8_8_;
      puVar25[-6] = auVar126._0_8_;
      auVar165 = NEON_ucvtf(auVar117,4);
      auVar117 = pauVar31[1];
      auVar39._12_4_ = (int)((ulong)uVar23 >> 0x20);
      auVar39._0_12_ = auVar17;
      auVar210 = NEON_ucvtf(auVar39,4);
      auVar39 = pauVar31[-2];
      auVar126 = pauVar31[-1];
      auVar156 = NEON_ucvtf(auVar199,4);
      auVar177 = NEON_ucvtf(*pauVar31,4);
      puVar25[-0xf] = auVar150._8_8_;
      puVar25[-0x10] = auVar150._0_8_;
      puVar25[-0xd] = auVar131._8_8_;
      puVar25[-0xe] = auVar131._0_8_;
      auVar131 = NEON_ucvtf(auVar117,4);
      auVar117 = pauVar31[4];
      auVar199 = pauVar31[5];
      auVar224 = NEON_ucvtf(auVar220,4);
      auVar220 = pauVar31[6];
      uVar23 = *(undefined8 *)(pauVar31[7] + 8);
      auVar17 = *(undefined (*) [12])pauVar31[7];
      auVar150 = NEON_ucvtf(auVar39,4);
      pauVar31 = pauVar31 + 0x10;
      auVar126 = NEON_ucvtf(auVar126,4);
      puVar25[5] = auVar165._8_8_;
      puVar25[4] = auVar165._0_8_;
      puVar25[7] = auVar210._8_8_;
      puVar25[6] = auVar210._0_8_;
      auVar165 = NEON_ucvtf(auVar117,4);
      puVar25[1] = auVar177._8_8_;
      *puVar25 = auVar177._0_8_;
      puVar25[3] = auVar131._8_8_;
      puVar25[2] = auVar131._0_8_;
      auVar117 = NEON_ucvtf(auVar199,4);
      auVar39 = NEON_ucvtf(auVar220,4);
      puVar25[-0xb] = auVar156._8_8_;
      puVar25[-0xc] = auVar156._0_8_;
      *(undefined (*) [16])(puVar25 + -10) = auVar224;
      auVar199._12_4_ = (int)((ulong)uVar23 >> 0x20);
      auVar199._0_12_ = auVar17;
      auVar199 = NEON_ucvtf(auVar199,4);
      puVar25[-3] = auVar150._8_8_;
      puVar25[-4] = auVar150._0_8_;
      puVar25[-1] = auVar126._8_8_;
      puVar25[-2] = auVar126._0_8_;
      puVar25[9] = auVar165._8_8_;
      puVar25[8] = auVar165._0_8_;
      puVar25[0xb] = auVar117._8_8_;
      puVar25[10] = auVar117._0_8_;
      puVar25[0xd] = auVar39._8_8_;
      puVar25[0xc] = auVar39._0_8_;
      puVar25[0xf] = auVar199._8_8_;
      puVar25[0xe] = auVar199._0_8_;
      puVar25 = puVar25 + 0x20;
    } while (uVar35 < 0x3f0);
  }
  memset(local_10b4,0,0x1004);
  fVar136 = 0.0;
  fVar189 = 0.0;
  pfVar26 = local_1094;
  uVar35 = 0xffffffffffffffff;
  pfVar27 = (float *)&DAT_010fb780;
  fVar167 = *(float *)(param_2 + 0x118);
  fVar115 = *(float *)(param_2 + 0xe4);
  if (fVar167 <= 1e-06) {
    fVar167 = 1e-06;
  }
  do {
    fVar155 = *pfVar27;
    fVar218 = pfVar27[1];
    uVar35 = uVar35 + 0x10;
    fVar221 = pfVar27[2];
    fVar137 = pfVar27[3];
    fVar140 = pfVar27[4];
    fVar141 = pfVar27[5];
    fVar174 = pfVar27[6];
    fVar147 = pfVar27[7];
    fVar179 = pfVar27[8];
    fVar196 = pfVar27[9];
    fVar145 = fVar167 + fVar136 + fVar155;
    fVar136 = fVar167 + fVar145 + fVar218;
    pfVar26[-7] = fVar145;
    pfVar26[-6] = fVar136;
    fVar136 = fVar167 + fVar136 + fVar221;
    fVar145 = fVar167 + fVar136 + fVar137;
    pfVar26[-5] = fVar136;
    pfVar26[-4] = fVar145;
    fVar136 = fVar167 + fVar145 + fVar140;
    fVar138 = pfVar27[10];
    fVar142 = pfVar27[0xb];
    fVar145 = fVar167 + fVar136 + fVar141;
    pfVar26[-3] = fVar136;
    pfVar26[-2] = fVar145;
    fVar136 = fVar167 + fVar145 + fVar174;
    fVar145 = fVar167 + fVar136 + fVar147;
    pfVar26[-1] = fVar136;
    *pfVar26 = fVar145;
    fVar136 = fVar167 + fVar145 + fVar179;
    fVar145 = fVar167 + fVar136 + fVar196;
    fVar207 = pfVar27[0xc];
    fVar213 = pfVar27[0xd];
    pfVar26[1] = fVar136;
    pfVar26[2] = fVar145;
    fVar164 = fVar167 + fVar145 + fVar138;
    fVar136 = fVar167 + fVar164 + fVar142;
    fVar145 = pfVar27[0xe];
    fVar188 = pfVar27[0xf];
    pfVar27 = pfVar27 + 0x10;
    pfVar26[3] = fVar164;
    pfVar26[4] = fVar136;
    fVar136 = fVar167 + fVar136 + fVar207;
    fVar164 = fVar167 + fVar136 + fVar213;
    pfVar26[5] = fVar136;
    pfVar26[6] = fVar164;
    fVar164 = fVar167 + fVar164 + fVar145;
    fVar189 = fVar189 + fVar167 + fVar155 + fVar167 + fVar218 + fVar167 + fVar221 +
              fVar167 + fVar137 + fVar167 + fVar140 + fVar167 + fVar141 + fVar167 + fVar174 +
              fVar167 + fVar147 + fVar167 + fVar179 + fVar167 + fVar196 + fVar167 + fVar138 +
              fVar167 + fVar142 + fVar167 + fVar207 + fVar167 + fVar213 + fVar167 + fVar145 +
              fVar167 + fVar188;
    fVar136 = fVar167 + fVar164 + fVar188;
    pfVar26[7] = fVar164;
    pfVar26[8] = fVar136;
    pfVar26 = pfVar26 + 0x10;
  } while (uVar35 < 0x3ff);
  pauVar31 = (undefined (*) [16])local_1030;
  uVar35 = 0xfffffffffffffffc;
  do {
    fVar136 = *(float *)pauVar31[-8];
    fVar167 = *(float *)(pauVar31[-8] + 4);
    fVar145 = *(float *)(pauVar31[-8] + 8);
    fVar137 = *(float *)(pauVar31[-8] + 0xc);
    auVar117 = pauVar31[-7];
    uVar35 = uVar35 + 0x40;
    uVar7 = *(undefined8 *)(pauVar31[-6] + 8);
    uVar23 = *(undefined8 *)pauVar31[-6];
    auVar39 = pauVar31[-5];
    auVar199 = pauVar31[-4];
    auVar220 = pauVar31[-3];
    auVar126 = pauVar31[-2];
    auVar131 = pauVar31[-1];
    auVar150 = *pauVar31;
    uVar9 = *(undefined8 *)(pauVar31[1] + 8);
    uVar8 = *(undefined8 *)pauVar31[1];
    auVar156 = pauVar31[2];
    uVar10 = *(undefined8 *)(pauVar31[3] + 8);
    uVar6 = *(undefined8 *)pauVar31[3];
    *(float *)pauVar31[1] = auVar150._8_4_ / fVar189;
    *(float *)(pauVar31[1] + 4) = auVar150._12_4_ / fVar189;
    *(float *)*pauVar31 = auVar150._0_4_ / fVar189;
    *(float *)(*pauVar31 + 4) = auVar150._4_4_ / fVar189;
    *(float *)pauVar31[2] = (float)uVar9 / fVar189;
    *(float *)(pauVar31[2] + 4) = (float)((ulong)uVar9 >> 0x20) / fVar189;
    *(float *)pauVar31[1] = (float)uVar8 / fVar189;
    *(float *)(pauVar31[1] + 4) = (float)((ulong)uVar8 >> 0x20) / fVar189;
    auVar150 = pauVar31[4];
    uVar9 = *(undefined8 *)(pauVar31[5] + 8);
    uVar8 = *(undefined8 *)pauVar31[5];
    *(float *)pauVar31[3] = auVar156._8_4_ / fVar189;
    *(float *)(pauVar31[3] + 4) = auVar156._12_4_ / fVar189;
    *(float *)pauVar31[2] = auVar156._0_4_ / fVar189;
    *(float *)(pauVar31[2] + 4) = auVar156._4_4_ / fVar189;
    *(float *)pauVar31[4] = (float)uVar10 / fVar189;
    *(float *)(pauVar31[4] + 4) = (float)((ulong)uVar10 >> 0x20) / fVar189;
    *(float *)pauVar31[3] = (float)uVar6 / fVar189;
    *(float *)(pauVar31[3] + 4) = (float)((ulong)uVar6 >> 0x20) / fVar189;
    auVar156 = pauVar31[6];
    uVar10 = *(undefined8 *)(pauVar31[7] + 8);
    uVar6 = *(undefined8 *)pauVar31[7];
    *(float *)pauVar31[5] = auVar150._8_4_ / fVar189;
    *(float *)(pauVar31[5] + 4) = auVar150._12_4_ / fVar189;
    *(float *)pauVar31[4] = auVar150._0_4_ / fVar189;
    *(float *)(pauVar31[4] + 4) = auVar150._4_4_ / fVar189;
    *(float *)pauVar31[6] = (float)uVar9 / fVar189;
    *(float *)(pauVar31[6] + 4) = (float)((ulong)uVar9 >> 0x20) / fVar189;
    *(float *)pauVar31[5] = (float)uVar8 / fVar189;
    *(float *)(pauVar31[5] + 4) = (float)((ulong)uVar8 >> 0x20) / fVar189;
    auVar150._0_8_ = CONCAT44(auVar39._4_4_ / fVar189,auVar39._0_4_ / fVar189);
    auVar150._8_4_ = auVar39._8_4_ / fVar189;
    auVar150._12_4_ = auVar39._12_4_ / fVar189;
    *(float *)pauVar31[-7] = fVar145 / fVar189;
    *(float *)(pauVar31[-7] + 4) = fVar137 / fVar189;
    *(float *)pauVar31[-8] = fVar136 / fVar189;
    *(float *)(pauVar31[-8] + 4) = fVar167 / fVar189;
    *(ulong *)(pauVar31[-7] + 8) = CONCAT44(auVar117._12_4_ / fVar189,auVar117._8_4_ / fVar189);
    *(ulong *)pauVar31[-7] = CONCAT44(auVar117._4_4_ / fVar189,auVar117._0_4_ / fVar189);
    *(float *)pauVar31[-5] = (float)uVar7 / fVar189;
    *(float *)(pauVar31[-5] + 4) = (float)((ulong)uVar7 >> 0x20) / fVar189;
    *(float *)pauVar31[-6] = (float)uVar23 / fVar189;
    *(float *)(pauVar31[-6] + 4) = (float)((ulong)uVar23 >> 0x20) / fVar189;
    *(long *)(pauVar31[-5] + 8) = auVar150._8_8_;
    *(undefined8 *)pauVar31[-5] = auVar150._0_8_;
    *(float *)pauVar31[-3] = auVar199._8_4_ / fVar189;
    *(float *)(pauVar31[-3] + 4) = auVar199._12_4_ / fVar189;
    *(float *)pauVar31[-4] = auVar199._0_4_ / fVar189;
    *(float *)(pauVar31[-4] + 4) = auVar199._4_4_ / fVar189;
    *(float *)pauVar31[-2] = auVar220._8_4_ / fVar189;
    *(float *)(pauVar31[-2] + 4) = auVar220._12_4_ / fVar189;
    *(float *)pauVar31[-3] = auVar220._0_4_ / fVar189;
    *(float *)(pauVar31[-3] + 4) = auVar220._4_4_ / fVar189;
    *(float *)pauVar31[-1] = auVar126._8_4_ / fVar189;
    *(float *)(pauVar31[-1] + 4) = auVar126._12_4_ / fVar189;
    *(float *)pauVar31[-2] = auVar126._0_4_ / fVar189;
    *(float *)(pauVar31[-2] + 4) = auVar126._4_4_ / fVar189;
    *(float *)*pauVar31 = auVar131._8_4_ / fVar189;
    *(float *)(*pauVar31 + 4) = auVar131._12_4_ / fVar189;
    *(float *)pauVar31[-1] = auVar131._0_4_ / fVar189;
    *(float *)(pauVar31[-1] + 4) = auVar131._4_4_ / fVar189;
    auVar126._0_8_ = CONCAT44((float)((ulong)uVar6 >> 0x20) / fVar189,(float)uVar6 / fVar189);
    auVar126._8_4_ = (float)uVar10 / fVar189;
    auVar126._12_4_ = (float)((ulong)uVar10 >> 0x20) / fVar189;
    *(float *)pauVar31[6] = auVar156._0_4_ / fVar189;
    *(float *)(pauVar31[6] + 4) = auVar156._4_4_ / fVar189;
    *(float *)(pauVar31[6] + 8) = auVar156._8_4_ / fVar189;
    *(float *)(pauVar31[6] + 0xc) = auVar156._12_4_ / fVar189;
    *(long *)(pauVar31[7] + 8) = auVar126._8_8_;
    *(undefined8 *)pauVar31[7] = auVar126._0_8_;
    pauVar31 = pauVar31 + 0x10;
  } while (uVar35 < 0x3fc);
  uVar35 = 0x20;
  pfVar26 = local_1074;
  do {
    if (fVar115 <= pfVar26[-0xf]) {
      uVar35 = uVar35 - 0x1f;
LAB_00e93b14:
      fVar115 = (fVar115 -
                *(float *)((long)local_10b4 + ((long)((uVar35 << 0x20) + -0x100000000) >> 0x1e))) +
                (float)(uVar35 & 0xffffffff) + -1.0;
      goto LAB_00e93b3c;
    }
    if (fVar115 <= pfVar26[-0xe]) {
      uVar35 = uVar35 - 0x1e;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-0xd]) {
      uVar35 = uVar35 - 0x1d;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-0xc]) {
      uVar35 = uVar35 - 0x1c;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-0xb]) {
      uVar35 = uVar35 - 0x1b;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-10]) {
      uVar35 = uVar35 - 0x1a;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-9]) {
      uVar35 = uVar35 - 0x19;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-8]) {
      uVar35 = uVar35 - 0x18;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-7]) {
      uVar35 = uVar35 - 0x17;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-6]) {
      uVar35 = uVar35 - 0x16;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-5]) {
      uVar35 = uVar35 - 0x15;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-4]) {
      uVar35 = uVar35 - 0x14;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-3]) {
      uVar35 = uVar35 - 0x13;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-2]) {
      uVar35 = uVar35 - 0x12;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[-1]) {
      uVar35 = uVar35 - 0x11;
      goto LAB_00e93b14;
    }
    if (fVar115 <= *pfVar26) {
      uVar35 = uVar35 - 0x10;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[1]) {
      uVar35 = uVar35 - 0xf;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[2]) {
      uVar35 = uVar35 - 0xe;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[3]) {
      uVar35 = uVar35 - 0xd;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[4]) {
      uVar35 = uVar35 - 0xc;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[5]) {
      uVar35 = uVar35 - 0xb;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[6]) {
      uVar35 = uVar35 - 10;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[7]) {
      uVar35 = uVar35 - 9;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[8]) {
      uVar35 = uVar35 - 8;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[9]) {
      uVar35 = uVar35 - 7;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[10]) {
      uVar35 = uVar35 - 6;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[0xb]) {
      uVar35 = uVar35 - 5;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[0xc]) {
      uVar35 = uVar35 - 4;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[0xd]) {
      uVar35 = uVar35 - 3;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[0xe]) {
      uVar35 = uVar35 - 2;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[0xf]) {
      uVar35 = uVar35 - 1;
      goto LAB_00e93b14;
    }
    if (fVar115 <= pfVar26[0x10]) goto LAB_00e93b14;
    uVar35 = uVar35 + 0x20;
    pfVar26 = pfVar26 + 0x20;
  } while (uVar35 != 0x420);
  fVar115 = 0.0;
LAB_00e93b3c:
  pfVar26 = &local_b4;
  uVar35 = 0x3e1;
  fVar136 = 1.0 - *(float *)(param_2 + 0xe0);
  fVar115 = fVar115 * 0.0009765625;
  do {
    fVar167 = *pfVar26;
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x1f;
LAB_00e93df0:
      fVar136 = (fVar136 - fVar167) + (float)(uVar35 & 0xffffffff);
      goto LAB_00e93dfc;
    }
    fVar167 = pfVar26[-1];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x1e;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-2];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x1d;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-3];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x1c;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-4];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x1b;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-5];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x1a;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-6];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x19;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-7];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x18;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-8];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x17;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-9];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x16;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-10];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x15;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0xb];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x14;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0xc];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x13;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0xd];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x12;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0xe];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x11;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0xf];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0x10;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x10];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0xf;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x11];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0xe;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x12];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0xd;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x13];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0xc;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x14];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 0xb;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x15];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 10;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x16];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 9;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x17];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 8;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x18];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 7;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x19];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 6;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x1a];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 5;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x1b];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 4;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x1c];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 3;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x1d];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 2;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x1e];
    if (fVar167 <= fVar136) {
      uVar35 = uVar35 + 1;
      goto LAB_00e93df0;
    }
    fVar167 = pfVar26[-0x1f];
    if (fVar167 <= fVar136) goto LAB_00e93df0;
    uVar35 = uVar35 - 0x20;
    pfVar26 = pfVar26 + -0x20;
  } while (uVar35 != 0xffffffffffffffe1);
  fVar136 = 0.0;
LAB_00e93dfc:
  fVar136 = fVar136 * 0.0009765625;
  uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar131._0_8_ = (double)fVar189;
    auVar131._8_8_ = 0;
    auVar156._0_8_ = (double)*(float *)(param_2 + 0xe4);
    auVar156._8_8_ = 0;
    auVar165._0_8_ = (double)*(float *)(param_2 + 0xe0);
    auVar165._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11da13,pcVar22,
               auVar131,auVar156,auVar165,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  fVar167 = 0.1;
  if (fVar115 < 0.1) {
    fVar167 = fVar115;
  }
  fVar189 = 0.0;
  if (0.0 < fVar115) {
    fVar189 = fVar167;
  }
  fVar115 = 1.0;
  if (fVar136 < 1.0) {
    fVar115 = fVar136;
  }
  fVar167 = 0.1;
  if (0.1 < fVar136) {
    fVar167 = fVar115;
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar210._0_8_ = (double)fVar167;
    auVar210._8_8_ = 0;
    auVar177._0_8_ = (double)fVar189;
    auVar177._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124be3,pcVar22,
               auVar177,auVar210,uVar23,"KNP_bhist_for_gtm");
  }
  fVar115 = 1.0 / ((1.0 - fVar189) * fVar167);
  lVar169 = *(long *)(param_1 + 0x70);
  uVar34 = 0;
  lVar30 = 0;
  puVar28 = &DAT_012eda54;
  pfVar26 = (float *)&DAT_001e95d0;
  do {
    uVar2 = uVar34 + 1;
    fVar136 = *pfVar26;
    if (uVar2 < 0x401) {
      uVar2 = 0x400;
    }
    do {
      if (fVar136 <= (float)(&DAT_001e99d8)[uVar34]) goto LAB_00e93fa4;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0x3ff;
LAB_00e93fa4:
    fVar167 = (float)(&DAT_001e99d4)[uVar34];
    if (1e-06 <= (float)(&DAT_001e99d8)[uVar34] - fVar167) {
      uVar144 = NEON_fmadd(fVar136 - fVar167,
                           (local_10b4[(ulong)uVar34 + 1] - local_10b4[uVar34]) /
                           ((float)(&DAT_001e99d8)[uVar34] - fVar167),local_10b4[uVar34]);
      *puVar28 = uVar144;
    }
    else {
      uVar144 = NEON_fmadd(fVar136 - fVar167,0x3f800000,local_10b4[uVar34]);
      *puVar28 = uVar144;
    }
    if (lVar30 == 0x100) break;
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x401) {
      uVar2 = 0x400;
    }
    do {
      if (pfVar26[1] <= (float)(&DAT_001e99d8)[uVar34]) goto LAB_00e9403c;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0x3ff;
LAB_00e9403c:
    fVar136 = (float)(&DAT_001e99d8)[uVar34] - (float)(&DAT_001e99d4)[uVar34];
    if (1e-06 <= fVar136) {
      fVar167 = local_10b4[uVar34];
      fVar136 = (local_10b4[(ulong)uVar34 + 1] - fVar167) / fVar136;
    }
    else {
      fVar136 = 1.0;
      fVar167 = local_10b4[uVar34];
    }
    uVar2 = uVar34 + 1;
    fVar145 = pfVar26[2];
    if (uVar2 < 0x401) {
      uVar2 = 0x400;
    }
    uVar144 = NEON_fmadd(pfVar26[1] - (float)(&DAT_001e99d4)[uVar34],fVar136,fVar167);
    puVar28[1] = uVar144;
    do {
      if (fVar145 <= (float)(&DAT_001e99d8)[uVar34]) goto LAB_00e940bc;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0x3ff;
LAB_00e940bc:
    fVar136 = (float)(&DAT_001e99d8)[uVar34] - (float)(&DAT_001e99d4)[uVar34];
    if (1e-06 <= fVar136) {
      fVar167 = local_10b4[uVar34];
      fVar136 = (local_10b4[(ulong)uVar34 + 1] - fVar167) / fVar136;
    }
    else {
      fVar136 = 1.0;
      fVar167 = local_10b4[uVar34];
    }
    uVar2 = uVar34 + 1;
    fVar137 = pfVar26[3];
    pfVar26 = pfVar26 + 4;
    if (uVar2 < 0x401) {
      uVar2 = 0x400;
    }
    uVar144 = NEON_fmadd(fVar145 - (float)(&DAT_001e99d4)[uVar34],fVar136,fVar167);
    puVar28[2] = uVar144;
    do {
      if (fVar137 <= (float)(&DAT_001e99d8)[uVar34]) goto LAB_00e94138;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0x3ff;
LAB_00e94138:
    fVar136 = (float)(&DAT_001e99d8)[uVar34] - (float)(&DAT_001e99d4)[uVar34];
    if (fVar136 < 1e-06) {
      fVar136 = 1.0;
      fVar167 = local_10b4[uVar34];
    }
    else {
      fVar167 = local_10b4[uVar34];
      fVar136 = (local_10b4[(ulong)uVar34 + 1] - fVar167) / fVar136;
    }
    lVar30 = lVar30 + 4;
    uVar144 = NEON_fmadd(fVar137 - (float)(&DAT_001e99d4)[uVar34],fVar136,fVar167);
    puVar28[3] = uVar144;
    puVar28 = puVar28 + 4;
  } while( true );
  uVar34 = 0;
  lVar30 = 0;
  pfVar26 = &DAT_012eda54;
  do {
    uVar2 = uVar34 + 1;
    fVar136 = *pfVar26;
    if (uVar2 < 0x101) {
      uVar2 = 0x100;
    }
    do {
      if (fVar136 <= (float)(&DAT_001ea9dc)[uVar34]) goto LAB_00e941f8;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0xff;
LAB_00e941f8:
    uVar35 = (ulong)uVar34;
    fVar167 = (float)(&DAT_001ea9d8)[uVar34];
    if (1e-06 <= (float)(&DAT_001ea9dc)[uVar34] - fVar167) {
      fVar136 = (float)NEON_fmadd(fVar136 - fVar167,
                                  (*(float *)(&UNK_001eade0 + uVar35 * 4) -
                                  (float)(&DAT_001eaddc)[uVar35]) /
                                  ((float)(&DAT_001ea9dc)[uVar34] - fVar167),(&DAT_001eaddc)[uVar35]
                                 );
      *pfVar26 = fVar136;
    }
    else {
      fVar136 = (float)NEON_fmadd(fVar136 - fVar167,0x3f800000,(&DAT_001eaddc)[uVar35]);
      *pfVar26 = fVar136;
    }
    if (lVar30 == 0x100) break;
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x101) {
      uVar2 = 0x100;
    }
    do {
      if (pfVar26[1] <= (float)(&DAT_001ea9dc)[uVar34]) goto LAB_00e94290;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0xff;
LAB_00e94290:
    uVar35 = (ulong)uVar34;
    fVar136 = (float)(&DAT_001ea9dc)[uVar34] - (float)(&DAT_001ea9d8)[uVar34];
    if (1e-06 <= fVar136) {
      fVar167 = (float)(&DAT_001eaddc)[uVar35];
      fVar136 = (*(float *)(&UNK_001eade0 + uVar35 * 4) - fVar167) / fVar136;
    }
    else {
      fVar136 = 1.0;
      fVar167 = (float)(&DAT_001eaddc)[uVar35];
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x101) {
      uVar2 = 0x100;
    }
    fVar136 = (float)NEON_fmadd(pfVar26[1] - (float)(&DAT_001ea9d8)[uVar34],fVar136,fVar167);
    pfVar26[1] = fVar136;
    do {
      if (pfVar26[2] <= (float)(&DAT_001ea9dc)[uVar34]) goto LAB_00e94310;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0xff;
LAB_00e94310:
    uVar35 = (ulong)uVar34;
    fVar136 = (float)(&DAT_001ea9dc)[uVar34] - (float)(&DAT_001ea9d8)[uVar34];
    if (1e-06 <= fVar136) {
      fVar167 = (float)(&DAT_001eaddc)[uVar35];
      fVar136 = (*(float *)(&UNK_001eade0 + uVar35 * 4) - fVar167) / fVar136;
    }
    else {
      fVar136 = 1.0;
      fVar167 = (float)(&DAT_001eaddc)[uVar35];
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x101) {
      uVar2 = 0x100;
    }
    fVar136 = (float)NEON_fmadd(pfVar26[2] - (float)(&DAT_001ea9d8)[uVar34],fVar136,fVar167);
    pfVar26[2] = fVar136;
    do {
      if (pfVar26[3] <= (float)(&DAT_001ea9dc)[uVar34]) goto LAB_00e94388;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0xff;
LAB_00e94388:
    uVar35 = (ulong)uVar34;
    fVar136 = (float)(&DAT_001ea9dc)[uVar34] - (float)(&DAT_001ea9d8)[uVar34];
    if (fVar136 < 1e-06) {
      fVar136 = 1.0;
      fVar167 = (float)(&DAT_001eaddc)[uVar35];
    }
    else {
      fVar167 = (float)(&DAT_001eaddc)[uVar35];
      fVar136 = (*(float *)(&UNK_001eade0 + uVar35 * 4) - fVar167) / fVar136;
    }
    lVar30 = lVar30 + 4;
    fVar136 = (float)NEON_fmadd(pfVar26[3] - (float)(&DAT_001ea9d8)[uVar34],fVar136,fVar167);
    pfVar26[3] = fVar136;
    pfVar26 = pfVar26 + 4;
  } while( true );
  uVar34 = 0;
  lVar173 = 0;
  lVar30 = lVar169 + 0xb0;
  pfVar26 = &DAT_012eda54;
  lVar181 = lVar169 + 0x1414;
  do {
    uVar2 = uVar34 + 1;
    fVar136 = *pfVar26;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    do {
      if (fVar136 <= *(float *)(lVar30 + (ulong)uVar34 * 4)) goto LAB_00e94440;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 5;
LAB_00e94440:
    lVar185 = (ulong)uVar34 * 4;
    lVar183 = lVar169 + lVar185;
    fVar167 = *(float *)(lVar183 + 0xac);
    fVar145 = *(float *)(lVar30 + lVar185) - fVar167;
    if (1e-06 <= fVar145) {
      fVar136 = (float)NEON_fmadd(fVar136 - fVar167,
                                  (*(float *)(lVar181 + (ulong)uVar34 * 4) -
                                  *(float *)(lVar183 + 0x1410)) / fVar145,
                                  *(float *)(lVar183 + 0x1410));
      *pfVar26 = fVar136;
    }
    else {
      fVar136 = (float)NEON_fmadd(fVar136 - fVar167,0x3f800000,*(undefined4 *)(lVar183 + 0x1410));
      *pfVar26 = fVar136;
    }
    if (lVar173 == 0x100) break;
    uVar2 = uVar34 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    do {
      if (pfVar26[1] <= *(float *)(lVar30 + (ulong)uVar34 * 4)) goto LAB_00e944e0;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 5;
LAB_00e944e0:
    lVar185 = (ulong)uVar34 * 4;
    lVar183 = lVar169 + lVar185;
    fVar136 = *(float *)(lVar30 + lVar185) - *(float *)(lVar183 + 0xac);
    if (1e-06 <= fVar136) {
      fVar167 = *(float *)(lVar183 + 0x1410);
      fVar136 = (*(float *)(lVar181 + (ulong)uVar34 * 4) - fVar167) / fVar136;
    }
    else {
      fVar136 = 1.0;
      fVar167 = *(float *)(lVar183 + 0x1410);
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    fVar136 = (float)NEON_fmadd(pfVar26[1] - *(float *)(lVar183 + 0xac),fVar136,fVar167);
    pfVar26[1] = fVar136;
    do {
      if (pfVar26[2] <= *(float *)(lVar30 + (ulong)uVar34 * 4)) goto LAB_00e94568;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 5;
LAB_00e94568:
    lVar185 = (ulong)uVar34 * 4;
    lVar183 = lVar169 + lVar185;
    fVar136 = *(float *)(lVar30 + lVar185) - *(float *)(lVar183 + 0xac);
    if (1e-06 <= fVar136) {
      fVar167 = *(float *)(lVar183 + 0x1410);
      fVar136 = (*(float *)(lVar181 + (ulong)uVar34 * 4) - fVar167) / fVar136;
    }
    else {
      fVar136 = 1.0;
      fVar167 = *(float *)(lVar183 + 0x1410);
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    fVar136 = (float)NEON_fmadd(pfVar26[2] - *(float *)(lVar183 + 0xac),fVar136,fVar167);
    pfVar26[2] = fVar136;
    do {
      if (pfVar26[3] <= *(float *)(lVar30 + (ulong)uVar34 * 4)) goto LAB_00e945e8;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 5;
LAB_00e945e8:
    lVar185 = (ulong)uVar34 * 4;
    lVar183 = lVar169 + lVar185;
    fVar136 = *(float *)(lVar30 + lVar185) - *(float *)(lVar183 + 0xac);
    if (fVar136 < 1e-06) {
      fVar136 = 1.0;
      fVar167 = *(float *)(lVar183 + 0x1410);
    }
    else {
      fVar167 = *(float *)(lVar183 + 0x1410);
      fVar136 = (*(float *)(lVar181 + (ulong)uVar34 * 4) - fVar167) / fVar136;
    }
    lVar173 = lVar173 + 4;
    fVar136 = (float)NEON_fmadd(pfVar26[3] - *(float *)(lVar183 + 0xac),fVar136,fVar167);
    pfVar26[3] = fVar136;
    pfVar26 = pfVar26 + 4;
  } while( true );
  lVar30 = 0;
  fVar136 = DAT_012eda54;
  do {
    lVar169 = lVar30 + 0x80;
    auVar117 = *(undefined (*) [16])((long)&DAT_012eda58 + lVar30);
    auVar39 = *(undefined (*) [16])((long)&DAT_012eda68 + lVar30);
    fVar164 = (float)*(undefined8 *)((long)&DAT_012eda80 + lVar30);
    fVar174 = (float)((ulong)*(undefined8 *)((long)&DAT_012eda80 + lVar30) >> 0x20);
    fVar147 = (float)*(undefined8 *)((long)&DAT_012eda78 + lVar30);
    fVar155 = (float)((ulong)*(undefined8 *)((long)&DAT_012eda78 + lVar30) >> 0x20);
    fVar145 = auVar117._0_4_;
    fVar137 = auVar117._4_4_;
    fVar138 = auVar117._8_4_;
    fVar140 = auVar117._12_4_;
    fVar141 = auVar39._4_4_;
    fVar142 = auVar39._8_4_;
    fVar167 = 1.0;
    if (fVar145 < 1.0) {
      fVar167 = fVar145;
    }
    fVar188 = auVar39._12_4_;
    fVar196 = (float)((ulong)*(undefined8 *)((long)&DAT_012eda88 + lVar30) >> 0x20);
    fVar179 = 1.0;
    if (fVar137 < 1.0) {
      fVar179 = fVar137;
    }
    fVar213 = (float)*(undefined8 *)((long)&DAT_012eda90 + lVar30);
    fVar218 = (float)((ulong)*(undefined8 *)((long)&DAT_012eda90 + lVar30) >> 0x20);
    fVar207 = 1.0;
    if (fVar138 < 1.0) {
      fVar207 = fVar138;
    }
    fVar221 = 1.0;
    if (fVar140 < 1.0) {
      fVar221 = fVar140;
    }
    fVar120 = auVar39._0_4_;
    fVar123 = 1.0;
    if (fVar120 < 1.0) {
      fVar123 = fVar120;
    }
    fVar119 = 1.0;
    if (fVar141 < 1.0) {
      fVar119 = fVar141;
    }
    fVar124 = 1.0;
    if (fVar142 < 1.0) {
      fVar124 = fVar142;
    }
    fVar129 = 1.0;
    if (fVar188 < 1.0) {
      fVar129 = fVar188;
    }
    fVar130 = 1.0;
    if (fVar147 < 1.0) {
      fVar130 = fVar147;
    }
    fVar112 = 1.0;
    if (fVar155 < 1.0) {
      fVar112 = fVar155;
    }
    fVar113 = 1.0;
    if (fVar164 < 1.0) {
      fVar113 = fVar164;
    }
    fVar114 = 1.0;
    if (fVar174 < 1.0) {
      fVar114 = fVar174;
    }
    fVar128 = (float)*(undefined8 *)((long)&DAT_012eda88 + lVar30);
    fVar121 = 1.0;
    if (fVar128 < 1.0) {
      fVar121 = fVar128;
    }
    fVar148 = 1.0;
    if (fVar196 < 1.0) {
      fVar148 = fVar196;
    }
    fVar180 = 1.0;
    if (fVar213 < 1.0) {
      fVar180 = fVar213;
    }
    fVar184 = 1.0;
    if (fVar218 < 1.0) {
      fVar184 = fVar218;
    }
    if (fVar136 < fVar145) {
      fVar136 = fVar167;
    }
    fVar167 = fVar136;
    if (fVar136 < fVar137) {
      fVar167 = fVar179;
    }
    auVar117 = *(undefined (*) [16])((long)&DAT_012edab8 + lVar30);
    fVar145 = fVar167;
    if (fVar167 < fVar138) {
      fVar145 = fVar207;
    }
    fVar137 = fVar145;
    if (fVar145 < fVar140) {
      fVar137 = fVar221;
    }
    fVar138 = fVar137;
    if (fVar137 < fVar120) {
      fVar138 = fVar123;
    }
    fVar179 = auVar117._4_4_;
    fVar140 = fVar138;
    if (fVar138 < fVar141) {
      fVar140 = fVar119;
    }
    fVar141 = fVar140;
    if (fVar140 < fVar142) {
      fVar141 = fVar124;
    }
    fVar142 = fVar141;
    if (fVar141 < fVar188) {
      fVar142 = fVar129;
    }
    fVar188 = fVar142;
    if (fVar142 < fVar147) {
      fVar188 = fVar130;
    }
    auVar39 = *(undefined (*) [16])((long)&DAT_012eda98 + lVar30);
    fVar147 = fVar188;
    if (fVar188 < fVar155) {
      fVar147 = fVar112;
    }
    fVar207 = auVar117._8_4_;
    fVar155 = fVar147;
    if (fVar147 < fVar164) {
      fVar155 = fVar113;
    }
    fVar221 = auVar39._4_4_;
    fVar164 = fVar155;
    if (fVar155 < fVar174) {
      fVar164 = fVar114;
    }
    fVar123 = auVar39._8_4_;
    fVar174 = fVar164;
    if (fVar164 < fVar128) {
      fVar174 = fVar121;
    }
    fVar119 = auVar117._12_4_;
    fVar120 = fVar174;
    if (fVar174 < fVar196) {
      fVar120 = fVar148;
    }
    fVar124 = auVar39._12_4_;
    fVar196 = fVar120;
    if (fVar120 < fVar213) {
      fVar196 = fVar180;
    }
    auVar199 = *(undefined (*) [16])((long)&DAT_012edaa8 + lVar30);
    fVar129 = auVar199._8_4_;
    fVar130 = auVar199._12_4_;
    fVar213 = fVar196;
    if (fVar196 < fVar218) {
      fVar213 = fVar184;
    }
    auVar220 = *(undefined (*) [16])((long)&DAT_012edac8 + lVar30);
    fVar121 = auVar39._0_4_;
    fVar128 = auVar199._4_4_;
    fVar112 = auVar220._4_4_;
    fVar113 = auVar220._8_4_;
    fVar114 = auVar220._12_4_;
    fVar218 = 1.0;
    if (fVar121 < 1.0) {
      fVar218 = fVar121;
    }
    fVar148 = 1.0;
    if (fVar221 < 1.0) {
      fVar148 = fVar221;
    }
    fVar180 = 1.0;
    if (fVar123 < 1.0) {
      fVar180 = fVar123;
    }
    fVar184 = 1.0;
    if (fVar124 < 1.0) {
      fVar184 = fVar124;
    }
    fVar125 = auVar199._0_4_;
    fVar190 = 1.0;
    if (fVar125 < 1.0) {
      fVar190 = fVar125;
    }
    fVar208 = 1.0;
    if (fVar128 < 1.0) {
      fVar208 = fVar128;
    }
    fVar139 = 1.0;
    if (fVar129 < 1.0) {
      fVar139 = fVar129;
    }
    fVar214 = 1.0;
    if (fVar130 < 1.0) {
      fVar214 = fVar130;
    }
    fVar116 = auVar117._0_4_;
    fVar222 = 1.0;
    if (fVar116 < 1.0) {
      fVar222 = fVar116;
    }
    fVar143 = 1.0;
    if (fVar179 < 1.0) {
      fVar143 = fVar179;
    }
    fVar146 = 1.0;
    if (fVar207 < 1.0) {
      fVar146 = fVar207;
    }
    fVar168 = 1.0;
    if (fVar119 < 1.0) {
      fVar168 = fVar119;
    }
    fVar38 = auVar220._0_4_;
    fVar149 = 1.0;
    if (fVar38 < 1.0) {
      fVar149 = fVar38;
    }
    fVar197 = 1.0;
    if (fVar112 < 1.0) {
      fVar197 = fVar112;
    }
    fVar160 = 1.0;
    if (fVar113 < 1.0) {
      fVar160 = fVar113;
    }
    fVar161 = 1.0;
    if (fVar114 < 1.0) {
      fVar161 = fVar114;
    }
    *(float *)((long)&DAT_012eda94 + lVar30) = fVar213;
    if (fVar213 < fVar121) {
      fVar213 = fVar218;
    }
    *(float *)((long)&DAT_012eda98 + lVar30) = fVar213;
    if (fVar213 < fVar221) {
      fVar213 = fVar148;
    }
    *(float *)((long)&DAT_012eda7c + lVar30) = fVar147;
    *(float *)((long)&DAT_012eda9c + lVar30) = fVar213;
    if (fVar213 < fVar123) {
      fVar213 = fVar180;
    }
    *(float *)((long)&DAT_012edaa0 + lVar30) = fVar213;
    if (fVar213 < fVar124) {
      fVar213 = fVar184;
    }
    *(float *)((long)&DAT_012edaa4 + lVar30) = fVar213;
    if (fVar213 < fVar125) {
      fVar213 = fVar190;
    }
    *(float *)((long)&DAT_012edaa8 + lVar30) = fVar213;
    if (fVar213 < fVar128) {
      fVar213 = fVar208;
    }
    *(float *)((long)&DAT_012edaac + lVar30) = fVar213;
    if (fVar213 < fVar129) {
      fVar213 = fVar139;
    }
    *(float *)((long)&DAT_012edab0 + lVar30) = fVar213;
    if (fVar213 < fVar130) {
      fVar213 = fVar214;
    }
    *(float *)((long)&DAT_012edab4 + lVar30) = fVar213;
    if (fVar213 < fVar116) {
      fVar213 = fVar222;
    }
    *(float *)((long)&DAT_012edab8 + lVar30) = fVar213;
    if (fVar213 < fVar179) {
      fVar213 = fVar143;
    }
    *(float *)((long)&DAT_012eda5c + lVar30) = fVar167;
    *(float *)((long)&DAT_012edabc + lVar30) = fVar213;
    *(float *)((long)&DAT_012eda58 + lVar30) = fVar136;
    if (fVar213 < fVar207) {
      fVar213 = fVar146;
    }
    *(float *)((long)&DAT_012eda80 + lVar30) = fVar155;
    *(float *)((long)&DAT_012eda84 + lVar30) = fVar164;
    *(float *)((long)&DAT_012eda70 + lVar30) = fVar141;
    *(float *)((long)&DAT_012eda74 + lVar30) = fVar142;
    *(float *)((long)&DAT_012edac0 + lVar30) = fVar213;
    *(float *)((long)&DAT_012eda60 + lVar30) = fVar145;
    if (fVar213 < fVar119) {
      fVar213 = fVar168;
    }
    *(float *)((long)&DAT_012eda64 + lVar30) = fVar137;
    *(float *)((long)&DAT_012eda68 + lVar30) = fVar138;
    *(float *)((long)&DAT_012eda88 + lVar30) = fVar174;
    *(float *)((long)&DAT_012eda8c + lVar30) = fVar120;
    *(float *)((long)&DAT_012eda90 + lVar30) = fVar196;
    *(float *)((long)&DAT_012edac4 + lVar30) = fVar213;
    if (fVar213 < fVar38) {
      fVar213 = fVar149;
    }
    *(float *)((long)&DAT_012eda6c + lVar30) = fVar140;
    *(float *)((long)&DAT_012edac8 + lVar30) = fVar213;
    if (fVar213 < fVar112) {
      fVar213 = fVar197;
    }
    *(float *)((long)&DAT_012edacc + lVar30) = fVar213;
    *(float *)((long)&DAT_012eda78 + lVar30) = fVar188;
    if (fVar213 < fVar113) {
      fVar213 = fVar160;
    }
    *(float *)((long)&DAT_012edad0 + lVar30) = fVar213;
    fVar136 = fVar213;
    if (fVar213 < fVar114) {
      fVar136 = fVar161;
    }
    *(float *)((long)&DAT_012edad4 + lVar30) = fVar136;
    lVar30 = lVar169;
  } while (lVar169 != 0x400);
  fVar136 = 1e-07;
  pfVar26 = (float *)&DAT_012eda5c;
  pfVar27 = (float *)&DAT_001e95d8;
  lVar30 = 0x100;
  fVar145 = *(float *)(param_2 + 0xfc) + 1.0;
  fVar167 = 16.0;
  if (fVar145 < 16.0) {
    fVar167 = fVar145;
  }
  fVar137 = 1.0;
  if (1.0 < fVar145) {
    fVar137 = fVar167;
  }
  fVar145 = 1.0 / (fVar137 + 1e-06);
  fVar167 = 0.0;
  do {
    puVar21 = PTR_g_logInfo_010f56f8;
    fVar138 = pfVar27[-1];
    fVar136 = fVar138 - fVar136;
    fVar140 = (fVar167 + pfVar26[-1]) - pfVar26[-2];
    if (fVar140 / fVar136 <= fVar137) {
      if (fVar140 / fVar136 < fVar145) {
        fVar140 = fVar145 * fVar136;
      }
    }
    else {
      fVar140 = fVar137 * fVar136;
    }
    fVar140 = pfVar26[-2] + fVar140;
    fVar167 = fVar140 - (fVar167 + pfVar26[-1]);
    pfVar26[-1] = fVar140;
    if (((byte)puVar21[0x2a] >> 5 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar224._0_8_ = (double)fVar167;
      auVar224._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b96d,pcVar22,
                 auVar224,uVar23,"KNP_bhist_for_gtm");
    }
    puVar21 = PTR_g_logInfo_010f56f8;
    fVar136 = *pfVar27;
    fVar167 = fVar167 + *pfVar26;
    fVar138 = fVar136 - fVar138;
    fVar140 = fVar167 - pfVar26[-1];
    if (fVar140 / fVar138 <= fVar137) {
      if (fVar140 / fVar138 < fVar145) {
        fVar140 = fVar145 * fVar138;
      }
    }
    else {
      fVar140 = fVar137 * fVar138;
    }
    fVar140 = pfVar26[-1] + fVar140;
    fVar167 = fVar140 - fVar167;
    *pfVar26 = fVar140;
    if (((byte)puVar21[0x2a] >> 5 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar223._0_8_ = (double)fVar167;
      auVar223._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b96d,pcVar22,
                 auVar223,uVar23,"KNP_bhist_for_gtm");
    }
    lVar30 = lVar30 + -2;
    pfVar26 = pfVar26 + 2;
    pfVar27 = pfVar27 + 2;
  } while (lVar30 != 0);
  if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar118._0_8_ = (double)fVar167;
    auVar118._8_8_ = 0;
    auVar40._0_8_ = (double)DAT_012ede54;
    auVar40._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1411a8,pcVar22,
               auVar40,auVar118,uVar23,"KNP_bhist_for_gtm");
  }
  for (lVar30 = 0;
      *(float *)((long)&DAT_012eda54 + lVar30) =
           *(float *)((long)&DAT_012eda54 + lVar30) / DAT_012ede54, lVar30 != 0x400;
      lVar30 = lVar30 + 0x10) {
    *(float *)((long)&DAT_012eda58 + lVar30) =
         *(float *)((long)&DAT_012eda58 + lVar30) / DAT_012ede54;
    *(float *)((long)&DAT_012eda5c + lVar30) =
         *(float *)((long)&DAT_012eda5c + lVar30) / DAT_012ede54;
    *(float *)((long)&DAT_012eda60 + lVar30) =
         *(float *)((long)&DAT_012eda60 + lVar30) / DAT_012ede54;
  }
  uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  if (((uint)uVar23 >> 0x15 & 1) == 0) {
    if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e94c6c;
LAB_00e95a74:
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e37,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar29 = (uint)uVar23;
  }
  else {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e00,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e95a74;
LAB_00e94c6c:
    uVar29 = (uint)uVar23;
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar41._0_8_ = (double)DAT_012eda54;
    auVar41._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7271,pcVar22,
               auVar41,uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  pfVar26 = (float *)&DAT_012eda74;
  lVar30 = 0x100;
  do {
    if (((uint)uVar23 >> 0x15 & 1) == 0) {
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e94d10;
LAB_00e94d78:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar43._0_8_ = (double)pfVar26[-6];
      auVar43._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7271,pcVar22,
                 auVar43,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e94dc4;
LAB_00e94d14:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e94d18;
LAB_00e94e10:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar45._0_8_ = (double)pfVar26[-4];
      auVar45._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7271,pcVar22,
                 auVar45,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e94e5c;
LAB_00e94d1c:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e94d20;
LAB_00e94ea8:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar47._0_8_ = (double)pfVar26[-2];
      auVar47._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7271,pcVar22,
                 auVar47,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e94ef4;
LAB_00e94d24:
      uVar29 = (uint)uVar23;
    }
    else {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar42._0_8_ = (double)pfVar26[-7];
      auVar42._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7271,pcVar22,
                 auVar42,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e94d78;
LAB_00e94d10:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e94d14;
LAB_00e94dc4:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar44._0_8_ = (double)pfVar26[-5];
      auVar44._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7271,pcVar22,
                 auVar44,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e94e10;
LAB_00e94d18:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e94d1c;
LAB_00e94e5c:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar46._0_8_ = (double)pfVar26[-3];
      auVar46._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7271,pcVar22,
                 auVar46,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e94ea8;
LAB_00e94d20:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e94d24;
LAB_00e94ef4:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar48._0_8_ = (double)pfVar26[-1];
      auVar48._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7271,pcVar22,
                 auVar48,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      uVar29 = (uint)uVar23;
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar49._0_8_ = (double)*pfVar26;
      auVar49._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b7271,pcVar22,
                 auVar49,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    lVar30 = lVar30 + -8;
    pfVar26 = pfVar26 + 8;
  } while (lVar30 != 0);
  if (((uint)uVar23 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e37,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
  }
  auVar117 = NEON_fmov(0x3f800000,4);
  uVar35 = 0xfffffffffffffff0;
  pauVar31 = (undefined (*) [16])&DAT_012edb44;
  do {
    auVar39 = pauVar31[-0xf];
    auVar199 = pauVar31[-0xe];
    uVar35 = uVar35 + 0x40;
    auVar220 = pauVar31[-0xd];
    auVar126 = pauVar31[-0xc];
    auVar211._0_4_ = auVar199._0_4_ - fVar189;
    auVar211._4_4_ = auVar199._4_4_ - fVar189;
    auVar211._8_4_ = auVar199._8_4_ - fVar189;
    auVar211._12_4_ = auVar199._12_4_ - fVar189;
    auVar199 = pauVar31[-0xb];
    auVar131 = pauVar31[-10];
    auVar219._0_4_ = auVar220._0_4_ - fVar189;
    auVar219._4_4_ = auVar220._4_4_ - fVar189;
    auVar219._8_4_ = auVar220._8_4_ - fVar189;
    auVar219._12_4_ = auVar220._12_4_ - fVar189;
    auVar220 = pauVar31[-8];
    auVar157._0_4_ = auVar39._0_4_ - fVar189;
    auVar157._4_4_ = auVar39._4_4_ - fVar189;
    auVar157._8_4_ = auVar39._8_4_ - fVar189;
    auVar157._12_4_ = auVar39._12_4_ - fVar189;
    auVar50._0_4_ = auVar126._0_4_ - fVar189;
    auVar50._4_4_ = auVar126._4_4_ - fVar189;
    auVar50._8_4_ = auVar126._8_4_ - fVar189;
    auVar50._12_4_ = auVar126._12_4_ - fVar189;
    auVar166._0_4_ = auVar131._0_4_ - fVar189;
    auVar166._4_4_ = auVar131._4_4_ - fVar189;
    auVar166._8_4_ = auVar131._8_4_ - fVar189;
    auVar166._12_4_ = auVar131._12_4_ - fVar189;
    auVar170._0_4_ = *(float *)pauVar31[-9] - fVar189;
    auVar170._4_4_ = *(float *)((long)pauVar31[-9] + 4) - fVar189;
    auVar170._8_4_ = *(float *)((long)pauVar31[-9] + 8) - fVar189;
    auVar170._12_4_ = *(float *)((long)pauVar31[-9] + 0xc) - fVar189;
    auVar39 = NEON_fmax(auVar211,ZEXT816(0),4);
    auVar126 = NEON_fmax(auVar219,ZEXT816(0),4);
    auVar162._0_4_ = auVar199._0_4_ - fVar189;
    auVar162._4_4_ = auVar199._4_4_ - fVar189;
    auVar162._8_4_ = auVar199._8_4_ - fVar189;
    auVar162._12_4_ = auVar199._12_4_ - fVar189;
    auVar175._0_4_ = auVar220._0_4_ - fVar189;
    auVar175._4_4_ = auVar220._4_4_ - fVar189;
    auVar175._8_4_ = auVar220._8_4_ - fVar189;
    auVar175._12_4_ = auVar220._12_4_ - fVar189;
    auVar165 = NEON_fmax(auVar157,ZEXT816(0),4);
    auVar150 = NEON_fmax(auVar50,ZEXT816(0),4);
    auVar131 = NEON_fmax(auVar166,ZEXT816(0),4);
    auVar132._0_4_ = auVar39._0_4_ * fVar115;
    auVar132._4_4_ = auVar39._4_4_ * fVar115;
    auVar132._8_4_ = auVar39._8_4_ * fVar115;
    auVar132._12_4_ = auVar39._12_4_ * fVar115;
    auVar156 = NEON_fmax(auVar170,ZEXT816(0),4);
    auVar151._0_4_ = auVar126._0_4_ * fVar115;
    auVar151._4_4_ = auVar126._4_4_ * fVar115;
    auVar151._8_4_ = auVar126._8_4_ * fVar115;
    auVar151._12_4_ = auVar126._12_4_ * fVar115;
    auVar199 = pauVar31[-7];
    auVar39 = pauVar31[-6];
    auVar210 = NEON_fmax(auVar162,ZEXT816(0),4);
    auVar220 = pauVar31[-5];
    auVar126 = pauVar31[-4];
    auVar122._0_4_ = auVar165._0_4_ * fVar115;
    auVar122._4_4_ = auVar165._4_4_ * fVar115;
    auVar122._8_4_ = auVar165._8_4_ * fVar115;
    auVar122._12_4_ = auVar165._12_4_ * fVar115;
    auVar158._0_4_ = auVar150._0_4_ * fVar115;
    auVar158._4_4_ = auVar150._4_4_ * fVar115;
    auVar158._8_4_ = auVar150._8_4_ * fVar115;
    auVar158._12_4_ = auVar150._12_4_ * fVar115;
    auVar150 = NEON_fmax(auVar175,ZEXT816(0),4);
    auVar177 = NEON_fmin(auVar132,auVar117,4);
    auVar225._0_4_ = auVar131._0_4_ * fVar115;
    auVar225._4_4_ = auVar131._4_4_ * fVar115;
    auVar225._8_4_ = auVar131._8_4_ * fVar115;
    auVar225._12_4_ = auVar131._12_4_ * fVar115;
    auVar127._0_4_ = auVar156._0_4_ * fVar115;
    auVar127._4_4_ = auVar156._4_4_ * fVar115;
    auVar127._8_4_ = auVar156._8_4_ * fVar115;
    auVar127._12_4_ = auVar156._12_4_ * fVar115;
    auVar186._0_4_ = auVar199._0_4_ - fVar189;
    auVar186._4_4_ = auVar199._4_4_ - fVar189;
    auVar186._8_4_ = auVar199._8_4_ - fVar189;
    auVar186._12_4_ = auVar199._12_4_ - fVar189;
    auVar133._0_4_ = auVar220._0_4_ - fVar189;
    auVar133._4_4_ = auVar220._4_4_ - fVar189;
    auVar133._8_4_ = auVar220._8_4_ - fVar189;
    auVar133._12_4_ = auVar220._12_4_ - fVar189;
    auVar156 = NEON_fmin(auVar151,auVar117,4);
    auVar216._0_4_ = auVar210._0_4_ * fVar115;
    auVar216._4_4_ = auVar210._4_4_ * fVar115;
    auVar216._8_4_ = auVar210._8_4_ * fVar115;
    auVar216._12_4_ = auVar210._12_4_ * fVar115;
    auVar203._0_4_ = auVar39._0_4_ - fVar189;
    auVar203._4_4_ = auVar39._4_4_ - fVar189;
    auVar203._8_4_ = auVar39._8_4_ - fVar189;
    auVar203._12_4_ = auVar39._12_4_ - fVar189;
    auVar152._0_4_ = auVar126._0_4_ - fVar189;
    auVar152._4_4_ = auVar126._4_4_ - fVar189;
    auVar152._8_4_ = auVar126._8_4_ - fVar189;
    auVar152._12_4_ = auVar126._12_4_ - fVar189;
    auVar39 = NEON_fmin(auVar122,auVar117,4);
    auVar165 = NEON_fmin(auVar158,auVar117,4);
    auVar171._0_4_ = auVar150._0_4_ * fVar115;
    auVar171._4_4_ = auVar150._4_4_ * fVar115;
    auVar171._8_4_ = auVar150._8_4_ * fVar115;
    auVar171._12_4_ = auVar150._12_4_ * fVar115;
    auVar131 = NEON_fmin(auVar225,auVar117,4);
    auVar150 = NEON_fmax(auVar186,ZEXT816(0),4);
    auVar210 = NEON_fmin(auVar127,auVar117,4);
    auVar224 = NEON_fmax(auVar133,ZEXT816(0),4);
    *(long *)((long)pauVar31[-0xf] + 8) = auVar39._8_8_;
    *(long *)pauVar31[-0xf] = auVar39._0_8_;
    *(long *)((long)pauVar31[-0xe] + 8) = auVar177._8_8_;
    *(long *)pauVar31[-0xe] = auVar177._0_8_;
    auVar39 = pauVar31[-2];
    auVar177 = NEON_fmax(auVar203,ZEXT816(0),4);
    auVar220 = pauVar31[-1];
    auVar199 = *pauVar31;
    auVar126 = NEON_fmax(auVar152,ZEXT816(0),4);
    auVar200._0_4_ = *(float *)pauVar31[-3] - fVar189;
    auVar200._4_4_ = *(float *)((long)pauVar31[-3] + 4) - fVar189;
    auVar200._8_4_ = *(float *)((long)pauVar31[-3] + 8) - fVar189;
    auVar200._12_4_ = *(float *)((long)pauVar31[-3] + 0xc) - fVar189;
    *(long *)((long)pauVar31[-0xd] + 8) = auVar156._8_8_;
    *(long *)pauVar31[-0xd] = auVar156._0_8_;
    *(long *)((long)pauVar31[-0xc] + 8) = auVar165._8_8_;
    *(long *)pauVar31[-0xc] = auVar165._0_8_;
    auVar204._0_4_ = auVar39._0_4_ - fVar189;
    auVar204._4_4_ = auVar39._4_4_ - fVar189;
    auVar204._8_4_ = auVar39._8_4_ - fVar189;
    auVar204._12_4_ = auVar39._12_4_ - fVar189;
    auVar153._0_4_ = auVar220._0_4_ - fVar189;
    auVar153._4_4_ = auVar220._4_4_ - fVar189;
    auVar153._8_4_ = auVar220._8_4_ - fVar189;
    auVar153._12_4_ = auVar220._12_4_ - fVar189;
    auVar134._0_4_ = auVar199._0_4_ - fVar189;
    auVar134._4_4_ = auVar199._4_4_ - fVar189;
    auVar134._8_4_ = auVar199._8_4_ - fVar189;
    auVar134._12_4_ = auVar199._12_4_ - fVar189;
    auVar39 = NEON_fmin(auVar216,auVar117,4);
    auVar199 = NEON_fmin(auVar171,auVar117,4);
    auVar172._0_4_ = auVar150._0_4_ * fVar115;
    auVar172._4_4_ = auVar150._4_4_ * fVar115;
    auVar172._8_4_ = auVar150._8_4_ * fVar115;
    auVar172._12_4_ = auVar150._12_4_ * fVar115;
    auVar192._0_4_ = auVar177._0_4_ * fVar115;
    auVar192._4_4_ = auVar177._4_4_ * fVar115;
    auVar192._8_4_ = auVar177._8_4_ * fVar115;
    auVar192._12_4_ = auVar177._12_4_ * fVar115;
    auVar159._0_4_ = auVar224._0_4_ * fVar115;
    auVar159._4_4_ = auVar224._4_4_ * fVar115;
    auVar159._8_4_ = auVar224._8_4_ * fVar115;
    auVar159._12_4_ = auVar224._12_4_ * fVar115;
    auVar182._0_4_ = auVar126._0_4_ * fVar115;
    auVar182._4_4_ = auVar126._4_4_ * fVar115;
    auVar182._8_4_ = auVar126._8_4_ * fVar115;
    auVar182._12_4_ = auVar126._12_4_ * fVar115;
    auVar220 = NEON_fmax(auVar200,ZEXT816(0),4);
    *(long *)((long)pauVar31[-0xb] + 8) = auVar39._8_8_;
    *(long *)pauVar31[-0xb] = auVar39._0_8_;
    *(long *)((long)pauVar31[-10] + 8) = auVar131._8_8_;
    *(long *)pauVar31[-10] = auVar131._0_8_;
    auVar150 = NEON_fmax(auVar204,ZEXT816(0),4);
    *(long *)((long)pauVar31[-9] + 8) = auVar210._8_8_;
    *(long *)pauVar31[-9] = auVar210._0_8_;
    *(long *)((long)pauVar31[-8] + 8) = auVar199._8_8_;
    *(long *)pauVar31[-8] = auVar199._0_8_;
    auVar39 = NEON_fmax(auVar153,ZEXT816(0),4);
    auVar199 = NEON_fmax(auVar134,ZEXT816(0),4);
    auVar131 = NEON_fmin(auVar192,auVar117,4);
    auVar126 = NEON_fmin(auVar172,auVar117,4);
    auVar193._0_4_ = auVar220._0_4_ * fVar115;
    auVar193._4_4_ = auVar220._4_4_ * fVar115;
    auVar193._8_4_ = auVar220._8_4_ * fVar115;
    auVar193._12_4_ = auVar220._12_4_ * fVar115;
    auVar176._0_4_ = auVar150._0_4_ * fVar115;
    auVar176._4_4_ = auVar150._4_4_ * fVar115;
    auVar176._8_4_ = auVar150._8_4_ * fVar115;
    auVar176._12_4_ = auVar150._12_4_ * fVar115;
    auVar178._0_4_ = auVar39._0_4_ * fVar115;
    auVar178._4_4_ = auVar39._4_4_ * fVar115;
    auVar178._8_4_ = auVar39._8_4_ * fVar115;
    auVar178._12_4_ = auVar39._12_4_ * fVar115;
    auVar163._0_4_ = auVar199._0_4_ * fVar115;
    auVar163._4_4_ = auVar199._4_4_ * fVar115;
    auVar163._8_4_ = auVar199._8_4_ * fVar115;
    auVar163._12_4_ = auVar199._12_4_ * fVar115;
    auVar220 = NEON_fmin(auVar159,auVar117,4);
    auVar39 = NEON_fmin(auVar182,auVar117,4);
    *(long *)((long)pauVar31[-7] + 8) = auVar126._8_8_;
    *(long *)pauVar31[-7] = auVar126._0_8_;
    *(long *)((long)pauVar31[-6] + 8) = auVar131._8_8_;
    *(long *)pauVar31[-6] = auVar131._0_8_;
    auVar199 = NEON_fmin(auVar193,auVar117,4);
    auVar131 = NEON_fmin(auVar176,auVar117,4);
    auVar150 = NEON_fmin(auVar178,auVar117,4);
    auVar126 = NEON_fmin(auVar163,auVar117,4);
    *(long *)((long)pauVar31[-5] + 8) = auVar220._8_8_;
    *(long *)pauVar31[-5] = auVar220._0_8_;
    *(long *)((long)pauVar31[-4] + 8) = auVar39._8_8_;
    *(long *)pauVar31[-4] = auVar39._0_8_;
    *(long *)((long)pauVar31[-3] + 8) = auVar199._8_8_;
    *(long *)pauVar31[-3] = auVar199._0_8_;
    *(long *)((long)pauVar31[-2] + 8) = auVar131._8_8_;
    *(long *)pauVar31[-2] = auVar131._0_8_;
    *(long *)((long)pauVar31[-1] + 8) = auVar150._8_8_;
    *(long *)pauVar31[-1] = auVar150._0_8_;
    *(long *)((long)*pauVar31 + 8) = auVar126._8_8_;
    *(long *)*pauVar31 = auVar126._0_8_;
    pauVar31 = pauVar31 + 0x10;
  } while (uVar35 < 0xf0);
  fVar189 = DAT_012ede54 - fVar189;
  uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  if (fVar189 <= 0.0) {
    fVar189 = 0.0;
  }
  DAT_012ede54 = 1.0;
  if (fVar115 * fVar189 <= 1.0) {
    DAT_012ede54 = fVar115 * fVar189;
  }
  if (((uint)uVar23 >> 0x15 & 1) == 0) {
    if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e95180;
LAB_00e95b20:
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2dc,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar29 = (uint)uVar23;
  }
  else {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116dc4,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e95b20;
LAB_00e95180:
    uVar29 = (uint)uVar23;
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar51._0_8_ = (double)DAT_012eda54;
    auVar51._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9ac,pcVar22,
               auVar51,uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  pfVar26 = (float *)&DAT_012eda74;
  lVar30 = 0x100;
  do {
    if (((uint)uVar23 >> 0x15 & 1) == 0) {
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e95224;
LAB_00e9528c:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar53._0_8_ = (double)pfVar26[-6];
      auVar53._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9ac,pcVar22,
                 auVar53,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e952d8;
LAB_00e95228:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e9522c;
LAB_00e95324:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar55._0_8_ = (double)pfVar26[-4];
      auVar55._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9ac,pcVar22,
                 auVar55,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e95370;
LAB_00e95230:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e95234;
LAB_00e953bc:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar57._0_8_ = (double)pfVar26[-2];
      auVar57._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9ac,pcVar22,
                 auVar57,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e95408;
LAB_00e95238:
      uVar29 = (uint)uVar23;
    }
    else {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar52._0_8_ = (double)pfVar26[-7];
      auVar52._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9ac,pcVar22,
                 auVar52,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e9528c;
LAB_00e95224:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e95228;
LAB_00e952d8:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar54._0_8_ = (double)pfVar26[-5];
      auVar54._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9ac,pcVar22,
                 auVar54,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e95324;
LAB_00e9522c:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e95230;
LAB_00e95370:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar56._0_8_ = (double)pfVar26[-3];
      auVar56._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9ac,pcVar22,
                 auVar56,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e953bc;
LAB_00e95234:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e95238;
LAB_00e95408:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar58._0_8_ = (double)pfVar26[-1];
      auVar58._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9ac,pcVar22,
                 auVar58,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      uVar29 = (uint)uVar23;
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar59._0_8_ = (double)*pfVar26;
      auVar59._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9ac,pcVar22,
                 auVar59,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    lVar30 = lVar30 + -8;
    pfVar26 = pfVar26 + 8;
  } while (lVar30 != 0);
  if (((uint)uVar23 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2dc,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
  }
  uVar35 = 0xfffffffffffffff0;
  pauVar31 = (undefined (*) [16])&DAT_012eda84;
  fVar115 = *(float *)(lVar24 + 0x13f4) + 1.0;
  do {
    auVar39 = pauVar31[-1];
    auVar117 = *pauVar31;
    auVar199 = pauVar31[-3];
    auVar220 = pauVar31[-2];
    powf(auVar199._0_4_,fVar115);
    powf(auVar199._4_4_,fVar115);
    powf(auVar199._8_4_,fVar115);
    powf(auVar199._12_4_,fVar115);
    fVar136 = powf(auVar220._0_4_,fVar115);
    fVar167 = powf(auVar220._4_4_,fVar115);
    fVar189 = powf(auVar220._8_4_,fVar115);
    fVar145 = powf(auVar220._12_4_,fVar115);
    fVar137 = powf(auVar39._0_4_,fVar115);
    fVar138 = powf(auVar39._4_4_,fVar115);
    fVar140 = powf(auVar39._8_4_,fVar115);
    fVar141 = powf(auVar39._12_4_,fVar115);
    auVar154._4_4_ = fVar138;
    auVar154._0_4_ = fVar137;
    auVar154._8_4_ = fVar140;
    auVar154._12_4_ = fVar141;
    fVar140 = powf(auVar117._0_4_,fVar115);
    fVar141 = powf(auVar117._4_4_,fVar115);
    fVar142 = powf(auVar117._8_4_,fVar115);
    fVar147 = powf(auVar117._12_4_,fVar115);
    uVar35 = uVar35 + 0x10;
    auVar135._0_8_ = CONCAT44(fVar141,fVar140);
    auVar135._8_4_ = fVar142;
    auVar135._12_4_ = fVar147;
    *(undefined8 *)((long)pauVar31[-3] + 8) = extraout_var;
    *(ulong *)pauVar31[-3] = CONCAT44(fVar145,fVar189);
    *(undefined8 *)((long)pauVar31[-2] + 8) = extraout_var_00;
    *(ulong *)pauVar31[-2] = CONCAT44(fVar167,fVar136);
    *(long *)((long)pauVar31[-1] + 8) = auVar154._8_8_;
    *(ulong *)pauVar31[-1] = CONCAT44(fVar138,fVar137);
    *(long *)((long)*pauVar31 + 8) = auVar135._8_8_;
    *(undefined8 *)*pauVar31 = auVar135._0_8_;
    pauVar31 = pauVar31 + 4;
  } while (uVar35 < 0xf0);
  DAT_012ede54 = powf(DAT_012ede54,fVar115);
  if (1e-06 < *(float *)(lVar24 + 0x13ec)) {
    lVar24 = *(long *)(param_1 + 0x70);
    uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x110040,pcVar22,
                 uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c5012,pcVar22,
                 uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar60._0_8_ = (double)*(float *)(lVar24 + 0x20);
      auVar60._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2f5,pcVar22,
                 auVar60,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar61._0_8_ = (double)*(float *)(lVar24 + 0x24);
      auVar61._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2f5,pcVar22,
                 auVar61,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar62._0_8_ = (double)*(float *)(lVar24 + 0x28);
      auVar62._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2f5,pcVar22,
                 auVar62,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar63._0_8_ = (double)*(float *)(lVar24 + 0x2c);
      auVar63._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2f5,pcVar22,
                 auVar63,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar64._0_8_ = (double)*(float *)(lVar24 + 0x30);
      auVar64._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2f5,pcVar22,
                 auVar64,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar65._0_8_ = (double)*(float *)(lVar24 + 0x34);
      auVar65._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2f5,pcVar22,
                 auVar65,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar66._0_8_ = (double)*(float *)(lVar24 + 0x38);
      auVar66._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2f5,pcVar22,
                 auVar66,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c5012,pcVar22,
                 uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116dfc,pcVar22,
                 uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644c2,pcVar22,
                 uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar67._0_8_ = (double)*(float *)(lVar24 + 0x90);
      auVar67._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc863,pcVar22,
                 auVar67,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar68._0_8_ = (double)*(float *)(lVar24 + 0x94);
      auVar68._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc863,pcVar22,
                 auVar68,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar69._0_8_ = (double)*(float *)(lVar24 + 0x98);
      auVar69._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc863,pcVar22,
                 auVar69,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar70._0_8_ = (double)*(float *)(lVar24 + 0x9c);
      auVar70._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc863,pcVar22,
                 auVar70,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar71._0_8_ = (double)*(float *)(lVar24 + 0xa0);
      auVar71._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc863,pcVar22,
                 auVar71,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar72._0_8_ = (double)*(float *)(lVar24 + 0xa4);
      auVar72._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc863,pcVar22,
                 auVar72,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar73._0_8_ = (double)*(float *)(lVar24 + 0xa8);
      auVar73._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc863,pcVar22,
                 auVar73,uVar23,"KNP_bhist_for_gtm");
      uVar29 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644c2,pcVar22,
                 uVar23,"KNP_bhist_for_gtm");
    }
    puVar18 = (undefined8 *)(lVar24 + 0x13a4);
    lVar30 = lVar24 + 0x94;
    lVar169 = lVar24 + 0x24;
    pfVar26 = (float *)&DAT_001e9488;
    uVar34 = 0;
    lVar181 = 0;
    lVar173 = lVar24 + 0x94;
    puVar25 = puVar18;
    do {
      uVar2 = uVar34 + 1;
      fVar115 = *pfVar26;
      if (uVar2 < 7) {
        uVar2 = 6;
      }
      do {
        if (fVar115 <= *(float *)(lVar173 + (ulong)uVar34 * 4)) goto LAB_00e9583c;
        uVar34 = uVar34 + 1;
      } while (uVar2 != uVar34);
      uVar34 = 5;
LAB_00e9583c:
      lVar185 = (ulong)uVar34 * 4;
      lVar183 = lVar24 + lVar185;
      fVar167 = *(float *)(lVar183 + 0x90);
      fVar136 = *(float *)(lVar30 + lVar185) - fVar167;
      if (1e-06 <= fVar136) {
        uVar144 = NEON_fmadd(fVar115 - fVar167,
                             (*(float *)(lVar169 + (ulong)uVar34 * 4) - *(float *)(lVar183 + 0x20))
                             / fVar136,*(float *)(lVar183 + 0x20));
        *(undefined4 *)puVar25 = uVar144;
      }
      else {
        uVar144 = NEON_fmadd(fVar115 - fVar167,0x3f800000,*(undefined4 *)(lVar183 + 0x20));
        *(undefined4 *)puVar25 = uVar144;
      }
      if (lVar181 == 0x10) goto LAB_00e95b78;
      uVar2 = uVar34 + 1;
      if (uVar2 < 7) {
        uVar2 = 6;
      }
      do {
        if (pfVar26[1] <= *(float *)(lVar173 + (ulong)uVar34 * 4)) goto LAB_00e958dc;
        uVar34 = uVar34 + 1;
      } while (uVar2 != uVar34);
      uVar34 = 5;
LAB_00e958dc:
      lVar185 = (ulong)uVar34 * 4;
      lVar183 = lVar24 + lVar185;
      fVar115 = *(float *)(lVar30 + lVar185) - *(float *)(lVar183 + 0x90);
      if (1e-06 <= fVar115) {
        fVar136 = *(float *)(lVar183 + 0x20);
        fVar115 = (*(float *)(lVar169 + (ulong)uVar34 * 4) - fVar136) / fVar115;
      }
      else {
        fVar115 = 1.0;
        fVar136 = *(float *)(lVar183 + 0x20);
      }
      uVar2 = uVar34 + 1;
      if (uVar2 < 7) {
        uVar2 = 6;
      }
      uVar144 = NEON_fmadd(pfVar26[1] - *(float *)(lVar183 + 0x90),fVar115,fVar136);
      *(undefined4 *)((long)puVar25 + 4) = uVar144;
      do {
        if (pfVar26[2] <= *(float *)(lVar173 + (ulong)uVar34 * 4)) goto LAB_00e95964;
        uVar34 = uVar34 + 1;
      } while (uVar2 != uVar34);
      uVar34 = 5;
LAB_00e95964:
      lVar185 = (ulong)uVar34 * 4;
      lVar183 = lVar24 + lVar185;
      fVar115 = *(float *)(lVar30 + lVar185) - *(float *)(lVar183 + 0x90);
      if (1e-06 <= fVar115) {
        fVar136 = *(float *)(lVar183 + 0x20);
        fVar115 = (*(float *)(lVar169 + (ulong)uVar34 * 4) - fVar136) / fVar115;
      }
      else {
        fVar115 = 1.0;
        fVar136 = *(float *)(lVar183 + 0x20);
      }
      uVar2 = uVar34 + 1;
      if (uVar2 < 7) {
        uVar2 = 6;
      }
      uVar144 = NEON_fmadd(pfVar26[2] - *(float *)(lVar183 + 0x90),fVar115,fVar136);
      *(undefined4 *)(puVar25 + 1) = uVar144;
      pfVar27 = pfVar26 + 3;
      pfVar26 = pfVar26 + 4;
      do {
        if (*pfVar27 <= *(float *)(lVar173 + (ulong)uVar34 * 4)) goto LAB_00e959e8;
        uVar34 = uVar34 + 1;
      } while (uVar2 != uVar34);
      uVar34 = 5;
LAB_00e959e8:
      lVar185 = (ulong)uVar34 * 4;
      lVar183 = lVar24 + lVar185;
      fVar115 = *(float *)(lVar30 + lVar185) - *(float *)(lVar183 + 0x90);
      if (fVar115 < 1e-06) {
        fVar115 = 1.0;
        fVar136 = *(float *)(lVar183 + 0x20);
      }
      else {
        fVar136 = *(float *)(lVar183 + 0x20);
        fVar115 = (*(float *)(lVar169 + (ulong)uVar34 * 4) - fVar136) / fVar115;
      }
      lVar181 = lVar181 + 4;
      uVar144 = NEON_fmadd(*pfVar27 - *(float *)(lVar183 + 0x90),fVar115,fVar136);
      *(undefined4 *)((long)puVar25 + 0xc) = uVar144;
      puVar25 = puVar25 + 2;
    } while( true );
  }
  goto LAB_00e97894;
LAB_00e95b78:
  uVar34 = 0;
  lVar30 = 0;
  puVar25 = puVar18;
  do {
    uVar2 = uVar34 + 1;
    fVar115 = *(float *)puVar25;
    if (uVar2 < 0x101) {
      uVar2 = 0x100;
    }
    do {
      if (fVar115 <= (float)(&DAT_001ea9dc)[uVar34]) goto LAB_00e95bf0;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0xff;
LAB_00e95bf0:
    uVar35 = (ulong)uVar34;
    fVar136 = (float)(&DAT_001ea9d8)[uVar34];
    if (1e-06 <= (float)(&DAT_001ea9dc)[uVar34] - fVar136) {
      uVar144 = NEON_fmadd(fVar115 - fVar136,
                           (*(float *)(&UNK_001eade0 + uVar35 * 4) - (float)(&DAT_001eaddc)[uVar35])
                           / ((float)(&DAT_001ea9dc)[uVar34] - fVar136),(&DAT_001eaddc)[uVar35]);
      *(undefined4 *)puVar25 = uVar144;
    }
    else {
      uVar144 = NEON_fmadd(fVar115 - fVar136,0x3f800000,(&DAT_001eaddc)[uVar35]);
      *(undefined4 *)puVar25 = uVar144;
    }
    if (lVar30 == 0x10) break;
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x101) {
      uVar2 = 0x100;
    }
    do {
      if (*(float *)((long)puVar25 + 4) <= (float)(&DAT_001ea9dc)[uVar34]) goto LAB_00e95c88;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0xff;
LAB_00e95c88:
    uVar35 = (ulong)uVar34;
    fVar115 = (float)(&DAT_001ea9dc)[uVar34] - (float)(&DAT_001ea9d8)[uVar34];
    if (1e-06 <= fVar115) {
      fVar136 = (float)(&DAT_001eaddc)[uVar35];
      fVar115 = (*(float *)(&UNK_001eade0 + uVar35 * 4) - fVar136) / fVar115;
    }
    else {
      fVar115 = 1.0;
      fVar136 = (float)(&DAT_001eaddc)[uVar35];
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x101) {
      uVar2 = 0x100;
    }
    uVar144 = NEON_fmadd(*(float *)((long)puVar25 + 4) - (float)(&DAT_001ea9d8)[uVar34],fVar115,
                         fVar136);
    *(undefined4 *)((long)puVar25 + 4) = uVar144;
    do {
      if (*(float *)(puVar25 + 1) <= (float)(&DAT_001ea9dc)[uVar34]) goto LAB_00e95d18;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0xff;
LAB_00e95d18:
    uVar35 = (ulong)uVar34;
    fVar115 = (float)(&DAT_001ea9dc)[uVar34] - (float)(&DAT_001ea9d8)[uVar34];
    if (1e-06 <= fVar115) {
      fVar136 = (float)(&DAT_001eaddc)[uVar35];
      fVar115 = (*(float *)(&UNK_001eade0 + uVar35 * 4) - fVar136) / fVar115;
    }
    else {
      fVar115 = 1.0;
      fVar136 = (float)(&DAT_001eaddc)[uVar35];
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x101) {
      uVar2 = 0x100;
    }
    uVar144 = NEON_fmadd(*(float *)(puVar25 + 1) - (float)(&DAT_001ea9d8)[uVar34],fVar115,fVar136);
    *(undefined4 *)(puVar25 + 1) = uVar144;
    do {
      if (*(float *)((long)puVar25 + 0xc) <= (float)(&DAT_001ea9dc)[uVar34]) goto LAB_00e95d90;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0xff;
LAB_00e95d90:
    uVar35 = (ulong)uVar34;
    fVar115 = (float)(&DAT_001ea9dc)[uVar34] - (float)(&DAT_001ea9d8)[uVar34];
    if (fVar115 < 1e-06) {
      fVar115 = 1.0;
      fVar136 = (float)(&DAT_001eaddc)[uVar35];
    }
    else {
      fVar136 = (float)(&DAT_001eaddc)[uVar35];
      fVar115 = (*(float *)(&UNK_001eade0 + uVar35 * 4) - fVar136) / fVar115;
    }
    lVar30 = lVar30 + 4;
    uVar144 = NEON_fmadd(*(float *)((long)puVar25 + 0xc) - (float)(&DAT_001ea9d8)[uVar34],fVar115,
                         fVar136);
    *(undefined4 *)((long)puVar25 + 0xc) = uVar144;
    puVar25 = puVar25 + 2;
  } while( true );
  uVar34 = 0;
  lVar30 = 0;
  puVar28 = &DAT_012ed650;
  puVar25 = puVar18;
  do {
    uVar2 = uVar34 + 1;
    fVar115 = *(float *)puVar25;
    if (uVar2 < 0x401) {
      uVar2 = 0x400;
    }
    do {
      if (fVar115 <= (float)(&DAT_001e99d8)[uVar34]) goto LAB_00e95e48;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0x3ff;
LAB_00e95e48:
    fVar136 = (float)(&DAT_001e99d4)[uVar34];
    if (1e-06 <= (float)(&DAT_001e99d8)[uVar34] - fVar136) {
      uVar144 = NEON_fmadd(fVar115 - fVar136,
                           (local_10b4[(ulong)uVar34 + 1] - local_10b4[uVar34]) /
                           ((float)(&DAT_001e99d8)[uVar34] - fVar136),local_10b4[uVar34]);
      *puVar28 = uVar144;
      puVar21 = PTR_g_logInfo_010f56f8;
    }
    else {
      uVar144 = NEON_fmadd(fVar115 - fVar136,0x3f800000,local_10b4[uVar34]);
      *puVar28 = uVar144;
      puVar21 = PTR_g_logInfo_010f56f8;
    }
    PTR_g_logInfo_010f56f8 = puVar21;
    if (lVar30 == 0x10) break;
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x401) {
      uVar2 = 0x400;
    }
    do {
      if (*(float *)((long)puVar25 + 4) <= (float)(&DAT_001e99d8)[uVar34]) goto LAB_00e95ee0;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0x3ff;
LAB_00e95ee0:
    fVar115 = (float)(&DAT_001e99d8)[uVar34] - (float)(&DAT_001e99d4)[uVar34];
    if (1e-06 <= fVar115) {
      fVar136 = local_10b4[uVar34];
      fVar115 = (local_10b4[(ulong)uVar34 + 1] - fVar136) / fVar115;
    }
    else {
      fVar115 = 1.0;
      fVar136 = local_10b4[uVar34];
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x401) {
      uVar2 = 0x400;
    }
    uVar144 = NEON_fmadd(*(float *)((long)puVar25 + 4) - (float)(&DAT_001e99d4)[uVar34],fVar115,
                         fVar136);
    puVar28[1] = uVar144;
    do {
      if (*(float *)(puVar25 + 1) <= (float)(&DAT_001e99d8)[uVar34]) goto LAB_00e95f60;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0x3ff;
LAB_00e95f60:
    fVar115 = (float)(&DAT_001e99d8)[uVar34] - (float)(&DAT_001e99d4)[uVar34];
    if (1e-06 <= fVar115) {
      fVar136 = local_10b4[uVar34];
      fVar115 = (local_10b4[(ulong)uVar34 + 1] - fVar136) / fVar115;
    }
    else {
      fVar115 = 1.0;
      fVar136 = local_10b4[uVar34];
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 0x401) {
      uVar2 = 0x400;
    }
    uVar144 = NEON_fmadd(*(float *)(puVar25 + 1) - (float)(&DAT_001e99d4)[uVar34],fVar115,fVar136);
    puVar28[2] = uVar144;
    pfVar26 = (float *)((long)puVar25 + 0xc);
    puVar25 = puVar25 + 2;
    do {
      if (*pfVar26 <= (float)(&DAT_001e99d8)[uVar34]) goto LAB_00e95fdc;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 0x3ff;
LAB_00e95fdc:
    fVar115 = (float)(&DAT_001e99d8)[uVar34] - (float)(&DAT_001e99d4)[uVar34];
    if (fVar115 < 1e-06) {
      fVar115 = 1.0;
      fVar136 = local_10b4[uVar34];
    }
    else {
      fVar136 = local_10b4[uVar34];
      fVar115 = (local_10b4[(ulong)uVar34 + 1] - fVar136) / fVar115;
    }
    lVar30 = lVar30 + 4;
    uVar144 = NEON_fmadd(*pfVar26 - (float)(&DAT_001e99d4)[uVar34],fVar115,fVar136);
    puVar28[3] = uVar144;
    puVar28 = puVar28 + 4;
  } while( true );
  uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d8f,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37e1,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar74._0_8_ = (double)DAT_012ed650;
    auVar74._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar74,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar75._0_8_ = (double)DAT_012ed654;
    auVar75._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar75,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar76._0_8_ = (double)DAT_012ed658;
    auVar76._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar76,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar77._0_8_ = (double)DAT_012ed65c;
    auVar77._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar77,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar78._0_8_ = (double)DAT_012ed660;
    auVar78._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar78,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar79._0_8_ = (double)DAT_012ed664;
    auVar79._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar79,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar80._0_8_ = (double)DAT_012ed668;
    auVar80._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar80,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar81._0_8_ = (double)DAT_012ed66c;
    auVar81._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar81,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar82._0_8_ = (double)DAT_012ed670;
    auVar82._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar82,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar83._0_8_ = (double)DAT_012ed674;
    auVar83._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar83,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar84._0_8_ = (double)DAT_012ed678;
    auVar84._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar84,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar85._0_8_ = (double)DAT_012ed67c;
    auVar85._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar85,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar86._0_8_ = (double)DAT_012ed680;
    auVar86._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar86,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar87._0_8_ = (double)DAT_012ed684;
    auVar87._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar87,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar88._0_8_ = (double)DAT_012ed688;
    auVar88._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar88,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar89._0_8_ = (double)DAT_012ed68c;
    auVar89._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar89,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar90._0_8_ = (double)DAT_012ed690;
    auVar90._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8e4,pcVar22,
               auVar90,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37e1,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
  }
  lVar30 = -1;
  pfVar26 = (float *)&DAT_001e9484;
  pfVar27 = &DAT_012ed654;
  do {
    pfVar33 = pfVar27;
    pfVar37 = pfVar26;
    lVar169 = lVar30;
    pfVar26 = pfVar37 + 1;
    lVar30 = lVar169 + 1;
    pfVar27 = pfVar33 + 1;
  } while (*pfVar33 < 0.0 && lVar169 != 0xe);
  fVar115 = *pfVar33 - pfVar33[-1];
  if (1e-06 <= fVar115) {
    fVar136 = *pfVar26;
    fVar115 = (pfVar37[2] - fVar136) / fVar115;
  }
  else {
    fVar136 = *pfVar26;
    fVar115 = 1.0;
  }
  lVar30 = 0;
  uVar144 = NEON_fmadd(0.0 - pfVar33[-1],fVar115,fVar136);
  *(undefined4 *)puVar18 = uVar144;
  do {
    if (0.1 <= *pfVar33) {
      uVar29 = (int)(lVar169 + 1) - (int)lVar30;
      goto LAB_00e96e9c;
    }
    lVar30 = lVar30 + -1;
    pfVar33 = pfVar33 + 1;
  } while (lVar169 + -0xf != lVar30);
  uVar29 = 0xf;
LAB_00e96e9c:
  uVar35 = (ulong)uVar29 & 0xffff;
  fVar115 = (&DAT_012ed654)[uVar35] - (&DAT_012ed650)[uVar35];
  if (1e-06 <= fVar115) {
    fVar136 = (float)(&DAT_001e9488)[uVar35];
    fVar115 = ((float)(&DAT_001e948c)[uVar35] - fVar136) / fVar115;
  }
  else {
    fVar136 = (float)(&DAT_001e9488)[uVar35];
    fVar115 = 1.0;
  }
  uVar3 = uVar29 + 1 & 0xffff;
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  uVar144 = NEON_fmadd(0.1 - (&DAT_012ed650)[uVar35],fVar115,fVar136);
  *(undefined4 *)(lVar24 + 0x13a8) = uVar144;
  do {
    if (0.3 <= (&DAT_012ed654)[(ushort)uVar29]) goto LAB_00e96f44;
    uVar29 = uVar29 + 1;
  } while (uVar3 != (uVar29 & 0xffff));
  uVar29 = 0xf;
LAB_00e96f44:
  uVar35 = (ulong)uVar29 & 0xffff;
  fVar115 = (&DAT_012ed654)[uVar35] - (&DAT_012ed650)[uVar35];
  if (1e-06 <= fVar115) {
    fVar136 = (float)(&DAT_001e9488)[uVar35];
    fVar115 = ((float)(&DAT_001e948c)[uVar35] - fVar136) / fVar115;
  }
  else {
    fVar136 = (float)(&DAT_001e9488)[uVar35];
    fVar115 = 1.0;
  }
  uVar3 = uVar29 + 1 & 0xffff;
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  uVar144 = NEON_fmadd(0.3 - (&DAT_012ed650)[uVar35],fVar115,fVar136);
  *(undefined4 *)(lVar24 + 0x13ac) = uVar144;
  do {
    if (0.5 <= (&DAT_012ed654)[(ushort)uVar29]) goto LAB_00e96fe4;
    uVar29 = uVar29 + 1;
  } while (uVar3 != (uVar29 & 0xffff));
  uVar29 = 0xf;
LAB_00e96fe4:
  uVar35 = (ulong)uVar29 & 0xffff;
  fVar115 = (&DAT_012ed654)[uVar35] - (&DAT_012ed650)[uVar35];
  if (1e-06 <= fVar115) {
    fVar136 = (float)(&DAT_001e9488)[uVar35];
    fVar115 = ((float)(&DAT_001e948c)[uVar35] - fVar136) / fVar115;
  }
  else {
    fVar136 = (float)(&DAT_001e9488)[uVar35];
    fVar115 = 1.0;
  }
  uVar3 = uVar29 + 1 & 0xffff;
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  uVar144 = NEON_fmadd(0.5 - (&DAT_012ed650)[uVar35],fVar115,fVar136);
  *(undefined4 *)(lVar24 + 0x13b0) = uVar144;
  do {
    if (0.7 <= (&DAT_012ed654)[(ushort)uVar29]) {
      uVar35 = (ulong)uVar29;
      goto LAB_00e97088;
    }
    uVar29 = uVar29 + 1;
  } while (uVar3 != (uVar29 & 0xffff));
  uVar35 = 0xf;
LAB_00e97088:
  uVar36 = uVar35 & 0xffff;
  fVar115 = (&DAT_012ed654)[uVar36] - (&DAT_012ed650)[uVar36];
  if (1e-06 <= fVar115) {
    fVar136 = (float)(&DAT_001e9488)[uVar36];
    fVar115 = ((float)(&DAT_001e948c)[uVar36] - fVar136) / fVar115;
  }
  else {
    fVar136 = (float)(&DAT_001e9488)[uVar36];
    fVar115 = 1.0;
  }
  uVar29 = (int)uVar35 + 1U & 0xffff;
  if (uVar29 < 0x11) {
    uVar29 = 0x10;
  }
  uVar144 = NEON_fmadd(0.7 - (&DAT_012ed650)[uVar36],fVar115,fVar136);
  *(undefined4 *)(lVar24 + 0x13b4) = uVar144;
  puVar21 = PTR_g_logInfo_010f56f8;
  do {
    if (0.9 <= (&DAT_012ed654)[uVar35 & 0xffff]) goto LAB_00e97130;
    uVar3 = (int)uVar35 + 1;
    uVar35 = (ulong)uVar3;
  } while (uVar29 != (uVar3 & 0xffff));
  uVar35 = 0xf;
LAB_00e97130:
  uVar36 = uVar35 & 0xffff;
  fVar115 = (&DAT_012ed654)[uVar36] - (&DAT_012ed650)[uVar36];
  if (1e-06 <= fVar115) {
    fVar136 = (float)(&DAT_001e9488)[uVar36];
    fVar115 = ((float)(&DAT_001e948c)[uVar36] - fVar136) / fVar115;
  }
  else {
    fVar136 = (float)(&DAT_001e9488)[uVar36];
    fVar115 = 1.0;
  }
  uVar29 = (int)uVar35 + 1U & 0xffff;
  if (uVar29 < 0x11) {
    uVar29 = 0x10;
  }
  uVar144 = NEON_fmadd(0.9 - (&DAT_012ed650)[uVar36],fVar115,fVar136);
  *(undefined4 *)(lVar24 + 0x13b8) = uVar144;
  do {
    if (1.0 <= (&DAT_012ed654)[uVar35 & 0xffff]) goto LAB_00e971e0;
    uVar3 = (int)uVar35 + 1;
    uVar35 = (ulong)uVar3;
  } while (uVar29 != (uVar3 & 0xffff));
  uVar35 = 0xf;
LAB_00e971e0:
  uVar35 = uVar35 & 0xffff;
  fVar115 = (&DAT_012ed650)[uVar35];
  if (1e-06 <= (&DAT_012ed654)[uVar35] - fVar115) {
    uVar23 = *(undefined8 *)(puVar21 + 0x28);
    uVar144 = NEON_fmadd(1.0 - fVar115,
                         ((float)(&DAT_001e948c)[uVar35] - (float)(&DAT_001e9488)[uVar35]) /
                         ((&DAT_012ed654)[uVar35] - fVar115),(&DAT_001e9488)[uVar35]);
    *(undefined4 *)(lVar24 + 0x13bc) = uVar144;
    uVar29 = (uint)uVar23;
  }
  else {
    uVar23 = *(undefined8 *)(puVar21 + 0x28);
    uVar144 = NEON_fmadd(1.0 - fVar115,0x3f800000,(&DAT_001e9488)[uVar35]);
    *(undefined4 *)(lVar24 + 0x13bc) = uVar144;
    uVar29 = (uint)uVar23;
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954e1,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x188233,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar105._0_8_ = (double)*(float *)puVar18;
    auVar105._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e50,pcVar22,
               auVar105,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar106._0_8_ = (double)*(float *)(lVar24 + 0x13a8);
    auVar106._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e50,pcVar22,
               auVar106,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar107._0_8_ = (double)*(float *)(lVar24 + 0x13ac);
    auVar107._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e50,pcVar22,
               auVar107,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar108._0_8_ = (double)*(float *)(lVar24 + 0x13b0);
    auVar108._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e50,pcVar22,
               auVar108,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar109._0_8_ = (double)*(float *)(lVar24 + 0x13b4);
    auVar109._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e50,pcVar22,
               auVar109,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar110._0_8_ = (double)*(float *)(lVar24 + 0x13b8);
    auVar110._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e50,pcVar22,
               auVar110,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar111._0_8_ = (double)*(float *)(lVar24 + 0x13bc);
    auVar111._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0e50,pcVar22,
               auVar111,uVar23,"KNP_bhist_for_gtm");
    uVar29 = (uint)*(undefined8 *)(puVar21 + 0x28);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x188233,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
  }
  fVar167 = *(float *)(lVar24 + 0x13a4);
  fVar138 = *(float *)(lVar24 + 0x13a8);
  fVar140 = *(float *)(lVar24 + 0x13ac);
  fVar136 = *(float *)(lVar24 + 0x13b0);
  fVar189 = *(float *)(lVar24 + 0x13b4);
  fVar137 = *(float *)(lVar24 + 0x13b8);
  fVar145 = *(float *)(lVar24 + 0x13bc);
  uVar34 = 0;
  lVar30 = 0;
  lVar169 = lVar24 + 0x13a8;
  fVar115 = fVar138 - fVar167;
  if (*(float *)(param_2 + 0x58) <= 0.0) {
    fVar115 = fVar167;
  }
  lVar173 = lVar24 + 0x13a8;
  lVar181 = lVar24 + 0x13c4;
  puVar28 = (undefined4 *)(*(long *)(param_1 + 0x70) + 0x119c);
  pfVar26 = (float *)&DAT_001e94cc;
  uVar144 = NEON_fmadd(*(float *)(param_2 + 0x58),fVar115,fVar167);
  *(undefined4 *)(lVar24 + 0x13c0) = uVar144;
  fVar115 = fVar140 - fVar138;
  if (*(float *)(param_2 + 0x5c) <= 0.0) {
    fVar115 = fVar138 - fVar167;
  }
  uVar144 = NEON_fmadd(*(float *)(param_2 + 0x5c),fVar115,fVar138);
  *(undefined4 *)(lVar24 + 0x13c4) = uVar144;
  fVar115 = fVar136 - fVar140;
  if (*(float *)(param_2 + 0x60) <= 0.0) {
    fVar115 = fVar140 - fVar138;
  }
  uVar144 = NEON_fmadd(*(float *)(param_2 + 0x60),fVar115,fVar140);
  *(undefined4 *)(lVar24 + 0x13c8) = uVar144;
  fVar115 = fVar189 - fVar136;
  if (*(float *)(param_2 + 100) <= 0.0) {
    fVar115 = fVar136 - fVar140;
  }
  uVar144 = NEON_fmadd(*(float *)(param_2 + 100),fVar115,fVar136);
  *(undefined4 *)(lVar24 + 0x13cc) = uVar144;
  fVar115 = fVar137 - fVar189;
  if (*(float *)(param_2 + 0x68) <= 0.0) {
    fVar115 = fVar189 - fVar136;
  }
  uVar144 = NEON_fmadd(*(float *)(param_2 + 0x68),fVar115,fVar189);
  *(undefined4 *)(lVar24 + 0x13d0) = uVar144;
  fVar115 = fVar145 - fVar137;
  if (*(float *)(param_2 + 0x6c) <= 0.0) {
    fVar115 = fVar137 - fVar189;
  }
  uVar144 = NEON_fmadd(*(float *)(param_2 + 0x6c),fVar115,fVar137);
  *(undefined4 *)(lVar24 + 0x13d4) = uVar144;
  fVar115 = 1.0 - fVar145;
  if (*(float *)(param_2 + 0x70) <= 0.0) {
    fVar115 = fVar145 - fVar137;
  }
  uVar144 = NEON_fmadd(*(float *)(param_2 + 0x70),fVar115,fVar145);
  *(undefined4 *)(lVar24 + 0x13d8) = uVar144;
  do {
    puVar21 = PTR_g_logInfo_010f56f8;
    uVar2 = uVar34 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    do {
      if (*pfVar26 <= *(float *)(lVar169 + (ulong)uVar34 * 4)) goto LAB_00e9747c;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 5;
LAB_00e9747c:
    lVar185 = (ulong)uVar34 * 4;
    lVar183 = lVar24 + lVar185;
    fVar115 = *(float *)(lVar173 + lVar185) - *(float *)(lVar183 + 0x13a4);
    if (1e-06 <= fVar115) {
      fVar136 = *(float *)(lVar183 + 0x13c0);
      fVar115 = (*(float *)(lVar181 + (ulong)uVar34 * 4) - fVar136) / fVar115;
    }
    else {
      fVar136 = *(float *)(lVar183 + 0x13c0);
      fVar115 = 1.0;
    }
    uVar144 = NEON_fmadd(*pfVar26 - *(float *)(lVar183 + 0x13a4),fVar115,fVar136);
    *puVar28 = uVar144;
    if (lVar30 == 0x40) break;
    uVar2 = uVar34 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    do {
      if (pfVar26[1] <= *(float *)(lVar169 + (ulong)uVar34 * 4)) goto LAB_00e97510;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 5;
LAB_00e97510:
    lVar185 = (ulong)uVar34 * 4;
    lVar183 = lVar24 + lVar185;
    fVar115 = *(float *)(lVar173 + lVar185) - *(float *)(lVar183 + 0x13a4);
    if (1e-06 <= fVar115) {
      fVar136 = *(float *)(lVar183 + 0x13c0);
      fVar115 = (*(float *)(lVar181 + (ulong)uVar34 * 4) - fVar136) / fVar115;
    }
    else {
      fVar115 = 1.0;
      fVar136 = *(float *)(lVar183 + 0x13c0);
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    uVar144 = NEON_fmadd(pfVar26[1] - *(float *)(lVar183 + 0x13a4),fVar115,fVar136);
    puVar28[1] = uVar144;
    do {
      if (pfVar26[2] <= *(float *)(lVar169 + (ulong)uVar34 * 4)) goto LAB_00e9759c;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 5;
LAB_00e9759c:
    lVar185 = (ulong)uVar34 * 4;
    lVar183 = lVar24 + lVar185;
    fVar115 = *(float *)(lVar173 + lVar185) - *(float *)(lVar183 + 0x13a4);
    if (1e-06 <= fVar115) {
      fVar136 = *(float *)(lVar183 + 0x13c0);
      fVar115 = (*(float *)(lVar181 + (ulong)uVar34 * 4) - fVar136) / fVar115;
    }
    else {
      fVar115 = 1.0;
      fVar136 = *(float *)(lVar183 + 0x13c0);
    }
    uVar2 = uVar34 + 1;
    if (uVar2 < 7) {
      uVar2 = 6;
    }
    uVar144 = NEON_fmadd(pfVar26[2] - *(float *)(lVar183 + 0x13a4),fVar115,fVar136);
    puVar28[2] = uVar144;
    pfVar27 = pfVar26 + 3;
    pfVar26 = pfVar26 + 4;
    do {
      if (*pfVar27 <= *(float *)(lVar169 + (ulong)uVar34 * 4)) goto LAB_00e97624;
      uVar34 = uVar34 + 1;
    } while (uVar2 != uVar34);
    uVar34 = 5;
LAB_00e97624:
    lVar185 = (ulong)uVar34 * 4;
    lVar183 = lVar24 + lVar185;
    fVar115 = *(float *)(lVar173 + lVar185) - *(float *)(lVar183 + 0x13a4);
    if (fVar115 < 1e-06) {
      fVar115 = 1.0;
      fVar136 = *(float *)(lVar183 + 0x13c0);
    }
    else {
      fVar136 = *(float *)(lVar183 + 0x13c0);
      fVar115 = (*(float *)(lVar181 + (ulong)uVar34 * 4) - fVar136) / fVar115;
    }
    lVar30 = lVar30 + 4;
    uVar144 = NEON_fmadd(*pfVar27 - *(float *)(lVar183 + 0x13a4),fVar115,fVar136);
    puVar28[3] = uVar144;
    puVar28 = puVar28 + 4;
  } while( true );
  uVar23 = *(undefined8 *)(puVar21 + 0x28);
  if (((uint)uVar23 >> 0x15 & 1) == 0) {
    if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e9766c;
LAB_00e982e8:
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acca,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(puVar21 + 0x28);
    uVar29 = (uint)uVar23;
  }
  else {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ebc5,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(puVar21 + 0x28);
    if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e982e8;
LAB_00e9766c:
    uVar29 = (uint)uVar23;
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar91._0_8_ = (double)*(float *)(*(long *)(param_1 + 0x70) + 0x119c);
    auVar91._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1094f0,pcVar22,
               auVar91,uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(puVar21 + 0x28);
  }
  lVar30 = -0x100;
  do {
    if (((uint)uVar23 >> 0x15 & 1) == 0) {
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e976fc;
LAB_00e97754:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar93._0_8_ = (double)*(float *)(*(long *)(param_1 + 0x70) + lVar30 + 0x12a4);
      auVar93._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1094f0,pcVar22,
                 auVar93,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e977a0;
LAB_00e97700:
      uVar29 = (uint)uVar23;
    }
    else {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar92._0_8_ = (double)*(float *)(*(long *)(param_1 + 0x70) + lVar30 + 0x12a0);
      auVar92._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1094f0,pcVar22,
                 auVar92,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e97754;
LAB_00e976fc:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e97700;
LAB_00e977a0:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar94._0_8_ = (double)*(float *)(*(long *)(param_1 + 0x70) + lVar30 + 0x12a8);
      auVar94._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1094f0,pcVar22,
                 auVar94,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      uVar29 = (uint)uVar23;
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar95._0_8_ = (double)*(float *)(*(long *)(param_1 + 0x70) + lVar30 + 0x12ac);
      auVar95._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1094f0,pcVar22,
                 auVar95,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
    }
    lVar30 = lVar30 + 0x10;
  } while (lVar30 != 0);
  if (((uint)uVar23 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acca,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
  }
  *(undefined4 *)(lVar24 + 0x13e4) = 0;
  *(undefined8 *)(lVar24 + 0x13ac) = 0;
  *puVar18 = 0;
  *(undefined8 *)(lVar24 + 0x13bc) = 0;
  *(undefined8 *)(lVar24 + 0x13b4) = 0;
  *(undefined8 *)(lVar24 + 0x13cc) = 0;
  *(undefined8 *)(lVar24 + 0x13c4) = 0;
  *(undefined8 *)(lVar24 + 0x13dc) = 0;
  *(undefined8 *)(lVar24 + 0x13d4) = 0;
LAB_00e97894:
  lVar24 = *(long *)(param_1 + 0x70);
  pfVar26 = (float *)(lVar24 + 0x17c);
  if (*(float *)(lVar24 + 0x57c) < 1e-06) {
    memcpy(pfVar26,&DAT_001e95d0,0x404);
  }
  memcpy(&DAT_012ed650,pfVar26,0x404);
  fVar115 = 0.0;
  if (1 < *(uint *)(param_1 + 0x1c)) {
    fVar115 = *(float *)(param_2 + 0x11c);
  }
  fVar136 = 1.0 - fVar115;
  if (((float *)((long)&DAT_012ede54 + 3) < pfVar26) || (lVar24 + 0x580U < 0x12eda55)) {
    uVar35 = 0xfffffffffffffff0;
    lVar30 = 0;
    do {
      lVar169 = lVar24 + lVar30;
      auVar117 = *(undefined (*) [16])((long)&DAT_012eda54 + lVar30);
      uVar7 = *(undefined8 *)((long)&DAT_012eda7c + lVar30);
      uVar6 = *(undefined8 *)((long)&DAT_012eda74 + lVar30);
      uVar8 = *(undefined8 *)((long)&DAT_012eda6c + lVar30);
      uVar23 = *(undefined8 *)((long)&DAT_012eda64 + lVar30);
      auVar39 = *(undefined (*) [16])((long)&DAT_012eda84 + lVar30);
      auVar199 = *(undefined (*) [16])((long)&DAT_012eda94 + lVar30);
      auVar220 = *(undefined (*) [16])((long)&DAT_012edac4 + lVar30);
      auVar126 = *(undefined (*) [16])((long)&DAT_012ed650 + lVar30);
      auVar131 = *(undefined (*) [16])((long)&DAT_012ed660 + lVar30);
      auVar150 = *(undefined (*) [16])((long)&DAT_012ed670 + lVar30);
      auVar156 = *(undefined (*) [16])((long)&DAT_012ed680 + lVar30);
      auVar165 = *(undefined (*) [16])((long)&DAT_012edad4 + lVar30);
      auVar210 = *(undefined (*) [16])((long)&DAT_012ed690 + lVar30);
      auVar177 = *(undefined (*) [16])(&DAT_012ed6a0 + lVar30);
      auVar224 = *(undefined (*) [16])((long)&DAT_012edab4 + lVar30);
      auVar223 = *(undefined (*) [16])((long)&DAT_012edaa4 + lVar30);
      *(float *)(lVar169 + 0x18c) = auVar117._8_4_ * fVar136 + auVar126._8_4_ * fVar115;
      *(float *)(lVar169 + 400) = auVar117._12_4_ * fVar136 + auVar126._12_4_ * fVar115;
      *(float *)(lVar169 + 0x17c) = auVar117._0_4_ * fVar136 + auVar126._0_4_ * fVar115;
      *(float *)(lVar169 + 0x180) = auVar117._4_4_ * fVar136 + auVar126._4_4_ * fVar115;
      auVar117 = *(undefined (*) [16])((long)&DAT_012edb14 + lVar30);
      *(ulong *)(lVar169 + 0x1a4) =
           CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar136 + auVar150._12_4_ * fVar115,
                    (float)uVar7 * fVar136 + auVar150._8_4_ * fVar115);
      *(ulong *)(lVar169 + 0x19c) =
           CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar136 + auVar150._4_4_ * fVar115,
                    (float)uVar6 * fVar136 + auVar150._0_4_ * fVar115);
      uVar15 = *(undefined8 *)((long)&DAT_012edafc + lVar30);
      uVar13 = *(undefined8 *)((long)&DAT_012edaf4 + lVar30);
      *(ulong *)(lVar169 + 0x194) =
           CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar136 + auVar131._12_4_ * fVar115,
                    (float)uVar8 * fVar136 + auVar131._8_4_ * fVar115);
      *(ulong *)(lVar169 + 0x18c) =
           CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar136 + auVar131._4_4_ * fVar115,
                    (float)uVar23 * fVar136 + auVar131._0_4_ * fVar115);
      *(float *)(lVar169 + 0x1bc) = auVar39._8_4_ * fVar136 + auVar156._8_4_ * fVar115;
      *(float *)(lVar169 + 0x1c0) = auVar39._12_4_ * fVar136 + auVar156._12_4_ * fVar115;
      *(float *)(lVar169 + 0x1ac) = auVar39._0_4_ * fVar136 + auVar156._0_4_ * fVar115;
      *(float *)(lVar169 + 0x1b0) = auVar39._4_4_ * fVar136 + auVar156._4_4_ * fVar115;
      uVar9 = *(undefined8 *)(lVar30 + 0x12ed6b8);
      uVar23 = *(undefined8 *)(&DAT_012ed6b0 + lVar30);
      auVar39 = *(undefined (*) [16])(&DAT_012ed6c0 + lVar30);
      auVar126 = *(undefined (*) [16])((long)&DAT_012edae4 + lVar30);
      *(float *)(lVar169 + 0x1cc) = auVar199._8_4_ * fVar136 + auVar210._8_4_ * fVar115;
      *(float *)(lVar169 + 0x1d0) = auVar199._12_4_ * fVar136 + auVar210._12_4_ * fVar115;
      *(float *)(lVar169 + 0x1bc) = auVar199._0_4_ * fVar136 + auVar210._0_4_ * fVar115;
      *(float *)(lVar169 + 0x1c0) = auVar199._4_4_ * fVar136 + auVar210._4_4_ * fVar115;
      uVar10 = *(undefined8 *)((long)&DAT_012edb0c + lVar30);
      uVar8 = *(undefined8 *)((long)&DAT_012edb04 + lVar30);
      uVar16 = *(undefined8 *)((long)&DAT_012edb3c + lVar30);
      uVar14 = *(undefined8 *)((long)&DAT_012edb34 + lVar30);
      auVar199 = *(undefined (*) [16])((long)&DAT_012edb24 + lVar30);
      auVar150 = *(undefined (*) [16])(&DAT_012ed6d0 + lVar30);
      auVar131 = *(undefined (*) [16])(&DAT_012ed6e0 + lVar30);
      auVar156 = *(undefined (*) [16])(&DAT_012ed6f0 + lVar30);
      auVar210 = *(undefined (*) [16])(&DAT_012ed700 + lVar30);
      uVar11 = *(undefined8 *)((long)&DAT_012edb4c + lVar30);
      uVar6 = *(undefined8 *)((long)&DAT_012edb44 + lVar30);
      auVar40 = *(undefined (*) [16])(&DAT_012ed710 + lVar30);
      auVar118 = *(undefined (*) [16])(&DAT_012ed720 + lVar30);
      auVar194._0_8_ =
           CONCAT44(auVar117._4_4_ * fVar136 + auVar40._4_4_ * fVar115,
                    auVar117._0_4_ * fVar136 + auVar40._0_4_ * fVar115);
      auVar194._8_4_ = auVar117._8_4_ * fVar136 + auVar40._8_4_ * fVar115;
      auVar194._12_4_ = auVar117._12_4_ * fVar136 + auVar40._12_4_ * fVar115;
      uVar35 = uVar35 + 0x40;
      uVar12 = *(undefined8 *)(lVar30 + 0x12ed738);
      uVar7 = *(undefined8 *)(&DAT_012ed730 + lVar30);
      auVar117 = *(undefined (*) [16])(&DAT_012ed740 + lVar30);
      *(float *)(lVar169 + 0x1dc) = auVar223._8_4_ * fVar136 + auVar177._8_4_ * fVar115;
      *(float *)(lVar169 + 0x1e0) = auVar223._12_4_ * fVar136 + auVar177._12_4_ * fVar115;
      *(float *)(lVar169 + 0x1cc) = auVar223._0_4_ * fVar136 + auVar177._0_4_ * fVar115;
      *(float *)(lVar169 + 0x1d0) = auVar223._4_4_ * fVar136 + auVar177._4_4_ * fVar115;
      *(float *)(lVar169 + 0x1ec) = auVar224._8_4_ * fVar136 + (float)uVar9 * fVar115;
      *(float *)(lVar169 + 0x1f0) =
           auVar224._12_4_ * fVar136 + (float)((ulong)uVar9 >> 0x20) * fVar115;
      *(float *)(lVar169 + 0x1dc) = auVar224._0_4_ * fVar136 + (float)uVar23 * fVar115;
      *(float *)(lVar169 + 0x1e0) =
           auVar224._4_4_ * fVar136 + (float)((ulong)uVar23 >> 0x20) * fVar115;
      auVar205._0_8_ =
           CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar136 + auVar117._4_4_ * fVar115,
                    (float)uVar6 * fVar136 + auVar117._0_4_ * fVar115);
      auVar205._8_4_ = (float)uVar11 * fVar136 + auVar117._8_4_ * fVar115;
      auVar205._12_4_ = (float)((ulong)uVar11 >> 0x20) * fVar136 + auVar117._12_4_ * fVar115;
      *(float *)(lVar169 + 0x1fc) = auVar220._8_4_ * fVar136 + auVar39._8_4_ * fVar115;
      *(float *)(lVar169 + 0x200) = auVar220._12_4_ * fVar136 + auVar39._12_4_ * fVar115;
      *(float *)(lVar169 + 0x1ec) = auVar220._0_4_ * fVar136 + auVar39._0_4_ * fVar115;
      *(float *)(lVar169 + 0x1f0) = auVar220._4_4_ * fVar136 + auVar39._4_4_ * fVar115;
      *(float *)(lVar169 + 0x20c) = auVar165._8_4_ * fVar136 + auVar150._8_4_ * fVar115;
      *(float *)(lVar169 + 0x210) = auVar165._12_4_ * fVar136 + auVar150._12_4_ * fVar115;
      *(float *)(lVar169 + 0x1fc) = auVar165._0_4_ * fVar136 + auVar150._0_4_ * fVar115;
      *(float *)(lVar169 + 0x200) = auVar165._4_4_ * fVar136 + auVar150._4_4_ * fVar115;
      *(float *)(lVar169 + 0x21c) = auVar126._8_4_ * fVar136 + auVar131._8_4_ * fVar115;
      *(float *)(lVar169 + 0x220) = auVar126._12_4_ * fVar136 + auVar131._12_4_ * fVar115;
      *(float *)(lVar169 + 0x20c) = auVar126._0_4_ * fVar136 + auVar131._0_4_ * fVar115;
      *(float *)(lVar169 + 0x210) = auVar126._4_4_ * fVar136 + auVar131._4_4_ * fVar115;
      *(float *)(lVar169 + 0x22c) = (float)uVar15 * fVar136 + auVar156._8_4_ * fVar115;
      *(float *)(lVar169 + 0x230) =
           (float)((ulong)uVar15 >> 0x20) * fVar136 + auVar156._12_4_ * fVar115;
      *(float *)(lVar169 + 0x21c) = (float)uVar13 * fVar136 + auVar156._0_4_ * fVar115;
      *(float *)(lVar169 + 0x220) =
           (float)((ulong)uVar13 >> 0x20) * fVar136 + auVar156._4_4_ * fVar115;
      *(float *)(lVar169 + 0x23c) = (float)uVar10 * fVar136 + auVar210._8_4_ * fVar115;
      *(float *)(lVar169 + 0x240) =
           (float)((ulong)uVar10 >> 0x20) * fVar136 + auVar210._12_4_ * fVar115;
      *(float *)(lVar169 + 0x22c) = (float)uVar8 * fVar136 + auVar210._0_4_ * fVar115;
      *(float *)(lVar169 + 0x230) =
           (float)((ulong)uVar8 >> 0x20) * fVar136 + auVar210._4_4_ * fVar115;
      *(long *)(lVar169 + 0x244) = auVar194._8_8_;
      *(undefined8 *)(lVar169 + 0x23c) = auVar194._0_8_;
      *(float *)(lVar169 + 0x25c) = auVar199._8_4_ * fVar136 + auVar118._8_4_ * fVar115;
      *(float *)(lVar169 + 0x260) = auVar199._12_4_ * fVar136 + auVar118._12_4_ * fVar115;
      *(float *)(lVar169 + 0x24c) = auVar199._0_4_ * fVar136 + auVar118._0_4_ * fVar115;
      *(float *)(lVar169 + 0x250) = auVar199._4_4_ * fVar136 + auVar118._4_4_ * fVar115;
      *(float *)(lVar169 + 0x26c) = (float)uVar16 * fVar136 + (float)uVar12 * fVar115;
      *(float *)(lVar169 + 0x270) =
           (float)((ulong)uVar16 >> 0x20) * fVar136 + (float)((ulong)uVar12 >> 0x20) * fVar115;
      *(float *)(lVar169 + 0x25c) = (float)uVar14 * fVar136 + (float)uVar7 * fVar115;
      *(float *)(lVar169 + 0x260) =
           (float)((ulong)uVar14 >> 0x20) * fVar136 + (float)((ulong)uVar7 >> 0x20) * fVar115;
      *(long *)(lVar169 + 0x274) = auVar205._8_8_;
      *(undefined8 *)(lVar169 + 0x26c) = auVar205._0_8_;
      lVar30 = lVar30 + 0x100;
    } while (uVar35 < 0xf0);
    uVar144 = NEON_fmadd(fVar115,DAT_012eda50,fVar136 * DAT_012ede54);
    *(undefined4 *)(lVar24 + 0x57c) = uVar144;
  }
  else {
    lVar30 = 0;
    while( true ) {
      puVar28 = (undefined4 *)(lVar24 + 0x17c + lVar30);
      uVar144 = NEON_fmadd(fVar115,*(undefined4 *)((long)&DAT_012ed650 + lVar30),
                           fVar136 * *(float *)((long)&DAT_012eda54 + lVar30));
      *puVar28 = uVar144;
      if (lVar30 == 0x400) break;
      uVar144 = NEON_fmadd(fVar115,*(undefined4 *)((long)&DAT_012ed654 + lVar30),
                           fVar136 * *(float *)((long)&DAT_012eda58 + lVar30));
      puVar28[1] = uVar144;
      uVar144 = NEON_fmadd(fVar115,*(undefined4 *)((long)&DAT_012ed658 + lVar30),
                           fVar136 * *(float *)((long)&DAT_012eda5c + lVar30));
      puVar28[2] = uVar144;
      uVar144 = NEON_fmadd(fVar115,*(undefined4 *)((long)&DAT_012ed65c + lVar30),
                           fVar136 * *(float *)((long)&DAT_012eda60 + lVar30));
      puVar28[3] = uVar144;
      lVar30 = lVar30 + 0x10;
    }
  }
  uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  uVar29 = (uint)uVar23;
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11006c,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar29 = (uint)uVar23;
  }
  if ((uVar29 >> 0x15 & 1) == 0) {
    uVar29 = (uint)uVar23;
  }
  else {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ef8,pcVar22,
               uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar29 = (uint)uVar23;
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
    uVar23 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    auVar96._0_8_ = (double)*pfVar26;
    auVar96._8_8_ = 0;
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f82b,pcVar22,
               auVar96,uVar23,"KNP_bhist_for_gtm");
    uVar23 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  puVar21 = PTR_g_logInfo_010f56f8;
  pfVar26 = (float *)(lVar24 + 0x19c);
  lVar24 = 0x100;
  do {
    if (((uint)uVar23 >> 0x15 & 1) == 0) {
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e97c38;
LAB_00e97c98:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar98._0_8_ = (double)pfVar26[-6];
      auVar98._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f82b,pcVar22,
                 auVar98,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e97cdc;
LAB_00e97c3c:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e97c40;
LAB_00e97d20:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar100._0_8_ = (double)pfVar26[-4];
      auVar100._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f82b,pcVar22,
                 auVar100,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e97d64;
LAB_00e97c44:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e97c48;
LAB_00e97da8:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar102._0_8_ = (double)pfVar26[-2];
      auVar102._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f82b,pcVar22,
                 auVar102,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e97dec;
LAB_00e97c4c:
      uVar29 = (uint)uVar23;
    }
    else {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar97._0_8_ = (double)pfVar26[-7];
      auVar97._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f82b,pcVar22,
                 auVar97,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e97c98;
LAB_00e97c38:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e97c3c;
LAB_00e97cdc:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar99._0_8_ = (double)pfVar26[-5];
      auVar99._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f82b,pcVar22,
                 auVar99,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e97d20;
LAB_00e97c40:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e97c44;
LAB_00e97d64:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar101._0_8_ = (double)pfVar26[-3];
      auVar101._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f82b,pcVar22,
                 auVar101,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      if (((uint)uVar23 >> 0x15 & 1) != 0) goto LAB_00e97da8;
LAB_00e97c48:
      if (((uint)uVar23 >> 0x15 & 1) == 0) goto LAB_00e97c4c;
LAB_00e97dec:
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar103._0_8_ = (double)pfVar26[-1];
      auVar103._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f82b,pcVar22,
                 auVar103,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
      uVar29 = (uint)uVar23;
    }
    if ((uVar29 >> 0x15 & 1) != 0) {
      pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
      uVar23 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      auVar104._0_8_ = (double)*pfVar26;
      auVar104._8_8_ = 0;
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x14f82b,pcVar22,
                 auVar104,uVar23,"KNP_bhist_for_gtm");
      uVar23 = *(undefined8 *)(puVar21 + 0x28);
    }
    pfVar26 = pfVar26 + 8;
    lVar24 = lVar24 + -8;
    if (lVar24 == 0) {
      if (((uint)uVar23 >> 0x15 & 1) == 0) {
        if (*(long *)(lVar5 + 0x28) == local_b0) {
          return;
        }
      }
      else {
        pcVar22 = (char *)CamX::Log::GroupToString(0x200000);
        uVar23 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        if (*(long *)(lVar5 + 0x28) == local_b0) {
          CamX::Log::LogSystem
                    ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ef8,pcVar22
                     ,uVar23,"KNP_bhist_for_gtm");
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


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
  if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1e1636,pcVar17,
               uVar18,"update_ihist_based_curve",&DAT_010fb780);
  }
  uVar11 = _UNK_001e4168;
  uVar10 = _DAT_001e4160;
  uVar45 = _UNK_001e4158;
  uVar19 = _DAT_001e4150;
  uVar18 = _DAT_001e3990;
  if (*(float *)(lVar35 + 0x129c) < 1e-06) {
    *(undefined8 *)(lVar35 + 0x11a8) = _UNK_001e3998;
    *(undefined8 *)(lVar35 + 0x11a0) = uVar18;
    uVar13 = _UNK_001e4498;
    uVar12 = _DAT_001e4490;
    *(undefined8 *)(lVar35 + 0x11b8) = uVar45;
    *(undefined8 *)(lVar35 + 0x11b0) = uVar19;
    uVar19 = _UNK_001e40b8;
    uVar18 = _DAT_001e40b0;
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
    uVar18 = _DAT_001e3af0;
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
    uVar18 = _DAT_001e3aa0;
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
    uVar18 = _DAT_001e3b70;
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
  puVar15 = PTR_g_logInfo_010f56f8;
  *(undefined4 *)(lVar36 + 0x13f8) = *(undefined4 *)(param_2 + 0x110);
  uVar18 = *(undefined8 *)(puVar15 + 0x28);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a321,pcVar17,
               (double)*(float *)(lVar36 + 0x13e8),(double)*(float *)(lVar36 + 0x13ec),
               (double)*(float *)(lVar36 + 0x13f0),(double)*(float *)(lVar36 + 0x13f4),
               (double)*(float *)(lVar36 + 0x13f8),uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116d5a,pcVar17,
               uVar18,"cumsum_clhe");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc802,pcVar17,
               uVar18,"cumsum_clhe");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
               (double)DAT_010fb780,uVar18,"cumsum_clhe");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)pfVar27[-2],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8d420;
LAB_00e8d47c:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)pfVar27[-1],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8d424;
LAB_00e8d4c8:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)*pfVar27,uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8d428;
LAB_00e8d514:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)pfVar27[1],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37c7,pcVar17,
                 (double)pfVar27[2],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    lVar36 = lVar36 + -5;
    pfVar27 = pfVar27 + 5;
  } while (lVar36 != 0);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
        if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
          pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
          uVar18 = CamX::Log::GetFileName
                             (
                             "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                             );
          CamX::Log::LogSystem
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
       (bVar5 = PTR_g_logInfo_010f56f8[0x2a], pfVar27[1] = (fVar41 - fVar49) - fVar50,
       (bVar5 >> 5 & 1) != 0)) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
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
        if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
          pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
          uVar18 = CamX::Log::GetFileName
                             (
                             "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                             );
          CamX::Log::LogSystem
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
       (bVar5 = PTR_g_logInfo_010f56f8[0x2a], *pfVar26 = (fVar41 - fVar40) - fVar50,
       (bVar5 >> 5 & 1) != 0)) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b970,pcVar17,
                 uVar18,"cumsum_clhe",uVar37 & 0xffffffff);
    }
    pfVar27 = pfVar26;
  } while (uVar37 != 0x100);
  if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
  uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be288,pcVar17,
               uVar18,"cumsum_clhe");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  pfVar27 = (float *)&DAT_012eda70;
  lVar36 = 0x100;
  while( true ) {
    if (((uint)uVar18 >> 0x15 & 1) != 0) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-7],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-6],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbec;
LAB_00e8dc50:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-5],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbf0;
LAB_00e8dc9c:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-4],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbf4;
LAB_00e8dce8:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-3],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbf8;
LAB_00e8dd34:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-2],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8dbfc;
LAB_00e8dd80:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)pfVar27[-1],uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da70b,pcVar17,
                 (double)*pfVar27,uVar18,"cumsum_clhe");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    pfVar27 = pfVar27 + 8;
    lVar36 = lVar36 + -8;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
  uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  iVar22 = iVar25;
  if (0x3f < iVar25) {
    iVar22 = 0x40;
  }
  if (0x3e < iVar25) {
    iVar25 = 0x3f;
  }
  fVar50 = (float)NEON_fnmsub(fVar42,0x42800000,(float)iVar22);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar42,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar25 + 1),iVar22);
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar70,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar22 + 1),iVar25);
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar46,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar25 + 1),iVar22);
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar40,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar22 + 1),iVar25);
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172e9c,pcVar17,
               (double)fVar50,(double)fVar47,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone",
               (ulong)(iVar25 + 1),iVar22);
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d2a,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa582,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)*pfVar27,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[1],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[2],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[3],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[4],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[5],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x172ede,pcVar17,
               (double)pfVar27[6],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa582,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c4fc7,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124b65,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,0,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar47,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar40,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar46,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar70,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               (double)fVar42,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d5b,pcVar17,
               0x3ff0000000000000,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124b65,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da725,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x15df8b,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
               (double)*(float *)__src,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)((long)puVar30 + -0x1c),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebd0;
LAB_00e8ec38:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)(puVar30 + -3),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebd4;
LAB_00e8ec84:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)((long)puVar30 + -0x14),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebd8;
LAB_00e8ecd0:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)(puVar30 + -2),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebdc;
LAB_00e8ed1c:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)((long)puVar30 + -0xc),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebe0;
LAB_00e8ed68:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)(puVar30 + -1),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8ebe4;
LAB_00e8edb4:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)((long)puVar30 + -4),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19c8ca,pcVar17,
                 (double)*(float *)puVar30,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    puVar30 = puVar30 + 4;
    lVar36 = lVar36 + -8;
  } while (lVar36 != 0);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
  uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  uVar23 = (uint)uVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b717d,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954af,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)*pfVar27,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[1],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[2],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[3],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[4],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[5],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954c7,pcVar17,
               (double)pfVar27[6],uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1954af,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3b5c,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be2c4,pcVar17,
               uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
               (double)*(float *)__src,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)((long)puVar30 + -0x1c),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1b4;
LAB_00e8f21c:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)(puVar30 + -3),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1b8;
LAB_00e8f268:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)((long)puVar30 + -0x14),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1bc;
LAB_00e8f2b4:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)(puVar30 + -2),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1c0;
LAB_00e8f300:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)((long)puVar30 + -0xc),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1c4;
LAB_00e8f34c:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)(puVar30 + -1),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e8f1c8;
LAB_00e8f398:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)((long)puVar30 + -4),uVar18,
                 "counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x148d75,pcVar17,
                 (double)*(float *)puVar30,uVar18,"counteract_ipe_gamma_and_compensate_mid_tone");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    puVar30 = puVar30 + 4;
    lVar36 = lVar36 + -8;
  } while (lVar36 != 0);
  if (((uint)uVar18 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
    if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
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
      if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        fVar49 = *(float *)(param_2 + 0x58 + uVar34 * 4);
        fVar46 = (float)NEON_fmadd(fVar49,0x437f0000,0x3f000000);
        CamX::Log::LogSystem
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
    puVar15 = PTR_g_logInfo_010f56f8;
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
  uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x181081,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b7d1,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)fVar41,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)fVar41,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)local_110[2],uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)local_110[3],uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)local_110[4],uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)local_110[5],uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)fVar70,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1a3a4e,pcVar17,
               (double)fVar70,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(puVar15 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b7d1,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  auVar61 = NEON_fmov(0x3f800000,4);
  uVar18 = NEON_fmov(0x3f800000,4);
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
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x188202,pcVar17,
               uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1094c5,pcVar17,
               uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar46,uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar46,uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar41,uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar70,uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar51,uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar47,uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar40,uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc81a,pcVar17,
               (double)fVar40,uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1094c5,pcVar17,
               uVar19,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  fVar53 = *(float *)(param_2 + 0x5c);
  fVar42 = fVar42 + 1.0;
  DAT_012ed634 = powf((fVar53 + *(float *)(param_2 + 0x58)) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)DAT_012ed634,uVar19,"generate_ihist_based_ltm_lce_curve",1);
    fVar53 = *(float *)(param_2 + 0x5c);
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  fVar55 = *(float *)(param_2 + 0x60);
  DAT_012ed638 = powf((fVar55 + fVar53) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)DAT_012ed638,uVar19,"generate_ihist_based_ltm_lce_curve",2);
    fVar55 = *(float *)(param_2 + 0x60);
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  fVar53 = *(float *)(param_2 + 100);
  DAT_012ed63c = powf((fVar53 + fVar55) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)DAT_012ed63c,uVar19,"generate_ihist_based_ltm_lce_curve",3);
    fVar53 = *(float *)(param_2 + 100);
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  fVar55 = *(float *)(param_2 + 0x68);
  DAT_012ed640 = powf((fVar55 + fVar53) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)DAT_012ed640,uVar19,"generate_ihist_based_ltm_lce_curve",4);
    fVar55 = *(float *)(param_2 + 0x68);
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  fVar53 = *(float *)(param_2 + 0x6c);
  DAT_012ed644._0_4_ = powf((fVar53 + fVar55) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x141162,pcVar17,
               (double)(float)DAT_012ed644,uVar19,"generate_ihist_based_ltm_lce_curve",5);
    fVar53 = *(float *)(param_2 + 0x6c);
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  DAT_012ed644._4_4_ = powf((*(float *)(param_2 + 0x70) + fVar53) * 0.5,fVar42);
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar19 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
  uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa59a,pcVar17,
               (double)fVar50,uVar18,"generate_ihist_based_ltm_lce_curve",8);
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124b7d,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da75a,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)local_f0[0],uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar42,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar53,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar55,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar58,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar64,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               (double)fVar67,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13acaf,pcVar17,
               0x3ff0000000000000,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da75a,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11000a,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0dcc,pcVar17,
               uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed630,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed634,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed638,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed63c,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed640,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)(float)DAT_012ed644,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed644._4_4_,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71b9,pcVar17,
               (double)DAT_012ed64c,uVar18,"generate_ihist_based_ltm_lce_curve");
    uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
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
  uVar18 = *(undefined8 *)(lVar35 + 0x11ac);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x11cc);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x11dc);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x11ec);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x11fc);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x120c);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x121c);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x122c);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x123c);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x124c);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x125c);
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
  uVar18 = *(undefined8 *)*(undefined (*) [16])(lVar35 + 0x126c);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x127c);
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
  uVar18 = *(undefined8 *)(lVar35 + 0x128c);
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
  uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133ccd,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124baf,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
               (double)DAT_010fb780,uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)pfVar27[-2],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e905b0;
LAB_00e9060c:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)pfVar27[-1],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e905b4;
LAB_00e90658:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)*pfVar27,uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e905b8;
LAB_00e906a4:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)pfVar27[1],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b0de5,pcVar17,
                 (double)pfVar27[2],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    lVar36 = lVar36 + -5;
    pfVar27 = pfVar27 + 5;
  } while (lVar36 != 0);
  uVar23 = (uint)uVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124baf,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b71d4,pcVar17,
               (double)fVar42,uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc835,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x156f5c,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
               (double)*(float *)__src,uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)((long)puVar39 + -0x1c),uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907ec;
LAB_00e90854:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)(puVar39 + -3),uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907f0;
LAB_00e908a0:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)((long)puVar39 + -0x14),uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907f4;
LAB_00e908ec:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)(puVar39 + -2),uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907f8;
LAB_00e90938:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)((long)puVar39 + -0xc),uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e907fc;
LAB_00e90984:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)(puVar39 + -1),uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90800;
LAB_00e909d0:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)((long)puVar39 + -4),uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x116da9,pcVar17,
                 (double)*(float *)puVar39,uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    puVar39 = puVar39 + 4;
    lVar36 = lVar36 + -8;
  } while (lVar36 != 0);
  uVar23 = (uint)uVar18;
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x156f5c,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18eb7d,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) == 0) {
    uVar23 = (uint)uVar18;
  }
  else {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c4ff9,pcVar17,
               uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    uVar23 = (uint)uVar18;
  }
  if ((uVar23 >> 0x15 & 1) != 0) {
    pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
    uVar18 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
               (double)*__src_00,uVar18,"update_ihist_based_curve");
    uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
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
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-7],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b10;
LAB_00e90b78:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-6],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b14;
LAB_00e90bc4:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-5],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b18;
LAB_00e90c10:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-4],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b1c;
LAB_00e90c5c:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-3],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b20;
LAB_00e90ca8:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-2],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      if (((uint)uVar18 >> 0x15 & 1) == 0) goto LAB_00e90b24;
LAB_00e90cf4:
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)pfVar26[-1],uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      uVar23 = (uint)uVar18;
    }
    if ((uVar23 >> 0x15 & 1) != 0) {
      pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
      uVar18 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124bc8,pcVar17,
                 (double)*pfVar26,uVar18,"update_ihist_based_curve");
      uVar18 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    }
    uVar23 = (uint)uVar18;
    pfVar26 = pfVar26 + 8;
    lVar36 = lVar36 + -8;
    if (lVar36 == 0) {
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c4ff9,pcVar17,
                   uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da773,pcVar17,
                   uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ebac,pcVar17,
                   uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)puVar4,uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13a8),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13ac),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13b0),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13b4),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13b8),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13bc),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13c0),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13c4),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13c8),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13cc),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13d0),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13d4),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13d8),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13dc),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13e0),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) != 0) {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b952,pcVar17,
                   (double)*(float *)(lVar35 + 0x13e4),uVar18,"update_ihist_based_curve");
        uVar23 = (uint)*(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      if ((uVar23 >> 0x15 & 1) == 0) {
        if (*(long *)(lVar7 + 0x28) == local_b0) {
          return;
        }
      }
      else {
        pcVar17 = (char *)CamX::Log::GroupToString(0x200000);
        uVar18 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        if (*(long *)(lVar7 + 0x28) == local_b0) {
          CamX::Log::LogSystem
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


// ===== 0xd9fd50 FUN_00e9fd50 @ 00e9fd50

void FUN_00e9fd50(float param_1,long param_2,long param_3,undefined4 *param_4,undefined4 *param_5,
                 float *param_6,int param_7)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_6;
  fVar2 = param_6[1];
  *param_4 = 0;
  fVar4 = *(float *)(param_3 + 4);
  fVar3 = 0.9995;
  if (fVar4 < 0.9995) {
    fVar3 = fVar4;
  }
  fVar5 = 0.0001;
  if (0.0001 < fVar4) {
    fVar5 = fVar3;
  }
  param_4[1] = fVar5;
  fVar4 = *(float *)(param_3 + 8);
  fVar3 = 0.9996;
  if (fVar4 < 0.9996) {
    fVar3 = fVar4;
  }
  fVar7 = fVar5 + 0.0001;
  if (fVar5 + 0.0001 < fVar4) {
    fVar7 = fVar3;
  }
  param_4[2] = fVar7;
  fVar4 = *(float *)(param_3 + 0xc);
  fVar3 = 0.9997;
  if (fVar4 < 0.9997) {
    fVar3 = fVar4;
  }
  fVar5 = fVar7 + 0.0001;
  if (fVar7 + 0.0001 < fVar4) {
    fVar5 = fVar3;
  }
  param_4[3] = fVar5;
  fVar4 = *(float *)(param_3 + 0x10);
  fVar3 = 0.9998;
  if (fVar4 < 0.9998) {
    fVar3 = fVar4;
  }
  fVar7 = fVar5 + 0.0001;
  if (fVar5 + 0.0001 < fVar4) {
    fVar7 = fVar3;
  }
  param_4[4] = fVar7;
  fVar4 = *(float *)(param_3 + 0x14);
  param_4[6] = 0x3f800000;
  fVar3 = 0.9999;
  if (fVar4 < 0.9999) {
    fVar3 = fVar4;
  }
  fVar5 = fVar7 + 0.0001;
  if (fVar7 + 0.0001 < fVar4) {
    fVar5 = fVar3;
  }
  param_4[5] = fVar5;
  *param_5 = 0;
  if (param_7 == 1) {
    fVar2 = *(float *)(param_3 + 4);
    fVar3 = 0.9995;
    if (fVar2 < 0.9995) {
      fVar3 = fVar2;
    }
    fVar4 = 0.0001;
    if (0.0001 < fVar2) {
      fVar4 = fVar3;
    }
    param_5[1] = fVar4;
    fVar2 = *(float *)(param_3 + 8);
    fVar3 = 0.9996;
    if (fVar2 < 0.9996) {
      fVar3 = fVar2;
    }
    fVar6 = fVar4 + 0.0001;
    if (fVar4 + 0.0001 < fVar2) {
      fVar6 = fVar3;
    }
    param_5[2] = fVar6;
    fVar2 = *(float *)(param_3 + 0xc);
    fVar3 = 0.9997;
    if (fVar2 < 0.9997) {
      fVar3 = fVar2;
    }
    fVar4 = fVar6 + 0.0001;
    if (fVar6 + 0.0001 < fVar2) {
      fVar4 = fVar3;
    }
    param_5[3] = fVar4;
    fVar2 = *(float *)(param_3 + 0x10);
    fVar3 = 0.9998;
    if (fVar2 < 0.9998) {
      fVar3 = fVar2;
    }
    fVar6 = fVar4 + 0.0001;
    if (fVar4 + 0.0001 < fVar2) {
      fVar6 = fVar3;
    }
    param_5[4] = fVar6;
    fVar2 = *(float *)(param_3 + 0x14);
    fVar3 = 0.9999;
    if (fVar2 < 0.9999) {
      fVar3 = fVar2;
    }
    fVar4 = fVar6 + 0.0001;
    if (fVar6 + 0.0001 < fVar2) {
      fVar4 = fVar3;
    }
    param_5[5] = fVar4;
  }
  else {
    fVar2 = powf(fVar2,param_1);
    fVar4 = powf(fVar6,param_1);
    uVar1 = *(uint *)(param_2 + 0x60);
    fVar4 = fVar4 * (float)param_4[1];
    fVar3 = 0.9995;
    if (fVar4 < 0.9995) {
      fVar3 = fVar4;
    }
    fVar6 = 0.0001;
    if (0.0001 < fVar4) {
      fVar6 = fVar3;
    }
    param_5[1] = fVar6;
    fVar2 = fVar2 * (float)param_4[2];
    fVar3 = 0.9996;
    if (fVar2 < 0.9996) {
      fVar3 = fVar2;
    }
    fVar4 = fVar6 + 0.0001;
    if (fVar6 + 0.0001 < fVar2) {
      fVar4 = fVar3;
    }
    param_5[2] = fVar4;
    if (uVar1 < 2) {
      fVar2 = (float)param_4[3];
      fVar3 = powf(param_6[2],param_1);
      fVar2 = fVar2 * fVar3;
      fVar3 = 0.9997;
      if (fVar2 < 0.9997) {
        fVar3 = fVar2;
      }
      fVar6 = fVar4 + 0.0001;
      if (fVar4 + 0.0001 < fVar2) {
        fVar6 = fVar3;
      }
      param_5[3] = fVar6;
      fVar2 = (float)param_4[4];
      fVar3 = powf(param_6[3],param_1);
      fVar2 = fVar2 * fVar3;
      fVar3 = 0.9998;
      if (fVar2 < 0.9998) {
        fVar3 = fVar2;
      }
      fVar4 = fVar6 + 0.0001;
      if (fVar6 + 0.0001 < fVar2) {
        fVar4 = fVar3;
      }
      param_5[4] = fVar4;
      fVar2 = (float)param_4[5];
      fVar3 = powf(param_6[4],param_1);
      fVar2 = fVar2 * fVar3;
      fVar3 = 0.9999;
      if (fVar2 < 0.9999) {
        fVar3 = fVar2;
      }
      fVar6 = fVar4 + 0.0001;
      if (fVar4 + 0.0001 < fVar2) {
        fVar6 = fVar3;
      }
      param_5[5] = fVar6;
    }
    else {
      fVar2 = *(float *)(param_3 + 0xc);
      fVar3 = 0.9997;
      if (fVar2 < 0.9997) {
        fVar3 = fVar2;
      }
      fVar6 = fVar4 + 0.0001;
      if (fVar4 + 0.0001 < fVar2) {
        fVar6 = fVar3;
      }
      param_5[3] = fVar6;
      fVar2 = *(float *)(param_3 + 0x10);
      fVar3 = 0.9998;
      if (fVar2 < 0.9998) {
        fVar3 = fVar2;
      }
      fVar4 = fVar6 + 0.0001;
      if (fVar6 + 0.0001 < fVar2) {
        fVar4 = fVar3;
      }
      param_5[4] = fVar4;
      fVar2 = *(float *)(param_3 + 0x14);
      fVar3 = 0.9999;
      if (fVar2 < 0.9999) {
        fVar3 = fVar2;
      }
      fVar6 = fVar4 + 0.0001;
      if (fVar4 + 0.0001 < fVar2) {
        fVar6 = fVar3;
      }
      param_5[5] = fVar6;
    }
  }
  param_5[6] = 0x3f800000;
  return;
}


// ===== 0xd9fa30 FUN_00e9fa30 @ 00e9fa30

void FUN_00e9fa30(float *param_1,float *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  float fVar3;
  float fVar4;
  undefined auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined auVar23 [16];
  float fVar24;
  
  fVar7 = param_1[1] - *param_1;
  fVar15 = param_1[2] - param_1[1];
  fVar17 = param_1[3] - param_1[2];
  fVar13 = param_1[4] - param_1[3];
  fVar12 = param_1[6] - param_1[5];
  fVar3 = fVar7 + fVar15 + fVar15;
  fVar8 = fVar7 + fVar7 + fVar15;
  fVar20 = (param_2[2] - param_2[1]) / fVar15;
  fVar18 = (param_2[3] - param_2[2]) / fVar17;
  fVar21 = fVar17 + fVar17 + fVar13;
  fVar6 = fVar17 + fVar13 + fVar13;
  fVar14 = (param_2[4] - param_2[3]) / fVar13;
  fVar9 = param_1[5] - param_1[4];
  fVar24 = fVar15 + fVar17 + fVar17;
  fVar4 = fVar13 + fVar13 + fVar9;
  fVar10 = (param_2[5] - param_2[4]) / fVar9;
  fVar11 = fVar15 + fVar15 + fVar17;
  fVar16 = (param_2[6] - param_2[5]) / fVar12;
  fVar3 = (fVar8 + fVar3) / (fVar3 / ((param_2[1] - *param_2) / fVar7) + fVar8 / fVar20);
  fVar8 = fVar13 + fVar9 + fVar9;
  fVar22 = fVar9 + fVar12 + fVar12;
  fVar7 = (fVar11 + fVar24) / (fVar24 / fVar20 + fVar11 / fVar18);
  fVar24 = fVar9 + fVar9 + fVar12;
  fVar6 = (fVar21 + fVar6) / (fVar6 / fVar18 + fVar21 / fVar14);
  fVar8 = (fVar4 + fVar8) / (fVar8 / fVar14 + fVar4 / fVar10);
  fVar11 = (float)NEON_fnmsub(fVar22,fVar16,fVar12 * fVar10);
  fVar4 = (fVar24 + fVar22) / (fVar22 / fVar10 + fVar24 / fVar16);
  fVar11 = fVar11 / (fVar9 + fVar12);
  if (((0.0 <= fVar10 * fVar16) || (fVar21 = fVar16 * 3.0, ABS(fVar11) <= ABS(fVar16 * 3.0))) &&
     (fVar21 = 0.0, 0.0 <= fVar16 * fVar11)) {
    fVar21 = fVar11;
  }
  fVar22 = (float)NEON_fnmsub(fVar20,0x40400000,fVar3 + fVar3);
  fVar24 = (float)NEON_fnmsub(fVar18,0x40400000,fVar7 + fVar7);
  fVar11 = (((fVar3 - (fVar20 + fVar20)) + fVar7) / fVar15) / fVar15;
  fVar20 = (float)NEON_fnmsub(fVar14,0x40400000,fVar6 + fVar6);
  fVar15 = (fVar22 - fVar7) / fVar15;
  fVar22 = (fVar24 - fVar6) / fVar17;
  fVar17 = (((fVar7 - (fVar18 + fVar18)) + fVar6) / fVar17) / fVar17;
  fVar24 = (((fVar6 - (fVar14 + fVar14)) + fVar8) / fVar13) / fVar13;
  fVar13 = (fVar20 - fVar8) / fVar13;
  fVar18 = (float)NEON_fnmsub(fVar16,0x40400000,fVar4 + fVar4);
  fVar20 = (float)NEON_fnmsub(fVar10,0x40400000,fVar8 + fVar8);
  fVar14 = (((fVar8 - (fVar10 + fVar10)) + fVar4) / fVar9) / fVar9;
  fVar9 = (fVar20 - fVar4) / fVar9;
  fVar10 = (fVar18 - fVar21) / fVar12;
  fVar12 = (((fVar4 - (fVar16 + fVar16)) + fVar21) / fVar12) / fVar12;
  if (param_4 == 1) {
    uVar1 = NEON_scvtf(CONCAT44((int)(float)(int)(fVar17 * 10000.0),
                                (int)(float)(int)(fVar22 * 10000.0)),4);
    auVar19._4_4_ = (int)(float)(int)(fVar4 * 10000.0);
    auVar19._0_4_ = (int)(float)(int)(fVar14 * 10000.0);
    auVar19._8_4_ = (int)(float)(int)(fVar10 * 10000.0);
    auVar19._12_4_ = (int)(float)(int)(fVar12 * 10000.0);
    auVar23 = NEON_scvtf(auVar19,4);
    *(float *)(param_3 + 3) = (float)(int)(float)(int)(fVar6 * 10000.0) / 10000.0;
    auVar5._4_4_ = (int)(float)(int)(fVar15 * 10000.0);
    auVar5._0_4_ = (int)(float)(int)(fVar3 * 10000.0);
    auVar5._8_4_ = (int)(float)(int)(fVar11 * 10000.0);
    auVar5._12_4_ = (int)(float)(int)(fVar7 * 10000.0);
    auVar5 = NEON_scvtf(auVar5,4);
    auVar2._4_4_ = (int)(float)(int)(fVar24 * 10000.0);
    auVar2._0_4_ = (int)(float)(int)(fVar13 * 10000.0);
    auVar2._8_4_ = (int)(float)(int)(fVar8 * 10000.0);
    auVar2._12_4_ = (int)(float)(int)(fVar9 * 10000.0);
    auVar19 = NEON_scvtf(auVar2,4);
    param_3[2] = CONCAT44((float)((ulong)uVar1 >> 0x20) / 10000.0,(float)uVar1 / 10000.0);
    param_3[1] = CONCAT44(auVar5._12_4_ / 10000.0,auVar5._8_4_ / 10000.0);
    *param_3 = CONCAT44(auVar5._4_4_ / 10000.0,auVar5._0_4_ / 10000.0);
    *(ulong *)((long)param_3 + 0x24) = CONCAT44(auVar19._12_4_ / 10000.0,auVar19._8_4_ / 10000.0);
    *(ulong *)((long)param_3 + 0x1c) = CONCAT44(auVar19._4_4_ / 10000.0,auVar19._0_4_ / 10000.0);
    *(ulong *)((long)param_3 + 0x34) = CONCAT44(auVar23._12_4_ / 10000.0,auVar23._8_4_ / 10000.0);
    *(ulong *)((long)param_3 + 0x2c) = CONCAT44(auVar23._4_4_ / 10000.0,auVar23._0_4_ / 10000.0);
    return;
  }
  *(float *)param_3 = fVar3;
  *(float *)((long)param_3 + 4) = fVar15;
  *(float *)(param_3 + 1) = fVar11;
  *(float *)((long)param_3 + 0xc) = fVar7;
  param_3[2] = CONCAT44(fVar17,fVar22);
  *(float *)(param_3 + 3) = fVar6;
  *(ulong *)((long)param_3 + 0x24) = CONCAT44(fVar9,fVar8);
  *(ulong *)((long)param_3 + 0x1c) = CONCAT44(fVar24,fVar13);
  *(ulong *)((long)param_3 + 0x34) = CONCAT44(fVar12,fVar10);
  *(ulong *)((long)param_3 + 0x2c) = CONCAT44(fVar4,fVar14);
  return;
}


