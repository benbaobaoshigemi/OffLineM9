// ===== 0x18e194 StabilizeHistTargetWhenEVCompIsWorking @ 0028e194

/* MI_AEC::Metering::StabilizeHistTargetWhenEVCompIsWorking(float, float*) */

void __thiscall
MI_AEC::Metering::StabilizeHistTargetWhenEVCompIsWorking
          (Metering *this,float param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = param_2[1];
  fVar6 = param_2[2];
  fVar8 = *param_2;
  pfVar1 = (float *)(this + 0xcf98);
  if ((param_1 == 1.0) || (this[0xcfdc] != (Metering)0x0)) {
    fVar9 = *pfVar1;
    if (*pfVar1 <= 0.1) {
      fVar9 = 0.1;
    }
    *(float *)(this + 0xd01c) = fVar8 / fVar9;
    *(float *)(this + 0xd024) = param_2[2] / fVar9;
    *(float *)(this + 0xd020) = param_2[1] / fVar9;
  }
  else {
    fVar9 = *(float *)(this + 0xd01c);
    if (param_1 <= 1.0) {
      fVar3 = *(float *)(this + 0xd020);
      fVar5 = *(float *)(this + 0xd024);
    }
    else {
      fVar4 = (float)NEON_fminnm((param_1 + -1.0) / 3.0,0x3f800000);
      if (1.0 < fVar9) {
        fVar9 = fVar9 + fVar4 * (1.0 - fVar9);
      }
      fVar3 = *(float *)(this + 0xd020);
      if (1.0 < fVar3) {
        fVar3 = fVar3 + fVar4 * (1.0 - fVar3);
      }
      fVar5 = *(float *)(this + 0xd024);
      if (1.0 < fVar5) {
        fVar5 = fVar5 + fVar4 * (1.0 - fVar5);
      }
    }
    *param_2 = *pfVar1 * fVar9;
    param_2[2] = *pfVar1 * fVar5;
    param_2[1] = *pfVar1 * fVar3;
    lVar2 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar2 + 1),0x1426,
               "StabilizeHistTargetWhenEVCompIsWorking",
               "hist_target(adjust): %f, %f, %f, stable_hist_target_ratio ratio: %f, %f, %f, adjusted_ratio: %f, %f, %f, base target: %f"
               ,(double)*param_2,(double)param_2[2],(double)param_2[1],
               (double)*(float *)(this + 0xd01c),(double)*(float *)(this + 0xd024),
               (double)*(float *)(this + 0xd020),(double)fVar9,(double)fVar5,(double)fVar3,
               (double)*pfVar1);
  }
  fVar3 = 220.0 / param_1;
  fVar5 = 1.0 / param_1;
  fVar9 = fVar3;
  if ((220.0 < *param_2 * param_1) || (fVar9 = fVar5, *param_2 * param_1 < 1.0)) {
    *param_2 = fVar9;
  }
  fVar9 = fVar3;
  if ((220.0 < param_2[1] * param_1) || (fVar9 = fVar5, param_2[1] * param_1 < 1.0)) {
    param_2[1] = fVar9;
  }
  if ((220.0 < param_2[2] * param_1) || (fVar3 = fVar5, param_2[2] * param_1 < 1.0)) {
    param_2[2] = fVar3;
  }
  lVar2 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar2 + 1),0x1434,
             "StabilizeHistTargetWhenEVCompIsWorking",
             "hist_target(ori): %f, %f, %f, ev ratio: %f   hist_target(final): %f, %f, %f",
             (double)fVar8,(double)fVar7,(double)fVar6,(double)param_1,(double)*param_2,
             (double)param_2[2],(double)param_2[1]);
  return;
}


