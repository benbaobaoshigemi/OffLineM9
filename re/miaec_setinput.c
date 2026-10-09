// ===== 0x1c21a0 Set_StreamProcInput @ 002c21a0

/* MI_AEC_SIM::Simulator::Set_StreamProcInput(MI_AEC::MIAEC_DebugData&) */

void MI_AEC_SIM::Simulator::Set_StreamProcInput(MIAEC_DebugData *param_1)

{
  bool bVar1;
  short *psVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  long in_x1;
  void *in_x8;
  ulong uVar10;
  undefined8 uVar11;
  short *psVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  MIAEC_DebugData *pMVar17;
  short *psVar18;
  ulong *puVar19;
  
  uVar10 = 0;
  psVar12 = (short *)(in_x1 + 0x196);
  lVar13 = in_x1 + 0xcf1aa;
  lVar14 = in_x1;
  do {
    uVar15 = 0;
    psVar18 = psVar12;
    do {
      if (((psVar18[-2] != 0) || (*psVar18 != 0)) || (psVar18[-1] != 0)) goto LAB_002c2288;
      psVar2 = psVar18 + -3;
      if (0xbfe < uVar15) break;
      uVar15 = uVar15 + 1;
      psVar18 = psVar18 + 0x2e;
    } while (*psVar2 == 0);
    if (*psVar2 != 0) {
LAB_002c2288:
      *(undefined2 *)(param_1 + uVar10 * 0x40 + 0x1a4) = *(undefined2 *)(in_x1 + 0x126);
      uVar4 = (*(ushort *)(in_x1 + 0x12a) & 1) << 1;
      uVar5 = *(uint *)(param_1 + uVar10 * 0x40 + 0x1a8) & 0xfffffffc;
      *(uint *)(param_1 + uVar10 * 0x40 + 0x1a8) =
           uVar5 | *(uint *)(param_1 + uVar10 * 0x40 + 0x1a8) & 1 | uVar4;
      *(uint *)(param_1 + uVar10 * 0x40 + 0x1a8) = uVar5 | uVar4 | *(ushort *)(in_x1 + 0x128) & 1;
      if (*(short *)(in_x1 + 0x12a) == 0) {
        lVar16 = 0;
        puVar19 = (ulong *)(param_1 + 0x91248);
        do {
          lVar3 = lVar14 + lVar16;
          uVar15 = *(ulong *)(lVar3 + 0x1a0);
          lVar16 = lVar16 + 0x5c;
          puVar19[-5] = *(ulong *)(lVar3 + 0x1a8);
          puVar19[-6] = uVar15;
          puVar19[-4] = *(ulong *)(lVar3 + 0x1b0);
          puVar19[-2] = *(ulong *)(lVar3 + 0x1b8);
          uVar9 = *(ushort *)(lVar3 + 400);
          puVar19[1] = (ulong)*(ushort *)(lVar3 + 0x192);
          *puVar19 = (ulong)uVar9;
          puVar19[2] = (ulong)*(ushort *)(lVar3 + 0x194);
          puVar19[4] = (ulong)*(ushort *)(lVar3 + 0x196);
          puVar19 = puVar19 + 0xe;
          pMVar17 = param_1 + 0x91208;
        } while (lVar16 != 0x45000);
      }
      else {
        lVar16 = 0;
        puVar19 = (ulong *)(param_1 + 0x12b0);
        do {
          lVar3 = lVar14 + lVar16;
          uVar15 = *(ulong *)(lVar3 + 0x1a0);
          lVar16 = lVar16 + 0x5c;
          puVar19[-0x12] = *(ulong *)(lVar3 + 0x1a8);
          puVar19[-0x13] = uVar15;
          puVar19[-0x11] = *(ulong *)(lVar3 + 0x1b0);
          puVar19[-0xf] = *(ulong *)(lVar3 + 0x1b8);
          uVar9 = *(ushort *)(lVar3 + 400);
          puVar19[-0xc] = (ulong)*(ushort *)(lVar3 + 0x192);
          puVar19[-0xd] = (ulong)uVar9;
          puVar19[-0xb] = (ulong)*(ushort *)(lVar3 + 0x194);
          puVar19[-9] = (ulong)*(ushort *)(lVar3 + 0x196);
          uVar15 = *(ulong *)(lVar3 + 0x1d0);
          puVar19[-4] = *(ulong *)(lVar3 + 0x1d8);
          puVar19[-5] = uVar15;
          uVar15 = *(ulong *)(lVar3 + 0x1c0);
          puVar19[-6] = *(ulong *)(lVar3 + 0x1c8);
          puVar19[-7] = uVar15;
          uVar9 = *(ushort *)(lVar3 + 0x19c);
          puVar19[1] = (ulong)*(ushort *)(lVar3 + 0x19e);
          *puVar19 = (ulong)uVar9;
          uVar9 = *(ushort *)(lVar3 + 0x198);
          puVar19[-1] = (ulong)*(ushort *)(lVar3 + 0x19a);
          puVar19[-2] = (ulong)uVar9;
          puVar19 = puVar19 + 0x18;
          pMVar17 = param_1 + 0x1208;
        } while (lVar16 != 0x45000);
      }
      *(MIAEC_DebugData **)(param_1 + uVar10 * 0x40 + 0x1c8) = pMVar17;
      *(undefined8 *)(param_1 + uVar10 * 0x40 + 0x19c) = *(undefined8 *)(in_x1 + 0x138);
      *(undefined4 *)(param_1 + uVar10 * 0x40 + 400) = *(undefined4 *)(in_x1 + 300);
      *(undefined4 *)(param_1 + uVar10 * 0x40 + 0x1bc) = *(undefined4 *)(in_x1 + 0x140);
      uVar11 = *(undefined8 *)(in_x1 + 0x154);
      *(undefined8 *)(param_1 + uVar10 * 0x40 + 0x1b4) = *(undefined8 *)(in_x1 + 0x15c);
      *(undefined8 *)(param_1 + uVar10 * 0x40 + 0x1ac) = uVar11;
      *(uint *)(param_1 + uVar10 * 0x40 + 0x1c0) = (uint)*(byte *)(in_x1 + 0x125);
      *(undefined8 *)(param_1 + uVar10 * 0x40 + 0x194) = *(undefined8 *)(in_x1 + 0x130);
    }
    uVar11 = *(undefined8 *)(in_x1 + 0x144);
    *(undefined8 *)(param_1 + 0x600) = *(undefined8 *)(in_x1 + 0x14c);
    *(undefined8 *)(param_1 + 0x5f8) = uVar11;
    uVar15 = 0;
    do {
      iVar7 = *(int *)(lVar13 + uVar15 * 4);
      if (iVar7 != 0) break;
      bVar1 = uVar15 < 0x3ff;
      uVar15 = uVar15 + 1;
    } while (bVar1);
    if (iVar7 != 0) {
      lVar16 = in_x1 + uVar10 * 0x4010;
      *(undefined8 *)(param_1 + uVar10 * 0x40 + 0x250) = *(undefined8 *)(in_x1 + 0xcf198);
      bVar8 = *(byte *)(in_x1 + 0xcf1a0);
      param_1[uVar10 * 0x40 + 0x28c] = (MIAEC_DebugData)0x1;
      *(long *)(param_1 + uVar10 * 0x40 + 600) = lVar16 + 0xcf1aa;
      *(uint *)(param_1 + uVar10 * 0x40 + 0x288) = (uint)bVar8;
      uVar6 = *(undefined4 *)(lVar16 + 0xcf1a6);
      *(long *)(param_1 + uVar10 * 0x40 + 0x260) = lVar16 + 0xd01ae;
      *(undefined4 *)(param_1 + uVar10 * 0x40 + 0x278) = uVar6;
      uVar6 = *(undefined4 *)(lVar16 + 0xd01aa);
      *(long *)(param_1 + uVar10 * 0x40 + 0x268) = lVar16 + 0xd11b2;
      *(undefined4 *)(param_1 + uVar10 * 0x40 + 0x27c) = uVar6;
      *(undefined4 *)(param_1 + uVar10 * 0x40 + 0x280) = *(undefined4 *)(lVar16 + 0xd11ae);
      *(long *)(param_1 + uVar10 * 0x40 + 0x270) = lVar16 + 0xd21b6;
      *(undefined4 *)(param_1 + uVar10 * 0x40 + 0x284) = *(undefined4 *)(lVar16 + 0xd21b2);
    }
    uVar4 = *(uint *)(in_x1 + 0xcf1a2);
    if ((*(MIAEC_DebugData *)(in_x1 + 0xcf1a1) == (MIAEC_DebugData)0x0) || (uVar4 < 2)) break;
    uVar10 = uVar10 + 1;
    psVar12 = psVar12 + 0x22800;
    lVar14 = lVar14 + 0x45000;
    lVar13 = lVar13 + 0x4010;
  } while (uVar10 < 3);
  lVar14 = 3;
  if (*(char *)(in_x1 + 0xdba8d) != '\0') {
    lVar14 = 1;
  }
  if (*(char *)(in_x1 + 0xdbb5a) != '\0') {
    lVar14 = 2;
  }
  if (*(char *)(in_x1 + 0xdbc27) != '\0') {
    lVar14 = 3;
  }
  if (*(char *)(in_x1 + 0xdbcf4) != '\0') {
    lVar14 = 4;
  }
  if (*(char *)(in_x1 + 0xdbdc1) != '\0') {
    lVar14 = 5;
  }
  if (*(char *)(in_x1 + 0xdbe8e) != '\0') {
    lVar14 = 6;
  }
  if (*(char *)(in_x1 + 0xdbf5b) != '\0') {
    lVar14 = 7;
  }
  if (*(char *)(in_x1 + 0xdc028) != '\0') {
    lVar14 = 8;
  }
  if (*(char *)(in_x1 + 0xdc0f5) != '\0') {
    lVar14 = 9;
  }
  if (*(char *)(in_x1 + 0xdc1c2) != '\0') {
    lVar14 = 10;
  }
  if (*(char *)(in_x1 + 0xdc28f) != '\0') {
    lVar14 = 0xb;
  }
  if (*(char *)(in_x1 + 0xdc35c) != '\0') {
    lVar14 = 0xc;
  }
  uVar11 = *(undefined8 *)(in_x1 + lVar14 * 0xcd + 0xdba64);
  param_1[0x6b9] = *(MIAEC_DebugData *)(in_x1 + 0xcf1a1);
  *(uint *)(param_1 + 0x6bc) = uVar4;
  *(undefined8 *)(param_1 + 0x188) = uVar11;
  param_1[0x6dd] = *(MIAEC_DebugData *)((long)&__DT_SYMTAB[0x72d].st_value + in_x1 + 7);
  uVar11 = *(undefined8 *)((long)&__DT_SYMTAB[0x81c].st_size + in_x1 + 7);
  *(MIAEC_DebugData **)(param_1 + 0x6a8) = param_1 + 0xef308;
  *(undefined8 *)(param_1 + 0x6c8) = uVar11;
  *(undefined4 *)(param_1 + 0x6b0) = 0x124416;
  memcpy(in_x8,param_1 + 0x188,0x568);
  return;
}


// ===== 0x11a55c PreProcessing @ 0021a55c

/* MI_AEC::FlowController::PreProcessing(MI_AEC::StreamProcInput const*) */

int __thiscall MI_AEC::FlowController::PreProcessing(FlowController *this,StreamProcInput *param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  DataCenter *pDVar7;
  long *plVar8;
  void *local_a0;
  void *local_98;
  undefined local_84 [4];
  void *local_80;
  void *pvStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  PreProcess::FillDebugDataTag
            (*(PreProcess **)(this + 0x40),(MIAEC_DebugData *)(*(long *)(this + 0x10) + 0xfe88));
  if ((*(DataCenter **)(this + 0x10))[0xc58] == (DataCenter)0x0) {
    iVar6 = 0x11e98e;
    lVar4 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,4,6,'E',(char *)(lVar4 + 1),0x86d,"PreProcessing",
               "Startup config is not yet ready");
  }
  else {
    uVar3 = DataCenter::UpdateCurrentFrameID(*(DataCenter **)(this + 0x10),*(ulong *)param_1);
    if ((uVar3 & 1) == 0) {
      lVar4 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)this,4,6,'E',(char *)(lVar4 + 1),0x875,"PreProcessing",
                 "Failed to update frame id to data center");
      iVar6 = 0x11e990;
    }
    else {
      iVar6 = 0;
    }
  }
  DataCenter::CalEVInfo();
  pDVar7 = *(DataCenter **)(this + 0x10);
  lVar4 = DataCenter::QueryFrameFromHistory(pDVar7,'\0');
  lVar5 = *(long *)(this + 0x10);
  local_50 = *(undefined8 *)(lVar5 + 0x1920);
  uStack_58 = *(undefined8 *)(lVar5 + 0x1918);
  uStack_60 = *(undefined8 *)(lVar5 + 0x1910);
  uStack_68 = *(undefined8 *)(lVar5 + 0x1908);
  local_70 = *(undefined8 *)(lVar5 + 0x1900);
  pvStack_78 = *(void **)(lVar5 + 0x18f8);
  local_80 = *(void **)(lVar5 + 0x18f0);
  DataCenter::FlickerSensorInfoPreprocess
            (pDVar7,(float *)(lVar4 + 0x70),(FlickerSensorInfo *)&local_80);
  pDVar7 = *(DataCenter **)(this + 0x10);
  lVar4 = DataCenter::QueryFrameFromHistory(pDVar7,'\0');
  DataCenter::CalShutterBase(*(float *)(lVar4 + 0x70),SUB81(pDVar7,0));
  lVar4 = *(long *)(this + 0x10);
  if (*(uint *)(lVar4 + 0xfc88) < 2) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(lVar4 + 0x60f8) == 1;
  }
  PreProcess::UpdateDMBRFactor(*(PreProcess **)(this + 0x40),(GyroInfo *)(lVar4 + 0x12f0),bVar2);
  PreProcess::UpdateIsDeviceStableFlag();
  DataCenter::UpdateGyroInfo();
  DataCenter::UpdateIsDeviceStableFlag();
  DataCenter::UpdateDeflickerAdjust(*(DataCenter **)(this + 0x10),(bool)this[0x46dc],false,false);
  PreProcess::UpdateLabSceneChecker();
  if (iVar6 == 0) {
    PreProcess::FacePreProcess();
    PreProcess::FaceSecondaryStatsValidation
              (*(PreProcess **)(this + 0x40),param_1,(FaceSecondaryStatsInfo *)(this + 0x47c0));
    PreProcess::FacePixelStatsValidation
              (*(PreProcess **)(this + 0x40),param_1,(float *)(this + 0x5348));
  }
  PreProcess::SemanticStatsValidation
            (*(PreProcess **)(this + 0x40),param_1,(float *)(this + 0x534c));
  lVar4 = *(long *)(this + 0x10);
  (**(code **)(**(long **)(this + 0x28) + 0x30))
            (*(undefined4 *)(lVar4 + 0x8e0),*(undefined4 *)(lVar4 + 0x8e4),
             *(undefined4 *)(lVar4 + 0x960),*(undefined4 *)(lVar4 + 0xb70),*(long **)(this + 0x28),
             *(undefined4 *)((long)&__DT_SYMTAB[0x1adc].st_value + lVar4 + 4),
             *(undefined4 *)(lVar4 + 0x1c2c),*(undefined4 *)(lVar4 + 0x900));
  (**(code **)(**(long **)(this + 0x28) + 0x48))
            (*(long **)(this + 0x28),*(long *)(this + 0x10) + 0xb10,0,*(long *)(this + 0x10) + 0x978
            );
  if (*(char *)(*(long *)(this + 0x7648) + 0x2298) != '\0') {
    lVar4 = *(long *)(this + 0x10);
    if (1e-06 <= ABS(*(float *)(lVar4 + 0x6174))) {
      local_84[0] = *(undefined *)(lVar4 + 0x61f4);
      plVar8 = *(long **)(this + 0x28);
      std::__1::vector<float,std::__1::allocator<float>>::vector
                ((vector<float,std::__1::allocator<float>> *)&local_80,(vector *)(lVar4 + 0x6210));
                    /* try { // try from 0021a838 to 0021a83f has its CatchHandler @ 0021a94c */
      std::__1::vector<float,std::__1::allocator<float>>::vector
                ((vector<float,std::__1::allocator<float>> *)&local_a0,
                 (vector *)(*(long *)(this + 0x10) + 0x61f8));
                    /* try { // try from 0021a868 to 0021a87f has its CatchHandler @ 0021a918 */
      (**(code **)(*plVar8 + 0x98))
                (plVar8,local_84,&local_80,&local_a0,*(long *)(this + 0x10) + 0x6174,
                 *(long *)(this + 0x7648) + 0x2338,this + 0x7638);
      if (local_a0 != (void *)0x0) {
        local_98 = local_a0;
        operator_delete(local_a0);
      }
      if (local_80 != (void *)0x0) {
        pvStack_78 = local_80;
        operator_delete(local_80);
      }
      lVar4 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)this,0,2,'V',(char *)(lVar4 + 1),0x893,"PreProcessing",
                 "m_continuous_optical_zoom_flux_ratio %f",(double)*(float *)(this + 0x7638));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


