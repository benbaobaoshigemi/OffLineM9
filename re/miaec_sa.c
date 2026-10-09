// ===== 0x173af8 UpdateMtrTuningData @ 00273af8

/* MI_AEC::Metering::UpdateMtrTuningData(MI_AEC::MtrTriggerData, MI_AEC::MtrTuningData*) */

undefined8 __thiscall
MI_AEC::Metering::UpdateMtrTuningData(Metering *this,MtrTriggerData param_1,MtrTuningData *param_2)

{
  MI_LOG *this_00;
  int iVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  pfVar3 = (float *)(ulong)param_1;
  lVar2 = *(long *)(this + 0x488);
  fVar20 = *pfVar3;
  fVar11 = pfVar3[1];
  fVar18 = pfVar3[2];
  param_2[0xd4] = (MtrTuningData)(*(float *)(lVar2 + 0x46c8) != 0.0);
  pfVar3 = *(float **)(lVar2 + 0x46d0);
  fVar15 = -1.0;
  uVar5 = *(long *)(lVar2 + 0x46d8) - (long)pfVar3;
  iVar4 = (int)(uVar5 >> 2);
  fVar17 = fVar15;
  if (uVar5 != 0) {
    if (pfVar3[((long)uVar5 >> 2) + -1] <= fVar20) {
      uVar7 = (ulong)(iVar4 - 1);
LAB_00273be0:
      iVar1 = (int)uVar7;
      if (iVar1 == -1) goto LAB_00273c64;
    }
    else {
      fVar16 = *pfVar3;
      if ((fVar16 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar7 = 0;
        while( true ) {
          if ((fVar16 <= fVar20) && (fVar20 < pfVar3[uVar7 + 1])) goto LAB_00273be0;
          if ((ulong)(iVar4 - 1U) - 1 == uVar7) break;
          fVar16 = pfVar3[uVar7 + 1];
          uVar7 = uVar7 + 1;
        }
      }
      iVar1 = 0;
    }
    lVar8 = (long)iVar1;
    if (iVar1 == iVar4 + -1) {
      fVar17 = *(float *)(*(long *)(lVar2 + 0x46e8) + lVar8 * 4);
    }
    else {
      uVar7 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
      fVar16 = *(float *)(*(long *)(lVar2 + 0x46e8) + lVar8 * 4);
      dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar8]) /
                                           (*(float *)((long)pfVar3 + uVar7) - pfVar3[lVar8])),
                                   0x3ff0000000000000);
      fVar17 = (float)dVar22;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar17 = fVar16 + (*(float *)(*(long *)(lVar2 + 0x46e8) + uVar7) - fVar16) * fVar17;
    }
  }
LAB_00273c64:
  *(float *)(param_2 + 0xd5) = fVar17;
  pfVar9 = *(float **)(lVar2 + 0x4700);
  uVar7 = *(long *)(lVar2 + 0x4708) - (long)pfVar9;
  if (uVar7 != 0) {
    iVar1 = (int)(uVar7 >> 2);
    if (pfVar9[((long)uVar7 >> 2) + -1] <= fVar11) {
      uVar7 = (ulong)(iVar1 - 1);
LAB_00273cec:
      iVar10 = (int)uVar7;
      if (iVar10 == -1) goto LAB_00273d6c;
    }
    else {
      fVar17 = *pfVar9;
      if ((fVar17 < fVar11) && (0 < (int)(iVar1 - 1U))) {
        uVar7 = 0;
        while( true ) {
          if ((fVar17 <= fVar11) && (fVar11 < pfVar9[uVar7 + 1])) goto LAB_00273cec;
          if ((ulong)(iVar1 - 1U) - 1 == uVar7) break;
          fVar17 = pfVar9[uVar7 + 1];
          uVar7 = uVar7 + 1;
        }
      }
      iVar10 = 0;
    }
    lVar8 = (long)iVar10;
    if (iVar10 == iVar1 + -1) {
      fVar15 = *(float *)(*(long *)(lVar2 + 0x4718) + lVar8 * 4);
    }
    else {
      uVar7 = -(ulong)(iVar10 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar10 + 1U) << 2;
      fVar15 = *(float *)(*(long *)(lVar2 + 0x4718) + lVar8 * 4);
      dVar22 = (double)NEON_fminnm((double)((fVar11 - pfVar9[lVar8]) /
                                           (*(float *)((long)pfVar9 + uVar7) - pfVar9[lVar8])),
                                   0x3ff0000000000000);
      fVar17 = (float)dVar22;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar15 = fVar15 + (*(float *)(*(long *)(lVar2 + 0x4718) + uVar7) - fVar15) * fVar17;
    }
  }
LAB_00273d6c:
  uVar21 = NEON_fmov(0xbf800000,4);
  *(float *)(param_2 + 0xd9) = fVar15;
  if (uVar5 == 0) {
    *(undefined8 *)(param_2 + 0xdd) = uVar21;
    *(undefined4 *)(param_2 + 0xe5) = 0xbf800000;
    fVar17 = -1.0;
  }
  else {
    lVar8 = ((long)uVar5 >> 2) + -1;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00273dfc:
      iVar1 = (int)uVar5;
      if (iVar1 != -1) goto LAB_00273e10;
      fVar17 = -1.0;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00273dfc;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
LAB_00273e10:
      lVar6 = (long)iVar1;
      if (iVar1 == iVar4 + -1) {
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4730) + lVar6 * 4);
      }
      else {
        uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4730) + lVar6 * 4);
        dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                             (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                     0x3ff0000000000000);
        fVar11 = (float)dVar22;
        if (0.0 <= fVar11) {
          fVar11 = 0.0;
        }
        fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4730) + uVar5) - fVar17) * fVar11;
      }
    }
    *(float *)(param_2 + 0xdd) = fVar17;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00273eec:
      iVar1 = (int)uVar5;
      if (iVar1 != -1) goto LAB_00273f00;
      fVar17 = -1.0;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00273eec;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
LAB_00273f00:
      lVar6 = (long)iVar1;
      if (iVar1 == iVar4 + -1) {
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4748) + lVar6 * 4);
      }
      else {
        uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4748) + lVar6 * 4);
        dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                             (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                     0x3ff0000000000000);
        fVar11 = (float)dVar22;
        if (0.0 <= fVar11) {
          fVar11 = 0.0;
        }
        fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4748) + uVar5) - fVar17) * fVar11;
      }
    }
    *(float *)(param_2 + 0xe1) = fVar17;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00273fdc:
      iVar1 = (int)uVar5;
      if (iVar1 != -1) goto LAB_00273ff0;
      fVar17 = -1.0;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00273fdc;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
LAB_00273ff0:
      lVar6 = (long)iVar1;
      if (iVar1 == iVar4 + -1) {
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4760) + lVar6 * 4);
      }
      else {
        uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4760) + lVar6 * 4);
        dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                             (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                     0x3ff0000000000000);
        fVar11 = (float)dVar22;
        if (0.0 <= fVar11) {
          fVar11 = 0.0;
        }
        fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4760) + uVar5) - fVar17) * fVar11;
      }
    }
    *(float *)(param_2 + 0xe5) = fVar17;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_002740cc:
      iVar1 = (int)uVar5;
      if (iVar1 == -1) {
        fVar17 = -1.0;
        goto LAB_00274150;
      }
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_002740cc;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
    }
    lVar8 = (long)iVar1;
    if (iVar1 == iVar4 + -1) {
      fVar17 = *(float *)(*(long *)(lVar2 + 0x4778) + lVar8 * 4);
    }
    else {
      uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(lVar2 + 0x4778) + lVar8 * 4);
      dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar8]) /
                                           (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar8])),
                                   0x3ff0000000000000);
      fVar11 = (float)dVar22;
      if (0.0 <= fVar11) {
        fVar11 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4778) + uVar5) - fVar17) * fVar11;
    }
  }
LAB_00274150:
  *(float *)(param_2 + 0xe9) = fVar17;
  this_00 = (MI_LOG *)(this + 0x10);
  lVar2 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            (this_00,0,2,'V',(char *)(lVar2 + 1),0x2cc,"UpdateMtrTuningData",
             "pNightScene:enable:%d, lux_weight:%f, dr_weight:%f, tone_pct_start:%f, tone_pct_end:%f, ref_target:%f, cap_thld:%f"
             ,(double)*(float *)(param_2 + 0xd5),(double)*(float *)(param_2 + 0xd9),
             (double)*(float *)(param_2 + 0xdd),(double)*(float *)(param_2 + 0xe1),
             (double)*(float *)(param_2 + 0xe5),(double)*(float *)(param_2 + 0xe9),
             (uint)(byte)param_2[0xd4]);
  lVar2 = *(long *)(this + 0x488);
  param_2[0x106] = (MtrTuningData)(*(float *)(lVar2 + 0x42a0) != 0.0);
  pfVar3 = *(float **)(lVar2 + 0x42a8);
  uVar5 = *(long *)(lVar2 + 0x42b0) - (long)pfVar3;
  iVar4 = (int)(uVar5 >> 2);
  fVar17 = -1.0;
  if (uVar5 != 0) {
    if (pfVar3[((long)uVar5 >> 2) + -1] <= fVar20) {
      uVar7 = (ulong)(iVar4 - 1);
LAB_00274274:
      iVar1 = (int)uVar7;
      fVar17 = -1.0;
      if (iVar1 == -1) goto LAB_002742f4;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar7 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar7 + 1])) goto LAB_00274274;
          if ((ulong)(iVar4 - 1U) - 1 == uVar7) break;
          fVar17 = pfVar3[uVar7 + 1];
          uVar7 = uVar7 + 1;
        }
      }
      iVar1 = 0;
    }
    lVar8 = (long)iVar1;
    if (iVar1 == iVar4 + -1) {
      fVar17 = *(float *)(*(long *)(lVar2 + 0x42c0) + lVar8 * 4);
    }
    else {
      uVar7 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar2 + 0x42c0) + lVar8 * 4);
      dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar8]) /
                                           (*(float *)((long)pfVar3 + uVar7) - pfVar3[lVar8])),
                                   0x3ff0000000000000);
      fVar17 = (float)dVar22;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar17 = fVar11 + (*(float *)(*(long *)(lVar2 + 0x42c0) + uVar7) - fVar11) * fVar17;
    }
  }
LAB_002742f4:
  *(float *)(param_2 + 0x107) = fVar17;
  uVar12 = FUN_0027ecf8(*(undefined4 *)(this + 0xce1c),*(undefined4 *)(this + 0xce20),lVar2 + 0x42d8
                        ,lVar2 + 0x42f0,lVar2 + 0x4308);
  *(undefined4 *)(param_2 + 0x10b) = uVar12;
  if (uVar5 == 0) {
    *(undefined8 *)(param_2 + 0x10f) = uVar21;
    *(undefined4 *)(param_2 + 0x117) = 0xbf800000;
    fVar17 = -1.0;
  }
  else {
    lVar8 = ((long)uVar5 >> 2) + -1;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_002743a0:
      iVar1 = (int)uVar5;
      if (iVar1 != -1) goto LAB_002743b4;
      fVar17 = -1.0;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_002743a0;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
LAB_002743b4:
      lVar6 = (long)iVar1;
      if (iVar1 == iVar4 + -1) {
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4320) + lVar6 * 4);
      }
      else {
        uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4320) + lVar6 * 4);
        dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                             (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                     0x3ff0000000000000);
        fVar11 = (float)dVar22;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4320) + uVar5) - fVar17) * fVar11;
      }
    }
    *(float *)(param_2 + 0x10f) = fVar17;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00274490:
      iVar1 = (int)uVar5;
      if (iVar1 != -1) goto LAB_002744a4;
      fVar17 = -1.0;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00274490;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
LAB_002744a4:
      lVar6 = (long)iVar1;
      if (iVar1 == iVar4 + -1) {
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4338) + lVar6 * 4);
      }
      else {
        uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4338) + lVar6 * 4);
        dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                             (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                     0x3ff0000000000000);
        fVar11 = (float)dVar22;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4338) + uVar5) - fVar17) * fVar11;
      }
    }
    *(float *)(param_2 + 0x113) = fVar17;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00274580:
      iVar1 = (int)uVar5;
      if (iVar1 != -1) goto LAB_00274594;
      fVar17 = -1.0;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00274580;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
LAB_00274594:
      lVar6 = (long)iVar1;
      if (iVar1 == iVar4 + -1) {
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4350) + lVar6 * 4);
      }
      else {
        uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4350) + lVar6 * 4);
        dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                             (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                     0x3ff0000000000000);
        fVar11 = (float)dVar22;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4350) + uVar5) - fVar17) * fVar11;
      }
    }
    *(float *)(param_2 + 0x117) = fVar17;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00274670:
      iVar1 = (int)uVar5;
      if (iVar1 == -1) {
        fVar17 = -1.0;
        goto LAB_002746f4;
      }
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00274670;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
    }
    lVar8 = (long)iVar1;
    if (iVar1 == iVar4 + -1) {
      fVar17 = *(float *)(*(long *)(lVar2 + 0x4368) + lVar8 * 4);
    }
    else {
      uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(lVar2 + 0x4368) + lVar8 * 4);
      dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar8]) /
                                           (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar8])),
                                   0x3ff0000000000000);
      fVar11 = (float)dVar22;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4368) + uVar5) - fVar17) * fVar11;
    }
  }
LAB_002746f4:
  *(float *)(param_2 + 0x11b) = fVar17;
  lVar2 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            (this_00,0,2,'V',(char *)(lVar2 + 1),0x2de,"UpdateMtrTuningData",
             "pSafeSaturationPrevent:enable:%d, lux_weight:%f, luma_dark_bright_weight:%f, tone_pct_st:%f, tone_pct_en:%f, ref_target:%f, cap_thld:%f"
             ,(double)*(float *)(param_2 + 0x107),(double)*(float *)(param_2 + 0x10b),
             (double)*(float *)(param_2 + 0x10f),(double)*(float *)(param_2 + 0x113),
             (double)*(float *)(param_2 + 0x117),(double)*(float *)(param_2 + 0x11b),
             (uint)(byte)param_2[0x106]);
  lVar6 = *(long *)(this + 0x488);
  param_2[0x11f] = (MtrTuningData)(*(float *)(lVar6 + 0x4790) != 0.0);
  uVar13 = *(undefined8 *)(lVar6 + 0x4794);
  lVar2 = lVar6 + 0x47b8;
  *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(lVar6 + 0x479c);
  *(undefined8 *)(param_2 + 0x120) = uVar13;
  uVar13 = *(undefined8 *)(lVar6 + 0x47a4);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(lVar6 + 0x47ac);
  *(undefined8 *)(param_2 + 0x130) = uVar13;
  *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(lVar6 + 0x47b4);
  uVar19 = *(undefined4 *)(this + 0xd120);
  lVar8 = lVar6 + 0x47d0;
  uVar12 = FUN_0027ecf8(fVar18,uVar19,lVar2,lVar8,lVar6 + 0x4830);
  *(undefined4 *)(param_2 + 0x150) = uVar12;
  uVar12 = FUN_0027ecf8(fVar18,uVar19,lVar2,lVar8,lVar6 + 0x4848);
  *(undefined4 *)(param_2 + 0x154) = uVar12;
  uVar12 = FUN_0027ecf8(fVar18,uVar19,lVar2,lVar8,lVar6 + 0x4860);
  *(undefined4 *)(param_2 + 0x158) = uVar12;
  uVar12 = FUN_0027ecf8(fVar18,uVar19,lVar2,lVar8,lVar6 + 0x4878);
  *(undefined4 *)(param_2 + 0x15c) = uVar12;
  uVar12 = FUN_0027ecf8(*(undefined4 *)(this + 0xcf88),uVar19,lVar6 + 0x47e8,lVar6 + 0x4800,
                        lVar6 + 0x4818);
  *(undefined4 *)(param_2 + 0x144) = uVar12;
  *(float *)(param_2 + 0x148) = fVar18;
  *(undefined4 *)(param_2 + 0x14c) = uVar19;
  lVar2 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  dVar22 = (double)*(float *)(param_2 + 0x140);
  dVar23 = (double)*(float *)(param_2 + 0x150);
  dVar24 = (double)*(float *)(param_2 + 0x154);
  dVar25 = (double)*(float *)(param_2 + 0x158);
  dVar26 = (double)*(float *)(param_2 + 0x15c);
  MI_LOG::MI_LOG_HELPER
            (this_00,0,2,'V',(char *)(lVar2 + 1),0x304,"UpdateMtrTuningData",
             "pSuperMoon:enable:%d, remove_stats_thld:%f, bright_count_thld:%f, extra_weight_thld(low/high):%f %f,  small_moon_thld(low/high):%f %f, small_moon_compensate(low/high/max ratio):%f %f %f,start_pct:%f,end_pct:%f, ref_target:%f, cap_thld:%f"
             ,(double)*(float *)(param_2 + 0x120),(double)*(float *)(param_2 + 0x124),
             (double)*(float *)(param_2 + 0x128),(double)*(float *)(param_2 + 300),
             (double)*(float *)(param_2 + 0x130),(double)*(float *)(param_2 + 0x134),
             (double)*(float *)(param_2 + 0x138),(double)*(float *)(param_2 + 0x13c),
             (uint)(byte)param_2[0x11f],dVar22,dVar23,dVar24,dVar25,dVar26);
  lVar2 = *(long *)(this + 0x488);
  param_2[0x160] = (MtrTuningData)(*(float *)(lVar2 + 0x4380) != 0.0);
  pfVar3 = *(float **)(lVar2 + 0x4388);
  uVar5 = *(long *)(lVar2 + 0x4390) - (long)pfVar3;
  iVar4 = (int)(uVar5 >> 2);
  fVar17 = -1.0;
  if (uVar5 != 0) {
    if (pfVar3[((long)uVar5 >> 2) + -1] <= fVar20) {
      uVar7 = (ulong)(iVar4 - 1);
LAB_002749b8:
      iVar1 = (int)uVar7;
      fVar17 = -1.0;
      if (iVar1 == -1) goto LAB_00274a38;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar7 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar7 + 1])) goto LAB_002749b8;
          if ((ulong)(iVar4 - 1U) - 1 == uVar7) break;
          fVar17 = pfVar3[uVar7 + 1];
          uVar7 = uVar7 + 1;
        }
      }
      iVar1 = 0;
    }
    lVar8 = (long)iVar1;
    if (iVar1 == iVar4 + -1) {
      fVar17 = *(float *)(*(long *)(lVar2 + 0x43a0) + lVar8 * 4);
    }
    else {
      uVar7 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar2 + 0x43a0) + lVar8 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar8]) /
                                           (*(float *)((long)pfVar3 + uVar7) - pfVar3[lVar8])),
                                   0x3ff0000000000000);
      fVar17 = (float)dVar14;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar17 = fVar11 + (*(float *)(*(long *)(lVar2 + 0x43a0) + uVar7) - fVar11) * fVar17;
    }
  }
LAB_00274a38:
  *(float *)(param_2 + 0x161) = fVar17;
  uVar12 = FUN_0027ecf8(*(undefined4 *)(this + 0xce1c),*(undefined4 *)(this + 0xce20),lVar2 + 0x43b8
                        ,lVar2 + 0x43d0,lVar2 + 0x43e8);
  *(undefined4 *)(param_2 + 0x165) = uVar12;
  if (uVar5 == 0) {
    *(undefined8 *)(param_2 + 0x169) = uVar21;
    *(undefined4 *)(param_2 + 0x171) = 0xbf800000;
    fVar17 = -1.0;
  }
  else {
    lVar8 = ((long)uVar5 >> 2) + -1;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00274ae4:
      iVar1 = (int)uVar5;
      if (iVar1 != -1) goto LAB_00274af8;
      fVar17 = -1.0;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00274ae4;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
LAB_00274af8:
      lVar6 = (long)iVar1;
      if (iVar1 == iVar4 + -1) {
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4400) + lVar6 * 4);
      }
      else {
        uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4400) + lVar6 * 4);
        dVar14 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                             (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                     0x3ff0000000000000);
        fVar11 = (float)dVar14;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4400) + uVar5) - fVar17) * fVar11;
      }
    }
    *(float *)(param_2 + 0x169) = fVar17;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00274bd4:
      iVar1 = (int)uVar5;
      if (iVar1 != -1) goto LAB_00274be8;
      fVar17 = -1.0;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00274bd4;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
LAB_00274be8:
      lVar6 = (long)iVar1;
      if (iVar1 == iVar4 + -1) {
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4418) + lVar6 * 4);
      }
      else {
        uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4418) + lVar6 * 4);
        dVar14 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                             (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                     0x3ff0000000000000);
        fVar11 = (float)dVar14;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4418) + uVar5) - fVar17) * fVar11;
      }
    }
    *(float *)(param_2 + 0x16d) = fVar17;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00274cc4:
      iVar1 = (int)uVar5;
      if (iVar1 != -1) goto LAB_00274cd8;
      fVar17 = -1.0;
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00274cc4;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
LAB_00274cd8:
      lVar6 = (long)iVar1;
      if (iVar1 == iVar4 + -1) {
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4430) + lVar6 * 4);
      }
      else {
        uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
        fVar17 = *(float *)(*(long *)(lVar2 + 0x4430) + lVar6 * 4);
        dVar14 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                             (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                     0x3ff0000000000000);
        fVar11 = (float)dVar14;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4430) + uVar5) - fVar17) * fVar11;
      }
    }
    *(float *)(param_2 + 0x171) = fVar17;
    if (pfVar3[lVar8] <= fVar20) {
      uVar5 = (ulong)(iVar4 - 1);
LAB_00274db4:
      iVar1 = (int)uVar5;
      if (iVar1 == -1) {
        fVar17 = -1.0;
        goto LAB_00274e38;
      }
    }
    else {
      fVar17 = *pfVar3;
      if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
        uVar5 = 0;
        while( true ) {
          if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00274db4;
          if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
          fVar17 = pfVar3[uVar5 + 1];
          uVar5 = uVar5 + 1;
        }
      }
      iVar1 = 0;
    }
    lVar8 = (long)iVar1;
    if (iVar1 == iVar4 + -1) {
      fVar17 = *(float *)(*(long *)(lVar2 + 0x4448) + lVar8 * 4);
    }
    else {
      uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(lVar2 + 0x4448) + lVar8 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar8]) /
                                           (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar8])),
                                   0x3ff0000000000000);
      fVar11 = (float)dVar14;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4448) + uVar5) - fVar17) * fVar11;
    }
  }
LAB_00274e38:
  *(float *)(param_2 + 0x175) = fVar17;
  lVar2 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            (this_00,0,2,'V',(char *)(lVar2 + 1),0x315,"UpdateMtrTuningData",
             "pDarkPrevent:enable:%d, lux_weight:%f, luma_dark_bright_weight:%f, tone_pct_st:%f, tone_pct_en:%f, ref_target:%f, cap_thld:%f"
             ,(double)*(float *)(param_2 + 0x161),(double)*(float *)(param_2 + 0x165),
             (double)*(float *)(param_2 + 0x169),(double)*(float *)(param_2 + 0x16d),
             (double)*(float *)(param_2 + 0x171),(double)*(float *)(param_2 + 0x175),
             (uint)(byte)param_2[0x160],dVar22,dVar23,dVar24,dVar25,dVar26);
  lVar2 = *(long *)(this + 0x488);
  pfVar3 = *(float **)(lVar2 + 0x49e0);
  uVar5 = *(long *)(lVar2 + 0x49e8) - (long)pfVar3;
  if (uVar5 == 0) {
    *(undefined8 *)(param_2 + 0x3f9) = uVar21;
    fVar17 = -1.0;
    goto LAB_002751b8;
  }
  lVar8 = ((long)uVar5 >> 2) + -1;
  iVar4 = (int)(uVar5 >> 2);
  if (pfVar3[lVar8] <= fVar20) {
    uVar5 = (ulong)(iVar4 - 1);
LAB_00274f54:
    iVar1 = (int)uVar5;
    if (iVar1 != -1) goto LAB_00274f68;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar3;
    if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
      uVar5 = 0;
      while( true ) {
        if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00274f54;
        if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
        fVar17 = pfVar3[uVar5 + 1];
        uVar5 = uVar5 + 1;
      }
    }
    iVar1 = 0;
LAB_00274f68:
    lVar6 = (long)iVar1;
    if (iVar1 == iVar4 + -1) {
      fVar17 = *(float *)(*(long *)(lVar2 + 0x49f8) + lVar6 * 4);
    }
    else {
      uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(lVar2 + 0x49f8) + lVar6 * 4);
      dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                           (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                   0x3ff0000000000000);
      fVar11 = (float)dVar22;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x49f8) + uVar5) - fVar17) * fVar11;
    }
  }
  *(float *)(param_2 + 0x3f9) = fVar17;
  if (pfVar3[lVar8] <= fVar20) {
    uVar5 = (ulong)(iVar4 - 1);
LAB_00275044:
    iVar1 = (int)uVar5;
    if (iVar1 != -1) goto LAB_00275058;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar3;
    if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
      uVar5 = 0;
      while( true ) {
        if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00275044;
        if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
        fVar17 = pfVar3[uVar5 + 1];
        uVar5 = uVar5 + 1;
      }
    }
    iVar1 = 0;
LAB_00275058:
    lVar6 = (long)iVar1;
    if (iVar1 == iVar4 + -1) {
      fVar17 = *(float *)(*(long *)(lVar2 + 0x4a10) + lVar6 * 4);
    }
    else {
      uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(lVar2 + 0x4a10) + lVar6 * 4);
      dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar6]) /
                                           (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar6])),
                                   0x3ff0000000000000);
      fVar11 = (float)dVar22;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4a10) + uVar5) - fVar17) * fVar11;
    }
  }
  *(float *)(param_2 + 0x3fd) = fVar17;
  if (pfVar3[lVar8] <= fVar20) {
    uVar5 = (ulong)(iVar4 - 1);
LAB_00275134:
    iVar1 = (int)uVar5;
    if (iVar1 == -1) {
      fVar17 = -1.0;
      goto LAB_002751b8;
    }
  }
  else {
    fVar17 = *pfVar3;
    if ((fVar17 < fVar20) && (0 < (int)(iVar4 - 1U))) {
      uVar5 = 0;
      while( true ) {
        if ((fVar17 <= fVar20) && (fVar20 < pfVar3[uVar5 + 1])) goto LAB_00275134;
        if ((ulong)(iVar4 - 1U) - 1 == uVar5) break;
        fVar17 = pfVar3[uVar5 + 1];
        uVar5 = uVar5 + 1;
      }
    }
    iVar1 = 0;
  }
  lVar8 = (long)iVar1;
  if (iVar1 == iVar4 + -1) {
    fVar17 = *(float *)(*(long *)(lVar2 + 0x4a28) + lVar8 * 4);
  }
  else {
    uVar5 = -(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar1 + 1U) << 2;
    fVar17 = *(float *)(*(long *)(lVar2 + 0x4a28) + lVar8 * 4);
    dVar22 = (double)NEON_fminnm((double)((fVar20 - pfVar3[lVar8]) /
                                         (*(float *)((long)pfVar3 + uVar5) - pfVar3[lVar8])),
                                 0x3ff0000000000000);
    fVar11 = (float)dVar22;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar17 = fVar17 + (*(float *)(*(long *)(lVar2 + 0x4a28) + uVar5) - fVar17) * fVar11;
  }
LAB_002751b8:
  *(float *)(param_2 + 0x403) = fVar17;
  param_2[0x402] = *(MtrTuningData *)(lVar2 + 0x4a40);
  param_2[0x401] = *(MtrTuningData *)(lVar2 + 0x4a41);
  param_2[0x407] = *(MtrTuningData *)(lVar2 + 0x4a42);
  param_2[0x408] = *(MtrTuningData *)(lVar2 + 0x4a43);
  return 1;
}


// ===== 0x184838 CalculateFrameSA @ 00284838

/* MI_AEC::Metering::CalculateFrameSA(float, MI_AEC::ProcessedBHistStats<unsigned int, 3> const&,
   MI_AEC::HistCommonInfo const&, MI_AEC::HistFrameSAResult*) */

undefined8 __thiscall
MI_AEC::Metering::CalculateFrameSA
          (Metering *this,float param_1,ProcessedBHistStats *param_2,HistCommonInfo *param_3,
          HistFrameSAResult *param_4)

{
  MI_LOG *this_00;
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  
  local_a4 = param_1;
  GetFrameSATuningData
            (this,&local_a4,(HistDynamicInfo *)(this + 0xd4f0),
             (Hist_frameSA_tuning_data *)(*(long *)(this + 0x488) + 0x3ad0),
             (MtrHistCoreTuningData *)(this + 0x59));
  fVar19 = *(float *)(this + 0x7a);
  fVar23 = *(float *)(this + 0x5a);
  fVar20 = *(float *)(this + 0x82);
  fVar25 = *(float *)(this + 0x62);
  fVar22 = *(float *)(this + 0x72);
  fVar26 = *(float *)(this + 0x76);
  fVar21 = *(float *)(this + 0x86);
  fVar27 = *(float *)(this + 0x5e);
  fVar29 = *(float *)(this + 0x66);
  fVar30 = *(float *)(this + 0x7e);
  fVar9 = *(float *)(this + 0x8a);
  fVar10 = *(float *)(this + 0x8e);
  fVar15 = (float)CalculateSpecificToneAvg
                            (this,param_2,(WhiteBalanceInfo *)param_3,*(float *)(this + 0x6a),
                             *(float *)(this + 0x6e));
  fVar22 = (float)CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_3,fVar22,fVar26);
  fVar23 = (float)CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_3,fVar23,fVar25);
  fVar25 = (float)CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_3,fVar27,fVar29);
  fVar23 = fVar23 * *(float *)(param_3 + 0x24);
  fVar25 = fVar25 * *(float *)(param_3 + 0x24);
  this_00 = (MI_LOG *)(this + 0x10);
  lVar13 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  if ((((ABS(fVar25) < 1e-06) || (ABS(fVar15) < 1e-06)) || (ABS(fVar22) < 1e-06)) ||
     (ABS(fVar23) < 1e-06)) {
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar13 + 1),0xc41,"CalculateFrameSA",
               "HistTarget long_exp BT(low/high)/DT(low/high) avg: %f / %f / %f / %f is ZERO! hist metering failed!"
               ,(double)fVar23,(double)fVar25,(double)fVar15,(double)fVar22);
    uVar14 = 0;
  }
  else {
    pfVar1 = (float *)(this + 0xce10);
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar13 + 1),0xc47,"CalculateFrameSA",
               "sat_ratio = %f long/short ratio = %f",(double)*(float *)(param_3 + 0x24),
               (double)*(float *)(param_3 + 0x20));
    lVar13 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar13 + 1),0xc4c,"CalculateFrameSA",
               "HistTarget long_exp BT(low/high)/DT(low/high) avg: %f / %f / %f / %f",(double)fVar23
               ,(double)fVar25,(double)fVar15,(double)fVar22);
    fVar19 = fVar19 / fVar23;
    fVar30 = fVar30 / fVar25;
    fVar20 = fVar20 / fVar15;
    fVar26 = fVar19;
    if (fVar19 <= fVar30) {
      fVar26 = fVar30;
    }
    fVar21 = fVar21 / fVar22;
    fVar27 = fVar30;
    if (fVar19 <= fVar30) {
      fVar27 = fVar19;
    }
    fVar29 = fVar21;
    if (fVar20 <= fVar21) {
      fVar29 = fVar20;
    }
    *pfVar1 = *(float *)(this + 0xcf98) / *(float *)(this + 0xcf80);
    fVar31 = fVar20;
    if (fVar20 <= fVar21) {
      fVar31 = fVar21;
    }
    lVar13 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    dVar33 = (double)*pfVar1;
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar13 + 1),0xc6d,"CalculateFrameSA",
               "HistTarget Adjust ratio(bt_low/bt_high):%f %f,(dt_low/dt_high):%f %f,Adjust ratio logic(bt_low/bt_high):%f %f,(dt_low/dt_high):%f %f,base: %f"
               ,(double)fVar19,(double)fVar30,(double)fVar20,(double)fVar21,(double)fVar27,
               (double)fVar26,(double)fVar29,(double)fVar31,dVar33);
    fVar16 = *pfVar1;
    fVar2 = fVar10;
    if (fVar10 <= fVar29 / fVar16) {
      fVar2 = fVar29 / fVar16;
    }
    fVar3 = fVar10;
    if (fVar10 <= fVar31 / fVar16) {
      fVar3 = fVar31 / fVar16;
    }
    fVar4 = fVar9;
    if (fVar27 / fVar16 <= fVar9) {
      fVar4 = fVar27 / fVar16;
    }
    fVar5 = fVar9;
    if (fVar26 / fVar16 <= fVar9) {
      fVar5 = fVar26 / fVar16;
    }
    lVar13 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    dVar18 = (double)fVar5;
    dVar28 = (double)fVar4;
    dVar24 = (double)fVar3;
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar13 + 1),0xc83,"CalculateFrameSA",
               "HistTarget Adjust ratio normalized(bt_low/bt_high/dt_low/dt_high): %f / %f / %f / %f, dt/bt_norm_adj_ratio_cap: %f, %f"
               ,dVar28,dVar18,(double)fVar2,dVar24,(double)fVar10,(double)fVar9,dVar33);
    if (*(char *)(*(long *)(this + 0x488) + 0x33) != '\0') {
      *(float *)(this + 0xce24) = fVar2;
    }
    fVar16 = fVar3;
    fVar32 = fVar4;
    if (fVar4 <= fVar3) {
      if (fVar5 <= fVar3) {
        dVar28 = (double)fVar2;
        fVar16 = fVar5;
        fVar32 = fVar2;
        if ((fVar2 <= fVar5) && (dVar28 = dVar18, fVar16 = fVar4, fVar32 = fVar5, fVar4 <= fVar2)) {
          fVar16 = fVar2;
        }
      }
      else {
        dVar28 = dVar24;
        fVar16 = fVar4;
        fVar32 = fVar3;
        if (fVar4 <= fVar2) {
          fVar16 = fVar2;
        }
      }
    }
    lVar13 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar13 + 1),0xca8,"CalculateFrameSA",
               "HistTarget ref adjust ratio(low/high): %f / %f ",(double)fVar16,dVar28,dVar33);
    fVar11 = *(float *)(this + 0x49);
    local_a8 = 1.0;
    fVar12 = *(float *)(this + 0x4d);
    local_b0 = fVar12;
    local_ac = fVar11;
    lVar13 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar13 + 1),0xcaf,"CalculateFrameSA",
               "SafeAdjust tuning_base_target_by_lux params: base_target_high_cap: %f, base_target_low_cap: %f"
               ,(double)fVar11,(double)fVar12);
    fVar17 = 1.0;
    local_b4 = 1.0;
    pfVar8 = &local_ac;
    if (fVar11 <= 1.0) {
      pfVar8 = &local_b4;
    }
    local_b4 = 1.0;
    pfVar6 = &local_b0;
    if (1.0 <= fVar12) {
      pfVar6 = &local_b4;
    }
    local_b0 = *pfVar6;
    local_ac = *pfVar8;
    if ((fVar16 <= 1.0) || (fVar32 <= 1.0)) {
      if ((1.0 <= fVar16) || (1.0 <= fVar32)) {
        local_a8 = 1.0;
      }
      else {
        local_a8 = fVar32;
        fVar17 = fVar32;
      }
    }
    else {
      local_a8 = fVar16;
      fVar17 = fVar16;
    }
    pfVar7 = &local_ac;
    if (fVar17 <= *pfVar8) {
      pfVar7 = &local_a8;
    }
    uVar14 = 1;
    local_a8 = *pfVar7;
    pfVar8 = &local_b0;
    if (*pfVar6 <= *pfVar7) {
      pfVar8 = &local_a8;
    }
    fVar11 = *pfVar8;
    *(float *)(param_4 + 4) = fVar19;
    *(float *)(param_4 + 0x54) = fVar11;
    *(float *)(param_4 + 8) = fVar30;
    *(float *)(param_4 + 0xc) = fVar20;
    *(float *)(param_4 + 0x10) = fVar21;
    *(float *)(param_4 + 0x1c) = fVar15;
    *(float *)(param_4 + 0x20) = fVar22;
    *(float *)(param_4 + 0x14) = fVar23;
    *(float *)(param_4 + 0x18) = fVar25;
    *(float *)(param_4 + 0x24) = fVar27;
    *(float *)(param_4 + 0x34) = fVar4;
    *(float *)(param_4 + 0x28) = fVar26;
    *(float *)(param_4 + 0x2c) = fVar29;
    *(float *)(param_4 + 0x38) = fVar5;
    *(float *)(param_4 + 0x3c) = fVar2;
    *(float *)(param_4 + 0x30) = fVar31;
    *(float *)(param_4 + 0x40) = fVar3;
    *(float *)(param_4 + 0x44) = fVar9;
    *(float *)(param_4 + 0x4c) = fVar16;
    *(float *)(param_4 + 0x50) = fVar32;
    *(float *)(param_4 + 0x48) = fVar10;
    fVar9 = *pfVar1;
    *(float *)param_4 = fVar9;
    *(float *)(param_4 + 0x58) = fVar9 * fVar11;
  }
  return uVar14;
}


// ===== 0x184ed8 CalculateAdaptiveToneSA @ 00284ed8

/* MI_AEC::Metering::CalculateAdaptiveToneSA(float, MI_AEC::ProcessedBHistStats<unsigned int, 3>
   const&, MI_AEC::HistCommonInfo const&, MI_AEC::HistFrameSAResult const&,
   MI_AEC::HistAdaptiveToneSAResult*) */

void __thiscall
MI_AEC::Metering::CalculateAdaptiveToneSA
          (Metering *this,float param_1,ProcessedBHistStats *param_2,HistCommonInfo *param_3,
          HistFrameSAResult *param_4,HistAdaptiveToneSAResult *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float *pfVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  pfVar1 = (float *)(this + 0xce10);
  local_b4 = param_1;
  if (*(Hist_adaptiveSA_tuning_data *)(*(long *)(this + 0x488) + 0x3c88) ==
      (Hist_adaptiveSA_tuning_data)0x0) {
    lVar12 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),2,4,'I',(char *)(lVar12 + 1),0x1254,"CalculateAdaptiveToneSA"
               ,"HistAdaptiveAdjustment Disable!");
  }
  else {
    GetAdaptiveSATuningData
              (this,&local_b4,(HistDynamicInfo *)(this + 0xd4f0),
               (Hist_adaptiveSA_tuning_data *)(*(long *)(this + 0x488) + 0x3c88),
               (MtrHistAdaptiveTuningData *)(this + 0x92));
    fVar13 = *(float *)(this + 0xb7);
    fVar2 = *(float *)(this + 0xeb);
    fVar3 = *(float *)(this + 0xef);
    fVar26 = *(float *)(this + 0x93);
    fVar14 = *(float *)(this + 0xbb);
    fVar27 = *(float *)(this + 0x97);
    fVar28 = *(float *)(this + 0x9b);
    fVar30 = *(float *)(this + 0x9f);
    fVar15 = *(float *)(this + 0xbf);
    fVar25 = *(float *)(this + 0xab);
    fVar32 = *(float *)(this + 0xb3);
    fVar31 = *(float *)(this + 0xdf);
    fVar16 = *(float *)(this + 0xc3);
    fVar4 = *(float *)(this + 0xe3);
    fVar17 = *(float *)(this + 199);
    fVar18 = *(float *)(this + 0xcb);
    fVar19 = *(float *)(this + 0xcf);
    lVar12 = *(long *)(this + 0x488);
    uVar5 = *(undefined4 *)(this + 0xe7);
    local_bc = fVar3;
    fStack_b8 = fVar2;
    fVar20 = (float)FUN_0027ecf8(*(undefined4 *)(this + 0xd4f8),local_b4,lVar12 + 0x4f38,
                                 lVar12 + 0x4f20,lVar12 + 0x4ff8);
    local_c4 = -1.0;
    local_c0 = -1.0;
    fVar27 = (float)CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_3,fVar26,fVar27)
    ;
    fVar28 = (float)CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_3,fVar28,fVar30)
    ;
    fVar26 = local_b4;
    fVar27 = fVar27 * *(float *)(param_3 + 0x24);
    if ((1e-06 <= ABS(fVar28)) && (1e-06 <= ABS(fVar27))) {
      fVar30 = *pfVar1;
      fVar25 = fVar25 / fVar27;
      fVar32 = fVar32 / fVar28;
      if (fVar4 <= fVar25 / fVar30) {
        fVar4 = fVar25 / fVar30;
      }
      if (fVar31 <= fVar32 / fVar30) {
        fVar31 = fVar32 / fVar30;
      }
      local_c0 = fVar4;
      local_c4 = fVar31;
      if ((fVar4 <= 1.0) || (fVar31 <= 1.0)) {
        if ((fVar4 < 1.0) && (fVar31 < 1.0)) {
          pfVar11 = &local_c4;
          if (fVar4 <= fVar31) {
            pfVar11 = &local_c0;
          }
          goto LAB_002851b4;
        }
        fVar29 = fVar31 * fVar4;
      }
      else {
        pfVar11 = &local_c4;
        if (fVar31 <= fVar4) {
          pfVar11 = &local_c0;
        }
LAB_002851b4:
        fVar29 = *pfVar11;
      }
      local_c8 = 1.0;
      pfVar11 = &fStack_b8;
      if (fVar2 <= 1.0) {
        pfVar11 = &local_c8;
      }
      fVar2 = *pfVar11;
      local_c8 = 1.0;
      pfVar11 = &local_bc;
      if (1.0 <= fVar3) {
        pfVar11 = &local_c8;
      }
      fVar3 = *pfVar11;
      lVar12 = *(long *)(this + 0x488);
      fVar7 = fVar4 / fVar31;
      if (fVar31 <= 1e-06) {
        fVar7 = 1.0;
      }
      local_bc = fVar3;
      fStack_b8 = fVar2;
      fVar21 = (float)FUN_0027ecf8(fVar7,local_b4,lVar12 + 0x5130,lVar12 + 0x4f20,lVar12 + 0x5148);
      fVar26 = (float)FUN_0027ecf8(fVar7,fVar26,lVar12 + 0x5118,lVar12 + 0x4f20,lVar12 + 0x5160);
      pfVar11 = &fStack_b8;
      if (fVar31 <= fVar2) {
        pfVar11 = &local_c4;
      }
      fVar23 = 1.0;
      if (1.0 <= *pfVar11) {
        fVar23 = *pfVar11;
      }
      pfVar11 = &local_bc;
      if (fVar3 <= fVar4) {
        pfVar11 = &local_c0;
      }
      fVar22 = 1.0;
      if (*pfVar11 <= 1.0) {
        fVar22 = *pfVar11;
      }
      fVar8 = fVar29;
      if (*(char *)(lVar12 + 0x4f18) != '\0') {
        fVar23 = fVar21 * fVar23;
        fVar22 = fVar26 * fVar22;
        fVar8 = fVar20;
        if (fVar29 <= fVar20) {
          fVar8 = fVar29;
        }
      }
      fVar29 = fVar16;
      if (fVar16 <= fVar17) {
        fVar29 = fVar17;
      }
      dVar24 = (double)NEON_fminnm((double)((fVar8 - fVar29) / (fVar18 - fVar29)),0x3ff0000000000000
                                  );
      fVar33 = (fVar19 + -1.0) * (float)dVar24 + 1.0;
      fVar19 = fVar33 * fVar23;
      fVar17 = fVar22;
      if (fVar13 <= fVar8) {
        if (fVar14 <= fVar8) {
          fVar17 = 1.0;
          if (fVar15 <= fVar8) {
            if (fVar16 <= fVar8) {
              fVar17 = fVar23;
              if ((fVar29 <= fVar8) && (fVar17 = fVar19, fVar8 < fVar18)) {
                fVar17 = (fVar19 - fVar23) * (float)dVar24 + fVar23;
              }
            }
            else {
              dVar24 = (double)NEON_fminnm((double)((fVar8 - fVar15) / (fVar16 - fVar15)),
                                           0x3ff0000000000000);
              fVar13 = (float)dVar24;
              if (0.0 <= fVar13) {
                fVar13 = 0.0;
              }
              fVar17 = (fVar23 + -1.0) * fVar13 + 1.0;
            }
          }
        }
        else {
          dVar24 = (double)NEON_fminnm((double)((fVar8 - fVar13) / (fVar14 - fVar13)),
                                       0x3ff0000000000000);
          fVar13 = (float)dVar24;
          if (0.0 <= fVar13) {
            fVar13 = 0.0;
          }
          fVar17 = fVar22 + (1.0 - fVar22) * fVar13;
        }
      }
      *(undefined4 *)(param_5 + 0x2c) = uVar5;
      *(float *)param_5 = fVar27;
      *(float *)(param_5 + 4) = fVar28;
      *(float *)(param_5 + 8) = fVar25;
      *(float *)(param_5 + 0xc) = fVar32;
      *(float *)(param_5 + 0x10) = fVar4;
      *(float *)(param_5 + 0x14) = fVar31;
      *(float *)(param_5 + 0x18) = fVar8;
      *(float *)(param_5 + 0x1c) = fVar23;
      *(float *)(param_5 + 0x20) = fVar22;
      *(float *)(param_5 + 0x30) = fVar17;
      *(float *)(param_5 + 0x34) = fVar19;
      *(float *)(param_5 + 0x38) = fVar2;
      *(float *)(param_5 + 0x3c) = fVar3;
      *(float *)(param_5 + 0x48) = fVar7;
      *(float *)(param_5 + 0x4c) = fVar21;
      *(float *)(param_5 + 0x50) = fVar26;
      *(float *)(param_5 + 0x54) = fVar20;
      *(float *)(param_5 + 0x24) = fVar33;
      *(float *)(param_5 + 0x28) = fVar30 * fVar17;
      lVar12 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar12 + 1),0x1307,
                 "CalculateAdaptiveToneSA",
                 "HistAdaptive tone adjust ratio(bt/dt): %.3f %.3f, adjust ratio normalize(bt/dt):%.3f, %.3f, m_base_adjust_ratio: %.3f, adaptive_tone_blend_ratio:%.3f,bt_dt_ratio:%.3f, target_adjust_high_ratio:%.3f, target_adjust_low_ratio:%.3f"
                 ,(double)fVar25,(double)fVar32,(double)fVar4,(double)fVar31,(double)*pfVar1,
                 (double)fVar8,(double)fVar7,(double)fVar21,(double)fVar26);
      lVar12 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar12 + 1),0x130a,
                 "CalculateAdaptiveToneSA",
                 "adjust_ratio_high_cap:%.3f, adjust_ratio_low_cap:%.3f, target_adjust(low/high):%.3f, %.3f, target_adjust_high_extra_ratio:%.3f, target_adjust_extra:%.3f,HistAdaptive ada_result:%.3f, weight:%.3f, ada_final_adjust_ratio: %.3f"
                 ,(double)fVar2,(double)fVar3,(double)fVar22,(double)fVar23,(double)fVar33,
                 (double)fVar19,(double)*(float *)(param_5 + 0x30),
                 (double)*(float *)(param_5 + 0x2c),(double)*(float *)(param_5 + 0x28));
      uVar10 = 1;
      goto LAB_00285578;
    }
    lVar12 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),3,5,'W',(char *)(lVar12 + 1),0x1289,"CalculateAdaptiveToneSA"
               ,"BT/DT avg: %.3f / %.3f  is ZERO! hist metering failed!",(double)fVar28,
               (double)fVar27);
  }
  uVar9 = DAT_003af398;
  uVar10 = 0;
  *(float *)(param_5 + 0x28) = *pfVar1;
  *(undefined8 *)(param_5 + 0x2c) = uVar9;
LAB_00285578:
  if (*(long *)(lVar6 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


// ===== 0x1855bc CalculateFlatSceneSA @ 002855bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MI_AEC::Metering::CalculateFlatSceneSA(float, MI_AEC::ProcessedBHistStats<unsigned int, 3>
   const&, std::__1::array<MI_AEC::ProcessedBGStats, 256ul> const&, MI_AEC::HistCommonInfo const&,
   MI_AEC::HistFlatSceneSAResult*, MI_AEC::MiDebug_Mtr*) */

undefined8 __thiscall
MI_AEC::Metering::CalculateFlatSceneSA
          (Metering *this,float param_1,ProcessedBHistStats *param_2,array *param_3,
          HistCommonInfo *param_4,HistFlatSceneSAResult *param_5,MiDebug_Mtr *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  HistFlatSceneSAResult local_a8;
  float local_a7;
  undefined8 local_a3;
  undefined8 local_9b;
  undefined8 local_93;
  undefined8 uStack_8b;
  float local_74;
  
  local_a7 = 50.0;
  local_9b = 0;
  local_a3 = 0;
  uStack_8b = _UNK_003af3f8;
  local_93 = _DAT_003af3f0;
  local_a8 = *(HistFlatSceneSAResult *)(*(long *)(this + 0x488) + 0x3f30);
  if (local_a8 == (HistFlatSceneSAResult)0x1) {
    local_74 = param_1;
    CalculateFlatsceneDetection
              (this,param_3,(MtrFlatSceneTuningData *)param_3,(float *)(param_5 + 4));
    MappingFlatSceneTuningParam(this,&local_74,(MtrFlatSceneTuningData *)&local_a8);
    fVar1 = (float)local_a3;
    fVar2 = local_a3._4_4_;
    uVar7 = CalculateSpecificToneAvg
                      (this,param_2,(WhiteBalanceInfo *)param_4,(float)local_a3,local_a3._4_4_);
    *(undefined4 *)(param_5 + 8) = uVar7;
    fVar3 = (float)local_9b;
    fVar4 = local_9b._4_4_;
    fVar8 = (float)CalculateSpecificToneAvg
                             (this,param_2,(WhiteBalanceInfo *)param_4,(float)local_9b,
                              local_9b._4_4_);
    *(float *)(param_5 + 0xc) = fVar8;
    fVar12 = *(float *)(param_4 + 0x24) * *(float *)(param_5 + 8);
    *(float *)(param_5 + 8) = fVar12;
    if ((1e-06 <= ABS(fVar8)) && (1e-06 <= ABS(fVar12))) {
      *(float *)(param_5 + 0x10) = fVar12 / fVar8;
      lVar6 = *(long *)(this + 0x488);
      uVar7 = FUN_0027ecf8(fVar12 / fVar8,*(undefined4 *)(param_5 + 4),lVar6 + 0x4010,lVar6 + 0x3ff8
                           ,lVar6 + 0x4028);
      fVar8 = local_a7;
      *(undefined4 *)(param_5 + 0x18) = uVar7;
      fVar9 = *(float *)(this + 0xcf80);
      *(float *)(param_5 + 0x14) = local_a7 / fVar9;
      fVar13 = *(float *)(this + 0xce10);
      fVar12 = (float)local_93;
      fVar5 = local_93._4_4_;
      fVar10 = (local_a7 / fVar9) / fVar13;
      fVar9 = (float)local_93;
      if (fVar10 <= (float)local_93) {
        fVar9 = fVar10;
      }
      fVar10 = local_93._4_4_;
      if (local_93._4_4_ <= fVar9) {
        fVar10 = fVar9;
      }
      *(float *)(param_5 + 0x1c) = fVar13 * fVar10;
      lVar6 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar6 + 1),0x102b,"CalculateFlatSceneSA",
                 "flat_target:%.3f, upper_cap_thld:%.3f, lower_cap_thld:%.3f, detect_ratio:%.3f, flat_final_weight: %.3f,flat_adjust_ratio:%.3f, flatscene_dr_b2d: %.3f, bright_tone_avg: %.3f, dark_tone_avg: %.3f"
                 ,(double)fVar8,(double)fVar12,(double)fVar5,(double)*(float *)(param_5 + 4),
                 (double)*(float *)(param_5 + 0x18),(double)*(float *)(param_5 + 0x14),
                 (double)*(float *)(param_5 + 0x10),(double)*(float *)(param_5 + 8),
                 (double)*(float *)(param_5 + 0xc));
      if (param_6 != (MiDebug_Mtr *)0x0) {
        *(HistFlatSceneSAResult *)(param_6 + 0x988) = local_a8;
        *(float *)(param_6 + 0x989) = fVar8;
        *(float *)(param_6 + 0x98d) = fVar1;
        *(float *)(param_6 + 0x991) = fVar2;
        *(float *)(param_6 + 0x995) = fVar3;
        *(float *)(param_6 + 0x999) = fVar4;
        *(float *)(param_6 + 0x99d) = fVar12;
        *(float *)(param_6 + 0x9a1) = fVar5;
        *(undefined4 *)(param_6 + 0x9a5) = (undefined4)uStack_8b;
        *(undefined4 *)(param_6 + 0x9a9) = uStack_8b._4_4_;
        uVar11 = *(undefined8 *)(param_5 + 4);
        *(undefined8 *)(param_6 + 0x9b5) = *(undefined8 *)(param_5 + 0xc);
        *(undefined8 *)(param_6 + 0x9ad) = uVar11;
        *(undefined4 *)(param_6 + 0x9bd) = *(undefined4 *)(param_5 + 0x14);
        *(undefined4 *)(param_6 + 0x9c1) = *(undefined4 *)(param_5 + 0x18);
        *(undefined4 *)(param_6 + 0x9c5) = *(undefined4 *)(param_5 + 0x1c);
      }
      return 1;
    }
    lVar6 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar6 + 1),0x1010,"CalculateFlatSceneSA",
               "BT/DT avg: %.3f / %.3f  is ZERO! hist metering failed!",
               (double)*(float *)(param_5 + 0xc),(double)*(float *)(param_5 + 8));
    uVar11 = DAT_003af398;
    *(undefined4 *)(param_5 + 4) = 0x42c60000;
    *(undefined8 *)(param_5 + 0x18) = uVar11;
  }
  else {
    *(undefined4 *)(param_5 + 0x18) = 0;
    fVar1 = *(float *)(this + 0xce10);
    *(undefined4 *)(param_5 + 4) = 0x42c60000;
    *(float *)(param_5 + 0x14) = fVar1;
    *param_5 = local_a8;
    if (param_6 != (MiDebug_Mtr *)0x0) {
      *(HistFlatSceneSAResult *)(param_6 + 0x988) = local_a8;
    }
  }
  return 0;
}


// ===== 0x1858cc CalculateNightSceneSA @ 002858cc

/* MI_AEC::Metering::CalculateNightSceneSA(float, MI_AEC::ProcessedBHistStats<unsigned int, 3>
   const&, MI_AEC::HistCommonInfo const&, MI_AEC::HistNightSceneSAResult*) */

undefined8
MI_AEC::Metering::CalculateNightSceneSA
          (float param_1,ProcessedBHistStats *param_2,HistCommonInfo *param_3,
          HistNightSceneSAResult *param_4)

{
  MI_LOG *this;
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  long lVar4;
  undefined8 uVar5;
  float *in_x3;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_74;
  float local_68;
  float local_64;
  
  local_64 = 0.0;
  if (param_2[0x118] == (ProcessedBHistStats)0x0) {
    uVar5 = 0;
    in_x3[3] = 0.0;
    in_x3[4] = 0.0;
  }
  else {
    fVar7 = *(float *)(param_2 + 0x121);
    fVar9 = *(float *)(param_2 + 0x125);
    fVar10 = *(float *)(param_2 + 0x119);
    fVar11 = *(float *)(param_2 + 0x11d);
    fVar12 = *(float *)(param_2 + 0x129);
    fVar3 = *(float *)(param_2 + 0x12d);
    fVar6 = (float)CalculateSpecificToneAvg
                             ((Metering *)param_2,(ProcessedBHistStats *)param_3,
                              (WhiteBalanceInfo *)param_4,fVar7,fVar9);
    this = (MI_LOG *)(param_2 + 0x10);
    lVar4 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    dVar8 = (double)fVar6;
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar4 + 1),0xd9f,"CalculateNightSceneSA",
               "lux_weight:%f, dr_weight:%f, tone_pct_start:%f, tone_pct_end:%f, ref_target:%f, cap_thld:%f, ns_dark_tone_avg:%f"
               ,(double)fVar10,(double)fVar11,(double)fVar7,(double)fVar9,(double)fVar12,
               (double)fVar3,dVar8);
    if (fVar6 <= 1e-06) {
      lVar4 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                (this,0,2,'V',(char *)(lVar4 + 1),0xda3,"CalculateNightSceneSA",
                 "DT avg: %f is ZERO! hist metering failed!",dVar8);
      uVar5 = 0;
      in_x3[4] = 0.0;
      fVar12 = 0.0;
    }
    else {
      fVar12 = fVar12 / fVar6;
      fVar13 = fVar10 * fVar11;
      fVar9 = fVar12 / *(float *)(param_2 + 0xce10);
      fVar7 = fVar3;
      if (fVar9 <= fVar3) {
        fVar7 = fVar9;
      }
      fVar9 = *(float *)(param_2 + 0xce10) * fVar7;
      local_64 = fVar13;
      lVar4 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                (this,0,2,'V',(char *)(lVar4 + 1),0xdb0,"CalculateNightSceneSA",
                 "ns_adjust_ratio:%f, ns_dark_tone_avg:%f, ns_weight:%f, ns_final_adjust_ratio: %f",
                 (double)fVar12,dVar8,(double)fVar13,(double)fVar9);
      local_68 = 1.0;
      pfVar1 = &local_68;
      if (fVar13 <= 1.0) {
        pfVar1 = &local_64;
      }
      local_74 = 0.0;
      uVar5 = 1;
      local_64 = *pfVar1;
      pfVar2 = &local_74;
      if (0.0 <= *pfVar1) {
        pfVar2 = &local_64;
      }
      fVar13 = *pfVar2;
      *in_x3 = fVar11;
      in_x3[1] = fVar10;
      in_x3[2] = fVar6;
      in_x3[5] = fVar9;
      in_x3[6] = fVar7;
      in_x3[7] = fVar3;
      in_x3[4] = fVar13;
    }
    in_x3[3] = fVar12;
  }
  return uVar5;
}


// ===== 0x185b04 CalculateSaturationPreventSA @ 00285b04

/* MI_AEC::Metering::CalculateSaturationPreventSA(float, MI_AEC::ProcessedBHistStats<unsigned int,
   3> const&, MI_AEC::HistCommonInfo const&, MI_AEC::HistSaturationPreventSAResult*) */

undefined8 __thiscall
MI_AEC::Metering::CalculateSaturationPreventSA
          (Metering *this,float param_1,ProcessedBHistStats *param_2,HistCommonInfo *param_3,
          HistSaturationPreventSAResult *param_4)

{
  long *plVar1;
  MI_LOG *this_00;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_ac;
  float local_a8;
  float local_a4;
  
  lVar11 = *(long *)(*(long *)(this + 0x488) + 0x40a0);
  lVar7 = *(long *)(*(long *)(this + 0x488) + 0x40a8) - lVar11;
  if (lVar7 != 0) {
    uVar6 = 0;
    uVar10 = (lVar7 >> 5) * 0x6db6db6db6db6db7;
    do {
      if (*(int *)(param_3 + 0x3c) == *(int *)(lVar11 + uVar6 * 0xe0)) goto LAB_00285b94;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 <= uVar10 && uVar10 - uVar6 != 0);
  }
  uVar6 = 0;
LAB_00285b94:
  local_a4 = 0.0;
  if (*(char *)(lVar11 + uVar6 * 0xe0 + 4) == '\0') {
    *(undefined4 *)(param_4 + 0xc) = 0x42c60000;
    *(undefined4 *)(param_4 + 0x14) = 0;
    return 0;
  }
  lVar7 = lVar11 + uVar6 * 0xe0;
  pfVar3 = *(float **)(lVar7 + 8);
  fVar17 = -1.0;
  fVar21 = -1.0;
  uVar10 = *(long *)(lVar7 + 0x10) - (long)pfVar3;
  iVar12 = (int)(uVar10 >> 2);
  fVar13 = fVar17;
  if (uVar10 != 0) {
    if (pfVar3[((long)uVar10 >> 2) + -1] <= param_1) {
      uVar8 = (ulong)(iVar12 - 1);
LAB_00285c68:
      iVar5 = (int)uVar8;
      fVar13 = -1.0;
      if (iVar5 == -1) goto LAB_00285cf0;
    }
    else {
      fVar13 = *pfVar3;
      if ((fVar13 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar13 <= param_1) && (param_1 < pfVar3[uVar8 + 1])) goto LAB_00285c68;
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar13 = pfVar3[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar5 = 0;
    }
    lVar9 = (long)iVar5;
    if (iVar5 == iVar12 + -1) {
      fVar13 = *(float *)(*(long *)(lVar7 + 0x20) + lVar9 * 4);
    }
    else {
      uVar8 = -(ulong)(iVar5 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar5 + 1U) << 2;
      lVar7 = *(long *)(lVar7 + 0x20);
      fVar13 = *(float *)(lVar7 + lVar9 * 4);
      dVar16 = (double)NEON_fminnm((double)((param_1 - pfVar3[lVar9]) /
                                           (*(float *)((long)pfVar3 + uVar8) - pfVar3[lVar9])),
                                   0x3ff0000000000000);
      fVar14 = (float)dVar16;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      fVar13 = fVar13 + (*(float *)(lVar7 + uVar8) - fVar13) * fVar14;
    }
  }
LAB_00285cf0:
  lVar7 = lVar11 + uVar6 * 0xe0;
  fVar14 = (float)FUN_0027ecf8(*(undefined4 *)(this + 0xce1c),*(undefined4 *)(this + 0xce20),
                               lVar7 + 0x38,lVar7 + 0x50,lVar7 + 0x68);
  if (uVar10 == 0) {
    fVar19 = -1.0;
    fVar21 = fVar17;
    fVar20 = fVar17;
    goto LAB_00286118;
  }
  fVar15 = pfVar3[((long)uVar10 >> 2) + -1];
  if (fVar15 <= param_1) {
    uVar10 = (ulong)(iVar12 - 1);
LAB_00285d98:
    iVar5 = (int)uVar10;
    if (iVar5 != -1) goto LAB_00285dac;
    fVar19 = -1.0;
  }
  else {
    fVar17 = *pfVar3;
    if ((fVar17 < param_1) && (0 < (int)(iVar12 - 1U))) {
      uVar10 = 0;
      while( true ) {
        if ((fVar17 <= param_1) && (param_1 < pfVar3[uVar10 + 1])) goto LAB_00285d98;
        if ((ulong)(iVar12 - 1U) - 1 == uVar10) break;
        fVar17 = pfVar3[uVar10 + 1];
        uVar10 = uVar10 + 1;
      }
    }
    iVar5 = 0;
LAB_00285dac:
    lVar9 = (long)iVar5;
    if (iVar5 == iVar12 + -1) {
      fVar19 = *(float *)(*(long *)(lVar7 + 0x80) + lVar9 * 4);
    }
    else {
      uVar10 = -(ulong)(iVar5 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar5 + 1U) << 2;
      lVar7 = *(long *)(lVar7 + 0x80);
      fVar19 = *(float *)(lVar7 + lVar9 * 4);
      dVar16 = (double)NEON_fminnm((double)((param_1 - pfVar3[lVar9]) /
                                           (*(float *)((long)pfVar3 + uVar10) - pfVar3[lVar9])),
                                   0x3ff0000000000000);
      fVar17 = (float)dVar16;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar19 = fVar19 + (*(float *)(lVar7 + uVar10) - fVar19) * fVar17;
    }
  }
  if (fVar15 <= param_1) {
    uVar10 = (ulong)(iVar12 - 1);
LAB_00285e88:
    iVar5 = (int)uVar10;
    if (iVar5 != -1) goto LAB_00285ea4;
    fVar17 = -1.0;
joined_r0x00285e98:
    if (fVar15 <= param_1) goto LAB_00285ed0;
LAB_00285f48:
    fVar20 = *pfVar3;
    if ((fVar20 < param_1) && (0 < (int)(iVar12 - 1U))) {
      uVar10 = 0;
      while( true ) {
        if ((fVar20 <= param_1) && (param_1 < pfVar3[uVar10 + 1])) goto LAB_00285ed4;
        if ((ulong)(iVar12 - 1U) - 1 == uVar10) break;
        fVar20 = pfVar3[uVar10 + 1];
        uVar10 = uVar10 + 1;
      }
    }
    iVar5 = 0;
LAB_00285fa4:
    plVar1 = (long *)(lVar11 + uVar6 * 0xe0 + 0xb0);
    lVar7 = (long)iVar5;
    if (iVar5 != iVar12 + -1) {
      uVar10 = -(ulong)(iVar5 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar5 + 1U) << 2;
      lVar9 = *plVar1;
      fVar20 = *(float *)(lVar9 + lVar7 * 4);
      dVar16 = (double)NEON_fminnm((double)((param_1 - pfVar3[lVar7]) /
                                           (*(float *)((long)pfVar3 + uVar10) - pfVar3[lVar7])),
                                   0x3ff0000000000000);
      fVar18 = (float)dVar16;
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar20 = fVar20 + (*(float *)(lVar9 + uVar10) - fVar20) * fVar18;
      goto joined_r0x00286038;
    }
    fVar20 = *(float *)(*plVar1 + lVar7 * 4);
    if (fVar15 <= param_1) goto LAB_00285fd0;
LAB_0028603c:
    fVar15 = *pfVar3;
    if ((fVar15 < param_1) && (0 < (int)(iVar12 - 1U))) {
      uVar10 = 0;
      while( true ) {
        if ((fVar15 <= param_1) && (param_1 < pfVar3[uVar10 + 1])) goto LAB_00285fd4;
        if ((ulong)(iVar12 - 1U) - 1 == uVar10) break;
        fVar15 = pfVar3[uVar10 + 1];
        uVar10 = uVar10 + 1;
      }
    }
    iVar5 = 0;
  }
  else {
    fVar17 = *pfVar3;
    if ((fVar17 < param_1) && (0 < (int)(iVar12 - 1U))) {
      uVar10 = 0;
      while( true ) {
        if ((fVar17 <= param_1) && (param_1 < pfVar3[uVar10 + 1])) goto LAB_00285e88;
        if ((ulong)(iVar12 - 1U) - 1 == uVar10) break;
        fVar17 = pfVar3[uVar10 + 1];
        uVar10 = uVar10 + 1;
      }
    }
    iVar5 = 0;
LAB_00285ea4:
    plVar1 = (long *)(lVar11 + uVar6 * 0xe0 + 0x98);
    lVar7 = (long)iVar5;
    if (iVar5 != iVar12 + -1) {
      uVar10 = -(ulong)(iVar5 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar5 + 1U) << 2;
      lVar9 = *plVar1;
      fVar17 = *(float *)(lVar9 + lVar7 * 4);
      dVar16 = (double)NEON_fminnm((double)((param_1 - pfVar3[lVar7]) /
                                           (*(float *)((long)pfVar3 + uVar10) - pfVar3[lVar7])),
                                   0x3ff0000000000000);
      fVar20 = (float)dVar16;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(lVar9 + uVar10) - fVar17) * fVar20;
      goto joined_r0x00285e98;
    }
    fVar17 = *(float *)(*plVar1 + lVar7 * 4);
    if (param_1 < fVar15) goto LAB_00285f48;
LAB_00285ed0:
    uVar10 = (ulong)(iVar12 - 1);
LAB_00285ed4:
    iVar5 = (int)uVar10;
    if (iVar5 != -1) goto LAB_00285fa4;
    fVar20 = -1.0;
joined_r0x00286038:
    if (param_1 < fVar15) goto LAB_0028603c;
LAB_00285fd0:
    uVar10 = (ulong)(iVar12 - 1);
LAB_00285fd4:
    iVar5 = (int)uVar10;
    if (iVar5 == -1) goto LAB_00286118;
  }
  plVar1 = (long *)(lVar11 + uVar6 * 0xe0 + 200);
  lVar7 = (long)iVar5;
  if (iVar5 == iVar12 + -1) {
    fVar21 = *(float *)(*plVar1 + lVar7 * 4);
  }
  else {
    uVar6 = -(ulong)(iVar5 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar5 + 1U) << 2;
    lVar11 = *plVar1;
    fVar21 = *(float *)(lVar11 + lVar7 * 4);
    dVar16 = (double)NEON_fminnm((double)((param_1 - pfVar3[lVar7]) /
                                         (*(float *)((long)pfVar3 + uVar6) - pfVar3[lVar7])),
                                 0x3ff0000000000000);
    fVar15 = (float)dVar16;
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    fVar21 = fVar21 + (*(float *)(lVar11 + uVar6) - fVar21) * fVar15;
  }
LAB_00286118:
  this_00 = (MI_LOG *)(this + 0x10);
  lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            (this_00,0,2,'V',(char *)(lVar7 + 1),0x109b,"CalculateSaturationPreventSA",
             "tuning_saturation_prevent_adjust_ratio params: lux_weight:%f, luma_dark_bright_weight:%f, tone_pct_st:%f, tone_pct_en:%f, ref_target:%f, cap_thld:%f "
             ,(double)fVar13,(double)fVar14,(double)fVar19,(double)fVar17,(double)fVar20,
             (double)fVar21);
  fVar17 = (float)CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_3,fVar19,fVar17);
  if (1e-06 <= ABS(fVar17)) {
    fVar19 = (fVar20 / fVar17) / (*(float *)(this + 0xce10) / *(float *)(this + 0xd00c));
    lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar7 + 1),0x10a9,"CalculateSaturationPreventSA",
               "ref :%f, luma:%f, sp_ratio: %f, sp_ratio_on_base: %f",(double)fVar20,(double)fVar17,
               (double)(fVar20 / fVar17),(double)fVar19);
    if (fVar19 <= fVar21) {
      fVar19 = fVar21;
    }
    fVar21 = fVar19 * (*(float *)(this + 0xce10) / *(float *)(this + 0xd00c));
    local_a4 = fVar13 * fVar14;
    lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar7 + 1),0x10af,"CalculateSaturationPreventSA",
               "luma_dark_bright_weight:%f, lux_weight:%f",(double)fVar14,(double)fVar13);
    local_a8 = 1.0;
    pfVar3 = &local_a8;
    if (fVar13 * fVar14 <= 1.0) {
      pfVar3 = &local_a4;
    }
    local_ac = -1.0;
    local_a4 = *pfVar3;
    pfVar2 = &local_ac;
    if (-1.0 <= *pfVar3) {
      pfVar2 = &local_a4;
    }
    fVar20 = *pfVar2;
    local_a4 = fVar20;
    lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar7 + 1),0x10b4,"CalculateSaturationPreventSA",
               "m_sp_adjust_ratio: %f ,weight_sp: %f ",(double)fVar21,(double)fVar20);
    uVar4 = 1;
    *(float *)param_4 = fVar17;
    *(float *)(param_4 + 4) = fVar14;
    *(float *)(param_4 + 0xc) = fVar21;
    *(float *)(param_4 + 0x10) = fVar19;
    *(float *)(param_4 + 0x14) = fVar20;
    *(float *)(param_4 + 8) = fVar13;
  }
  else {
    lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar7 + 1),0x10a1,"CalculateSaturationPreventSA",
               "BT avg: %f is ZERO! hist metering failed!",(double)fVar17);
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 0x1863b0 CalculateSafeSaturationPreventSA @ 002863b0

/* MI_AEC::Metering::CalculateSafeSaturationPreventSA(float, MI_AEC::ProcessedBHistStats<unsigned
   int, 3> const&, MI_AEC::HistCommonInfo const&, MI_AEC::HistSafeSaturationPreventSAResult*) */

undefined8
MI_AEC::Metering::CalculateSafeSaturationPreventSA
          (float param_1,ProcessedBHistStats *param_2,HistCommonInfo *param_3,
          HistSafeSaturationPreventSAResult *param_4)

{
  MI_LOG *this;
  long lVar1;
  undefined8 uVar2;
  float *in_x3;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 in_register_00005004;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_8c;
  float fStack_88;
  float local_84;
  
  local_84 = 1.0;
  if (param_2[0x14a] == (ProcessedBHistStats)0x0) {
    uVar2 = 0;
    in_x3[3] = 999.0;
    in_x3[5] = 1.0;
  }
  else {
    fVar13 = *(float *)(param_2 + 0x14b);
    fVar8 = *(float *)(param_2 + 0x14f);
    if (param_2[0x163] == (ProcessedBHistStats)0x0) {
      pfVar3 = (float *)(param_2 + 0x153);
      pfVar4 = (float *)(param_2 + 0x157);
      pfVar5 = (float *)(param_2 + 0x15b);
      pfVar6 = (float *)(param_2 + 0x15f);
    }
    else {
      pfVar3 = (float *)(param_2 + 0x194);
      pfVar4 = (float *)(param_2 + 0x198);
      pfVar5 = (float *)(param_2 + 0x19c);
      pfVar6 = (float *)(param_2 + 0x1a0);
    }
    fVar7 = *pfVar3;
    fVar12 = *pfVar5;
    fVar10 = *pfVar4;
    fVar14 = *pfVar6;
    this = (MI_LOG *)(param_2 + 0x10);
    lVar1 = __strrchr_chk(CONCAT44(in_register_00005004,param_1),
                          "/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    dVar9 = (double)fVar12;
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar1 + 1),0x1056,"CalculateSafeSaturationPreventSA",
               "tuning_saturation_prevent_adjust_ratio params: lux_weight:%f, luma_dark_bright_weight:%f,tone_pct_st:%f, tone_pct_en:%f, ref_target:%f, cap_thld:%f "
               ,(double)fVar13,(double)fVar8,(double)fVar7,(double)fVar10,dVar9,(double)fVar14);
    fVar7 = (float)CalculateSpecificToneAvg
                             ((Metering *)param_2,(ProcessedBHistStats *)param_3,
                              (WhiteBalanceInfo *)param_4,fVar7,fVar10);
    lVar1 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    dVar11 = (double)fVar7;
    if (1e-06 <= ABS(fVar7)) {
      MI_LOG::MI_LOG_HELPER
                (this,0,2,'V',(char *)(lVar1 + 1),0x1061,"CalculateSafeSaturationPreventSA",
                 "ref :%f, luma:%f",dVar9,dVar11);
      fVar12 = fVar12 / fVar7;
      fVar10 = fVar12 / *(float *)(param_2 + 0xce10);
      lVar1 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                (this,0,2,'V',(char *)(lVar1 + 1),0x1065,"CalculateSafeSaturationPreventSA",
                 "ref :%f, luma:%f, sp_ratio: %f, sp_ratio_on_base: %f",dVar9,dVar11,(double)fVar12,
                 (double)fVar10);
      if (fVar10 <= fVar14) {
        fVar10 = fVar14;
      }
      fVar12 = fVar10 * *(float *)(param_2 + 0xce10);
      local_84 = fVar13 * fVar8;
      lVar1 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                (this,0,2,'V',(char *)(lVar1 + 1),0x106b,"CalculateSafeSaturationPreventSA",
                 "luma_dark_bright_weight:%f, lux_weight:%f",(double)fVar8,(double)fVar13);
      local_8c = 0.0;
      fStack_88 = 1.0;
      pfVar3 = &fStack_88;
      if (fVar13 * fVar8 <= 1.0) {
        pfVar3 = &local_84;
      }
      local_84 = *pfVar3;
      pfVar4 = &local_8c;
      if (0.0 <= *pfVar3) {
        pfVar4 = &local_84;
      }
      fVar14 = *pfVar4;
      local_84 = fVar14;
      lVar1 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                (this,0,2,'V',(char *)(lVar1 + 1),0x1070,"CalculateSafeSaturationPreventSA",
                 "m_sp_adjust_ratio: %f ,weight_sp: %f ",(double)fVar12,(double)fVar14);
      uVar2 = 1;
      *in_x3 = fVar7;
      in_x3[1] = fVar8;
      in_x3[3] = fVar12;
      in_x3[4] = fVar10;
      in_x3[2] = fVar13;
      in_x3[5] = fVar14;
    }
    else {
      MI_LOG::MI_LOG_HELPER
                (this,0,2,'V',(char *)(lVar1 + 1),0x105c,"CalculateSafeSaturationPreventSA",
                 "BT avg: %f is ZERO! hist metering failed!",dVar11);
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ===== 0x1866fc CalculateDarkPreventSA @ 002866fc

/* MI_AEC::Metering::CalculateDarkPreventSA(float, MI_AEC::ProcessedBHistStats<unsigned int, 3>
   const&, MI_AEC::HistCommonInfo const&, MI_AEC::HistDarkPreventSAResult*) */

undefined8
MI_AEC::Metering::CalculateDarkPreventSA
          (float param_1,ProcessedBHistStats *param_2,HistCommonInfo *param_3,
          HistDarkPreventSAResult *param_4)

{
  MI_LOG *this;
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  undefined8 uVar4;
  float *in_x3;
  undefined4 in_register_00005004;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_7c;
  float fStack_78;
  float local_74;
  
  local_74 = 0.0;
  if (param_2[0x1a4] == (ProcessedBHistStats)0x0) {
    uVar4 = 0;
    in_x3[3] = 0.0;
    in_x3[5] = 0.0;
  }
  else {
    fVar8 = *(float *)(param_2 + 0x1a5);
    fVar9 = *(float *)(param_2 + 0x1a9);
    fVar6 = *(float *)(param_2 + 0x1ad);
    fVar7 = *(float *)(param_2 + 0x1b1);
    fVar11 = *(float *)(param_2 + 0x1b5);
    fVar10 = *(float *)(param_2 + 0x1b9);
    this = (MI_LOG *)(param_2 + 0x10);
    lVar3 = __strrchr_chk(CONCAT44(in_register_00005004,param_1),
                          "/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    dVar5 = (double)fVar11;
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar3 + 1),0xf37,"CalculateDarkPreventSA",
               "tuning_dark_prevent_adjust_ratio params: lux_weight:%f,luma_dark_bright_weight:%f,tone_pct_st:%f, tone_pct_en:%f, ref_target:%f, cap_thld:%f "
               ,(double)fVar8,(double)fVar9,(double)fVar6,(double)fVar7,dVar5,(double)fVar10);
    fVar6 = (float)CalculateSpecificToneAvg
                             ((Metering *)param_2,(ProcessedBHistStats *)param_3,
                              (WhiteBalanceInfo *)param_4,fVar6,fVar7);
    if (1e-06 <= ABS(fVar6)) {
      fVar7 = (fVar11 / fVar6) / *(float *)(param_2 + 0xce10);
      if (fVar10 <= fVar7) {
        fVar7 = fVar10;
      }
      local_7c = 0.0;
      fStack_78 = 1.0;
      local_74 = fVar8 * fVar9;
      pfVar1 = &fStack_78;
      if (fVar8 * fVar9 <= 1.0) {
        pfVar1 = &local_74;
      }
      fVar10 = *(float *)(param_2 + 0xce10) * fVar7;
      local_74 = *pfVar1;
      pfVar2 = &local_7c;
      if (0.0 <= *pfVar1) {
        pfVar2 = &local_74;
      }
      fVar11 = *pfVar2;
      in_x3[5] = fVar11;
      if (fVar10 < 1.0) {
        in_x3[5] = 0.0;
      }
      local_74 = fVar11;
      lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                (this,0,2,'V',(char *)(lVar3 + 1),0xf53,"CalculateDarkPreventSA",
                 "m_dp_adjust_ratio: %f ,dp_weight: %f ref_target = %f,avg_luma = %f",(double)fVar10
                 ,(double)in_x3[5],dVar5,(double)fVar6);
      uVar4 = 1;
      *in_x3 = fVar6;
      in_x3[1] = fVar9;
      in_x3[3] = fVar10;
      in_x3[4] = fVar7;
      in_x3[2] = fVar8;
      in_x3[5] = fVar11;
    }
    else {
      lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                (this,0,2,'V',(char *)(lVar3 + 1),0xf3c,"CalculateDarkPreventSA",
                 "DT avg: %f is ZERO! hist metering failed!",(double)fVar6);
      uVar4 = 0;
    }
  }
  return uVar4;
}


// ===== 0x186944 CalculateColorSceneSA @ 00286944

/* MI_AEC::Metering::CalculateColorSceneSA(float, float, MI_AEC::WhiteBalanceInfo const*,
   std::__1::vector<MI_AEC::ProcessedBGStats, std::__1::allocator<MI_AEC::ProcessedBGStats> >
   const&, MI_AEC::HistColorSceneSAResult*, MI_AEC::MiDebug_Mtr*) */

void __thiscall
MI_AEC::Metering::CalculateColorSceneSA
          (Metering *this,float param_1,float param_2,WhiteBalanceInfo *param_3,vector *param_4,
          HistColorSceneSAResult *param_5,MiDebug_Mtr *param_6)

{
  MtrColorSceneTuningData *pMVar1;
  undefined4 *puVar2;
  MtrColorSceneTuningData MVar3;
  Metering MVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined4 in_register_00005004;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_bc;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  long local_a0;
  
  uVar12 = CONCAT44(in_register_00005004,param_1);
  lVar5 = tpidr_el0;
  local_a0 = *(long *)(lVar5 + 0x28);
  pMVar1 = (MtrColorSceneTuningData *)(this + 0xd728);
  MVar3 = *(MtrColorSceneTuningData *)(*(long *)(this + 0x488) + 0x4460);
  *pMVar1 = MVar3;
  MVar4 = *(Metering *)(*(long *)(this + 0x488) + 0x4461);
  this[0xd72a] = (Metering)0x1;
  this[0xd729] = MVar4;
  puVar13 = (ulong *)(param_5 + 4);
  *(undefined4 *)puVar13 = 0x3f800000;
  *(Metering *)(param_5 + 1) = MVar4;
  if (MVar3 == (MtrColorSceneTuningData)0x0) {
    uVar12 = 0;
  }
  else {
    *(undefined8 *)(param_5 + 0x2c) = 0;
    *(undefined8 *)(param_5 + 0x24) = 0;
    *(undefined8 *)(param_5 + 0x20) = 0;
    *(undefined8 *)(param_5 + 0x18) = 0;
    *(undefined8 *)(param_5 + 0x10) = 0;
    *(undefined8 *)(param_5 + 8) = 0;
    MappingTuningSettingForColorThld(this,param_3,pMVar1);
    CalcColorWeightSum(this,param_4,param_2,pMVar1,param_5);
    fVar15 = *(float *)(param_5 + 0xc);
    if (1e-06 < fVar15) {
      uVar19 = *(undefined8 *)(param_5 + 0x10);
      puVar2 = (undefined4 *)(this + 0xd4f8);
      *(ulong *)(param_5 + 0x1c) =
           CONCAT44((float)((ulong)uVar19 >> 0x20) / fVar15,(float)uVar19 / fVar15);
      *(float *)(param_5 + 0x24) = *(float *)(param_5 + 0x18) / fVar15;
      StyleAdjust::QueryHistColorScale
                (*(StyleAdjust **)(this + 0xd710),(float *)(param_5 + 0x10),
                 (float *)(param_5 + 0x1c),(float *)(param_5 + 0x40));
      lVar14 = *(long *)(this + 0x488);
      local_b8 = lVar14 + 0x45a0;
      uStack_b0 = lVar14 + 0x45b8;
      local_a8 = lVar14 + 0x45d0;
      puVar6 = (ulong *)operator_new(0x18);
      puVar6[1] = uStack_b0;
      *puVar6 = local_b8;
      puVar6[2] = local_a8;
      local_b8 = lVar14 + 0x4558;
      uStack_b0 = lVar14 + 0x4570;
      local_a8 = lVar14 + 0x4588;
                    /* try { // try from 00286ab8 to 00286abf has its CatchHandler @ 00286f1c */
      puVar7 = (ulong *)operator_new(0x18);
      puVar7[2] = local_a8;
      puVar7[1] = uStack_b0;
      *puVar7 = local_b8;
      local_b8 = lVar14 + 0x45e8;
      uStack_b0 = lVar14 + 0x4600;
      local_a8 = lVar14 + 0x4618;
                    /* try { // try from 00286af4 to 00286afb has its CatchHandler @ 00286f0c */
      puVar8 = (ulong *)operator_new(0x18);
      puVar8[2] = local_a8;
      puVar8[1] = uStack_b0;
      *puVar8 = local_b8;
      local_b8 = lVar14 + 0x4510;
      uStack_b0 = lVar14 + 0x4528;
      local_a8 = lVar14 + 0x4540;
                    /* try { // try from 00286b34 to 00286b3b has its CatchHandler @ 00286efc */
      puVar9 = (ulong *)operator_new(0x18);
      uVar10 = *puVar6;
      puVar9[1] = uStack_b0;
      *puVar9 = local_b8;
      puVar9[2] = local_a8;
      fVar20 = *(float *)(param_5 + 0x1c);
      fVar15 = (float)FUN_0027ecf8(fVar20,*(undefined4 *)(param_5 + 0x10),uVar10,*puVar7,*puVar8);
      fVar17 = *(float *)(param_5 + 0x40);
      *(float *)(param_5 + 0x28) = fVar15 * fVar17;
      lVar11 = lVar14 + 0x44b0;
      lVar14 = lVar14 + 0x4498;
      fVar16 = (float)FUN_0027ecf8(*puVar2,uVar12,lVar11,lVar14,*puVar9);
      *(float *)(param_5 + 0x34) = fVar16;
      fVar17 = *(float *)(param_5 + 8) + fVar20 * fVar15 * fVar17 * fVar16;
      fVar21 = *(float *)(param_5 + 0x20);
      *(float *)(param_5 + 8) = fVar17;
      fVar15 = (float)FUN_0027ecf8(fVar21,*(undefined4 *)(param_5 + 0x14),puVar6[1],puVar7[1],
                                   puVar8[1]);
      fVar18 = *(float *)(param_5 + 0x44);
      *(float *)(param_5 + 0x2c) = fVar15 * fVar18;
      fVar16 = (float)FUN_0027ecf8(*puVar2,uVar12,lVar11,lVar14,puVar9[1]);
      *(float *)(param_5 + 0x38) = fVar16;
      fVar17 = fVar17 + fVar21 * fVar15 * fVar18 * fVar16;
      *(float *)(param_5 + 8) = fVar17;
      fVar22 = *(float *)(param_5 + 0x24);
      fVar15 = (float)FUN_0027ecf8(fVar22,*(undefined4 *)(param_5 + 0x18),puVar6[2],puVar7[2],
                                   puVar8[2]);
      fVar18 = *(float *)(param_5 + 0x48);
      *(float *)(param_5 + 0x30) = fVar15 * fVar18;
      fVar16 = (float)FUN_0027ecf8(*puVar2,uVar12,lVar11,lVar14,puVar9[2]);
      *(float *)(param_5 + 0x3c) = fVar16;
      fVar17 = fVar17 + fVar22 * fVar15 * fVar18 * fVar16;
      *(float *)(param_5 + 4) = fVar17 / (fVar20 + fVar21 + fVar22);
      *(float *)(param_5 + 8) = fVar17;
      operator_delete(puVar9);
      operator_delete(puVar8);
      operator_delete(puVar7);
      operator_delete(puVar6);
    }
    if (this[0xd72a] == (Metering)0x0) {
      fVar15 = *(float *)(param_5 + 0x2c);
      if (*(float *)(param_5 + 0x28) <= *(float *)(param_5 + 0x2c)) {
        fVar15 = *(float *)(param_5 + 0x28);
      }
      fVar16 = *(float *)(param_5 + 0x30);
      if (fVar15 <= *(float *)(param_5 + 0x30)) {
        fVar16 = fVar15;
      }
      *(float *)(param_5 + 4) = fVar16;
    }
    else {
      fVar16 = *(float *)puVar13;
    }
    local_bc = 0x3f800000;
    local_b8 = local_b8 & 0xffffffff00000000;
    puVar6 = (ulong *)&local_bc;
    if (fVar16 <= 1.0) {
      puVar6 = puVar13;
    }
    if (*(float *)puVar6 <= 0.0) {
      puVar6 = &local_b8;
    }
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)puVar6;
    lVar11 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar11 + 1),0x191e,"CalculateColorSceneSA",
               "(r/g/b):weight_sum_for_all_color:%.3f, %.3f, %.3f, weight_sum_for_stats:%.3f, %.3f, %.3f, single_adjust_ratio:%.3f, %.3f, %.3f,lux_dr_adjust_weight:%.3f, %.3f, %.3f, weighted_adjust_ratio_sum:%.3f, final_adjust_ratio:%.3f"
               ,(double)*(float *)(param_5 + 0x1c),(double)*(float *)(param_5 + 0x20),
               (double)*(float *)(param_5 + 0x24),(double)*(float *)(param_5 + 0x10),
               (double)*(float *)(param_5 + 0x14),(double)*(float *)(param_5 + 0x18),
               (double)*(float *)(param_5 + 0x28),(double)*(float *)(param_5 + 0x2c),
               (double)*(float *)(param_5 + 0x30),(double)*(float *)(param_5 + 0x34),
               (double)*(float *)(param_5 + 0x38),(double)*(float *)(param_5 + 0x3c),
               (double)*(float *)(param_5 + 8),(double)*(float *)(param_5 + 4));
    if (param_6 != (MiDebug_Mtr *)0x0) {
      *(MtrColorSceneTuningData *)(param_6 + 0x8d2) = *pMVar1;
      *(Metering *)(param_6 + 0x8d3) = this[0xd729];
      *(Metering *)(param_6 + 0x8d4) = this[0xd72a];
      *(undefined8 *)(param_6 + 0x8d5) = *(undefined8 *)(this + 0xd76b);
      *(undefined4 *)(param_6 + 0x8dd) = *(undefined4 *)(this + 0xd773);
      *(undefined8 *)(param_6 + 0x8e1) = *(undefined8 *)(this + 0xd72b);
      *(undefined8 *)(param_6 + 0x8e9) = *(undefined8 *)(this + 0xd737);
      *(undefined8 *)(param_6 + 0x8f1) = *(undefined8 *)(this + 0xd743);
      *(undefined8 *)(param_6 + 0x8f9) = *(undefined8 *)(this + 0xd74f);
      *(undefined8 *)(param_6 + 0x901) = *(undefined8 *)(this + 0xd75b);
      *(undefined4 *)(param_6 + 0x909) = *(undefined4 *)(this + 0xd767);
      *(undefined4 *)(param_6 + 0x90d) = *(undefined4 *)(this + 0xd733);
      *(undefined4 *)(param_6 + 0x911) = *(undefined4 *)(this + 0xd763);
      *(undefined4 *)(param_6 + 0x915) = *(undefined4 *)(this + 0xd73f);
      *(undefined8 *)(param_6 + 0x919) = *(undefined8 *)(param_5 + 4);
      *(undefined4 *)(param_6 + 0x921) = *(undefined4 *)(param_5 + 0xc);
      *(undefined4 *)(param_6 + 0x925) = *(undefined4 *)(param_5 + 0x10);
      *(undefined4 *)(param_6 + 0x931) = *(undefined4 *)(param_5 + 0x1c);
      *(undefined4 *)(param_6 + 0x93d) = *(undefined4 *)(param_5 + 0x28);
      *(undefined4 *)(param_6 + 0x949) = *(undefined4 *)(param_5 + 0x34);
      *(undefined4 *)(param_6 + 0x955) = *(undefined4 *)(param_5 + 0x40);
      *(undefined4 *)(param_6 + 0x929) = *(undefined4 *)(param_5 + 0x14);
      *(undefined4 *)(param_6 + 0x935) = *(undefined4 *)(param_5 + 0x20);
      *(undefined4 *)(param_6 + 0x941) = *(undefined4 *)(param_5 + 0x2c);
      *(undefined4 *)(param_6 + 0x94d) = *(undefined4 *)(param_5 + 0x38);
      *(undefined4 *)(param_6 + 0x959) = *(undefined4 *)(param_5 + 0x44);
      *(undefined4 *)(param_6 + 0x92d) = *(undefined4 *)(param_5 + 0x18);
      *(undefined4 *)(param_6 + 0x939) = *(undefined4 *)(param_5 + 0x24);
      *(undefined4 *)(param_6 + 0x945) = *(undefined4 *)(param_5 + 0x30);
      *(undefined4 *)(param_6 + 0x951) = *(undefined4 *)(param_5 + 0x3c);
      *(undefined4 *)(param_6 + 0x95d) = *(undefined4 *)(param_5 + 0x48);
    }
    uVar12 = 1;
  }
  if (*(long *)(lVar5 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 0x186f30 CalculateMidToneSA @ 00286f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MI_AEC::Metering::CalculateMidToneSA(float, MI_AEC::ProcessedBHistStats<unsigned int, 3> const&,
   MI_AEC::HistCommonInfo const&, MI_AEC::HistMidToneSAResult*, MI_AEC::MiDebug_Mtr*) */

void __thiscall
MI_AEC::Metering::CalculateMidToneSA
          (Metering *this,float param_1,ProcessedBHistStats *param_2,HistCommonInfo *param_3,
          HistMidToneSAResult *param_4,MiDebug_Mtr *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 in_register_00005004;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float local_dc;
  MiDebug_Mtr local_d8;
  MiDebug_Mtr local_d7;
  MiDebug_Mtr local_d6;
  MiDebug_Mtr local_d5;
  float local_d4;
  float fStack_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  float local_b8;
  long local_b0;
  
  uVar12 = _UNK_003b5918;
  uVar4 = _DAT_003b5910;
  uVar11 = CONCAT44(in_register_00005004,param_1);
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  local_d8 = *(MiDebug_Mtr *)(*(long *)(this + 0x488) + 0x40b8);
  local_dc = param_1;
  if (local_d8 == (MiDebug_Mtr)0x0) {
    *(undefined8 *)(param_4 + 0x44) = 0x3f8000003f800000;
    *(undefined8 *)(param_4 + 0x3c) = uVar12;
    *(undefined8 *)(param_4 + 0x34) = uVar4;
    if (param_5 != (MiDebug_Mtr *)0x0) {
      param_5[0x671] = (MiDebug_Mtr)0x0;
    }
LAB_002874a0:
    uVar4 = 1;
  }
  else {
    MappingMidToneTuningParam(this,&local_dc,(HistMidToneTuningData *)&local_d8);
    uVar6 = CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_3,local_d4,fStack_d0);
    *(undefined4 *)(param_4 + 4) = uVar6;
    uVar6 = CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_3,local_cc,fStack_c8);
    *(undefined4 *)(param_4 + 8) = uVar6;
    fVar7 = (float)CalculateSpecificToneAvg
                             (this,param_2,(WhiteBalanceInfo *)param_3,local_c4,fStack_c0);
    *(float *)(param_4 + 0xc) = fVar7;
    fVar17 = *(float *)(param_3 + 0x24) * *(float *)(param_4 + 4);
    *(float *)(param_4 + 4) = fVar17;
    if ((1e-06 <= ABS(fVar17)) && (1e-06 <= ABS(fVar7))) {
      fVar14 = *(float *)(param_4 + 8);
      if (1e-06 <= ABS(fVar14)) {
        fVar16 = fVar17 / fVar14;
        fVar13 = fVar14 / fVar7;
        fVar15 = fVar17 / fVar7;
        *(float *)(param_4 + 0x10) = fVar15;
        *(float *)(param_4 + 0x14) = fVar16;
        *(float *)(param_4 + 0x18) = fVar13;
        *(float *)(param_4 + 0x1c) = fVar13 / fVar16;
        lVar5 = *(long *)(this + 0x488);
        lVar3 = lVar5 + 0x40c0;
        fVar8 = (float)FUN_0027ecf8(fVar13 / fVar16,uVar11,lVar5 + 0x4198,lVar3,lVar5 + 0x41b0);
        lVar1 = lVar5 + 0x41c8;
        *(float *)(param_4 + 0x20) = fVar8;
        *(float *)(param_4 + 0x24) = fVar16 * fVar8;
        fVar9 = (float)FUN_0027ecf8(fVar15,uVar11,lVar1,lVar3,lVar5 + 0x4210);
        *(float *)(param_4 + 0x28) = fVar9;
        fVar8 = (float)FUN_0027ecf8(fVar16 * fVar8,uVar11,lVar5 + 0x41e0,lVar3,lVar5 + 0x4228);
        *(float *)(param_4 + 0x2c) = fVar8;
        fVar10 = (float)FUN_0027ecf8(fVar15,uVar11,lVar1,lVar3,lVar5 + 0x4240);
        *(float *)(param_4 + 0x30) = fVar10;
        uVar6 = FUN_0027ecf8(fVar16,uVar11,lVar5 + 0x41e0,lVar3,lVar5 + 0x4258);
        *(undefined4 *)(param_4 + 0x34) = uVar6;
        uVar6 = FUN_0027ecf8(fVar15,fVar13,lVar1,lVar5 + 0x41f8,lVar5 + 0x4270);
        *(undefined4 *)(param_4 + 0x38) = uVar6;
        uVar6 = FUN_0027ecf8(fVar13,uVar11,lVar5 + 0x41f8,lVar3,lVar5 + 0x4288);
        *(float *)(param_4 + 0x44) = fVar8 / fVar14;
        *(float *)(param_4 + 0x48) = fVar10 / fVar7;
        *(undefined4 *)(param_4 + 0x3c) = uVar6;
        *(float *)(param_4 + 0x40) = fVar9 / fVar17;
        fVar17 = (fVar8 / fVar14) / *(float *)(this + 0xce10);
        fVar7 = local_bc;
        if (fVar17 <= local_bc) {
          fVar7 = fVar17;
        }
        fVar17 = local_b8;
        if (local_b8 <= fVar7) {
          fVar17 = fVar7;
        }
        *(float *)(param_4 + 0x4c) = *(float *)(this + 0xce10) * fVar17;
        if ((byte)local_d7 == 0) {
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        if ((byte)local_d5 == 0) {
          *(undefined4 *)(param_4 + 0x38) = 0;
        }
        if ((byte)local_d6 == 0) {
          *(undefined4 *)(param_4 + 0x3c) = 0;
        }
        lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
        dVar18 = (double)*(float *)(param_4 + 0xc);
        dVar20 = (double)*(float *)(param_4 + 0x24);
        dVar19 = (double)*(float *)(param_4 + 0x20);
        MI_LOG::MI_LOG_HELPER
                  ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar3 + 1),0x1200,"CalculateMidToneSA",
                   "mid_dr_b2d:%.3f, mid_dr_b2m:%.3f, mid_dr_m2d:%.3f, ref(bt,mt,dt):%.3f,%.3f,%.3f, avg(bt,mt,dt):%.3f, %.3f, %.3f, mid_dr_b2m_correc:%.3f, mid_b2m_correc_weight:%.3f"
                   ,(double)*(float *)(param_4 + 0x10),(double)*(float *)(param_4 + 0x14),
                   (double)*(float *)(param_4 + 0x18),(double)*(float *)(param_4 + 0x28),
                   (double)*(float *)(param_4 + 0x2c),(double)*(float *)(param_4 + 0x30),
                   (double)*(float *)(param_4 + 4),(double)*(float *)(param_4 + 8),dVar18,dVar20,
                   dVar19);
        uVar6 = (undefined4)((ulong)dVar18 >> 0x20);
        uVar21 = (undefined4)((ulong)dVar20 >> 0x20);
        uVar22 = (undefined4)((ulong)dVar19 >> 0x20);
        lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
        MI_LOG::MI_LOG_HELPER
                  ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar3 + 1),0x1205,"CalculateMidToneSA",
                   "adjust_ratio(bt,mt,dt):%.3f, %.3f, %.3f, adjust_weight(bt,mt,dt):%.3f, %.3f, %.3f,final_adjust_ratio:%.3f, enable_bright:%d, enable_dark:%d, enable_mid:%d"
                   ,(double)*(float *)(param_4 + 0x40),(double)*(float *)(param_4 + 0x44),
                   (double)*(float *)(param_4 + 0x48),(double)*(float *)(param_4 + 0x34),
                   (double)*(float *)(param_4 + 0x38),(double)*(float *)(param_4 + 0x3c),
                   (double)*(float *)(param_4 + 0x4c),CONCAT44(uVar6,(uint)(byte)local_d7),
                   CONCAT44(uVar21,(uint)(byte)local_d6),CONCAT44(uVar22,(uint)(byte)local_d5));
        if (param_5 != (MiDebug_Mtr *)0x0) {
          param_5[0x672] = local_d7;
          param_5[0x673] = local_d6;
          param_5[0x674] = local_d5;
          param_5[0x671] = local_d8;
          *(float *)(param_5 + 0x675) = local_d4;
          *(float *)(param_5 + 0x679) = fStack_d0;
          *(float *)(param_5 + 0x67d) = local_cc;
          *(float *)(param_5 + 0x681) = fStack_c8;
          *(float *)(param_5 + 0x691) = local_b8;
          *(float *)(param_5 + 0x685) = local_c4;
          *(float *)(param_5 + 0x689) = fStack_c0;
          *(float *)(param_5 + 0x68d) = local_bc;
          uVar4 = *(undefined8 *)(param_4 + 4);
          *(undefined8 *)(param_5 + 0x69d) = *(undefined8 *)(param_4 + 0xc);
          *(undefined8 *)(param_5 + 0x695) = uVar4;
          uVar4 = *(undefined8 *)(param_4 + 0x14);
          *(undefined8 *)(param_5 + 0x6ad) = *(undefined8 *)(param_4 + 0x1c);
          *(undefined8 *)(param_5 + 0x6a5) = uVar4;
          uVar4 = *(undefined8 *)(param_4 + 0x24);
          *(undefined8 *)(param_5 + 0x6bd) = *(undefined8 *)(param_4 + 0x2c);
          *(undefined8 *)(param_5 + 0x6b5) = uVar4;
          uVar4 = *(undefined8 *)(param_4 + 0x34);
          *(undefined8 *)(param_5 + 0x6cd) = *(undefined8 *)(param_4 + 0x3c);
          *(undefined8 *)(param_5 + 0x6c5) = uVar4;
          *(undefined4 *)(param_5 + 0x6d5) = *(undefined4 *)(param_4 + 0x44);
          *(undefined4 *)(param_5 + 0x6d9) = *(undefined4 *)(param_4 + 0x48);
          *(undefined4 *)(param_5 + 0x6dd) = *(undefined4 *)(param_4 + 0x4c);
        }
        goto LAB_002874a0;
      }
    }
    lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar3 + 1),0x11b5,"CalculateMidToneSA",
               "BT/MT/DT avg: %.3f %.3f %.3f is ZERO! hist metering failed!",
               (double)*(float *)(param_4 + 4),(double)*(float *)(param_4 + 8),
               (double)*(float *)(param_4 + 0xc));
    uVar11 = _UNK_003b5918;
    uVar12 = _DAT_003b5910;
    uVar4 = 0;
    *(undefined8 *)(param_4 + 0x44) = 0x3f8000003f800000;
    *(undefined8 *)(param_4 + 0x3c) = uVar11;
    *(undefined8 *)(param_4 + 0x34) = uVar12;
    if (param_5 != (MiDebug_Mtr *)0x0) {
      param_5[0x671] = local_d8;
      param_5[0x672] = local_d7;
      param_5[0x673] = local_d6;
      param_5[0x674] = local_d5;
      *(float *)(param_5 + 0x675) = local_d4;
      *(float *)(param_5 + 0x679) = fStack_d0;
      *(float *)(param_5 + 0x67d) = local_cc;
      *(float *)(param_5 + 0x681) = fStack_c8;
      *(float *)(param_5 + 0x685) = local_c4;
      *(float *)(param_5 + 0x689) = fStack_c0;
      *(float *)(param_5 + 0x68d) = local_bc;
      *(float *)(param_5 + 0x691) = local_b8;
      uVar12 = *(undefined8 *)(param_4 + 4);
      *(undefined8 *)(param_5 + 0x69d) = *(undefined8 *)(param_4 + 0xc);
      *(undefined8 *)(param_5 + 0x695) = uVar12;
      uVar12 = *(undefined8 *)(param_4 + 0x14);
      *(undefined8 *)(param_5 + 0x6ad) = *(undefined8 *)(param_4 + 0x1c);
      *(undefined8 *)(param_5 + 0x6a5) = uVar12;
      uVar12 = *(undefined8 *)(param_4 + 0x24);
      *(undefined8 *)(param_5 + 0x6bd) = *(undefined8 *)(param_4 + 0x2c);
      *(undefined8 *)(param_5 + 0x6b5) = uVar12;
      uVar12 = *(undefined8 *)(param_4 + 0x34);
      *(undefined8 *)(param_5 + 0x6cd) = *(undefined8 *)(param_4 + 0x3c);
      *(undefined8 *)(param_5 + 0x6c5) = uVar12;
      *(undefined4 *)(param_5 + 0x6d5) = *(undefined4 *)(param_4 + 0x44);
      *(undefined4 *)(param_5 + 0x6d9) = *(undefined4 *)(param_4 + 0x48);
      *(undefined4 *)(param_5 + 0x6dd) = *(undefined4 *)(param_4 + 0x4c);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0x18889c CalculateWhiteBlackSA @ 0028889c

/* MI_AEC::Metering::CalculateWhiteBlackSA(MI_AEC::MeteringInput const*, float const*, float,
   MI_AEC::WhiteBlackInput const*, MI_AEC::WhiteBlackOutput*, MI_AEC::MiDebug_Mtr*) */

undefined8 __thiscall
MI_AEC::Metering::CalculateWhiteBlackSA
          (Metering *this,MeteringInput *param_1,float *param_2,float param_3,
          WhiteBlackInput *param_4,WhiteBlackOutput *param_5,MiDebug_Mtr *param_6)

{
  Metering *pMVar1;
  float *pfVar2;
  WhiteBlackInput WVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined8 uVar21;
  float local_8c;
  float local_88;
  float local_84;
  
  pMVar1 = (Metering *)(*(long *)(this + 0x488) + 0x6358);
  if (*(char *)(*(long *)(this + 0x488) + 0x67c8) != '\0') {
    pMVar1 = this + 0xd559;
  }
  if (*pMVar1 == (Metering)0x0) {
    lVar5 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar5 + 1),0x1b8c,"CalculateWhiteBlackSA",
               "WhiteAddBlackSub is Disable!");
    auVar16 = NEON_fmov(0x3f800000,4);
    *(long *)(param_5 + 8) = auVar16._8_8_;
    *(long *)param_5 = auVar16._0_8_;
    if (param_6 != (MiDebug_Mtr *)0x0) {
      param_6[0x4c78] = (MiDebug_Mtr)0x0;
      *(long *)(param_6 + 0x4c8d) = auVar16._8_8_;
      *(long *)(param_6 + 0x4c85) = auVar16._0_8_;
      *(undefined4 *)(param_6 + 0x4c95) = 0x3f800000;
    }
  }
  else {
    sVar4 = CalculateWhiteBlackFallBack(this,param_1,param_2,param_3,param_4,param_6);
    fVar11 = (float)NEON_ucvtf(*param_4);
    if (sVar4 != 0) {
      fVar11 = 18.0;
    }
    if (1e-06 <= fVar11) {
      *(float *)(this + 0xd638) = fVar11;
    }
    if ((1e-06 <= ABS(*(float *)(param_1 + 0xa4) + -1.0)) && (param_1[0x16c] != (MeteringInput)0x1))
    {
      lVar5 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      auVar16._0_8_ = (double)*(float *)(param_1 + 0xa4);
      auVar16._8_8_ = 0;
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar5 + 1),0x1bae,"CalculateWhiteBlackSA",
                 "ev_ratio:%f not 1 and scene is change: %d, albedo fallback to 18!",auVar16,
                 (uint)(byte)param_1[0x16c]);
      *(undefined4 *)(this + 0xd638) = 0x41900000;
    }
    if (1e-06 <= ABS(*(float *)(*(long *)(this + 0x490) + 0x7a8) + -18.0)) {
      *(float *)(this + 0xd638) = *(float *)(*(long *)(this + 0x490) + 0x7a8);
    }
    uVar15 = (ulong)(uint)*(float *)(this + 0xd638);
    uVar21 = 0;
    if (*(char *)(*(long *)(this + 0x488) + 0x6b60) == '\0') {
      auVar16 = AlbedoSmooth(this,*(float *)(this + 0xd638));
      uVar21 = auVar16._8_8_;
      uVar15 = auVar16._0_8_;
      *(int *)(this + 0xd638) = auVar16._0_4_;
    }
    local_88 = 1.0;
    local_84 = 1.0;
    lVar5 = *(long *)(this + 0x490);
    if ((ABS((float)uVar15 + -18.0) < 1e-06) || (*(char *)(lVar5 + 0x790) != '\0')) {
      local_88 = 1.0;
      local_84 = 1.0;
      fVar14 = 1.0;
      pfVar8 = &local_88;
      pfVar9 = &local_84;
    }
    else {
      lVar10 = *(long *)(this + 0x488);
      uVar12 = *(undefined4 *)(this + 0xcf88);
      auVar18._8_8_ = uVar21;
      auVar18._0_8_ = uVar15;
      fVar11 = (float)FUN_0027ecf8(auVar18,uVar12,lVar10 + 0x6378,lVar10 + 0x6360,lVar10 + 0x6390);
      auVar19._8_8_ = uVar21;
      auVar19._0_8_ = uVar15;
      local_84 = fVar11;
      fVar13 = (float)FUN_0027ecf8(auVar19,uVar12,lVar10 + 0x6378,lVar10 + 0x6360,lVar10 + 0x63a8);
      local_88 = fVar13;
      plVar7 = *(long **)(lVar10 + 0x6438);
      fVar14 = 1.0;
      lVar6 = *(long *)(lVar10 + 0x6440) - (long)plVar7;
      if ((lVar6 != 0) &&
         ((*(long *)(lVar10 + 0x6410) - *(long *)(lVar10 + 0x6408) >> 2 ==
           (lVar6 >> 3) * -0x5555555555555555 &&
          (*(long *)(lVar10 + 0x6428) - *(long *)(lVar10 + 0x6420) == plVar7[1] - *plVar7)))) {
        auVar20._8_8_ = uVar21;
        auVar20._0_8_ = uVar15;
        fVar14 = (float)FUN_0027ecf8(auVar20,*(undefined4 *)(this + 0xd524),lVar10 + 0x6408,
                                     lVar10 + 0x6420,lVar10 + 0x6438);
      }
      pfVar9 = &local_84;
      if (fVar11 * fVar14 <= 0.6) {
        pfVar9 = &local_8c;
      }
      pfVar8 = &local_88;
      if (fVar13 <= 0.6) {
        pfVar8 = &local_8c;
      }
      local_84 = fVar11 * fVar14;
    }
    local_8c = 0.6;
    local_84 = *pfVar9;
    local_8c = 1.8;
    pfVar2 = &local_84;
    if (1.8 <= *pfVar9) {
      pfVar2 = &local_8c;
    }
    local_8c = 0.6;
    local_8c = 1.8;
    local_88 = *pfVar8;
    pfVar9 = &local_88;
    if (1.8 <= *pfVar8) {
      pfVar9 = &local_8c;
    }
    fVar11 = *pfVar2;
    if (1e-06 <= ABS(*(float *)(lVar5 + 0x7c0))) {
      fVar11 = *(float *)(lVar5 + 0x7c0);
    }
    fVar13 = *pfVar9;
    if (1e-06 <= ABS(*(float *)(lVar5 + 0x7d8))) {
      fVar13 = *(float *)(lVar5 + 0x7d8);
    }
    *(float *)param_5 = fVar11;
    *(float *)(param_5 + 4) = fVar11;
    *(float *)(param_5 + 8) = fVar13;
    *(undefined4 *)(param_5 + 0xc) = 0x3f800000;
    local_88 = fVar13;
    local_84 = fVar11;
    lVar5 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    lVar6 = *(long *)(this + 0x490);
    auVar17._0_8_ = (double)*(float *)(lVar6 + 0x7a8);
    auVar17._8_8_ = 0;
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar5 + 1),0x1c08,"CalculateWhiteBlackSA",
               "WhiteAddBlackSub:albedo(manual/ori/cur/conf):%f %d %f %f adjust_ratio(ev_ratio/tone_ratio/ev_ratio/tone_ratio): %f %f %f %f"
               ,auVar17,(double)*(float *)(this + 0xd638),(double)(float)param_4[5],
               (double)*(float *)(lVar6 + 0x7c0),(double)*(float *)(lVar6 + 0x7d8),(double)fVar11,
               (double)fVar13,param_4[1]);
    if (param_6 != (MiDebug_Mtr *)0x0) {
      param_6[0x4c78] = (MiDebug_Mtr)0x1;
      *(undefined4 *)(param_6 + 0x4c79) = *(undefined4 *)(this + 0xd638);
      uVar12 = NEON_ucvtf(param_4[1]);
      *(undefined4 *)(param_6 + 0x4c7d) = uVar12;
      WVar3 = param_4[5];
      *(float *)(param_6 + 0x4c85) = fVar11;
      *(float *)(param_6 + 0x4c89) = fVar11;
      *(float *)(param_6 + 0x4c8d) = fVar13;
      *(float *)(param_6 + 0x4c91) = fVar13;
      *(undefined4 *)(param_6 + 0x4c95) = 0x3f800000;
      *(WhiteBlackInput *)(param_6 + 0x4c81) = WVar3;
      *(float *)(param_6 + 0x4ce1) = fVar14;
      *(Metering *)(param_6 + 0x4ce5) = this[0xd559];
    }
  }
  return 1;
}


// ===== 0x184014 CalOverExpSceneCompensationSA @ 00284014

/* MI_AEC::Metering::CalOverExpSceneCompensationSA(MI_AEC::HistOverExpCompensationSAResult*,
   MI_AEC::MiDebug_Mtr*) */

undefined8 __thiscall
MI_AEC::Metering::CalOverExpSceneCompensationSA
          (Metering *this,HistOverExpCompensationSAResult *param_1,MiDebug_Mtr *param_2)

{
  bool bVar1;
  float **this_00;
  uint uVar2;
  size_t __n;
  long lVar3;
  Metering MVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_ac;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(this + 0x488);
  if (*(char *)(lVar5 + 0x53a8) == '\0') {
    *param_1 = (HistOverExpCompensationSAResult)0x0;
    if (param_2 != (MiDebug_Mtr *)0x0) {
      uVar10 = NEON_fmov(0x3f800000,4);
      param_2[0xa7c] = (MiDebug_Mtr)0x0;
      *(undefined4 *)(param_2 + 0xa85) = 0x3f800000;
      *(undefined8 *)(param_2 + 0xa7d) = uVar10;
    }
    lVar5 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar5 + 1),0xaef,
               "CalOverExpSceneCompensationSA","skip over exp compensation");
    goto LAB_002843a0;
  }
  fVar23 = *(float *)(lVar5 + 0x53ac);
  fVar21 = *(float *)(lVar5 + 0x53d0);
  fVar16 = *(float *)(lVar5 + 0x53d4);
  local_ac = *(float *)(this + 0xce28) - *(float *)(this + 0xce34);
  fVar22 = *(float *)(lVar5 + 0x53b4);
  fVar20 = *(float *)(lVar5 + 0x53b8);
  fVar19 = *(float *)(lVar5 + 0x53bc);
  fVar14 = *(float *)(lVar5 + 0x53c0);
  fVar13 = *(float *)(lVar5 + 0x53c4);
  fVar17 = *(float *)(lVar5 + 0x53c8);
  fVar15 = *(float *)(lVar5 + 0x53cc);
  uVar2 = *(uint *)(lVar5 + 0x53b0);
  this_00 = (float **)(this + 0xd6f8);
  pfVar9 = *(float **)(this + 0xd700);
  if (pfVar9 == *(float **)(this + 0xd708)) {
    std::__1::vector<float,std::__1::allocator<float>>::__push_back_slow_path<float_const&>
              ((vector<float,std::__1::allocator<float>> *)this_00,&local_ac);
    pfVar6 = *(float **)(this + 0xd700);
  }
  else {
    pfVar6 = pfVar9 + 1;
    *pfVar9 = local_ac;
    *(float **)(this + 0xd700) = pfVar6;
  }
  pfVar9 = *this_00;
  if ((ulong)uVar2 < (ulong)((long)pfVar6 - (long)pfVar9 >> 2)) {
    __n = (long)pfVar6 - (long)(pfVar9 + 1);
    if (__n != 0) {
      memmove(pfVar9,pfVar9 + 1,__n);
    }
    pfVar6 = pfVar9 + ((long)__n >> 2);
    pfVar9 = *this_00;
    *(float **)(this + 0xd700) = pfVar6;
  }
  fVar18 = 0.0;
  if (pfVar6 != pfVar9) {
    fVar18 = 0.0;
    uVar7 = 0;
    uVar8 = 1;
    do {
      fVar18 = fVar18 + pfVar9[uVar7];
      bVar1 = uVar8 < (ulong)((long)pfVar6 - (long)pfVar9 >> 2);
      uVar7 = uVar8;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (bVar1);
  }
  MVar4 = this[0xce38];
  if (fVar18 <= fVar23) {
LAB_00284210:
    if ((fVar22 < ABS(fVar18)) && (MVar4 != (Metering)0x0)) goto LAB_00284220;
    this[0xce38] = (Metering)0x0;
    lVar5 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar5 + 1),0xb0e,
               "CalOverExpSceneCompensationSA","not trigger overrcp compensation");
    MVar4 = this[0xce38];
    fVar17 = 1.0;
    fVar21 = 1.0;
  }
  else {
    if (MVar4 != (Metering)0x0) {
      MVar4 = (Metering)0x1;
      goto LAB_00284210;
    }
LAB_00284220:
    fVar22 = *(float *)(this + 0xce28);
    dVar12 = (double)NEON_fminnm((double)((fVar22 - fVar20) / (fVar19 - fVar20)),0x3ff0000000000000)
    ;
    dVar11 = (double)NEON_fminnm((double)((fVar22 - fVar14) / (fVar13 - fVar14)),0x3ff0000000000000)
    ;
    fVar13 = (float)dVar12;
    fVar14 = (float)dVar11;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    MVar4 = (Metering)0x1;
    fVar17 = fVar17 + (fVar15 - fVar17) * fVar13;
    fVar21 = fVar21 + (fVar16 - fVar21) * fVar14;
    this[0xce38] = (Metering)0x1;
  }
  fVar13 = 1.0 / fVar17;
  if (fVar17 <= 1.0) {
    fVar13 = 1.0;
  }
  fVar17 = 1.0 / fVar21;
  if (fVar21 <= 1.0) {
    fVar17 = 1.0;
  }
  *param_1 = (HistOverExpCompensationSAResult)MVar4;
  *(float *)(param_1 + 8) = fVar17;
  *(float *)(param_1 + 0xc) = fVar17;
  *(float *)(param_1 + 4) = fVar13;
  lVar5 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar5 + 1),0xb16,
             "CalOverExpSceneCompensationSA",
             "bright_ratio_diff:%f bright_ratio_integral %f m_apply_overexp_compensation %d pResult->overexp_comp_adj_ratio %f %f %f"
             ,(double)*(float *)(this + 0xce34),(double)fVar18,(double)*(float *)(param_1 + 4),
             (double)*(float *)(param_1 + 0xc),(double)*(float *)(param_1 + 8),
             (uint)(byte)this[0xce38]);
  if (param_2 != (MiDebug_Mtr *)0x0) {
    *(Metering *)(param_2 + 0xa7c) = this[0xce38];
    *(undefined4 *)(param_2 + 0xa7d) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 0xa85) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 0xa81) = *(undefined4 *)(param_1 + 8);
  }
LAB_002843a0:
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x189e70 GetFrameSATuningData @ 00289e70

/* MI_AEC::Metering::GetFrameSATuningData(float const*, MI_AEC::HistDynamicInfo const*,
   MI_AEC::Hist_frameSA_tuning_data const*, MI_AEC::MtrHistCoreTuningData&) */

void __thiscall
MI_AEC::Metering::GetFrameSATuningData
          (Metering *this,float *param_1,HistDynamicInfo *param_2,Hist_frameSA_tuning_data *param_3,
          MtrHistCoreTuningData *param_4)

{
  Hist_frameSA_tuning_data *pHVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float **ppfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  
  *param_4 = (MtrHistCoreTuningData)(*(float *)param_3 != 0.0);
  ppfVar8 = (float **)(param_3 + 8);
  pfVar2 = *ppfVar8;
  uVar6 = *(long *)(param_3 + 0x10) - (long)pfVar2;
  if (uVar6 == 0) {
    auVar14 = NEON_fmov(0xbf800000,4);
    *(long *)(param_4 + 9) = auVar14._8_8_;
    *(long *)(param_4 + 1) = auVar14._0_8_;
    *(undefined8 *)(param_4 + 0x11) = 0xbf800000bf800000;
    *(undefined4 *)(param_4 + 0x19) = 0xbf800000;
    fVar20 = -1.0;
    goto LAB_0028a6a8;
  }
  lVar5 = ((long)uVar6 >> 2) + -1;
  fVar20 = *param_1;
  iVar3 = (int)(uVar6 >> 2);
  if (pfVar2[lVar5] <= fVar20) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_00289f78:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_00289f8c;
    fVar21 = -1.0;
  }
  else {
    fVar21 = *pfVar2;
    if ((fVar21 < fVar20) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar21 <= fVar20) && (fVar20 < pfVar2[uVar6 + 1])) goto LAB_00289f78;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar21 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_00289f8c:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar21 = *(float *)(*(long *)(param_3 + 0x38) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar21 = *(float *)(*(long *)(param_3 + 0x38) + lVar7 * 4);
      dVar13 = (double)NEON_fminnm((double)((fVar20 - pfVar2[lVar7]) /
                                           (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                   0x3ff0000000000000);
      fVar20 = (float)dVar13;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar21 = fVar21 + (*(float *)(*(long *)(param_3 + 0x38) + uVar6) - fVar21) * fVar20;
    }
  }
  *(float *)(param_4 + 1) = fVar21;
  fVar20 = *param_1;
  if (pfVar2[lVar5] <= fVar20) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028a06c:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028a080;
    fVar21 = -1.0;
  }
  else {
    fVar21 = *pfVar2;
    if ((fVar21 < fVar20) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar21 <= fVar20) && (fVar20 < pfVar2[uVar6 + 1])) goto LAB_0028a06c;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar21 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028a080:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar21 = *(float *)(*(long *)(param_3 + 0x68) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar21 = *(float *)(*(long *)(param_3 + 0x68) + lVar7 * 4);
      dVar13 = (double)NEON_fminnm((double)((fVar20 - pfVar2[lVar7]) /
                                           (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                   0x3ff0000000000000);
      fVar20 = (float)dVar13;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar21 = fVar21 + (*(float *)(*(long *)(param_3 + 0x68) + uVar6) - fVar21) * fVar20;
    }
  }
  *(float *)(param_4 + 5) = fVar21;
  fVar20 = *param_1;
  if (pfVar2[lVar5] <= fVar20) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028a160:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028a174;
    fVar21 = -1.0;
  }
  else {
    fVar21 = *pfVar2;
    if ((fVar21 < fVar20) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar21 <= fVar20) && (fVar20 < pfVar2[uVar6 + 1])) goto LAB_0028a160;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar21 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028a174:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar21 = *(float *)(*(long *)(param_3 + 0x50) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar21 = *(float *)(*(long *)(param_3 + 0x50) + lVar7 * 4);
      dVar13 = (double)NEON_fminnm((double)((fVar20 - pfVar2[lVar7]) /
                                           (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                   0x3ff0000000000000);
      fVar20 = (float)dVar13;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar21 = fVar21 + (*(float *)(*(long *)(param_3 + 0x50) + uVar6) - fVar21) * fVar20;
    }
  }
  *(float *)(param_4 + 9) = fVar21;
  fVar20 = *param_1;
  if (pfVar2[lVar5] <= fVar20) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028a254:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028a268;
    fVar21 = -1.0;
  }
  else {
    fVar21 = *pfVar2;
    if ((fVar21 < fVar20) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar21 <= fVar20) && (fVar20 < pfVar2[uVar6 + 1])) goto LAB_0028a254;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar21 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028a268:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar21 = *(float *)(*(long *)(param_3 + 0x80) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar21 = *(float *)(*(long *)(param_3 + 0x80) + lVar7 * 4);
      dVar13 = (double)NEON_fminnm((double)((fVar20 - pfVar2[lVar7]) /
                                           (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                   0x3ff0000000000000);
      fVar20 = (float)dVar13;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar21 = fVar21 + (*(float *)(*(long *)(param_3 + 0x80) + uVar6) - fVar21) * fVar20;
    }
  }
  *(float *)(param_4 + 0xd) = fVar21;
  fVar20 = *param_1;
  if (pfVar2[lVar5] <= fVar20) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028a348:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028a35c;
    fVar21 = -1.0;
  }
  else {
    fVar21 = *pfVar2;
    if ((fVar21 < fVar20) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar21 <= fVar20) && (fVar20 < pfVar2[uVar6 + 1])) goto LAB_0028a348;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar21 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028a35c:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar21 = *(float *)(*(long *)(param_3 + 0x98) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar21 = *(float *)(*(long *)(param_3 + 0x98) + lVar7 * 4);
      dVar13 = (double)NEON_fminnm((double)((fVar20 - pfVar2[lVar7]) /
                                           (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                   0x3ff0000000000000);
      fVar20 = (float)dVar13;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar21 = fVar21 + (*(float *)(*(long *)(param_3 + 0x98) + uVar6) - fVar21) * fVar20;
    }
  }
  *(float *)(param_4 + 0x11) = fVar21;
  fVar20 = *param_1;
  if (pfVar2[lVar5] <= fVar20) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028a43c:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028a450;
    fVar21 = -1.0;
  }
  else {
    fVar21 = *pfVar2;
    if ((fVar21 < fVar20) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar21 <= fVar20) && (fVar20 < pfVar2[uVar6 + 1])) goto LAB_0028a43c;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar21 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028a450:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar21 = *(float *)(*(long *)(param_3 + 0xb0) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar21 = *(float *)(*(long *)(param_3 + 0xb0) + lVar7 * 4);
      dVar13 = (double)NEON_fminnm((double)((fVar20 - pfVar2[lVar7]) /
                                           (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                   0x3ff0000000000000);
      fVar20 = (float)dVar13;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar21 = fVar21 + (*(float *)(*(long *)(param_3 + 0xb0) + uVar6) - fVar21) * fVar20;
    }
  }
  *(float *)(param_4 + 0x15) = fVar21;
  fVar20 = *param_1;
  if (pfVar2[lVar5] <= fVar20) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028a530:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028a544;
    fVar21 = -1.0;
  }
  else {
    fVar21 = *pfVar2;
    if ((fVar21 < fVar20) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar21 <= fVar20) && (fVar20 < pfVar2[uVar6 + 1])) goto LAB_0028a530;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar21 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028a544:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar21 = *(float *)(*(long *)(param_3 + 200) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar21 = *(float *)(*(long *)(param_3 + 200) + lVar7 * 4);
      dVar13 = (double)NEON_fminnm((double)((fVar20 - pfVar2[lVar7]) /
                                           (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                   0x3ff0000000000000);
      fVar20 = (float)dVar13;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar21 = fVar21 + (*(float *)(*(long *)(param_3 + 200) + uVar6) - fVar21) * fVar20;
    }
  }
  *(float *)(param_4 + 0x19) = fVar21;
  fVar21 = *param_1;
  if (pfVar2[lVar5] <= fVar21) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028a624:
    iVar4 = (int)uVar6;
    if (iVar4 == -1) {
      fVar20 = -1.0;
      goto LAB_0028a6a8;
    }
  }
  else {
    fVar20 = *pfVar2;
    if ((fVar20 < fVar21) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar20 <= fVar21) && (fVar21 < pfVar2[uVar6 + 1])) goto LAB_0028a624;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar20 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
  }
  lVar5 = (long)iVar4;
  if (iVar4 == iVar3 + -1) {
    fVar20 = *(float *)(*(long *)(param_3 + 0xe0) + lVar5 * 4);
  }
  else {
    uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
    fVar20 = *(float *)(*(long *)(param_3 + 0xe0) + lVar5 * 4);
    dVar13 = (double)NEON_fminnm((double)((fVar21 - pfVar2[lVar5]) /
                                         (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar5])),
                                 0x3ff0000000000000);
    fVar21 = (float)dVar13;
    if (0.0 <= fVar21) {
      fVar21 = 0.0;
    }
    fVar20 = fVar20 + (*(float *)(*(long *)(param_3 + 0xe0) + uVar6) - fVar20) * fVar21;
  }
LAB_0028a6a8:
  *(float *)(param_4 + 0x1d) = fVar20;
  uVar6 = CONCAT44(0,*(uint *)(param_2 + 8));
  uVar22 = 0;
  pHVar1 = param_3 + 0x20;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar6;
  fVar20 = (float)FUN_0027ecf8(auVar14,*param_1,pHVar1,ppfVar8,param_3 + 0xf8);
  *(float *)(param_4 + 0x21) = fVar20;
  auVar15._8_8_ = uVar22;
  auVar15._0_8_ = uVar6;
  fVar21 = (float)FUN_0027ecf8(auVar15,*param_1,pHVar1,ppfVar8,param_3 + 0x110);
  *(float *)(param_4 + 0x25) = fVar21;
  auVar16._8_8_ = uVar22;
  auVar16._0_8_ = uVar6;
  fVar9 = (float)FUN_0027ecf8(auVar16,*param_1,pHVar1,ppfVar8,param_3 + 0x128);
  *(float *)(param_4 + 0x29) = fVar9;
  auVar17._8_8_ = uVar22;
  auVar17._0_8_ = uVar6;
  fVar10 = (float)FUN_0027ecf8(auVar17,*param_1,pHVar1,ppfVar8,param_3 + 0x140);
  *(float *)(param_4 + 0x2d) = fVar10;
  fVar11 = (float)FUN_0027ecf8(*(undefined4 *)param_2,*param_1,param_3 + 0x158,ppfVar8,
                               param_3 + 0x1a0);
  *(float *)(param_4 + 0x31) = fVar11;
  auVar18._8_8_ = uVar22;
  auVar18._0_8_ = uVar6;
  fVar12 = (float)FUN_0027ecf8(auVar18,*param_1,pHVar1,ppfVar8,param_3 + 0x188);
  *(float *)(param_4 + 0x21) = fVar20 * *(float *)(this + 0xd560);
  *(float *)(param_4 + 0x25) = fVar21 * *(float *)(this + 0xd568);
  *(float *)(param_4 + 0x29) = fVar9 * *(float *)(this + 0xd564);
  *(float *)(param_4 + 0x2d) = fVar10 * *(float *)(this + 0xd56c);
  *(float *)(param_4 + 0x31) = fVar11 * *(float *)(this + 0xd574);
  *(float *)(param_4 + 0x35) = fVar12 * *(float *)(this + 0xd570);
  lVar5 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  auVar19._0_8_ = (double)*(float *)(param_4 + 1);
  auVar19._8_8_ = 0;
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar5 + 1),0xc0d,"GetFrameSATuningData",
             "pHistCore params: low(bt_st/bt_en/dt_st/dt_en): %f / %f / %f / %f , high(bt_st/bt_en/dt_st/dt_en): %f / %f / %f / %f , ref(bt_low / bt_high / dt_low / dt_high) : % f / % f / % f / % f, nor_cap: %f %f"
             ,auVar19,(double)*(float *)(param_4 + 9),(double)*(float *)(param_4 + 0x11),
             (double)*(float *)(param_4 + 0x15),(double)*(float *)(param_4 + 5),
             (double)*(float *)(param_4 + 0xd),(double)*(float *)(param_4 + 0x19),
             (double)*(float *)(param_4 + 0x1d),(double)*(float *)(param_4 + 0x21),
             (double)*(float *)(param_4 + 0x25),(double)*(float *)(param_4 + 0x29),
             (double)*(float *)(param_4 + 0x2d),(double)*(float *)(param_4 + 0x31),
             (double)*(float *)(param_4 + 0x35));
  return;
}


// ===== 0x18cad0 GetAdaptiveSATuningData @ 0028cad0

/* MI_AEC::Metering::GetAdaptiveSATuningData(float const*, MI_AEC::HistDynamicInfo const*,
   MI_AEC::Hist_adaptiveSA_tuning_data const*, MI_AEC::MtrHistAdaptiveTuningData&) */

void __thiscall
MI_AEC::Metering::GetAdaptiveSATuningData
          (Metering *this,float *param_1,HistDynamicInfo *param_2,
          Hist_adaptiveSA_tuning_data *param_3,MtrHistAdaptiveTuningData *param_4)

{
  Hist_adaptiveSA_tuning_data *pHVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float **ppfVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined auVar19 [16];
  undefined8 uVar21;
  undefined auVar20 [16];
  undefined4 uVar22;
  float fVar23;
  
  *param_4 = (MtrHistAdaptiveTuningData)*param_3;
  ppfVar7 = (float **)(param_3 + 8);
  pfVar8 = *ppfVar7;
  auVar19 = NEON_fmov(0xbf800000,4);
  uVar6 = *(long *)(param_3 + 0x10) - (long)pfVar8;
  uVar21 = auVar19._8_8_;
  uVar18 = auVar19._0_8_;
  iVar9 = (int)(uVar6 >> 2);
  if (uVar6 == 0) {
    *(undefined8 *)(param_4 + 9) = uVar21;
    *(undefined8 *)(param_4 + 1) = uVar18;
    *(undefined4 *)(param_4 + 0x11) = 0xbf800000;
    fVar10 = -1.0;
  }
  else {
    lVar3 = ((long)uVar6 >> 2) + -1;
    fVar10 = *param_1;
    if (pfVar8[lVar3] <= fVar10) {
      uVar4 = (ulong)(iVar9 - 1);
LAB_0028cbcc:
      iVar2 = (int)uVar4;
      if (iVar2 != -1) goto LAB_0028cbe0;
      fVar15 = -1.0;
    }
    else {
      fVar15 = *pfVar8;
      if ((fVar15 < fVar10) && (0 < (int)(iVar9 - 1U))) {
        uVar4 = 0;
        while( true ) {
          if ((fVar15 <= fVar10) && (fVar10 < pfVar8[uVar4 + 1])) goto LAB_0028cbcc;
          if ((ulong)(iVar9 - 1U) - 1 == uVar4) break;
          fVar15 = pfVar8[uVar4 + 1];
          uVar4 = uVar4 + 1;
        }
      }
      iVar2 = 0;
LAB_0028cbe0:
      lVar5 = (long)iVar2;
      if (iVar2 == iVar9 + -1) {
        fVar15 = *(float *)(*(long *)(param_3 + 0x38) + lVar5 * 4);
      }
      else {
        uVar4 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
        fVar15 = *(float *)(*(long *)(param_3 + 0x38) + lVar5 * 4);
        dVar14 = (double)NEON_fminnm((double)((fVar10 - pfVar8[lVar5]) /
                                             (*(float *)((long)pfVar8 + uVar4) - pfVar8[lVar5])),
                                     0x3ff0000000000000);
        fVar10 = (float)dVar14;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar15 = fVar15 + (*(float *)(*(long *)(param_3 + 0x38) + uVar4) - fVar15) * fVar10;
      }
    }
    *(float *)(param_4 + 1) = fVar15;
    fVar10 = *param_1;
    if (pfVar8[lVar3] <= fVar10) {
      uVar4 = (ulong)(iVar9 - 1);
LAB_0028ccc0:
      iVar2 = (int)uVar4;
      if (iVar2 != -1) goto LAB_0028ccd4;
      fVar15 = -1.0;
    }
    else {
      fVar15 = *pfVar8;
      if ((fVar15 < fVar10) && (0 < (int)(iVar9 - 1U))) {
        uVar4 = 0;
        while( true ) {
          if ((fVar15 <= fVar10) && (fVar10 < pfVar8[uVar4 + 1])) goto LAB_0028ccc0;
          if ((ulong)(iVar9 - 1U) - 1 == uVar4) break;
          fVar15 = pfVar8[uVar4 + 1];
          uVar4 = uVar4 + 1;
        }
      }
      iVar2 = 0;
LAB_0028ccd4:
      lVar5 = (long)iVar2;
      if (iVar2 == iVar9 + -1) {
        fVar15 = *(float *)(*(long *)(param_3 + 0x50) + lVar5 * 4);
      }
      else {
        uVar4 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
        fVar15 = *(float *)(*(long *)(param_3 + 0x50) + lVar5 * 4);
        dVar14 = (double)NEON_fminnm((double)((fVar10 - pfVar8[lVar5]) /
                                             (*(float *)((long)pfVar8 + uVar4) - pfVar8[lVar5])),
                                     0x3ff0000000000000);
        fVar10 = (float)dVar14;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar15 = fVar15 + (*(float *)(*(long *)(param_3 + 0x50) + uVar4) - fVar15) * fVar10;
      }
    }
    *(float *)(param_4 + 5) = fVar15;
    fVar10 = *param_1;
    if (pfVar8[lVar3] <= fVar10) {
      uVar4 = (ulong)(iVar9 - 1);
LAB_0028cdb4:
      iVar2 = (int)uVar4;
      if (iVar2 != -1) goto LAB_0028cdc8;
      fVar15 = -1.0;
    }
    else {
      fVar15 = *pfVar8;
      if ((fVar15 < fVar10) && (0 < (int)(iVar9 - 1U))) {
        uVar4 = 0;
        while( true ) {
          if ((fVar15 <= fVar10) && (fVar10 < pfVar8[uVar4 + 1])) goto LAB_0028cdb4;
          if ((ulong)(iVar9 - 1U) - 1 == uVar4) break;
          fVar15 = pfVar8[uVar4 + 1];
          uVar4 = uVar4 + 1;
        }
      }
      iVar2 = 0;
LAB_0028cdc8:
      lVar5 = (long)iVar2;
      if (iVar2 == iVar9 + -1) {
        fVar15 = *(float *)(*(long *)(param_3 + 0x98) + lVar5 * 4);
      }
      else {
        uVar4 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
        fVar15 = *(float *)(*(long *)(param_3 + 0x98) + lVar5 * 4);
        dVar14 = (double)NEON_fminnm((double)((fVar10 - pfVar8[lVar5]) /
                                             (*(float *)((long)pfVar8 + uVar4) - pfVar8[lVar5])),
                                     0x3ff0000000000000);
        fVar10 = (float)dVar14;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar15 = fVar15 + (*(float *)(*(long *)(param_3 + 0x98) + uVar4) - fVar15) * fVar10;
      }
    }
    *(float *)(param_4 + 9) = fVar15;
    fVar10 = *param_1;
    if (pfVar8[lVar3] <= fVar10) {
      uVar4 = (ulong)(iVar9 - 1);
LAB_0028cea8:
      iVar2 = (int)uVar4;
      if (iVar2 != -1) goto LAB_0028cebc;
      fVar15 = -1.0;
    }
    else {
      fVar15 = *pfVar8;
      if ((fVar15 < fVar10) && (0 < (int)(iVar9 - 1U))) {
        uVar4 = 0;
        while( true ) {
          if ((fVar15 <= fVar10) && (fVar10 < pfVar8[uVar4 + 1])) goto LAB_0028cea8;
          if ((ulong)(iVar9 - 1U) - 1 == uVar4) break;
          fVar15 = pfVar8[uVar4 + 1];
          uVar4 = uVar4 + 1;
        }
      }
      iVar2 = 0;
LAB_0028cebc:
      lVar5 = (long)iVar2;
      if (iVar2 == iVar9 + -1) {
        fVar15 = *(float *)(*(long *)(param_3 + 0xb0) + lVar5 * 4);
      }
      else {
        uVar4 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
        fVar15 = *(float *)(*(long *)(param_3 + 0xb0) + lVar5 * 4);
        dVar14 = (double)NEON_fminnm((double)((fVar10 - pfVar8[lVar5]) /
                                             (*(float *)((long)pfVar8 + uVar4) - pfVar8[lVar5])),
                                     0x3ff0000000000000);
        fVar10 = (float)dVar14;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar15 = fVar15 + (*(float *)(*(long *)(param_3 + 0xb0) + uVar4) - fVar15) * fVar10;
      }
    }
    *(float *)(param_4 + 0xd) = fVar15;
    fVar10 = *param_1;
    if (pfVar8[lVar3] <= fVar10) {
      uVar4 = (ulong)(iVar9 - 1);
LAB_0028cf9c:
      iVar2 = (int)uVar4;
      if (iVar2 != -1) goto LAB_0028cfb0;
      fVar15 = -1.0;
    }
    else {
      fVar15 = *pfVar8;
      if ((fVar15 < fVar10) && (0 < (int)(iVar9 - 1U))) {
        uVar4 = 0;
        while( true ) {
          if ((fVar15 <= fVar10) && (fVar10 < pfVar8[uVar4 + 1])) goto LAB_0028cf9c;
          if ((ulong)(iVar9 - 1U) - 1 == uVar4) break;
          fVar15 = pfVar8[uVar4 + 1];
          uVar4 = uVar4 + 1;
        }
      }
      iVar2 = 0;
LAB_0028cfb0:
      lVar5 = (long)iVar2;
      if (iVar2 == iVar9 + -1) {
        fVar15 = *(float *)(*(long *)(param_3 + 0x68) + lVar5 * 4);
      }
      else {
        uVar4 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
        fVar15 = *(float *)(*(long *)(param_3 + 0x68) + lVar5 * 4);
        dVar14 = (double)NEON_fminnm((double)((fVar10 - pfVar8[lVar5]) /
                                             (*(float *)((long)pfVar8 + uVar4) - pfVar8[lVar5])),
                                     0x3ff0000000000000);
        fVar10 = (float)dVar14;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar15 = fVar15 + (*(float *)(*(long *)(param_3 + 0x68) + uVar4) - fVar15) * fVar10;
      }
    }
    *(float *)(param_4 + 0x11) = fVar15;
    fVar15 = *param_1;
    if (pfVar8[lVar3] <= fVar15) {
      uVar4 = (ulong)(iVar9 - 1);
LAB_0028d090:
      iVar2 = (int)uVar4;
      if (iVar2 == -1) {
        fVar10 = -1.0;
        goto LAB_0028d114;
      }
    }
    else {
      fVar10 = *pfVar8;
      if ((fVar10 < fVar15) && (0 < (int)(iVar9 - 1U))) {
        uVar4 = 0;
        while( true ) {
          if ((fVar10 <= fVar15) && (fVar15 < pfVar8[uVar4 + 1])) goto LAB_0028d090;
          if ((ulong)(iVar9 - 1U) - 1 == uVar4) break;
          fVar10 = pfVar8[uVar4 + 1];
          uVar4 = uVar4 + 1;
        }
      }
      iVar2 = 0;
    }
    lVar3 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar10 = *(float *)(*(long *)(param_3 + 0x80) + lVar3 * 4);
    }
    else {
      uVar4 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar10 = *(float *)(*(long *)(param_3 + 0x80) + lVar3 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar15 - pfVar8[lVar3]) /
                                           (*(float *)((long)pfVar8 + uVar4) - pfVar8[lVar3])),
                                   0x3ff0000000000000);
      fVar15 = (float)dVar14;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      fVar10 = fVar10 + (*(float *)(*(long *)(param_3 + 0x80) + uVar4) - fVar10) * fVar15;
    }
  }
LAB_0028d114:
  *(float *)(param_4 + 0x15) = fVar10;
  uVar22 = *(undefined4 *)(param_2 + 8);
  pHVar1 = param_3 + 0x20;
  fVar10 = (float)FUN_0027ecf8(uVar22,*param_1,pHVar1,ppfVar7,param_3 + 200);
  *(float *)(param_4 + 0x19) = fVar10;
  fVar15 = (float)FUN_0027ecf8(uVar22,*param_1,pHVar1,ppfVar7,param_3 + 0xe0);
  *(float *)(param_4 + 0x1d) = fVar15;
  fVar11 = (float)FUN_0027ecf8(uVar22,*param_1,pHVar1,ppfVar7,param_3 + 0xf8);
  *(float *)(param_4 + 0x21) = fVar11;
  uVar22 = FUN_0027ecf8(uVar22,*param_1,pHVar1,ppfVar7,param_3 + 0x260);
  *(undefined4 *)(param_4 + 0x55) = uVar22;
  if (uVar6 == 0) {
    uVar13 = NEON_fmov(0xbf800000,4);
    fVar23 = -1.0;
    *(undefined8 *)(param_4 + 0x2d) = uVar21;
    *(undefined8 *)(param_4 + 0x25) = uVar18;
    *(undefined8 *)(param_4 + 0x3d) = uVar21;
    *(undefined8 *)(param_4 + 0x35) = uVar18;
    *(undefined8 *)(param_4 + 0x59) = uVar13;
    *(undefined4 *)(param_4 + 0x45) = 0xbf800000;
    fVar16 = -1.0;
    fVar12 = fVar23;
    goto LAB_0028dd44;
  }
  fVar12 = *param_1;
  lVar3 = ((long)uVar6 >> 2) + -1;
  if (pfVar8[lVar3] <= fVar12) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028d244:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028d258;
    fVar23 = -1.0;
  }
  else {
    fVar16 = *pfVar8;
    if ((fVar16 < fVar12) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar16 <= fVar12) && (fVar12 < pfVar8[uVar6 + 1])) goto LAB_0028d244;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar16 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028d258:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar23 = *(float *)(*(long *)(param_3 + 0x278) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar23 = *(float *)(*(long *)(param_3 + 0x278) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar12 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar12 = (float)dVar14;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar23 = fVar23 + (*(float *)(*(long *)(param_3 + 0x278) + uVar6) - fVar23) * fVar12;
    }
  }
  *(float *)(param_4 + 0x59) = fVar23;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028d338:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028d34c;
    fVar12 = -1.0;
  }
  else {
    fVar12 = *pfVar8;
    if ((fVar12 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar12 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028d338;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar12 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028d34c:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar12 = *(float *)(*(long *)(param_3 + 0x290) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar12 = *(float *)(*(long *)(param_3 + 0x290) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar12 = fVar12 + (*(float *)(*(long *)(param_3 + 0x290) + uVar6) - fVar12) * fVar16;
    }
  }
  *(float *)(param_4 + 0x5d) = fVar12;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028d42c:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028d440;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar8;
    if ((fVar17 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar17 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028d42c;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar17 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028d440:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar17 = *(float *)(*(long *)(param_3 + 0x110) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(param_3 + 0x110) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(param_3 + 0x110) + uVar6) - fVar17) * fVar16;
    }
  }
  *(float *)(param_4 + 0x25) = fVar17;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028d520:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028d534;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar8;
    if ((fVar17 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar17 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028d520;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar17 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028d534:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar17 = *(float *)(*(long *)(param_3 + 0x128) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(param_3 + 0x128) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(param_3 + 0x128) + uVar6) - fVar17) * fVar16;
    }
  }
  *(float *)(param_4 + 0x29) = fVar17;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028d614:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028d628;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar8;
    if ((fVar17 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar17 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028d614;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar17 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028d628:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar17 = *(float *)(*(long *)(param_3 + 0x140) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(param_3 + 0x140) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(param_3 + 0x140) + uVar6) - fVar17) * fVar16;
    }
  }
  *(float *)(param_4 + 0x2d) = fVar17;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028d708:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028d71c;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar8;
    if ((fVar17 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar17 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028d708;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar17 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028d71c:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar17 = *(float *)(*(long *)(param_3 + 0x158) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(param_3 + 0x158) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(param_3 + 0x158) + uVar6) - fVar17) * fVar16;
    }
  }
  *(float *)(param_4 + 0x31) = fVar17;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028d7fc:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028d810;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar8;
    if ((fVar17 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar17 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028d7fc;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar17 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028d810:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar17 = *(float *)(*(long *)(param_3 + 0x170) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(param_3 + 0x170) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(param_3 + 0x170) + uVar6) - fVar17) * fVar16;
    }
  }
  *(float *)(param_4 + 0x35) = fVar17;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028d8f0:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028d904;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar8;
    if ((fVar17 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar17 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028d8f0;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar17 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028d904:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar17 = *(float *)(*(long *)(param_3 + 0x188) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(param_3 + 0x188) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(param_3 + 0x188) + uVar6) - fVar17) * fVar16;
    }
  }
  *(float *)(param_4 + 0x39) = fVar17;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028d9e4:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028d9f8;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar8;
    if ((fVar17 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar17 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028d9e4;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar17 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028d9f8:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar17 = *(float *)(*(long *)(param_3 + 0x1a0) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(param_3 + 0x1a0) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(param_3 + 0x1a0) + uVar6) - fVar17) * fVar16;
    }
  }
  *(float *)(param_4 + 0x3d) = fVar17;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028dad8:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028daec;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar8;
    if ((fVar17 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar17 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028dad8;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar17 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028daec:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar17 = *(float *)(*(long *)(param_3 + 0x1b8) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(param_3 + 0x1b8) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(param_3 + 0x1b8) + uVar6) - fVar17) * fVar16;
    }
  }
  *(float *)(param_4 + 0x41) = fVar17;
  fVar16 = *param_1;
  if (pfVar8[lVar3] <= fVar16) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028dbcc:
    iVar2 = (int)uVar6;
    if (iVar2 != -1) goto LAB_0028dbe0;
    fVar17 = -1.0;
  }
  else {
    fVar17 = *pfVar8;
    if ((fVar17 < fVar16) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar17 <= fVar16) && (fVar16 < pfVar8[uVar6 + 1])) goto LAB_0028dbcc;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar17 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
LAB_0028dbe0:
    lVar5 = (long)iVar2;
    if (iVar2 == iVar9 + -1) {
      fVar17 = *(float *)(*(long *)(param_3 + 0x1d0) + lVar5 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
      fVar17 = *(float *)(*(long *)(param_3 + 0x1d0) + lVar5 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar16 - pfVar8[lVar5]) /
                                           (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar5])),
                                   0x3ff0000000000000);
      fVar16 = (float)dVar14;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar17 = fVar17 + (*(float *)(*(long *)(param_3 + 0x1d0) + uVar6) - fVar17) * fVar16;
    }
  }
  *(float *)(param_4 + 0x45) = fVar17;
  fVar17 = *param_1;
  if (pfVar8[lVar3] <= fVar17) {
    uVar6 = (ulong)(iVar9 - 1);
LAB_0028dcc0:
    iVar2 = (int)uVar6;
    if (iVar2 == -1) {
      fVar16 = -1.0;
      goto LAB_0028dd44;
    }
  }
  else {
    fVar16 = *pfVar8;
    if ((fVar16 < fVar17) && (0 < (int)(iVar9 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar16 <= fVar17) && (fVar17 < pfVar8[uVar6 + 1])) goto LAB_0028dcc0;
        if ((ulong)(iVar9 - 1U) - 1 == uVar6) break;
        fVar16 = pfVar8[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar2 = 0;
  }
  lVar3 = (long)iVar2;
  if (iVar2 == iVar9 + -1) {
    fVar16 = *(float *)(*(long *)(param_3 + 0x1e8) + lVar3 * 4);
  }
  else {
    uVar6 = -(ulong)(iVar2 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar2 + 1U) << 2;
    fVar16 = *(float *)(*(long *)(param_3 + 0x1e8) + lVar3 * 4);
    dVar14 = (double)NEON_fminnm((double)((fVar17 - pfVar8[lVar3]) /
                                         (*(float *)((long)pfVar8 + uVar6) - pfVar8[lVar3])),
                                 0x3ff0000000000000);
    fVar17 = (float)dVar14;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fVar16 = fVar16 + (*(float *)(*(long *)(param_3 + 0x1e8) + uVar6) - fVar16) * fVar17;
  }
LAB_0028dd44:
  *(float *)(param_4 + 0x49) = fVar16;
  fVar16 = (float)FUN_0027ecf8(*(undefined4 *)param_2,*param_1,param_3 + 0x200,ppfVar7,
                               param_3 + 0x248);
  *(float *)(param_4 + 0x51) = fVar16;
  fVar17 = (float)FUN_0027ecf8(*(undefined4 *)(param_2 + 4),*param_1,param_3 + 0x218,ppfVar7,
                               param_3 + 0x230);
  *(ulong *)(param_4 + 0x19) =
       CONCAT44(fVar15 * (float)((ulong)*(undefined8 *)(this + 0xd578) >> 0x20),
                fVar10 * (float)*(undefined8 *)(this + 0xd578));
  *(float *)(param_4 + 0x21) = fVar11 * *(float *)(this + 0xd580);
  *(float *)(param_4 + 0x59) = fVar23 * *(float *)(this + 0xd58c);
  *(float *)(param_4 + 0x5d) = fVar12 * *(float *)(this + 0xd590);
  *(float *)(param_4 + 0x51) = fVar16 * *(float *)(this + 0xd588);
  *(float *)(param_4 + 0x4d) = fVar17 * *(float *)(this + 0xd584);
  lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  auVar19._0_8_ = (double)*(float *)(param_4 + 0xd);
  auVar19._8_8_ = 0;
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar3 + 1),0x1239,"GetAdaptiveSATuningData",
             "pHistAdaptive params: (bt_st/bt_en/mt_st/mt_en/dt_st/dt_en): %f / %f / %f / %f / %f / %f"
             ,(double)*(float *)(param_4 + 1),(double)*(float *)(param_4 + 5),
             (double)*(float *)(param_4 + 0x11),(double)*(float *)(param_4 + 0x15),
             (double)*(float *)(param_4 + 9),auVar19);
  lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  auVar20._0_8_ = (double)*(float *)(param_4 + 0x39);
  auVar20._8_8_ = 0;
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar3 + 1),0x1247,"GetAdaptiveSATuningData",
             "pHistAdaptive params: enable %d, low_st/low_en/high_st/high_en): %f / %f / %f / %f ,extra_high_st/extra_high_en/extra_high_ratio: %f / %f / %f ,extra_high_st/extra_high_en/extra_high_ratio: %f / %f / %f ,dt_nor_cap: %f ,dt_nor_cap: %f"
             ,(double)*(float *)(param_4 + 0x25),(double)*(float *)(param_4 + 0x29),
             (double)*(float *)(param_4 + 0x2d),(double)*(float *)(param_4 + 0x31),
             (double)*(float *)(param_4 + 0x35),auVar20,(double)*(float *)(param_4 + 0x3d),
             (double)*(float *)(param_4 + 0x41),(uint)(byte)*param_4,
             (double)*(float *)(param_4 + 0x45),(double)*(float *)(param_4 + 0x49),
             (double)*(float *)(param_4 + 0x4d),(double)*(float *)(param_4 + 0x51));
  return;
}


// ===== 0x18b68c MappingFlatSceneTuningParam @ 0028b68c

/* MI_AEC::Metering::MappingFlatSceneTuningParam(float const&, MI_AEC::MtrFlatSceneTuningData*) */

void __thiscall
MI_AEC::Metering::MappingFlatSceneTuningParam
          (Metering *this,float *param_1,MtrFlatSceneTuningData *param_2)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  undefined auVar9 [16];
  float fVar10;
  float fVar11;
  
  lVar1 = *(long *)(this + 0x488);
  pfVar2 = *(float **)(lVar1 + 0x3f68);
  uVar6 = *(long *)(lVar1 + 0x3f70) - (long)pfVar2;
  if (uVar6 == 0) {
    auVar9 = NEON_fmov(0xbf800000,4);
    *(long *)(param_2 + 9) = auVar9._8_8_;
    *(long *)(param_2 + 1) = auVar9._0_8_;
    *(long *)(param_2 + 0x19) = auVar9._8_8_;
    *(long *)(param_2 + 0x11) = auVar9._0_8_;
    goto LAB_0028bf1c;
  }
  lVar5 = ((long)uVar6 >> 2) + -1;
  fVar10 = *param_1;
  iVar3 = (int)(uVar6 >> 2);
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028b734:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028b73c;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028b734;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028b73c:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3f80) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3f80) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x3f80) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 1) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028b82c:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028b834;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028b82c;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028b834:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3f98) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3f98) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x3f98) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 5) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028b924:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028b92c;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028b924;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028b92c:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3fb0) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3fb0) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x3fb0) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 9) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028ba1c:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028ba24;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028ba1c;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028ba24:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3fc8) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3fc8) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x3fc8) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 0xd) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028bb14:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028bb1c;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028bb14;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028bb1c:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3fe0) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x3fe0) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x3fe0) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 0x11) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028bc0c:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028bc14;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028bc0c;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028bc14:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4040) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4040) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x4040) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 0x15) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028bd04:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028bd0c;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028bd04;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028bd0c:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4058) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4058) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x4058) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 0x19) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028bdfc:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028be04;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028bdfc;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028be04:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4070) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4070) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x4070) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 0x1d) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028bef4:
    iVar4 = (int)uVar6;
    if (iVar4 == -1) {
LAB_0028bf1c:
      *(undefined4 *)(param_2 + 0x21) = 0xbf800000;
      return;
    }
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028bef4;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
  }
  lVar5 = (long)iVar4;
  if (iVar4 == iVar3 + -1) {
    *(undefined4 *)(param_2 + 0x21) = *(undefined4 *)(*(long *)(lVar1 + 0x4088) + lVar5 * 4);
    return;
  }
  uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
  fVar11 = *(float *)(*(long *)(lVar1 + 0x4088) + lVar5 * 4);
  dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar5]) /
                                      (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar5])),
                              0x3ff0000000000000);
  fVar10 = (float)dVar8;
  if (0.0 <= fVar10) {
    fVar10 = 0.0;
  }
  *(float *)(param_2 + 0x21) =
       fVar11 + (*(float *)(*(long *)(lVar1 + 0x4088) + uVar6) - fVar11) * fVar10;
  return;
}


// ===== 0x18bf84 MappingMidToneTuningParam @ 0028bf84

/* MI_AEC::Metering::MappingMidToneTuningParam(float const&, MI_AEC::HistMidToneTuningData*) */

void __thiscall
MI_AEC::Metering::MappingMidToneTuningParam
          (Metering *this,float *param_1,HistMidToneTuningData *param_2)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  undefined auVar9 [16];
  float fVar10;
  float fVar11;
  
  lVar1 = *(long *)(this + 0x488);
  param_2[1] = *(HistMidToneTuningData *)(lVar1 + 0x40b9);
  param_2[2] = *(HistMidToneTuningData *)(lVar1 + 0x40ba);
  param_2[3] = *(HistMidToneTuningData *)(lVar1 + 0x40bb);
  pfVar2 = *(float **)(lVar1 + 0x40c0);
  uVar6 = *(long *)(lVar1 + 0x40c8) - (long)pfVar2;
  if (uVar6 == 0) {
    auVar9 = NEON_fmov(0xbf800000,4);
    *(long *)(param_2 + 0xc) = auVar9._8_8_;
    *(long *)(param_2 + 4) = auVar9._0_8_;
    *(undefined8 *)(param_2 + 0x14) = 0xbf800000bf800000;
    *(undefined4 *)(param_2 + 0x1c) = 0xbf800000;
    *(undefined4 *)(param_2 + 0x20) = 0xbf800000;
    return;
  }
  lVar5 = ((long)uVar6 >> 2) + -1;
  fVar10 = *param_1;
  iVar3 = (int)(uVar6 >> 2);
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028c05c:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028c070;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028c05c;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028c070:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x40d8) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x40d8) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x40d8) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 4) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028c150:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028c164;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028c150;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028c164:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x40f0) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x40f0) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x40f0) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 8) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028c244:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028c258;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028c244;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028c258:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4108) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4108) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x4108) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 0xc) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028c338:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028c34c;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028c338;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028c34c:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4120) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4120) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x4120) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 0x10) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028c42c:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028c440;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028c42c;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028c440:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4138) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4138) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x4138) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 0x14) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028c520:
    iVar4 = (int)uVar6;
    if (iVar4 != -1) goto LAB_0028c534;
    fVar11 = -1.0;
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028c520;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
LAB_0028c534:
    lVar7 = (long)iVar4;
    if (iVar4 == iVar3 + -1) {
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4150) + lVar7 * 4);
    }
    else {
      uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
      fVar11 = *(float *)(*(long *)(lVar1 + 0x4150) + lVar7 * 4);
      dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                          (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                  0x3ff0000000000000);
      fVar10 = (float)dVar8;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x4150) + uVar6) - fVar11) * fVar10;
    }
  }
  *(float *)(param_2 + 0x18) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028c614:
    iVar4 = (int)uVar6;
    if (iVar4 == -1) {
      fVar11 = -1.0;
      goto LAB_0028c698;
    }
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028c614;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
  }
  lVar7 = (long)iVar4;
  if (iVar4 == iVar3 + -1) {
    fVar11 = *(float *)(*(long *)(lVar1 + 0x4168) + lVar7 * 4);
  }
  else {
    uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
    fVar11 = *(float *)(*(long *)(lVar1 + 0x4168) + lVar7 * 4);
    dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar7]) /
                                        (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar7])),
                                0x3ff0000000000000);
    fVar10 = (float)dVar8;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar11 = fVar11 + (*(float *)(*(long *)(lVar1 + 0x4168) + uVar6) - fVar11) * fVar10;
  }
LAB_0028c698:
  *(float *)(param_2 + 0x1c) = fVar11;
  fVar10 = *param_1;
  if (pfVar2[lVar5] <= fVar10) {
    uVar6 = (ulong)(iVar3 - 1);
LAB_0028c708:
    iVar4 = (int)uVar6;
    if (iVar4 == -1) {
      *(undefined4 *)(param_2 + 0x20) = 0xbf800000;
      return;
    }
  }
  else {
    fVar11 = *pfVar2;
    if ((fVar11 < fVar10) && (0 < (int)(iVar3 - 1U))) {
      uVar6 = 0;
      while( true ) {
        if ((fVar11 <= fVar10) && (fVar10 < pfVar2[uVar6 + 1])) goto LAB_0028c708;
        if ((ulong)(iVar3 - 1U) - 1 == uVar6) break;
        fVar11 = pfVar2[uVar6 + 1];
        uVar6 = uVar6 + 1;
      }
    }
    iVar4 = 0;
  }
  lVar5 = (long)iVar4;
  if (iVar4 == iVar3 + -1) {
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(*(long *)(lVar1 + 0x4180) + lVar5 * 4);
    return;
  }
  uVar6 = -(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar4 + 1U) << 2;
  fVar11 = *(float *)(*(long *)(lVar1 + 0x4180) + lVar5 * 4);
  dVar8 = (double)NEON_fminnm((double)((fVar10 - pfVar2[lVar5]) /
                                      (*(float *)((long)pfVar2 + uVar6) - pfVar2[lVar5])),
                              0x3ff0000000000000);
  fVar10 = (float)dVar8;
  if (0.0 <= fVar10) {
    fVar10 = 0.0;
  }
  *(float *)(param_2 + 0x20) =
       fVar11 + (*(float *)(*(long *)(lVar1 + 0x4180) + uVar6) - fVar11) * fVar10;
  return;
}


// ===== 0x172dc4 CalculateHistDynamicRange @ 00272dc4

/* MI_AEC::Metering::CalculateHistDynamicRange(float const*, MI_AEC::ProcessedBHistStats<unsigned
   int, 3> const*, MI_AEC::WhiteBalanceInfo const&, MI_AEC::HistDynamicInfo*) */

undefined8 __thiscall
MI_AEC::Metering::CalculateHistDynamicRange
          (Metering *this,float *param_1,ProcessedBHistStats *param_2,WhiteBalanceInfo *param_3,
          HistDynamicInfo *param_4)

{
  MI_LOG *this_00;
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  float fVar7;
  float fVar8;
  
  uVar2 = CalculateSpecificToneAvg(this,param_2,param_3,0.0,0.2);
  *(undefined4 *)(param_4 + 0x18) = uVar2;
  uVar2 = CalculateSpecificToneAvg(this,param_2,param_3,0.2,0.4);
  *(undefined4 *)(param_4 + 0x1c) = uVar2;
  uVar2 = CalculateSpecificToneAvg(this,param_2,param_3,0.4,0.6);
  *(undefined4 *)(param_4 + 0x20) = uVar2;
  uVar2 = CalculateSpecificToneAvg(this,param_2,param_3,0.6,0.8);
  *(undefined4 *)(param_4 + 0x24) = uVar2;
  uVar2 = CalculateSpecificToneAvg(this,param_2,param_3,0.8,1.0);
  *(undefined4 *)(param_4 + 0x28) = uVar2;
  this_00 = (MI_LOG *)(this + 0x10);
  lVar1 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  auVar6._0_8_ = (double)*(float *)(param_4 + 0x18);
  auVar6._8_8_ = 0;
  MI_LOG::MI_LOG_HELPER
            (this_00,0,2,'V',(char *)(lVar1 + 1),0xd56,"CalculateHistDynamicRange",
             "RegionAvgLuma (0/1/2/3/4): %f %f %f %f %f",auVar6,(double)*(float *)(param_4 + 0x1c),
             (double)*(float *)(param_4 + 0x20),(double)*(float *)(param_4 + 0x24),
             (double)*(float *)(param_4 + 0x28));
  fVar3 = (float)CalculateSpecificToneAvg(this,param_2,param_3,0.2,0.8);
  fVar7 = *(float *)(param_4 + 0x18);
  *(float *)(param_4 + 0x2c) = fVar3;
  if ((((1e-06 <= ABS(fVar7)) && (1e-06 <= ABS(*(float *)(param_4 + 0x1c)))) &&
      (1e-06 <= ABS(*(float *)(param_4 + 0x20)))) &&
     (((1e-06 <= ABS(*(float *)(param_4 + 0x24)) && (1e-06 <= ABS(fVar3))) &&
      (fVar8 = *(float *)(param_4 + 0x28), 1e-06 <= ABS(fVar8))))) {
    *(float *)param_4 = fVar8 / fVar3;
    *(float *)(param_4 + 4) = fVar3 / fVar7;
    *(float *)(param_4 + 8) = fVar8 / fVar7;
    *(float *)(param_4 + 0xc) = fVar8 - fVar3;
    *(float *)(param_4 + 0x10) = fVar3 - fVar7;
    *(float *)(param_4 + 0x14) = fVar8 - fVar7;
    lVar1 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    auVar4._0_8_ = (double)*(float *)param_4;
    auVar4._8_8_ = 0;
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar1 + 1),0xd7f,"CalculateHistDynamicRange",
               "Dynamic_info: div(b2m/m2d/b2d): %f %f %f, sub(b2m/m2d/b2d): %f %f %f",auVar4,
               (double)*(float *)(param_4 + 4),(double)*(float *)(param_4 + 8),
               (double)*(float *)(param_4 + 0xc),(double)*(float *)(param_4 + 0x10),
               (double)*(float *)(param_4 + 0x14));
    return 1;
  }
  lVar1 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  auVar5._0_8_ = (double)*(float *)(param_4 + 0x18);
  auVar5._8_8_ = 0;
  MI_LOG::MI_LOG_HELPER
            (this_00,0,2,'V',(char *)(lVar1 + 1),0xd65,"CalculateHistDynamicRange",
             "RegionAvgLuma (0/1/2/3/4): %f %f %f %f %f is ZERO! hist metering failed!",auVar5,
             (double)*(float *)(param_4 + 0x1c),(double)*(float *)(param_4 + 0x20),
             (double)*(float *)(param_4 + 0x24),(double)*(float *)(param_4 + 0x28));
  auVar6 = NEON_fmov(0x3f800000,4);
  *(long *)(param_4 + 8) = auVar6._8_8_;
  *(long *)param_4 = auVar6._0_8_;
  *(undefined8 *)(param_4 + 0x10) = 0x3f8000003f800000;
  return 0;
}


// ===== 0x181b3c CalculateSpecificToneAvg @ 00281b3c

/* MI_AEC::Metering::CalculateSpecificToneAvg(MI_AEC::ProcessedBHistStats<unsigned int, 3> const&,
   MI_AEC::WhiteBalanceInfo const*, float, float) */

float __thiscall
MI_AEC::Metering::CalculateSpecificToneAvg
          (Metering *this,ProcessedBHistStats *param_1,WhiteBalanceInfo *param_2,float param_3,
          float param_4)

{
  StatsProcessor *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined local_5c [4];
  undefined8 local_58;
  
  local_58 = 0;
  local_5c = (undefined  [4])0x0;
  fVar4 = param_3;
  if (param_3 <= param_4) {
    fVar4 = param_4;
    param_4 = param_3;
  }
  this_00 = (StatsProcessor *)(this + 0x10);
  if (*(int *)param_1 == 1) {
    fVar4 = (float)StatsProcessor::CalculateHistAvgWithPctRangeV2
                             (this_00,param_1,param_2,false,param_4,fVar4,5);
    fVar4 = fVar4 / (float)(unkuint9)
                           ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2) >> 8);
  }
  else {
    bVar3 = *(char *)(*(long *)(this + 0x488) + 0x3379) != '\0';
    fVar5 = (float)StatsProcessor::CalculateHistAvgWithPctRangeV2
                             (this_00,param_1,param_2,bVar3,param_4,fVar4,0);
    fVar6 = (float)StatsProcessor::CalculateHistAvgWithPctRangeV2
                             (this_00,param_1,param_2,bVar3,param_4,fVar4,4);
    fVar4 = (float)StatsProcessor::CalculateHistAvgWithPctRangeV2
                             (this_00,param_1,param_2,bVar3,param_4,fVar4,3);
    fVar7 = (float)(unkuint9)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2) >> 8)
    ;
    local_58 = CONCAT44(fVar5 / fVar7,fVar6 / fVar7);
    puVar1 = &local_58;
    if (fVar6 / fVar7 <= fVar5 / fVar7) {
      puVar1 = (undefined8 *)((long)&local_58 + 4);
    }
    local_5c = (undefined  [4])(fVar4 / fVar7);
    puVar2 = (undefined8 *)local_5c;
    if (fVar4 / fVar7 <= *(float *)puVar1) {
      puVar2 = puVar1;
    }
    fVar4 = 255.0;
    if (*(float *)puVar2 <= 255.0) {
      fVar4 = *(float *)puVar2;
    }
  }
  return fVar4;
}


// ===== 0x1819e4 FindBtSt @ 002819e4

/* MI_AEC::Metering::FindBtSt(MI_AEC::ProcessedBHistStats<unsigned int, 3> const&,
   MI_AEC::HistCommonInfo const&, unsigned short, unsigned short, unsigned short, float) */

uint __thiscall
MI_AEC::Metering::FindBtSt
          (Metering *this,ProcessedBHistStats *param_1,HistCommonInfo *param_2,ushort param_3,
          ushort param_4,ushort param_5,float param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  float fVar4;
  
  fVar4 = (float)CalculateSpecificToneAvg
                           (this,param_1,(WhiteBalanceInfo *)param_2,
                            (float)(ulong)(uint)param_3 / 1000.0,(float)(param_3 + 1) / 1000.0);
  uVar1 = (uint)param_3;
  if (fVar4 <= param_6) {
    fVar4 = (float)CalculateSpecificToneAvg
                             (this,param_1,(WhiteBalanceInfo *)param_2,
                              (float)(ulong)(uint)param_4 / 1000.0,(float)(param_4 + 1) / 1000.0);
    uVar1 = (uint)param_4;
    if (param_6 <= fVar4) {
      uVar2 = (uint)param_5;
      if ((int)((uint)param_4 - (uint)param_3) <= (int)(uint)param_5) {
        uVar2 = 1;
      }
      uVar3 = 0;
      uVar1 = param_4 - uVar2;
      do {
        if ((uVar1 & 0xffff) < (uint)param_3) {
          return uVar1;
        }
        if ((uint)param_4 < (uVar1 & 0xffff)) {
          return uVar1;
        }
        fVar4 = (float)CalculateSpecificToneAvg
                                 (this,param_1,(WhiteBalanceInfo *)param_2,
                                  (float)(ulong)(uVar1 & 0xffff) / 1000.0,
                                  (float)((uVar1 & 0xffff) + uVar2) / 1000.0);
        if ((uVar2 == 1) && (fVar4 < param_6)) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
        if (fVar4 < param_6) {
          uVar2 = 1;
        }
        uVar1 = uVar1 - uVar2;
      } while (uVar3 < 0x14);
    }
  }
  return uVar1;
}


