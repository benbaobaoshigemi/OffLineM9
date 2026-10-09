// ===== 0x112e70 CreateMiAEC @ 00212e70

/* MI_AEC::MiAECMgr::CreateMiAEC(MI_AEC::iMiAEC::iMiAECCreateInfo const&, MI_AEC::iMiAEC**) */

undefined4 __thiscall
MI_AEC::MiAECMgr::CreateMiAEC(MiAECMgr *this,iMiAECCreateInfo *param_1,iMiAEC **param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  timeval local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  std::__1::recursive_mutex::lock();
  iVar8 = property_get_int32("vendor.debug.aec.open_all_log",0);
  uStack_108 = *(undefined8 *)(param_1 + 8);
  local_110 = *(undefined8 *)param_1;
  uStack_f8 = *(undefined8 *)(param_1 + 0x18);
  uStack_100 = *(undefined8 *)(param_1 + 0x10);
  uStack_d8 = *(undefined8 *)(param_1 + 0x38);
  local_e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_c8 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = *(undefined8 *)(param_1 + 0x28);
  local_f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_8c = *(undefined8 *)(param_1 + 0x84);
  uStack_a8 = *(undefined8 *)(param_1 + 0x68);
  local_b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_b8 = *(undefined8 *)(param_1 + 0x58);
  local_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_90 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20);
  uStack_98 = (undefined4)*(undefined8 *)(param_1 + 0x78);
  local_94 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  if (iVar8 != 0) {
    uVar4 = (ulong)uStack_8c >> 0x20;
    uStack_8c = CONCAT44((int)uVar4,iVar8);
  }
  puVar14 = (undefined8 *)(this + 0x28);
  puVar11 = (undefined8 *)*puVar14;
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = puVar11;
    do {
      if (*(uint *)(puVar12 + 4) <= *(uint *)param_1) {
        if (*(uint *)param_1 <= *(uint *)(puVar12 + 4)) {
          uVar1 = 0x11e991;
          goto joined_r0x00212ff8;
        }
        puVar12 = puVar12 + 1;
      }
      puVar12 = (undefined8 *)*puVar12;
    } while (puVar12 != (undefined8 *)0x0);
  }
  gettimeofday(&local_120,(__timezone_ptr_t)0x0);
  lVar7 = local_120.tv_usec;
  lVar6 = local_120.tv_sec;
  if (((*PTR_instance_0043f088 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_instance_0043f088), iVar8 != 0)) {
                    /* try { // try from 00213284 to 0021328f has its CatchHandler @ 002132c0 */
    MiLOGMgr::MiLOGMgr((MiLOGMgr *)PTR_instance_0043f400);
    __cxa_atexit(PTR__MiLOGMgr_0043eef0,PTR_instance_0043f400,&PTR_LOOP_00430b20);
    __cxa_guard_release(PTR_instance_0043f088);
  }
  *(undefined4 *)(PTR_instance_0043f400 + 0xc) = *(undefined4 *)(param_1 + 0x88);
  uVar9 = iMiAEC::CreateMiAEC((MultiCamInfo *)(this + 0x60),(iMiAECCreateInfo *)&local_110);
  puVar11 = puVar14;
  puVar12 = puVar14;
  if (*(undefined8 **)(this + 0x28) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(this + 0x28);
    puVar12 = (undefined8 *)(this + 0x28);
    do {
      while (puVar11 = puVar13, *(uint *)(puVar11 + 4) <= *(uint *)param_1) {
        if (*(uint *)param_1 <= *(uint *)(puVar11 + 4)) goto LAB_00213010;
        puVar12 = puVar11 + 1;
        puVar13 = (undefined8 *)*puVar12;
        if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_00213010;
      }
      puVar13 = (undefined8 *)*puVar11;
      puVar12 = puVar11;
    } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
  }
LAB_00213010:
  puVar13 = (undefined8 *)*puVar12;
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)operator_new(0x30);
    uVar1 = *(undefined4 *)param_1;
    puVar13[5] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = puVar11;
    *(undefined4 *)(puVar13 + 4) = uVar1;
    *puVar12 = puVar13;
    puVar11 = puVar13;
    if (**(long **)(this + 0x20) != 0) {
      *(long *)(this + 0x20) = **(long **)(this + 0x20);
      puVar11 = (undefined8 *)*puVar12;
    }
    std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)puVar11);
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  }
  puVar13[5] = uVar9;
  puVar5 = PTR_gSensorOpenedMask_0043f9b8;
  *(uint *)PTR_gSensorOpenedMask_0043f9b8 =
       *(uint *)PTR_gSensorOpenedMask_0043f9b8 | 1 << (ulong)(*(uint *)param_1 & 0x1f);
  lVar10 = __strrchr_chk("/./../../src/MiAECMgr.cpp",0x2f,0x1a);
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x10),2,4,'I',(char *)(lVar10 + 1),0x7e,"CreateMiAEC",
             "MiAECMgr creation camera_Id (%u) openMask(%d) loglevel(0x%x)",*(undefined4 *)param_1,
             *(undefined4 *)puVar5,(undefined4)uStack_8c);
  lVar10 = __strrchr_chk("/./../../src/MiAECMgr.cpp",0x2f,0x1a);
  uVar1 = *(undefined4 *)param_1;
  gettimeofday(&local_120,(__timezone_ptr_t)0x0);
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x10),2,4,'I',(char *)(lVar10 + 1),0x7f,"CreateMiAEC",
             "MiAEC_Init. CameraId [%u] cost time %fms",
             ((double)local_120.tv_sec * 1000.0 + (double)local_120.tv_usec / 1000.0) -
             ((double)lVar6 * 1000.0 + (double)lVar7 / 1000.0),uVar1);
  puVar11 = *(undefined8 **)(this + 0x28);
  uVar1 = 0;
joined_r0x00212ff8:
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*puVar14;
    puVar12 = puVar14;
  }
  else {
    puVar12 = (undefined8 *)(this + 0x28);
    do {
      while (puVar14 = puVar11, *(uint *)param_1 < *(uint *)(puVar14 + 4)) {
        puVar11 = (undefined8 *)*puVar14;
        puVar12 = puVar14;
        if ((undefined8 *)*puVar14 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)*puVar14;
          goto joined_r0x002131c0;
        }
      }
      if (*(uint *)param_1 <= *(uint *)(puVar14 + 4)) break;
      puVar12 = puVar14 + 1;
      puVar11 = (undefined8 *)*puVar12;
    } while ((undefined8 *)*puVar12 != (undefined8 *)0x0);
    puVar11 = (undefined8 *)*puVar12;
  }
joined_r0x002131c0:
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)operator_new(0x30);
    uVar2 = *(undefined4 *)param_1;
    puVar11[5] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = puVar14;
    *(undefined4 *)(puVar11 + 4) = uVar2;
    *puVar12 = puVar11;
    puVar14 = puVar11;
    if (**(long **)(this + 0x20) != 0) {
      *(long *)(this + 0x20) = **(long **)(this + 0x20);
      puVar14 = (undefined8 *)*puVar12;
    }
    std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)puVar14);
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  }
  *param_2 = (iMiAEC *)puVar11[5];
  std::__1::recursive_mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x116748 MiAEC @ 00216748

/* MI_AEC::MiAEC::MiAEC(MI_AEC::MultiCamInfo*, MI_AEC::iMiAEC::iMiAECCreateInfo const&) */

void __thiscall MI_AEC::MiAEC::MiAEC(MiAEC *this,MultiCamInfo *param_1,iMiAECCreateInfo *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  FlowController *pFVar6;
  undefined *puVar7;
  TuningDataMgr *this_00;
  DataCenter *this_01;
  iMiAECCreateInfo *piVar8;
  FlowController **ppFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  DataCenterCreateInfo aDStack_178 [127];
  undefined local_f9;
  undefined4 local_f8;
  undefined4 local_f4;
  TuningDataMgrCreateInfo aTStack_f0 [127];
  undefined local_71;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined **)this = PTR_vtable_0043ee90 + 0x10;
  uVar10 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 8) = uVar10;
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar14 = *(undefined8 *)(param_2 + 0x28);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(this + 0x48) = uVar10;
  *(undefined8 *)(this + 0x40) = uVar12;
  *(undefined8 *)(this + 0x38) = uVar11;
  *(undefined8 *)(this + 0x30) = uVar14;
  *(undefined8 *)(this + 0x28) = uVar13;
  *(undefined8 *)(this + 0x20) = uVar16;
  *(undefined8 *)(this + 0x18) = uVar15;
  uVar10 = *(undefined8 *)(param_2 + 0x7c);
  uVar14 = *(undefined8 *)(param_2 + 0x68);
  uVar13 = *(undefined8 *)(param_2 + 0x60);
  uVar12 = *(undefined8 *)(param_2 + 0x78);
  uVar11 = *(undefined8 *)(param_2 + 0x70);
  uVar16 = *(undefined8 *)(param_2 + 0x58);
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(this + 0x8c) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(this + 0x84) = uVar10;
  *(undefined8 *)(this + 0x80) = uVar12;
  *(undefined8 *)(this + 0x78) = uVar11;
  *(undefined8 *)(this + 0x70) = uVar14;
  *(undefined8 *)(this + 0x68) = uVar13;
  *(undefined8 *)(this + 0x60) = uVar16;
  *(undefined8 *)(this + 0x58) = uVar15;
  uVar1 = *(uint *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)param_2;
  *(uint *)(this + 0x98) = uVar1;
  *(undefined4 *)(this + 0x9c) = uVar2;
  if ((uVar1 >> 7 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_instance_0043f400;
    if (((*PTR_instance_0043f088 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_instance_0043f088), puVar7 = PTR_instance_0043f400,
       iVar4 != 0)) {
                    /* try { // try from 002169ac to 002169b7 has its CatchHandler @ 002169ec */
      MiLOGMgr::MiLOGMgr((MiLOGMgr *)PTR_instance_0043f400);
      puVar7 = PTR_instance_0043f400;
      __cxa_atexit(PTR__MiLOGMgr_0043eef0,PTR_instance_0043f400,&PTR_LOOP_00430b20);
      __cxa_guard_release(PTR_instance_0043f088);
    }
  }
  *(undefined **)(this + 0xa0) = puVar7;
  *(undefined **)this = PTR_vtable_0043eb70 + 0x10;
  ppFVar9 = (FlowController **)(this + 0xa8);
  *ppFVar9 = (FlowController *)0x0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
                    /* try { // try from 00216828 to 0021682f has its CatchHandler @ 00216a40 */
  std::__1::recursive_mutex::recursive_mutex((recursive_mutex *)(this + 0xc0));
                    /* try { // try from 00216830 to 00216837 has its CatchHandler @ 00216a38 */
  std::__1::recursive_mutex::lock();
                    /* try { // try from 00216838 to 00216887 has its CatchHandler @ 00216a44 */
  lVar5 = __strrchr_chk("/./../../src/MiAEC.cpp",0x2f,0x17);
  piVar8 = param_2 + 4;
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)(this + 0x98),1,3,'D',(char *)(lVar5 + 1),0x18,"MiAEC",
             "sensor name: %s, camera_Id: %u",piVar8,*(undefined4 *)param_2);
  local_6c = *(undefined4 *)param_2;
  local_70 = *(undefined4 *)(param_2 + 0x84);
                    /* try { // try from 00216898 to 002168af has its CatchHandler @ 00216a34 */
  __strncpy_chk2(aTStack_f0,piVar8,0x80,0x80,0x80);
  local_71 = 0;
  local_f4 = *(undefined4 *)param_2;
  local_f8 = *(undefined4 *)(param_2 + 0x84);
                    /* try { // try from 002168c4 to 00216903 has its CatchHandler @ 00216a48 */
  __strncpy_chk2(aDStack_178,piVar8,0x80,0x80,0x80);
  local_f9 = 0;
  this_00 = *(TuningDataMgr **)(this + 0xb8);
  if (this_00 == (TuningDataMgr *)0x0) {
    this_00 = (TuningDataMgr *)operator_new(0x7128);
                    /* try { // try from 00216908 to 0021690f has its CatchHandler @ 00216a24 */
    TuningDataMgr::TuningDataMgr(this_00,aTStack_f0);
    *(TuningDataMgr **)(this + 0xb8) = this_00;
    this_01 = *(DataCenter **)(this + 0xb0);
  }
  else {
    this_01 = *(DataCenter **)(this + 0xb0);
  }
  if (this_01 == (DataCenter *)0x0) {
                    /* try { // try from 0021691c to 00216927 has its CatchHandler @ 00216a48 */
    this_01 = (DataCenter *)operator_new(0x13b630);
                    /* try { // try from 0021692c to 0021693b has its CatchHandler @ 00216a14 */
    DataCenter::DataCenter(this_01,param_1,this_00,aDStack_178);
    *(DataCenter **)(this + 0xb0) = this_01;
    pFVar6 = *ppFVar9;
  }
  else {
    pFVar6 = *ppFVar9;
  }
  if (pFVar6 == (FlowController *)0x0) {
                    /* try { // try from 00216948 to 0021694f has its CatchHandler @ 00216a48 */
    pFVar6 = (FlowController *)operator_new(0x7658);
                    /* try { // try from 00216958 to 0021695f has its CatchHandler @ 00216a04 */
    FlowController::FlowController(pFVar6,this_01,*(TuningDataMgr **)(this + 0xb8));
    *ppFVar9 = pFVar6;
  }
  std::__1::recursive_mutex::unlock();
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0x11ac74 RunMetering @ 0021ac74

/* MI_AEC::FlowController::RunMetering(MI_AEC::StreamProcInput const*) */

void __thiscall MI_AEC::FlowController::RunMetering(FlowController *this,StreamProcInput *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  FlowController FVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  float *pfVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 local_c4;
  StartUpInfo local_c0;
  undefined local_bf;
  undefined local_be;
  undefined local_bd;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  long local_b0;
  long lStack_a8;
  undefined4 local_a0;
  StartExposureSet aSStack_98 [4];
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  long local_80;
  
  uVar21 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  lVar9 = *(long *)(this + 0x10);
  iVar7 = *(int *)(lVar9 + 0xfd90);
  uVar1 = *(uint *)(lVar9 + 0xfc90);
  uVar2 = *(uint *)(lVar9 + 0xfc94);
  lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
  uVar12 = CONCAT44(uVar21,uVar1);
  iVar15 = iVar7;
  uVar18 = uVar2;
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)this,0,2,'V',(char *)(lVar9 + 1),0x51b,"RunMetering",
             "Metering type: %d, exposure type: %d, pre exposure type: %d",iVar7,uVar12,uVar2);
  if ((iVar7 == 0) && (uVar1 != 0)) {
    lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,3,5,'W',(char *)(lVar9 + 1),0x520,"RunMetering",
               "Metering disabled but it\'s under dynamic/independent multi-cam mode, skip Processing"
               ,iVar15,uVar12,uVar18);
    goto LAB_0021b3ac;
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if ((uVar1 < 2) || ((uVar1 == 2 && (uVar2 != 2)))) {
    bVar5 = (uVar2 | *(byte *)(*(long *)(this + 0x7648) + 0x2168)) == 0;
    local_bf = bVar5 && 1 < uVar1;
    uVar2 = (uint)(byte)local_bf;
    if ((uVar1 < 2) || (bVar5)) {
      uVar18 = (uint)(*(char *)(*(long *)(this + 0x7648) + 0x6058) != '\0');
    }
    else {
      uVar18 = 0;
    }
    local_be = (undefined)uVar18;
    if (*(int *)(this + 0x4124) == 2) {
      local_bd = true;
    }
    else {
      local_bd = param_1[0x518] != (StreamProcInput)0x0;
    }
    local_bc = *(undefined4 *)(*(long *)(this + 0x10) + 0x968);
    local_c0 = (StartUpInfo)(uVar1 < 2);
    local_b8 = (**(code **)(**(long **)(this + 0x28) + 0x60))();
    uVar21 = (undefined4)((ulong)uVar12 >> 0x20);
    lStack_a8 = *(long *)(this + 0x10);
    local_b4 = *(undefined4 *)(lStack_a8 + 0x1c28);
    local_b0 = lStack_a8 + 0xfd94;
    lStack_a8 = lStack_a8 + 0x18dc;
    local_a0 = *(undefined4 *)(this + 0x7638);
    lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
    uVar12 = CONCAT44(uVar21,uVar2);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,2,4,'I',(char *)(lVar9 + 1),0x539,"RunMetering",
               "Stream start up, is follow %d, is dynamic follow %d, sync conv out %d",
               (uint)(uVar1 < 2),uVar12,uVar18);
    StartupSync::FindStartExposureIndex(*(StartupSync **)(this + 0x48),&local_c0,aSStack_98);
    lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,2,4,'I',(char *)(lVar9 + 1),0x541,"RunMetering",
               "sync exposure index, lux %f, tar %f, %f, %f",(double)local_94,(double)local_90,
               (double)local_88,(double)fStack_8c);
    if (uVar1 != 1) {
      this[0xa6] = (FlowController)0x1;
      uVar22 = DAT_003af710;
      lVar9 = *(long *)(this + 0x10);
      if (*(char *)(*(long *)(this + 0x48) + 0xad) == '\0') {
        *(undefined *)(lVar9 + 0x60f4) = 0;
        *(undefined8 *)(lVar9 + 0x60ec) = 0;
        this[0x47ed] = (FlowController)0x0;
        lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
        FVar10 = this[0x47ed];
        pcVar8 = "start update face none, m_start_lock_count %d";
        iVar7 = 0x551;
      }
      else {
        *(undefined *)(lVar9 + 0x60f4) = 0;
        *(undefined8 *)(lVar9 + 0x60ec) = uVar22;
        this[0x47ed] = SUB41(*(undefined4 *)(*(long *)(this + 0x7648) + 0x627c),0);
        lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
        FVar10 = this[0x47ed];
        pcVar8 = "start update face stable, m_start_lock_count %d";
        iVar7 = 0x54b;
      }
      MI_LOG::MI_LOG_HELPER
                ((MI_LOG *)this,0,2,'V',(char *)(lVar9 + 1),iVar7,"RunMetering",pcVar8,
                 (int)(char)FVar10);
      uVar21 = (undefined4)((ulong)uVar12 >> 0x20);
      lVar9 = *(long *)(this + 0x48);
      if (*(char *)(lVar9 + 0xac) != '\0') {
        lVar17 = *(long *)(*(DataCenter **)(this + 0x10) + 0xfda0) +
                 (ulong)*(uint *)(lVar9 + 0xa0) * 0x68;
        DataCenter::UpdateDeflickerAdjust
                  (*(DataCenter **)(this + 0x10),*(bool *)(lVar17 + 0x40),true,
                   *(bool *)(lVar17 + 0x41));
        lVar9 = *(long *)(this + 0x10);
        local_c4 = *(undefined4 *)((long)&__DT_SYMTAB[0x1ae5].st_size + lVar9);
        (**(code **)(**(long **)(this + 0x18) + 0x18))
                  (*(undefined4 *)(lVar9 + 0x94c),*(undefined4 *)(lVar9 + 0x950),
                   *(undefined4 *)(lVar9 + 0x954),*(undefined4 *)(lVar9 + 0x958),
                   *(long **)(this + 0x18),&local_c4,lVar9 + 0x978,&local_90,
                   *(undefined *)(lVar9 + 0x1715));
        lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
        uVar12 = CONCAT44(uVar21,(uint)*(byte *)(lVar17 + 0x41));
        MI_LOG::MI_LOG_HELPER
                  ((MI_LOG *)this,2,4,'I',(char *)(lVar9 + 1),0x55d,"RunMetering",
                   "start update deflicker adjust, is_aec_stable %d, is_deflicker_adjust %d",
                   (uint)*(byte *)(lVar17 + 0x40),uVar12);
        lVar9 = *(long *)(this + 0x48);
      }
      if (*(float *)(lVar9 + 0xb0) <= 0.0) {
        (**(code **)(**(long **)(this + 0x18) + 0x20))(0x41900000);
        this[0x47ee] = (FlowController)0x0;
        lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
        MI_LOG::MI_LOG_HELPER
                  ((MI_LOG *)this,0,2,'V',(char *)(lVar9 + 1),0x569,"RunMetering",
                   "start update albedo value 18, m_albedo_lock_count %d",(int)(char)this[0x47ee]);
      }
      else {
        (**(code **)(**(long **)(this + 0x18) + 0x20))();
        this[0x47ee] = (FlowController)0xa;
        lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
        MI_LOG::MI_LOG_HELPER
                  ((MI_LOG *)this,0,2,'V',(char *)(lVar9 + 1),0x563,"RunMetering",
                   "start update albedo value %f, m_albedo_lock_count %d",
                   (double)*(float *)(*(long *)(this + 0x48) + 0xb0),(int)(char)this[0x47ee]);
      }
      *(float *)(this + 0x278) = local_88;
      *(ulong *)(this + 0x270) = CONCAT44(fStack_8c,local_90);
      if (1e-06 <= ABS(*(float *)(*(long *)(this + 0x7648) + 0x6284))) {
        *(float *)(this + 0x240) = local_94;
        *(float *)(this + 0x244) = local_94;
        *(undefined4 *)(this + 0x3c0c) = local_84;
        this[0x3bf0] = this[0xa6];
        goto LAB_0021b3ac;
      }
    }
    lVar17 = *(long *)(this + 0x10);
    uVar2 = *(uint *)(*(long *)(this + 0x48) + 0xa0);
    lVar11 = *(long *)(lVar17 + 0xfda0);
    lVar9 = 0;
    if (*(FlowController *)(lVar17 + 0xfc98) != (FlowController)0x0) {
      lVar9 = lVar17 + 0xfca0;
    }
    this[0x160] = *(FlowController *)(lVar17 + 0xfc98);
    *(long *)(this + 0x158) = lVar9;
    *(undefined4 *)(this + 0x180) = *(undefined4 *)(lVar17 + 0x60f8);
    lVar11 = lVar11 + (ulong)uVar2 * 0x68;
    *(undefined4 *)(this + 0x188) = *(undefined4 *)(lVar17 + 0x18e8);
    *(float *)(this + 0x164) = local_94;
    *(undefined4 *)(this + 0x17c) = local_84;
    *(float *)(this + 0x174) = *(float *)(lVar11 + 0x14) / *(float *)(lVar11 + 0xc);
    *(float *)(this + 0x178) = *(float *)(lVar11 + 0x10) / *(float *)(lVar11 + 0x14);
    *(float *)(this + 0x170) = local_88;
    *(ulong *)(this + 0x168) = CONCAT44(fStack_8c,local_90);
  }
  uVar21 = (undefined4)((ulong)uVar12 >> 0x20);
  lVar9 = DataCenter::QueryFrameFromHistory
                    (*(DataCenter **)(this + 0x10),(uchar)(*(DataCenter **)(this + 0x10))[0x8d0]);
  lVar17 = DataCenter::QueryFrameFromHistory(*(DataCenter **)(this + 0x10),'\0');
  puVar6 = (undefined8 *)DataCenter::QueryFrameFromHistory(*(DataCenter **)(this + 0x10),'\x01');
  FVar10 = (FlowController)((char)this[0x47ed] + -1);
  if ((char)this[0x47ed] < '\x01') {
    bVar5 = false;
    FVar10 = (FlowController)0x0;
  }
  else {
    bVar5 = *(int *)(*(long *)(this + 0x10) + 0x1950) == 0;
    if (!bVar5) {
      FVar10 = (FlowController)0x0;
    }
  }
  iVar15 = *(int *)(this + 0x47e8);
  this[0x47ed] = FVar10;
  iVar7 = iVar15 + -1;
  if (iVar15 < 1) {
    iVar7 = 0;
  }
  *(int *)(this + 0x47e8) = iVar7;
  if ((((bVar5) || (0 < iVar15)) || (this[0x47e0] != (FlowController)0x0)) ||
     ((*(char *)(lVar17 + 0x81) != '\0' || (*(char *)(lVar9 + 0x81) != '\0')))) {
    uVar21 = *(undefined4 *)(puVar6 + 0xe);
    *(undefined4 *)(this + 0x240) = uVar21;
    *(undefined4 *)(this + 0x244) = uVar21;
    uVar12 = *puVar6;
    *(undefined4 *)(this + 0x278) = *(undefined4 *)(puVar6 + 1);
    *(undefined8 *)(this + 0x270) = uVar12;
    *(undefined4 *)(this + 0x3bd8) = *(undefined4 *)((long)puVar6 + 0xa6);
    *(undefined4 *)(this + 0x3c0c) = *(undefined4 *)((long)puVar6 + 0xb3);
    lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,2,4,'I',(char *)(lVar9 + 1),0x5a4,"RunMetering",
               "skip metering, lux %f, tar %f, %f, %f, etr_short:%f",
               (double)*(float *)(this + 0x240),(double)*(float *)(this + 0x270),
               (double)*(float *)(this + 0x278),(double)*(float *)(this + 0x274),
               (double)*(float *)(this + 0x3bd8));
    goto LAB_0021b3ac;
  }
  if (this[0x47da] != (FlowController)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0x38))(*(long **)(this + 0x38),this + 0x270);
    lVar9 = *(long *)(this + 0x10);
    fVar19 = *(float *)(this + 0x270) - *(float *)(lVar9 + 0x968);
    *(float *)(this + 0x270) = fVar19;
    *(float *)(this + 0x274) = *(float *)(this + 0x274) - *(float *)(lVar9 + 0x968);
    fVar24 = *(float *)(lVar9 + 0x968);
    *(float *)(this + 0x3bd8) = fVar19;
    fVar24 = *(float *)(this + 0x278) - fVar24;
    *(float *)(this + 0x278) = fVar24;
    *(float *)(this + 0x240) = fVar24;
    *(float *)(this + 0x244) = fVar24;
    lVar9 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,2,4,'I',(char *)(lVar9 + 1),0x5b7,"RunMetering",
               "torch off skip metering, tar %f, %f, %f",(double)*(float *)(this + 0x270),
               (double)*(float *)(this + 0x278),(double)*(float *)(this + 0x274));
    goto LAB_0021b3ac;
  }
  *(StreamProcInput **)(this + 0x50) = param_1 + 8;
  lVar11 = *(long *)(this + 0x10);
  *(long *)(this + 0x58) = lVar11 + 0x18b4;
  uVar12 = *(undefined8 *)((long)puVar6 + 0x24);
  *(undefined4 *)(this + 0x20c) = *(undefined4 *)((long)puVar6 + 0x2c);
  *(undefined8 *)(this + 0x204) = uVar12;
  *(undefined8 **)(this + 0x60) = puVar6;
  *(long *)(this + 0x68) = (long)puVar6 + 0xc;
  *(long *)(this + 0x98) = lVar9 + 0xc;
  *(long *)(this + 0x230) = (long)puVar6 + 0xb3;
  *(undefined8 **)(this + 0x70) = puVar6 + 0xe;
  *(undefined8 **)(this + 0x78) = puVar6 + 0xd;
  *(long *)(this + 0x88) = lVar11 + 0xfe28;
  *(undefined8 **)(this + 400) = puVar6;
  *(undefined4 *)(this + 0x1f8) = *(undefined4 *)((long)puVar6 + 0xa6);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(lVar9 + 0x54);
  this[0xa4] = (FlowController)0x0;
  this[0xa5] = (FlowController)(*(int *)(this + 0x46c0) == 1);
  uVar20 = *(undefined4 *)(lVar11 + 0x904);
  *(long *)(this + 0xb0) = lVar11 + 0xee8;
  *(long *)(this + 0xb8) = lVar11 + 0x60c8;
  *(long *)(this + 0xc0) = lVar11 + 0x5c40;
  *(undefined4 *)(this + 0xa8) = uVar20;
  *(long *)(this + 200) = lVar11 + 0x1c10;
  *(long *)(this + 0xd0) = lVar11 + 0x1938;
  *(undefined4 *)(this + 0x1b8) = *(undefined4 *)(this + 0x5348);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(lVar11 + 0x900);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(lVar11 + 0x8e8);
  uVar20 = (**(code **)(**(long **)(this + 0x28) + 0x60))();
  *(undefined4 *)(this + 0xf0) = uVar20;
  lVar11 = *(long *)(this + 0x10);
  *(uint *)(this + 0x184) = uVar1;
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0x46b4);
  *(long *)(this + 0x100) = lVar11 + 0x978;
  *(long *)(this + 0x150) = lVar11 + 0xfe14;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(lVar9 + 0x44);
  *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(lVar9 + 0x70);
  *(short *)(this + 0xf8) = (short)*(undefined4 *)(param_1 + 0x534);
  this[0xfa] = *(FlowController *)(param_1 + 0x531);
  this[300] = *(FlowController *)(param_1 + 0x555);
  uVar22 = *(undefined8 *)(param_1 + 0x548);
  uVar12 = *(undefined8 *)(param_1 + 0x540);
  *(long *)(this + 0x108) = lVar11 + 0x940;
  *(undefined8 *)(this + 0xe0) = uVar22;
  *(undefined8 *)(this + 0xd8) = uVar12;
  uVar12 = NEON_rev64(*(undefined8 *)(lVar11 + 0x8f0),4);
  *(undefined8 *)(this + 0x110) = uVar12;
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(lVar11 + 0x94c);
  lVar11 = (**(code **)(**(long **)(this + 0x28) + 0x50))();
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(lVar11 + 0x24);
  lVar11 = (**(code **)(**(long **)(this + 0x28) + 0x50))();
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(lVar11 + 0x20);
  lVar11 = (**(code **)(**(long **)(this + 0x28) + 0x50))();
  lVar13 = *(long *)(this + 0x10);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(lVar11 + 0xc);
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(lVar13 + 0x8e0);
  this[0x12d] = *(FlowController *)(lVar13 + 0x1715);
  *(int *)(this + 0x130) = (int)*(undefined8 *)(lVar13 + 0xb74);
  this[0x134] = (FlowController)(*(byte *)(lVar13 + 0xb79) & 1);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(lVar13 + 0x1c28);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(lVar13 + 0x1c30);
  *(undefined8 *)(this + 0x140) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(lVar13 + 0x5c38);
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(lVar13 + 0x8f8);
  *(undefined4 *)(this + 0x1f0) = *(undefined4 *)(param_1 + 0x550);
  this[0x23c] = *(FlowController *)(lVar9 + 0xb7);
  lVar11 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
  uVar22 = CONCAT44(uVar21,*(undefined4 *)(this + 0x1f0));
  MI_LOG::MI_LOG_HELPER
            ((MI_LOG *)this,0,2,'V',(char *)(lVar11 + 1),0x5fb,"RunMetering",
             "IR_ratio%f, out_door_prob:%f, flicker_adjust:%d, asd_indoor:%d",
             (double)*(float *)(this + 0x14c),(double)*(float *)(this + 0x110),
             (uint)(byte)this[0x12d],uVar22);
  lVar11 = *(long *)(this + 0x10);
  *(undefined4 *)(this + 0x198) = *(undefined4 *)(lVar11 + 0x622c);
  uVar12 = *(undefined8 *)(lVar11 + 0x1928);
  *(undefined8 *)(this + 0x1a8) = *(undefined8 *)(lVar11 + 0x1930);
  *(undefined8 *)(this + 0x1a0) = uVar12;
  this[0x1bc] = *(FlowController *)(*(long *)(this + 0x40) + 0x1b0);
  this[0x1b0] = this[0x47c0];
  *(undefined8 *)(this + 0x1e8) = *(undefined8 *)(lVar9 + 0x89);
  iVar7 = *(int *)(param_1 + 0x540);
  if (iVar7 < 0x15) {
    iVar7 = 0x14;
  }
  *(int *)(this + 500) = iVar7 + -0x14;
  this[0x1fc] = *(FlowController *)(*(long *)(this + 0x40) + 0x1b1);
  *(undefined4 *)(this + 0x200) = *(undefined4 *)((long)&__DT_SYMTAB[0x1ae5].st_value + lVar11);
  uVar21 = StartupSync::CalculateExpIdxFromLightSensor
                     (*(StartupSync **)(this + 0x48),*(float *)(lVar11 + 0x18e0));
  lVar11 = *(long *)(this + 0x10);
  *(undefined4 *)(this + 0x210) = uVar21;
  *(undefined4 *)(this + 0x218) = *(undefined4 *)((long)&__DT_SYMTAB[0x1ae5].st_size + lVar11);
  if (this[0x47c0] != (FlowController)0x0) {
    *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(this + 0x47c8);
  }
  uVar23 = *(undefined8 *)((long)&__DT_SYMTAB[0x1b07].st_name + lVar11);
  uVar12 = *(undefined8 *)((long)&__DT_SYMTAB[0x1b06].st_size + lVar11);
  *(undefined8 *)(this + 0x1d0) = *(undefined8 *)((long)&__DT_SYMTAB[0x1b07].st_value + lVar11);
  *(undefined8 *)(this + 0x1c8) = uVar23;
  *(undefined8 *)(this + 0x1c0) = uVar12;
  if ('\0' < (char)this[0x47ee]) {
    this[0x47ee] = (FlowController)((char)this[0x47ee] + -1);
    fVar19 = *(float *)(*(long *)(this + 0x48) + 0xb0);
    this[0x1fc] = (FlowController)0x0;
    *(int *)(this + 0x1c4) = (int)fVar19;
    *(int *)(this + 0x1c0) = (int)fVar19;
    lVar11 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,0,2,'V',(char *)(lVar11 + 1),0x613,"RunMetering",
               "during startup albedo lock, reset albedo to %d",*(undefined4 *)(this + 0x1c4),uVar22
              );
  }
  lVar13 = *(long *)(this + 0x10);
  bVar5 = *(int *)((long)&__DT_SYMTAB[0x1ada].st_name + lVar13) != 0;
  lVar11 = 0;
  if (bVar5) {
    lVar11 = lVar13 + 0x12d59e;
  }
  *(long *)(this + 0xac8) = lVar11;
  lVar11 = 0;
  if (bVar5) {
    lVar11 = lVar13 + 0xec6e9;
  }
  *(long *)(this + 0xad0) = lVar11;
  *(long *)(this + 0x1d8) = lVar13 + 0x6640;
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(this + 0x534c);
  *(undefined4 *)(this + 0x21c) = *(undefined4 *)(lVar9 + 0xae);
  this[0x220] = this[0x46dd];
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(lVar9 + 0x24);
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(lVar9 + 0x30);
  *(undefined4 *)(this + 0x238) = *(undefined4 *)(lVar13 + 0xb10);
  (**(code **)(**(long **)(this + 0x18) + 0x10))
            (*(long **)(this + 0x18),this + 0x50,(MeteringOutput *)(this + 0x240));
  lVar11 = *(long *)(this + 0x7648);
  fVar24 = *(float *)(this + 0xa9c);
  pfVar14 = *(float **)(lVar11 + 0x33c0);
  uVar16 = *(long *)(lVar11 + 0x33c8) - (long)pfVar14;
  fVar19 = -1.0;
  if (uVar16 != 0) {
    iVar7 = (int)(uVar16 >> 2);
    if (pfVar14[((long)uVar16 >> 2) + -1] <= fVar24) {
      uVar16 = (ulong)(iVar7 - 1);
LAB_0021b96c:
      iVar15 = (int)uVar16;
      fVar19 = -1.0;
      if (iVar15 == -1) goto joined_r0x0021b9fc;
    }
    else {
      fVar19 = *pfVar14;
      if ((fVar19 < fVar24) && (0 < (int)(iVar7 - 1U))) {
        uVar16 = 0;
        while( true ) {
          if ((fVar19 <= fVar24) && (fVar24 < pfVar14[uVar16 + 1])) goto LAB_0021b96c;
          if ((ulong)(iVar7 - 1U) - 1 == uVar16) break;
          fVar19 = pfVar14[uVar16 + 1];
          uVar16 = uVar16 + 1;
        }
      }
      iVar15 = 0;
    }
    lVar13 = (long)iVar15;
    if (iVar15 == iVar7 + -1) {
      fVar19 = *(float *)(*(long *)(lVar11 + 0x33d8) + lVar13 * 4);
    }
    else {
      uVar16 = -(ulong)(iVar15 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar15 + 1U) << 2;
      fVar26 = *(float *)(*(long *)(lVar11 + 0x33d8) + lVar13 * 4);
      dVar25 = (double)NEON_fminnm((double)((fVar24 - pfVar14[lVar13]) /
                                           (*(float *)((long)pfVar14 + uVar16) - pfVar14[lVar13])),
                                   0x3ff0000000000000);
      fVar19 = (float)dVar25;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar19 = fVar26 + (*(float *)(*(long *)(lVar11 + 0x33d8) + uVar16) - fVar26) * fVar19;
    }
  }
joined_r0x0021b9fc:
  if (((((fVar19 < fVar24) && (*(float *)(lVar11 + 0x3fc) < *(float *)(lVar9 + 100))) &&
       (*(int *)(this + 0x4124) != 2)) &&
      ((param_1[0x518] != (StreamProcInput)0x1 && (this[0xa5] != (FlowController)0x0)))) &&
     (*(char *)(*(long *)(this + 0x10) + 0x18dc) != '\0')) {
    fVar24 = (float)StartupSync::CalculateExpIdxFromLightSensor
                              (*(StartupSync **)(this + 0x48),
                               *(float *)(*(long *)(this + 0x10) + 0x18e0));
    fVar19 = *(float *)(this + 0x240) + fVar19 * (fVar24 - *(float *)(this + 0x240));
    *(float *)(this + 0x240) = fVar19;
    *(float *)(this + 0x244) = fVar19;
    lVar11 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,0,2,'V',(char *)(lVar11 + 1),0x637,"RunMetering",
               "lux index from light sensor:%f, output:%f, bright_ratio:%f",(double)fVar24,
               (double)*(float *)(this + 0x240),(double)*(float *)(this + 0xa9c));
  }
  this[0x3bf0] = this[0xa6];
  uVar21 = CalculateEvAdjustRatio
                     (this,(ConvergenceOutput *)(this + 0x3d60),(MeteringOutput *)(this + 0x240),
                      *(MiDebug_Mtr **)(this + 0xac8));
  *(undefined4 *)(this + 0x3b98) = uVar21;
  cVar3 = *(char *)(*(long *)(this + 0x7650) + 0x268);
  lVar11 = __strrchr_chk("/./../../src/FlowController.cpp",0x2f,0x20);
  if (cVar3 == '\0') {
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,2,4,'I',(char *)(lVar11 + 1),0x655,"RunMetering",
               "m_mtr_out:CamID:%d, Frame:%lu, lock: %d, snapshot: %d, Lux:%0.3f, LuxOri%0.3f, Luma(Final:%f, Avg:%f, Face:%f,), Targets(Short:%f, mid:%f, long:%f,) ExpIndex(,%0.2f, %0.2f, %0.2f,),fps:%f, bv:%.3f"
               ,(double)*(float *)(this + 0x240),(double)*(float *)(this + 0x244),
               (double)*(float *)(this + 0x248),(double)*(float *)(this + 0x24c),
               (double)*(float *)(this + 600),(double)*(float *)(this + 0x264),
               (double)*(float *)(this + 0x26c),(double)*(float *)(this + 0x268),
               *(undefined4 *)(*(long *)(this + 0x10) + 0xfc8c),*(undefined8 *)param_1,
               *(undefined4 *)(this + 0x46c0),
               (uint)(*(byte *)(lVar9 + 0x81) | *(byte *)(lVar17 + 0x81)),
               (double)*(float *)(this + 0x270),(double)*(float *)(this + 0x278),
               (double)*(float *)(this + 0x274),(double)*(float *)(*(long *)(this + 0x10) + 0x8e8),
               (double)*(float *)(this + 0x3c0c));
  }
  else {
    MI_LOG::MI_LOG_HELPER
              ((MI_LOG *)this,2,4,'I',(char *)(lVar11 + 1),0x63d,"RunMetering","Hard lock metering")
    ;
    lVar9 = *(long *)(this + 0x7650);
    *(undefined4 *)(this + 0x270) = *(undefined4 *)(lVar9 + 0x280);
    *(undefined4 *)(this + 0x278) = *(undefined4 *)(lVar9 + 0x298);
    *(undefined4 *)(this + 0x274) = *(undefined4 *)(lVar9 + 0x2b0);
  }
LAB_0021b3ac:
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x116ce0 StreamExposureProc @ 00216ce0

/* MI_AEC::MiAEC::StreamExposureProc(MI_AEC::StreamProcInput const*, MI_AEC::StreamProcOutput*) */

undefined4 __thiscall
MI_AEC::MiAEC::StreamExposureProc(MiAEC *this,StreamProcInput *param_1,StreamProcOutput *param_2)

{
  undefined4 uVar1;
  
  std::__1::recursive_mutex::lock();
                    /* try { // try from 00216d0c to 00216d17 has its CatchHandler @ 00216d38 */
  uVar1 = FlowController::StreamExposureProc(*(FlowController **)(this + 0xa8),param_1,param_2);
  std::__1::recursive_mutex::unlock();
  return uVar1;
}


