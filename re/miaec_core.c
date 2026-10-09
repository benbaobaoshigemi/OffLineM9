// ===== 0x178874 CalculateHistTarget @ 00278874

/* MI_AEC::Metering::CalculateHistTarget(MI_AEC::MeteringInput const*, float, MI_AEC::HistCommonInfo
   const&, MI_AEC::ProcessedBHistStats<unsigned int, 3> const*,
   std::__1::array<MI_AEC::ProcessedBGStats, 256ul> const*,
   std::__1::vector<MI_AEC::ProcessedBGStats, std::__1::allocator<MI_AEC::ProcessedBGStats> >
   const*, MI_AEC::MatchExpIdxSet const&, MI_AEC::HistTargetResult*, MI_AEC::MiDebug_Mtr*) */

undefined8 __thiscall
MI_AEC::Metering::CalculateHistTarget
          (Metering *this,MeteringInput *param_1,float param_2,HistCommonInfo *param_3,
          ProcessedBHistStats *param_4,array *param_5,vector *param_6,MatchExpIdxSet *param_7,
          HistTargetResult *param_8,MiDebug_Mtr *param_9)

{
  HistFrameSAResult *pHVar1;
  HistFlatSceneSAResult *pHVar2;
  HistColorSceneSAResult *pHVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  ProcessedBHistStats *pPVar10;
  int iVar11;
  char cVar12;
  HistFrameSAResult *pHVar13;
  int iVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float local_64;
  
  local_64 = param_2;
  if ((*(float *)(this + 0xcf98) <= 0.0) || (*(float *)(this + 0xcf80) <= 0.0)) {
    *(undefined4 *)(param_8 + 0x14) = 0x42480000;
    *(undefined8 *)(param_8 + 0xc) = 0x4248000042480000;
    lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    fVar16 = *(float *)(this + 0xcf98);
    fVar17 = *(float *)(this + 0xcf80);
    pcVar15 = 
    "BaseTarget is %f! Final_luma is %f! Disable CalculateHistTarget, use standard avg luma target: %d"
    ;
    iVar9 = 2;
    iVar11 = 4;
    cVar12 = 'I';
    iVar14 = 0xb58;
    dVar18 = 50.0;
LAB_002789a4:
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),iVar9,iVar11,cVar12,(char *)(lVar7 + 1),iVar14,
               "CalculateHistTarget",pcVar15,(double)fVar16,(double)fVar17,dVar18);
    uVar8 = 0;
  }
  else {
    if (*(float *)(*(long *)(this + 0x488) + 0x3ad0) == 0.0) {
      *(float *)(param_8 + 0x10) = *(float *)(this + 0xcf98);
      *(undefined4 *)(param_8 + 0x14) = *(undefined4 *)(this + 0xcf98);
      *(undefined4 *)(param_8 + 0xc) = *(undefined4 *)(this + 0xcf98);
      lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)(this + 0x10),2,4,'I',(char *)(lVar7 + 1),0xb63,"CalculateHistTarget",
                 "HistTarget is not enable, use base target!");
    }
    else {
      bVar6 = *(byte *)(*(long *)(this + 0x488) + 0x3594);
      bVar5 = *(byte *)(*(long *)(this + 0x490) + 0x640);
      StyleAdjust::QueryHistScale
                (*(StyleAdjust **)(this + 0xd710),*(float *)(this + 0xcf88),
                 *(float *)(this + 0xd4f8),*(float *)(this + 0xd4f0),*(float *)(this + 0xd4f4),
                 (HistScaleResult *)(this + 0xd558));
      pPVar10 = param_4;
      if (this[0xd5f4] == (Metering)0x0) {
        fVar16 = *(float *)(param_7 + 0x14);
      }
      else if (((bVar5 | bVar6) == 0) || (param_1[0x1ec] != (MeteringInput)0x0)) {
        fVar16 = 1.0;
      }
      else {
        fVar16 = *(float *)(param_7 + 0x14);
        pPVar10 = *(ProcessedBHistStats **)(this + 0xd5b8);
      }
      CalculateShortLongSA
                (this,param_2,pPVar10,param_4,param_3,fVar16,(HistShortLongResult *)(this + 0xd20c),
                 param_9);
      pHVar1 = (HistFrameSAResult *)(this + 0xd1b0);
      pHVar13 = pHVar1;
      CalculateFrameSA(this,param_2,param_4,param_3,pHVar1);
      CalculateAdaptiveToneSA
                (this,param_2,param_4,param_3,pHVar13,(HistAdaptiveToneSAResult *)(this + 0xd234));
      pHVar2 = (HistFlatSceneSAResult *)(this + 0xd344);
      fVar16 = (float)CalculateFlatSceneSA(this,param_2,param_4,param_5,param_3,pHVar2,param_9);
      CalculateNightSceneSA
                (fVar16,(ProcessedBHistStats *)this,(HistCommonInfo *)param_4,
                 (HistNightSceneSAResult *)param_3);
      fVar16 = (float)CalculateSaturationPreventSA
                                (this,param_2,param_4,param_3,
                                 (HistSaturationPreventSAResult *)(this + 0xd28c));
      fVar16 = (float)CalculateSafeSaturationPreventSA
                                (fVar16,(ProcessedBHistStats *)this,(HistCommonInfo *)param_4,
                                 (HistSafeSaturationPreventSAResult *)param_3);
      CalculateDarkPreventSA
                (fVar16,(ProcessedBHistStats *)this,(HistCommonInfo *)param_4,
                 (HistDarkPreventSAResult *)param_3);
      pHVar3 = (HistColorSceneSAResult *)(this + 0xd364);
      CalculateColorSceneSA
                (this,param_2,*(float *)(param_7 + 0x10),(WhiteBalanceInfo *)param_3,param_6,pHVar3,
                 param_9);
      CalculateMidToneSA(this,param_2,param_4,param_3,(HistMidToneSAResult *)(this + 0xd2d4),param_9
                        );
      CalculateSemanticAssistSA
                (this,*(FaceStatus *)(this + 0xcf6c),(vector *)(this + 0xd598),param_9);
      FillAsdInput(this,&local_64,(float *)(this + 0xce1c),(float *)(this + 0xce20),pHVar2,
                   (HistDynamicInfo *)(this + 0xd4f0),pHVar3);
      AsdEnhance::AsdProcess
                (*(AsdEnhance **)(this + 0x498),(AsdInput *)(this + 0x4a0),
                 (AsdOutput *)(this + 0x514),param_9);
      CalculateIndoorAdjustSA
                (this,&local_64,param_4,param_3,(HistIndoorSAResult *)(this + 0xd520),param_9);
      CalculateWhiteBlackSA
                (this,param_1,(float *)param_4,*(float *)(param_7 + 0x10),
                 (WhiteBlackInput *)(param_1 + 0x170),(WhiteBlackOutput *)(this + 0x540),param_9);
      CalOverExpSceneCompensationSA(this,(HistOverExpCompensationSAResult *)(this + 0xd538),param_9)
      ;
      CalHardwareSensorAssistSA
                (this,*(float *)(param_1 + 0x1c0),
                 (HistHardwareSensorAssistSAResult *)(this + 0xd548),param_9);
      lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      fVar16 = (float)MI_LOG::MI_LOG_HELPER
                                ((MI_LOG *)(this + 0x10),2,4,'I',(char *)(lVar7 + 1),0xb8f,
                                 "CalculateHistTarget","Something went wrong when calculating SA!");
      CalculateSAAggregation
                (fVar16,(HistShortLongResult *)this,(HistFrameSAResult *)(this + 0xd20c),
                 (HistAdaptiveToneSAResult *)pHVar1,
                 (HistDarkPreventSAResult *)(HistAdaptiveToneSAResult *)(this + 0xd234),
                 (HistFlatSceneSAResult *)(this + 0xd2bc),(HistNightSceneSAResult *)pHVar2,
                 (HistSaturationPreventSAResult *)(this + 0xd324),
                 (HistSafeSaturationPreventSAResult *)
                 (HistSaturationPreventSAResult *)(this + 0xd28c),
                 (HistColorSceneSAResult *)(this + 0xd2a4),(HistMidToneSAResult *)pHVar3,
                 (HistOverExpCompensationSAResult *)(HistMidToneSAResult *)(this + 0xd2d4),
                 (vector *)(HistOverExpCompensationSAResult *)(this + 0xd538),
                 (AsdOutput *)(vector *)(this + 0xd598),
                 (HistIndoorSAResult *)(AsdOutput *)(this + 0x514),
                 (WhiteBlackOutput *)(HistIndoorSAResult *)(this + 0xd520),
                 (HistSAAggregation *)(WhiteBlackOutput *)(this + 0x540));
      fVar16 = *(float *)(this + 0xd46c);
      *(float *)(param_8 + 4) = fVar16;
      fVar17 = *(float *)(this + 0xd464);
      *(float *)(param_8 + 8) = fVar17;
      fVar4 = *(float *)(this + 0xd468);
      *(float *)param_8 = fVar4;
      *(float *)(param_8 + 0x10) = *(float *)(this + 0xcf80) * fVar16;
      *(float *)(param_8 + 0x14) = *(float *)(this + 0xcf80) * fVar17;
      *(float *)(param_8 + 0xc) = *(float *)(this + 0xcf80) * fVar4;
      ApplyHardwareAssist(this,*(float *)(param_1 + 0x1c0),param_7,param_8);
      uVar8 = NEON_rev64(*(undefined8 *)(this + 0xd4a4),4);
      *(undefined8 *)(param_8 + 0x18) = uVar8;
      FlatSceneChecker();
      if (((ABS(*(float *)(param_8 + 0x10)) < 1e-06) || (ABS(*(float *)(param_8 + 0x14)) < 1e-06))
         || (ABS(*(float *)(param_8 + 0xc)) < 1e-06)) {
        *(undefined4 *)(param_8 + 0x10) = *(undefined4 *)(this + 0xcf98);
        *(undefined4 *)(param_8 + 0x14) = *(undefined4 *)(this + 0xcf98);
        *(undefined4 *)(param_8 + 0xc) = *(undefined4 *)(this + 0xcf98);
        lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
        fVar16 = *(float *)(param_8 + 0xc);
        fVar17 = *(float *)(param_8 + 0x14);
        dVar18 = (double)*(float *)(param_8 + 0x10);
        pcVar15 = "ERROR!HistTarget short/safe/long: %f / %f / %f";
        iVar9 = 3;
        iVar11 = 5;
        cVar12 = 'W';
        iVar14 = 0xbbd;
        goto LAB_002789a4;
      }
      lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar7 + 1),0xbc5,"CalculateHistTarget",
                 "HistTarget short/safe/long: %f / %f / %f",(double)*(float *)(param_8 + 0xc),
                 (double)*(float *)(param_8 + 0x14),(double)*(float *)(param_8 + 0x10));
      if (*(char *)(*(long *)(this + 0x488) + 0x6b60) != '\0') {
        this[0xcfdc] = (Metering)0x0;
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


// ===== 0x188d94 CalculateSAAggregation @ 00288d94

/* MI_AEC::Metering::CalculateSAAggregation(float, MI_AEC::HistShortLongResult const&,
   MI_AEC::HistFrameSAResult const&, MI_AEC::HistAdaptiveToneSAResult const&,
   MI_AEC::HistDarkPreventSAResult const&, MI_AEC::HistFlatSceneSAResult const&,
   MI_AEC::HistNightSceneSAResult const&, MI_AEC::HistSaturationPreventSAResult const&,
   MI_AEC::HistSafeSaturationPreventSAResult const&, MI_AEC::HistColorSceneSAResult const&,
   MI_AEC::HistMidToneSAResult const&, MI_AEC::HistOverExpCompensationSAResult const&,
   std::__1::vector<MI_AEC::SemanticAssistSAResult,
   std::__1::allocator<MI_AEC::SemanticAssistSAResult> > const&, MI_AEC::AsdOutput const&,
   MI_AEC::HistIndoorSAResult const&, MI_AEC::WhiteBlackOutput const&, MI_AEC::HistSAAggregation*)
    */

undefined8
MI_AEC::Metering::CalculateSAAggregation
          (float param_1,HistShortLongResult *param_2,HistFrameSAResult *param_3,
          HistAdaptiveToneSAResult *param_4,HistDarkPreventSAResult *param_5,
          HistFlatSceneSAResult *param_6,HistNightSceneSAResult *param_7,
          HistSaturationPreventSAResult *param_8,HistSafeSaturationPreventSAResult *param_9,
          HistColorSceneSAResult *param_10,HistMidToneSAResult *param_11,
          HistOverExpCompensationSAResult *param_12,vector *param_13,AsdOutput *param_14,
          HistIndoorSAResult *param_15,WhiteBlackOutput *param_16,HistSAAggregation *param_17)

{
  MI_LOG *this;
  float *pfVar1;
  HistShortLongResult HVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined4 in_register_00005004;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float *in_stack_00000040;
  undefined8 in_stack_fffffffffffffde0;
  undefined4 uVar63;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float afStack_ac [3];
  
  uVar63 = (undefined4)((ulong)in_stack_fffffffffffffde0 >> 0x20);
  this = (MI_LOG *)(param_2 + 0x10);
  lVar3 = __strrchr_chk(CONCAT44(in_register_00005004,param_1),
                        "/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            (this,0,2,'V',(char *)(lVar3 + 1),0xddf,"CalculateSAAggregation",
             " ---------------------------- Aggregation result ---------------------------");
  fVar53 = *(float *)(param_8 + 0x14);
  fVar43 = *(float *)(param_5 + 0x28);
  fVar47 = *(float *)(param_5 + 0x2c);
  fVar25 = *(float *)(param_6 + 0xc);
  fVar62 = *(float *)(param_2 + 0x43d);
  fVar40 = *(float *)(param_2 + 0x441);
  HVar2 = param_2[0x44c];
  fVar41 = *(float *)(param_3 + 0x20);
  fVar60 = *(float *)(param_3 + 0x24);
  fVar27 = *(float *)(param_12 + 0x4c);
  fVar32 = *(float *)(param_12 + 0x38);
  fVar50 = *(float *)(param_7 + 0x1c);
  fVar57 = *(float *)(param_2 + 0xd208);
  fVar55 = 0.0;
  fVar59 = fVar55;
  if (fVar43 <= fVar53) {
    fVar59 = *(float *)(param_8 + 0x10);
  }
  fVar22 = fVar55;
  if (fVar43 <= fVar25) {
    fVar22 = *(float *)(param_6 + 0x14);
  }
  if (((1e-06 <= ABS(fVar53 + -1.0)) && (fVar55 = 0.0, 1e-06 <= ABS(fVar25 + -1.0))) &&
     (1e-06 <= ABS(fVar43 + -1.0))) {
    fVar55 = *(float *)(param_7 + 0x18);
  }
  fVar17 = fVar53 * fVar59;
  fVar12 = 1.0;
  fVar26 = fVar25 * fVar22;
  lVar3 = *(long *)param_14;
  fVar28 = fVar27 * fVar32;
  fVar44 = fVar43 * fVar47;
  fVar51 = fVar50 * fVar55;
  fVar33 = fVar44 + fVar28 + fVar26 + fVar57 + fVar17 + fVar51;
  fVar36 = fVar47 + fVar32 + fVar22 + fVar59 + 1.0 + fVar55;
  fVar45 = fVar41;
  fVar23 = fVar12;
  fVar19 = fVar12;
  fVar20 = fVar60;
  if (*(long *)(param_14 + 8) - lVar3 != 0) {
    fVar23 = 1.0;
    uVar9 = (*(long *)(param_14 + 8) - lVar3 >> 3) * -0x3333333333333333;
    uVar10 = 1;
    uVar11 = 0;
    fVar19 = fVar23;
    do {
      uVar4 = uVar10;
      fVar30 = *(float *)(lVar3 + uVar11 * 0x28 + 0xc);
      if ((1e-06 < fVar30) && (*(char *)(lVar3 + uVar11 * 0x28) != '\0')) {
        lVar7 = lVar3 + uVar11 * 0x28;
        fVar24 = *(float *)(lVar7 + 0x20);
        fVar29 = *(float *)(lVar7 + 0x24);
        if ((fVar30 < fVar41) && (fVar48 = *(float *)(lVar3 + uVar11 * 0x28 + 0x1c), 1e-06 < fVar48)
           ) {
          fVar45 = fVar45 + fVar30 * fVar48;
          fVar23 = fVar23 + fVar48;
        }
        fVar33 = fVar33 + fVar30 * fVar24;
        fVar20 = fVar20 + fVar30 * fVar29;
        fVar36 = fVar36 + fVar24;
        fVar19 = fVar19 + fVar29;
      }
      uVar10 = (ulong)((int)uVar4 + 1);
      uVar11 = uVar4;
    } while (uVar4 <= uVar9 && uVar9 - uVar4 != 0);
  }
  fVar54 = fVar33 / fVar36;
  local_b0 = fVar62 * fVar57;
  afStack_ac[0] = fVar54;
  fVar56 = fVar40 * fVar57;
  fVar29 = *(float *)(param_9 + 0x14);
  fVar58 = *(float *)(param_9 + 0xc);
  fVar48 = *(float *)(param_10 + 0xc);
  fVar52 = *(float *)(param_10 + 0x14);
  fVar45 = fVar45 / fVar23;
  fVar30 = fVar58 * (fVar29 + 1.0);
  fVar24 = ABS(*(float *)(param_2 + 0x447));
  fVar61 = fVar48 * fVar52;
  fVar23 = fVar30;
  if (fVar45 <= fVar30) {
    fVar23 = fVar45;
  }
  if ((1e-06 <= fVar24) && (fVar12 = 1.0, 1e-06 <= ABS(*(float *)(param_2 + 0xce3c)))) {
    dVar14 = (double)NEON_fminnm((double)((*(float *)(param_2 + 0xce40) /
                                           *(float *)(param_2 + 0xce3c) + -1.0) /
                                         (*(float *)(param_2 + 0x447) + 1.0 + -1.0)),
                                 0x3ff0000000000000);
    fVar12 = (float)dVar14;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar12 = fVar12 + 0.0;
  }
  fVar30 = fVar30 * *(float *)(param_2 + 0xd00c);
  if ((fVar56 < fVar61) && (fVar61 < local_b0)) {
    local_b0 = fVar61;
  }
  if (((fVar56 < fVar30) && (param_2[1099] != (HistShortLongResult)0x0)) && (fVar30 < local_b0)) {
    local_b0 = fVar30;
  }
  fVar20 = fVar20 / fVar19;
  if ((1e-06 <= fVar24) && (1e-06 <= ABS(fVar12))) {
    dVar14 = (double)NEON_fminnm((double)fVar12,0x3ff0000000000000);
    fVar12 = (float)dVar14;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    local_b0 = fVar54 + (local_b0 - fVar54) * fVar12;
  }
  fVar12 = local_b0;
  pfVar5 = &local_b0;
  if (fVar54 <= local_b0) {
    pfVar5 = afStack_ac;
  }
  dVar14 = (double)fVar20;
  fVar19 = fVar56;
  if (fVar56 <= *pfVar5) {
    fVar19 = *pfVar5;
  }
  fVar24 = fVar23;
  fVar34 = fVar20;
  fVar37 = fVar19;
  if ((*(char *)(*(long *)(param_2 + 0x488) + 0x53a8) != '\0') && (*param_13 != (vector)0x0)) {
    fVar37 = fVar19 * *(float *)(param_13 + 0xc);
    fVar24 = fVar23 * *(float *)(param_13 + 4);
    fVar34 = fVar20 * *(float *)(param_13 + 8);
    lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    dVar15 = (double)*(float *)(param_13 + 8);
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar3 + 1),0xe5e,"CalculateSAAggregation",
               "aggregation_capped_adjust_ratio %f %f %f aggregation_overexp_comp_long_adjust_ratio %f %f %f overexp_comp_adj_ratio %f %f %f "
               ,(double)fVar23,(double)fVar19,dVar14,(double)fVar24,(double)fVar37,(double)fVar34,
               (double)*(float *)(param_13 + 4),(double)*(float *)(param_13 + 0xc),dVar15);
    uVar63 = (undefined4)((ulong)dVar15 >> 0x20);
  }
  local_b4 = fVar37;
  fVar46 = fVar24;
  fVar49 = fVar34;
  if (*param_15 != (HistIndoorSAResult)0x0) {
    lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar3 + 1),0xe6c,"CalculateSAAggregation",
               "asd_output.enable_asdenhance:%d, asd_output.asd_adjust_ratio-mid_exp/short/long:%f,%f,%f"
               ,(double)*(float *)(param_15 + 0x24),(double)*(float *)(param_15 + 0x1c),
               (double)*(float *)(param_15 + 0x20),CONCAT44(uVar63,(uint)(byte)*param_15));
    local_b4 = fVar37 * *(float *)(param_15 + 0x24);
    fVar49 = fVar34 * *(float *)(param_15 + 0x20);
    fVar46 = fVar24 * *(float *)(param_15 + 0x1c);
  }
  lVar3 = *(long *)(param_2 + 0x488);
  if (*(char *)(lVar3 + 0x5370) == '\0') goto LAB_00289500;
  local_bc = fVar46;
  local_b8 = fVar46 * *(float *)(param_2 + 0xd00c);
  pfVar5 = *(float **)(lVar3 + 0x5378);
  uVar10 = *(long *)(lVar3 + 0x5380) - (long)pfVar5;
  fVar21 = -1.0;
  if (uVar10 != 0) {
    fVar18 = *(float *)(param_2 + 0xcf88);
    iVar6 = (int)(uVar10 >> 2);
    if (pfVar5[((long)uVar10 >> 2) + -1] <= fVar18) {
      uVar10 = (ulong)(iVar6 - 1);
LAB_0028942c:
      iVar8 = (int)uVar10;
      fVar21 = -1.0;
      if (iVar8 == -1) goto LAB_002894b0;
    }
    else {
      fVar21 = *pfVar5;
      if ((fVar21 < fVar18) && (0 < (int)(iVar6 - 1U))) {
        uVar10 = 0;
        while( true ) {
          if ((fVar21 <= fVar18) && (fVar18 < pfVar5[uVar10 + 1])) goto LAB_0028942c;
          if ((ulong)(iVar6 - 1U) - 1 == uVar10) break;
          fVar21 = pfVar5[uVar10 + 1];
          uVar10 = uVar10 + 1;
        }
      }
      iVar8 = 0;
    }
    lVar7 = (long)iVar8;
    if (iVar8 == iVar6 + -1) {
      fVar21 = *(float *)(*(long *)(lVar3 + 0x5390) + lVar7 * 4);
    }
    else {
      uVar10 = -(ulong)(iVar8 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar8 + 1U) << 2;
      fVar31 = *(float *)(*(long *)(lVar3 + 0x5390) + lVar7 * 4);
      dVar15 = (double)NEON_fminnm((double)((fVar18 - pfVar5[lVar7]) /
                                           (*(float *)((long)pfVar5 + uVar10) - pfVar5[lVar7])),
                                   0x3ff0000000000000);
      fVar21 = (float)dVar15;
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar21 = fVar31 + (*(float *)(*(long *)(lVar3 + 0x5390) + uVar10) - fVar31) * fVar21;
    }
  }
LAB_002894b0:
  local_c0 = local_b4 / fVar21;
  pfVar5 = &local_c0;
  if (local_b4 / fVar21 <= fVar46 * *(float *)(param_2 + 0xd00c)) {
    pfVar5 = &local_b8;
  }
  local_b8 = *pfVar5;
  pfVar1 = &local_b8;
  if (local_b4 <= *pfVar5) {
    pfVar1 = &local_b4;
  }
  local_b4 = *pfVar1;
  pfVar5 = &local_bc;
  if (fVar46 <= *pfVar1) {
    pfVar5 = &local_b4;
  }
  local_b4 = *pfVar5;
LAB_00289500:
  fVar21 = local_b4;
  fVar38 = *(float *)param_17;
  fVar31 = 1.0;
  fVar18 = fVar38;
  if ((1.0 <= fVar38) && (fVar18 = *(float *)param_16, *(float *)param_16 <= fVar38)) {
    fVar18 = fVar38;
  }
  fVar42 = fVar18 * local_b4;
  fVar39 = fVar49 * fVar18;
  lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  dVar15 = (double)fVar21;
  MI_LOG::MI_LOG_HELPER
            (this,0,2,'V',(char *)(lVar3 + 1),0xe8f,"CalculateSAAggregation",
             "WhiteBlack/IndoorSA %f %f change safeTargetAdjustRatio form %f to %f",
             (double)*(float *)param_17,(double)*(float *)param_16,dVar15,(double)fVar42);
  fVar35 = *(float *)(param_11 + 4);
  fVar38 = fVar46;
  if ((((fVar35 < 1.0) && (0.0 < fVar35)) && (param_15[0x28] == (HistIndoorSAResult)0x0)) &&
     (fVar42 = fVar42 * fVar35, fVar31 = fVar35, param_11[1] != (HistMidToneSAResult)0x0)) {
    fVar39 = fVar39 * fVar35;
    fVar38 = fVar46 * fVar35;
  }
  lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            (this,0,2,'V',(char *)(lVar3 + 1),0xea7,"CalculateSAAggregation",
             "aggregation_color_safe_adjust_ratio %f %f %f ");
  fVar35 = fVar42;
  fVar13 = fVar39;
  fVar16 = fVar38;
  if ((HVar2 == (HistShortLongResult)0x0) &&
     ((*(int *)(param_2 + 0xd098) == 4 || (*(int *)(param_2 + 0xd098) == 2)))) {
    fVar35 = fVar37;
    fVar13 = fVar34;
    fVar16 = fVar24;
  }
  HVar2 = param_2[0x163];
  lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  if (HVar2 == (HistShortLongResult)0x0) {
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar3 + 1),0xec6,"CalculateSAAggregation",
               "(ratio,weight):ns:%f,%f, dp:%f,%f, mid:%f,%f, fs:%f, %f, ada:%f,%f, color:%f, asd_mid:%f"
               ,(double)fVar53,(double)fVar59,(double)fVar25,(double)fVar22,(double)fVar27,
               (double)fVar32,(double)fVar50,(double)fVar55,(double)fVar43,(double)fVar47,
               (double)*(float *)(param_11 + 4),(double)*(float *)(param_15 + 0x24));
    lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar3 + 1),0xecc,"CalculateSAAggregation",
               "weighted_adjust_ratio:ns:%.3f, dp:%.3f, mid:%.3f, fs:%.3f, ada:%.3f, safe_weighted_adjust_ratio_sum:%.3f ,safe_weight_sum:%.3f"
               ,(double)fVar17,(double)fVar26,(double)fVar28,(double)fVar51,(double)fVar44,
               (double)fVar33,(double)fVar36);
    lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar3 + 1),0xed0,"CalculateSAAggregation",
               "adjust_ratio,weight:(safe_saturation): %.3f, %.3f sp: %.3f, %.3f, safe_adjust_ratio_min/max:%.3f, %.3f, safe_adjust_ratio_high_cap:%.3f, safe_saturation_mid_adjust_ratio_max:%.3f"
               ,(double)fVar48,(double)fVar52,(double)fVar58,(double)fVar29,(double)fVar56,
               (double)fVar12,(double)fVar30,(double)fVar61);
    lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar3 + 1),0xed9,"CalculateSAAggregation",
               "(short/safe/long)aggregation_adjust_ratio:%.3f, %.3f, %.3f,agg_blend:%.3f, %.3f, %.3f,agg_capped:%.3f, %.3f, %.3f,agg_overexp:%.3f, %.3f, %.3f,agg_asd:%.3f, %.3f, %.3f,agg_color:%.3f, %.3f, %.3f,agg_final:%.3f, %.3f, %.3f"
               ,(double)fVar41,(double)fVar57,(double)fVar60,(double)fVar45,(double)fVar54,dVar14,
               (double)fVar23,(double)fVar19,dVar14,(double)fVar24,(double)fVar37,(double)fVar34,
               (double)fVar46,dVar15,(double)fVar49,(double)fVar38,(double)fVar42,(double)fVar39,
               (double)fVar16,(double)fVar35,(double)fVar13);
    *in_stack_00000040 = fVar12;
    in_stack_00000040[1] = fVar56;
    in_stack_00000040[2] = fVar58;
    in_stack_00000040[3] = fVar29;
    in_stack_00000040[0x31] = fVar52;
    in_stack_00000040[0x32] = fVar48;
    in_stack_00000040[4] = fVar53;
    in_stack_00000040[5] = fVar59;
    in_stack_00000040[6] = fVar25;
    in_stack_00000040[7] = fVar22;
    in_stack_00000040[8] = fVar27;
    in_stack_00000040[9] = fVar32;
    in_stack_00000040[10] = fVar43;
    in_stack_00000040[0xb] = fVar47;
    in_stack_00000040[0xc] = fVar50;
    in_stack_00000040[0xd] = fVar55;
    in_stack_00000040[0xe] = *(float *)(param_11 + 4);
    in_stack_00000040[0xf] = *(float *)(param_15 + 0x1c);
    in_stack_00000040[0x11] = *(float *)(param_15 + 0x24);
    fVar55 = *(float *)(param_15 + 0x20);
    *(undefined8 *)(in_stack_00000040 + 0x12) = 0;
    in_stack_00000040[0x1d] = 0.0;
    in_stack_00000040[0x10] = fVar55;
    in_stack_00000040[0x2b] = fVar21;
    in_stack_00000040[0x14] = fVar17;
    in_stack_00000040[0x15] = fVar26;
    in_stack_00000040[0x16] = fVar28;
    in_stack_00000040[0x17] = fVar44;
    in_stack_00000040[0x18] = fVar51;
    in_stack_00000040[0x19] = fVar33;
    in_stack_00000040[0x22] = fVar41;
    in_stack_00000040[0x23] = fVar57;
    in_stack_00000040[0x1a] = fVar36;
    in_stack_00000040[0x1b] = fVar62;
    in_stack_00000040[0x1c] = fVar40;
    in_stack_00000040[0x1e] = fVar30;
    in_stack_00000040[0x1f] = fVar45;
    in_stack_00000040[0x20] = fVar54;
    in_stack_00000040[0x21] = fVar20;
    in_stack_00000040[0x24] = fVar60;
    in_stack_00000040[0x25] = fVar35;
    in_stack_00000040[0x26] = fVar16;
    in_stack_00000040[0x27] = fVar13;
    in_stack_00000040[0x28] = fVar42;
    in_stack_00000040[0x29] = fVar38;
    in_stack_00000040[0x2a] = fVar39;
    in_stack_00000040[0x2c] = fVar46;
    in_stack_00000040[0x2d] = fVar49;
    in_stack_00000040[0x2e] = fVar19;
    in_stack_00000040[0x35] = fVar31;
    in_stack_00000040[0x36] = fVar18;
    in_stack_00000040[0x2f] = fVar23;
    in_stack_00000040[0x30] = fVar20;
  }
  else {
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar3 + 1),0xeb2,"CalculateSAAggregation",
               " ------------------------ super moon -----------------------");
    fVar55 = *(float *)(param_2 + 0x188);
    fVar35 = fVar35 + fVar55 * (*(float *)(param_10 + 0xc) - fVar35);
    lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this,0,2,'V',(char *)(lVar3 + 1),0xeb6,"CalculateSAAggregation",
               "sp_adjust_ratio:%f, supermoon_adj_weight:%f, aggregation_final_safe_adjust_ratio:%f, m_supermoon_bright_ratio:%f, m_lux_idx:%f, supermoon_adj_weight:%f"
               ,(double)*(float *)(param_10 + 0xc),(double)fVar55,(double)fVar35,
               (double)*(float *)(param_2 + 0xd120),(double)*(float *)(param_2 + 0xcf88),
               (double)fVar55);
    in_stack_00000040[0x33] = fVar55;
    in_stack_00000040[0x25] = fVar35;
    in_stack_00000040[0x26] = fVar16;
    in_stack_00000040[0x27] = fVar13;
    in_stack_00000040[0x34] = *(float *)(param_10 + 0xc);
  }
  return 1;
}


// ===== 0x178410 CalculateBaseTarget @ 00278410

/* MI_AEC::Metering::CalculateBaseTarget(float const&, float const&, float const&) */

undefined  [16] __thiscall
MI_AEC::Metering::CalculateBaseTarget(Metering *this,float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  double dVar9;
  undefined auVar10 [16];
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  lVar7 = *(long *)(this + 0x488);
  uVar8 = FUN_0027ecf8(*param_2,*param_1,lVar7 + 0x36b8,lVar7 + 0x36a0,lVar7 + 0x36d0);
  *(undefined4 *)(this + 0x45) = uVar8;
  pfVar1 = *(float **)(lVar7 + 0x36a0);
  uVar5 = *(long *)(lVar7 + 0x36a8) - (long)pfVar1;
  if (uVar5 == 0) {
    *(undefined4 *)(this + 0x49) = 0xbf800000;
    fVar11 = -1.0;
    goto LAB_0027867c;
  }
  lVar4 = ((long)uVar5 >> 2) + -1;
  fVar11 = *param_1;
  iVar2 = (int)(uVar5 >> 2);
  if (pfVar1[lVar4] <= fVar11) {
    uVar5 = (ulong)(iVar2 - 1);
LAB_00278504:
    iVar3 = (int)uVar5;
    if (iVar3 != -1) goto LAB_00278518;
    fVar12 = -1.0;
  }
  else {
    fVar12 = *pfVar1;
    if ((fVar12 < fVar11) && (0 < (int)(iVar2 - 1U))) {
      uVar5 = 0;
      while( true ) {
        if ((fVar12 <= fVar11) && (fVar11 < pfVar1[uVar5 + 1])) goto LAB_00278504;
        if ((ulong)(iVar2 - 1U) - 1 == uVar5) break;
        fVar12 = pfVar1[uVar5 + 1];
        uVar5 = uVar5 + 1;
      }
    }
    iVar3 = 0;
LAB_00278518:
    lVar6 = (long)iVar3;
    if (iVar3 == iVar2 + -1) {
      fVar12 = *(float *)(*(long *)(lVar7 + 0x36e8) + lVar6 * 4);
    }
    else {
      uVar5 = -(ulong)(iVar3 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar3 + 1U) << 2;
      fVar12 = *(float *)(*(long *)(lVar7 + 0x36e8) + lVar6 * 4);
      dVar9 = (double)NEON_fminnm((double)((fVar11 - pfVar1[lVar6]) /
                                          (*(float *)((long)pfVar1 + uVar5) - pfVar1[lVar6])),
                                  0x3ff0000000000000);
      fVar11 = (float)dVar9;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar12 = fVar12 + (*(float *)(*(long *)(lVar7 + 0x36e8) + uVar5) - fVar12) * fVar11;
    }
  }
  *(float *)(this + 0x49) = fVar12;
  fVar12 = *param_1;
  if (pfVar1[lVar4] <= fVar12) {
    uVar5 = (ulong)(iVar2 - 1);
LAB_002785f8:
    iVar3 = (int)uVar5;
    if (iVar3 == -1) {
      fVar11 = -1.0;
      goto LAB_0027867c;
    }
  }
  else {
    fVar11 = *pfVar1;
    if ((fVar11 < fVar12) && (0 < (int)(iVar2 - 1U))) {
      uVar5 = 0;
      while( true ) {
        if ((fVar11 <= fVar12) && (fVar12 < pfVar1[uVar5 + 1])) goto LAB_002785f8;
        if ((ulong)(iVar2 - 1U) - 1 == uVar5) break;
        fVar11 = pfVar1[uVar5 + 1];
        uVar5 = uVar5 + 1;
      }
    }
    iVar3 = 0;
  }
  lVar4 = (long)iVar3;
  if (iVar3 == iVar2 + -1) {
    fVar11 = *(float *)(*(long *)(lVar7 + 0x3700) + lVar4 * 4);
  }
  else {
    uVar5 = -(ulong)(iVar3 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar3 + 1U) << 2;
    fVar11 = *(float *)(*(long *)(lVar7 + 0x3700) + lVar4 * 4);
    dVar9 = (double)NEON_fminnm((double)((fVar12 - pfVar1[lVar4]) /
                                        (*(float *)((long)pfVar1 + uVar5) - pfVar1[lVar4])),
                                0x3ff0000000000000);
    fVar12 = (float)dVar9;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar11 = fVar11 + (*(float *)(*(long *)(lVar7 + 0x3700) + uVar5) - fVar11) * fVar12;
  }
LAB_0027867c:
  *(float *)(this + 0x4d) = fVar11;
  uVar8 = FUN_0027ecf8(*param_3,*param_1,lVar7 + 0x3718,lVar7 + 0x36a0,lVar7 + 0x3730);
  *(undefined4 *)(this + 0x51) = uVar8;
  fVar11 = (float)StyleAdjust::QueryBaseTargetScale(*param_2,*param_1);
  *(float *)(this + 0x55) = fVar11;
  fVar11 = fVar11 * *(float *)(this + 0x45) * *(float *)(this + 0x51);
  auVar10._4_4_ = 0;
  auVar10._0_4_ = fVar11;
  uVar13 = 0;
  lVar7 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar7 + 1),0x99d,"CalculateBaseTarget",
             "lux_idx:%f, dr_b2d:%f, zoom_ratio:%f, zoom_adjust_ratio:%f, tuning_base_target:%f, base_target:%f, style_scale:%f"
             ,(double)*param_1,(double)*param_2,(double)*param_3,(double)*(float *)(this + 0x51),
             (double)*(float *)(this + 0x45),(double)fVar11,(double)*(float *)(this + 0x55));
  auVar10._8_8_ = uVar13;
  return auVar10;
}


// ===== 0x17af1c IntegrateTargetResult @ 0027af1c

/* MI_AEC::Metering::IntegrateTargetResult(float const*, float*) */

void __thiscall
MI_AEC::Metering::IntegrateTargetResult(Metering *this,float *param_1,float *param_2)

{
  int iVar1;
  Metering MVar2;
  long lVar3;
  float fVar4;
  
  iVar1 = *(int *)(this + 0xd098);
  if (iVar1 - 3U < 2) {
    *param_2 = *(float *)(this + 0xcfa8);
    param_2[2] = *(float *)(this + 0xcfb0);
    fVar4 = *(float *)(this + 0xcfac);
  }
  else if (iVar1 == 1) {
    *param_2 = *(float *)(this + 0xd17c);
    param_2[2] = *(float *)(this + 0xd184);
    fVar4 = *(float *)(this + 0xd180);
  }
  else {
    if (iVar1 != 2) {
      param_2[2] = 50.0;
      *(undefined8 *)param_2 = 0x4248000042480000;
      lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)(this + 0x10),4,6,'E',(char *)(lVar3 + 1),0x1949,"IntegrateTargetResult",
                 "Unknown roi type, use standard avg luma as final target!");
      MVar2 = this[0xd0c8];
      goto joined_r0x0027afb8;
    }
    *param_2 = *(float *)(this + 0xcf9c);
    param_2[2] = *(float *)(this + 0xcfa4);
    fVar4 = *(float *)(this + 0xcfa0);
  }
  param_2[1] = fVar4;
  MVar2 = this[0xd0c8];
joined_r0x0027afb8:
  if (MVar2 != (Metering)0x0) {
    *param_2 = *param_2 + (*(float *)(this + 0xcfb4) - *param_2) * *(float *)(this + 0xd0cc);
    param_2[2] = param_2[2] + (*(float *)(this + 0xcfbc) - param_2[2]) * *(float *)(this + 0xd0cc);
    param_2[1] = param_2[1] + (*(float *)(this + 0xcfb8) - param_2[1]) * *(float *)(this + 0xd0cc);
  }
  lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar3 + 1),0x1957,"IntegrateTargetResult",
             "roi type: %d, integrate_target(S/M/L): %f %f %f",(double)*param_2,(double)param_2[2],
             (double)param_2[1],*(undefined4 *)(this + 0xd098));
  return;
}


// ===== 0x17b490 CalculateDRCgain @ 0027b490

/* MI_AEC::Metering::CalculateDRCgain(float const*, float, float*, bool, MI_AEC::MiDebug_Mtr*) */

void __thiscall
MI_AEC::Metering::CalculateDRCgain
          (Metering *this,float *param_1,float param_2,float *param_3,bool param_4,
          MiDebug_Mtr *param_5)

{
  uint uVar1;
  MI_LOG *this_00;
  char cVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float local_7c;
  float local_78;
  float local_74;
  
  lVar3 = *(long *)(this + 0x488);
  cVar2 = *(char *)(lVar3 + 0x2ae8);
  local_74 = param_3[2] / *param_3;
  fVar13 = 1.0;
  if (*(char *)(lVar3 + 0x2e28) != '\0') {
    pfVar5 = *(float **)(lVar3 + 0x2e30);
    fVar12 = *(float *)(this + 0xcf88);
    uVar9 = *(long *)(lVar3 + 0x2e38) - (long)pfVar5;
    lVar8 = (long)uVar9 >> 2;
    iVar6 = (int)(uVar9 >> 2);
    fVar13 = -1.0;
    if (uVar9 != 0) {
      if (pfVar5[lVar8 + -1] <= fVar12) {
        uVar10 = (ulong)(iVar6 - 1);
LAB_0027b59c:
        iVar7 = (int)uVar10;
        fVar13 = -1.0;
        if (iVar7 == -1) goto LAB_0027b614;
      }
      else {
        fVar13 = *pfVar5;
        if ((fVar13 < fVar12) && (0 < (int)(iVar6 - 1U))) {
          uVar10 = 0;
          while( true ) {
            if ((fVar13 <= fVar12) && (fVar12 < pfVar5[uVar10 + 1])) goto LAB_0027b59c;
            if ((ulong)(iVar6 - 1U) - 1 == uVar10) break;
            fVar13 = pfVar5[uVar10 + 1];
            uVar10 = uVar10 + 1;
          }
        }
        iVar7 = 0;
      }
      lVar11 = (long)iVar7;
      if (iVar7 == iVar6 + -1) {
        fVar13 = *(float *)(*(long *)(lVar3 + 0x2e48) + lVar11 * 4);
      }
      else {
        uVar10 = -(ulong)(iVar7 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar7 + 1U) << 2;
        fVar15 = *(float *)(*(long *)(lVar3 + 0x2e48) + lVar11 * 4);
        dVar14 = (double)NEON_fminnm((double)((fVar12 - pfVar5[lVar11]) /
                                             (*(float *)((long)pfVar5 + uVar10) - pfVar5[lVar11])),
                                     0x3ff0000000000000);
        fVar13 = (float)dVar14;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar13 = fVar15 + (*(float *)(*(long *)(lVar3 + 0x2e48) + uVar10) - fVar15) * fVar13;
      }
    }
LAB_0027b614:
    switch(*(undefined4 *)(this + 0xd4ec)) {
    case 0:
      break;
    case 1:
      fVar13 = -1.0;
      if (uVar9 != 0) {
        if (pfVar5[lVar8 + -1] <= fVar12) {
          uVar9 = (ulong)(iVar6 - 1);
LAB_0027b894:
          iVar7 = (int)uVar9;
          if (iVar7 == -1) break;
        }
        else {
          fVar15 = *pfVar5;
          if ((fVar15 < fVar12) && (0 < (int)(iVar6 - 1U))) {
            uVar9 = 0;
            while( true ) {
              if ((fVar15 <= fVar12) && (fVar12 < pfVar5[uVar9 + 1])) goto LAB_0027b894;
              if ((ulong)(iVar6 - 1U) - 1 == uVar9) break;
              fVar15 = pfVar5[uVar9 + 1];
              uVar9 = uVar9 + 1;
            }
          }
          iVar7 = 0;
        }
        lVar8 = (long)iVar7;
        if (iVar7 == iVar6 + -1) {
          fVar13 = *(float *)(*(long *)(lVar3 + 0x2e60) + lVar8 * 4);
        }
        else {
          lVar3 = *(long *)(lVar3 + 0x2e60);
LAB_0027b97c:
          uVar1 = (int)lVar8 + 1;
          uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
          fVar15 = *(float *)(lVar3 + lVar8 * 4);
          dVar14 = (double)NEON_fminnm((double)((fVar12 - pfVar5[lVar8]) /
                                               (*(float *)((long)pfVar5 + uVar9) - pfVar5[lVar8])),
                                       0x3ff0000000000000);
          fVar13 = (float)dVar14;
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          fVar13 = fVar15 + (*(float *)(lVar3 + uVar9) - fVar15) * fVar13;
        }
      }
      break;
    case 2:
      fVar13 = -1.0;
      if (uVar9 != 0) {
        if (pfVar5[lVar8 + -1] <= fVar12) {
          uVar9 = (ulong)(iVar6 - 1);
LAB_0027b8e4:
          iVar7 = (int)uVar9;
          if (iVar7 == -1) break;
        }
        else {
          fVar15 = *pfVar5;
          if ((fVar15 < fVar12) && (0 < (int)(iVar6 - 1U))) {
            uVar9 = 0;
            while( true ) {
              if ((fVar15 <= fVar12) && (fVar12 < pfVar5[uVar9 + 1])) goto LAB_0027b8e4;
              if ((ulong)(iVar6 - 1U) - 1 == uVar9) break;
              fVar15 = pfVar5[uVar9 + 1];
              uVar9 = uVar9 + 1;
            }
          }
          iVar7 = 0;
        }
        lVar8 = (long)iVar7;
        if (iVar7 != iVar6 + -1) {
          lVar3 = *(long *)(lVar3 + 0x2e78);
          goto LAB_0027b97c;
        }
        fVar13 = *(float *)(*(long *)(lVar3 + 0x2e78) + lVar8 * 4);
      }
      break;
    case 3:
      fVar13 = -1.0;
      if (uVar9 != 0) {
        if (pfVar5[lVar8 + -1] <= fVar12) {
          uVar9 = (ulong)(iVar6 - 1);
LAB_0027b90c:
          iVar7 = (int)uVar9;
          if (iVar7 == -1) break;
        }
        else {
          fVar15 = *pfVar5;
          if ((fVar15 < fVar12) && (0 < (int)(iVar6 - 1U))) {
            uVar9 = 0;
            while( true ) {
              if ((fVar15 <= fVar12) && (fVar12 < pfVar5[uVar9 + 1])) goto LAB_0027b90c;
              if ((ulong)(iVar6 - 1U) - 1 == uVar9) break;
              fVar15 = pfVar5[uVar9 + 1];
              uVar9 = uVar9 + 1;
            }
          }
          iVar7 = 0;
        }
        lVar8 = (long)iVar7;
        if (iVar7 != iVar6 + -1) {
          lVar3 = *(long *)(lVar3 + 0x2e90);
          goto LAB_0027b97c;
        }
        fVar13 = *(float *)(*(long *)(lVar3 + 0x2e90) + lVar8 * 4);
      }
      break;
    case 4:
      fVar13 = -1.0;
      if (uVar9 != 0) {
        if (pfVar5[lVar8 + -1] <= fVar12) {
          uVar9 = (ulong)(iVar6 - 1);
LAB_0027b934:
          iVar7 = (int)uVar9;
          if (iVar7 == -1) break;
        }
        else {
          fVar15 = *pfVar5;
          if ((fVar15 < fVar12) && (0 < (int)(iVar6 - 1U))) {
            uVar9 = 0;
            while( true ) {
              if ((fVar15 <= fVar12) && (fVar12 < pfVar5[uVar9 + 1])) goto LAB_0027b934;
              if ((ulong)(iVar6 - 1U) - 1 == uVar9) break;
              fVar15 = pfVar5[uVar9 + 1];
              uVar9 = uVar9 + 1;
            }
          }
          iVar7 = 0;
        }
        lVar8 = (long)iVar7;
        if (iVar7 != iVar6 + -1) {
          lVar3 = *(long *)(lVar3 + 0x2ea8);
          goto LAB_0027b97c;
        }
        fVar13 = *(float *)(*(long *)(lVar3 + 0x2ea8) + lVar8 * 4);
      }
      break;
    default:
      fVar13 = -1.0;
      if (uVar9 != 0) {
        if (pfVar5[lVar8 + -1] <= fVar12) {
          uVar9 = (ulong)(iVar6 - 1);
LAB_0027b8bc:
          iVar7 = (int)uVar9;
          fVar13 = -1.0;
          if (iVar7 == -1) break;
        }
        else {
          fVar13 = *pfVar5;
          if ((fVar13 < fVar12) && (0 < (int)(iVar6 - 1U))) {
            uVar9 = 0;
            while( true ) {
              if ((fVar13 <= fVar12) && (fVar12 < pfVar5[uVar9 + 1])) goto LAB_0027b8bc;
              if ((ulong)(iVar6 - 1U) - 1 == uVar9) break;
              fVar13 = pfVar5[uVar9 + 1];
              uVar9 = uVar9 + 1;
            }
          }
          iVar7 = 0;
        }
        lVar8 = (long)iVar7;
        if (iVar7 != iVar6 + -1) {
          lVar3 = *(long *)(lVar3 + 0x2e48);
          goto LAB_0027b97c;
        }
        fVar13 = *(float *)(*(long *)(lVar3 + 0x2e48) + lVar8 * 4);
      }
    }
    lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar3 + 1),0x1c43,"CalculateDRCgain",
               "min_mid_tone_gain:%f",(double)fVar13);
  }
  if ((*(float *)(this + 0xcfe4) < 1.0) || (ABS(*(float *)(this + 0xcfe4)) == INFINITY)) {
    *(undefined4 *)(this + 0xcfe4) = 0x3f800000;
  }
  StateAwareDiscreteDRC(this,&local_74);
  fVar12 = -1.0;
  if (local_74 <= fVar13) {
    local_74 = fVar13;
  }
  *(float *)(this + 0xcfe0) = local_74;
  pfVar5 = (float *)(this + 0xd00c);
  if (local_74 <= *(float *)(this + 0xd00c)) {
    pfVar5 = (float *)(this + 0xcfe0);
  }
  local_74 = *pfVar5;
  pfVar4 = &local_74;
  if (*(float *)(this + 0xd008) <= *pfVar5) {
    pfVar4 = (float *)(this + 0xd008);
  }
  local_74 = *pfVar4;
  lVar3 = *(long *)(this + 0x488);
  pfVar5 = *(float **)(lVar3 + 0x2df8);
  uVar9 = *(long *)(lVar3 + 0x2e00) - (long)pfVar5;
  if (uVar9 != 0) {
    fVar13 = *param_1;
    iVar6 = (int)(uVar9 >> 2);
    if (pfVar5[((long)uVar9 >> 2) + -1] <= fVar13) {
      uVar9 = (ulong)(iVar6 - 1);
LAB_0027bb38:
      iVar7 = (int)uVar9;
      if (iVar7 == -1) goto LAB_0027bbb0;
    }
    else {
      fVar15 = *pfVar5;
      if ((fVar15 < fVar13) && (0 < (int)(iVar6 - 1U))) {
        uVar9 = 0;
        while( true ) {
          if ((fVar15 <= fVar13) && (fVar13 < pfVar5[uVar9 + 1])) goto LAB_0027bb38;
          if ((ulong)(iVar6 - 1U) - 1 == uVar9) break;
          fVar15 = pfVar5[uVar9 + 1];
          uVar9 = uVar9 + 1;
        }
      }
      iVar7 = 0;
    }
    lVar8 = (long)iVar7;
    if (iVar7 == iVar6 + -1) {
      fVar12 = *(float *)(*(long *)(lVar3 + 0x2e10) + lVar8 * 4);
    }
    else {
      uVar9 = -(ulong)(iVar7 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar7 + 1U) << 2;
      fVar12 = *(float *)(*(long *)(lVar3 + 0x2e10) + lVar8 * 4);
      dVar14 = (double)NEON_fminnm((double)((fVar13 - pfVar5[lVar8]) /
                                           (*(float *)((long)pfVar5 + uVar9) - pfVar5[lVar8])),
                                   0x3ff0000000000000);
      fVar13 = (float)dVar14;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar12 = fVar12 + (*(float *)(*(long *)(lVar3 + 0x2e10) + uVar9) - fVar12) * fVar13;
    }
  }
LAB_0027bbb0:
  fVar13 = *(float *)(this + 0xcfe4) + fVar12 * (local_74 - *(float *)(this + 0xcfe4));
  *(float *)(this + 0xcfe4) = fVar13;
  this_00 = (MI_LOG *)(this + 0x10);
  *param_3 = param_3[2] / fVar13;
  lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            (this_00,0,2,'V',(char *)(lVar3 + 1),0x1c55,"CalculateDRCgain",
             "m_mid_tone_gain: %.2f,final_target[mid/short]:%.2f %.2f",
             (double)*(float *)(this + 0xcfe4),(double)param_3[2],(double)*param_3);
  fVar13 = param_3[1];
  fVar12 = param_3[2];
  pfVar4 = (float *)(this + 0xcfec);
  *pfVar4 = fVar13 / fVar12;
  local_78 = 1.0;
  pfVar5 = pfVar4;
  if (fVar13 / fVar12 <= 1.0) {
    pfVar5 = &local_78;
  }
  fVar13 = *pfVar5;
  *pfVar4 = fVar13;
  if (*(float *)(this + 0xd010) <= fVar13) {
    pfVar4 = (float *)(this + 0xd010);
  }
  fVar13 = *pfVar4;
  pfVar4 = (float *)(this + 0xcfe8);
  *pfVar4 = fVar13;
  local_7c = *(float *)(this + 0xd008) / *(float *)(this + 0xcfe4);
  pfVar5 = pfVar4;
  if (*(float *)(this + 0xd008) / *(float *)(this + 0xcfe4) <= fVar13) {
    pfVar5 = &local_7c;
  }
  fVar13 = *pfVar5;
  *pfVar4 = fVar13;
  fVar12 = param_3[2];
  param_3[1] = fVar12 * fVar13;
  if (cVar2 == '\0') {
    *param_3 = fVar12;
    param_3[1] = fVar12;
  }
  if (*(char *)(*(long *)(this + 0x490) + 0x4c0) != '\0') {
    lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              (this_00,0,2,'V',(char *)(lVar3 + 1),0x1c65,"CalculateDRCgain","enable manual adrc");
    lVar3 = *(long *)(this + 0x490);
    *param_3 = param_3[2] / *(float *)(lVar3 + 0x4d8);
    param_3[1] = param_3[2] * *(float *)(lVar3 + 0x4f0);
  }
  lVar3 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
  MI_LOG::MI_LOG_HELPER
            (this_00,0,2,'V',(char *)(lVar3 + 1),0x1c6f,"CalculateDRCgain",
             "m_mid_tone_gain: %.2f,m_dark_gain: %.2f,final_target[long/mid/short]:%.2f %.2f %.2f",
             (double)*(float *)(this + 0xcfe4),(double)*(float *)(this + 0xcfe8),(double)param_3[1],
             (double)param_3[2],(double)*param_3);
  if (param_5 != (MiDebug_Mtr *)0x0) {
    param_5[0x171] = (MiDebug_Mtr)param_4;
    param_5[0x172] = (MiDebug_Mtr)0x1;
    *(float *)(param_5 + 0x173) = param_2;
    *(undefined8 *)(param_5 + 0x177) = *(undefined8 *)(this + 0xd008);
    *(undefined4 *)(param_5 + 0x17f) = *(undefined4 *)(this + 0xd010);
    *(undefined8 *)(param_5 + 0x183) = *(undefined8 *)(this + 0xcfe4);
  }
  return;
}


// ===== 0x181cc4 CalculateShortLongSA @ 00281cc4

/* MI_AEC::Metering::CalculateShortLongSA(float, MI_AEC::ProcessedBHistStats<unsigned int, 3>
   const&, MI_AEC::ProcessedBHistStats<unsigned int, 3> const&, MI_AEC::HistCommonInfo const&,
   float, MI_AEC::HistShortLongResult*, MI_AEC::MiDebug_Mtr*) */

undefined8 __thiscall
MI_AEC::Metering::CalculateShortLongSA
          (Metering *this,float param_1,ProcessedBHistStats *param_2,ProcessedBHistStats *param_3,
          HistCommonInfo *param_4,float param_5,HistShortLongResult *param_6,MiDebug_Mtr *param_7)

{
  long lVar1;
  Metering *pMVar2;
  Metering MVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 in_register_00005004;
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
  undefined4 uVar31;
  float local_e0;
  float local_dc;
  float local_bc;
  
  uVar5 = CONCAT44(in_register_00005004,param_1);
  lVar14 = *(long *)(this + 0x488);
  pfVar13 = *(float **)(lVar14 + 0x3750);
  pMVar2 = (Metering *)(lVar14 + 0x3748);
  if (*(char *)(lVar14 + 0x67c8) != '\0') {
    pMVar2 = this + 0xd558;
  }
  MVar3 = *pMVar2;
  lVar1 = lVar14 + 0x3750;
  uVar11 = *(long *)(lVar14 + 0x3758) - (long)pfVar13;
  lVar7 = (long)uVar11 >> 2;
  fVar26 = -1.0;
  iVar12 = (int)(uVar11 >> 2);
  if (uVar11 == 0) {
    local_bc = -1.0;
    local_e0 = -1.0;
    local_dc = -1.0;
  }
  else {
    fVar15 = pfVar13[lVar7 + -1];
    if (fVar15 <= param_1) {
      uVar8 = (ulong)(iVar12 - 1);
LAB_00281e00:
      iVar6 = (int)uVar8;
      if (iVar6 != -1) goto LAB_00281e08;
      local_dc = -1.0;
    }
    else {
      fVar20 = *pfVar13;
      if ((fVar20 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar20 <= param_1) && (param_1 < pfVar13[uVar8 + 1])) goto LAB_00281e00;
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar20 = pfVar13[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar6 = 0;
LAB_00281e08:
      lVar9 = (long)iVar6;
      if (iVar6 == iVar12 + -1) {
        local_dc = *(float *)(*(long *)(lVar14 + 0x3780) + lVar9 * 4);
      }
      else {
        uVar8 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        local_dc = *(float *)(*(long *)(lVar14 + 0x3780) + lVar9 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar9]) /
                                             (*(float *)((long)pfVar13 + uVar8) - pfVar13[lVar9])),
                                     0x3ff0000000000000);
        fVar20 = (float)dVar24;
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        local_dc = local_dc + (*(float *)(*(long *)(lVar14 + 0x3780) + uVar8) - local_dc) * fVar20;
      }
    }
    if (fVar15 <= param_1) {
      uVar8 = (ulong)(iVar12 - 1);
LAB_00281ef0:
      iVar6 = (int)uVar8;
      if (iVar6 != -1) goto LAB_00281ef8;
      local_e0 = -1.0;
    }
    else {
      fVar20 = *pfVar13;
      if ((fVar20 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar20 <= param_1) && (param_1 < pfVar13[uVar8 + 1])) goto LAB_00281ef0;
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar20 = pfVar13[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar6 = 0;
LAB_00281ef8:
      lVar9 = (long)iVar6;
      if (iVar6 == iVar12 + -1) {
        local_e0 = *(float *)(*(long *)(lVar14 + 0x3798) + lVar9 * 4);
      }
      else {
        uVar8 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        local_e0 = *(float *)(*(long *)(lVar14 + 0x3798) + lVar9 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar9]) /
                                             (*(float *)((long)pfVar13 + uVar8) - pfVar13[lVar9])),
                                     0x3ff0000000000000);
        fVar20 = (float)dVar24;
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        local_e0 = local_e0 + (*(float *)(*(long *)(lVar14 + 0x3798) + uVar8) - local_e0) * fVar20;
      }
    }
    if (fVar15 <= param_1) {
      uVar8 = (ulong)(iVar12 - 1);
LAB_00281fe0:
      iVar6 = (int)uVar8;
      if (iVar6 != -1) goto LAB_00281fe8;
      local_bc = -1.0;
    }
    else {
      fVar20 = *pfVar13;
      if ((fVar20 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar20 <= param_1) && (param_1 < pfVar13[uVar8 + 1])) goto LAB_00281fe0;
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar20 = pfVar13[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar6 = 0;
LAB_00281fe8:
      lVar9 = (long)iVar6;
      if (iVar6 == iVar12 + -1) {
        local_bc = *(float *)(*(long *)(lVar14 + 0x37b0) + lVar9 * 4);
      }
      else {
        uVar8 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        local_bc = *(float *)(*(long *)(lVar14 + 0x37b0) + lVar9 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar9]) /
                                             (*(float *)((long)pfVar13 + uVar8) - pfVar13[lVar9])),
                                     0x3ff0000000000000);
        fVar20 = (float)dVar24;
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        local_bc = local_bc + (*(float *)(*(long *)(lVar14 + 0x37b0) + uVar8) - local_bc) * fVar20;
      }
    }
    if (fVar15 <= param_1) {
      uVar4 = iVar12 - 1;
      uVar8 = (ulong)uVar4;
joined_r0x002820e8:
      iVar6 = (int)uVar8;
      if (uVar4 == 0xffffffff) goto LAB_00282188;
    }
    else {
      fVar15 = *pfVar13;
      if ((fVar15 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar15 <= param_1) && (param_1 < pfVar13[uVar8 + 1])) {
            uVar4 = (uint)uVar8;
            goto joined_r0x002820e8;
          }
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar15 = pfVar13[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar6 = 0;
    }
    lVar9 = (long)iVar6;
    if (iVar6 == iVar12 + -1) {
      fVar26 = *(float *)(*(long *)(lVar14 + 0x37c8) + lVar9 * 4);
    }
    else {
      uVar8 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
      fVar26 = *(float *)(*(long *)(lVar14 + 0x37c8) + lVar9 * 4);
      dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar9]) /
                                           (*(float *)((long)pfVar13 + uVar8) - pfVar13[lVar9])),
                                   0x3ff0000000000000);
      fVar15 = (float)dVar24;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      fVar26 = fVar26 + (*(float *)(*(long *)(lVar14 + 0x37c8) + uVar8) - fVar26) * fVar15;
    }
  }
LAB_00282188:
  lVar9 = lVar14 + 0x3768;
  uVar31 = *(undefined4 *)(this + 0xd4f8);
  fVar20 = (float)FUN_0027ecf8(uVar31,uVar5,lVar9,lVar1,lVar14 + 0x37e0);
  fVar27 = *(float *)(this + 0xd55c);
  fVar15 = (float)FUN_0027ecf8(uVar31,uVar5,lVar9,lVar1,lVar14 + 0x37f8);
  if (uVar11 == 0) {
    fVar21 = -1.0;
    fVar23 = -1.0;
    fVar22 = fVar21;
    fVar30 = fVar21;
    fVar28 = fVar21;
  }
  else {
    fVar23 = pfVar13[lVar7 + -1];
    if (fVar23 <= param_1) {
      uVar8 = (ulong)(iVar12 - 1);
LAB_002822b0:
      iVar6 = (int)uVar8;
      if (iVar6 != -1) goto LAB_002822d8;
      fVar21 = -1.0;
joined_r0x002822c0:
      if (fVar23 <= param_1) goto LAB_002822f8;
LAB_00282370:
      fVar28 = *pfVar13;
      if ((fVar28 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar28 <= param_1) && (param_1 < pfVar13[uVar8 + 1])) goto LAB_002822fc;
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar28 = pfVar13[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar6 = 0;
LAB_002823cc:
      lVar10 = (long)iVar6;
      if (iVar6 != iVar12 + -1) {
        uVar8 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        fVar28 = *(float *)(*(long *)(lVar14 + 0x3828) + lVar10 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar10]) /
                                             (*(float *)((long)pfVar13 + uVar8) - pfVar13[lVar10])),
                                     0x3ff0000000000000);
        fVar22 = (float)dVar24;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        fVar28 = fVar28 + (*(float *)(*(long *)(lVar14 + 0x3828) + uVar8) - fVar28) * fVar22;
        goto joined_r0x0028230c;
      }
      fVar28 = *(float *)(*(long *)(lVar14 + 0x3828) + lVar10 * 4);
      if (param_1 < fVar23) goto LAB_00282464;
LAB_002823ec:
      uVar8 = (ulong)(iVar12 - 1);
LAB_002823f0:
      iVar6 = (int)uVar8;
      if (iVar6 != -1) goto LAB_002824c0;
      fVar22 = -1.0;
joined_r0x00282400:
      if (fVar23 <= param_1) goto LAB_002824e0;
LAB_00282550:
      fVar23 = *pfVar13;
      if ((fVar23 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar23 <= param_1) && (param_1 < pfVar13[uVar8 + 1])) goto LAB_002824e4;
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar23 = pfVar13[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar6 = 0;
LAB_002825ac:
      lVar10 = (long)iVar6;
      if (iVar6 == iVar12 + -1) {
        fVar30 = *(float *)(*(long *)(lVar14 + 0x3858) + lVar10 * 4);
      }
      else {
        uVar8 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        fVar30 = *(float *)(*(long *)(lVar14 + 0x3858) + lVar10 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar10]) /
                                             (*(float *)((long)pfVar13 + uVar8) - pfVar13[lVar10])),
                                     0x3ff0000000000000);
        fVar23 = (float)dVar24;
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        fVar30 = fVar30 + (*(float *)(*(long *)(lVar14 + 0x3858) + uVar8) - fVar30) * fVar23;
      }
    }
    else {
      fVar21 = *pfVar13;
      if ((fVar21 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar21 <= param_1) && (param_1 < pfVar13[uVar8 + 1])) goto LAB_002822b0;
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar21 = pfVar13[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar6 = 0;
LAB_002822d8:
      lVar10 = (long)iVar6;
      if (iVar6 != iVar12 + -1) {
        uVar8 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        fVar21 = *(float *)(*(long *)(lVar14 + 0x3810) + lVar10 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar10]) /
                                             (*(float *)((long)pfVar13 + uVar8) - pfVar13[lVar10])),
                                     0x3ff0000000000000);
        fVar28 = (float)dVar24;
        if (fVar28 <= 0.0) {
          fVar28 = 0.0;
        }
        fVar21 = fVar21 + (*(float *)(*(long *)(lVar14 + 0x3810) + uVar8) - fVar21) * fVar28;
        goto joined_r0x002822c0;
      }
      fVar21 = *(float *)(*(long *)(lVar14 + 0x3810) + lVar10 * 4);
      if (param_1 < fVar23) goto LAB_00282370;
LAB_002822f8:
      uVar8 = (ulong)(iVar12 - 1);
LAB_002822fc:
      iVar6 = (int)uVar8;
      if (iVar6 != -1) goto LAB_002823cc;
      fVar28 = -1.0;
joined_r0x0028230c:
      if (fVar23 <= param_1) goto LAB_002823ec;
LAB_00282464:
      fVar22 = *pfVar13;
      if ((fVar22 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar22 <= param_1) && (param_1 < pfVar13[uVar8 + 1])) goto LAB_002823f0;
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar22 = pfVar13[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar6 = 0;
LAB_002824c0:
      lVar10 = (long)iVar6;
      if (iVar6 != iVar12 + -1) {
        uVar8 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        fVar22 = *(float *)(*(long *)(lVar14 + 0x3840) + lVar10 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar10]) /
                                             (*(float *)((long)pfVar13 + uVar8) - pfVar13[lVar10])),
                                     0x3ff0000000000000);
        fVar30 = (float)dVar24;
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        fVar22 = fVar22 + (*(float *)(*(long *)(lVar14 + 0x3840) + uVar8) - fVar22) * fVar30;
        goto joined_r0x00282400;
      }
      fVar22 = *(float *)(*(long *)(lVar14 + 0x3840) + lVar10 * 4);
      if (param_1 < fVar23) goto LAB_00282550;
LAB_002824e0:
      uVar8 = (ulong)(iVar12 - 1);
LAB_002824e4:
      iVar6 = (int)uVar8;
      if (iVar6 != -1) goto LAB_002825ac;
      fVar30 = -1.0;
    }
    if (pfVar13[lVar7 + -1] <= param_1) {
      uVar8 = (ulong)(iVar12 - 1);
LAB_00282690:
      iVar6 = (int)uVar8;
      if (iVar6 == -1) {
        fVar23 = -1.0;
        goto LAB_00282710;
      }
    }
    else {
      fVar23 = *pfVar13;
      if ((fVar23 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar8 = 0;
        while( true ) {
          if ((fVar23 <= param_1) && (param_1 < pfVar13[uVar8 + 1])) goto LAB_00282690;
          if ((ulong)(iVar12 - 1U) - 1 == uVar8) break;
          fVar23 = pfVar13[uVar8 + 1];
          uVar8 = uVar8 + 1;
        }
      }
      iVar6 = 0;
    }
    lVar10 = (long)iVar6;
    if (iVar6 == iVar12 + -1) {
      fVar23 = *(float *)(*(long *)(lVar14 + 0x3870) + lVar10 * 4);
    }
    else {
      uVar8 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
      fVar23 = *(float *)(*(long *)(lVar14 + 0x3870) + lVar10 * 4);
      dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar10]) /
                                           (*(float *)((long)pfVar13 + uVar8) - pfVar13[lVar10])),
                                   0x3ff0000000000000);
      fVar18 = (float)dVar24;
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar23 = fVar23 + (*(float *)(*(long *)(lVar14 + 0x3870) + uVar8) - fVar23) * fVar18;
    }
  }
LAB_00282710:
  iVar6 = *(int *)(this + 0xd098);
  if ((iVar6 != 2) && (iVar6 != 4)) {
    fVar20 = fVar20 * fVar27;
    goto LAB_00282c58;
  }
  if (uVar11 == 0) {
    fVar21 = -1.0;
    fVar28 = -1.0;
    fVar30 = -1.0;
    fVar23 = -1.0;
    fVar22 = fVar21;
  }
  else {
    fVar20 = pfVar13[lVar7 + -1];
    if (fVar20 <= param_1) {
      uVar11 = (ulong)(iVar12 - 1);
LAB_002827e0:
      iVar6 = (int)uVar11;
      if (iVar6 != -1) goto LAB_002827e8;
      fVar21 = -1.0;
joined_r0x00282c24:
      if (fVar20 <= param_1) goto LAB_00282808;
LAB_00282880:
      fVar27 = *pfVar13;
      if ((fVar27 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar11 = 0;
        while( true ) {
          if ((fVar27 <= param_1) && (param_1 < pfVar13[uVar11 + 1])) goto LAB_0028280c;
          if ((ulong)(iVar12 - 1U) - 1 == uVar11) break;
          fVar27 = pfVar13[uVar11 + 1];
          uVar11 = uVar11 + 1;
        }
      }
      iVar6 = 0;
LAB_002828dc:
      lVar10 = (long)iVar6;
      if (iVar6 != iVar12 + -1) {
        uVar11 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        fVar28 = *(float *)(*(long *)(lVar14 + 0x38a0) + lVar10 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar10]) /
                                             (*(float *)((long)pfVar13 + uVar11) - pfVar13[lVar10]))
                                     ,0x3ff0000000000000);
        fVar27 = (float)dVar24;
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        fVar28 = fVar28 + (*(float *)(*(long *)(lVar14 + 0x38a0) + uVar11) - fVar28) * fVar27;
        goto joined_r0x0028281c;
      }
      fVar28 = *(float *)(*(long *)(lVar14 + 0x38a0) + lVar10 * 4);
      if (param_1 < fVar20) goto LAB_00282974;
LAB_002828fc:
      uVar11 = (ulong)(iVar12 - 1);
LAB_00282900:
      iVar6 = (int)uVar11;
      if (iVar6 != -1) goto LAB_002829d0;
      fVar22 = -1.0;
joined_r0x00282910:
      if (fVar20 <= param_1) goto LAB_002829f0;
LAB_00282a60:
      fVar20 = *pfVar13;
      if ((fVar20 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar11 = 0;
        while( true ) {
          if ((fVar20 <= param_1) && (param_1 < pfVar13[uVar11 + 1])) goto LAB_002829f4;
          if ((ulong)(iVar12 - 1U) - 1 == uVar11) break;
          fVar20 = pfVar13[uVar11 + 1];
          uVar11 = uVar11 + 1;
        }
      }
      iVar6 = 0;
LAB_00282abc:
      lVar10 = (long)iVar6;
      if (iVar6 == iVar12 + -1) {
        fVar30 = *(float *)(*(long *)(lVar14 + 0x38d0) + lVar10 * 4);
      }
      else {
        uVar11 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        fVar30 = *(float *)(*(long *)(lVar14 + 0x38d0) + lVar10 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar10]) /
                                             (*(float *)((long)pfVar13 + uVar11) - pfVar13[lVar10]))
                                     ,0x3ff0000000000000);
        fVar20 = (float)dVar24;
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        fVar30 = fVar30 + (*(float *)(*(long *)(lVar14 + 0x38d0) + uVar11) - fVar30) * fVar20;
      }
    }
    else {
      fVar27 = *pfVar13;
      if ((fVar27 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar11 = 0;
        while( true ) {
          if ((fVar27 <= param_1) && (param_1 < pfVar13[uVar11 + 1])) goto LAB_002827e0;
          if ((ulong)(iVar12 - 1U) - 1 == uVar11) break;
          fVar27 = pfVar13[uVar11 + 1];
          uVar11 = uVar11 + 1;
        }
      }
      iVar6 = 0;
LAB_002827e8:
      lVar10 = (long)iVar6;
      if (iVar6 != iVar12 + -1) {
        uVar11 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        fVar21 = *(float *)(*(long *)(lVar14 + 0x3888) + lVar10 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar10]) /
                                             (*(float *)((long)pfVar13 + uVar11) - pfVar13[lVar10]))
                                     ,0x3ff0000000000000);
        fVar27 = (float)dVar24;
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        fVar21 = fVar21 + (*(float *)(*(long *)(lVar14 + 0x3888) + uVar11) - fVar21) * fVar27;
        goto joined_r0x00282c24;
      }
      fVar21 = *(float *)(*(long *)(lVar14 + 0x3888) + lVar10 * 4);
      if (param_1 < fVar20) goto LAB_00282880;
LAB_00282808:
      uVar11 = (ulong)(iVar12 - 1);
LAB_0028280c:
      iVar6 = (int)uVar11;
      if (iVar6 != -1) goto LAB_002828dc;
      fVar28 = -1.0;
joined_r0x0028281c:
      if (fVar20 <= param_1) goto LAB_002828fc;
LAB_00282974:
      fVar27 = *pfVar13;
      if ((fVar27 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar11 = 0;
        while( true ) {
          if ((fVar27 <= param_1) && (param_1 < pfVar13[uVar11 + 1])) goto LAB_00282900;
          if ((ulong)(iVar12 - 1U) - 1 == uVar11) break;
          fVar27 = pfVar13[uVar11 + 1];
          uVar11 = uVar11 + 1;
        }
      }
      iVar6 = 0;
LAB_002829d0:
      lVar10 = (long)iVar6;
      if (iVar6 != iVar12 + -1) {
        uVar11 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
        fVar22 = *(float *)(*(long *)(lVar14 + 0x38b8) + lVar10 * 4);
        dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar10]) /
                                             (*(float *)((long)pfVar13 + uVar11) - pfVar13[lVar10]))
                                     ,0x3ff0000000000000);
        fVar27 = (float)dVar24;
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        fVar22 = fVar22 + (*(float *)(*(long *)(lVar14 + 0x38b8) + uVar11) - fVar22) * fVar27;
        goto joined_r0x00282910;
      }
      fVar22 = *(float *)(*(long *)(lVar14 + 0x38b8) + lVar10 * 4);
      if (param_1 < fVar20) goto LAB_00282a60;
LAB_002829f0:
      uVar11 = (ulong)(iVar12 - 1);
LAB_002829f4:
      iVar6 = (int)uVar11;
      if (iVar6 != -1) goto LAB_00282abc;
      fVar30 = -1.0;
    }
    if (pfVar13[lVar7 + -1] <= param_1) {
      uVar11 = (ulong)(iVar12 - 1);
LAB_00282ba0:
      iVar6 = (int)uVar11;
      if (iVar6 == -1) {
        fVar23 = -1.0;
        goto LAB_00282c3c;
      }
    }
    else {
      fVar20 = *pfVar13;
      if ((fVar20 < param_1) && (0 < (int)(iVar12 - 1U))) {
        uVar11 = 0;
        while( true ) {
          if ((fVar20 <= param_1) && (param_1 < pfVar13[uVar11 + 1])) goto LAB_00282ba0;
          if ((ulong)(iVar12 - 1U) - 1 == uVar11) break;
          fVar20 = pfVar13[uVar11 + 1];
          uVar11 = uVar11 + 1;
        }
      }
      iVar6 = 0;
    }
    lVar7 = (long)iVar6;
    if (iVar6 == iVar12 + -1) {
      fVar23 = *(float *)(*(long *)(lVar14 + 0x38e8) + lVar7 * 4);
    }
    else {
      uVar11 = -(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar6 + 1U) << 2;
      fVar23 = *(float *)(*(long *)(lVar14 + 0x38e8) + lVar7 * 4);
      dVar24 = (double)NEON_fminnm((double)((param_1 - pfVar13[lVar7]) /
                                           (*(float *)((long)pfVar13 + uVar11) - pfVar13[lVar7])),
                                   0x3ff0000000000000);
      fVar20 = (float)dVar24;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar23 = fVar23 + (*(float *)(*(long *)(lVar14 + 0x38e8) + uVar11) - fVar23) * fVar20;
    }
  }
LAB_00282c3c:
  fVar20 = (float)FUN_0027ecf8(uVar31,uVar5,lVar9,lVar1,lVar14 + 0x3900);
LAB_00282c58:
  fVar27 = (float)CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_4,fVar21,fVar28);
  if (fVar30 <= fVar22) {
    uVar4 = (uint)(fVar22 * 1000.0);
  }
  else {
    uVar4 = FindBtSt(this,param_2,param_4,(ushort)(int)(fVar22 * 1000.0),
                     (ushort)(int)(fVar30 * 1000.0),5,fVar23 * fVar27);
    uVar4 = uVar4 & 0xffff;
  }
  fVar16 = (float)(ulong)uVar4 / 1000.0;
  fVar18 = fVar30;
  if (fVar16 <= fVar30) {
    fVar18 = fVar16;
  }
  fVar16 = fVar22;
  if (fVar22 <= fVar18) {
    fVar16 = fVar18;
  }
  fVar17 = (float)CalculateSpecificToneAvg(this,param_2,(WhiteBalanceInfo *)param_4,fVar16,local_e0)
  ;
  fVar17 = fVar17 * *(float *)(param_4 + 0x24);
  fVar18 = (float)CalculateSpecificToneAvg
                            (this,param_2,(WhiteBalanceInfo *)param_4,local_dc,local_e0);
  fVar19 = (float)CalculateSpecificToneAvg(this,param_3,(WhiteBalanceInfo *)param_4,local_bc,fVar26)
  ;
  fVar18 = fVar18 * *(float *)(param_4 + 0x24);
  if (MVar3 != (Metering)0x0) {
    fVar18 = fVar17;
  }
  if (((ABS(fVar19) < 1e-06) || (ABS(param_5) < 1e-06)) || (ABS(fVar18) < 1e-06)) {
    lVar14 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),4,6,'E',(char *)(lVar14 + 1),0xa13,"CalculateShortLongSA",
               "error!bt_avg:%f, offset:%f, dt_avg:%f",(double)fVar18,(double)param_5,(double)fVar19
              );
    uVar5 = 0;
  }
  else {
    fVar29 = fVar15 / fVar19;
    fVar25 = fVar20 / (fVar18 * param_5);
    *(float *)(param_6 + 0x20) = fVar25;
    *(float *)(param_6 + 0x24) = fVar29;
    lVar14 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    dVar24 = (double)fVar19;
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar14 + 1),0xa1c,"CalculateShortLongSA",
               "bt_pct(st/end):%f, %f, dt_pct(st/end):%f, %f, bt(ref/avg/ratio):%f, %f, %f, dt(ref/avg/ratio):%f, %f, %f"
               ,(double)local_dc,(double)local_e0,(double)local_bc,(double)fVar26,(double)fVar20,
               (double)fVar18,(double)fVar25,(double)fVar15,dVar24,(double)fVar29);
    uVar31 = (undefined4)((ulong)dVar24 >> 0x20);
    lVar14 = __strrchr_chk("/./../../src/module/Metering/Metering.cpp",0x2f,0x2a);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)(this + 0x10),0,2,'V',(char *)(lVar14 + 1),0xa1e,"CalculateShortLongSA",
               "offset:%f, base_bt_pct_st:%f, bt_pct:%d, bright_avg:%f, final_bt_st_pct:%f, bt_st_low:%f,bt_st_high:%f, weight:%f, base_bright_avg: %f, bt_adjust_ratio: %f, dt_adjust_ratio: %f"
               ,(double)param_5,(double)fVar21,(double)fVar17,(double)fVar16,(double)fVar22,
               (double)fVar30,(double)fVar23,(double)fVar27,CONCAT44(uVar31,uVar4),(double)fVar25,
               (double)fVar29);
    if (param_7 != (MiDebug_Mtr *)0x0) {
      *(float *)(param_7 + 0x760) = fVar21;
      *(float *)(param_7 + 0x768) = fVar22;
      *(float *)(param_7 + 0x764) = fVar28;
      *(float *)(param_7 + 0x770) = fVar23;
      *(float *)(param_7 + 0x76c) = fVar30;
      *(float *)(param_7 + 0x774) = fVar20;
      *(float *)(param_7 + 0x778) = fVar15;
      iVar12 = *(int *)(this + 0xd098);
      *(float *)(param_7 + 0x788) = fVar27;
      *(float *)(param_7 + 0x794) = fVar16;
      *(float *)(param_7 + 0x780) = local_bc;
      *(float *)(param_7 + 0x79c) = fVar19;
      *(int *)(param_7 + 0x77c) = iVar12;
      *(float *)(param_7 + 0x784) = fVar26;
      *(float *)(param_7 + 0x78c) = fVar23 * fVar27;
      *(float *)(param_7 + 0x790) = (float)(ulong)uVar4;
      *(float *)(param_7 + 0x798) = fVar17;
      *(float *)(param_7 + 0x7a0) = fVar18;
      *(float *)(param_7 + 0x7a4) = fVar25;
      *(float *)(param_7 + 0x7a8) = fVar29;
      *(Metering *)(param_7 + 0x7ac) = this[0xd558];
    }
    uVar5 = 1;
  }
  return uVar5;
}


