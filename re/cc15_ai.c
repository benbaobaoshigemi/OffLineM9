// ===== 0xee7afc FUN_00fe7a20 @ 00fe7a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00fe7a20(long param_1,float *param_2,ushort *param_3,long param_4,undefined2 *param_5)

{
  unkbyte9 *pVar1;
  ushort uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  uint3 uVar12;
  uint6 uVar13;
  undefined auVar14 [16];
  float *pfVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  undefined8 uVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  bool bVar24;
  float *pfVar25;
  uint uVar26;
  uint uVar27;
  byte bVar28;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  uint uVar29;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  byte bVar54;
  float fVar51;
  float fVar52;
  float fVar53;
  byte bVar55;
  byte bVar57;
  float fVar56;
  byte bVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  float fVar61;
  undefined uVar62;
  undefined uVar63;
  byte bVar64;
  undefined uVar65;
  undefined uVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  undefined uVar73;
  byte bVar74;
  undefined uVar75;
  undefined uVar76;
  byte bVar78;
  undefined4 uVar77;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar84;
  float fVar82;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  undefined auVar83 [16];
  undefined4 uVar88;
  float fVar89;
  undefined8 uVar90;
  undefined auVar91 [12];
  undefined auVar92 [16];
  float fVar94;
  undefined8 uVar95;
  float fVar96;
  float fVar97;
  undefined8 uVar98;
  undefined4 uVar99;
  int iVar101;
  undefined8 uVar100;
  int iVar102;
  int iVar103;
  float fVar104;
  undefined4 uVar105;
  undefined8 uVar106;
  float fVar107;
  undefined4 uVar108;
  undefined8 uVar109;
  undefined4 uVar110;
  undefined8 uVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  float local_36c;
  float fStack_368;
  float local_364;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_a8;
  undefined auVar30 [16];
  undefined auVar93 [16];
  
  lVar3 = tpidr_el0;
  uVar20 = 0;
  local_a8 = *(long *)(lVar3 + 0x28);
  if ((((param_1 == 0) || (param_3 == (ushort *)0x0)) || (param_4 == 0)) ||
     (param_5 == (undefined2 *)0x0)) goto LAB_00fe8790;
  uVar26 = *(uint *)(param_1 + 0x40);
  uVar2 = *param_3;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (param_2 == (float *)0x0) {
    uVar27 = 0;
  }
  else {
    uVar27 = (uint)param_2[0xc];
  }
  *param_5 = (short)*(undefined4 *)(param_4 + 4);
  uVar29 = *(uint *)(param_4 + 8);
  param_5[0xd] = uVar2;
  param_5[0x1b] = uVar2;
  uVar29 = uVar29 & uVar27 & uVar26;
  param_5[0x1c] = (short)uVar29;
  if ((param_2 == (float *)0x0) && (uVar26 == 1)) {
    pcVar16 = (char *)CamX::Log::GroupToString(0x200000);
    uVar20 = CamX::Log::GetFileName
                       ("vendor/qcom/proprietary/camx-lib/hwl/iqsetting/cc141setting.cpp");
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x16d7cc,(char *)0x1,0x1db42c,pcVar16,
               uVar20,"CalculateHWSetting");
    if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) == 1) &&
       (((byte)PTR_g_traceInfo_010f56f0[2] >> 5 & 1) != 0)) {
      uStack_2d8 = 0;
      local_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      local_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      local_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      local_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      local_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      local_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      local_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_358 = 0;
      local_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      local_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      local_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      local_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      FUN_00284260(&local_360,0x200,"[ERROR]aiEnable enabled but interpolation result is NULL");
      uVar17 = atrace_get_enabled_tags();
joined_r0x00fe8834:
      if ((uVar17 & 0xc00) == 0) {
        uVar17 = atrace_get_enabled_tags();
      }
      else {
        atrace_begin_body(&local_360);
        uVar17 = atrace_get_enabled_tags();
      }
      if ((uVar17 & 0xc00) != 0) {
        atrace_end_body();
      }
    }
  }
  else {
    pfVar25 = *(float **)(param_1 + 0x1a0);
    pfVar21 = (float *)0x0;
    if (param_2 != (float *)0x0) {
      pfVar21 = param_2 + 9;
    }
    pfVar15 = param_2;
    if (pfVar25 != (float *)0x0) {
      pfVar21 = pfVar25 + 9;
      pfVar15 = pfVar25;
    }
    if (pfVar15 != (float *)0x0) {
      auVar92 = *(undefined (*) [16])(pfVar15 + 5);
      fVar48 = (float)(0x80 << (ulong)(uVar2 & 0x1f));
      auVar83._2_2_ =
           (short)(int)(float)(int)((float)((ulong)*(undefined8 *)(pfVar15 + 1) >> 0x20) * fVar48);
      auVar83._0_2_ = (short)(int)(float)(int)((float)*(undefined8 *)(pfVar15 + 1) * fVar48);
      auVar83._4_2_ = (short)(int)(float)(int)((float)*(undefined8 *)(pfVar15 + 3) * fVar48);
      auVar83._6_2_ =
           (short)(int)(float)(int)((float)((ulong)*(undefined8 *)(pfVar15 + 3) >> 0x20) * fVar48);
      auVar83._8_2_ = (short)(int)(float)(int)(auVar92._0_4_ * fVar48);
      auVar83._10_2_ = (short)(int)(float)(int)(auVar92._4_4_ * fVar48);
      auVar83._12_2_ = (short)(int)(float)(int)(auVar92._8_4_ * fVar48);
      auVar83._14_2_ = (short)(int)(float)(int)(auVar92._12_4_ * fVar48);
      auVar92 = a64_TBL(ZEXT816(0),auVar83,_DAT_001e4890);
      *(long *)(param_5 + 5) = auVar92._8_8_;
      *(long *)(param_5 + 1) = auVar92._0_8_;
      param_5[9] = (short)(int)(*pfVar15 * fVar48);
    }
    if (((ulong)param_2 | (ulong)pfVar25) != 0) {
      param_5[10] = (short)(int)pfVar21[1];
      param_5[0xb] = (short)(int)pfVar21[2];
      param_5[0xc] = (short)(int)*pfVar21;
    }
    auVar92 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_5 + 0x48) = 0;
    *(undefined8 *)(param_5 + 0x4c) = 0;
    *(undefined8 *)(param_5 + 0x50) = 0;
    *(undefined4 *)(param_5 + 0x70) = 0x3f800000;
    *(long *)(param_5 + 100) = auVar92._8_8_;
    *(long *)(param_5 + 0x60) = auVar92._0_8_;
    *(long *)(param_5 + 0x6c) = auVar92._8_8_;
    *(long *)(param_5 + 0x68) = auVar92._0_8_;
    if (uVar26 == 1) {
      *(undefined4 *)(param_5 + 0x72) = 0;
      if ((*(int *)(param_1 + 0x158) == 1) && (*(int *)(param_1 + 0x40) == 1)) {
        uVar77 = *(undefined4 *)(param_1 + 0x114);
        *(undefined8 *)(param_5 + 0x54) = *(undefined8 *)(param_1 + 0x10c);
        *(undefined4 *)(param_5 + 0x58) = uVar77;
        uVar20 = *(undefined8 *)(param_1 + 0x118);
        *(undefined4 *)(param_5 + 0x5e) = *(undefined4 *)(param_1 + 0x120);
        *(undefined8 *)(param_5 + 0x5a) = uVar20;
        *(undefined4 *)(param_5 + 0x72) = *(undefined4 *)(param_1 + 0x154);
        if (pfVar15 != (float *)0x0) {
          fVar51 = pfVar15[7];
          fVar52 = pfVar15[8];
          fVar104 = pfVar15[5];
          fVar49 = pfVar15[6];
          fVar107 = pfVar15[2];
          fVar96 = pfVar15[3];
          fVar61 = pfVar15[4];
          fVar89 = *pfVar15;
          fVar47 = pfVar15[1];
          fVar46 = (float)NEON_fnmsub(fVar61,fVar52,fVar104 * fVar51);
          fVar48 = (float)NEON_fnmsub(fVar51,fVar96,fVar61 * fVar49);
          uVar77 = NEON_fnmsub(fVar89,fVar46,fVar47 * (fVar52 * fVar96 - fVar104 * fVar49));
          fVar94 = (float)NEON_fmadd(fVar107,fVar48,uVar77);
          if ((double)ABS(fVar94) < DAT_001035b8) {
            if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
              pcVar16 = (char *)CamX::Log::GroupToString(0x200000);
              uVar20 = CamX::Log::GetFileName
                                 ("vendor/qcom/proprietary/camx-lib/hwl/iqsetting/cc141setting.cpp")
              ;
              CamX::Log::LogSystem
                        ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x125c17,
                         pcVar16,uVar20,"FindInverseCCMMatrix");
            }
          }
          else {
            fVar82 = *(float *)(param_1 + 0x110);
            local_360 = *(undefined8 *)(param_1 + 0x100);
            fVar94 = 1.0 / fVar94;
            uStack_358 = CONCAT44(uStack_358._4_4_,*(undefined4 *)(param_1 + 0x108));
            fVar53 = (float)NEON_fnmsub(fVar89,fVar52,fVar49 * fVar107);
            fVar50 = (float)NEON_fnmsub(fVar47,fVar49,fVar89 * fVar51);
            fVar97 = (float)NEON_fnmsub(fVar96,fVar107,fVar89 * fVar104);
            fVar56 = (fVar104 * fVar49 - fVar52 * fVar96) * fVar94;
            fVar49 = (float)NEON_fnmsub(fVar104,fVar47,fVar61 * fVar107);
            fVar52 = (float)NEON_fnmsub(fVar51,fVar107,fVar52 * fVar47);
            fVar51 = *(float *)(param_1 + 0x11c);
            fVar46 = fVar46 * fVar94;
            uVar88 = *(undefined4 *)(param_1 + 0x10c);
            fVar61 = (float)NEON_fnmsub(fVar89,fVar61,fVar47 * fVar96);
            fVar48 = fVar48 * fVar94;
            uVar110 = *(undefined4 *)(param_1 + 0x114);
            fVar50 = fVar50 * fVar94;
            fVar49 = fVar49 * fVar94;
            fVar52 = fVar52 * fVar94;
            fVar53 = fVar53 * fVar94;
            uVar77 = *(undefined4 *)(param_1 + 0x118);
            uVar108 = NEON_fmadd(fVar48,uVar77,fVar50 * fVar51);
            fVar97 = fVar97 * fVar94;
            uVar60 = NEON_fmadd(fVar46,uVar88,fVar52 * fVar82);
            uVar59 = NEON_fmadd(fVar56,uVar88,fVar53 * fVar82);
            uVar88 = NEON_fmadd(fVar48,uVar88,fVar50 * fVar82);
            uVar105 = NEON_fmadd(fVar46,uVar77,fVar52 * fVar51);
            uVar77 = NEON_fmadd(fVar56,uVar77,fVar53 * fVar51);
            fVar61 = fVar61 * fVar94;
            uVar99 = *(undefined4 *)(param_1 + 0x120);
            local_36c = (float)NEON_fmadd(fVar49,uVar110,uVar60);
            fStack_368 = (float)NEON_fmadd(fVar97,uVar110,uVar59);
            local_364 = (float)NEON_fmadd(fVar61,uVar110,uVar88);
            uVar59 = NEON_fmadd(fVar49,uVar99,uVar105);
            uVar88 = NEON_fmadd(fVar97,uVar99,uVar77);
            uVar77 = NEON_fmadd(fVar61,uVar99,uVar108);
            uVar66 = (undefined)uVar77;
            uVar62 = (undefined)((uint)uVar77 >> 8);
            uVar63 = (undefined)((uint)uVar77 >> 0x10);
            uVar65 = (undefined)((uint)uVar77 >> 0x18);
            if ((*(int *)(param_1 + 0x130) == 0) && (*(int *)(param_1 + 0x198) == 1)) {
              fVar89 = *(float *)(param_1 + 0x124);
              fVar47 = 1.0 - fVar89;
              fStack_368 = (float)NEON_fmadd(fStack_368,fVar47,fVar89 * *(float *)(param_1 + 0x184))
              ;
              local_364 = (float)NEON_fmadd(local_364,fVar47,fVar89 * *(float *)(param_1 + 0x188));
              uVar59 = NEON_fmadd(uVar59,fVar47,fVar89 * *(float *)(param_1 + 0x18c));
              uVar88 = NEON_fmadd(uVar88,fVar47,fVar89 * *(float *)(param_1 + 400));
              uVar77 = NEON_fmadd(uVar77,fVar47,fVar89 * *(float *)(param_1 + 0x194));
              uVar66 = (undefined)uVar77;
              uVar62 = (undefined)((uint)uVar77 >> 8);
              uVar63 = (undefined)((uint)uVar77 >> 0x10);
              uVar65 = (undefined)((uint)uVar77 >> 0x18);
              local_36c = (float)NEON_fmadd(fVar89,*(undefined4 *)(param_1 + 0x180),
                                            local_36c * fVar47);
            }
            *(undefined4 *)(param_5 + 0x5a) = uVar59;
            *(undefined4 *)(param_5 + 0x5c) = uVar88;
            *(uint *)(param_5 + 0x5e) = CONCAT13(uVar65,CONCAT12(uVar63,CONCAT11(uVar62,uVar66)));
            *(float *)(param_5 + 0x58) = local_364;
            *(ulong *)(param_5 + 0x54) = CONCAT44(fStack_368,local_36c);
            if ((*(int *)(param_1 + 0x78) == 1) && (uVar29 != 0)) {
              iVar19 = *(int *)(param_1 + 0x7c);
              if (iVar19 == 1) {
                fVar89 = *(float *)(param_1 + 0x104);
                uVar88 = *(undefined4 *)(param_1 + 0x100);
                uVar77 = *(undefined4 *)(param_1 + 0x108);
                uVar59 = NEON_fmadd(fVar46,uVar88,fVar52 * fVar89);
                uVar60 = NEON_fmadd(fVar56,uVar88,fVar53 * fVar89);
                uVar88 = NEON_fmadd(fVar48,uVar88,fVar50 * fVar89);
                uVar59 = NEON_fmadd(fVar49,uVar77,uVar59);
                uVar60 = NEON_fmadd(fVar97,uVar77,uVar60);
                uVar77 = NEON_fmadd(fVar61,uVar77,uVar88);
                local_360 = CONCAT44(uVar60,uVar59);
                uStack_358 = CONCAT44(uStack_358._4_4_,uVar77);
              }
              auVar83 = *(undefined (*) [16])(param_1 + 0x80);
              auVar30 = *(undefined (*) [16])(param_1 + 0xc0);
              iVar101 = (int)(float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20);
              iVar102 = (int)(float)*(undefined8 *)(param_1 + 0xb8);
              iVar103 = (int)(float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
              iVar9 = (int)(float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20);
              iVar10 = (int)(float)*(undefined8 *)(param_1 + 0xf8);
              iVar11 = (int)(float)((ulong)*(undefined8 *)(param_1 + 0xf8) >> 0x20);
              uVar90 = NEON_cmeq(CONCAT26((short)(int)auVar83._12_4_,
                                          CONCAT24((short)(int)auVar83._8_4_,
                                                   CONCAT22((short)(int)auVar83._4_4_,
                                                            (short)(int)auVar83._0_4_))),0,2);
              uVar95 = NEON_cmeq(CONCAT26((short)(int)(float)((ulong)*(undefined8 *)(param_1 + 0x98)
                                                             >> 0x20),
                                          CONCAT24((short)(int)(float)*(undefined8 *)
                                                                       (param_1 + 0x98),
                                                   CONCAT22((short)(int)(float)((ulong)*(undefined8
                                                                                         *)(param_1 
                                                  + 0x90) >> 0x20),
                                                  (short)(int)(float)*(undefined8 *)(param_1 + 0x90)
                                                  ))),0,2);
              uVar98 = NEON_cmeq(CONCAT26((short)(int)(float)((ulong)*(undefined8 *)(param_1 + 0xa8)
                                                             >> 0x20),
                                          CONCAT24((short)(int)(float)*(undefined8 *)
                                                                       (param_1 + 0xa8),
                                                   CONCAT22((short)(int)(float)((ulong)*(undefined8
                                                                                         *)(param_1 
                                                  + 0xa0) >> 0x20),
                                                  (short)(int)(float)*(undefined8 *)(param_1 + 0xa0)
                                                  ))),0,2);
              uVar100 = NEON_cmeq(CONCAT17((char)((uint)iVar103 >> 8),
                                           CONCAT16((char)iVar103,
                                                    CONCAT15((char)((uint)iVar102 >> 8),
                                                             CONCAT14((char)iVar102,
                                                                      CONCAT13((char)((uint)iVar101
                                                                                     >> 8),
                                                                               CONCAT12((char)
                                                  iVar101,(short)(int)(float)*(undefined8 *)
                                                                              (param_1 + 0xb0)))))))
                                  ,0,2);
              uVar106 = NEON_cmeq(CONCAT26((short)(int)auVar30._12_4_,
                                           CONCAT24((short)(int)auVar30._8_4_,
                                                    CONCAT22((short)(int)auVar30._4_4_,
                                                             (short)(int)auVar30._0_4_))),0,2);
              uVar109 = NEON_cmeq(CONCAT26((short)(int)(float)((ulong)*(undefined8 *)
                                                                       (param_1 + 0xd8) >> 0x20),
                                           CONCAT24((short)(int)(float)*(undefined8 *)
                                                                        (param_1 + 0xd8),
                                                    CONCAT22((short)(int)(float)((ulong)*(undefined8
                                                                                          *)(param_1
                                                                                            + 0xd0)
                                                                                >> 0x20),
                                                             (short)(int)(float)*(undefined8 *)
                                                                                 (param_1 + 0xd0))))
                                  ,0,2);
              uVar111 = NEON_cmeq(CONCAT26((short)(int)(float)((ulong)*(undefined8 *)
                                                                       (param_1 + 0xe8) >> 0x20),
                                           CONCAT24((short)(int)(float)*(undefined8 *)
                                                                        (param_1 + 0xe8),
                                                    CONCAT22((short)(int)(float)((ulong)*(undefined8
                                                                                          *)(param_1
                                                                                            + 0xe0)
                                                                                >> 0x20),
                                                             (short)(int)(float)*(undefined8 *)
                                                                                 (param_1 + 0xe0))))
                                  ,0,2);
              uVar20 = NEON_cmeq(CONCAT17((char)((uint)iVar11 >> 8),
                                          CONCAT16((char)iVar11,
                                                   CONCAT15((char)((uint)iVar10 >> 8),
                                                            CONCAT14((char)iVar10,
                                                                     CONCAT13((char)((uint)iVar9 >>
                                                                                    8),CONCAT12((
                                                  char)iVar9,
                                                  (short)(int)(float)*(undefined8 *)(param_1 + 0xf0)
                                                  )))))),0,2);
              bVar112 = (byte)((short)uVar90 >> 0xf);
              bVar113 = (byte)((short)((ulong)uVar90 >> 0x10) >> 0xf);
              bVar114 = (byte)((short)((ulong)uVar90 >> 0x20) >> 0xf);
              bVar115 = (byte)((long)uVar90 >> 0x3f);
              bVar116 = (byte)((short)uVar95 >> 0xf);
              bVar117 = (byte)((short)((ulong)uVar95 >> 0x10) >> 0xf);
              bVar118 = (byte)((short)((ulong)uVar95 >> 0x20) >> 0xf);
              bVar119 = (byte)((long)uVar95 >> 0x3f);
              bVar64 = (byte)((short)uVar106 >> 0xf);
              bVar67 = (byte)((short)((ulong)uVar106 >> 0x10) >> 0xf);
              bVar68 = (byte)((short)((ulong)uVar106 >> 0x20) >> 0xf);
              bVar69 = (byte)((long)uVar106 >> 0x3f);
              bVar70 = (byte)((short)uVar109 >> 0xf);
              bVar71 = (byte)((short)((ulong)uVar109 >> 0x10) >> 0xf);
              bVar72 = (byte)((short)((ulong)uVar109 >> 0x20) >> 0xf);
              bVar74 = (byte)((long)uVar109 >> 0x3f);
              bVar28 = auVar92[0];
              bVar31 = auVar92[1];
              bVar32 = auVar92[2];
              bVar33 = auVar92[3];
              bVar34 = auVar92[4];
              bVar35 = auVar92[5];
              bVar36 = auVar92[6];
              bVar37 = auVar92[7];
              bVar38 = auVar92[8];
              bVar39 = auVar92[9];
              bVar40 = auVar92[10];
              bVar41 = auVar92[0xb];
              bVar42 = auVar92[0xc];
              bVar43 = auVar92[0xd];
              bVar44 = auVar92[0xe];
              bVar45 = auVar92[0xf];
              bVar54 = (byte)((short)uVar98 >> 0xf);
              bVar55 = (byte)((short)((ulong)uVar98 >> 0x10) >> 0xf);
              bVar57 = (byte)((short)uVar100 >> 0xf);
              bVar58 = (byte)((short)((ulong)uVar100 >> 0x10) >> 0xf);
              bVar78 = (byte)((short)uVar111 >> 0xf);
              bVar79 = (byte)((short)((ulong)uVar111 >> 0x10) >> 0xf);
              bVar80 = (byte)((short)((ulong)uVar111 >> 0x20) >> 0xf);
              bVar81 = (byte)((long)uVar111 >> 0x3f);
              bVar84 = (byte)((short)uVar20 >> 0xf);
              bVar85 = (byte)((short)((ulong)uVar20 >> 0x10) >> 0xf);
              bVar86 = (byte)((short)((ulong)uVar20 >> 0x20) >> 0xf);
              bVar87 = (byte)((long)uVar20 >> 0x3f);
              auVar92._0_8_ =
                   CONCAT17(bVar37 & ~bVar85,
                            CONCAT16(bVar36 & ~bVar85,
                                     CONCAT15(bVar35 & ~(byte)((ulong)uVar20 >> 0x18),
                                              CONCAT14(bVar34 & ~(byte)((ulong)uVar20 >> 0x10),
                                                       CONCAT13(bVar33 & ~bVar84,
                                                                CONCAT12(bVar32 & ~bVar84,
                                                                         CONCAT11(bVar31 & ~(byte)((
                                                  ulong)uVar20 >> 8),bVar28 & ~(byte)uVar20)))))));
              auVar92[8] = bVar38 & ~(byte)((ulong)uVar20 >> 0x20);
              auVar92[9] = bVar39 & ~(byte)((ulong)uVar20 >> 0x28);
              auVar92[10] = bVar40 & ~bVar86;
              auVar92[0xb] = bVar41 & ~bVar86;
              auVar92[0xc] = bVar42 & ~(byte)((ulong)uVar20 >> 0x30);
              auVar92[0xd] = bVar43 & ~(byte)((ulong)uVar20 >> 0x38);
              auVar92[0xe] = bVar44 & ~bVar87;
              auVar92[0xf] = bVar45 & ~bVar87;
              uStack_128 = CONCAT17(bVar45 & ~bVar115,
                                    CONCAT16(bVar44 & ~bVar115,
                                             CONCAT15(bVar43 & ~(byte)((ulong)uVar90 >> 0x38),
                                                      CONCAT14(bVar42 & ~(byte)((ulong)uVar90 >>
                                                                               0x30),
                                                               CONCAT13(bVar41 & ~bVar114,
                                                                        CONCAT12(bVar40 & ~bVar114,
                                                                                 CONCAT11(bVar39 & ~
                                                  (byte)((ulong)uVar90 >> 0x28),
                                                  bVar38 & ~(byte)((ulong)uVar90 >> 0x20))))))));
              local_130 = CONCAT17(bVar37 & ~bVar113,
                                   CONCAT16(bVar36 & ~bVar113,
                                            CONCAT15(bVar35 & ~(byte)((ulong)uVar90 >> 0x18),
                                                     CONCAT14(bVar34 & ~(byte)((ulong)uVar90 >> 0x10
                                                                              ),
                                                              CONCAT13(bVar33 & ~bVar112,
                                                                       CONCAT12(bVar32 & ~bVar112,
                                                                                CONCAT11(bVar31 & ~(
                                                  byte)((ulong)uVar90 >> 8),bVar28 & ~(byte)uVar90))
                                                  )))));
              uStack_118 = CONCAT17(bVar45 & ~bVar119,
                                    CONCAT16(bVar44 & ~bVar119,
                                             CONCAT15(bVar43 & ~(byte)((ulong)uVar95 >> 0x38),
                                                      CONCAT14(bVar42 & ~(byte)((ulong)uVar95 >>
                                                                               0x30),
                                                               CONCAT13(bVar41 & ~bVar118,
                                                                        CONCAT12(bVar40 & ~bVar118,
                                                                                 CONCAT11(bVar39 & ~
                                                  (byte)((ulong)uVar95 >> 0x28),
                                                  bVar38 & ~(byte)((ulong)uVar95 >> 0x20))))))));
              uStack_120 = CONCAT17(bVar37 & ~bVar117,
                                    CONCAT16(bVar36 & ~bVar117,
                                             CONCAT15(bVar35 & ~(byte)((ulong)uVar95 >> 0x18),
                                                      CONCAT14(bVar34 & ~(byte)((ulong)uVar95 >>
                                                                               0x10),
                                                               CONCAT13(bVar33 & ~bVar116,
                                                                        CONCAT12(bVar32 & ~bVar116,
                                                                                 CONCAT11(bVar31 & ~
                                                  (byte)((ulong)uVar95 >> 8),bVar28 & ~(byte)uVar95)
                                                  ))))));
              local_110 = CONCAT17(bVar37 & ~bVar55,
                                   CONCAT16(bVar36 & ~bVar55,
                                            CONCAT15(bVar35 & ~(byte)((ulong)uVar98 >> 0x18),
                                                     CONCAT14(bVar34 & ~(byte)((ulong)uVar98 >> 0x10
                                                                              ),
                                                              CONCAT13(bVar33 & ~bVar54,
                                                                       CONCAT12(bVar32 & ~bVar54,
                                                                                CONCAT11(bVar31 & ~(
                                                  byte)((ulong)uVar98 >> 8),bVar28 & ~(byte)uVar98))
                                                  )))));
              uStack_100 = CONCAT17(bVar37 & ~bVar58,
                                    CONCAT16(bVar36 & ~bVar58,
                                             CONCAT15(bVar35 & ~(byte)((ulong)uVar100 >> 0x18),
                                                      CONCAT14(bVar34 & ~(byte)((ulong)uVar100 >>
                                                                               0x10),
                                                               CONCAT13(bVar33 & ~bVar57,
                                                                        CONCAT12(bVar32 & ~bVar57,
                                                                                 CONCAT11(bVar31 & ~
                                                  (byte)((ulong)uVar100 >> 8),
                                                  bVar28 & ~(byte)uVar100)))))));
              uStack_e8 = CONCAT17(bVar45 & ~bVar69,
                                   CONCAT16(bVar44 & ~bVar69,
                                            CONCAT15(bVar43 & ~(byte)((ulong)uVar106 >> 0x38),
                                                     CONCAT14(bVar42 & ~(byte)((ulong)uVar106 >>
                                                                              0x30),
                                                              CONCAT13(bVar41 & ~bVar68,
                                                                       CONCAT12(bVar40 & ~bVar68,
                                                                                CONCAT11(bVar39 & ~(
                                                  byte)((ulong)uVar106 >> 0x28),
                                                  bVar38 & ~(byte)((ulong)uVar106 >> 0x20))))))));
              local_f0 = CONCAT17(bVar37 & ~bVar67,
                                  CONCAT16(bVar36 & ~bVar67,
                                           CONCAT15(bVar35 & ~(byte)((ulong)uVar106 >> 0x18),
                                                    CONCAT14(bVar34 & ~(byte)((ulong)uVar106 >> 0x10
                                                                             ),
                                                             CONCAT13(bVar33 & ~bVar64,
                                                                      CONCAT12(bVar32 & ~bVar64,
                                                                               CONCAT11(bVar31 & ~(
                                                  byte)((ulong)uVar106 >> 8),bVar28 & ~(byte)uVar106
                                                  )))))));
              uStack_d8 = CONCAT17(bVar45 & ~bVar74,
                                   CONCAT16(bVar44 & ~bVar74,
                                            CONCAT15(bVar43 & ~(byte)((ulong)uVar109 >> 0x38),
                                                     CONCAT14(bVar42 & ~(byte)((ulong)uVar109 >>
                                                                              0x30),
                                                              CONCAT13(bVar41 & ~bVar72,
                                                                       CONCAT12(bVar40 & ~bVar72,
                                                                                CONCAT11(bVar39 & ~(
                                                  byte)((ulong)uVar109 >> 0x28),
                                                  bVar38 & ~(byte)((ulong)uVar109 >> 0x20))))))));
              uStack_e0 = CONCAT17(bVar37 & ~bVar71,
                                   CONCAT16(bVar36 & ~bVar71,
                                            CONCAT15(bVar35 & ~(byte)((ulong)uVar109 >> 0x18),
                                                     CONCAT14(bVar34 & ~(byte)((ulong)uVar109 >>
                                                                              0x10),
                                                              CONCAT13(bVar33 & ~bVar70,
                                                                       CONCAT12(bVar32 & ~bVar70,
                                                                                CONCAT11(bVar31 & ~(
                                                  byte)((ulong)uVar109 >> 8),bVar28 & ~(byte)uVar109
                                                  )))))));
              uStack_c8 = CONCAT17(bVar45 & ~bVar81,
                                   CONCAT16(bVar44 & ~bVar81,
                                            CONCAT15(bVar43 & ~(byte)((ulong)uVar111 >> 0x38),
                                                     CONCAT14(bVar42 & ~(byte)((ulong)uVar111 >>
                                                                              0x30),
                                                              CONCAT13(bVar41 & ~bVar80,
                                                                       CONCAT12(bVar40 & ~bVar80,
                                                                                CONCAT11(bVar39 & ~(
                                                  byte)((ulong)uVar111 >> 0x28),
                                                  bVar38 & ~(byte)((ulong)uVar111 >> 0x20))))))));
              local_d0 = CONCAT17(bVar37 & ~bVar79,
                                  CONCAT16(bVar36 & ~bVar79,
                                           CONCAT15(bVar35 & ~(byte)((ulong)uVar111 >> 0x18),
                                                    CONCAT14(bVar34 & ~(byte)((ulong)uVar111 >> 0x10
                                                                             ),
                                                             CONCAT13(bVar33 & ~bVar78,
                                                                      CONCAT12(bVar32 & ~bVar78,
                                                                               CONCAT11(bVar31 & ~(
                                                  byte)((ulong)uVar111 >> 8),bVar28 & ~(byte)uVar111
                                                  )))))));
              uStack_b8 = auVar92._8_8_;
              uStack_c0 = auVar92._0_8_;
              auVar30._4_12_ = auVar92._4_12_;
              if (iVar19 == 1) {
                fVar48 = (float)local_360;
                if ((float)local_360 <= local_360._4_4_) {
                  fVar48 = local_360._4_4_;
                }
                uVar77 = NEON_fminnm((float)local_360,local_360._4_4_);
                puVar23 = &local_360;
                lVar18 = param_1 + 0x168;
                uVar20 = 1;
                uVar66 = SUB41(fVar48,0);
                uVar62 = (undefined)((uint)fVar48 >> 8);
                uVar63 = (undefined)((uint)fVar48 >> 0x10);
                uVar65 = (undefined)((uint)fVar48 >> 0x18);
                if (fVar48 <= (float)uStack_358) {
                  uVar66 = (undefined)uStack_358;
                  uVar62 = (undefined)((ulong)uStack_358 >> 8);
                  uVar63 = (undefined)((ulong)uStack_358 >> 0x10);
                  uVar65 = (undefined)((ulong)uStack_358 >> 0x18);
                }
                fVar61 = (float)NEON_fminnm(uVar77,(float)uStack_358);
                fVar61 = (float)CONCAT13(uVar65,CONCAT12(uVar63,CONCAT11(uVar62,uVar66))) / fVar61;
                fVar48 = fVar61 * 1.02;
                auVar30._0_4_ =
                     NEON_fmadd(*(undefined4 *)(param_1 + 0x138),
                                (fVar61 - fVar48) / *(float *)(param_1 + 0x150),fVar48);
LAB_00fe88a8:
                FUN_00fe75d0(auVar30,puVar23,param_1 + 0x78,lVar18,uVar20,pfVar15,&local_160);
              }
              else if (iVar19 == 0) {
                fVar48 = local_36c;
                if (local_36c <= fStack_368) {
                  fVar48 = fStack_368;
                }
                uVar77 = NEON_fminnm(local_36c,fStack_368);
                fVar61 = *(float *)(param_1 + 0x144);
                uVar66 = SUB41(fVar48,0);
                uVar62 = (undefined)((uint)fVar48 >> 8);
                uVar63 = (undefined)((uint)fVar48 >> 0x10);
                uVar65 = (undefined)((uint)fVar48 >> 0x18);
                if (fVar48 <= local_364) {
                  uVar66 = SUB41(local_364,0);
                  uVar62 = (undefined)((uint)local_364 >> 8);
                  uVar63 = (undefined)((uint)local_364 >> 0x10);
                  uVar65 = (undefined)((uint)local_364 >> 0x18);
                }
                fVar46 = (float)NEON_fminnm(uVar77,local_364);
                fVar48 = *(float *)(param_1 + 0x14c) + -0.1;
                fVar52 = fVar46 / (float)CONCAT13(uVar65,CONCAT12(uVar63,CONCAT11(uVar62,uVar66)));
                fVar47 = *(float *)(param_1 + 0x14c) + 0.1;
                fVar89 = 0.0;
                if (0.0 <= fVar48) {
                  fVar89 = fVar48;
                }
                fVar46 = (float)CONCAT13(uVar65,CONCAT12(uVar63,CONCAT11(uVar62,uVar66))) / fVar46;
                fVar48 = 1.0;
                if (fVar47 <= 1.0) {
                  fVar48 = fVar47;
                }
                fVar47 = 1.0;
                if ((fVar89 <= fVar61) && (fVar47 = fVar46, fVar61 < fVar48)) {
                  fVar47 = (float)NEON_fmadd(fVar61 - fVar89,(fVar46 + -1.0) / (fVar48 - fVar89),
                                             0x3f800000);
                }
                puVar23 = (undefined8 *)&local_36c;
                lVar18 = param_1 + 0x15c;
                uVar20 = 0;
                fVar48 = (1.0 - fVar52) + *(float *)(param_1 + 0x128);
                uVar62 = 0;
                uVar63 = 0;
                uVar65 = 0x80;
                uVar66 = 0x3f;
                if (*(float *)(param_1 + 0x128) <= fVar52) {
                  uVar62 = SUB41(fVar48,0);
                  uVar63 = (undefined)((uint)fVar48 >> 8);
                  uVar65 = (undefined)((uint)fVar48 >> 0x10);
                  uVar66 = (char)((uint)fVar48 >> 0x18);
                }
                uVar77 = NEON_fmsub(CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar63,uVar62))),fVar47
                                    ,fVar46);
                uVar29 = NEON_fmsub(*(undefined4 *)(param_1 + 300),uVar77,fVar46);
                auVar30 = ZEXT416(uVar29);
                goto LAB_00fe88a8;
              }
              bVar24 = false;
              puVar23 = *(undefined8 **)(param_1 + 0x1a8);
              goto joined_r0x00fe807c;
            }
          }
        }
        bVar24 = true;
        puVar23 = *(undefined8 **)(param_1 + 0x1a8);
        if (puVar23 != (undefined8 *)0x0) goto LAB_00fe8134;
LAB_00fe8080:
        if (bVar24) {
          if (param_2 == (float *)0x0) goto LAB_00fe8094;
          puVar23 = (undefined8 *)(param_2 + 0xd);
          pfVar21 = param_2 + 0x16;
          goto LAB_00fe8138;
        }
        pfVar21 = param_2 + 0x16;
        puVar23 = &local_160;
        puVar22 = &local_130;
      }
      else {
        bVar24 = true;
        puVar23 = *(undefined8 **)(param_1 + 0x1a8);
joined_r0x00fe807c:
        if (puVar23 == (undefined8 *)0x0) goto LAB_00fe8080;
LAB_00fe8134:
        pfVar21 = (float *)((long)puVar23 + 0x24);
LAB_00fe8138:
        puVar22 = (undefined8 *)(param_2 + 0x19);
      }
      fVar48 = (float)(0x80 << (ulong)((ushort)param_5[0x1b] & 0x1f));
      iVar19 = (int)(float)(int)((float)*(undefined8 *)((long)puVar23 + 0x1c) * fVar48);
      iVar9 = (int)(float)(int)((float)((ulong)*(undefined8 *)((long)puVar23 + 0x1c) >> 0x20) *
                               fVar48);
      iVar10 = (int)(float)(int)((float)((ulong)*(undefined8 *)((long)puVar23 + 4) >> 0x20) * fVar48
                                );
      iVar11 = (int)(float)(int)((float)*(undefined8 *)((long)puVar23 + 0xc) * fVar48);
      iVar101 = (int)(float)(int)((float)((ulong)*(undefined8 *)((long)puVar23 + 0xc) >> 0x20) *
                                 fVar48);
      uVar17 = (ulong)CONCAT24((short)(int)(float)(int)((float)((ulong)*(undefined8 *)
                                                                        ((long)puVar23 + 0x14) >>
                                                               0x20) * fVar48),
                               (int)(float)(int)((float)*(undefined8 *)((long)puVar23 + 0x14) *
                                                fVar48)) & 0xffffffff0000ffff;
      uVar13 = CONCAT15((char)((uint)iVar10 >> 8),
                        CONCAT14((char)iVar10,
                                 (int)(float)(int)((float)*(undefined8 *)((long)puVar23 + 4) *
                                                  fVar48))) & 0xffff0000ffff;
      auVar14[2] = (char)(uVar13 >> 0x20);
      auVar14._0_2_ = (short)uVar13;
      auVar14[3] = (char)(uVar13 >> 0x28);
      auVar14[4] = (char)iVar11;
      auVar14[5] = (char)((uint)iVar11 >> 8);
      auVar14[6] = (char)iVar101;
      auVar14[7] = (char)((uint)iVar101 >> 8);
      auVar14[8] = (char)uVar17;
      auVar14[9] = (char)(uVar17 >> 8);
      auVar14[10] = (char)(uVar17 >> 0x20);
      auVar14[0xb] = (char)(uVar17 >> 0x28);
      auVar14[0xc] = (char)iVar19;
      auVar14[0xd] = (char)((uint)iVar19 >> 8);
      auVar14[0xe] = (char)iVar9;
      auVar14[0xf] = (char)((uint)iVar9 >> 8);
      auVar92 = a64_TBL(ZEXT816(0),auVar14,_DAT_001e4890);
      *(long *)(param_5 + 0x13) = auVar92._8_8_;
      *(long *)(param_5 + 0xf) = auVar92._0_8_;
      *(ulong *)(param_5 + 0x17) =
           CONCAT26((short)(int)(float)(int)*pfVar21,
                    CONCAT24((short)(int)(float)(int)pfVar21[2],
                             CONCAT22((short)(int)(float)(int)pfVar21[1],
                                      (short)(int)(float)(int)(*(float *)puVar23 * fVar48))));
    }
    else {
LAB_00fe8094:
      puVar22 = (undefined8 *)0x0;
    }
    uVar29 = *(uint *)(param_4 + 8);
    uVar20 = 1;
    *(undefined *)((long)param_5 + 0x69) = 0;
    uVar26 = uVar29 & uVar27 & uVar26;
    *(char *)(param_5 + 0x1e) = (char)uVar26;
    if ((param_2 == (float *)0x0) || (uVar26 == 0)) goto LAB_00fe8790;
    pVar1 = (unkbyte9 *)(param_3 + 2);
    uVar20 = *(undefined8 *)(param_3 + 6);
    uVar66 = (undefined)((ulong)uVar20 >> 8);
    uVar62 = (undefined)((ulong)uVar20 >> 0x10);
    uVar63 = (undefined)((ulong)uVar20 >> 0x18);
    uVar65 = (undefined)((ulong)uVar20 >> 0x20);
    uVar73 = (undefined)((ulong)uVar20 >> 0x28);
    uVar75 = (undefined)((ulong)uVar20 >> 0x30);
    uVar76 = (undefined)((ulong)uVar20 >> 0x38);
    auVar6[9] = uVar66;
    auVar6._0_9_ = *pVar1;
    auVar6[10] = uVar62;
    auVar6[0xb] = uVar63;
    auVar6[0xc] = uVar65;
    auVar6[0xd] = uVar73;
    auVar6[0xe] = uVar75;
    auVar6[0xf] = uVar76;
    auVar83 = NEON_fcmle(auVar6,0,4);
    auVar4[10] = 0xfe;
    auVar4._0_10_ = (unkuint10)0x42fe000042fe0000;
    auVar4[0xb] = 0x42;
    auVar4._12_2_ = 0;
    auVar4[0xe] = 0xfe;
    auVar4[0xf] = 0x42;
    auVar7[9] = uVar66;
    auVar7._0_9_ = *pVar1;
    auVar7[10] = uVar62;
    auVar7[0xb] = uVar63;
    auVar7[0xc] = uVar65;
    auVar7[0xd] = uVar73;
    auVar7[0xe] = uVar75;
    auVar7[0xf] = uVar76;
    auVar92 = NEON_fcmge(auVar7,auVar4,4);
    auVar5[10] = 0xfe;
    auVar5._0_10_ = (unkuint10)0x42fe000042fe0000;
    auVar5[0xb] = 0x42;
    auVar5._12_2_ = 0;
    auVar5[0xe] = 0xfe;
    auVar5[0xf] = 0x42;
    auVar8[9] = uVar66;
    auVar8._0_9_ = *pVar1;
    auVar8[10] = uVar62;
    auVar8[0xb] = uVar63;
    auVar8[0xc] = uVar65;
    auVar8[0xd] = uVar73;
    auVar8[0xe] = uVar75;
    auVar8[0xf] = uVar76;
    auVar92 = NEON_bsl(auVar92,auVar5,auVar8,1);
    fVar48 = (float)CONCAT13(auVar92[3] & ~auVar83[3],
                             CONCAT12(auVar92[2] & ~auVar83[2],
                                      CONCAT11(auVar92[1] & ~auVar83[1],auVar92[0] & ~auVar83[0])));
    auVar91._0_8_ =
         CONCAT17(auVar92[7] & ~auVar83[7],
                  CONCAT16(auVar92[6] & ~auVar83[6],
                           CONCAT15(auVar92[5] & ~auVar83[5],
                                    CONCAT14(auVar92[4] & ~auVar83[4],fVar48))));
    auVar91[8] = auVar92[8] & ~auVar83[8];
    auVar91[9] = auVar92[9] & ~auVar83[9];
    auVar91[10] = auVar92[10] & ~auVar83[10];
    auVar91[0xb] = auVar92[0xb] & ~auVar83[0xb];
    auVar93[0xc] = auVar92[0xc] & ~auVar83[0xc];
    auVar93._0_12_ = auVar91;
    auVar93[0xd] = auVar92[0xd] & ~auVar83[0xd];
    auVar93[0xe] = auVar92[0xe] & ~auVar83[0xe];
    auVar93[0xf] = auVar92[0xf] & ~auVar83[0xf];
    uVar12 = CONCAT12((char)(int)(float)((ulong)auVar91._0_8_ >> 0x20),(short)(int)fVar48) &
             0xff00ff;
    *(uint *)((long)param_5 + 0x3d) =
         CONCAT13((char)(int)auVar93._12_4_,
                  CONCAT12((char)(int)auVar91._8_4_,CONCAT11((char)(uVar12 >> 0x10),(char)uVar12)));
    if (puVar22 != (undefined8 *)0x0) {
      uVar66 = (undefined)(int)(*(float *)puVar22 * 128.0);
      if (((int)(*(float *)puVar22 * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x41) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 4) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x21) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 1) * 128.0);
      if (((int)(*(float *)(puVar22 + 1) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x43) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0xc) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x22) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 2) * 128.0);
      if (((int)(*(float *)(puVar22 + 2) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x45) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x14) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x23) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 3) * 128.0);
      if (((int)(*(float *)(puVar22 + 3) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x47) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x1c) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x24) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 4) * 128.0);
      if (((int)(*(float *)(puVar22 + 4) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x49) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x24) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x25) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 5) * 128.0);
      if (((int)(*(float *)(puVar22 + 5) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x4b) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x2c) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x26) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 6) * 128.0);
      if (((int)(*(float *)(puVar22 + 6) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x4d) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x34) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x27) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 7) * 128.0);
      if (((int)(*(float *)(puVar22 + 7) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x4f) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x3c) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x28) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 8) * 128.0);
      if (((int)(*(float *)(puVar22 + 8) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x51) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x44) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x29) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 9) * 128.0);
      if (((int)(*(float *)(puVar22 + 9) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x53) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x4c) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x2a) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 10) * 128.0);
      if (((int)(*(float *)(puVar22 + 10) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x55) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x54) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x2b) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 0xb) * 128.0);
      if (((int)(*(float *)(puVar22 + 0xb) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x57) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x5c) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x2c) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 0xc) * 128.0);
      if (((int)(*(float *)(puVar22 + 0xc) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x59) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 100) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x2d) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 0xd) * 128.0);
      if (((int)(*(float *)(puVar22 + 0xd) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x5b) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x6c) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x2e) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 0xe) * 128.0);
      if (((int)(*(float *)(puVar22 + 0xe) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x5d) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x74) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x2f) = uVar66;
      uVar66 = (undefined)(int)(*(float *)(puVar22 + 0xf) * 128.0);
      if (((int)(*(float *)(puVar22 + 0xf) * 128.0) & 0xff80U) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)((long)param_5 + 0x5f) = uVar66;
      uVar26 = (uint)(*(float *)((long)puVar22 + 0x7c) * 128.0);
      uVar66 = (undefined)uVar26;
      if ((uVar26 & 0xff80) != 0) {
        uVar66 = 0x80;
      }
      *(undefined *)(param_5 + 0x30) = uVar66;
      uVar26 = ((int)(param_2[0x39] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
      uVar66 = (undefined)(uVar26 >> 7);
      if ((uVar26 >> 7 & 0xffe0) != 0) {
        uVar66 = 0x20;
      }
      *(undefined *)((long)param_5 + 0x61) = uVar66;
      uVar26 = ((int)(param_2[0x3a] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
      uVar66 = (undefined)(uVar26 >> 7);
      if ((uVar26 >> 7 & 0xffe0) != 0) {
        uVar66 = 0x20;
      }
      *(undefined *)(param_5 + 0x31) = uVar66;
      uVar26 = ((int)(param_2[0x3b] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
      uVar66 = (undefined)(uVar26 >> 7);
      if ((uVar26 >> 7 & 0xffe0) != 0) {
        uVar66 = 0x20;
      }
      *(undefined *)((long)param_5 + 99) = uVar66;
      uVar26 = ((int)(param_2[0x3c] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
      uVar66 = (undefined)(uVar26 >> 7);
      if ((uVar26 >> 7 & 0xffe0) != 0) {
        uVar66 = 0x20;
      }
      *(undefined *)(param_5 + 0x32) = uVar66;
      uVar26 = ((int)(param_2[0x3d] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
      uVar66 = (undefined)(uVar26 >> 7);
      if ((uVar26 >> 7 & 0xffe0) != 0) {
        uVar66 = 0x20;
      }
      *(undefined *)((long)param_5 + 0x65) = uVar66;
      uVar26 = ((int)(param_2[0x3e] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
      uVar66 = (undefined)(uVar26 >> 7);
      if ((uVar26 >> 7 & 0xffe0) != 0) {
        uVar66 = 0x20;
      }
      *(undefined *)(param_5 + 0x33) = uVar66;
      uVar26 = ((int)(param_2[0x3f] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
      uVar66 = (undefined)(uVar26 >> 7);
      if ((uVar26 >> 7 & 0xffe0) != 0) {
        uVar66 = 0x20;
      }
      *(undefined *)((long)param_5 + 0x67) = uVar66;
      uVar26 = ((int)(param_2[0x40] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
      uVar20 = 1;
      uVar66 = (undefined)(uVar26 >> 7);
      if ((uVar26 >> 7 & 0xffe0) != 0) {
        uVar66 = 0x20;
      }
      *(undefined *)(param_5 + 0x35) = 1;
      *(undefined *)(param_5 + 0x34) = uVar66;
      uVar95 = *(undefined8 *)(param_1 + 0x4c);
      uVar90 = *(undefined8 *)(param_1 + 0x44);
      uVar66 = (undefined)((ulong)uVar90 >> 0x20);
      uVar62 = (undefined)((ulong)uVar90 >> 0x28);
      uVar63 = (undefined)((ulong)uVar95 >> 8);
      uVar65 = (undefined)((ulong)uVar95 >> 0x20);
      uVar73 = (undefined)((ulong)uVar95 >> 0x28);
      uVar90 = NEON_ext(CONCAT17(uVar73,CONCAT16(uVar65,CONCAT15(uVar63,CONCAT14((char)uVar95,
                                                                                 CONCAT13(uVar62,
                                                  CONCAT12(uVar66,(short)uVar90)))))),
                        CONCAT17(uVar73,CONCAT16(uVar65,CONCAT15(uVar63,CONCAT14((char)uVar95,
                                                                                 CONCAT13(uVar62,
                                                  CONCAT12(uVar66,(short)uVar90)))))),4,1);
      *(undefined8 *)(param_5 + 0x36) = uVar90;
      uVar26 = *(uint *)(param_1 + 0x54);
      uVar27 = 0;
      if (uVar26 != 0) {
        uVar27 = 0x10000 / uVar26;
      }
      *(uint *)(param_5 + 0x3e) = uVar27;
      *(uint *)(param_5 + 0x40) = uVar27;
      iVar19 = (int)((1.0 / ((double)(ulong)uVar26 + (double)(ulong)uVar26) + -0.5) * 65536.0);
      *(int *)(param_5 + 0x3a) = iVar19;
      *(int *)(param_5 + 0x3c) = iVar19;
      goto LAB_00fe8790;
    }
    pcVar16 = (char *)CamX::Log::GroupToString(0x200000);
    uVar20 = CamX::Log::GetFileName
                       ("vendor/qcom/proprietary/camx-lib/hwl/iqsetting/cc141setting.cpp");
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x16d7cc,(char *)0x1,0x157fc3,pcVar16,
               uVar20,"CalculateHWSetting");
    if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) == 1) &&
       (((byte)PTR_g_traceInfo_010f56f0[2] >> 5 & 1) != 0)) {
      uStack_2d8 = 0;
      local_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      local_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      local_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      local_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      local_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      local_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      local_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_358 = 0;
      local_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      local_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      local_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      local_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      FUN_00284260(&local_360,0x200,"[ERROR]Invalid AI LUT");
      uVar17 = atrace_get_enabled_tags();
      goto joined_r0x00fe8834;
    }
  }
  uVar20 = 0;
LAB_00fe8790:
  if (*(long *)(lVar3 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar20;
}


// ===== 0xee9730 FUN_00fe94f0 @ 00fe94f0

/* WARNING: Removing unreachable block (ram,0x00feb924) */
/* WARNING: Removing unreachable block (ram,0x00feb930) */
/* WARNING: Removing unreachable block (ram,0x00febc84) */
/* WARNING: Removing unreachable block (ram,0x00febc90) */
/* WARNING: Removing unreachable block (ram,0x00fec490) */
/* WARNING: Removing unreachable block (ram,0x00fec49c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fe94f0(long param_1,undefined (*param_2) [16],uint *param_3,long param_4,
                 undefined2 *param_5)

{
  undefined (*pauVar1) [16];
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  uint6 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  uint6 uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  float fVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  float fVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  bool bVar38;
  bool bVar39;
  bool bVar40;
  char *pcVar41;
  undefined8 uVar42;
  ulong uVar43;
  uint uVar44;
  undefined (*pauVar45) [16];
  undefined8 uVar46;
  long lVar47;
  float *pfVar48;
  int iVar49;
  long lVar50;
  float *pfVar51;
  undefined8 uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  uint uVar57;
  float fVar58;
  float fVar59;
  undefined auVar60 [16];
  undefined auVar61 [16];
  float fVar62;
  undefined auVar63 [16];
  undefined auVar64 [16];
  float fVar65;
  float fVar66;
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  float fVar71;
  undefined auVar72 [16];
  undefined auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined uVar79;
  undefined uVar80;
  undefined uVar81;
  undefined uVar82;
  float fVar83;
  byte bVar84;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  undefined auVar85 [16];
  byte bVar100;
  float fVar101;
  float fVar102;
  undefined4 uVar103;
  float fVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  float fVar107;
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined4 uVar111;
  undefined4 uVar112;
  int iVar113;
  int iVar118;
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar120 [13];
  float fVar119;
  undefined auVar121 [16];
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  undefined uVar126;
  undefined uVar127;
  undefined auVar128 [16];
  undefined auVar129 [16];
  undefined auVar130 [16];
  undefined auVar131 [16];
  undefined uVar132;
  undefined uVar133;
  undefined auVar134 [16];
  undefined auVar135 [16];
  undefined auVar137 [12];
  undefined auVar136 [16];
  undefined auVar138 [16];
  undefined auVar139 [16];
  undefined auVar140 [16];
  undefined4 uVar141;
  undefined auVar142 [16];
  undefined auVar143 [16];
  float fVar144;
  float fVar146;
  float fVar147;
  float fVar148;
  undefined auVar145 [16];
  float fVar149;
  uint uVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar156;
  float fVar157;
  float fVar158;
  undefined auVar155 [16];
  float fVar159;
  float fVar160;
  float fVar161;
  undefined4 uVar162;
  float fVar164;
  float fVar165;
  float fVar166;
  undefined auVar163 [16];
  float local_5c0;
  float local_5bc;
  undefined8 *local_598;
  float local_54c;
  float fStack_548;
  float local_544;
  float fStack_540;
  float local_53c;
  undefined8 local_538;
  float local_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 uStack_508;
  undefined4 local_504;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  float local_310 [4];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  float fStack_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  byte local_1d0;
  byte bStack_1cf;
  byte bStack_1ce;
  byte bStack_1cd;
  byte bStack_1cc;
  byte bStack_1cb;
  byte bStack_1ca;
  byte bStack_1c9;
  float fStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  float local_19c [3];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  float local_e4;
  float fStack_e0;
  float local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined auVar122 [16];
  
  lVar6 = tpidr_el0;
  local_b8 = *(long *)(lVar6 + 0x28);
  if ((((param_1 == 0) || (param_3 == (uint *)0x0)) || (param_4 == 0)) ||
     (param_5 == (undefined2 *)0x0)) {
    pcVar41 = (char *)CamX::Log::GroupToString(0x200000);
    uVar42 = CamX::Log::GetFileName
                       ("vendor/qcom/proprietary/camx-lib/hwl/iqsetting/cc151setting.cpp");
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x16d7cc,(char *)0x1,0x18f9e7,pcVar41,
               uVar42,"CalculateHWSetting",(ulong)(param_1 != 0),(uint)(param_3 != (uint *)0x0),
               (uint)(param_4 != 0),(uint)(param_5 != (undefined2 *)0x0));
    if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) == 1) &&
       (((byte)PTR_g_traceInfo_010f56f0[2] >> 5 & 1) != 0)) {
      uStack_4a8 = 0;
      local_4b0 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      local_490 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      local_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      local_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      local_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      local_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      local_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      local_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      local_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      local_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      local_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      local_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_4b8 = 0;
      local_4c0 = 0;
      uStack_518 = 0;
      uStack_514 = 0;
      fStack_520 = 0.0;
      fStack_51c = 0.0;
      uStack_508 = 0;
      local_504 = 0;
      local_510 = 0;
      local_50c = 0;
      uStack_4f8 = 0;
      local_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      local_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      fStack_528 = 0.0;
      fStack_524 = 0.0;
      local_530 = 0.0;
      fStack_52c = 0.0;
      FUN_00284260(&local_530,0x200,"[ERROR]pInput %d pReserveType %d pModuleEna %d pOut %d",
                   (ulong)(param_1 != 0),(uint)(param_3 != (uint *)0x0),(uint)(param_4 != 0),
                   (uint)(param_5 != (undefined2 *)0x0));
      uVar43 = atrace_get_enabled_tags();
      if ((uVar43 & 0xc00) != 0) goto LAB_00fe9ae8;
LAB_00fe969c:
      uVar43 = atrace_get_enabled_tags();
joined_r0x00fe96a4:
      if ((uVar43 & 0xc00) != 0) {
        atrace_end_body();
        uVar42 = 0;
        if (*(long *)(lVar6 + 0x28) == local_b8) {
          return;
        }
        goto LAB_00feb698;
      }
    }
  }
  else {
    uVar44 = *(uint *)(param_1 + 0x40);
    fStack_260 = 0.0;
    local_310[0] = 0.0;
    local_538 = 0;
    local_53c = 0.0;
    uStack_328 = 0;
    local_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_2f8 = 0;
    local_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    local_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    local_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    local_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    local_280 = 0;
    uStack_268 = 0;
    local_270 = 0;
    uStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    if (param_2 == (undefined (*) [16])0x0) {
      uVar53 = 0;
    }
    else {
      uVar53 = (uint)*(float *)(param_2[2] + 4);
    }
    uVar4 = *param_3;
    uVar5 = (undefined2)uVar4;
    param_5[0xd] = uVar5;
    param_5[0x28] = uVar5;
    param_5[0x29] = uVar5;
    *param_5 = (short)*(undefined4 *)(param_4 + 4);
    param_5[0x2a] = (ushort)*(undefined4 *)(param_4 + 8) & (ushort)uVar53 & (ushort)uVar44;
    param_5[0x2b] = (ushort)*(undefined4 *)(param_4 + 0xc) & (ushort)uVar53 & (ushort)uVar44;
    if ((param_2 != (undefined (*) [16])0x0) || (uVar44 != 1)) {
      pauVar45 = *(undefined (**) [16])(param_1 + 0x5b8);
      pfVar48 = (float *)0x0;
      if (param_2 != (undefined (*) [16])0x0) {
        pfVar48 = (float *)((long)&local_538 + 4);
      }
      pauVar1 = param_2;
      if (pauVar45 != (undefined (*) [16])0x0) {
        pfVar48 = (float *)(pauVar45[2] + 4);
        pauVar1 = pauVar45;
      }
      if (pauVar1 != (undefined (*) [16])0x0) {
        auVar63 = *(undefined (*) [16])(pauVar1[1] + 4);
        auVar68 = *(undefined (*) [16])(*pauVar1 + 4);
        fVar75 = (float)(0x80 << (ulong)(uVar4 & 0x1f));
        auVar69._2_2_ = (short)(int)(float)(int)(auVar68._4_4_ * fVar75);
        auVar69._0_2_ = (short)(int)(float)(int)(auVar68._0_4_ * fVar75);
        auVar69._4_2_ = (short)(int)(float)(int)(auVar68._8_4_ * fVar75);
        auVar69._6_2_ = (short)(int)(float)(int)(auVar68._12_4_ * fVar75);
        auVar69._8_2_ = (short)(int)(float)(int)(auVar63._0_4_ * fVar75);
        auVar69._10_2_ = (short)(int)(float)(int)(auVar63._4_4_ * fVar75);
        auVar69._12_2_ = (short)(int)(float)(int)(auVar63._8_4_ * fVar75);
        auVar69._14_2_ = (short)(int)(float)(int)(auVar63._12_4_ * fVar75);
        auVar63 = a64_TBL(ZEXT816(0),auVar69,_DAT_001e4890);
        *(long *)(param_5 + 5) = auVar63._8_8_;
        *(long *)(param_5 + 1) = auVar63._0_8_;
        param_5[9] = (short)(int)(*(float *)*pauVar1 * fVar75);
      }
      if (((ulong)param_2 | (ulong)pauVar45) != 0) {
        puVar56 = (undefined8 *)0x4;
        if (param_2 != (undefined (*) [16])0x0) {
          puVar56 = &local_538;
        }
        pfVar51 = (float *)0x8;
        if (param_2 != (undefined (*) [16])0x0) {
          pfVar51 = &local_53c;
        }
        if (pauVar45 != (undefined (*) [16])0x0) {
          puVar56 = (undefined8 *)(pauVar45[2] + 8);
        }
        if (pauVar45 != (undefined (*) [16])0x0) {
          pfVar51 = (float *)(pauVar45[2] + 0xc);
        }
        param_5[10] = (short)(int)*(float *)puVar56;
        param_5[0xb] = (short)(int)*pfVar51;
        param_5[0xc] = (short)(int)*pfVar48;
      }
      puVar56 = (undefined8 *)(param_5 + 0x1a4);
      *(undefined4 *)(param_5 + 0x24c) = 0;
      *(undefined8 *)(param_5 + 0x230) = 0;
      *(undefined8 *)(param_5 + 0x22c) = 0;
      *(undefined8 *)(param_5 + 0x1a8) = 0;
      *puVar56 = 0;
      *(undefined8 *)(param_5 + 0x1b0) = 0;
      *(undefined8 *)(param_5 + 0x1ac) = 0;
      if (*(int *)(param_1 + 0x40) == 1) {
        if ((((*(int *)(param_1 + 0x144) == 1) || (*(int *)(param_1 + 0x264) == 1)) ||
            (*(int *)(param_1 + 900) == 1)) || (*(int *)(param_1 + 0x4a4) == 1)) {
          uVar42 = *(undefined8 *)(param_1 + 0x100);
          *(undefined4 *)(param_5 + 0x1b8) = *(undefined4 *)(param_1 + 0x108);
          *(undefined8 *)(param_5 + 0x1b4) = uVar42;
          uVar42 = *(undefined8 *)(param_1 + 0x10c);
          *(undefined4 *)(param_5 + 0x1d0) = *(undefined4 *)(param_1 + 0x114);
          *(undefined8 *)(param_5 + 0x1cc) = uVar42;
          uVar42 = *(undefined8 *)(param_1 + 0x220);
          *(undefined4 *)(param_5 + 0x1be) = *(undefined4 *)(param_1 + 0x228);
          *(undefined8 *)(param_5 + 0x1ba) = uVar42;
          uVar42 = *(undefined8 *)(param_1 + 0x22c);
          *(undefined4 *)(param_5 + 0x1d6) = *(undefined4 *)(param_1 + 0x234);
          *(undefined8 *)(param_5 + 0x1d2) = uVar42;
          uVar42 = *(undefined8 *)(param_1 + 0x340);
          *(undefined4 *)(param_5 + 0x1c4) = *(undefined4 *)(param_1 + 0x348);
          *(undefined8 *)(param_5 + 0x1c0) = uVar42;
          uVar42 = *(undefined8 *)(param_1 + 0x34c);
          *(undefined4 *)(param_5 + 0x1dc) = *(undefined4 *)(param_1 + 0x354);
          *(undefined8 *)(param_5 + 0x1d8) = uVar42;
          uVar42 = *(undefined8 *)(param_1 + 0x460);
          *(undefined4 *)(param_5 + 0x1ca) = *(undefined4 *)(param_1 + 0x468);
          *(undefined8 *)(param_5 + 0x1c6) = uVar42;
          uVar42 = *(undefined8 *)(param_1 + 0x46c);
          *(undefined4 *)(param_5 + 0x1e2) = *(undefined4 *)(param_1 + 0x474);
          *(undefined8 *)(param_5 + 0x1de) = uVar42;
          *(undefined4 *)(param_5 + 0x24c) = *(undefined4 *)(param_1 + 0x140);
          if (pauVar1 == (undefined (*) [16])0x0) {
LAB_00fe9b80:
            fVar160 = 1.0;
            uVar133 = 0;
            uVar132 = 0;
            uVar127 = 0;
            uVar126 = 0;
            fVar59 = 0.0;
            bVar38 = true;
            fVar66 = 0.0;
            fVar102 = 0.0;
            fVar107 = 0.0;
            fVar74 = 1.0;
            uVar79 = 0;
            uVar80 = 0;
            uVar81 = 0;
            uVar82 = 0;
            fVar75 = 1.0;
          }
          else {
            fVar71 = *(float *)(pauVar1[1] + 0xc);
            fVar159 = *(float *)pauVar1[2];
            fVar58 = *(float *)(pauVar1[1] + 4);
            fVar62 = *(float *)(pauVar1[1] + 8);
            fVar102 = *(float *)(*pauVar1 + 8);
            fVar65 = *(float *)(*pauVar1 + 0xc);
            fVar74 = *(float *)pauVar1[1];
            fVar66 = *(float *)*pauVar1;
            fVar119 = *(float *)(*pauVar1 + 4);
            fVar75 = (float)NEON_fnmsub(fVar74,fVar159,fVar58 * fVar71);
            fVar107 = (float)NEON_fnmsub(fVar71,fVar65,fVar74 * fVar62);
            uVar111 = NEON_fnmsub(fVar66,fVar75,fVar119 * (fVar159 * fVar65 - fVar58 * fVar62));
            fVar104 = (float)NEON_fmadd(fVar102,fVar107,uVar111);
            if ((double)ABS(fVar104) < DAT_001035b8) {
              if (((byte)PTR_g_logInfo_010f56f8[0x2a] >> 5 & 1) != 0) {
                pcVar41 = (char *)CamX::Log::GroupToString(0x200000);
                uVar42 = CamX::Log::GetFileName
                                   (
                                   "vendor/qcom/proprietary/camx-lib/hwl/iqsetting/cc151setting.cpp"
                                   );
                CamX::Log::LogSystem
                          ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x17b054,
                           pcVar41,uVar42,"FindInverseCCMMatrix");
              }
              goto LAB_00fe9b80;
            }
            bVar38 = false;
            fVar104 = 1.0 / fVar104;
            fVar101 = (float)NEON_fnmsub(fVar71,fVar102,fVar159 * fVar119);
            fVar59 = (float)NEON_fnmsub(fVar58,fVar119,fVar74 * fVar102);
            fVar160 = (float)NEON_fnmsub(fVar66,fVar159,fVar62 * fVar102);
            fVar102 = (float)NEON_fnmsub(fVar65,fVar102,fVar66 * fVar58);
            fVar74 = (float)NEON_fnmsub(fVar66,fVar74,fVar119 * fVar65);
            fVar75 = fVar75 * fVar104;
            fVar71 = (float)NEON_fnmsub(fVar119,fVar62,fVar66 * fVar71);
            fVar107 = fVar107 * fVar104;
            fVar101 = fVar101 * fVar104;
            uVar126 = SUB41(fVar101,0);
            uVar127 = (undefined)((uint)fVar101 >> 8);
            uVar132 = (undefined)((uint)fVar101 >> 0x10);
            uVar133 = (undefined)((uint)fVar101 >> 0x18);
            fVar66 = (fVar58 * fVar62 - fVar159 * fVar65) * fVar104;
            fVar59 = fVar59 * fVar104;
            fVar160 = fVar160 * fVar104;
            fVar102 = fVar102 * fVar104;
            fVar74 = fVar74 * fVar104;
            fVar71 = fVar71 * fVar104;
            uVar79 = SUB41(fVar71,0);
            uVar80 = (undefined)((uint)fVar71 >> 8);
            uVar81 = (undefined)((uint)fVar71 >> 0x10);
            uVar82 = (undefined)((uint)fVar71 >> 0x18);
          }
          uVar42 = *(undefined8 *)(param_1 + 0x10c);
          local_1d0 = (byte)uVar42;
          bStack_1cf = (byte)((ulong)uVar42 >> 8);
          bStack_1ce = (byte)((ulong)uVar42 >> 0x10);
          bStack_1cd = (byte)((ulong)uVar42 >> 0x18);
          bStack_1cc = (byte)((ulong)uVar42 >> 0x20);
          bStack_1cb = (byte)((ulong)uVar42 >> 0x28);
          bStack_1ca = (byte)((ulong)uVar42 >> 0x30);
          bStack_1c9 = (byte)((ulong)uVar42 >> 0x38);
          uVar52 = *(undefined8 *)(param_1 + 0x22c);
          uVar42 = *(undefined8 *)(param_1 + 0x34c);
          local_510 = *(undefined4 *)(param_1 + 0x348);
          uVar46 = *(undefined8 *)(param_1 + 0x46c);
          local_530 = (float)*(undefined8 *)(param_1 + 0x100);
          fStack_52c = (float)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20);
          fStack_528 = *(float *)(param_1 + 0x108);
          fStack_524 = (float)*(undefined8 *)(param_1 + 0x220);
          fStack_520 = (float)((ulong)*(undefined8 *)(param_1 + 0x220) >> 0x20);
          fStack_51c = *(float *)(param_1 + 0x228);
          fStack_1c8 = *(float *)(param_1 + 0x114);
          local_1bc = *(undefined4 *)(param_1 + 0x234);
          uStack_1c4 = (undefined4)uVar52;
          uStack_1c0 = (undefined4)((ulong)uVar52 >> 0x20);
          uStack_518 = (undefined4)*(undefined8 *)(param_1 + 0x340);
          uStack_514 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20);
          local_1b8 = (undefined4)uVar42;
          uStack_1b4 = (undefined4)((ulong)uVar42 >> 0x20);
          local_50c = (undefined4)*(undefined8 *)(param_1 + 0x460);
          uStack_508 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x460) >> 0x20);
          local_504 = *(undefined4 *)(param_1 + 0x468);
          uStack_1ac = (undefined4)uVar46;
          uStack_1a8 = (undefined4)((ulong)uVar46 >> 0x20);
          local_1b0 = *(undefined4 *)(param_1 + 0x354);
          uStack_1a4 = *(undefined4 *)(param_1 + 0x474);
          if (bVar38) {
            bVar38 = false;
LAB_00fea22c:
            bVar40 = false;
          }
          else {
            fVar159 = *(float *)(param_1 + 0x104);
            fVar144 = *(float *)(param_1 + 0x110);
            fVar149 = *(float *)(param_1 + 0x100);
            fVar65 = *(float *)(param_1 + 0x224);
            fVar146 = *(float *)(param_1 + 0x230);
            fVar154 = *(float *)(param_1 + 0x10c);
            fVar151 = *(float *)(param_1 + 0x220);
            fVar104 = *(float *)(param_1 + 0x344);
            fVar147 = *(float *)(param_1 + 0x350);
            fVar156 = *(float *)(param_1 + 0x22c);
            fVar152 = *(float *)(param_1 + 0x340);
            fVar119 = *(float *)(param_1 + 0x464);
            fVar148 = *(float *)(param_1 + 0x470);
            fVar161 = *(float *)(param_1 + 0x108);
            fVar157 = *(float *)(param_1 + 0x34c);
            fVar71 = (float)CONCAT13(uVar133,CONCAT12(uVar132,CONCAT11(uVar127,uVar126)));
            fVar153 = *(float *)(param_1 + 0x460);
            fVar58 = (float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79)));
            fVar101 = *(float *)(param_1 + 0x114);
            fVar24 = (float)CONCAT13(uVar133,CONCAT12(uVar132,CONCAT11(uVar127,uVar126)));
            fVar164 = *(float *)(param_1 + 0x228);
            fVar158 = *(float *)(param_1 + 0x46c);
            fVar62 = (float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79)));
            fVar83 = *(float *)(param_1 + 0x234);
            fVar165 = *(float *)(param_1 + 0x348);
            auVar85 = NEON_fmov(0x3f800000,4);
            fVar76 = *(float *)(param_1 + 0x354);
            fVar166 = *(float *)(param_1 + 0x468);
            fVar20 = *(float *)(param_1 + 0x474);
            auVar64._0_4_ = fVar159 * fVar71 + fVar149 * fVar75 + fVar161 * fVar59;
            auVar64._4_4_ = fVar65 * fVar71 + fVar151 * fVar75 + fVar164 * fVar59;
            auVar64._8_4_ = fVar104 * fVar71 + fVar152 * fVar75 + fVar165 * fVar59;
            auVar64._12_4_ = fVar119 * fVar71 + fVar153 * fVar75 + fVar166 * fVar59;
            auVar67._0_4_ = fVar159 * fVar160 + fVar149 * fVar66 + fVar161 * fVar102;
            auVar67._4_4_ = fVar65 * fVar160 + fVar151 * fVar66 + fVar164 * fVar102;
            auVar67._8_4_ = fVar104 * fVar160 + fVar152 * fVar66 + fVar165 * fVar102;
            auVar67._12_4_ = fVar119 * fVar160 + fVar153 * fVar66 + fVar166 * fVar102;
            fVar71 = fVar65 * fVar58 + fVar151 * fVar107 + fVar164 * fVar74;
            fVar104 = fVar104 * fVar58 + fVar152 * fVar107 + fVar165 * fVar74;
            fVar119 = fVar119 * fVar58 + fVar153 * fVar107 + fVar166 * fVar74;
            auVar72._0_4_ = fVar144 * fVar24 + fVar154 * fVar75 + fVar101 * fVar59;
            auVar72._4_4_ = fVar146 * fVar24 + fVar156 * fVar75 + fVar83 * fVar59;
            auVar72._8_4_ = fVar147 * fVar24 + fVar157 * fVar75 + fVar76 * fVar59;
            auVar72._12_4_ = fVar148 * fVar24 + fVar158 * fVar75 + fVar20 * fVar59;
            auVar69 = ZEXT816(0);
            auVar77._0_4_ = fVar144 * fVar160 + fVar154 * fVar66 + fVar101 * fVar102;
            auVar77._4_4_ = fVar146 * fVar160 + fVar156 * fVar66 + fVar83 * fVar102;
            auVar77._8_4_ = fVar147 * fVar160 + fVar157 * fVar66 + fVar76 * fVar102;
            auVar77._12_4_ = fVar148 * fVar160 + fVar158 * fVar66 + fVar20 * fVar102;
            fVar75 = fVar146 * fVar62 + fVar156 * fVar107 + fVar83 * fVar74;
            fVar66 = fVar147 * fVar62 + fVar157 * fVar107 + fVar76 * fVar74;
            fVar65 = fVar148 * fVar62 + fVar158 * fVar107 + fVar20 * fVar74;
            auVar64 = NEON_fminnm(auVar64,auVar85,4);
            auVar67 = NEON_fminnm(auVar67,auVar85,4);
            auVar68[4] = SUB41(fVar71,0);
            auVar68._0_4_ = fVar159 * fVar58 + fVar149 * fVar107 + fVar161 * fVar74;
            auVar68[5] = (char)((uint)fVar71 >> 8);
            auVar68[6] = (char)((uint)fVar71 >> 0x10);
            auVar68[7] = (char)((uint)fVar71 >> 0x18);
            auVar68[8] = SUB41(fVar104,0);
            auVar68[9] = (char)((uint)fVar104 >> 8);
            auVar68[10] = (char)((uint)fVar104 >> 0x10);
            auVar68[0xb] = (char)((uint)fVar104 >> 0x18);
            auVar68[0xc] = SUB41(fVar119,0);
            auVar68[0xd] = (char)((uint)fVar119 >> 8);
            auVar68[0xe] = (char)((uint)fVar119 >> 0x10);
            auVar68[0xf] = (char)((uint)fVar119 >> 0x18);
            auVar68 = NEON_fminnm(auVar68,auVar85,4);
            auVar72 = NEON_fminnm(auVar72,auVar85,4);
            auVar77 = NEON_fminnm(auVar77,auVar85,4);
            auVar63[4] = SUB41(fVar75,0);
            auVar63._0_4_ = fVar144 * fVar62 + fVar154 * fVar107 + fVar101 * fVar74;
            auVar63[5] = (char)((uint)fVar75 >> 8);
            auVar63[6] = (char)((uint)fVar75 >> 0x10);
            auVar63[7] = (char)((uint)fVar75 >> 0x18);
            auVar63[8] = SUB41(fVar66,0);
            auVar63[9] = (char)((uint)fVar66 >> 8);
            auVar63[10] = (char)((uint)fVar66 >> 0x10);
            auVar63[0xb] = (char)((uint)fVar66 >> 0x18);
            auVar63[0xc] = SUB41(fVar65,0);
            auVar63[0xd] = (char)((uint)fVar65 >> 8);
            auVar63[0xe] = (char)((uint)fVar65 >> 0x10);
            auVar63[0xf] = (char)((uint)fVar65 >> 0x18);
            auVar121 = NEON_fminnm(auVar63,auVar85,4);
            auVar64 = NEON_fmaxnm(auVar64,auVar69,4);
            auVar67 = NEON_fmaxnm(auVar67,auVar69,4);
            auVar114 = NEON_fmaxnm(auVar68,auVar69,4);
            auVar63 = NEON_fmaxnm(auVar72,auVar69,4);
            auVar68 = NEON_fmaxnm(auVar77,auVar69,4);
            auVar69 = NEON_fmaxnm(auVar121,auVar69,4);
            local_530 = auVar64._0_4_;
            fStack_52c = auVar67._0_4_;
            fStack_528 = auVar114._0_4_;
            fStack_524 = auVar64._4_4_;
            fStack_520 = auVar67._4_4_;
            fStack_51c = auVar114._4_4_;
            uStack_518 = auVar64._8_4_;
            uStack_514 = auVar67._8_4_;
            local_510 = auVar114._8_4_;
            local_50c = auVar64._12_4_;
            uStack_508 = auVar67._12_4_;
            local_504 = auVar114._12_4_;
            local_1d0 = auVar63[0];
            bStack_1cf = auVar63[1];
            bStack_1ce = auVar63[2];
            bStack_1cd = auVar63[3];
            bStack_1cc = auVar68[0];
            bStack_1cb = auVar68[1];
            bStack_1ca = auVar68[2];
            bStack_1c9 = auVar68[3];
            fStack_1c8 = auVar69._0_4_;
            uStack_1c4 = auVar63._4_4_;
            uStack_1c0 = auVar68._4_4_;
            local_1bc = auVar69._4_4_;
            local_1b8 = auVar63._8_4_;
            uStack_1b4 = auVar68._8_4_;
            local_1b0 = auVar69._8_4_;
            uStack_1ac = auVar63._12_4_;
            uStack_1a8 = auVar68._12_4_;
            uStack_1a4 = auVar69._12_4_;
            if ((*(int *)(param_1 + 0x120) == 0) && (*(int *)(param_1 + 0x5a4) == 1)) {
              fVar75 = *(float *)(param_1 + 0x118);
              fVar66 = 1.0 - fVar75;
              fStack_528 = (float)NEON_fmadd(fVar75,*(undefined4 *)(param_1 + 0x594),
                                             fVar66 * auVar114._0_4_);
              fVar58 = auVar63._0_4_ * fVar66 + *(float *)(param_1 + 0x598) * fVar75;
              fVar62 = (float)(CONCAT17(bStack_1c9,
                                        CONCAT16(bStack_1ca,
                                                 CONCAT15(bStack_1cb,
                                                          CONCAT14(bStack_1cc,auVar63._0_4_)))) >>
                              0x20) * fVar66 + fVar75 * *(float *)(param_1 + 0x59c);
              fStack_1c8 = (float)NEON_fmadd(fVar75,*(undefined4 *)(param_1 + 0x5a0),
                                             fVar66 * auVar69._0_4_);
              local_1d0 = SUB41(fVar58,0);
              bStack_1cf = (byte)((uint)fVar58 >> 8);
              bStack_1ce = (byte)((uint)fVar58 >> 0x10);
              bStack_1cd = (byte)((uint)fVar58 >> 0x18);
              bStack_1cc = SUB41(fVar62,0);
              bStack_1cb = (byte)((uint)fVar62 >> 8);
              bStack_1ca = (byte)((uint)fVar62 >> 0x10);
              bStack_1c9 = (byte)((uint)fVar62 >> 0x18);
              local_530 = auVar64._0_4_ * fVar66 + *(float *)(param_1 + 0x58c) * fVar75;
              fStack_52c = auVar67._0_4_ * fVar66 + fVar75 * *(float *)(param_1 + 0x590);
            }
            uVar42 = CONCAT44(auVar114._4_4_,auVar67._4_4_);
            auVar121._8_4_ = auVar64._8_4_;
            auVar121._0_8_ = uVar42;
            auVar121._12_4_ = auVar67._8_4_;
            uVar46 = CONCAT44(auVar64._12_4_,auVar114._8_4_);
            auVar30._8_4_ = auVar67._12_4_;
            auVar30._0_8_ = uVar46;
            auVar30._12_4_ = auVar114._12_4_;
            auVar114._8_4_ = fStack_528;
            auVar114._0_8_ = CONCAT44(fStack_52c,local_530);
            auVar114._12_4_ = auVar64._4_4_;
            uVar52 = CONCAT44(auVar63._12_4_,auVar69._8_4_);
            auVar33._8_4_ = auVar68._12_4_;
            auVar33._0_8_ = uVar52;
            auVar33._12_4_ = auVar69._12_4_;
            *(long *)(param_5 + 0x1c0) = auVar121._8_8_;
            *(undefined8 *)(param_5 + 0x1bc) = uVar42;
            *(long *)(param_5 + 0x1c8) = auVar30._8_8_;
            *(undefined8 *)(param_5 + 0x1c4) = uVar46;
            uVar42 = CONCAT17(bStack_1c9,
                              CONCAT16(bStack_1ca,
                                       CONCAT15(bStack_1cb,
                                                CONCAT14(bStack_1cc,
                                                         CONCAT13(bStack_1cd,
                                                                  CONCAT12(bStack_1ce,
                                                                           CONCAT11(bStack_1cf,
                                                                                    local_1d0)))))))
            ;
            auVar31._8_4_ = fStack_1c8;
            auVar31._0_8_ = uVar42;
            auVar31._12_4_ = auVar63._4_4_;
            uVar46 = CONCAT44(auVar69._4_4_,auVar68._4_4_);
            auVar32._8_4_ = auVar63._8_4_;
            auVar32._0_8_ = uVar46;
            auVar32._12_4_ = auVar68._8_4_;
            *(long *)(param_5 + 0x1b8) = auVar114._8_8_;
            *(ulong *)(param_5 + 0x1b4) = CONCAT44(fStack_52c,local_530);
            *(long *)(param_5 + 0x1e0) = auVar33._8_8_;
            *(undefined8 *)(param_5 + 0x1dc) = uVar52;
            *(long *)(param_5 + 0x1d0) = auVar31._8_8_;
            *(undefined8 *)(param_5 + 0x1cc) = uVar42;
            *(long *)(param_5 + 0x1d8) = auVar32._8_8_;
            *(undefined8 *)(param_5 + 0x1d4) = uVar46;
            bVar84 = auVar85[0];
            bVar86 = auVar85[1];
            bVar87 = auVar85[2];
            bVar88 = auVar85[3];
            bVar89 = auVar85[4];
            bVar90 = auVar85[5];
            bVar91 = auVar85[6];
            bVar92 = auVar85[7];
            bVar93 = auVar85[8];
            bVar94 = auVar85[9];
            bVar95 = auVar85[10];
            bVar96 = auVar85[0xb];
            bVar97 = auVar85[0xc];
            bVar98 = auVar85[0xd];
            bVar99 = auVar85[0xe];
            bVar100 = auVar85[0xf];
            if (*(int *)(param_1 + 0x78) == 1) {
              if (param_5[0x2a] == 1) {
                auVar63 = *(undefined (*) [16])(param_1 + 0x80);
                auVar68 = *(undefined (*) [16])(param_1 + 0x90);
                auVar115._8_4_ = 1;
                auVar115._0_8_ = 0x100000001;
                auVar115._12_4_ = 1;
                auVar69 = *(undefined (*) [16])(param_1 + 0xa0);
                auVar64 = *(undefined (*) [16])(param_1 + 0xb0);
                auVar67 = *(undefined (*) [16])(param_1 + 0xc0);
                auVar72 = *(undefined (*) [16])(param_1 + 0xd0);
                auVar120._1_3_ = 0;
                auVar120[0] = auVar68[0];
                auVar120[4] = auVar68[4];
                auVar120._5_3_ = 0;
                auVar120[8] = auVar68[8];
                auVar120._9_3_ = 0;
                auVar120[0xc] = auVar68[0xc];
                auVar122._13_3_ = 0;
                auVar122._0_13_ = auVar120;
                auVar68 = *(undefined (*) [16])(param_1 + 0xe0);
                auVar77 = *(undefined (*) [16])(param_1 + 0xf0);
                auVar128._1_3_ = 0;
                auVar128[0] = auVar64[0];
                auVar128[4] = auVar64[4];
                auVar128._5_3_ = 0;
                auVar128[8] = auVar64[8];
                auVar128._9_3_ = 0;
                auVar128[0xc] = auVar64[0xc];
                auVar128._13_3_ = 0;
                auVar134._1_3_ = 0;
                auVar134[0] = auVar72[0];
                auVar134[4] = auVar72[4];
                auVar134._5_3_ = 0;
                auVar134[8] = auVar72[8];
                auVar134._9_3_ = 0;
                auVar134[0xc] = auVar72[0xc];
                auVar134._13_3_ = 0;
                auVar138._1_3_ = 0;
                auVar138[0] = auVar68[0];
                auVar138[4] = auVar68[4];
                auVar138._5_3_ = 0;
                auVar138[8] = auVar68[8];
                auVar138._9_3_ = 0;
                auVar138[0xc] = auVar68[0xc];
                auVar138._13_3_ = 0;
                auVar142._1_3_ = 0;
                auVar142[0] = auVar77[0];
                auVar142[4] = auVar77[4];
                auVar142._5_3_ = 0;
                auVar142[8] = auVar77[8];
                auVar142._9_3_ = 0;
                auVar142[0xc] = auVar77[0xc];
                auVar142._13_3_ = 0;
                auVar17._1_3_ = 0;
                auVar17[0] = auVar63[0];
                auVar17[4] = auVar63[4];
                auVar17._5_3_ = 0;
                auVar17[8] = auVar63[8];
                auVar17._9_3_ = 0;
                auVar17[0xc] = auVar63[0xc];
                auVar17._13_3_ = 0;
                auVar64 = NEON_cmeq(auVar17,auVar115,4);
                auVar72 = NEON_cmeq(auVar122,auVar115,4);
                auVar21._1_3_ = 0;
                auVar21[0] = auVar69[0];
                auVar21[4] = auVar69[4];
                auVar21._5_3_ = 0;
                auVar21[8] = auVar69[8];
                auVar21._9_3_ = 0;
                auVar21[0xc] = auVar69[0xc];
                auVar21._13_3_ = 0;
                auVar77 = NEON_cmeq(auVar21,auVar115,4);
                auVar85 = NEON_cmeq(auVar128,auVar115,4);
                auVar25._1_3_ = 0;
                auVar25[0] = auVar67[0];
                auVar25[4] = auVar67[4];
                auVar25._5_3_ = 0;
                auVar25[8] = auVar67[8];
                auVar25._9_3_ = 0;
                auVar25[0xc] = auVar67[0xc];
                auVar25._13_3_ = 0;
                auVar67 = NEON_cmeq(auVar25,auVar115,4);
                auVar63 = NEON_cmeq(auVar134,auVar115,4);
                auVar68 = NEON_cmeq(auVar138,auVar115,4);
                auVar69 = NEON_cmeq(auVar142,auVar115,4);
                auVar78._0_8_ =
                     CONCAT17(bVar92 & auVar77[7],
                              CONCAT16(bVar91 & auVar77[6],
                                       CONCAT15(bVar90 & auVar77[5],
                                                CONCAT14(bVar89 & auVar77[4],
                                                         CONCAT13(bVar88 & auVar77[3],
                                                                  CONCAT12(bVar87 & auVar77[2],
                                                                           CONCAT11(bVar86 & auVar77
                                                  [1],bVar84 & auVar77[0])))))));
                auVar78[8] = bVar93 & auVar77[8];
                auVar78[9] = bVar94 & auVar77[9];
                auVar78[10] = bVar95 & auVar77[10];
                auVar78[0xb] = bVar96 & auVar77[0xb];
                auVar78[0xc] = bVar97 & auVar77[0xc];
                auVar78[0xd] = bVar98 & auVar77[0xd];
                auVar78[0xe] = bVar99 & auVar77[0xe];
                auVar78[0xf] = bVar100 & auVar77[0xf];
                local_250 = CONCAT17(bVar92 & auVar64[7],
                                     CONCAT16(bVar91 & auVar64[6],
                                              CONCAT15(bVar90 & auVar64[5],
                                                       CONCAT14(bVar89 & auVar64[4],
                                                                CONCAT13(bVar88 & auVar64[3],
                                                                         CONCAT12(bVar87 & auVar64[2
                                                  ],CONCAT11(bVar86 & auVar64[1],bVar84 & auVar64[0]
                                                            )))))));
                uStack_240._0_2_ = CONCAT11(bVar86 & auVar72[1],bVar84 & auVar72[0]);
                uStack_240._0_3_ = CONCAT12(bVar87 & auVar72[2],(undefined2)uStack_240);
                uStack_240._0_4_ = CONCAT13(bVar88 & auVar72[3],(undefined3)uStack_240);
                uStack_240._0_5_ = CONCAT14(bVar89 & auVar72[4],(undefined4)uStack_240);
                uStack_240._0_6_ = CONCAT15(bVar90 & auVar72[5],(undefined5)uStack_240);
                uStack_240._0_7_ = CONCAT16(bVar91 & auVar72[6],(undefined6)uStack_240);
                uStack_240 = CONCAT17(bVar92 & auVar72[7],(undefined7)uStack_240);
                uStack_228 = auVar78._8_8_;
                local_230 = auVar78._0_8_;
                uStack_218 = CONCAT17(bVar100 & auVar85[0xf],
                                      CONCAT16(bVar99 & auVar85[0xe],
                                               CONCAT15(bVar98 & auVar85[0xd],
                                                        CONCAT14(bVar97 & auVar85[0xc],
                                                                 CONCAT13(bVar96 & auVar85[0xb],
                                                                          CONCAT12(bVar95 & auVar85[
                                                  10],CONCAT11(bVar94 & auVar85[9],
                                                               bVar93 & auVar85[8])))))));
                uStack_220 = CONCAT17(bVar92 & auVar85[7],
                                      CONCAT16(bVar91 & auVar85[6],
                                               CONCAT15(bVar90 & auVar85[5],
                                                        CONCAT14(bVar89 & auVar85[4],
                                                                 CONCAT13(bVar88 & auVar85[3],
                                                                          CONCAT12(bVar87 & auVar85[
                                                  2],CONCAT11(bVar86 & auVar85[1],
                                                              bVar84 & auVar85[0])))))));
                uStack_208 = CONCAT17(bVar100 & auVar67[0xf],
                                      CONCAT16(bVar99 & auVar67[0xe],
                                               CONCAT15(bVar98 & auVar67[0xd],
                                                        CONCAT14(bVar97 & auVar67[0xc],
                                                                 CONCAT13(bVar96 & auVar67[0xb],
                                                                          CONCAT12(bVar95 & auVar67[
                                                  10],CONCAT11(bVar94 & auVar67[9],
                                                               bVar93 & auVar67[8])))))));
                local_210 = CONCAT17(bVar92 & auVar67[7],
                                     CONCAT16(bVar91 & auVar67[6],
                                              CONCAT15(bVar90 & auVar67[5],
                                                       CONCAT14(bVar89 & auVar67[4],
                                                                CONCAT13(bVar88 & auVar67[3],
                                                                         CONCAT12(bVar87 & auVar67[2
                                                  ],CONCAT11(bVar86 & auVar67[1],bVar84 & auVar67[0]
                                                            )))))));
                uStack_200._0_2_ = CONCAT11(bVar86 & auVar63[1],bVar84 & auVar63[0]);
                uStack_200._0_3_ = CONCAT12(bVar87 & auVar63[2],(undefined2)uStack_200);
                uStack_200._0_4_ = CONCAT13(bVar88 & auVar63[3],(undefined3)uStack_200);
                uStack_200._0_5_ = CONCAT14(bVar89 & auVar63[4],(undefined4)uStack_200);
                uStack_200._0_6_ = CONCAT15(bVar90 & auVar63[5],(undefined5)uStack_200);
                uStack_200._0_7_ = CONCAT16(bVar91 & auVar63[6],(undefined6)uStack_200);
                uStack_200 = CONCAT17(bVar92 & auVar63[7],(undefined7)uStack_200);
                local_1f0._0_2_ = CONCAT11(bVar86 & auVar68[1],bVar84 & auVar68[0]);
                local_1f0._0_3_ = CONCAT12(bVar87 & auVar68[2],(undefined2)local_1f0);
                local_1f0._0_4_ = CONCAT13(bVar88 & auVar68[3],(undefined3)local_1f0);
                local_1f0._0_5_ = CONCAT14(bVar89 & auVar68[4],(undefined4)local_1f0);
                local_1f0._0_6_ = CONCAT15(bVar90 & auVar68[5],(undefined5)local_1f0);
                local_1f0._0_7_ = CONCAT16(bVar91 & auVar68[6],(undefined6)local_1f0);
                local_1f0 = CONCAT17(bVar92 & auVar68[7],(undefined7)local_1f0);
                local_1d0 = bVar93 & auVar69[8];
                bStack_1cf = bVar94 & auVar69[9];
                bStack_1ce = bVar95 & auVar69[10];
                bStack_1cd = bVar96 & auVar69[0xb];
                bStack_1cc = bVar97 & auVar69[0xc];
                bStack_1cb = bVar98 & auVar69[0xd];
                bStack_1ca = bVar99 & auVar69[0xe];
                bStack_1c9 = bVar100 & auVar69[0xf];
                uStack_1e0 = CONCAT17(bVar92 & auVar69[7],
                                      CONCAT16(bVar91 & auVar69[6],
                                               CONCAT15(bVar90 & auVar69[5],
                                                        CONCAT14(bVar89 & auVar69[4],
                                                                 CONCAT13(bVar88 & auVar69[3],
                                                                          CONCAT12(bVar87 & auVar69[
                                                  2],CONCAT11(bVar86 & auVar69[1],
                                                              bVar84 & auVar69[0])))))));
                if (pauVar1 != (undefined (*) [16])0x0) {
                  local_d8 = 0;
                  local_c8 = 0;
                  local_c0 = 0x3f80000000000000;
                  local_dc = 1.0;
                  local_d0 = 0x3f80000000000000;
                  uStack_f4 = 0;
                  fStack_fc = 0.0;
                  uStack_f8 = 0;
                  fStack_ec = 0.0;
                  uStack_e8 = 0;
                  local_e4 = 0.0;
                  fStack_e0 = 1.0;
                  local_100 = 1.0;
                  fStack_f0 = 1.0;
                  local_120 = 0;
                  local_110 = 0;
                  uStack_108 = 0x3f80000000000000;
                  local_124 = 0x3f800000;
                  uStack_118 = 0x3f80000000000000;
                  local_12c = 0x3f80000000000000;
                  local_144 = 0;
                  local_134 = 0;
                  local_148 = 0x3f800000;
                  local_13c = 0x3f80000000000000;
                  if (*(int *)(param_1 + 0x17c) == 1) {
                    fVar66 = *(float *)(param_1 + 0x15c);
                    fVar75 = fVar66 * 6.0;
                    fVar58 = 0.0;
                    auVar129._8_8_ = 0x7fffffff7fffffff;
                    auVar129._0_8_ = 0x7fffffff7fffffff;
                    auVar123._0_4_ = NEON_fmadd((int)(fVar75 * 0.5),0xc0000000,fVar75);
                    auVar123._4_9_ = auVar120._4_9_;
                    auVar123._13_3_ = 0;
                    auVar63 = NEON_bsl(auVar129,auVar123,ZEXT416((uint)fVar75),1);
                    fVar75 = *(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x164);
                    fVar62 = fVar75 * (1.0 - ABS(auVar63._0_4_ + -1.0));
                    if ((((((fVar66 < 0.0) ||
                           (fVar65 = fVar75, fVar71 = fVar62, 0.1666667 <= fVar66)) &&
                          ((fVar71 = fVar75, fVar66 < 0.1666667 ||
                           (fVar65 = fVar62, 0.3333333 <= fVar66)))) &&
                         ((fVar65 = 0.0, fVar66 < 0.3333333 || (fVar58 = fVar62, 0.5 <= fVar66))))
                        && ((fVar58 = fVar75, fVar66 < 0.5 || (fVar71 = fVar62, 0.6666667 <= fVar66)
                            ))) &&
                       (fVar65 = fVar62, fVar71 = 0.0, fVar66 < 0.6666667 || 0.8333334 <= fVar66)) {
                      fVar58 = fVar62;
                      fVar65 = fVar75;
                    }
                    fVar75 = *(float *)(param_1 + 0x164) - fVar75;
                    fVar65 = fVar75 + fVar65;
                    fVar71 = fVar75 + fVar71;
                    if (fVar65 <= 0.04045) {
                      fVar65 = fVar65 / 12.92;
                    }
                    else {
                      fVar65 = powf((fVar65 + 0.055) / 1.055,2.4);
                    }
                    auVar137 = auVar134._4_12_;
                    fVar75 = fVar75 + fVar58;
                    if (fVar71 <= 0.04045) {
                      fVar71 = fVar71 / 12.92;
                    }
                    else {
                      auVar137 = (undefined  [12])0x0;
                      fVar71 = powf((fVar71 + 0.055) / 1.055,2.4);
                    }
                    if (fVar75 <= 0.04045) {
                      fVar75 = fVar75 / 12.92;
                    }
                    else {
                      fVar75 = powf((fVar75 + 0.055) / 1.055,2.4);
                    }
                    fVar58 = *(float *)(param_1 + 0x10c);
                    fVar104 = *(float *)(param_1 + 0x110);
                    fVar119 = *(float *)(param_1 + 0x114);
                    fVar102 = fVar58 / fVar65;
                    fVar62 = fVar104 / fVar71;
                    fVar107 = fVar119 / fVar75;
                    fVar74 = fVar102;
                    if (fVar102 <= fVar62) {
                      fVar74 = fVar62;
                    }
                    uVar111 = NEON_fminnm(fVar102,fVar62);
                    fVar159 = fVar107;
                    if (fVar107 <= fVar74) {
                      fVar159 = fVar74;
                    }
                    fVar59 = (float)NEON_fminnm(fVar107,uVar111);
                    fVar102 = fVar102 / fVar62;
                    fVar74 = fVar62 / fVar62;
                    if (fVar159 == fVar102) {
                      iVar49 = 0;
                      uVar150 = 2;
                      if (fVar59 == fVar74) {
                        uVar150 = 1;
                      }
                    }
                    else if (fVar159 == fVar74) {
                      iVar49 = 1;
                      uVar150 = (uint)(fVar59 != fVar102) << 1;
                    }
                    else {
                      iVar49 = 2;
                      uVar150 = (uint)(fVar59 != fVar102);
                    }
                    fVar159 = *(float *)(param_1 + 0x130);
                    for (fVar66 = fVar159 - fVar66; 0.5 < fVar66; fVar66 = fVar66 + -1.0) {
                    }
                    for (; fVar66 < -0.5; fVar66 = fVar66 + 1.0) {
                    }
                    fVar83 = *(float *)(param_1 + 0x168);
                    auVar140._8_4_ = 0x7fffffff;
                    auVar140._0_8_ = 0x7fffffff7fffffff;
                    auVar140._12_4_ = 0x7fffffff;
                    fVar160 = fVar83 * 6.0;
                    fVar59 = *(float *)(param_1 + 0x16c) * *(float *)(param_1 + 0x170);
                    fVar101 = 0.0;
                    auVar143._8_8_ = auVar140._8_8_;
                    auVar143._0_8_ = 0x7fffffff7fffffff;
                    auVar136._0_4_ = NEON_fmadd((int)(fVar160 * 0.5),0xc0000000,fVar160);
                    auVar136._4_12_ = auVar137;
                    auVar63 = NEON_bsl(auVar143,auVar136,ZEXT416((uint)fVar160),1);
                    fVar160 = fVar59 * (1.0 - ABS(auVar63._0_4_ + -1.0));
                    if (((((fVar83 < 0.0) ||
                          (local_5bc = fVar59, local_5c0 = fVar160, 0.1666667 <= fVar83)) &&
                         ((local_5c0 = fVar59, fVar83 < 0.1666667 ||
                          (local_5bc = fVar160, 0.3333333 <= fVar83)))) &&
                        (((local_5bc = 0.0, fVar83 < 0.3333333 || (fVar101 = fVar160, 0.5 <= fVar83)
                          ) && ((fVar101 = fVar59, fVar83 < 0.5 ||
                                (local_5c0 = fVar160, 0.6666667 <= fVar83)))))) &&
                       (local_5bc = fVar160, local_5c0 = 0.0,
                       fVar83 < 0.6666667 || 0.8333334 <= fVar83)) {
                      fVar101 = fVar160;
                      local_5bc = fVar59;
                    }
                    fVar59 = *(float *)(param_1 + 0x170) - fVar59;
                    local_5bc = fVar59 + local_5bc;
                    local_5c0 = fVar59 + local_5c0;
                    if (local_5bc <= 0.04045) {
                      local_5bc = local_5bc / 12.92;
                    }
                    else {
                      local_5bc = powf((local_5bc + 0.055) / 1.055,2.4);
                    }
                    fVar59 = fVar59 + fVar101;
                    if (local_5c0 <= 0.04045) {
                      local_5c0 = local_5c0 / 12.92;
                    }
                    else {
                      local_5c0 = powf((local_5c0 + 0.055) / 1.055,2.4);
                    }
                    if (fVar59 <= 0.04045) {
                      fVar59 = fVar59 / 12.92;
                    }
                    else {
                      fVar59 = powf((fVar59 + 0.055) / 1.055,2.4);
                    }
                    fVar58 = fVar58 / local_5bc;
                    fVar104 = fVar104 / local_5c0;
                    fVar119 = fVar119 / fVar59;
                    fVar160 = fVar58;
                    if (fVar58 <= fVar104) {
                      fVar160 = fVar104;
                    }
                    uVar111 = NEON_fminnm(fVar58,fVar104);
                    fVar101 = fVar119;
                    if (fVar119 <= fVar160) {
                      fVar101 = fVar160;
                    }
                    fVar76 = (float)NEON_fminnm(fVar119,uVar111);
                    fVar160 = fVar104 / fVar104;
                    fVar159 = fVar159 - fVar83;
                    fVar58 = fVar58 / fVar104;
                    uVar54 = 2;
                    if (fVar76 == fVar160) {
                      uVar54 = 1;
                    }
                    uVar57 = (uint)(fVar76 != fVar58) << 1;
                    iVar113 = 1;
                    if (fVar101 != fVar160) {
                      iVar113 = 2;
                      uVar57 = (uint)(fVar76 != fVar58);
                    }
                    iVar118 = 0;
                    if (fVar101 != fVar58) {
                      uVar54 = uVar57;
                      iVar118 = iVar113;
                    }
                    uVar79 = SUB41(fVar74,0);
                    uVar80 = (undefined)((uint)fVar74 >> 8);
                    uVar81 = (undefined)((uint)fVar74 >> 0x10);
                    uVar82 = (undefined)((uint)fVar74 >> 0x18);
                    for (; 0.5 < fVar159; fVar159 = fVar159 + -1.0) {
                    }
                    fVar107 = fVar107 / fVar62;
                    fVar119 = fVar119 / fVar104;
                    for (; fVar159 < -0.5; fVar159 = fVar159 + 1.0) {
                    }
                    fVar62 = 0.0;
                    if (iVar49 != iVar118) {
                      fVar62 = 5.0;
                    }
                    uVar126 = 0;
                    uVar127 = 0;
                    if (uVar150 != uVar54) {
                      uVar126 = 0xa0;
                      uVar127 = 0x40;
                    }
                    fVar104 = 1.0;
                    fVar62 = ABS(fVar107 - fVar119) + ABS(fVar102 - fVar58) + ABS(fVar74 - fVar160)
                             + fVar62 + (float)((uint)CONCAT11(uVar127,uVar126) << 0x10);
                    if ((0.5 <= fVar62) && (fVar104 = 0.0, fVar62 <= 4.0)) {
                      fVar104 = (fVar62 + -0.5) / -3.5 + 1.0;
                    }
                    fVar104 = fVar104 * *(float *)(param_1 + 0x174);
                    if (ABS(fVar66) <= ABS(fVar159)) {
                      uVar79 = SUB41(fVar160,0);
                      uVar80 = (undefined)((uint)fVar160 >> 8);
                      uVar81 = (undefined)((uint)fVar160 >> 0x10);
                      uVar82 = (undefined)((uint)fVar160 >> 0x18);
                      fVar102 = fVar58;
                    }
                    uVar126 = SUB41(fVar107,0);
                    uVar127 = (undefined)((uint)fVar107 >> 8);
                    uVar132 = (undefined)((uint)fVar107 >> 0x10);
                    uVar133 = (undefined)((uint)fVar107 >> 0x18);
                    if (ABS(fVar66) <= ABS(fVar159)) {
                      uVar126 = SUB41(fVar119,0);
                      uVar127 = (undefined)((uint)fVar119 >> 8);
                      uVar132 = (undefined)((uint)fVar119 >> 0x10);
                      uVar133 = (undefined)((uint)fVar119 >> 0x18);
                    }
                    fVar58 = 1.0 - fVar104;
                    fVar107 = fVar65 * 0.0;
                    uVar111 = NEON_fmadd(fVar102,fVar104,fVar58);
                    uVar103 = NEON_fmadd(CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79))),
                                         fVar104,fVar58);
                    uVar106 = NEON_fmadd(CONCAT13(uVar133,CONCAT12(uVar132,CONCAT11(uVar127,uVar126)
                                                                  )),fVar104,fVar58);
                    fVar66 = (float)NEON_fmadd(fVar65,uVar111,fVar71 * 0.0);
                    fVar62 = (float)NEON_fmadd(fVar71,uVar103,fVar107);
                    local_13c = CONCAT44(uVar103,(undefined4)local_13c);
                    uVar141 = NEON_fmadd(fVar75,uVar106,fVar107 + fVar71 * 0.0);
                    local_12c = CONCAT44(uVar106,(undefined4)local_12c);
                    fVar65 = (float)NEON_fminnm(uVar141,0x3f800000);
                    fVar66 = (float)NEON_fminnm(fVar75 * 0.0 + fVar66,0x3f800000);
                    fVar75 = (float)NEON_fminnm(fVar75 * 0.0 + fVar62,0x3f800000);
                    if (fVar66 <= 0.0) {
                      fVar66 = 0.0;
                    }
                    if (fVar75 <= 0.0) {
                      fVar75 = 0.0;
                    }
                    local_148 = uVar111;
                    if (fVar66 <= 0.0031308) {
                      fVar66 = fVar66 * 12.92;
                    }
                    else {
                      fVar62 = 0.4166667;
                      fVar66 = powf(fVar66,0.4166667);
                      fVar66 = (float)NEON_fmadd(fVar66,0x3f870a3d,0xbd6147ae);
                    }
                    if (fVar75 <= 0.0031308) {
                      fVar75 = fVar75 * 12.92;
                    }
                    else {
                      fVar62 = 0.4166667;
                      fVar75 = powf(fVar75,0.4166667);
                      fVar75 = (float)NEON_fmadd(fVar75,0x3f870a3d,0xbd6147ae);
                    }
                    if (fVar65 <= 0.0031308) {
                      fVar65 = fVar65 * 12.92;
                    }
                    else {
                      fVar62 = 0.4166667;
                      fVar65 = powf(fVar65,0.4166667);
                      fVar65 = (float)NEON_fmadd(fVar65,0x3f870a3d,0xbd6147ae);
                    }
                    local_168 = CONCAT44(fVar65,fVar75);
                    local_16c = fVar66;
                    fVar66 = (float)FUN_01035280(&local_16c);
                    fVar75 = (float)NEON_fmadd(local_5bc,uVar111,local_5c0 * 0.0);
                    fVar71 = (float)NEON_fmadd(local_5c0,uVar103,local_5bc * 0.0);
                    uVar111 = NEON_fmadd(fVar59,uVar106,local_5bc * 0.0 + local_5c0 * 0.0);
                    fVar65 = (float)NEON_fminnm(fVar59 * 0.0 + fVar75,0x3f800000);
                    fVar71 = (float)NEON_fminnm(fVar59 * 0.0 + fVar71,0x3f800000);
                    fVar74 = (float)NEON_fminnm(uVar111,0x3f800000);
                    fVar75 = fVar65;
                    if (fVar65 <= 0.0) {
                      fVar75 = 0.0;
                    }
                    if (fVar71 <= 0.0) {
                      fVar71 = 0.0;
                    }
                    if (fVar75 <= 0.0031308) {
                      fVar102 = 12.92;
                      fVar75 = fVar75 * 12.92;
                    }
                    else {
                      fVar65 = 0.4166667;
                      fVar102 = fVar107;
                      fVar75 = powf(fVar75,0.4166667);
                      fVar75 = (float)NEON_fmadd(fVar75,0x3f870a3d,0xbd6147ae);
                    }
                    if (fVar71 <= 0.0031308) {
                      fVar71 = fVar71 * 12.92;
                    }
                    else {
                      fVar65 = 0.4166667;
                      fVar71 = powf(fVar71,0.4166667);
                      fVar71 = (float)NEON_fmadd(fVar71,0x3f870a3d,0xbd6147ae);
                    }
                    if (fVar74 <= 0.0031308) {
                      fVar74 = fVar74 * 12.92;
                    }
                    else {
                      fVar65 = 0.4166667;
                      fVar74 = powf(fVar74,0.4166667);
                      fVar74 = (float)NEON_fmadd(fVar74,0x3f870a3d,0xbd6147ae);
                    }
                    local_190 = CONCAT44(fVar71,fVar75);
                    uStack_188 = CONCAT44(uStack_188._4_4_,fVar74);
                    fVar74 = (float)FUN_01035280(&local_190);
                    fVar75 = ABS(fVar66 - fVar74);
                    fVar71 = 1.0 - fVar75;
                    if (fVar75 <= 0.5) {
                      fVar71 = fVar75;
                    }
                    fVar62 = (fVar62 + fVar65) * 0.5;
                    fVar75 = (fVar107 + fVar102) * 0.5;
                    fVar65 = (fVar71 + -0.3) * -5.0;
                    uVar79 = 0;
                    uVar80 = 0;
                    uVar81 = 0x80;
                    uVar82 = 0x3f;
                    if (0.1 <= fVar71) {
                      uVar79 = SUB41(fVar65,0);
                      uVar80 = (undefined)((uint)fVar65 >> 8);
                      uVar81 = (undefined)((uint)fVar65 >> 0x10);
                      uVar82 = (undefined)((uint)fVar65 >> 0x18);
                    }
                    local_5bc = 0.0;
                    if (fVar71 <= 0.3) {
                      local_5bc = (float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79)));
                    }
                    sincosf((fVar66 + fVar66) * 3.141593,&fStack_540,&local_544);
                    sincosf((fVar74 + fVar74) * 3.141593,&fStack_548,&local_54c);
                    fVar65 = atan2f((fStack_540 + fStack_548) * 0.5,(local_544 + local_54c) * 0.5);
                    *(undefined4 *)(param_5 + 0x22c) = 1;
                    *(float *)(param_5 + 0x236) = fVar62;
                    *(float *)(param_5 + 0x238) = fVar75;
                    fVar66 = fVar65 + 6.283185;
                    if (0.0 <= fVar65) {
                      fVar66 = fVar65;
                    }
                    fVar66 = fVar66 / 6.283185;
                    *(float *)(param_5 + 0x234) = fVar66;
                  }
                  else {
                    *(undefined4 *)(param_5 + 0x22c) = 0;
                    fVar62 = *(float *)(param_1 + 0x128);
                    fVar58 = 1.0;
                    fVar66 = *(float *)(param_1 + 0x124);
                    fVar75 = *(float *)(param_1 + 300);
                    local_5bc = 1.0;
                  }
                  if (*(int *)(param_1 + 0x180) == 1) {
                    fVar62 = fVar62 * fVar75;
                    fVar65 = 0.0;
                    fVar71 = fVar66 * 6.0;
                    auVar155._8_4_ = 0x7fffffff;
                    auVar155._0_8_ = 0x7fffffff7fffffff;
                    auVar155._12_4_ = 0x7fffffff;
                    auVar163._8_8_ = auVar155._8_8_;
                    auVar163._0_8_ = 0x7fffffff7fffffff;
                    uVar150 = NEON_fmadd((int)(fVar71 * 0.5),0xc0000000,fVar71);
                    auVar63 = NEON_bsl(auVar163,ZEXT416(uVar150),ZEXT416((uint)fVar71),1);
                    fVar71 = fVar62 * (1.0 - ABS(auVar63._0_4_ + -1.0));
                    if (((((fVar66 < 0.0) ||
                          (fVar107 = fVar62, fVar74 = fVar71, 0.1666667 <= fVar66)) &&
                         ((fVar74 = fVar62, fVar66 < 0.1666667 ||
                          (fVar107 = fVar71, 0.3333333 <= fVar66)))) &&
                        (((fVar107 = 0.0, fVar66 < 0.3333333 || (fVar65 = fVar71, 0.5 <= fVar66)) &&
                         ((fVar65 = fVar62, fVar66 < 0.5 || (fVar74 = fVar71, 0.6666667 <= fVar66)))
                         ))) && (fVar107 = fVar71, fVar74 = 0.0,
                                fVar66 < 0.6666667 || 0.8333334 <= fVar66)) {
                      fVar65 = fVar71;
                      fVar107 = fVar62;
                    }
                    fVar75 = fVar75 - fVar62;
                    fVar107 = fVar75 + fVar107;
                    fVar74 = fVar75 + fVar74;
                    if (fVar107 <= 0.04045) {
                      fVar107 = fVar107 / 12.92;
                    }
                    else {
                      fVar107 = powf((fVar107 + 0.055) / 1.055,2.4);
                    }
                    fVar75 = fVar75 + fVar65;
                    if (fVar74 <= 0.04045) {
                      fVar74 = fVar74 / 12.92;
                    }
                    else {
                      fVar74 = powf((fVar74 + 0.055) / 1.055,2.4);
                    }
                    if (fVar75 <= 0.04045) {
                      fVar75 = fVar75 / 12.92;
                    }
                    else {
                      fVar75 = powf((fVar75 + 0.055) / 1.055,2.4);
                    }
                    fVar107 = *(float *)(param_1 + 0x14c) / fVar107;
                    fVar74 = *(float *)(param_1 + 0x150) / fVar74;
                    fVar75 = *(float *)(param_1 + 0x154) / fVar75;
                    uVar111 = NEON_fminnm(fVar107,fVar74);
                    NEON_fminnm(fVar75,uVar111);
                    local_5bc = local_5bc * fVar58 * *(float *)(param_1 + 0x148);
                    fVar107 = fVar107 / fVar74;
                    fVar66 = 1.0 - local_5bc;
                    fVar75 = fVar75 / fVar74;
                    if (fVar107 <= 0.5) {
                      fVar107 = 0.5;
                    }
                    uVar111 = NEON_fminnm(fVar107,0x40400000);
                    fVar74 = fVar74 / fVar74;
                    if (fVar75 <= 0.5) {
                      fVar75 = 0.5;
                    }
                    uVar103 = NEON_fminnm(fVar75,0x40400000);
                    local_124 = NEON_fmadd(local_5bc,uVar111,fVar66);
                    uVar111 = NEON_fmadd(local_5bc,uVar103,fVar66);
                    if (fVar74 <= 0.5) {
                      fVar74 = 0.5;
                    }
                    *(float *)(param_5 + 0x1ac) = local_5bc * *(float *)(param_1 + 0x178);
                    uVar103 = NEON_fminnm(fVar74,0x40400000);
                    uStack_108 = CONCAT44(uVar111,(undefined4)uStack_108);
                    uVar111 = NEON_fmadd(local_5bc,uVar103,fVar66);
                    uStack_118 = CONCAT44(uVar111,(undefined4)uStack_118);
                  }
                  if (*(int *)(param_1 + 0x184) == 1) {
                    uVar79 = 0x3f;
                    uVar111 = NEON_fminnm(local_530,fStack_52c);
                    fVar75 = local_530;
                    if (local_530 <= fStack_52c) {
                      fVar75 = fStack_52c;
                    }
                    fVar62 = *(float *)(param_1 + 0x13c) + -0.1;
                    fVar58 = *(float *)(param_1 + 0x13c) + 0.1;
                    fVar66 = (float)NEON_fminnm(uVar111,fStack_528);
                    if (fVar75 <= fStack_528) {
                      fVar75 = fStack_528;
                    }
                    uVar80 = 0;
                    uVar81 = 0;
                    uVar82 = 0;
                    uVar126 = 0;
                    if (0.0 <= fVar62) {
                      uVar80 = SUB41(fVar62,0);
                      uVar81 = (undefined)((uint)fVar62 >> 8);
                      uVar82 = (undefined)((uint)fVar62 >> 0x10);
                      uVar126 = (undefined)((uint)fVar62 >> 0x18);
                    }
                    fVar62 = 1.0;
                    if (fVar58 <= 1.0) {
                      fVar62 = fVar58;
                    }
                    fVar65 = *(float *)(param_1 + 400);
                    fVar58 = 0.001;
                    if (0.001 <= fVar66) {
                      fVar58 = fVar66;
                    }
                    fVar71 = fVar75 / fVar58;
                    fVar66 = 1.0;
                    if (((float)CONCAT13(uVar126,CONCAT12(uVar82,CONCAT11(uVar81,uVar80))) <= fVar65
                        ) && (fVar66 = fVar71, fVar65 < fVar62)) {
                      fVar66 = (float)NEON_fmadd(fVar65 - (float)CONCAT13(uVar126,CONCAT12(uVar82,
                                                  CONCAT11(uVar81,uVar80))),
                                                 (fVar71 + -1.0) /
                                                 (fVar62 - (float)CONCAT13(uVar126,CONCAT12(uVar82,
                                                  CONCAT11(uVar81,uVar80)))),0x3f800000);
                    }
                    fVar62 = (1.0 - fVar58 / fVar75) + 0.85;
                    uVar80 = 0;
                    uVar81 = 0;
                    uVar82 = 0x80;
                    if (0.85 <= fVar58 / fVar75) {
                      uVar80 = SUB41(fVar62,0);
                      uVar81 = (undefined)((uint)fVar62 >> 8);
                      uVar82 = (undefined)((uint)fVar62 >> 0x10);
                      uVar79 = (undefined)((uint)fVar62 >> 0x18);
                    }
                    uVar111 = NEON_fmsub(CONCAT13(uVar79,CONCAT12(uVar82,CONCAT11(uVar81,uVar80))),
                                         fVar66,fVar71);
                    NEON_fmsub(*(undefined4 *)(param_1 + 0x11c),uVar111,fVar71);
                    FUN_01033760(&local_148,&local_124,&local_dc);
                    iVar49 = FUN_00fe88e0(&local_530,param_1 + 0x78,param_1 + 0x4fc,0,&local_dc,
                                          pauVar1,&local_100,puVar56);
                    auVar34._8_4_ = uStack_f8;
                    auVar34._0_8_ = CONCAT44(fStack_fc,local_100);
                    auVar34._12_4_ = uStack_f4;
                    auVar36._8_4_ = uStack_e8;
                    auVar36._0_8_ = CONCAT44(fStack_ec,fStack_f0);
                    auVar36._12_4_ = local_e4;
                    fStack_260 = fStack_e0;
                    uStack_278 = auVar34._8_8_;
                    local_280 = CONCAT44(fStack_fc,local_100);
                    uStack_268 = auVar36._8_8_;
                    local_270 = CONCAT44(fStack_ec,fStack_f0);
                    if (iVar49 == 0) {
                      bVar38 = false;
                      goto LAB_00fea0c0;
                    }
                  }
                  else {
                    local_168 = 0;
                    local_158 = 0;
                    uStack_150 = 0x3f80000000000000;
                    local_16c = 1.0;
                    uStack_160 = 0x3f80000000000000;
                    local_170 = *(undefined4 *)pauVar1[2];
                    uStack_188 = SUB168(*pauVar1,8);
                    local_190 = SUB168(*pauVar1,0);
                    uStack_178 = SUB168(pauVar1[1],8);
                    uStack_180 = SUB168(pauVar1[1],0);
                    FUN_01033760(&local_124,&local_148,&local_16c);
                    FUN_01033760(&local_16c,&local_190,&local_100);
                    fVar75 = *(float *)(param_1 + 0x4fc);
                    fVar58 = *(float *)(param_1 + 0x50c);
                    fVar66 = *(float *)(param_1 + 0x51c);
                    local_19c[0] = local_100;
                    local_19c[1] = fStack_f0;
                    local_19c[2] = fStack_e0;
                    if (*(int *)(param_1 + 0x120) == 0) {
                      fVar62 = *(float *)(param_1 + 0x118);
                      fVar65 = fVar58;
                      if (fVar58 <= fVar75) {
                        fVar65 = fVar75;
                      }
                      fVar71 = fVar62;
                      if (fVar62 <= 0.98) {
                        fVar71 = 0.98;
                      }
                      fVar107 = fVar66;
                      uVar43 = 2;
                      if (fVar66 <= fVar65) {
                        fVar107 = fVar65;
                        uVar43 = (ulong)(fVar75 < fVar58);
                      }
                      fVar107 = ABS(fVar107 - local_19c[uVar43]);
                      fVar65 = fVar71;
                      if ((fVar107 <= 0.15) &&
                         (fVar65 = (float)NEON_fminnm(fVar62,0x3f7ae148), 0.05 <= fVar107)) {
                        fVar65 = (float)NEON_fmadd((fVar71 - fVar65) / 0.1,fVar107 + -0.15,fVar71);
                      }
                      fVar62 = 1.0 - fVar65;
                      fStack_e0 = (float)NEON_fmadd(fVar66,fVar65,fStack_e0 * fVar62);
                      local_100 = local_100 * fVar62 + fVar75 * fVar65;
                      fStack_fc = *(float *)((ulong)&local_100 | 4) * fVar62 +
                                  *(float *)(param_1 + 0x500) * fVar65;
                      local_dc = local_e4 * fVar62 +
                                 (float)((ulong)*(undefined8 *)(param_1 + 0x514) >> 0x20) * fVar65;
                      fStack_f0 = fStack_f0 * fVar62 + fVar58 * fVar65;
                      fStack_ec = fStack_ec * fVar62 + *(float *)(param_1 + 0x510) * fVar65;
                    }
                    local_280 = CONCAT44(fStack_fc,local_100);
                    auVar35._8_4_ = uStack_f8;
                    auVar35._0_8_ = local_280;
                    auVar35._12_4_ = uStack_f4;
                    local_270 = CONCAT44(fStack_ec,fStack_f0);
                    auVar37._8_4_ = uStack_e8;
                    auVar37._0_8_ = local_270;
                    auVar37._12_4_ = local_e4;
                    *(float *)(param_5 + 500) = fStack_e0;
                    *(long *)(param_5 + 0x1e8) = auVar35._8_8_;
                    *(undefined8 *)(param_5 + 0x1e4) = local_280;
                    *(long *)(param_5 + 0x1f0) = auVar37._8_8_;
                    *(undefined8 *)(param_5 + 0x1ec) = local_270;
                    uStack_278 = auVar35._8_8_;
                    uStack_268 = auVar37._8_8_;
                    fStack_260 = fStack_e0;
                  }
                  bVar38 = true;
                  fStack_260 = fStack_e0;
                  goto LAB_00fea0c0;
                }
              }
LAB_00fea0bc:
              bVar38 = false;
            }
            else {
              if (param_5[0x2a] != 1) goto LAB_00fea0bc;
              auVar63 = *(undefined (*) [16])(param_1 + 0x80);
              auVar68 = *(undefined (*) [16])(param_1 + 0x90);
              auVar69 = *(undefined (*) [16])(param_1 + 0xa0);
              auVar64 = *(undefined (*) [16])(param_1 + 0xb0);
              auVar67 = *(undefined (*) [16])(param_1 + 0xc0);
              auVar72 = *(undefined (*) [16])(param_1 + 0xd0);
              auVar108._1_3_ = 0;
              auVar108[0] = auVar68[0];
              auVar108[4] = auVar68[4];
              auVar108._5_3_ = 0;
              auVar108[8] = auVar68[8];
              auVar108._9_3_ = 0;
              auVar108[0xc] = auVar68[0xc];
              auVar108._13_3_ = 0;
              auVar116._1_3_ = 0;
              auVar116[0] = auVar69[0];
              auVar116[4] = auVar69[4];
              auVar116._5_3_ = 0;
              auVar116[8] = auVar69[8];
              auVar116._9_3_ = 0;
              auVar116[0xc] = auVar69[0xc];
              auVar116._13_3_ = 0;
              auVar68 = *(undefined (*) [16])(param_1 + 0xe0);
              auVar69 = *(undefined (*) [16])(param_1 + 0xf0);
              auVar124._1_3_ = 0;
              auVar124[0] = auVar67[0];
              auVar124[4] = auVar67[4];
              auVar124._5_3_ = 0;
              auVar124[8] = auVar67[8];
              auVar124._9_3_ = 0;
              auVar124[0xc] = auVar67[0xc];
              auVar124._13_3_ = 0;
              auVar130._1_3_ = 0;
              auVar130[0] = auVar68[0];
              auVar130[4] = auVar68[4];
              auVar130._5_3_ = 0;
              auVar130[8] = auVar68[8];
              auVar130._9_3_ = 0;
              auVar130[0xc] = auVar68[0xc];
              auVar130._13_3_ = 0;
              auVar85[8] = 1;
              auVar85._0_8_ = 0x100000001;
              auVar85._9_3_ = 0;
              auVar85[0xc] = 1;
              auVar85._13_3_ = 0;
              auVar16._1_3_ = 0;
              auVar16[0] = auVar63[0];
              auVar16[4] = auVar63[4];
              auVar16._5_3_ = 0;
              auVar16[8] = auVar63[8];
              auVar16._9_3_ = 0;
              auVar16[0xc] = auVar63[0xc];
              auVar16._13_3_ = 0;
              auVar63 = NEON_cmeq(auVar16,auVar85,4);
              auVar8[8] = 1;
              auVar8._0_8_ = 0x100000001;
              auVar8._9_3_ = 0;
              auVar8[0xc] = 1;
              auVar8._13_3_ = 0;
              auVar68 = NEON_cmeq(auVar108,auVar8,4);
              auVar9[8] = 1;
              auVar9._0_8_ = 0x100000001;
              auVar9._9_3_ = 0;
              auVar9[0xc] = 1;
              auVar9._13_3_ = 0;
              auVar67 = NEON_cmeq(auVar116,auVar9,4);
              auVar10[8] = 1;
              auVar10._0_8_ = 0x100000001;
              auVar10._9_3_ = 0;
              auVar10[0xc] = 1;
              auVar10._13_3_ = 0;
              auVar19._1_3_ = 0;
              auVar19[0] = auVar64[0];
              auVar19[4] = auVar64[4];
              auVar19._5_3_ = 0;
              auVar19[8] = auVar64[8];
              auVar19._9_3_ = 0;
              auVar19[0xc] = auVar64[0xc];
              auVar19._13_3_ = 0;
              auVar64 = NEON_cmeq(auVar19,auVar10,4);
              auVar11[8] = 1;
              auVar11._0_8_ = 0x100000001;
              auVar11._9_3_ = 0;
              auVar11[0xc] = 1;
              auVar11._13_3_ = 0;
              auVar77 = NEON_cmeq(auVar124,auVar11,4);
              auVar12[8] = 1;
              auVar12._0_8_ = 0x100000001;
              auVar12._9_3_ = 0;
              auVar12[0xc] = 1;
              auVar12._13_3_ = 0;
              auVar23._1_3_ = 0;
              auVar23[0] = auVar72[0];
              auVar23[4] = auVar72[4];
              auVar23._5_3_ = 0;
              auVar23[8] = auVar72[8];
              auVar23._9_3_ = 0;
              auVar23[0xc] = auVar72[0xc];
              auVar23._13_3_ = 0;
              auVar72 = NEON_cmeq(auVar23,auVar12,4);
              auVar13[8] = 1;
              auVar13._0_8_ = 0x100000001;
              auVar13._9_3_ = 0;
              auVar13[0xc] = 1;
              auVar13._13_3_ = 0;
              auVar85 = NEON_cmeq(auVar130,auVar13,4);
              auVar14[8] = 1;
              auVar14._0_8_ = 0x100000001;
              auVar14._9_3_ = 0;
              auVar14[0xc] = 1;
              auVar14._13_3_ = 0;
              auVar27._1_3_ = 0;
              auVar27[0] = auVar69[0];
              auVar27[4] = auVar69[4];
              auVar27._5_3_ = 0;
              auVar27[8] = auVar69[8];
              auVar27._9_3_ = 0;
              auVar27[0xc] = auVar69[0xc];
              auVar27._13_3_ = 0;
              auVar69 = NEON_cmeq(auVar27,auVar14,4);
              auVar60._0_8_ =
                   CONCAT17(bVar92 & auVar63[7],
                            CONCAT16(bVar91 & auVar63[6],
                                     CONCAT15(bVar90 & auVar63[5],
                                              CONCAT14(bVar89 & auVar63[4],
                                                       CONCAT13(bVar88 & auVar63[3],
                                                                CONCAT12(bVar87 & auVar63[2],
                                                                         CONCAT11(bVar86 & auVar63[1
                                                  ],bVar84 & auVar63[0])))))));
              auVar60[8] = bVar93 & auVar63[8];
              auVar60[9] = bVar94 & auVar63[9];
              auVar60[10] = bVar95 & auVar63[10];
              auVar60[0xb] = bVar96 & auVar63[0xb];
              auVar60[0xc] = bVar97 & auVar63[0xc];
              auVar60[0xd] = bVar98 & auVar63[0xd];
              auVar60[0xe] = bVar99 & auVar63[0xe];
              auVar60[0xf] = bVar100 & auVar63[0xf];
              uStack_248 = auVar60._8_8_;
              local_250 = auVar60._0_8_;
              uStack_240._0_2_ = CONCAT11(bVar86 & auVar68[1],bVar84 & auVar68[0]);
              uStack_240._0_3_ = CONCAT12(bVar87 & auVar68[2],(undefined2)uStack_240);
              uStack_240._0_4_ = CONCAT13(bVar88 & auVar68[3],(undefined3)uStack_240);
              uStack_240._0_5_ = CONCAT14(bVar89 & auVar68[4],(undefined4)uStack_240);
              uStack_240._0_6_ = CONCAT15(bVar90 & auVar68[5],(undefined5)uStack_240);
              uStack_240._0_7_ = CONCAT16(bVar91 & auVar68[6],(undefined6)uStack_240);
              uStack_240 = CONCAT17(bVar92 & auVar68[7],(undefined7)uStack_240);
              local_230 = CONCAT17(bVar92 & auVar67[7],
                                   CONCAT16(bVar91 & auVar67[6],
                                            CONCAT15(bVar90 & auVar67[5],
                                                     CONCAT14(bVar89 & auVar67[4],
                                                              CONCAT13(bVar88 & auVar67[3],
                                                                       CONCAT12(bVar87 & auVar67[2],
                                                                                CONCAT11(bVar86 & 
                                                  auVar67[1],bVar84 & auVar67[0])))))));
              uStack_220 = CONCAT17(bVar92 & auVar64[7],
                                    CONCAT16(bVar91 & auVar64[6],
                                             CONCAT15(bVar90 & auVar64[5],
                                                      CONCAT14(bVar89 & auVar64[4],
                                                               CONCAT13(bVar88 & auVar64[3],
                                                                        CONCAT12(bVar87 & auVar64[2]
                                                                                 ,CONCAT11(bVar86 & 
                                                  auVar64[1],bVar84 & auVar64[0])))))));
              local_210 = CONCAT17(bVar92 & auVar77[7],
                                   CONCAT16(bVar91 & auVar77[6],
                                            CONCAT15(bVar90 & auVar77[5],
                                                     CONCAT14(bVar89 & auVar77[4],
                                                              CONCAT13(bVar88 & auVar77[3],
                                                                       CONCAT12(bVar87 & auVar77[2],
                                                                                CONCAT11(bVar86 & 
                                                  auVar77[1],bVar84 & auVar77[0])))))));
              uStack_200._0_2_ = CONCAT11(bVar86 & auVar72[1],bVar84 & auVar72[0]);
              uStack_200._0_3_ = CONCAT12(bVar87 & auVar72[2],(undefined2)uStack_200);
              uStack_200._0_4_ = CONCAT13(bVar88 & auVar72[3],(undefined3)uStack_200);
              uStack_200._0_5_ = CONCAT14(bVar89 & auVar72[4],(undefined4)uStack_200);
              uStack_200._0_6_ = CONCAT15(bVar90 & auVar72[5],(undefined5)uStack_200);
              uStack_200._0_7_ = CONCAT16(bVar91 & auVar72[6],(undefined6)uStack_200);
              uStack_200 = CONCAT17(bVar92 & auVar72[7],(undefined7)uStack_200);
              local_1f0._0_2_ = CONCAT11(bVar86 & auVar85[1],bVar84 & auVar85[0]);
              local_1f0._0_3_ = CONCAT12(bVar87 & auVar85[2],(undefined2)local_1f0);
              local_1f0._0_4_ = CONCAT13(bVar88 & auVar85[3],(undefined3)local_1f0);
              local_1f0._0_5_ = CONCAT14(bVar89 & auVar85[4],(undefined4)local_1f0);
              local_1f0._0_6_ = CONCAT15(bVar90 & auVar85[5],(undefined5)local_1f0);
              local_1f0._0_7_ = CONCAT16(bVar91 & auVar85[6],(undefined6)local_1f0);
              local_1f0 = CONCAT17(bVar92 & auVar85[7],(undefined7)local_1f0);
              uStack_1d8 = CONCAT17(bVar100 & auVar69[0xf],
                                    CONCAT16(bVar99 & auVar69[0xe],
                                             CONCAT15(bVar98 & auVar69[0xd],
                                                      CONCAT14(bVar97 & auVar69[0xc],
                                                               CONCAT13(bVar96 & auVar69[0xb],
                                                                        CONCAT12(bVar95 & auVar69[10
                                                  ],CONCAT11(bVar94 & auVar69[9],bVar93 & auVar69[8]
                                                            )))))));
              uStack_1e0 = CONCAT17(bVar92 & auVar69[7],
                                    CONCAT16(bVar91 & auVar69[6],
                                             CONCAT15(bVar90 & auVar69[5],
                                                      CONCAT14(bVar89 & auVar69[4],
                                                               CONCAT13(bVar88 & auVar69[3],
                                                                        CONCAT12(bVar87 & auVar69[2]
                                                                                 ,CONCAT11(bVar86 & 
                                                  auVar69[1],bVar84 & auVar69[0])))))));
              if (*(int *)(param_1 + 0x120) == 0) {
                bVar38 = true;
                uStack_278 = SUB168(*(undefined (*) [16])(param_1 + 0x4fc),8);
                local_280 = SUB168(*(undefined (*) [16])(param_1 + 0x4fc),0);
                uStack_268 = SUB168(*(undefined (*) [16])(param_1 + 0x50c),8);
                local_270 = SUB168(*(undefined (*) [16])(param_1 + 0x50c),0);
                fStack_260 = *(float *)(param_1 + 0x51c);
              }
              else {
                uVar162 = *(undefined4 *)(*pauVar1 + 4);
                bVar38 = false;
                uVar111 = *(undefined4 *)(*pauVar1 + 8);
                uVar103 = *(undefined4 *)(*pauVar1 + 0xc);
                uVar112 = *(undefined4 *)pauVar1[1];
                uVar105 = *(undefined4 *)(pauVar1[1] + 4);
                uVar106 = *(undefined4 *)(pauVar1[1] + 8);
                uVar141 = *(undefined4 *)(pauVar1[1] + 0xc);
                fStack_260 = *(float *)pauVar1[2];
                local_280 = *(undefined8 *)*pauVar1;
                uStack_278 = *(undefined8 *)(*pauVar1 + 8);
                local_270 = *(undefined8 *)pauVar1[1];
                uStack_268 = *(undefined8 *)(pauVar1[1] + 8);
                *(undefined4 *)(param_5 + 0x1e4) = *(undefined4 *)*pauVar1;
                *(undefined4 *)(param_5 + 0x1e6) = uVar162;
                *(undefined4 *)(param_5 + 0x1e8) = uVar111;
                *(undefined4 *)(param_5 + 0x1ea) = uVar103;
                *(undefined4 *)(param_5 + 0x1ec) = uVar112;
                *(undefined4 *)(param_5 + 0x1ee) = uVar105;
                *(undefined4 *)(param_5 + 0x1f0) = uVar106;
                *(undefined4 *)(param_5 + 0x1f2) = uVar141;
                *(float *)(param_5 + 500) = fStack_260;
              }
            }
LAB_00fea0c0:
            if ((*(int *)(param_1 + 0x198) != 1) || (param_5[0x2b] == 0)) goto LAB_00fea22c;
            auVar63 = *(undefined (*) [16])(param_1 + 0x1a0);
            auVar68 = *(undefined (*) [16])(param_1 + 0x1b0);
            auVar109._8_4_ = 1;
            auVar109._0_8_ = 0x100000001;
            auVar109._12_4_ = 1;
            auVar69 = *(undefined (*) [16])(param_1 + 0x1c0);
            auVar64 = *(undefined (*) [16])(param_1 + 0x1d0);
            auVar117._1_3_ = 0;
            auVar117[0] = auVar63[0];
            auVar117[4] = auVar63[4];
            auVar117._5_3_ = 0;
            auVar117[8] = auVar63[8];
            auVar117._9_3_ = 0;
            auVar117[0xc] = auVar63[0xc];
            auVar117._13_3_ = 0;
            auVar63 = *(undefined (*) [16])(param_1 + 0x1e0);
            auVar67 = *(undefined (*) [16])(param_1 + 0x1f0);
            auVar125._1_3_ = 0;
            auVar125[0] = auVar69[0];
            auVar125[4] = auVar69[4];
            auVar125._5_3_ = 0;
            auVar125[8] = auVar69[8];
            auVar125._9_3_ = 0;
            auVar125[0xc] = auVar69[0xc];
            auVar125._13_3_ = 0;
            auVar69 = *(undefined (*) [16])(param_1 + 0x200);
            auVar72 = *(undefined (*) [16])(param_1 + 0x210);
            auVar131._1_3_ = 0;
            auVar131[0] = auVar63[0];
            auVar131[4] = auVar63[4];
            auVar131._5_3_ = 0;
            auVar131[8] = auVar63[8];
            auVar131._9_3_ = 0;
            auVar131[0xc] = auVar63[0xc];
            auVar131._13_3_ = 0;
            auVar135._1_3_ = 0;
            auVar135[0] = auVar69[0];
            auVar135[4] = auVar69[4];
            auVar135._5_3_ = 0;
            auVar135[8] = auVar69[8];
            auVar135._9_3_ = 0;
            auVar135[0xc] = auVar69[0xc];
            auVar135._13_3_ = 0;
            auVar139._1_3_ = 0;
            auVar139[0] = auVar72[0];
            auVar139[4] = auVar72[4];
            auVar139._5_3_ = 0;
            auVar139[8] = auVar72[8];
            auVar139._9_3_ = 0;
            auVar139[0xc] = auVar72[0xc];
            auVar139._13_3_ = 0;
            auVar69 = NEON_cmeq(auVar117,auVar109,4);
            auVar18._1_3_ = 0;
            auVar18[0] = auVar68[0];
            auVar18[4] = auVar68[4];
            auVar18._5_3_ = 0;
            auVar18[8] = auVar68[8];
            auVar18._9_3_ = 0;
            auVar18[0xc] = auVar68[0xc];
            auVar18._13_3_ = 0;
            auVar72 = NEON_cmeq(auVar18,auVar109,4);
            auVar77 = NEON_cmeq(auVar125,auVar109,4);
            auVar22._1_3_ = 0;
            auVar22[0] = auVar64[0];
            auVar22[4] = auVar64[4];
            auVar22._5_3_ = 0;
            auVar22[8] = auVar64[8];
            auVar22._9_3_ = 0;
            auVar22[0xc] = auVar64[0xc];
            auVar22._13_3_ = 0;
            auVar64 = NEON_cmeq(auVar22,auVar109,4);
            auVar85 = NEON_cmeq(auVar131,auVar109,4);
            auVar26._1_3_ = 0;
            auVar26[0] = auVar67[0];
            auVar26[4] = auVar67[4];
            auVar26._5_3_ = 0;
            auVar26[8] = auVar67[8];
            auVar26._9_3_ = 0;
            auVar26[0xc] = auVar67[0xc];
            auVar26._13_3_ = 0;
            auVar67 = NEON_cmeq(auVar26,auVar109,4);
            auVar63 = NEON_cmeq(auVar135,auVar109,4);
            auVar68 = NEON_cmeq(auVar139,auVar109,4);
            auVar70._0_8_ =
                 CONCAT17(bVar92 & auVar72[7],
                          CONCAT16(bVar91 & auVar72[6],
                                   CONCAT15(bVar90 & auVar72[5],
                                            CONCAT14(bVar89 & auVar72[4],
                                                     CONCAT13(bVar88 & auVar72[3],
                                                              CONCAT12(bVar87 & auVar72[2],
                                                                       CONCAT11(bVar86 & auVar72[1],
                                                                                bVar84 & auVar72[0])
                                                                      ))))));
            auVar70[8] = bVar93 & auVar72[8];
            auVar70[9] = bVar94 & auVar72[9];
            auVar70[10] = bVar95 & auVar72[10];
            auVar70[0xb] = bVar96 & auVar72[0xb];
            auVar70[0xc] = bVar97 & auVar72[0xc];
            auVar70[0xd] = bVar98 & auVar72[0xd];
            auVar70[0xe] = bVar99 & auVar72[0xe];
            auVar70[0xf] = bVar100 & auVar72[0xf];
            auVar73._0_8_ =
                 CONCAT17(bVar92 & auVar77[7],
                          CONCAT16(bVar91 & auVar77[6],
                                   CONCAT15(bVar90 & auVar77[5],
                                            CONCAT14(bVar89 & auVar77[4],
                                                     CONCAT13(bVar88 & auVar77[3],
                                                              CONCAT12(bVar87 & auVar77[2],
                                                                       CONCAT11(bVar86 & auVar77[1],
                                                                                bVar84 & auVar77[0])
                                                                      ))))));
            auVar73[8] = bVar93 & auVar77[8];
            auVar73[9] = bVar94 & auVar77[9];
            auVar73[10] = bVar95 & auVar77[10];
            auVar73[0xb] = bVar96 & auVar77[0xb];
            auVar73[0xc] = bVar97 & auVar77[0xc];
            auVar73[0xd] = bVar98 & auVar77[0xd];
            auVar73[0xe] = bVar99 & auVar77[0xe];
            auVar73[0xf] = bVar100 & auVar77[0xf];
            local_300 = CONCAT17(bVar92 & auVar69[7],
                                 CONCAT16(bVar91 & auVar69[6],
                                          CONCAT15(bVar90 & auVar69[5],
                                                   CONCAT14(bVar89 & auVar69[4],
                                                            CONCAT13(bVar88 & auVar69[3],
                                                                     CONCAT12(bVar87 & auVar69[2],
                                                                              CONCAT11(bVar86 & 
                                                  auVar69[1],bVar84 & auVar69[0])))))));
            uStack_2e8 = auVar70._8_8_;
            uStack_2f0 = auVar70._0_8_;
            uStack_2d8 = auVar73._8_8_;
            local_2e0 = auVar73._0_8_;
            uStack_2d0 = CONCAT17(bVar92 & auVar64[7],
                                  CONCAT16(bVar91 & auVar64[6],
                                           CONCAT15(bVar90 & auVar64[5],
                                                    CONCAT14(bVar89 & auVar64[4],
                                                             CONCAT13(bVar88 & auVar64[3],
                                                                      CONCAT12(bVar87 & auVar64[2],
                                                                               CONCAT11(bVar86 & 
                                                  auVar64[1],bVar84 & auVar64[0])))))));
            local_2c0 = CONCAT17(bVar92 & auVar85[7],
                                 CONCAT16(bVar91 & auVar85[6],
                                          CONCAT15(bVar90 & auVar85[5],
                                                   CONCAT14(bVar89 & auVar85[4],
                                                            CONCAT13(bVar88 & auVar85[3],
                                                                     CONCAT12(bVar87 & auVar85[2],
                                                                              CONCAT11(bVar86 & 
                                                  auVar85[1],bVar84 & auVar85[0])))))));
            uStack_2a8 = CONCAT17(bVar100 & auVar67[0xf],
                                  CONCAT16(bVar99 & auVar67[0xe],
                                           CONCAT15(bVar98 & auVar67[0xd],
                                                    CONCAT14(bVar97 & auVar67[0xc],
                                                             CONCAT13(bVar96 & auVar67[0xb],
                                                                      CONCAT12(bVar95 & auVar67[10],
                                                                               CONCAT11(bVar94 & 
                                                  auVar67[9],bVar93 & auVar67[8])))))));
            uStack_2b0 = CONCAT17(bVar92 & auVar67[7],
                                  CONCAT16(bVar91 & auVar67[6],
                                           CONCAT15(bVar90 & auVar67[5],
                                                    CONCAT14(bVar89 & auVar67[4],
                                                             CONCAT13(bVar88 & auVar67[3],
                                                                      CONCAT12(bVar87 & auVar67[2],
                                                                               CONCAT11(bVar86 & 
                                                  auVar67[1],bVar84 & auVar67[0])))))));
            uStack_298 = CONCAT17(bVar100 & auVar63[0xf],
                                  CONCAT16(bVar99 & auVar63[0xe],
                                           CONCAT15(bVar98 & auVar63[0xd],
                                                    CONCAT14(bVar97 & auVar63[0xc],
                                                             CONCAT13(bVar96 & auVar63[0xb],
                                                                      CONCAT12(bVar95 & auVar63[10],
                                                                               CONCAT11(bVar94 & 
                                                  auVar63[9],bVar93 & auVar63[8])))))));
            local_2a0 = CONCAT17(bVar92 & auVar63[7],
                                 CONCAT16(bVar91 & auVar63[6],
                                          CONCAT15(bVar90 & auVar63[5],
                                                   CONCAT14(bVar89 & auVar63[4],
                                                            CONCAT13(bVar88 & auVar63[3],
                                                                     CONCAT12(bVar87 & auVar63[2],
                                                                              CONCAT11(bVar86 & 
                                                  auVar63[1],bVar84 & auVar63[0])))))));
            local_280 = CONCAT17(bVar100 & auVar68[0xf],
                                 CONCAT16(bVar99 & auVar68[0xe],
                                          CONCAT15(bVar98 & auVar68[0xd],
                                                   CONCAT14(bVar97 & auVar68[0xc],
                                                            CONCAT13(bVar96 & auVar68[0xb],
                                                                     CONCAT12(bVar95 & auVar68[10],
                                                                              CONCAT11(bVar94 & 
                                                  auVar68[9],bVar93 & auVar68[8])))))));
            uStack_290 = CONCAT17(bVar92 & auVar68[7],
                                  CONCAT16(bVar91 & auVar68[6],
                                           CONCAT15(bVar90 & auVar68[5],
                                                    CONCAT14(bVar89 & auVar68[4],
                                                             CONCAT13(bVar88 & auVar68[3],
                                                                      CONCAT12(bVar87 & auVar68[2],
                                                                               CONCAT11(bVar86 & 
                                                  auVar68[1],bVar84 & auVar68[0])))))));
            if (pauVar1 != (undefined (*) [16])0x0) {
              fVar75 = fStack_524;
              if (fStack_524 <= fStack_520) {
                fVar75 = fStack_520;
              }
              uVar111 = NEON_fminnm(fStack_524,fStack_520);
              local_c0 = 0x3f80000000000000;
              local_c8 = 0;
              local_dc = 1.0;
              local_d0 = 0x3f80000000000000;
              if (fVar75 <= fStack_51c) {
                fVar75 = fStack_51c;
              }
              fVar66 = (float)NEON_fminnm(uVar111,fStack_51c);
              local_d8 = 0;
              fVar58 = (fVar75 / fVar66) * 1.02;
              auVar61._4_12_ = auVar63._4_12_;
              auVar61._0_4_ =
                   NEON_fmadd((fVar75 / fVar66 - fVar58) / *(float *)(param_1 + 0x25c),
                              *(undefined4 *)(param_1 + 0x2b0),fVar58);
              iVar49 = FUN_00fe88e0(auVar61,&fStack_524,param_1 + 0x198,param_1 + 0x520,1,&local_dc,
                                    pauVar1,&local_330,puVar56);
              if (iVar49 == 0) goto LAB_00fea22c;
            }
            bVar40 = true;
          }
          bVar39 = true;
        }
        else {
          bVar38 = false;
          bVar40 = false;
          bVar39 = false;
        }
        puVar56 = &local_300;
        puVar28 = &local_330;
        if (!bVar40) {
          puVar56 = (undefined8 *)(param_2[0x10] + 8);
          puVar28 = (undefined8 *)(param_2[4] + 0xc);
        }
        if ((param_2 == (undefined (*) [16])0x0) ||
           (puVar55 = *(undefined8 **)(param_1 + 0x5c0), puVar55 == (undefined8 *)0x0)) {
          if ((bVar38) && (*(int *)(param_1 + 0x78) == 1)) {
            pauVar45 = param_2 + 7;
            if (bVar39) {
              uVar42 = 2;
              local_598 = &local_250;
              puVar55 = &local_280;
              goto LAB_00fea35c;
            }
            local_598 = &local_250;
            puVar55 = &local_280;
            goto LAB_00fea3e0;
          }
          if (param_2 != (undefined (*) [16])0x0) {
            puVar55 = (undefined8 *)(param_2[2] + 8);
            pauVar45 = param_2 + 7;
            goto joined_r0x00fea2e0;
          }
          local_598 = (undefined8 *)0x0;
        }
        else {
          pauVar45 = (undefined (*) [16])((long)puVar55 + 0x24);
joined_r0x00fea2e0:
          local_598 = (undefined8 *)(param_2[8] + 8);
          if (bVar39) {
            local_598 = (undefined8 *)(param_2[8] + 8);
            FUN_00fe8f70(local_598,puVar56,param_1,pauVar1,puVar55,puVar28,param_5,2);
            uVar42 = 0;
LAB_00fea35c:
            FUN_00fe8f70(local_598,puVar56,param_1,pauVar1,puVar55,puVar28,param_5,uVar42);
            if (!bVar40) {
              FUN_00fe8f70(local_598,param_2[0x10] + 8,param_1,pauVar1,puVar55,param_2[4] + 0xc,
                           param_5,1);
            }
          }
LAB_00fea3e0:
          auVar63 = *(undefined (*) [16])((long)puVar55 + 4);
          fVar75 = (float)(0x80 << (ulong)((ushort)param_5[0x28] & 0x1f));
          auVar145._2_2_ = (short)(int)(float)(int)(auVar63._4_4_ * fVar75);
          auVar145._0_2_ = (short)(int)(float)(int)(auVar63._0_4_ * fVar75);
          auVar145._4_2_ = (short)(int)(float)(int)(auVar63._8_4_ * fVar75);
          auVar145._6_2_ = (short)(int)(float)(int)(auVar63._12_4_ * fVar75);
          auVar145._8_2_ =
               (short)(int)(float)(int)((float)*(undefined8 *)((long)puVar55 + 0x14) * fVar75);
          auVar145._10_2_ =
               (short)(int)(float)(int)((float)((ulong)*(undefined8 *)((long)puVar55 + 0x14) >> 0x20
                                               ) * fVar75);
          auVar145._12_2_ =
               (short)(int)(float)(int)((float)*(undefined8 *)((long)puVar55 + 0x1c) * fVar75);
          auVar145._14_2_ =
               (short)(int)(float)(int)((float)((ulong)*(undefined8 *)((long)puVar55 + 0x1c) >> 0x20
                                               ) * fVar75);
          auVar63 = a64_TBL(ZEXT816(0),auVar145,_DAT_001e4890);
          *(long *)(param_5 + 0x14) = auVar63._8_8_;
          *(long *)(param_5 + 0x10) = auVar63._0_8_;
          *(ulong *)(param_5 + 0x18) =
               CONCAT17((char)((uint)(int)(float)(int)*(float *)*pauVar45 >> 8),
                        CONCAT16((char)(int)(float)(int)*(float *)*pauVar45,
                                 CONCAT15((char)((uint)(int)(float)(int)*(float *)((long)*pauVar45 +
                                                                                  8) >> 8),
                                          CONCAT14((char)(int)(float)(int)*(float *)((long)*pauVar45
                                                                                    + 8),
                                                   CONCAT13((char)((uint)(int)(float)(int)*(float *)
                                                  ((long)*pauVar45 + 4) >> 8),
                                                  CONCAT12((char)(int)(float)(int)*(float *)((long)*
                                                  pauVar45 + 4),
                                                  (short)(int)(float)(int)(*(float *)puVar55 *
                                                                          fVar75)))))));
        }
        bVar40 = !bVar40;
        puVar55 = &uStack_320;
        if (bVar40) {
          puVar55 = (undefined8 *)(param_2[5] + 0xc);
        }
        pfVar48 = local_310;
        if (bVar40) {
          pfVar48 = (float *)(param_2[6] + 0xc);
        }
        pauVar45 = (undefined (*) [16])((long)&uStack_320 + 4);
        puVar29 = &uStack_318;
        if (bVar40) {
          pauVar45 = param_2 + 6;
          puVar29 = (undefined8 *)(param_2[6] + 4);
        }
        pauVar1 = (undefined (*) [16])((ulong)&local_330 | 4);
        if (bVar40) {
          pauVar1 = param_2 + 5;
        }
        pfVar51 = (float *)((ulong)&local_330 | 0xc);
        if (bVar40) {
          pfVar51 = (float *)(param_2[5] + 8);
        }
        pfVar2 = (float *)((ulong)&local_330 | 8);
        if (bVar40) {
          pfVar2 = (float *)(param_2[5] + 4);
        }
        fVar75 = (float)(1 << (ulong)(uVar4 + 7 & 0x1f));
        pfVar3 = (float *)((long)&uStack_318 + 4);
        if (bVar40) {
          pfVar3 = (float *)(param_2[6] + 8);
        }
        iVar49 = (int)(float)(int)(*(float *)*pauVar45 * fVar75);
        uVar7 = CONCAT15((char)((uint)(int)(float)(int)(*(float *)puVar29 * fVar75) >> 8),
                         CONCAT14((char)(int)(float)(int)(*(float *)puVar29 * fVar75),
                                  (int)(float)(int)(*pfVar48 * fVar75))) & 0xffff0000ffff;
        uVar15 = CONCAT15((char)((uint)iVar49 >> 8),
                          CONCAT14((char)iVar49,(int)(float)(int)(*(float *)puVar55 * fVar75))) &
                 0xffff0000ffff;
        auVar110._0_8_ =
             CONCAT26((short)(int)(float)(int)(*pfVar3 * fVar75),
                      CONCAT24((short)(int)(float)(int)(*pfVar51 * fVar75),
                               CONCAT22((short)(uVar15 >> 0x20),(short)uVar15)));
        auVar110._8_2_ = (short)uVar7;
        auVar110._10_2_ = (short)(uVar7 >> 0x20);
        auVar110._12_2_ = (short)(int)(float)(int)(*(float *)*pauVar1 * fVar75);
        auVar110._14_2_ = (short)(int)(float)(int)(*pfVar2 * fVar75);
        *(long *)(param_5 + 0x20) = auVar110._8_8_;
        *(undefined8 *)(param_5 + 0x1c) = auVar110._0_8_;
        param_5[0x24] = (short)(int)(*(float *)puVar28 * fVar75);
        if (param_2 != (undefined (*) [16])0x0) {
          param_5[0x25] = (short)(int)*(float *)param_2[8];
          param_5[0x26] = (short)(int)*(float *)(param_2[8] + 4);
          param_5[0x27] = (short)(int)*(float *)(param_2[7] + 0xc);
        }
      }
      else {
        puVar56 = (undefined8 *)0x0;
        local_598 = (undefined8 *)0x0;
      }
      uVar4 = *(uint *)(param_4 + 8);
      *(undefined4 *)(param_5 + 0x74) = 0;
      *(undefined4 *)(param_5 + 0x130) = 0;
      uVar4 = uVar4 & uVar53 & uVar44;
      *(char *)(param_5 + 0x2c) = (char)uVar4;
      *(char *)(param_5 + 0xe8) = (char)uVar4;
      uVar150 = *(uint *)(param_4 + 0xc);
      *(undefined4 *)(param_5 + 0xd2) = 0;
      *(undefined4 *)(param_5 + 0x18e) = 0;
      uVar44 = uVar150 & uVar53 & uVar44;
      uVar79 = (undefined)uVar44;
      *(undefined *)(param_5 + 0x8a) = uVar79;
      *(undefined *)(param_5 + 0x146) = uVar79;
      if ((param_2 != (undefined (*) [16])0x0) && (uVar4 != 0)) {
        fVar66 = (float)param_3[0x1b];
        fVar75 = 64.0;
        if (fVar66 < 64.0) {
          fVar75 = fVar66;
        }
        uVar79 = 0;
        uVar80 = 0;
        uVar81 = 0;
        uVar82 = 0;
        if (0.0 < fVar66) {
          uVar79 = SUB41(fVar75,0);
          uVar80 = (undefined)((uint)fVar75 >> 8);
          uVar81 = (undefined)((uint)fVar75 >> 0x10);
          uVar82 = (undefined)((uint)fVar75 >> 0x18);
        }
        iVar49 = (int)(float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79)));
        *(char *)((long)param_5 + 0x5b) = (char)iVar49;
        uVar42 = *(undefined8 *)(param_3 + 0x19);
        uVar46 = NEON_fcmge(uVar42,0x4200000042000000,4);
        uVar52 = NEON_fcmle(uVar42,0,2);
        uVar42 = NEON_bsl(uVar46,0x4200000042000000,uVar42,1);
        fVar75 = (float)CONCAT13((byte)((ulong)uVar42 >> 0x18) & ~(byte)((ulong)uVar52 >> 0x18),
                                 CONCAT12((byte)((ulong)uVar42 >> 0x10) &
                                          ~(byte)((ulong)uVar52 >> 0x10),
                                          CONCAT11((byte)((ulong)uVar42 >> 8) &
                                                   ~(byte)((ulong)uVar52 >> 8),
                                                   (byte)uVar42 & ~(byte)uVar52)));
        iVar113 = (int)fVar75;
        iVar118 = (int)(float)(CONCAT17((byte)((ulong)uVar42 >> 0x38) &
                                        ~(byte)((ulong)uVar52 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar42 >> 0x30) &
                                                 ~(byte)((ulong)uVar52 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar42 >> 0x28) &
                                                          ~(byte)((ulong)uVar52 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar42 >> 0x20) &
                                                                   ~(byte)((ulong)uVar52 >> 0x20),
                                                                   fVar75)))) >> 0x20);
        *(char *)((long)param_5 + 0x59) = (char)iVar113;
        *(char *)(param_5 + 0x2d) = (char)iVar118;
        puVar28 = (undefined8 *)(param_5 + 0x30);
        fVar66 = 128.0 - (float)(ulong)(uint)((iVar118 + iVar113 + iVar49) * 2);
        fVar75 = 128.0;
        if (fVar66 < 128.0) {
          fVar75 = fVar66;
        }
        fVar58 = 0.0;
        if (0.0 < fVar66) {
          fVar58 = fVar75;
        }
        *(char *)(param_5 + 0x2e) = (char)(int)fVar58;
        if (local_598 == (undefined8 *)0x0) {
          *(undefined8 *)(param_5 + 0x34) = 0;
          *puVar28 = 0;
          *(undefined8 *)(param_5 + 0x3c) = 0;
          *(undefined8 *)(param_5 + 0x38) = 0;
          *(undefined8 *)(param_5 + 0x44) = 0;
          *(undefined8 *)(param_5 + 0x40) = 0;
          *(undefined8 *)(param_5 + 0x4c) = 0;
          *(undefined8 *)(param_5 + 0x48) = 0;
          *(undefined8 *)(param_5 + 0x54) = 0;
          *(undefined8 *)(param_5 + 0x50) = 0;
          *(undefined8 *)(param_5 + 0x5c) = 0;
          *(undefined8 *)(param_5 + 0x58) = 0;
          *(undefined8 *)(param_5 + 100) = 0;
          *(undefined8 *)(param_5 + 0x60) = 0;
          *(undefined8 *)(param_5 + 0x6c) = 0;
          *(undefined8 *)(param_5 + 0x68) = 0;
          iVar49 = (int)*(float *)(param_2[0x18] + 8);
          if (iVar49 == 2) goto LAB_00fea850;
LAB_00fea818:
          if (iVar49 == 1) {
            pfVar48 = (float *)(param_3 + 9);
          }
          else {
            pfVar48 = (float *)(param_3 + 1);
          }
        }
        else {
          lVar50 = 0;
          puVar55 = local_598 + 2;
          do {
            while( true ) {
              lVar47 = lVar50 * 4;
              pfVar48 = (float *)(param_3 + lVar50 + 0x21);
              if ((int)*pfVar48 != 0) break;
              uVar53 = (uint)(*(float *)(puVar55 + -2) * 128.0);
              if (0x7f < uVar53) {
                uVar53 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47) = uVar53;
              if ((int)pfVar48[1] == 0) goto LAB_00fea71c;
LAB_00fea6a0:
              *(undefined4 *)((long)puVar28 + lVar47 + 4) = 0;
              if ((int)pfVar48[2] != 0) goto LAB_00fea6b0;
LAB_00fea740:
              uVar53 = (uint)(*(float *)(puVar55 + -1) * 128.0);
              if (0x7f < uVar53) {
                uVar53 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 8) = uVar53;
              if ((int)pfVar48[3] == 0) goto LAB_00fea764;
LAB_00fea6c0:
              *(undefined4 *)((long)puVar28 + lVar47 + 0xc) = 0;
              if ((int)pfVar48[4] != 0) goto LAB_00fea6d0;
LAB_00fea788:
              uVar53 = (uint)(*(float *)puVar55 * 128.0);
              if (0x7f < uVar53) {
                uVar53 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0x10) = uVar53;
              if ((int)pfVar48[5] == 0) goto LAB_00fea7ac;
LAB_00fea6e0:
              *(undefined4 *)((long)puVar28 + lVar47 + 0x14) = 0;
              if ((int)pfVar48[6] == 0) goto LAB_00fea63c;
LAB_00fea7d0:
              *(undefined4 *)((long)puVar28 + lVar47 + 0x18) = 0;
              if ((int)pfVar48[7] == 0) goto LAB_00fea7e0;
LAB_00fea660:
              lVar50 = lVar50 + 8;
              puVar55 = puVar55 + 4;
              *(undefined4 *)((long)puVar28 + lVar47 + 0x1c) = 0;
              if (lVar50 == 0x20) goto LAB_00fea808;
            }
            *(undefined4 *)((long)puVar28 + lVar47) = 0;
            if ((int)pfVar48[1] != 0) goto LAB_00fea6a0;
LAB_00fea71c:
            uVar53 = (uint)(*(float *)((long)puVar55 + -0xc) * 128.0);
            if (0x7f < uVar53) {
              uVar53 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 4) = uVar53;
            if ((int)pfVar48[2] == 0) goto LAB_00fea740;
LAB_00fea6b0:
            *(undefined4 *)((long)puVar28 + lVar47 + 8) = 0;
            if ((int)pfVar48[3] != 0) goto LAB_00fea6c0;
LAB_00fea764:
            uVar53 = (uint)(*(float *)((long)puVar55 + -4) * 128.0);
            if (0x7f < uVar53) {
              uVar53 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 0xc) = uVar53;
            if ((int)pfVar48[4] == 0) goto LAB_00fea788;
LAB_00fea6d0:
            *(undefined4 *)((long)puVar28 + lVar47 + 0x10) = 0;
            if ((int)pfVar48[5] != 0) goto LAB_00fea6e0;
LAB_00fea7ac:
            uVar53 = (uint)(*(float *)((long)puVar55 + 4) * 128.0);
            if (0x7f < uVar53) {
              uVar53 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 0x14) = uVar53;
            if ((int)pfVar48[6] != 0) goto LAB_00fea7d0;
LAB_00fea63c:
            uVar53 = (uint)(*(float *)(puVar55 + 1) * 128.0);
            if (0x7f < uVar53) {
              uVar53 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 0x18) = uVar53;
            if ((int)pfVar48[7] != 0) goto LAB_00fea660;
LAB_00fea7e0:
            uVar53 = (uint)(*(float *)((long)puVar55 + 0xc) * 128.0);
            if (0x7f < uVar53) {
              uVar53 = 0x80;
            }
            lVar50 = lVar50 + 8;
            puVar55 = puVar55 + 4;
            *(uint *)((long)puVar28 + lVar47 + 0x1c) = uVar53;
          } while (lVar50 != 0x20);
LAB_00fea808:
          iVar49 = (int)*(float *)(param_2[0x18] + 8);
          if (iVar49 != 2) goto LAB_00fea818;
LAB_00fea850:
          pfVar48 = (float *)(param_3 + 0x11);
        }
        uVar53 = ((int)(*pfVar48 * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x70) = uVar79;
        uVar53 = ((int)(pfVar48[1] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0xe1) = uVar79;
        uVar53 = ((int)(pfVar48[2] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x71) = uVar79;
        uVar53 = ((int)(pfVar48[3] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0xe3) = uVar79;
        uVar53 = ((int)(pfVar48[4] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x72) = uVar79;
        uVar53 = ((int)(pfVar48[5] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0xe5) = uVar79;
        uVar53 = ((int)(pfVar48[6] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x73) = uVar79;
        fVar75 = pfVar48[7];
        bVar84 = *(byte *)(param_1 + 0x58);
        *(undefined *)(param_5 + 0x76) = 1;
        uVar53 = ((int)(fVar75 * 32.0) & 0xffffU) * (uint)bVar84 + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0xe7) = uVar79;
        auVar63 = *(undefined (*) [16])(param_1 + 0x44);
        uVar42 = CONCAT26(auVar63._12_2_,
                          CONCAT24(auVar63._8_2_,CONCAT22(auVar63._4_2_,auVar63._0_2_)));
        uVar42 = NEON_ext(uVar42,uVar42,4,1);
        *(undefined8 *)(param_5 + 0x77) = uVar42;
        uVar53 = *(uint *)(param_1 + 0x54);
        uVar150 = 0;
        if (uVar53 != 0) {
          uVar150 = 0x10000 / uVar53;
        }
        *(uint *)(param_5 + 0x82) = uVar150;
        iVar49 = (int)((1.0 / ((double)(ulong)uVar53 + (double)(ulong)uVar53) + -0.5) * 65536.0);
        *(int *)(param_5 + 0x7e) = iVar49;
        *(uint *)(param_5 + 0x80) = uVar150;
        *(int *)(param_5 + 0x7c) = iVar49;
      }
      if (uVar4 != 0) {
        puVar28 = (undefined8 *)(param_5 + 0xec);
        *(undefined2 *)((long)param_5 + 0x1d1) = 0;
        fVar66 = (float)NEON_ucvtf(param_3[0x1f]);
        fVar75 = 64.0;
        if (fVar66 < 64.0) {
          fVar75 = fVar66;
        }
        *(char *)((long)param_5 + 0x1d3) = (char)(int)fVar75;
        fVar66 = 128.0 - (float)(ulong)(uint)((int)fVar75 << 1);
        fVar75 = 128.0;
        if (fVar66 < 128.0) {
          fVar75 = fVar66;
        }
        uVar79 = 0;
        uVar80 = 0;
        uVar81 = 0;
        uVar82 = 0;
        if (0.0 < fVar66) {
          uVar79 = SUB41(fVar75,0);
          uVar80 = (undefined)((uint)fVar75 >> 8);
          uVar81 = (undefined)((uint)fVar75 >> 0x10);
          uVar82 = (undefined)((uint)fVar75 >> 0x18);
        }
        *(char *)(param_5 + 0xea) =
             (char)(int)(float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79)));
        if (local_598 == (undefined8 *)0x0) {
          *(undefined8 *)(param_5 + 0xf0) = 0;
          *puVar28 = 0;
          *(undefined8 *)(param_5 + 0xf8) = 0;
          *(undefined8 *)(param_5 + 0xf4) = 0;
          *(undefined8 *)(param_5 + 0x100) = 0;
          *(undefined8 *)(param_5 + 0xfc) = 0;
          *(undefined8 *)(param_5 + 0x108) = 0;
          *(undefined8 *)(param_5 + 0x104) = 0;
          *(undefined8 *)(param_5 + 0x110) = 0;
          *(undefined8 *)(param_5 + 0x10c) = 0;
          *(undefined8 *)(param_5 + 0x118) = 0;
          *(undefined8 *)(param_5 + 0x114) = 0;
          *(undefined8 *)(param_5 + 0x120) = 0;
          *(undefined8 *)(param_5 + 0x11c) = 0;
          *(undefined8 *)(param_5 + 0x128) = 0;
          *(undefined8 *)(param_5 + 0x124) = 0;
        }
        else {
          lVar50 = 0;
          local_598 = local_598 + 2;
          do {
            while( true ) {
              lVar47 = lVar50 * 4;
              pfVar48 = (float *)(param_3 + lVar50 + 0x21);
              if (*pfVar48 == 1.0) break;
              *(undefined4 *)((long)puVar28 + lVar47) = 0;
              if (pfVar48[1] != 1.0) goto LAB_00feabc0;
LAB_00feaaf4:
              uVar53 = (uint)(*(float *)((long)local_598 + -0xc) * 128.0);
              if (0x7f < uVar53) {
                uVar53 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 4) = uVar53;
              if (pfVar48[2] == 1.0) goto LAB_00feab18;
LAB_00feabd0:
              *(undefined4 *)((long)puVar28 + lVar47 + 8) = 0;
              if (pfVar48[3] != 1.0) goto LAB_00feabe0;
LAB_00feab3c:
              uVar53 = (uint)(*(float *)((long)local_598 + -4) * 128.0);
              if (0x7f < uVar53) {
                uVar53 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0xc) = uVar53;
              if (pfVar48[4] == 1.0) goto LAB_00feab60;
LAB_00feabf0:
              *(undefined4 *)((long)puVar28 + lVar47 + 0x10) = 0;
              if (pfVar48[5] != 1.0) goto LAB_00feac00;
LAB_00feab84:
              uVar53 = (uint)(*(float *)((long)local_598 + 4) * 128.0);
              if (0x7f < uVar53) {
                uVar53 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0x14) = uVar53;
              if (pfVar48[6] != 1.0) goto LAB_00feaa80;
LAB_00feac10:
              uVar53 = (uint)(*(float *)(local_598 + 1) * 128.0);
              if (0x7f < uVar53) {
                uVar53 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0x18) = uVar53;
              if (pfVar48[7] != 1.0) goto LAB_00feac34;
LAB_00feaa90:
              uVar53 = (uint)(*(float *)((long)local_598 + 0xc) * 128.0);
              if (0x7f < uVar53) {
                uVar53 = 0x80;
              }
              lVar50 = lVar50 + 8;
              local_598 = local_598 + 4;
              *(uint *)((long)puVar28 + lVar47 + 0x1c) = uVar53;
              if (lVar50 == 0x20) goto LAB_00feac64;
            }
            uVar53 = (uint)(*(float *)(local_598 + -2) * 128.0);
            if (0x7f < uVar53) {
              uVar53 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47) = uVar53;
            if (pfVar48[1] == 1.0) goto LAB_00feaaf4;
LAB_00feabc0:
            *(undefined4 *)((long)puVar28 + lVar47 + 4) = 0;
            if (pfVar48[2] != 1.0) goto LAB_00feabd0;
LAB_00feab18:
            uVar53 = (uint)(*(float *)(local_598 + -1) * 128.0);
            if (0x7f < uVar53) {
              uVar53 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 8) = uVar53;
            if (pfVar48[3] == 1.0) goto LAB_00feab3c;
LAB_00feabe0:
            *(undefined4 *)((long)puVar28 + lVar47 + 0xc) = 0;
            if (pfVar48[4] != 1.0) goto LAB_00feabf0;
LAB_00feab60:
            uVar53 = (uint)(*(float *)local_598 * 128.0);
            if (0x7f < uVar53) {
              uVar53 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 0x10) = uVar53;
            if (pfVar48[5] == 1.0) goto LAB_00feab84;
LAB_00feac00:
            *(undefined4 *)((long)puVar28 + lVar47 + 0x14) = 0;
            if (pfVar48[6] == 1.0) goto LAB_00feac10;
LAB_00feaa80:
            *(undefined4 *)((long)puVar28 + lVar47 + 0x18) = 0;
            if (pfVar48[7] == 1.0) goto LAB_00feaa90;
LAB_00feac34:
            lVar50 = lVar50 + 8;
            local_598 = local_598 + 4;
            *(undefined4 *)((long)puVar28 + lVar47 + 0x1c) = 0;
          } while (lVar50 != 0x20);
        }
LAB_00feac64:
        if ((int)*(float *)(param_2[0x18] + 0xc) == 2) {
          pfVar48 = (float *)(param_3 + 0x11);
        }
        else if ((int)*(float *)(param_2[0x18] + 0xc) == 1) {
          pfVar48 = (float *)(param_3 + 9);
        }
        else {
          pfVar48 = (float *)(param_3 + 1);
        }
        uVar53 = ((int)(*pfVar48 * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 300) = uVar79;
        uVar53 = ((int)(pfVar48[1] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x259) = uVar79;
        uVar53 = ((int)(pfVar48[2] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x12d) = uVar79;
        uVar53 = ((int)(pfVar48[3] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x25b) = uVar79;
        uVar53 = ((int)(pfVar48[4] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x12e) = uVar79;
        uVar53 = ((int)(pfVar48[5] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x25d) = uVar79;
        uVar53 = ((int)(pfVar48[6] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x12f) = uVar79;
        fVar75 = pfVar48[7];
        bVar84 = *(byte *)(param_1 + 0x58);
        *(undefined *)(param_5 + 0x132) = 1;
        uVar53 = ((int)(fVar75 * 32.0) & 0xffffU) * (uint)bVar84 + 0x40;
        uVar79 = (undefined)(uVar53 >> 7);
        if ((uVar53 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x25f) = uVar79;
        auVar63 = _DAT_001e3de0;
        uVar53 = *(uint *)(param_1 + 0x44);
        param_5[0x133] = (short)(uVar53 >> 1);
        uVar4 = *(uint *)(param_1 + 0x48);
        param_5[0x135] = (short)uVar53;
        *(long *)(param_5 + 0x13c) = auVar63._8_8_;
        *(long *)(param_5 + 0x138) = auVar63._0_8_;
        param_5[0x136] = (short)uVar4;
        param_5[0x134] = (short)(uVar4 >> 1);
      }
      if (uVar44 != 0) {
        fVar66 = (float)param_3[0x1e];
        puVar28 = (undefined8 *)(param_5 + 0x8e);
        uVar79 = 0x43;
        fVar75 = 64.0;
        if (fVar66 < 64.0) {
          fVar75 = fVar66;
        }
        fVar58 = 0.0;
        if (0.0 < fVar66) {
          fVar58 = fVar75;
        }
        *(char *)((long)param_5 + 0x117) = (char)(int)fVar58;
        uVar52 = *(undefined8 *)(param_3 + 0x1c);
        uVar42 = NEON_fcmge(uVar52,0x4200000042000000,4);
        uVar46 = NEON_fcmle(uVar52,0,2);
        uVar42 = NEON_bsl(uVar42,0x4200000042000000,uVar52,1);
        iVar49 = (int)(float)CONCAT13((byte)((ulong)uVar42 >> 0x18) & ~(byte)((ulong)uVar46 >> 0x18)
                                      ,CONCAT12((byte)((ulong)uVar42 >> 0x10) &
                                                ~(byte)((ulong)uVar46 >> 0x10),
                                                CONCAT11((byte)((ulong)uVar42 >> 8) &
                                                         ~(byte)((ulong)uVar46 >> 8),
                                                         (byte)uVar42 & ~(byte)uVar46)));
        iVar113 = (int)(float)CONCAT13((byte)((ulong)uVar42 >> 0x38) &
                                       ~(byte)((ulong)uVar46 >> 0x38),
                                       CONCAT12((byte)((ulong)uVar42 >> 0x30) &
                                                ~(byte)((ulong)uVar46 >> 0x30),
                                                CONCAT11((byte)((ulong)uVar42 >> 0x28) &
                                                         ~(byte)((ulong)uVar46 >> 0x28),
                                                         (byte)((ulong)uVar42 >> 0x20) &
                                                         ~(byte)((ulong)uVar46 >> 0x20))));
        *(char *)((long)param_5 + 0x115) = (char)iVar49;
        *(char *)(param_5 + 0x8b) = (char)iVar113;
        fVar75 = 128.0 - (float)(ulong)(uint)((iVar113 + iVar49 + (int)fVar58) * 2);
        uVar80 = 0;
        uVar81 = 0;
        uVar82 = 0;
        if (fVar75 < 128.0) {
          uVar80 = SUB41(fVar75,0);
          uVar81 = (undefined)((uint)fVar75 >> 8);
          uVar82 = (undefined)((uint)fVar75 >> 0x10);
          uVar79 = (undefined)((uint)fVar75 >> 0x18);
        }
        fVar66 = 0.0;
        if (0.0 < fVar75) {
          fVar66 = (float)CONCAT13(uVar79,CONCAT12(uVar82,CONCAT11(uVar81,uVar80)));
        }
        *(char *)(param_5 + 0x8c) = (char)(int)fVar66;
        if (puVar56 == (undefined8 *)0x0) {
          *(undefined8 *)(param_5 + 0x92) = 0;
          *puVar28 = 0;
          *(undefined8 *)(param_5 + 0x9a) = 0;
          *(undefined8 *)(param_5 + 0x96) = 0;
          *(undefined8 *)(param_5 + 0xa2) = 0;
          *(undefined8 *)(param_5 + 0x9e) = 0;
          *(undefined8 *)(param_5 + 0xaa) = 0;
          *(undefined8 *)(param_5 + 0xa6) = 0;
          *(undefined8 *)(param_5 + 0xb2) = 0;
          *(undefined8 *)(param_5 + 0xae) = 0;
          *(undefined8 *)(param_5 + 0xba) = 0;
          *(undefined8 *)(param_5 + 0xb6) = 0;
          *(undefined8 *)(param_5 + 0xc2) = 0;
          *(undefined8 *)(param_5 + 0xbe) = 0;
          *(undefined8 *)(param_5 + 0xca) = 0;
          *(undefined8 *)(param_5 + 0xc6) = 0;
        }
        else {
          lVar50 = 0;
          puVar55 = puVar56 + 2;
          do {
            while( true ) {
              lVar47 = lVar50 * 4;
              pfVar48 = (float *)(param_3 + lVar50 + 0x41);
              if (*pfVar48 == 0.0) break;
              *(undefined4 *)((long)puVar28 + lVar47) = 0;
              if (pfVar48[1] != 0.0) goto LAB_00feaffc;
LAB_00feaf30:
              uVar44 = (uint)(*(float *)((long)puVar55 + -0xc) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 4) = uVar44;
              if (pfVar48[2] == 0.0) goto LAB_00feaf54;
LAB_00feb00c:
              *(undefined4 *)((long)puVar28 + lVar47 + 8) = 0;
              if (pfVar48[3] != 0.0) goto LAB_00feb01c;
LAB_00feaf78:
              uVar44 = (uint)(*(float *)((long)puVar55 + -4) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0xc) = uVar44;
              if (pfVar48[4] == 0.0) goto LAB_00feaf9c;
LAB_00feb02c:
              *(undefined4 *)((long)puVar28 + lVar47 + 0x10) = 0;
              if (pfVar48[5] != 0.0) goto LAB_00feb03c;
LAB_00feafc0:
              uVar44 = (uint)(*(float *)((long)puVar55 + 4) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0x14) = uVar44;
              if (pfVar48[6] != 0.0) goto LAB_00feaebc;
LAB_00feb04c:
              uVar44 = (uint)(*(float *)(puVar55 + 1) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0x18) = uVar44;
              if (pfVar48[7] != 0.0) goto LAB_00feb070;
LAB_00feaecc:
              uVar44 = (uint)(*(float *)((long)puVar55 + 0xc) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              lVar50 = lVar50 + 8;
              puVar55 = puVar55 + 4;
              *(uint *)((long)puVar28 + lVar47 + 0x1c) = uVar44;
              if (lVar50 == 0x20) goto LAB_00feb0a0;
            }
            uVar44 = (uint)(*(float *)(puVar55 + -2) * 128.0);
            if (0x7f < uVar44) {
              uVar44 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47) = uVar44;
            if (pfVar48[1] == 0.0) goto LAB_00feaf30;
LAB_00feaffc:
            *(undefined4 *)((long)puVar28 + lVar47 + 4) = 0;
            if (pfVar48[2] != 0.0) goto LAB_00feb00c;
LAB_00feaf54:
            uVar44 = (uint)(*(float *)(puVar55 + -1) * 128.0);
            if (0x7f < uVar44) {
              uVar44 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 8) = uVar44;
            if (pfVar48[3] == 0.0) goto LAB_00feaf78;
LAB_00feb01c:
            *(undefined4 *)((long)puVar28 + lVar47 + 0xc) = 0;
            if (pfVar48[4] != 0.0) goto LAB_00feb02c;
LAB_00feaf9c:
            uVar44 = (uint)(*(float *)puVar55 * 128.0);
            if (0x7f < uVar44) {
              uVar44 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 0x10) = uVar44;
            if (pfVar48[5] == 0.0) goto LAB_00feafc0;
LAB_00feb03c:
            *(undefined4 *)((long)puVar28 + lVar47 + 0x14) = 0;
            if (pfVar48[6] == 0.0) goto LAB_00feb04c;
LAB_00feaebc:
            *(undefined4 *)((long)puVar28 + lVar47 + 0x18) = 0;
            if (pfVar48[7] == 0.0) goto LAB_00feaecc;
LAB_00feb070:
            lVar50 = lVar50 + 8;
            puVar55 = puVar55 + 4;
            *(undefined4 *)((long)puVar28 + lVar47 + 0x1c) = 0;
          } while (lVar50 != 0x20);
        }
LAB_00feb0a0:
        pfVar48 = (float *)(param_3 + 1);
        if ((int)*(float *)param_2[0x19] == 2) {
          pfVar51 = (float *)(param_3 + 0x11);
        }
        else {
          pfVar51 = pfVar48;
          if ((int)*(float *)param_2[0x19] == 1) {
            pfVar51 = (float *)(param_3 + 9);
          }
        }
        uVar44 = ((int)(*pfVar51 * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0xce) = uVar79;
        uVar44 = ((int)(pfVar51[1] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x19d) = uVar79;
        uVar44 = ((int)(pfVar51[2] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0xcf) = uVar79;
        uVar44 = ((int)(pfVar51[3] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x19f) = uVar79;
        uVar44 = ((int)(pfVar51[4] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0xd0) = uVar79;
        uVar44 = ((int)(pfVar51[5] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x1a1) = uVar79;
        uVar44 = ((int)(pfVar51[6] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0xd1) = uVar79;
        fVar75 = pfVar51[7];
        bVar84 = *(byte *)(param_1 + 0x58);
        *(undefined *)(param_5 + 0xd4) = 1;
        uVar44 = ((int)(fVar75 * 32.0) & 0xffffU) * (uint)bVar84 + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x1a3) = uVar79;
        auVar63 = *(undefined (*) [16])(param_1 + 0x44);
        uVar42 = CONCAT26(auVar63._12_2_,
                          CONCAT24(auVar63._8_2_,CONCAT22(auVar63._4_2_,auVar63._0_2_)));
        uVar42 = NEON_ext(uVar42,uVar42,4,1);
        *(undefined8 *)(param_5 + 0xd5) = uVar42;
        uVar44 = *(uint *)(param_1 + 0x54);
        puVar28 = (undefined8 *)(param_5 + 0x14a);
        *(undefined2 *)((long)param_5 + 0x28d) = 0;
        uVar53 = 0;
        if (uVar44 != 0) {
          uVar53 = 0x10000 / uVar44;
        }
        *(uint *)(param_5 + 0xde) = uVar53;
        *(uint *)(param_5 + 0xe0) = uVar53;
        iVar49 = (int)((1.0 / ((double)(ulong)uVar44 + (double)(ulong)uVar44) + -0.5) * 65536.0);
        *(int *)(param_5 + 0xda) = iVar49;
        *(int *)(param_5 + 0xdc) = iVar49;
        fVar75 = (float)NEON_ucvtf(param_3[0x20]);
        uVar79 = 0;
        uVar80 = 0;
        uVar81 = 0x80;
        uVar82 = 0x42;
        if (fVar75 < 64.0) {
          uVar79 = SUB41(fVar75,0);
          uVar80 = (undefined)((uint)fVar75 >> 8);
          uVar81 = (undefined)((uint)fVar75 >> 0x10);
          uVar82 = (undefined)((uint)fVar75 >> 0x18);
        }
        iVar49 = (int)(float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79)));
        *(char *)((long)param_5 + 0x28f) = (char)iVar49;
        fVar66 = 128.0 - (float)(ulong)(uint)(iVar49 << 1);
        fVar75 = 128.0;
        if (fVar66 < 128.0) {
          fVar75 = fVar66;
        }
        fVar58 = 0.0;
        if (0.0 < fVar66) {
          fVar58 = fVar75;
        }
        *(char *)(param_5 + 0x148) = (char)(int)fVar58;
        if (puVar56 == (undefined8 *)0x0) {
          *(undefined8 *)(param_5 + 0x14e) = 0;
          *puVar28 = 0;
          *(undefined8 *)(param_5 + 0x156) = 0;
          *(undefined8 *)(param_5 + 0x152) = 0;
          *(undefined8 *)(param_5 + 0x15e) = 0;
          *(undefined8 *)(param_5 + 0x15a) = 0;
          *(undefined8 *)(param_5 + 0x166) = 0;
          *(undefined8 *)(param_5 + 0x162) = 0;
          *(undefined8 *)(param_5 + 0x16e) = 0;
          *(undefined8 *)(param_5 + 0x16a) = 0;
          *(undefined8 *)(param_5 + 0x176) = 0;
          *(undefined8 *)(param_5 + 0x172) = 0;
          *(undefined8 *)(param_5 + 0x17e) = 0;
          *(undefined8 *)(param_5 + 0x17a) = 0;
          *(undefined8 *)(param_5 + 0x186) = 0;
          *(undefined8 *)(param_5 + 0x182) = 0;
        }
        else {
          lVar50 = 0;
          puVar56 = puVar56 + 2;
          do {
            while( true ) {
              lVar47 = lVar50 * 4;
              pfVar51 = (float *)(param_3 + lVar50 + 0x41);
              if (*pfVar51 == 1.0) break;
              *(undefined4 *)((long)puVar28 + lVar47) = 0;
              if (pfVar51[1] != 1.0) goto LAB_00feb430;
LAB_00feb364:
              uVar44 = (uint)(*(float *)((long)puVar56 + -0xc) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 4) = uVar44;
              if (pfVar51[2] == 1.0) goto LAB_00feb388;
LAB_00feb440:
              *(undefined4 *)((long)puVar28 + lVar47 + 8) = 0;
              if (pfVar51[3] != 1.0) goto LAB_00feb450;
LAB_00feb3ac:
              uVar44 = (uint)(*(float *)((long)puVar56 + -4) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0xc) = uVar44;
              if (pfVar51[4] == 1.0) goto LAB_00feb3d0;
LAB_00feb460:
              *(undefined4 *)((long)puVar28 + lVar47 + 0x10) = 0;
              if (pfVar51[5] != 1.0) goto LAB_00feb470;
LAB_00feb3f4:
              uVar44 = (uint)(*(float *)((long)puVar56 + 4) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0x14) = uVar44;
              if (pfVar51[6] != 1.0) goto LAB_00feb2f0;
LAB_00feb480:
              uVar44 = (uint)(*(float *)(puVar56 + 1) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              *(uint *)((long)puVar28 + lVar47 + 0x18) = uVar44;
              if (pfVar51[7] != 1.0) goto LAB_00feb4a4;
LAB_00feb300:
              uVar44 = (uint)(*(float *)((long)puVar56 + 0xc) * 128.0);
              if (0x7f < uVar44) {
                uVar44 = 0x80;
              }
              lVar50 = lVar50 + 8;
              puVar56 = puVar56 + 4;
              *(uint *)((long)puVar28 + lVar47 + 0x1c) = uVar44;
              if (lVar50 == 0x20) goto LAB_00feb4d4;
            }
            uVar44 = (uint)(*(float *)(puVar56 + -2) * 128.0);
            if (0x7f < uVar44) {
              uVar44 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47) = uVar44;
            if (pfVar51[1] == 1.0) goto LAB_00feb364;
LAB_00feb430:
            *(undefined4 *)((long)puVar28 + lVar47 + 4) = 0;
            if (pfVar51[2] != 1.0) goto LAB_00feb440;
LAB_00feb388:
            uVar44 = (uint)(*(float *)(puVar56 + -1) * 128.0);
            if (0x7f < uVar44) {
              uVar44 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 8) = uVar44;
            if (pfVar51[3] == 1.0) goto LAB_00feb3ac;
LAB_00feb450:
            *(undefined4 *)((long)puVar28 + lVar47 + 0xc) = 0;
            if (pfVar51[4] != 1.0) goto LAB_00feb460;
LAB_00feb3d0:
            uVar44 = (uint)(*(float *)puVar56 * 128.0);
            if (0x7f < uVar44) {
              uVar44 = 0x80;
            }
            *(uint *)((long)puVar28 + lVar47 + 0x10) = uVar44;
            if (pfVar51[5] == 1.0) goto LAB_00feb3f4;
LAB_00feb470:
            *(undefined4 *)((long)puVar28 + lVar47 + 0x14) = 0;
            if (pfVar51[6] == 1.0) goto LAB_00feb480;
LAB_00feb2f0:
            *(undefined4 *)((long)puVar28 + lVar47 + 0x18) = 0;
            if (pfVar51[7] == 1.0) goto LAB_00feb300;
LAB_00feb4a4:
            lVar50 = lVar50 + 8;
            puVar56 = puVar56 + 4;
            *(undefined4 *)((long)puVar28 + lVar47 + 0x1c) = 0;
          } while (lVar50 != 0x20);
        }
LAB_00feb4d4:
        if ((int)*(float *)(param_2[0x19] + 4) == 2) {
          pfVar48 = (float *)(param_3 + 0x11);
        }
        else if ((int)*(float *)(param_2[0x19] + 4) == 1) {
          pfVar48 = (float *)(param_3 + 9);
        }
        uVar44 = ((int)(*pfVar48 * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x18a) = uVar79;
        uVar44 = ((int)(pfVar48[1] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x315) = uVar79;
        uVar44 = ((int)(pfVar48[2] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x18b) = uVar79;
        uVar44 = ((int)(pfVar48[3] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x317) = uVar79;
        uVar44 = ((int)(pfVar48[4] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x18c) = uVar79;
        uVar44 = ((int)(pfVar48[5] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x319) = uVar79;
        uVar44 = ((int)(pfVar48[6] * 32.0) & 0xffffU) * (uint)*(byte *)(param_1 + 0x58) + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)(param_5 + 0x18d) = uVar79;
        fVar75 = pfVar48[7];
        bVar84 = *(byte *)(param_1 + 0x58);
        *(undefined *)(param_5 + 400) = 1;
        uVar44 = ((int)(fVar75 * 32.0) & 0xffffU) * (uint)bVar84 + 0x40;
        uVar79 = (undefined)(uVar44 >> 7);
        if ((uVar44 >> 7 & 0xffe0) != 0) {
          uVar79 = 0x20;
        }
        *(undefined *)((long)param_5 + 0x31b) = uVar79;
        uVar44 = *(uint *)(param_1 + 0x44);
        param_5[0x191] = (short)(uVar44 >> 1);
        uVar53 = *(uint *)(param_1 + 0x48);
        param_5[0x193] = (short)uVar44;
        *(undefined8 *)(param_5 + 0x196) = 0xffffc000ffffc000;
        *(undefined8 *)(param_5 + 0x19a) = 0x800000008000;
        param_5[0x194] = (short)uVar53;
        param_5[0x192] = (short)(uVar53 >> 1);
      }
      uVar42 = 1;
      if (*(long *)(lVar6 + 0x28) == local_b8) {
        return;
      }
      goto LAB_00feb698;
    }
    pcVar41 = (char *)CamX::Log::GroupToString(0x200000);
    uVar42 = CamX::Log::GetFileName
                       ("vendor/qcom/proprietary/camx-lib/hwl/iqsetting/cc151setting.cpp");
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x16d7cc,(char *)0x1,0x10a008,pcVar41,
               uVar42,"CalculateHWSetting");
    if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) == 1) &&
       (((byte)PTR_g_traceInfo_010f56f0[2] >> 5 & 1) != 0)) {
      uStack_4a8 = 0;
      local_4b0 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      local_490 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      local_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      local_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      local_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      local_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      local_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      local_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      local_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      local_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      local_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      local_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_4b8 = 0;
      local_4c0 = 0;
      uStack_518 = 0;
      uStack_514 = 0;
      fStack_520 = 0.0;
      fStack_51c = 0.0;
      uStack_508 = 0;
      local_504 = 0;
      local_510 = 0;
      local_50c = 0;
      uStack_4f8 = 0;
      local_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      local_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      fStack_528 = 0.0;
      fStack_524 = 0.0;
      local_530 = 0.0;
      fStack_52c = 0.0;
      FUN_00284260(&local_530,0x200,"[ERROR]aiEnable enabled but interpolation result is NULL");
      uVar43 = atrace_get_enabled_tags();
      if ((uVar43 & 0xc00) == 0) goto LAB_00fe969c;
LAB_00fe9ae8:
      atrace_begin_body(&local_530);
      uVar43 = atrace_get_enabled_tags();
      goto joined_r0x00fe96a4;
    }
  }
  uVar42 = 0;
  if (*(long *)(lVar6 + 0x28) == local_b8) {
    return;
  }
LAB_00feb698:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar42);
}


