// ===== 0xd98340 FUN_00e98340 @ 00e98340

/* WARNING: Type propagation algorithm not settling */

void FUN_00e98340(long *param_1,float *param_2,long param_3,long *param_4)

{
  ushort uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  long lVar10;
  float *pfVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  float *pfVar15;
  undefined8 uVar16;
  void *pvVar17;
  ushort uVar18;
  uint uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  float *pfVar29;
  float *pfVar30;
  ulong uVar31;
  undefined4 *puVar32;
  ulong uVar33;
  uint *puVar34;
  long lVar35;
  undefined4 *puVar36;
  long lVar37;
  undefined *puVar38;
  float *pfVar39;
  undefined4 *puVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  double dVar48;
  float fVar49;
  float fVar51;
  undefined8 uVar50;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  float fVar61;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar62;
  float fVar63;
  float fVar66;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar67;
  float fVar68;
  undefined4 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  float fVar77;
  float fVar79;
  undefined8 uVar78;
  undefined8 uVar80;
  float fVar81;
  float fVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  float fVar85;
  undefined auVar86 [16];
  undefined8 in_stack_ffffffffffffff30;
  int local_78;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  if (((param_1 == (long *)0x0) || (param_2 == (float *)0x0)) || (lVar24 = *param_1, lVar24 == 0)) {
LAB_00e983e0:
    uVar12 = 0;
    if (*(long *)(lVar10 + 0x28) == local_68) {
      return;
    }
    goto LAB_00e98c0c;
  }
  if (*param_4 == param_4[1]) goto LAB_00e983e0;
  local_6c = *(undefined4 *)(param_3 + 0x5c);
  local_74 = *(undefined8 *)(lVar24 + 0x4c);
  uVar7 = *(uint *)(param_1 + 0xd);
  uVar26 = (ulong)uVar7;
  local_78 = (int)*(float *)(param_3 + 0x58);
  puVar36 = (undefined4 *)param_1[0xc];
  uVar19 = (int)((ulong)(param_4[1] - *param_4) >> 2) + 1;
  if (uVar7 != 0) {
    uVar27 = (ulong)*(uint *)((long)param_1 + 0x6c);
    if (uVar7 == 1) {
      uVar28 = 0;
    }
    else {
      if (uVar7 < 4) {
        uVar28 = 0;
      }
      else {
        uVar28 = uVar26 - 4;
        if (uVar28 < 4) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          uVar31 = (uVar28 >> 2) + 1 & 0x7ffffffffffffffe;
          pfVar11 = param_2 + 600;
          puVar32 = puVar36;
          do {
            pfVar30 = pfVar11 + -0x20d;
            pfVar29 = pfVar11 + -0x1c2;
            if (uVar27 <= uVar20) {
              pfVar30 = (float *)0x0;
            }
            if (uVar27 <= uVar20 + 1) {
              pfVar29 = (float *)0x0;
            }
            pfVar39 = pfVar11 + -0x177;
            *(undefined8 *)(puVar32 + 0xc) = 0;
            *(float **)(puVar32 + 0xe) = pfVar30;
            if (uVar27 <= uVar20 + 2) {
              pfVar39 = (float *)0x0;
            }
            pfVar30 = pfVar11 + -300;
            *(undefined8 *)(puVar32 + 0x1e) = 0;
            *(float **)(puVar32 + 0x20) = pfVar29;
            if (uVar27 <= uVar20 + 3) {
              pfVar30 = (float *)0x0;
            }
            pfVar29 = pfVar11 + -0xe1;
            if (uVar27 <= uVar20 + 4) {
              pfVar29 = (float *)0x0;
            }
            pfVar15 = pfVar11 + -0x96;
            *(undefined8 *)(puVar32 + 0x30) = 0;
            *(float **)(puVar32 + 0x32) = pfVar39;
            if (uVar27 <= uVar20 + 5) {
              pfVar15 = (float *)0x0;
            }
            pfVar39 = pfVar11 + -0x4b;
            if (uVar27 <= uVar20 + 6) {
              pfVar39 = (float *)0x0;
            }
            pfVar6 = pfVar11;
            if (uVar27 <= uVar20 + 7) {
              pfVar6 = (float *)0x0;
            }
            puVar32[0x10] = 0;
            puVar32[0x22] = 0;
            uVar31 = uVar31 - 2;
            puVar32[0x34] = 0;
            pfVar11 = pfVar11 + 600;
            puVar32[0x46] = 0;
            uVar20 = uVar20 + 8;
            *puVar32 = 0;
            puVar32[0x12] = 0;
            puVar32[0x24] = 0;
            puVar32[0x36] = 0;
            puVar32[8] = 0;
            puVar32[0x1a] = 0;
            puVar32[0x2c] = 0;
            puVar32[0x3e] = 0;
            *(undefined8 *)(puVar32 + 0x42) = 0;
            *(float **)(puVar32 + 0x44) = pfVar30;
            puVar32[0x58] = 0;
            puVar32[0x6a] = 0;
            puVar32[0x7c] = 0;
            puVar32[0x8e] = 0;
            puVar32[0x48] = 0;
            puVar32[0x5a] = 0;
            puVar32[0x6c] = 0;
            puVar32[0x7e] = 0;
            puVar32[0x50] = 0;
            puVar32[0x62] = 0;
            puVar32[0x74] = 0;
            puVar32[0x86] = 0;
            *(undefined8 *)(puVar32 + 0x8a) = 0;
            *(undefined8 *)(puVar32 + 0x54) = 0;
            *(float **)(puVar32 + 0x56) = pfVar29;
            *(undefined8 *)(puVar32 + 0x66) = 0;
            *(float **)(puVar32 + 0x68) = pfVar15;
            *(undefined8 *)(puVar32 + 0x78) = 0;
            *(float **)(puVar32 + 0x7a) = pfVar39;
            *(float **)(puVar32 + 0x8c) = pfVar6;
            puVar32 = puVar32 + 0x90;
          } while (uVar31 != 0);
        }
        if (((uint)uVar28 >> 2 & 1) == 0) {
          uVar31 = uVar20 | 1;
          uVar28 = uVar20 | 2;
          uVar33 = uVar20 | 3;
          puVar32 = puVar36 + uVar20 * 0x12;
          pfVar11 = param_2 + uVar20 * 0x4b + 0x4b;
          puVar40 = puVar36 + uVar31 * 0x12;
          if (uVar27 <= uVar20) {
            pfVar11 = (float *)0x0;
          }
          puVar23 = puVar36 + uVar28 * 0x12;
          puVar21 = puVar36 + uVar33 * 0x12;
          *(undefined8 *)(puVar32 + 0xc) = 0;
          *(float **)(puVar32 + 0xe) = pfVar11;
          puVar32[0x10] = 0;
          pfVar11 = param_2 + uVar31 * 0x4b + 0x4b;
          puVar40[0x10] = 0;
          if (uVar27 <= uVar31) {
            pfVar11 = (float *)0x0;
          }
          pfVar30 = param_2 + uVar28 * 0x4b + 0x4b;
          puVar23[0x10] = 0;
          if (uVar27 <= uVar28) {
            pfVar30 = (float *)0x0;
          }
          pfVar29 = param_2 + uVar33 * 0x4b + 0x4b;
          puVar21[0x10] = 0;
          if (uVar27 <= uVar33) {
            pfVar29 = (float *)0x0;
          }
          *puVar32 = 0;
          *puVar40 = 0;
          *puVar23 = 0;
          *(undefined8 *)(puVar21 + 0xc) = 0;
          *(float **)(puVar21 + 0xe) = pfVar29;
          *puVar21 = 0;
          puVar32[8] = 0;
          puVar40[8] = 0;
          puVar23[8] = 0;
          puVar21[8] = 0;
          *(undefined8 *)(puVar40 + 0xc) = 0;
          *(float **)(puVar40 + 0xe) = pfVar11;
          *(undefined8 *)(puVar23 + 0xc) = 0;
          *(float **)(puVar23 + 0xe) = pfVar30;
        }
        if ((uVar7 & 3) == 0) goto LAB_00e986d0;
        uVar28 = uVar26 & 0xfffffffc;
        if ((uVar26 & 3) == 1) goto LAB_00e986a4;
      }
      uVar20 = uVar28 | 1;
      pfVar11 = param_2 + uVar28 * 0x4b + 0x4b;
      puVar32 = puVar36 + uVar28 * 0x12;
      if (uVar27 <= uVar28) {
        pfVar11 = (float *)0x0;
      }
      pfVar30 = param_2 + uVar20 * 0x4b + 0x4b;
      puVar40 = puVar36 + uVar20 * 0x12;
      if (uVar27 <= uVar20) {
        pfVar30 = (float *)0x0;
      }
      uVar28 = uVar28 | 2;
      puVar32[0x10] = 0;
      *puVar32 = 0;
      puVar40[0x10] = 0;
      *puVar40 = 0;
      puVar32[8] = 0;
      puVar40[8] = 0;
      *(undefined8 *)(puVar32 + 0xc) = 0;
      *(float **)(puVar32 + 0xe) = pfVar11;
      *(undefined8 *)(puVar40 + 0xc) = 0;
      *(float **)(puVar40 + 0xe) = pfVar30;
      if (uVar26 <= uVar28) goto LAB_00e986d0;
    }
LAB_00e986a4:
    puVar32 = puVar36 + uVar28 * 0x12;
    pfVar11 = param_2 + uVar28 * 0x4b + 0x4b;
    if (uVar27 <= uVar28) {
      pfVar11 = (float *)0x0;
    }
    puVar32[0x10] = 0;
    *puVar32 = 0;
    puVar32[8] = 0;
    *(undefined8 *)(puVar32 + 0xc) = 0;
    *(float **)(puVar32 + 0xe) = pfVar11;
  }
LAB_00e986d0:
  *puVar36 = 1;
  *(long *)(puVar36 + 0xc) = lVar24 + 0x80;
  puVar36[0x10] = 1;
  uVar12 = FUN_01030f70(puVar36,uVar19,param_3,param_4,&local_78,&DAT_010fc780);
  uVar69 = (undefined4)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  if ((int)uVar12 == 0) {
LAB_00e98bf8:
    if (*(long *)(lVar10 + 0x28) == local_68) {
      return;
    }
    goto LAB_00e98c0c;
  }
  uVar7 = *(int *)((long)param_1 + 0x6c) - 1;
  if (-1 < (int)uVar7) {
    lVar24 = 0;
    lVar37 = (ulong)uVar7 * 0x48;
    puVar32 = puVar36;
LAB_00e98750:
    uVar69 = (undefined4)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    piVar3 = puVar32 + (ulong)uVar7 * 0x12;
    if ((*piVar3 == 1) && ((uint)piVar3[0x10] < uVar19)) {
      iVar41 = piVar3[8];
      if (iVar41 == 3) {
        FUN_00e9c390(piVar3[10],*(undefined8 *)(*(long *)(piVar3 + 4) + 0x38),
                     *(undefined8 *)(*(long *)(piVar3 + 6) + 0x38),*(undefined8 *)(piVar3 + 0xe));
        uVar16 = *(undefined8 *)(piVar3 + 0xe);
        iVar41 = piVar3[9];
        uVar13 = *(undefined8 *)(*(long *)(piVar3 + 2) + 0x38);
        uVar12 = uVar16;
      }
      else {
        if (iVar41 != 2) {
          if (iVar41 != 1) goto LAB_00e98740;
          pvVar17 = *(void **)(*(long *)(piVar3 + 2) + 0x38);
          if (lVar37 - lVar24 == 0) {
            if ((pvVar17 != (void *)0x0) && (*(void **)(piVar3 + 0xe) != (void *)0x0)) {
              memcpy(*(void **)(piVar3 + 0xe),pvVar17,300);
            }
            goto LAB_00e987e4;
          }
          *(void **)(piVar3 + 0xe) = pvVar17;
          goto LAB_00e98740;
        }
        iVar41 = piVar3[9];
        uVar13 = *(undefined8 *)(*(long *)(piVar3 + 2) + 0x38);
        uVar16 = *(undefined8 *)(*(long *)(piVar3 + 4) + 0x38);
        uVar12 = *(undefined8 *)(piVar3 + 0xe);
      }
      FUN_00e9c390(iVar41,uVar13,uVar16,uVar12);
    }
LAB_00e98740:
    uVar69 = (undefined4)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    lVar24 = lVar24 + 0x48;
    puVar32 = puVar32 + -0x12;
    if (lVar37 + 0x48 == lVar24) goto LAB_00e987e4;
    goto LAB_00e98750;
  }
LAB_00e987e4:
  puVar38 = PTR_g_logInfo_010f56f8;
  if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    dVar48 = (double)*(float *)(param_1 + 2);
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c5067,pcVar14,
               (double)*(float *)(param_1 + 7),(double)*(float *)((long)param_1 + 0x3c),
               (double)*(float *)(param_1 + 8),(double)*(float *)((long)param_1 + 0x44),
               (double)*(float *)((long)param_1 + 0x34),(double)*(float *)(param_1 + 6),
               (double)*(float *)((long)param_1 + 0xc),(double)*(float *)(param_1 + 3),uVar12,
               "tmc202_input_validation",param_1[4],dVar48);
    uVar69 = (undefined4)((ulong)dVar48 >> 0x20);
  }
  if ((param_1[4] != 0) && (((byte)puVar38[0x2a] >> 5 & 1) != 0)) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    puVar34 = (uint *)param_1[4];
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b9d4,pcVar14,
               uVar12,"tmc202_input_validation",(ulong)*puVar34,CONCAT44(uVar69,puVar34[0x80]),
               puVar34[0x100],puVar34[0x180],puVar34[0x200],puVar34[0x280],puVar34[0x300],
               puVar34[0x380],puVar34[0x3ff]);
  }
  fVar42 = *(float *)(param_1 + 7);
  fVar43 = *(float *)((long)param_1 + 0x3c);
  fVar81 = *(float *)(param_1 + 8);
  fVar62 = *(float *)((long)param_1 + 0x44);
  fVar72 = *(float *)(param_1 + 6);
  fVar68 = *(float *)((long)param_1 + 0x34);
  uVar19 = *(uint *)(*param_1 + 0x60);
  if (fVar43 <= 1.0) {
    fVar43 = 1.0;
  }
  if (fVar81 <= 0.0) {
    fVar81 = 0.0;
  }
  if (fVar68 <= 1.0) {
    fVar68 = 1.0;
  }
  pvVar17 = *(void **)(puVar36 + 0xe);
  if (fVar72 <= 0.0) {
    fVar72 = 0.0;
  }
  fVar49 = 1.0;
  if (fVar42 < 1.0) {
    fVar49 = fVar42;
  }
  *(float *)(param_1 + 6) = fVar72;
  *(float *)((long)param_1 + 0x34) = fVar68;
  fVar68 = 0.0;
  if (0.0 < fVar42) {
    fVar68 = fVar49;
  }
  *(float *)(param_1 + 7) = fVar68;
  *(float *)((long)param_1 + 0x3c) = fVar43;
  fVar42 = 1.0;
  if (fVar62 < 1.0) {
    fVar42 = fVar62;
  }
  fVar43 = 0.0;
  if (0.0 < fVar62) {
    fVar43 = fVar42;
  }
  *(uint *)(param_1[0xe] + 0x1194) = (uint)((uVar19 & 0xfffffffc) == 4);
  *(float *)(param_1 + 8) = fVar81;
  *(float *)((long)param_1 + 0x44) = fVar43;
  if (pvVar17 != (void *)0x0) {
    memcpy(param_2,pvVar17,300);
  }
  if (param_1[5] != 0) {
    fVar43 = param_2[0x48];
    fVar42 = 0.0;
    if (fVar43 < param_2[0x49]) {
      fVar62 = (*(float *)(param_1 + 6) - fVar43) / (param_2[0x49] - fVar43);
      fVar43 = 1.0;
      if (fVar62 < 1.0) {
        fVar43 = fVar62;
      }
      fVar42 = 0.0;
      if (0.0 < fVar62) {
        fVar42 = fVar43;
      }
    }
    fVar43 = fVar42;
    if (1 < *(uint *)((long)param_1 + 0x1c)) {
      fVar43 = *(float *)(param_1 + 7);
    }
    iVar41 = *(int *)(param_1[0xe] + 0x1194);
    fVar42 = (float)NEON_fmadd(fVar43,param_2[0x4a],fVar42 * (1.0 - param_2[0x4a]));
    *(float *)(param_1[0xe] + 0x118c) = fVar42;
    fVar43 = (float)NEON_fmadd(fVar42,param_2[1] - *param_2,*param_2);
    fVar62 = (float)NEON_fmadd(fVar42,param_2[5] - param_2[4],param_2[4]);
    fVar68 = (float)NEON_fmadd(fVar42,param_2[9] - param_2[8],param_2[8]);
    fVar72 = (float)NEON_fmadd(fVar42,param_2[0xd] - param_2[0xc],param_2[0xc]);
    fVar81 = (float)NEON_fmadd(fVar42,param_2[0x15] - param_2[0x14],param_2[0x14]);
    *param_2 = fVar43;
    param_2[4] = fVar62;
    param_2[8] = fVar68;
    param_2[0xc] = fVar72;
    param_2[0x14] = fVar81;
    if (iVar41 == 0) {
      fVar81 = (float)*(undefined8 *)(param_2 + 0x16);
      fVar49 = (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20);
      fVar51 = (float)*(undefined8 *)(param_2 + 0x18);
      fVar61 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
      fVar43 = (float)*(undefined8 *)(param_2 + 0x24);
      fVar62 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
      fVar68 = (float)*(undefined8 *)(param_2 + 0x26);
      fVar72 = (float)((ulong)*(undefined8 *)(param_2 + 0x26) >> 0x20);
      fVar63 = (float)*(undefined8 *)(param_2 + 0x1a);
      fVar66 = (float)((ulong)*(undefined8 *)(param_2 + 0x1a) >> 0x20);
      fVar77 = (float)*(undefined8 *)(param_2 + 0x28);
      fVar79 = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
      fVar82 = (float)NEON_fmadd(fVar42,param_2[0x23] - param_2[0x1c],param_2[0x1c]);
      fVar85 = (float)NEON_fmadd(fVar42,param_2[0x31] - param_2[0x2a],param_2[0x2a]);
      *(ulong *)(param_2 + 0x18) =
           CONCAT44(fVar61 + ((float)((ulong)*(undefined8 *)(param_2 + 0x1f) >> 0x20) - fVar61) *
                             fVar42,
                    fVar51 + ((float)*(undefined8 *)(param_2 + 0x1f) - fVar51) * fVar42);
      *(ulong *)(param_2 + 0x16) =
           CONCAT44(fVar49 + ((float)((ulong)*(undefined8 *)(param_2 + 0x1d) >> 0x20) - fVar49) *
                             fVar42,
                    fVar81 + ((float)*(undefined8 *)(param_2 + 0x1d) - fVar81) * fVar42);
      *(ulong *)(param_2 + 0x26) =
           CONCAT44(fVar72 + ((float)((ulong)*(undefined8 *)(param_2 + 0x2d) >> 0x20) - fVar72) *
                             fVar42,
                    fVar68 + ((float)*(undefined8 *)(param_2 + 0x2d) - fVar68) * fVar42);
      *(ulong *)(param_2 + 0x24) =
           CONCAT44(fVar62 + ((float)((ulong)*(undefined8 *)(param_2 + 0x2b) >> 0x20) - fVar62) *
                             fVar42,
                    fVar43 + ((float)*(undefined8 *)(param_2 + 0x2b) - fVar43) * fVar42);
      *(ulong *)(param_2 + 0x1a) =
           CONCAT44(fVar66 + fVar42 * ((float)((ulong)*(undefined8 *)(param_2 + 0x21) >> 0x20) -
                                      fVar66),
                    fVar63 + fVar42 * ((float)*(undefined8 *)(param_2 + 0x21) - fVar63));
      *(ulong *)(param_2 + 0x28) =
           CONCAT44(fVar79 + fVar42 * ((float)((ulong)*(undefined8 *)(param_2 + 0x2f) >> 0x20) -
                                      fVar79),
                    fVar77 + fVar42 * ((float)*(undefined8 *)(param_2 + 0x2f) - fVar77));
      param_2[0x1c] = fVar82;
      param_2[0x2a] = fVar85;
    }
    else {
      fVar43 = (float)*(undefined8 *)(param_2 + 0x24);
      fVar62 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
      fVar68 = (float)*(undefined8 *)(param_2 + 0x26);
      fVar72 = (float)((ulong)*(undefined8 *)(param_2 + 0x26) >> 0x20);
      fVar49 = (float)*(undefined8 *)(param_2 + 0x28);
      fVar51 = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
      fVar81 = (float)NEON_fmadd(fVar42,param_2[0x31] - param_2[0x2a],param_2[0x2a]);
      *(ulong *)(param_2 + 0x26) =
           CONCAT44(fVar72 + ((float)((ulong)*(undefined8 *)(param_2 + 0x2d) >> 0x20) - fVar72) *
                             fVar42,
                    fVar68 + ((float)*(undefined8 *)(param_2 + 0x2d) - fVar68) * fVar42);
      *(ulong *)(param_2 + 0x24) =
           CONCAT44(fVar62 + ((float)((ulong)*(undefined8 *)(param_2 + 0x2b) >> 0x20) - fVar62) *
                             fVar42,
                    fVar43 + ((float)*(undefined8 *)(param_2 + 0x2b) - fVar43) * fVar42);
      *(ulong *)(param_2 + 0x28) =
           CONCAT44(fVar51 + fVar42 * ((float)((ulong)*(undefined8 *)(param_2 + 0x2f) >> 0x20) -
                                      fVar51),
                    fVar49 + fVar42 * ((float)*(undefined8 *)(param_2 + 0x2f) - fVar49));
      param_2[0x2a] = fVar81;
    }
  }
  FUN_00e9c940(param_1);
  lVar24 = param_1[0xe];
  bVar8 = puVar38[0x2a];
  cVar9 = *(char *)(*param_1 + 0x6c);
  *(char *)(lVar24 + 0x117c) = cVar9;
  if ((bVar8 >> 5 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x157006,pcVar14,
               uVar12,"CalulateLTMContrastEnhanceCurve",(ulong)*(byte *)(param_1[0xe] + 0x117c),
               param_1[4]);
    lVar24 = param_1[0xe];
    cVar9 = *(char *)(lVar24 + 0x117c);
  }
  if ((cVar9 == '\0') || (puVar34 = (uint *)param_1[4], puVar34 == (uint *)0x0)) {
    *(undefined4 *)(lVar24 + 0x1400) = 0;
    *(undefined8 *)(lVar24 + 0x13f8) = 0;
    uVar12 = 1;
    *(undefined8 *)(lVar24 + 0x13f0) = 0;
    *(undefined8 *)(lVar24 + 0x13e8) = 0;
    *(undefined *)(param_1[0xe] + 0x117c) = 0;
    goto LAB_00e98bf8;
  }
  if (cVar9 == '\x02') {
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e98ee4;
LAB_00e98c1c:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc87e,pcVar14,
                 uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e98c1c;
LAB_00e98ee4:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11da88,pcVar14,
                 uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9c7,pcVar14,
                 uVar12,"convert_bhist_into_ihist",(ulong)*puVar34);
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    lVar24 = 0;
    do {
      if (((uint)uVar12 >> 0x15 & 1) == 0) {
        if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e98d08;
LAB_00e98cb8:
        uVar19 = (uint)uVar12;
      }
      else {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9c7,pcVar14,
                   uVar12,"convert_bhist_into_ihist",(ulong)*(uint *)((long)puVar34 + lVar24 + 4));
        uVar12 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
        if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e98cb8;
LAB_00e98d08:
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9c7,pcVar14,
                   uVar12,"convert_bhist_into_ihist",(ulong)*(uint *)((long)puVar34 + lVar24 + 8));
        uVar12 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
        uVar19 = (uint)uVar12;
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9c7,pcVar14,
                   uVar12,"convert_bhist_into_ihist",(ulong)*(uint *)((long)puVar34 + lVar24 + 0xc))
        ;
        uVar12 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
      }
      lVar24 = lVar24 + 0xc;
    } while (lVar24 != 0xffc);
    if (((uint)uVar12 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11da88,pcVar14,
                 uVar12,"convert_bhist_into_ihist");
    }
    puVar38 = PTR_g_logInfo_010f56f8;
    fVar42 = 0.0;
    lVar24 = 0;
    DAT_012eda54 = 0.0;
    pfVar11 = &DAT_012eda54;
    do {
      puVar36 = (undefined4 *)((long)puVar34 + lVar24);
      lVar24 = lVar24 + 0x20;
      fVar68 = (float)NEON_ucvtf(*puVar36);
      fVar72 = (float)NEON_ucvtf(puVar36[1]);
      fVar62 = (float)NEON_ucvtf(puVar36[2]);
      fVar43 = (float)NEON_ucvtf(puVar36[3]);
      fVar43 = fVar42 + fVar68 + fVar72 + fVar62 + fVar43;
      pfVar11[1] = fVar43;
      fVar68 = (float)NEON_ucvtf(puVar36[4]);
      fVar62 = (float)NEON_ucvtf(puVar36[5]);
      fVar72 = (float)NEON_ucvtf(puVar36[6]);
      fVar42 = (float)NEON_ucvtf(puVar36[7]);
      fVar42 = fVar43 + fVar68 + fVar62 + fVar72 + fVar42;
      pfVar11[2] = fVar42;
      pfVar11 = pfVar11 + 2;
    } while (lVar24 != 0x1000);
    if (1e-06 <= ABS(fVar42)) {
      uVar26 = 0xfffffffffffffff0;
      puVar22 = (undefined8 *)&DAT_012edb48;
      do {
        uVar26 = uVar26 + 0x40;
        auVar86 = *(undefined (*) [16])(puVar22 + -6);
        puVar22[-0x15] =
             CONCAT44((float)((ulong)puVar22[-0x15] >> 0x20) / fVar42,(float)puVar22[-0x15] / fVar42
                     );
        puVar22[-0x16] =
             CONCAT44((float)((ulong)puVar22[-0x16] >> 0x20) / fVar42,(float)puVar22[-0x16] / fVar42
                     );
        puVar22[-0x13] =
             CONCAT44((float)((ulong)puVar22[-0x13] >> 0x20) / fVar42,(float)puVar22[-0x13] / fVar42
                     );
        puVar22[-0x14] =
             CONCAT44((float)((ulong)puVar22[-0x14] >> 0x20) / fVar42,(float)puVar22[-0x14] / fVar42
                     );
        puVar22[-0x1d] =
             CONCAT44((float)((ulong)puVar22[-0x1d] >> 0x20) / fVar42,(float)puVar22[-0x1d] / fVar42
                     );
        puVar22[-0x1e] =
             CONCAT44((float)((ulong)puVar22[-0x1e] >> 0x20) / fVar42,(float)puVar22[-0x1e] / fVar42
                     );
        puVar22[-0x1b] =
             CONCAT44(*(float *)((long)puVar22 + -0xd4) / fVar42,
                      *(float *)(puVar22 + -0x1b) / fVar42);
        puVar22[-0x1c] =
             CONCAT44(*(float *)((long)puVar22 + -0xdc) / fVar42,
                      *(float *)(puVar22 + -0x1c) / fVar42);
        puVar22[-0x19] =
             CONCAT44((float)((ulong)puVar22[-0x19] >> 0x20) / fVar42,(float)puVar22[-0x19] / fVar42
                     );
        puVar22[-0x1a] =
             CONCAT44((float)((ulong)puVar22[-0x1a] >> 0x20) / fVar42,(float)puVar22[-0x1a] / fVar42
                     );
        puVar22[-0x17] =
             CONCAT44((float)((ulong)puVar22[-0x17] >> 0x20) / fVar42,(float)puVar22[-0x17] / fVar42
                     );
        puVar22[-0x18] =
             CONCAT44((float)((ulong)puVar22[-0x18] >> 0x20) / fVar42,(float)puVar22[-0x18] / fVar42
                     );
        puVar22[-0x11] =
             CONCAT44((float)((ulong)puVar22[-0x11] >> 0x20) / fVar42,(float)puVar22[-0x11] / fVar42
                     );
        puVar22[-0x12] =
             CONCAT44((float)((ulong)puVar22[-0x12] >> 0x20) / fVar42,(float)puVar22[-0x12] / fVar42
                     );
        puVar22[-0xf] =
             CONCAT44((float)((ulong)puVar22[-0xf] >> 0x20) / fVar42,(float)puVar22[-0xf] / fVar42);
        puVar22[-0x10] =
             CONCAT44((float)((ulong)puVar22[-0x10] >> 0x20) / fVar42,(float)puVar22[-0x10] / fVar42
                     );
        puVar22[-0xd] =
             CONCAT44((float)((ulong)puVar22[-0xd] >> 0x20) / fVar42,(float)puVar22[-0xd] / fVar42);
        puVar22[-0xe] =
             CONCAT44((float)((ulong)puVar22[-0xe] >> 0x20) / fVar42,(float)puVar22[-0xe] / fVar42);
        puVar22[-0xb] =
             CONCAT44((float)((ulong)puVar22[-0xb] >> 0x20) / fVar42,(float)puVar22[-0xb] / fVar42);
        puVar22[-0xc] =
             CONCAT44((float)((ulong)puVar22[-0xc] >> 0x20) / fVar42,(float)puVar22[-0xc] / fVar42);
        puVar22[-9] = CONCAT44((float)((ulong)puVar22[-9] >> 0x20) / fVar42,
                               (float)puVar22[-9] / fVar42);
        puVar22[-10] = CONCAT44((float)((ulong)puVar22[-10] >> 0x20) / fVar42,
                                (float)puVar22[-10] / fVar42);
        puVar22[-7] = CONCAT44((float)((ulong)puVar22[-7] >> 0x20) / fVar42,
                               (float)puVar22[-7] / fVar42);
        puVar22[-8] = CONCAT44((float)((ulong)puVar22[-8] >> 0x20) / fVar42,
                               (float)puVar22[-8] / fVar42);
        puVar22[-5] = CONCAT44(auVar86._12_4_ / fVar42,auVar86._8_4_ / fVar42);
        puVar22[-6] = CONCAT44(auVar86._4_4_ / fVar42,auVar86._0_4_ / fVar42);
        puVar22[-3] = CONCAT44((float)((ulong)puVar22[-3] >> 0x20) / fVar42,
                               (float)puVar22[-3] / fVar42);
        puVar22[-4] = CONCAT44((float)((ulong)puVar22[-4] >> 0x20) / fVar42,
                               (float)puVar22[-4] / fVar42);
        puVar22[-1] = CONCAT44((float)((ulong)puVar22[-1] >> 0x20) / fVar42,
                               (float)puVar22[-1] / fVar42);
        puVar22[-2] = CONCAT44((float)((ulong)puVar22[-2] >> 0x20) / fVar42,
                               (float)puVar22[-2] / fVar42);
        puVar22[1] = CONCAT44((float)((ulong)puVar22[1] >> 0x20) / fVar42,(float)puVar22[1] / fVar42
                             );
        *puVar22 = CONCAT44((float)((ulong)*puVar22 >> 0x20) / fVar42,(float)*puVar22 / fVar42);
        puVar22 = puVar22 + 0x20;
      } while (uVar26 < 0xf0);
      lVar24 = param_1[0xe];
      uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d37fa,pcVar14,
                   uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da7a2,pcVar14,
                   uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1411ee,pcVar14,
                   (double)*(float *)(lVar24 + 0x20),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1411ee,pcVar14,
                   (double)*(float *)(lVar24 + 0x24),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1411ee,pcVar14,
                   (double)*(float *)(lVar24 + 0x28),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1411ee,pcVar14,
                   (double)*(float *)(lVar24 + 0x2c),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1411ee,pcVar14,
                   (double)*(float *)(lVar24 + 0x30),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1411ee,pcVar14,
                   (double)*(float *)(lVar24 + 0x34),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1411ee,pcVar14,
                   (double)*(float *)(lVar24 + 0x38),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da7a2,pcVar14,
                   uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x156f75,pcVar14,
                   uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa5ed,pcVar14,
                   uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644db,pcVar14,
                   (double)*(float *)(lVar24 + 0x142c),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644db,pcVar14,
                   (double)*(float *)(lVar24 + 0x1430),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644db,pcVar14,
                   (double)*(float *)(lVar24 + 0x1434),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644db,pcVar14,
                   (double)*(float *)(lVar24 + 0x1438),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644db,pcVar14,
                   (double)*(float *)(lVar24 + 0x143c),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644db,pcVar14,
                   (double)*(float *)(lVar24 + 0x1440),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1644db,pcVar14,
                   (double)*(float *)(lVar24 + 0x1444),uVar12,"convert_bhist_into_ihist");
        uVar19 = (uint)*(undefined8 *)(puVar38 + 0x28);
      }
      if ((uVar19 >> 0x15 & 1) != 0) {
        pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
        uVar12 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa5ed,pcVar14,
                   uVar12,"convert_bhist_into_ihist");
      }
      pfVar11 = (float *)&DAT_001ea9d8;
      uVar18 = 0;
      lVar25 = 0;
      lVar4 = lVar24 + 0x1430;
      lVar37 = lVar24 + 0x1430;
      lVar2 = lVar24 + 0x24;
      puVar36 = &DAT_010fb780;
      do {
        uVar1 = uVar18 + 1;
        if (uVar1 < 7) {
          uVar1 = 6;
        }
        do {
          if (*pfVar11 <= *(float *)(lVar4 + (ulong)uVar18 * 4)) goto LAB_00e9915c;
          uVar18 = uVar18 + 1;
        } while (uVar1 != uVar18);
        uVar18 = 5;
LAB_00e9915c:
        lVar35 = (ulong)uVar18 * 4;
        lVar5 = lVar24 + lVar35;
        fVar42 = *(float *)(lVar37 + lVar35) - *(float *)(lVar5 + 0x142c);
        if (1e-06 <= fVar42) {
          fVar43 = *(float *)(lVar5 + 0x20);
          fVar42 = (*(float *)(lVar2 + (ulong)uVar18 * 4) - fVar43) / fVar42;
        }
        else {
          fVar43 = *(float *)(lVar5 + 0x20);
          fVar42 = 1.0;
        }
        uVar69 = NEON_fmadd(*pfVar11 - *(float *)(lVar5 + 0x142c),fVar42,fVar43);
        *puVar36 = uVar69;
        if (lVar25 == 0x100) goto LAB_00e99334;
        uVar1 = uVar18 + 1;
        if (uVar1 < 7) {
          uVar1 = 6;
        }
        do {
          if (pfVar11[1] <= *(float *)(lVar4 + (ulong)uVar18 * 4)) goto LAB_00e991e8;
          uVar18 = uVar18 + 1;
        } while (uVar1 != uVar18);
        uVar18 = 5;
LAB_00e991e8:
        lVar35 = (ulong)uVar18 * 4;
        lVar5 = lVar24 + lVar35;
        fVar42 = *(float *)(lVar37 + lVar35) - *(float *)(lVar5 + 0x142c);
        if (1e-06 <= fVar42) {
          fVar43 = *(float *)(lVar5 + 0x20);
          fVar42 = (*(float *)(lVar2 + (ulong)uVar18 * 4) - fVar43) / fVar42;
        }
        else {
          fVar42 = 1.0;
          fVar43 = *(float *)(lVar5 + 0x20);
        }
        uVar1 = uVar18 + 1;
        fVar62 = pfVar11[2];
        if (uVar1 < 7) {
          uVar1 = 6;
        }
        uVar69 = NEON_fmadd(pfVar11[1] - *(float *)(lVar5 + 0x142c),fVar42,fVar43);
        puVar36[1] = uVar69;
        do {
          if (fVar62 <= *(float *)(lVar4 + (ulong)uVar18 * 4)) goto LAB_00e99270;
          uVar18 = uVar18 + 1;
        } while (uVar1 != uVar18);
        uVar18 = 5;
LAB_00e99270:
        lVar35 = (ulong)uVar18 * 4;
        lVar5 = lVar24 + lVar35;
        fVar42 = *(float *)(lVar37 + lVar35) - *(float *)(lVar5 + 0x142c);
        if (1e-06 <= fVar42) {
          fVar43 = *(float *)(lVar5 + 0x20);
          fVar42 = (*(float *)(lVar2 + (ulong)uVar18 * 4) - fVar43) / fVar42;
        }
        else {
          fVar42 = 1.0;
          fVar43 = *(float *)(lVar5 + 0x20);
        }
        uVar1 = uVar18 + 1;
        fVar68 = pfVar11[3];
        pfVar11 = pfVar11 + 4;
        if (uVar1 < 7) {
          uVar1 = 6;
        }
        uVar69 = NEON_fmadd(fVar62 - *(float *)(lVar5 + 0x142c),fVar42,fVar43);
        puVar36[2] = uVar69;
        puVar38 = PTR_g_logInfo_010f56f8;
        do {
          if (fVar68 <= *(float *)(lVar4 + (ulong)uVar18 * 4)) goto LAB_00e992f4;
          uVar18 = uVar18 + 1;
        } while (uVar1 != uVar18);
        uVar18 = 5;
LAB_00e992f4:
        lVar35 = (ulong)uVar18 * 4;
        lVar5 = lVar24 + lVar35;
        fVar42 = *(float *)(lVar37 + lVar35) - *(float *)(lVar5 + 0x142c);
        if (fVar42 < 1e-06) {
          fVar42 = 1.0;
          fVar43 = *(float *)(lVar5 + 0x20);
        }
        else {
          fVar43 = *(float *)(lVar5 + 0x20);
          fVar42 = (*(float *)(lVar2 + (ulong)uVar18 * 4) - fVar43) / fVar42;
        }
        lVar25 = lVar25 + 4;
        uVar69 = NEON_fmadd(fVar68 - *(float *)(lVar5 + 0x142c),fVar42,fVar43);
        puVar36[3] = uVar69;
        puVar36 = puVar36 + 4;
      } while( true );
    }
    if (((byte)puVar38[0x2a] >> 5 & 1) != 0) {
      uVar19 = 0x1cc8af;
      goto LAB_00e9be48;
    }
    goto LAB_00e9be88;
  }
  if (cVar9 == '\x01') {
    FUN_00e933c0(param_1,param_2);
  }
LAB_00e9be94:
  uVar12 = 1;
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
LAB_00e98c0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
LAB_00e99334:
  uVar12 = *(undefined8 *)(puVar38 + 0x28);
  uVar19 = (uint)uVar12;
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1c502b,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) == 0) {
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da7bb,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11daa1,pcVar14,
               (double)DAT_010fb780,uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  pfVar11 = (float *)&DAT_010fb790;
  lVar24 = 0x100;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9943c;
LAB_00e993dc:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99480;
LAB_00e993e0:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e994c4;
LAB_00e993e4:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99508;
LAB_00e993e8:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9954c;
LAB_00e993ec:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99590;
LAB_00e993f0:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11daa1,pcVar14,
                 (double)pfVar11[-3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e993dc;
LAB_00e9943c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11daa1,pcVar14,
                 (double)pfVar11[-2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e993e0;
LAB_00e99480:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11daa1,pcVar14,
                 (double)pfVar11[-1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e993e4;
LAB_00e994c4:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11daa1,pcVar14,
                 (double)*pfVar11,uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e993e8;
LAB_00e99508:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11daa1,pcVar14,
                 (double)pfVar11[1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e993ec;
LAB_00e9954c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11daa1,pcVar14,
                 (double)pfVar11[2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e993f0;
LAB_00e99590:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11daa1,pcVar14,
                 (double)pfVar11[3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11daa1,pcVar14,
                 (double)pfVar11[4],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    lVar24 = lVar24 + -8;
    pfVar11 = pfVar11 + 8;
  } while (lVar24 != 0);
  if (((uint)uVar12 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1da7bb,pcVar14,
               uVar12,"convert_bhist_into_ihist");
  }
  uVar18 = 0;
  lVar24 = 0;
  pfVar11 = &DAT_010fb780;
  do {
    uVar1 = uVar18 + 1;
    if (uVar1 < 0x101) {
      uVar1 = 0x100;
    }
    do {
      if (*pfVar11 <= (float)(&DAT_001eb1e4)[uVar18]) goto LAB_00e996f8;
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar18 = 0xff;
LAB_00e996f8:
    fVar42 = (float)(&DAT_001eb1e4)[uVar18] - (float)(&DAT_001eb1e0)[uVar18];
    if (1e-06 <= fVar42) {
      fVar43 = (&DAT_012eda54)[uVar18];
      fVar42 = ((float)(&DAT_012eda58)[uVar18] - fVar43) / fVar42;
    }
    else {
      fVar42 = 1.0;
      fVar43 = (&DAT_012eda54)[uVar18];
    }
    fVar42 = (float)NEON_fmadd(*pfVar11 - (float)(&DAT_001eb1e0)[uVar18],fVar42,fVar43);
    *pfVar11 = fVar42;
    if (lVar24 == 0x100) break;
    uVar1 = uVar18 + 1;
    if (uVar1 < 0x101) {
      uVar1 = 0x100;
    }
    do {
      if (pfVar11[1] <= (float)(&DAT_001eb1e4)[uVar18]) goto LAB_00e997a0;
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar18 = 0xff;
LAB_00e997a0:
    fVar42 = (float)(&DAT_001eb1e4)[uVar18] - (float)(&DAT_001eb1e0)[uVar18];
    if (1e-06 <= fVar42) {
      fVar43 = (&DAT_012eda54)[uVar18];
      fVar42 = ((float)(&DAT_012eda58)[uVar18] - fVar43) / fVar42;
    }
    else {
      fVar42 = 1.0;
      fVar43 = (&DAT_012eda54)[uVar18];
    }
    uVar1 = uVar18 + 1;
    if (uVar1 < 0x101) {
      uVar1 = 0x100;
    }
    fVar42 = (float)NEON_fmadd(pfVar11[1] - (float)(&DAT_001eb1e0)[uVar18],fVar42,fVar43);
    pfVar11[1] = fVar42;
    do {
      if (pfVar11[2] <= (float)(&DAT_001eb1e4)[uVar18]) goto LAB_00e99824;
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar18 = 0xff;
LAB_00e99824:
    fVar42 = (float)(&DAT_001eb1e4)[uVar18] - (float)(&DAT_001eb1e0)[uVar18];
    if (1e-06 <= fVar42) {
      fVar43 = (&DAT_012eda54)[uVar18];
      fVar42 = ((float)(&DAT_012eda58)[uVar18] - fVar43) / fVar42;
    }
    else {
      fVar42 = 1.0;
      fVar43 = (&DAT_012eda54)[uVar18];
    }
    uVar1 = uVar18 + 1;
    if (uVar1 < 0x101) {
      uVar1 = 0x100;
    }
    fVar42 = (float)NEON_fmadd(pfVar11[2] - (float)(&DAT_001eb1e0)[uVar18],fVar42,fVar43);
    pfVar11[2] = fVar42;
    do {
      if (pfVar11[3] <= (float)(&DAT_001eb1e4)[uVar18]) goto LAB_00e998a0;
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar18 = 0xff;
LAB_00e998a0:
    fVar42 = (float)(&DAT_001eb1e4)[uVar18] - (float)(&DAT_001eb1e0)[uVar18];
    if (fVar42 < 1e-06) {
      fVar42 = 1.0;
      fVar43 = (&DAT_012eda54)[uVar18];
    }
    else {
      fVar43 = (&DAT_012eda54)[uVar18];
      fVar42 = ((float)(&DAT_012eda58)[uVar18] - fVar43) / fVar42;
    }
    lVar24 = lVar24 + 4;
    fVar42 = (float)NEON_fmadd(pfVar11[3] - (float)(&DAT_001eb1e0)[uVar18],fVar42,fVar43);
    pfVar11[3] = fVar42;
    pfVar11 = pfVar11 + 4;
  } while( true );
  uVar12 = *(undefined8 *)(puVar38 + 0x28);
  uVar19 = (uint)uVar12;
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa606,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) == 0) {
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c35,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa646,pcVar14,0,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  pfVar11 = (float *)&DAT_001eb1f0;
  lVar24 = 0x100;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e999d0;
LAB_00e99970:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99a14;
LAB_00e99974:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99a58;
LAB_00e99978:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99a9c;
LAB_00e9997c:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99ae0;
LAB_00e99980:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99b24;
LAB_00e99984:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa646,pcVar14,
                 (double)pfVar11[-3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99970;
LAB_00e999d0:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa646,pcVar14,
                 (double)pfVar11[-2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99974;
LAB_00e99a14:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa646,pcVar14,
                 (double)pfVar11[-1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99978;
LAB_00e99a58:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa646,pcVar14,
                 (double)*pfVar11,uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9997c;
LAB_00e99a9c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa646,pcVar14,
                 (double)pfVar11[1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99980;
LAB_00e99ae0:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa646,pcVar14,
                 (double)pfVar11[2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99984;
LAB_00e99b24:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa646,pcVar14,
                 (double)pfVar11[3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1aa646,pcVar14,
                 (double)pfVar11[4],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    lVar24 = lVar24 + -8;
    pfVar11 = pfVar11 + 8;
  } while (lVar24 != 0);
  uVar19 = (uint)uVar12;
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c35,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) == 0) {
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec0e,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) == 0) {
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11dabc,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d382f,pcVar14,
               (double)DAT_012eda54,uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  pfVar11 = (float *)&DAT_012eda74;
  lVar24 = 0x100;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99cb4;
LAB_00e99c54:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99cf8;
LAB_00e99c58:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99d3c;
LAB_00e99c5c:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99d80;
LAB_00e99c60:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99dc4;
LAB_00e99c64:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99e08;
LAB_00e99c68:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d382f,pcVar14,
                 (double)pfVar11[-7],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99c54;
LAB_00e99cb4:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d382f,pcVar14,
                 (double)pfVar11[-6],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99c58;
LAB_00e99cf8:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d382f,pcVar14,
                 (double)pfVar11[-5],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99c5c;
LAB_00e99d3c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d382f,pcVar14,
                 (double)pfVar11[-4],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99c60;
LAB_00e99d80:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d382f,pcVar14,
                 (double)pfVar11[-3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99c64;
LAB_00e99dc4:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d382f,pcVar14,
                 (double)pfVar11[-2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99c68;
LAB_00e99e08:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d382f,pcVar14,
                 (double)pfVar11[-1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1d382f,pcVar14,
                 (double)*pfVar11,uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    pfVar11 = pfVar11 + 8;
    lVar24 = lVar24 + -8;
  } while (lVar24 != 0);
  uVar19 = (uint)uVar12;
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x11dabc,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) == 0) {
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1810b2,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) == 0) {
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1e165b,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1100ab,pcVar14,
               (double)DAT_010fb780,uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  pfVar11 = (float *)&DAT_010fb790;
  lVar24 = 0x100;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99f98;
LAB_00e99f38:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e99fdc;
LAB_00e99f3c:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9a020;
LAB_00e99f40:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9a064;
LAB_00e99f44:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9a0a8;
LAB_00e99f48:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9a0ec;
LAB_00e99f4c:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1100ab,pcVar14,
                 (double)pfVar11[-3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99f38;
LAB_00e99f98:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1100ab,pcVar14,
                 (double)pfVar11[-2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99f3c;
LAB_00e99fdc:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1100ab,pcVar14,
                 (double)pfVar11[-1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99f40;
LAB_00e9a020:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1100ab,pcVar14,
                 (double)*pfVar11,uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99f44;
LAB_00e9a064:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1100ab,pcVar14,
                 (double)pfVar11[1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99f48;
LAB_00e9a0a8:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1100ab,pcVar14,
                 (double)pfVar11[2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e99f4c;
LAB_00e9a0ec:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1100ab,pcVar14,
                 (double)pfVar11[3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1100ab,pcVar14,
                 (double)pfVar11[4],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    lVar24 = lVar24 + -8;
    pfVar11 = pfVar11 + 8;
  } while (lVar24 != 0);
  if (((uint)uVar12 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1e165b,pcVar14,
               uVar12,"convert_bhist_into_ihist");
  }
  uVar19 = (uint)(param_2[0x45] + 0.5);
  if (uVar19 < 4) {
    pfVar11 = (float *)(&DAT_001ec9f8 + *(int *)(&DAT_001ec9f8 + (ulong)uVar19 * 4));
  }
  else {
    pfVar11 = (float *)&UNK_001ec1f0;
    if (uVar19 != 4) {
      pfVar11 = (float *)&UNK_001ec5f4;
    }
  }
  uVar18 = 0;
  lVar24 = 0;
  puVar36 = &DAT_012eda54;
  do {
    uVar1 = uVar18 + 1;
    if (uVar1 < 0x101) {
      uVar1 = 0x100;
    }
    do {
      if (*pfVar11 <= (float)(&DAT_001ea9dc)[uVar18]) goto LAB_00e9ab64;
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar18 = 0xff;
LAB_00e9ab64:
    fVar42 = (float)(&DAT_001ea9dc)[uVar18] - (float)(&DAT_001ea9d8)[uVar18];
    if (1e-06 <= fVar42) {
      fVar43 = (&DAT_010fb780)[uVar18];
      fVar42 = ((float)(&DAT_010fb784)[uVar18] - fVar43) / fVar42;
    }
    else {
      fVar43 = (&DAT_010fb780)[uVar18];
      fVar42 = 1.0;
    }
    uVar69 = NEON_fmadd(*pfVar11 - (float)(&DAT_001ea9d8)[uVar18],fVar42,fVar43);
    *puVar36 = uVar69;
    if (lVar24 == 0x100) break;
    uVar1 = uVar18 + 1;
    if (uVar1 < 0x101) {
      uVar1 = 0x100;
    }
    do {
      if (pfVar11[1] <= (float)(&DAT_001ea9dc)[uVar18]) goto LAB_00e9abe8;
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar18 = 0xff;
LAB_00e9abe8:
    fVar42 = (float)(&DAT_001ea9dc)[uVar18] - (float)(&DAT_001ea9d8)[uVar18];
    if (1e-06 <= fVar42) {
      fVar43 = (&DAT_010fb780)[uVar18];
      fVar42 = ((float)(&DAT_010fb784)[uVar18] - fVar43) / fVar42;
    }
    else {
      fVar42 = 1.0;
      fVar43 = (&DAT_010fb780)[uVar18];
    }
    uVar1 = uVar18 + 1;
    fVar62 = pfVar11[2];
    if (uVar1 < 0x101) {
      uVar1 = 0x100;
    }
    uVar69 = NEON_fmadd(pfVar11[1] - (float)(&DAT_001ea9d8)[uVar18],fVar42,fVar43);
    puVar36[1] = uVar69;
    puVar38 = PTR_g_logInfo_010f56f8;
    do {
      if (fVar62 <= (float)(&DAT_001ea9dc)[uVar18]) goto LAB_00e9ac70;
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar18 = 0xff;
LAB_00e9ac70:
    fVar42 = (float)(&DAT_001ea9dc)[uVar18] - (float)(&DAT_001ea9d8)[uVar18];
    if (1e-06 <= fVar42) {
      fVar43 = (&DAT_010fb780)[uVar18];
      fVar42 = ((float)(&DAT_010fb784)[uVar18] - fVar43) / fVar42;
    }
    else {
      fVar42 = 1.0;
      fVar43 = (&DAT_010fb780)[uVar18];
    }
    uVar1 = uVar18 + 1;
    fVar68 = pfVar11[3];
    pfVar11 = pfVar11 + 4;
    if (uVar1 < 0x101) {
      uVar1 = 0x100;
    }
    uVar69 = NEON_fmadd(fVar62 - (float)(&DAT_001ea9d8)[uVar18],fVar42,fVar43);
    puVar36[2] = uVar69;
    do {
      if (fVar68 <= (float)(&DAT_001ea9dc)[uVar18]) goto LAB_00e9acec;
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
    uVar18 = 0xff;
LAB_00e9acec:
    fVar42 = (float)(&DAT_001ea9dc)[uVar18] - (float)(&DAT_001ea9d8)[uVar18];
    if (fVar42 < 1e-06) {
      fVar42 = 1.0;
      fVar43 = (&DAT_010fb780)[uVar18];
    }
    else {
      fVar43 = (&DAT_010fb780)[uVar18];
      fVar42 = ((float)(&DAT_010fb784)[uVar18] - fVar43) / fVar42;
    }
    lVar24 = lVar24 + 4;
    uVar69 = NEON_fmadd(fVar68 - (float)(&DAT_001ea9d8)[uVar18],fVar42,fVar43);
    puVar36[3] = uVar69;
    puVar36 = puVar36 + 4;
  } while( true );
  uVar12 = *(undefined8 *)(puVar38 + 0x28);
  if (((uint)uVar12 >> 0x15 & 1) == 0) {
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9befc;
LAB_00e9ad28:
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x12b995,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9ad28;
LAB_00e9befc:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18824c,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec4a,pcVar14,0,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  pfVar11 = (float *)&DAT_001ea9e8;
  lVar24 = 0x100;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9ae1c;
LAB_00e9adbc:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9ae60;
LAB_00e9adc0:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9aea4;
LAB_00e9adc4:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9aee8;
LAB_00e9adc8:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9af2c;
LAB_00e9adcc:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9af70;
LAB_00e9add0:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec4a,pcVar14,
                 (double)pfVar11[-3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9adbc;
LAB_00e9ae1c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec4a,pcVar14,
                 (double)pfVar11[-2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9adc0;
LAB_00e9ae60:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec4a,pcVar14,
                 (double)pfVar11[-1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9adc4;
LAB_00e9aea4:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec4a,pcVar14,
                 (double)*pfVar11,uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9adc8;
LAB_00e9aee8:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec4a,pcVar14,
                 (double)pfVar11[1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9adcc;
LAB_00e9af2c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec4a,pcVar14,
                 (double)pfVar11[2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9add0;
LAB_00e9af70:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec4a,pcVar14,
                 (double)pfVar11[3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18ec4a,pcVar14,
                 (double)pfVar11[4],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    lVar24 = lVar24 + -8;
    pfVar11 = pfVar11 + 8;
  } while (lVar24 != 0);
  if (((uint)uVar12 >> 0x15 & 1) == 0) {
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9bf98;
LAB_00e9b000:
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9bfe4;
LAB_00e9b004:
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x18824c,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b000;
LAB_00e9bf98:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc90b,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b004;
LAB_00e9bfe4:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be310,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195514,pcVar14,
               (double)DAT_010fb780,uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  pfVar11 = (float *)&DAT_010fb790;
  lVar24 = 0x100;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b100;
LAB_00e9b0a0:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b144;
LAB_00e9b0a4:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b188;
LAB_00e9b0a8:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b1cc;
LAB_00e9b0ac:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b210;
LAB_00e9b0b0:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b254;
LAB_00e9b0b4:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195514,pcVar14,
                 (double)pfVar11[-3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b0a0;
LAB_00e9b100:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195514,pcVar14,
                 (double)pfVar11[-2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b0a4;
LAB_00e9b144:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195514,pcVar14,
                 (double)pfVar11[-1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b0a8;
LAB_00e9b188:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195514,pcVar14,
                 (double)*pfVar11,uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b0ac;
LAB_00e9b1cc:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195514,pcVar14,
                 (double)pfVar11[1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b0b0;
LAB_00e9b210:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195514,pcVar14,
                 (double)pfVar11[2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b0b4;
LAB_00e9b254:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195514,pcVar14,
                 (double)pfVar11[3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195514,pcVar14,
                 (double)pfVar11[4],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    lVar24 = lVar24 + -8;
    pfVar11 = pfVar11 + 8;
  } while (lVar24 != 0);
  if (((uint)uVar12 >> 0x15 & 1) == 0) {
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9c080;
LAB_00e9b2e4:
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9c0cc;
LAB_00e9b2e8:
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1be310,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b2e4;
LAB_00e9c080:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17a387,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b2e8;
LAB_00e9c0cc:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19552f,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ace3,pcVar14,
               (double)DAT_012eda54,uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  pfVar11 = (float *)&DAT_012eda74;
  lVar24 = 0x100;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b3e4;
LAB_00e9b384:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b428;
LAB_00e9b388:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b46c;
LAB_00e9b38c:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b4b0;
LAB_00e9b390:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b4f4;
LAB_00e9b394:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b538;
LAB_00e9b398:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ace3,pcVar14,
                 (double)pfVar11[-7],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b384;
LAB_00e9b3e4:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ace3,pcVar14,
                 (double)pfVar11[-6],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b388;
LAB_00e9b428:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ace3,pcVar14,
                 (double)pfVar11[-5],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b38c;
LAB_00e9b46c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ace3,pcVar14,
                 (double)pfVar11[-4],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b390;
LAB_00e9b4b0:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ace3,pcVar14,
                 (double)pfVar11[-3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b394;
LAB_00e9b4f4:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ace3,pcVar14,
                 (double)pfVar11[-2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b398;
LAB_00e9b538:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ace3,pcVar14,
                 (double)pfVar11[-1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x13ace3,pcVar14,
                 (double)*pfVar11,uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    pfVar11 = pfVar11 + 8;
    lVar24 = lVar24 + -8;
  } while (lVar24 != 0);
  if (((uint)uVar12 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19552f,pcVar14,
               uVar12,"convert_bhist_into_ihist");
  }
  uVar26 = 0xfffffffffffffff0;
  lVar24 = 0;
  do {
    uVar12 = *(undefined8 *)((long)&DAT_012edad8 + lVar24);
    uVar59 = *(undefined8 *)((long)&DAT_012edb10 + lVar24);
    uVar57 = *(undefined8 *)((long)&DAT_012edb08 + lVar24);
    uVar46 = *(undefined8 *)((long)&DAT_012edaf0 + lVar24);
    uVar44 = *(undefined8 *)((long)&DAT_012edae8 + lVar24);
    uVar52 = *(undefined8 *)((long)&DAT_012edb00 + lVar24);
    uVar50 = *(undefined8 *)((long)&DAT_012edaf8 + lVar24);
    uVar64 = *(undefined8 *)((long)&DAT_012edad4 + lVar24);
    uVar55 = *(undefined8 *)((long)&DAT_012edaec + lVar24);
    uVar53 = *(undefined8 *)((long)&DAT_012edae4 + lVar24);
    uVar71 = *(undefined8 *)((long)&DAT_012edafc + lVar24);
    uVar70 = *(undefined8 *)((long)&DAT_012edaf4 + lVar24);
    uVar74 = *(undefined8 *)((long)&DAT_012edb0c + lVar24);
    uVar73 = *(undefined8 *)((long)&DAT_012edb04 + lVar24);
    uVar16 = *(undefined8 *)((long)&DAT_012edb20 + lVar24);
    uVar13 = *(undefined8 *)((long)&DAT_012edb18 + lVar24);
    uVar67 = *(undefined8 *)((long)&DAT_012edb30 + lVar24);
    uVar65 = *(undefined8 *)((long)&DAT_012edb28 + lVar24);
    uVar76 = *(undefined8 *)((long)&DAT_012edb40 + lVar24);
    uVar75 = *(undefined8 *)((long)&DAT_012edb38 + lVar24);
    uVar80 = *(undefined8 *)((long)&DAT_012edb50 + lVar24);
    uVar78 = *(undefined8 *)((long)&DAT_012edb48 + lVar24);
    uVar84 = *(undefined8 *)((long)&DAT_012edb1c + lVar24);
    uVar83 = *(undefined8 *)((long)&DAT_012edb14 + lVar24);
    uVar47 = *(undefined8 *)((long)&DAT_012edb2c + lVar24);
    uVar45 = *(undefined8 *)((long)&DAT_012edb24 + lVar24);
    uVar56 = *(undefined8 *)((long)&DAT_012edb3c + lVar24);
    uVar54 = *(undefined8 *)((long)&DAT_012edb34 + lVar24);
    uVar60 = *(undefined8 *)((long)&DAT_012edb4c + lVar24);
    uVar58 = *(undefined8 *)((long)&DAT_012edb44 + lVar24);
    uVar26 = uVar26 + 0x40;
    *(ulong *)((long)&DAT_010fb788 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012eda60 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda5c + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012eda60 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda5c + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb780 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012eda58 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda54 + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012eda58 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda54 + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb798 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012eda70 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda6c + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012eda70 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda6c + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb790 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012eda68 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda64 + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012eda68 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda64 + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7a8 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012eda80 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda7c + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012eda80 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda7c + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7a0 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012eda78 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda74 + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012eda78 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda74 + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7b8 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012eda90 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda8c + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012eda90 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda8c + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7b0 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012eda88 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda84 + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012eda88 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda84 + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7c8 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012edaa0 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda9c + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012edaa0 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda9c + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7c0 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012eda98 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012eda94 + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012eda98 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012eda94 + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7d8 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012edab0 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012edaac + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012edab0 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012edaac + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7d0 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012edaa8 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012edaa4 + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012edaa8 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012edaa4 + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7e8 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012edac0 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012edabc + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012edac0 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012edabc + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7e0 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012edab8 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012edab4 + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012edab8 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012edab4 + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7f8 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012edad0 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012edacc + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012edad0 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012edacc + lVar24)) * 16384.0);
    *(ulong *)((long)&DAT_010fb7f0 + lVar24) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012edac8 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012edac4 + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012edac8 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012edac4 + lVar24)) * 16384.0);
    *(ulong *)(lVar24 + 0x10fb808) =
         CONCAT44(((float)((ulong)*(undefined8 *)((long)&DAT_012edae0 + lVar24) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&DAT_012edadc + lVar24) >> 0x20)) * 16384.0,
                  ((float)*(undefined8 *)((long)&DAT_012edae0 + lVar24) -
                  (float)*(undefined8 *)((long)&DAT_012edadc + lVar24)) * 16384.0);
    *(ulong *)(&DAT_010fb800 + lVar24) =
         CONCAT44(((float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar64 >> 0x20)) * 16384.0,
                  ((float)uVar12 - (float)uVar64) * 16384.0);
    *(ulong *)(lVar24 + 0x10fb818) =
         CONCAT44(((float)((ulong)uVar46 >> 0x20) - (float)((ulong)uVar55 >> 0x20)) * 16384.0,
                  ((float)uVar46 - (float)uVar55) * 16384.0);
    *(ulong *)(&DAT_010fb810 + lVar24) =
         CONCAT44(((float)((ulong)uVar44 >> 0x20) - (float)((ulong)uVar53 >> 0x20)) * 16384.0,
                  ((float)uVar44 - (float)uVar53) * 16384.0);
    *(ulong *)(lVar24 + 0x10fb828) =
         CONCAT44(((float)((ulong)uVar52 >> 0x20) - (float)((ulong)uVar71 >> 0x20)) * 16384.0,
                  ((float)uVar52 - (float)uVar71) * 16384.0);
    *(ulong *)(&DAT_010fb820 + lVar24) =
         CONCAT44(((float)((ulong)uVar50 >> 0x20) - (float)((ulong)uVar70 >> 0x20)) * 16384.0,
                  ((float)uVar50 - (float)uVar70) * 16384.0);
    *(ulong *)(lVar24 + 0x10fb838) =
         CONCAT44(((float)((ulong)uVar59 >> 0x20) - (float)((ulong)uVar74 >> 0x20)) * 16384.0,
                  ((float)uVar59 - (float)uVar74) * 16384.0);
    *(ulong *)(&DAT_010fb830 + lVar24) =
         CONCAT44(((float)((ulong)uVar57 >> 0x20) - (float)((ulong)uVar73 >> 0x20)) * 16384.0,
                  ((float)uVar57 - (float)uVar73) * 16384.0);
    *(ulong *)(lVar24 + 0x10fb848) =
         CONCAT44(((float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar84 >> 0x20)) * 16384.0,
                  ((float)uVar16 - (float)uVar84) * 16384.0);
    *(ulong *)(&DAT_010fb840 + lVar24) =
         CONCAT44(((float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar83 >> 0x20)) * 16384.0,
                  ((float)uVar13 - (float)uVar83) * 16384.0);
    *(ulong *)(lVar24 + 0x10fb858) =
         CONCAT44(((float)((ulong)uVar67 >> 0x20) - (float)((ulong)uVar47 >> 0x20)) * 16384.0,
                  ((float)uVar67 - (float)uVar47) * 16384.0);
    *(ulong *)(&DAT_010fb850 + lVar24) =
         CONCAT44(((float)((ulong)uVar65 >> 0x20) - (float)((ulong)uVar45 >> 0x20)) * 16384.0,
                  ((float)uVar65 - (float)uVar45) * 16384.0);
    *(ulong *)(lVar24 + 0x10fb868) =
         CONCAT44(((float)((ulong)uVar76 >> 0x20) - (float)((ulong)uVar56 >> 0x20)) * 16384.0,
                  ((float)uVar76 - (float)uVar56) * 16384.0);
    *(ulong *)(&DAT_010fb860 + lVar24) =
         CONCAT44(((float)((ulong)uVar75 >> 0x20) - (float)((ulong)uVar54 >> 0x20)) * 16384.0,
                  ((float)uVar75 - (float)uVar54) * 16384.0);
    *(ulong *)(lVar24 + 0x10fb878) =
         CONCAT44(((float)((ulong)uVar80 >> 0x20) - (float)((ulong)uVar60 >> 0x20)) * 16384.0,
                  ((float)uVar80 - (float)uVar60) * 16384.0);
    *(ulong *)(&DAT_010fb870 + lVar24) =
         CONCAT44(((float)((ulong)uVar78 >> 0x20) - (float)((ulong)uVar58 >> 0x20)) * 16384.0,
                  ((float)uVar78 - (float)uVar58) * 16384.0);
    puVar38 = PTR_g_logInfo_010f56f8;
    lVar24 = lVar24 + 0x100;
  } while (uVar26 < 0xf0);
  uVar12 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
  if (((uint)uVar12 >> 0x15 & 1) == 0) {
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9c168;
LAB_00e9b7f4:
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1b728c,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b7f4;
LAB_00e9c168:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9e2,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133cf8,pcVar14,0,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  pfVar11 = (float *)&DAT_001e99e4;
  lVar24 = 0x400;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b8e8;
LAB_00e9b888:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b92c;
LAB_00e9b88c:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b970;
LAB_00e9b890:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b9b4;
LAB_00e9b894:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9b9f8;
LAB_00e9b898:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9ba3c;
LAB_00e9b89c:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133cf8,pcVar14,
                 (double)pfVar11[-3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b888;
LAB_00e9b8e8:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133cf8,pcVar14,
                 (double)pfVar11[-2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b88c;
LAB_00e9b92c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133cf8,pcVar14,
                 (double)pfVar11[-1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b890;
LAB_00e9b970:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133cf8,pcVar14,
                 (double)*pfVar11,uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b894;
LAB_00e9b9b4:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133cf8,pcVar14,
                 (double)pfVar11[1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b898;
LAB_00e9b9f8:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133cf8,pcVar14,
                 (double)pfVar11[2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9b89c;
LAB_00e9ba3c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133cf8,pcVar14,
                 (double)pfVar11[3],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x133cf8,pcVar14,
                 (double)pfVar11[4],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    lVar24 = lVar24 + -8;
    pfVar11 = pfVar11 + 8;
  } while (lVar24 != 0);
  if (((uint)uVar12 >> 0x15 & 1) == 0) {
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9c208;
LAB_00e9bad0:
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9c254;
LAB_00e9bad4:
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x16b9e2,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9bad0;
LAB_00e9c208:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x156faa,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9bad4;
LAB_00e9c254:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x156fed,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1810eb,pcVar14,
               uVar12,"convert_bhist_into_ihist",(ulong)*puVar34);
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  lVar24 = 0x3ff;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9bbac;
LAB_00e9bb64:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1810eb,pcVar14,
                 uVar12,"convert_bhist_into_ihist",(ulong)puVar34[1]);
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9bb64;
LAB_00e9bbac:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1810eb,pcVar14,
                 uVar12,"convert_bhist_into_ihist",(ulong)puVar34[2]);
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1810eb,pcVar14,
                 uVar12,"convert_bhist_into_ihist",(ulong)puVar34[3]);
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    lVar24 = lVar24 + -3;
    puVar34 = puVar34 + 3;
  } while (lVar24 != 0);
  if (((uint)uVar12 >> 0x15 & 1) == 0) {
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9c2f0;
LAB_00e9bc34:
    if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9c33c;
LAB_00e9bc38:
    uVar19 = (uint)uVar12;
  }
  else {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x156fed,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9bc34;
LAB_00e9c2f0:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1cc944,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9bc38;
LAB_00e9c33c:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x195548,pcVar14,
               uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
    uVar19 = (uint)uVar12;
  }
  if ((uVar19 >> 0x15 & 1) != 0) {
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c4e,pcVar14,
               (double)DAT_010fb780,uVar12,"convert_bhist_into_ihist");
    uVar12 = *(undefined8 *)(puVar38 + 0x28);
  }
  pfVar11 = (float *)&DAT_010fb78c;
  lVar24 = 0xff;
  do {
    if (((uint)uVar12 >> 0x15 & 1) == 0) {
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9bd28;
LAB_00e9bcd4:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9bd6c;
LAB_00e9bcd8:
      if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00e9bdb0;
LAB_00e9bcdc:
      uVar19 = (uint)uVar12;
    }
    else {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c4e,pcVar14,
                 (double)pfVar11[-2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9bcd4;
LAB_00e9bd28:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c4e,pcVar14,
                 (double)pfVar11[-1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9bcd8;
LAB_00e9bd6c:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c4e,pcVar14,
                 (double)*pfVar11,uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00e9bcdc;
LAB_00e9bdb0:
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c4e,pcVar14,
                 (double)pfVar11[1],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
      uVar19 = (uint)uVar12;
    }
    if ((uVar19 >> 0x15 & 1) != 0) {
      pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
      uVar12 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x124c4e,pcVar14,
                 (double)pfVar11[2],uVar12,"convert_bhist_into_ihist");
      uVar12 = *(undefined8 *)(puVar38 + 0x28);
    }
    lVar24 = lVar24 + -5;
    pfVar11 = pfVar11 + 5;
  } while (lVar24 != 0);
  if (((uint)uVar12 >> 0x15 & 1) != 0) {
    uVar19 = 0x195548;
LAB_00e9be48:
    pcVar14 = (char *)CamX::Log::GroupToString(0x200000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterpolation/tmc202interpolation_v2.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,uVar19,pcVar14,uVar12,
               "convert_bhist_into_ihist");
  }
LAB_00e9be88:
  FUN_00e8d070(param_1,param_2);
  goto LAB_00e9be94;
}


