// ===== 0x1124c0 MiAECOfflineProcess @ 002124c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MiAECOfflineProcess(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  parser *ppVar6;
  MIAEC_DebugData *pMVar7;
  Simulator *this;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined auVar13 [16];
  undefined8 uVar14;
  basic_string_conflict local_c8 [16];
  void *local_b8;
  basic_string_conflict local_b0 [16];
  void *local_a0;
  basic_string_conflict local_98 [16];
  void *local_88;
  byte *local_80;
  byte *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ppVar6 = (parser *)operator_new(0x124416);
  auVar13 = NEON_fmov(0x3f800000,4);
  uVar11 = NEON_fmov(0x41900000,4);
  uVar14 = auVar13._8_8_;
  *(undefined8 *)(ppVar6 + 0xdba5c) = uVar14;
  uVar12 = auVar13._0_8_;
  *(undefined8 *)(ppVar6 + 0xdba54) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdba70) = 0;
  *(undefined8 *)(ppVar6 + 0xdba84) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdba8d) = 0;
  *(undefined8 *)(ppVar6 + 0xdba9e) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdbb29) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdbb21) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdbb3d) = 0;
  *(undefined8 *)(ppVar6 + 0xdbb51) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdbb5a) = 0;
  *(undefined8 *)(ppVar6 + 0xdbb6b) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdbbf6) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdbbee) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdbc0a) = 0;
  *(undefined8 *)(ppVar6 + 0xdbc1e) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdbc27) = 0;
  *(undefined8 *)(ppVar6 + 0xdbc38) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdbcc3) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdbcbb) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdbcd7) = 0;
  *(undefined8 *)(ppVar6 + 0xdbceb) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdbcf4) = 0;
  *(undefined8 *)(ppVar6 + 0xdbd05) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdbd90) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdbd88) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdbda4) = 0;
  *(undefined8 *)(ppVar6 + 0xdbdb8) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdbdc1) = 0;
  *(undefined8 *)(ppVar6 + 0xdbdd2) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdbe5d) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdbe55) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdbe71) = 0;
  *(undefined8 *)(ppVar6 + 0xdbe85) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdbe8e) = 0;
  *(undefined8 *)(ppVar6 + 0xdbe9f) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdbf2a) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdbf22) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdbf3e) = 0;
  *(undefined8 *)(ppVar6 + 0xdbf52) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdbf5b) = 0;
  *(undefined8 *)(ppVar6 + 0xdbf6c) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdbff7) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdbfef) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc00b) = 0;
  *(undefined8 *)(ppVar6 + 0xdc01f) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc028) = 0;
  *(undefined8 *)(ppVar6 + 0xdc039) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc0c4) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc0bc) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc0d8) = 0;
  *(undefined8 *)(ppVar6 + 0xdc0ec) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc0f5) = 0;
  *(undefined8 *)(ppVar6 + 0xdc106) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc191) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc189) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc1a5) = 0;
  *(undefined8 *)(ppVar6 + 0xdc1b9) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc1c2) = 0;
  *(undefined8 *)(ppVar6 + 0xdc1d3) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc25e) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc256) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc272) = 0;
  *(undefined8 *)(ppVar6 + 0xdc286) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc28f) = 0;
  *(undefined8 *)(ppVar6 + 0xdc2a0) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc32b) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc323) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc33f) = 0;
  *(undefined8 *)(ppVar6 + 0xdc353) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc35c) = 0;
  *(undefined8 *)(ppVar6 + 0xdc36d) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc3f8) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc3f0) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc40c) = 0;
  *(undefined8 *)(ppVar6 + 0xdc420) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc429) = 0;
  *(undefined8 *)(ppVar6 + 0xdc43a) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc4c5) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc4bd) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc4d9) = 0;
  *(undefined8 *)(ppVar6 + 0xdc4ed) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc4f6) = 0;
  *(undefined8 *)(ppVar6 + 0xdc507) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc592) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc58a) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc5a6) = 0;
  *(undefined8 *)(ppVar6 + 0xdc5ba) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc5c3) = 0;
  *(undefined8 *)(ppVar6 + 0xdc5d4) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc65f) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc657) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc673) = 0;
  *(undefined8 *)(ppVar6 + 0xdc687) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc690) = 0;
  *(undefined8 *)(ppVar6 + 0xdc6a1) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc72c) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc724) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc740) = 0;
  *(undefined8 *)(ppVar6 + 0xdc754) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc75d) = 0;
  *(undefined8 *)(ppVar6 + 0xdc76e) = uVar11;
  *(undefined8 *)(ppVar6 + 0xdc7f9) = uVar14;
  *(undefined8 *)(ppVar6 + 0xdc7f1) = uVar12;
  *(undefined4 *)(ppVar6 + 0xdc80d) = 0;
  *(undefined8 *)(ppVar6 + 0xdc821) = 0x643f800000;
  *(undefined4 *)(ppVar6 + 0xdc82a) = 0;
  *(undefined8 *)(ppVar6 + 0xdc83b) = uVar11;
  uVar11 = DAT_003af390;
  *(undefined8 *)(ppVar6 + 0x11da32) = 0;
  *(undefined8 *)(ppVar6 + 0x11da1a) = 0;
  *(undefined8 *)(ppVar6 + 0x11da12) = 0;
  *(undefined8 *)(ppVar6 + 0x11da2a) = 0;
  *(undefined8 *)(ppVar6 + 0x11da22) = 0;
  *(undefined8 *)(ppVar6 + 0x11da0a) = 0;
  *(undefined8 *)(ppVar6 + 0x11da02) = 0;
  *(undefined8 *)(ppVar6 + 0x11daf9) = 0;
  *(undefined8 *)(ppVar6 + 0x11daf1) = 0;
  *(undefined8 *)(ppVar6 + 0x11db09) = 0;
  *(undefined8 *)(ppVar6 + 0x11db01) = 0;
  *(undefined8 *)(ppVar6 + 0x11db19) = 0;
  *(undefined8 *)(ppVar6 + 0x11db11) = 0;
  *(undefined8 *)(ppVar6 + 0x11db29) = 0;
  *(undefined8 *)(ppVar6 + 0x11db21) = 0;
  *(undefined8 *)(ppVar6 + 0x11db39) = 0;
  *(undefined8 *)(ppVar6 + 0x11db31) = 0;
  *(undefined8 *)(ppVar6 + 0x11db41) = 0;
  *(undefined8 *)(ppVar6 + 0x11db49) = uVar11;
  uVar11 = _DAT_003af3b0;
  *(undefined8 *)(ppVar6 + 0x11dbdb) = _UNK_003af3b8;
  *(undefined8 *)(ppVar6 + 0x11dbd3) = uVar11;
  uVar12 = _UNK_003af3c8;
  uVar11 = _DAT_003af3c0;
  *(undefined8 *)(ppVar6 + 0x11dbe3) = 0x3f80000040a00000;
  *(undefined8 *)(ppVar6 + 0x11dc63) = uVar12;
  *(undefined8 *)(ppVar6 + 0x11dc5b) = uVar11;
  *(undefined8 *)(ppVar6 + 0x11dc6b) = 0x3f80000042f00000;
  uVar12 = _UNK_003af3d8;
  uVar11 = _DAT_003af3d0;
  *(undefined4 *)(ppVar6 + 0x11dceb) = 0;
  *(undefined4 *)(ppVar6 + 0x11dcef) = 0;
  *(undefined8 *)(ppVar6 + 0x11dcfb) = uVar12;
  *(undefined8 *)(ppVar6 + 0x11dcf3) = uVar11;
  uVar12 = _UNK_003af3e8;
  uVar11 = _DAT_003af3e0;
  *(undefined8 *)(ppVar6 + 0x11dd5a) = 0;
  *(undefined8 *)(ppVar6 + 0x11dd52) = 0;
  *(undefined8 *)(ppVar6 + 0x11dd3d) = 0;
  *(undefined8 *)(ppVar6 + 0x11dd35) = 0;
  *(undefined8 *)(ppVar6 + 0x11dd4d) = 0;
  *(undefined8 *)(ppVar6 + 0x11dd45) = 0;
  *(undefined8 *)(ppVar6 + 0x11dd2d) = 0;
  *(undefined8 *)(ppVar6 + 0x11dd25) = 0;
  *(undefined8 *)(ppVar6 + 0x11dfb0) = uVar12;
  *(undefined8 *)(ppVar6 + 0x11dfa8) = uVar11;
  *(undefined8 *)(ppVar6 + 0x11dfb8) = 0x3f80000040a00000;
  ppVar6[0x11e09e] = (parser)0x0;
  uVar14 = _UNK_003af3f8;
  uVar12 = _DAT_003af3f0;
  *(undefined4 *)(ppVar6 + 0x11e09f) = 0x42480000;
  *(undefined8 *)(ppVar6 + 0x11e0ab) = 0;
  *(undefined8 *)(ppVar6 + 0x11e0a3) = 0;
  uVar11 = DAT_003af398;
  *(undefined8 *)(ppVar6 + 0x11e0bb) = uVar14;
  *(undefined8 *)(ppVar6 + 0x11e0b3) = uVar12;
  *(undefined4 *)(ppVar6 + 0x11e1a8) = 0;
  *(undefined8 *)(ppVar6 + 0x11e1a0) = 0;
  *(undefined8 *)(ppVar6 + 0x11e2f6) = uVar11;
                    /* try { // try from 00212a44 to 00212a4f has its CatchHandler @ 00212c3c */
  std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::basic_string
            (local_98);
                    /* try { // try from 00212a50 to 00212a5f has its CatchHandler @ 00212c28 */
  MI_AEC_PARSER::parser::findfile(&local_80,ppVar6,local_98);
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  pbVar8 = local_80;
  if ((local_80 != local_78) &&
     (puts("========Simulation Start======="), pbVar8 = local_78, local_78 != local_80)) {
    lVar9 = 0;
    uVar10 = 0;
    if ((*local_80 & 1) == 0) goto LAB_00212af0;
    do {
      pbVar8 = *(byte **)(local_80 + lVar9 + 0x10);
      while( true ) {
                    /* try { // try from 00212b04 to 00212b0b has its CatchHandler @ 00212c44 */
        FUN_0021235c(local_b0,pbVar8);
                    /* try { // try from 00212b0c to 00212b17 has its CatchHandler @ 00212c54 */
        std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
        basic_string(local_c8);
                    /* try { // try from 00212b18 to 00212b23 has its CatchHandler @ 00212c58 */
        MI_AEC_PARSER::parser::ParserEXIFData(ppVar6,local_c8);
        if (((byte)local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
                    /* try { // try from 00212b34 to 00212b3b has its CatchHandler @ 00212c80 */
        pMVar7 = (MIAEC_DebugData *)MI_AEC_PARSER::parser::GetDebugData();
        printf("cam_name = %s,cam_id = %d\n",pMVar7 + 0x123a45,(ulong)*(uint *)(pMVar7 + 0x123add));
                    /* try { // try from 00212b50 to 00212b5b has its CatchHandler @ 00212c84 */
        this = (Simulator *)operator_new(0x213728);
                    /* try { // try from 00212b60 to 00212b67 has its CatchHandler @ 00212cfc */
        MI_AEC_SIM::Simulator::Simulator(this,pMVar7);
                    /* try { // try from 00212b68 to 00212b77 has its CatchHandler @ 00212d04 */
        MI_AEC_SIM::Simulator::SimulatorControl_Stream(this,local_b0,pMVar7);
        MI_AEC_SIM::Simulator::~Simulator(this);
        operator_delete(this);
        if (((byte)local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x18;
        pbVar8 = local_78;
        if ((ulong)(((long)local_78 - (long)local_80 >> 3) * -0x5555555555555555) <= uVar10)
        goto LAB_00212ba0;
        if ((local_80[lVar9] & 1) != 0) break;
LAB_00212af0:
        pbVar8 = local_80 + lVar9 + 1;
      }
    } while( true );
  }
LAB_00212ba0:
  pbVar4 = local_80;
  if (local_80 != (byte *)0x0) {
    if (pbVar8 != local_80) {
      bVar1 = pbVar8[-0x18];
      pbVar5 = pbVar8 + -0x18;
      while( true ) {
        pbVar3 = pbVar5;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar8 + -8));
        }
        if (pbVar4 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar5 = pbVar3 + -0x18;
        pbVar8 = pbVar3;
      }
    }
    operator_delete(local_80);
  }
  operator_delete(ppVar6);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0x1123f4 MiAECMgrEntry @ 002123f4

void MiAECMgrEntry(iMiAECMgrCreateInfo *param_1,MiAECMgr **param_2)

{
  undefined *puVar1;
  MiAECMgr *this;
  
  puVar1 = PTR_mgr_0043f6f0;
  this = *(MiAECMgr **)PTR_mgr_0043f6f0;
  if (this == (MiAECMgr *)0x0) {
    this = (MiAECMgr *)operator_new(0x3a0);
                    /* try { // try from 00212428 to 0021242f has its CatchHandler @ 00212448 */
    MI_AEC::MiAECMgr::MiAECMgr(this,param_1);
    *(MiAECMgr **)puVar1 = this;
  }
  *param_2 = this;
  return;
}


