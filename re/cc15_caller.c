// ===== 0x19f084 FUN_0029f020 @ 0029f020

void FUN_0029f020(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 *__dest;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 *puVar25;
  ulong uVar26;
  undefined4 *puVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  int iVar31;
  undefined4 *puVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined auVar39 [16];
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  int local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
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
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if ((*(int *)(param_1 + 1) != 0x1b0) || (*(int *)(param_1 + 5) != 0xe8)) {
    pcVar13 = (char *)CamX::Log::GroupToString(0x20000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/camxiqinterface2cc141.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)0x20000,0x16d7cc,(char *)0x1,0x182e14,pcVar13,uVar12,"CalculateHWSetting",
               0x1b0,*(undefined4 *)(param_1 + 1),0xe8,*(undefined4 *)(param_1 + 5));
    if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) == 1) &&
       (((byte)PTR_g_traceInfo_010f56f0[2] >> 1 & 1) != 0)) {
      uStack_258 = 0;
      uStack_254 = 0;
      local_260 = 0;
      uStack_25c = 0;
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
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      FUN_00284260(&local_260,0x200,
                   "[ERROR]Wrong input buffer size commonLibInput expected %d got %dunpackedData expected %d got %d"
                   ,0x1b0,*(undefined4 *)(param_1 + 1),0xe8,*(undefined4 *)(param_1 + 5));
      uVar14 = atrace_get_enabled_tags();
      if ((uVar14 & 0xc00) == 0) {
        uVar14 = atrace_get_enabled_tags();
      }
      else {
        atrace_begin_body(&local_260);
        uVar14 = atrace_get_enabled_tags();
      }
      if ((uVar14 & 0xc00) != 0) {
        atrace_end_body();
      }
    }
    uVar12 = 4;
    goto LAB_0029f194;
  }
  lVar11 = *param_1;
  lVar18 = param_1[4];
  __dest = *(undefined8 **)(lVar11 + 0x60);
  if (__dest == (undefined8 *)0x0) {
    if ((*(long *)(lVar11 + 0x1a0) != 0) && (*(int *)(lVar11 + 0x40) != 1)) {
      __dest = (undefined8 *)0x0;
      goto LAB_0029f078;
    }
    __dest = (undefined8 *)param_1[2];
    if ((__dest != (undefined8 *)0x0) && (lVar22 = *(long *)(lVar11 + 8), lVar22 != 0)) {
      plVar17 = (long *)param_1[7];
      lVar2 = *plVar17;
      lVar3 = plVar17[1];
      if (lVar2 != lVar3) {
        lVar16 = param_1[6];
        uVar4 = *(uint *)(lVar11 + 0x70);
        uVar14 = (ulong)uVar4;
        puVar30 = *(undefined4 **)(lVar11 + 0x68);
        uStack_254 = *(undefined4 *)(lVar16 + 0x5c);
        uStack_25c = (undefined4)*(undefined8 *)(lVar22 + 0x4c);
        uStack_258 = (undefined4)((ulong)*(undefined8 *)(lVar22 + 0x4c) >> 0x20);
        local_260 = (int)*(float *)(lVar16 + 0x58);
        if (uVar4 != 0) {
          uVar23 = (ulong)*(uint *)(lVar11 + 0x74);
          if (uVar4 == 1) {
            uVar28 = 0;
          }
          else {
            if (uVar4 < 4) {
              uVar28 = 0;
            }
            else {
              uVar28 = uVar14 - 4;
              if (uVar28 < 4) {
                uVar24 = 0;
              }
              else {
                uVar24 = 0;
                uVar21 = (uVar28 >> 2) + 1 & 0x7ffffffffffffffe;
                puVar29 = puVar30;
                puVar9 = __dest;
                do {
                  lVar33 = (long)puVar9 + 0x104;
                  if (uVar23 <= uVar24) {
                    lVar33 = 0;
                  }
                  puVar15 = puVar9 + 0x41;
                  if (uVar23 <= uVar24 + 1) {
                    puVar15 = (undefined8 *)0x0;
                  }
                  lVar20 = (long)puVar9 + 0x30c;
                  *(undefined8 *)(puVar29 + 0xc) = 0;
                  *(long *)(puVar29 + 0xe) = lVar33;
                  if (uVar23 <= uVar24 + 2) {
                    lVar20 = 0;
                  }
                  puVar19 = puVar9 + 0x82;
                  *(undefined8 *)(puVar29 + 0x1e) = 0;
                  *(undefined8 **)(puVar29 + 0x20) = puVar15;
                  if (uVar23 <= uVar24 + 3) {
                    puVar19 = (undefined8 *)0x0;
                  }
                  *(undefined8 *)(puVar29 + 0x30) = 0;
                  *(long *)(puVar29 + 0x32) = lVar20;
                  lVar33 = (long)puVar9 + 0x514;
                  *(undefined8 *)(puVar29 + 0x42) = 0;
                  *(undefined8 **)(puVar29 + 0x44) = puVar19;
                  if (uVar23 <= uVar24 + 4) {
                    lVar33 = 0;
                  }
                  puVar15 = puVar9 + 0xc3;
                  if (uVar23 <= uVar24 + 5) {
                    puVar15 = (undefined8 *)0x0;
                  }
                  lVar20 = (long)puVar9 + 0x71c;
                  puVar29[0x10] = 0;
                  if (uVar23 <= uVar24 + 6) {
                    lVar20 = 0;
                  }
                  puVar19 = puVar9 + 0x104;
                  if (uVar23 <= uVar24 + 7) {
                    puVar19 = (undefined8 *)0x0;
                  }
                  puVar29[0x22] = 0;
                  puVar29[0x34] = 0;
                  uVar21 = uVar21 - 2;
                  puVar29[0x46] = 0;
                  *puVar29 = 0;
                  uVar24 = uVar24 + 8;
                  puVar29[0x12] = 0;
                  puVar29[0x24] = 0;
                  puVar29[0x36] = 0;
                  puVar29[8] = 0;
                  puVar29[0x1a] = 0;
                  puVar29[0x2c] = 0;
                  puVar29[0x3e] = 0;
                  puVar29[0x58] = 0;
                  puVar29[0x6a] = 0;
                  puVar29[0x7c] = 0;
                  puVar29[0x8e] = 0;
                  puVar29[0x48] = 0;
                  puVar29[0x5a] = 0;
                  puVar29[0x6c] = 0;
                  puVar29[0x7e] = 0;
                  puVar29[0x50] = 0;
                  puVar29[0x62] = 0;
                  puVar29[0x74] = 0;
                  puVar29[0x86] = 0;
                  *(undefined8 *)(puVar29 + 0x8a) = 0;
                  *(undefined8 *)(puVar29 + 0x54) = 0;
                  *(long *)(puVar29 + 0x56) = lVar33;
                  *(undefined8 *)(puVar29 + 0x66) = 0;
                  *(undefined8 **)(puVar29 + 0x68) = puVar15;
                  *(undefined8 *)(puVar29 + 0x78) = 0;
                  *(long *)(puVar29 + 0x7a) = lVar20;
                  *(undefined8 **)(puVar29 + 0x8c) = puVar19;
                  puVar29 = puVar29 + 0x90;
                  puVar9 = puVar9 + 0x104;
                } while (uVar21 != 0);
              }
              if (((uint)uVar28 >> 2 & 1) == 0) {
                uVar21 = uVar24 | 1;
                uVar28 = uVar24 | 2;
                uVar26 = uVar24 | 3;
                puVar29 = puVar30 + uVar24 * 0x12;
                lVar33 = (long)__dest + uVar24 * 0x104 + 0x104;
                if (uVar23 <= uVar24) {
                  lVar33 = 0;
                }
                lVar20 = (long)__dest + uVar21 * 0x104 + 0x104;
                puVar29[0x10] = 0;
                puVar27 = puVar30 + uVar21 * 0x12;
                if (uVar23 <= uVar21) {
                  lVar20 = 0;
                }
                puVar32 = puVar30 + uVar28 * 0x12;
                lVar1 = (long)__dest + uVar28 * 0x104 + 0x104;
                puVar25 = puVar30 + uVar26 * 0x12;
                *(undefined8 *)(puVar29 + 0xc) = 0;
                *(long *)(puVar29 + 0xe) = lVar33;
                if (uVar23 <= uVar28) {
                  lVar1 = 0;
                }
                lVar33 = (long)__dest + uVar26 * 0x104 + 0x104;
                if (uVar23 <= uVar26) {
                  lVar33 = 0;
                }
                puVar27[0x10] = 0;
                puVar32[0x10] = 0;
                puVar25[0x10] = 0;
                *puVar29 = 0;
                *puVar27 = 0;
                *puVar32 = 0;
                *puVar25 = 0;
                puVar29[8] = 0;
                puVar27[8] = 0;
                puVar32[8] = 0;
                puVar25[8] = 0;
                *(undefined8 *)(puVar27 + 0xc) = 0;
                *(long *)(puVar27 + 0xe) = lVar20;
                *(undefined8 *)(puVar32 + 0xc) = 0;
                *(long *)(puVar32 + 0xe) = lVar1;
                *(undefined8 *)(puVar25 + 0xc) = 0;
                *(long *)(puVar25 + 0xe) = lVar33;
              }
              if ((uVar4 & 3) == 0) goto LAB_0029f5bc;
              uVar28 = uVar14 & 0xfffffffc;
              if ((uVar14 & 3) == 1) goto LAB_0029f590;
            }
            uVar24 = uVar28 | 1;
            lVar33 = (long)__dest + uVar28 * 0x104 + 0x104;
            puVar29 = puVar30 + uVar28 * 0x12;
            puVar27 = puVar30 + uVar24 * 0x12;
            if (uVar23 <= uVar28) {
              lVar33 = 0;
            }
            lVar20 = (long)__dest + uVar24 * 0x104 + 0x104;
            if (uVar23 <= uVar24) {
              lVar20 = 0;
            }
            uVar28 = uVar28 | 2;
            puVar29[0x10] = 0;
            puVar27[0x10] = 0;
            *puVar29 = 0;
            *puVar27 = 0;
            puVar29[8] = 0;
            puVar27[8] = 0;
            *(undefined8 *)(puVar29 + 0xc) = 0;
            *(long *)(puVar29 + 0xe) = lVar33;
            *(undefined8 *)(puVar27 + 0xc) = 0;
            *(long *)(puVar27 + 0xe) = lVar20;
            if (uVar14 <= uVar28) goto LAB_0029f5bc;
          }
LAB_0029f590:
          puVar29 = puVar30 + uVar28 * 0x12;
          lVar33 = (long)__dest + uVar28 * 0x104 + 0x104;
          if (uVar23 <= uVar28) {
            lVar33 = 0;
          }
          puVar29[0x10] = 0;
          *puVar29 = 0;
          puVar29[8] = 0;
          *(undefined8 *)(puVar29 + 0xc) = 0;
          *(long *)(puVar29 + 0xe) = lVar33;
        }
LAB_0029f5bc:
        *(long *)(puVar30 + 0xc) = lVar22 + 0x68;
        iVar31 = (int)((ulong)(lVar3 - lVar2) >> 2);
        *puVar30 = 1;
        puVar30[0x10] = 1;
        iVar10 = FUN_01030f70(puVar30,iVar31 + 1,lVar16,plVar17,&local_260,&DAT_010face8);
        if ((iVar10 != 0) &&
           (iVar10 = FUN_01031450(puVar30,*(undefined4 *)(lVar11 + 0x74),iVar31 + 1,FUN_00e08f60),
           iVar10 != 0)) {
          if (*(void **)(puVar30 + 0xe) != (void *)0x0) {
            memcpy(__dest,*(void **)(puVar30 + 0xe),0x104);
          }
          if (iVar10 == 1) {
            if (*(int *)(lVar11 + 0x34) != 5) {
              uVar7 = *__dest;
              fVar47 = *(float *)(lVar11 + 0x10);
              fVar35 = *(float *)(lVar11 + 0x14);
              uVar8 = *(undefined8 *)((long)__dest + 0xc);
              uVar46 = NEON_rev64(uVar7,4);
              fVar38 = *(float *)(__dest + 1);
              uVar36 = __dest[3];
              fVar48 = *(float *)(lVar11 + 0x1c);
              fVar34 = *(float *)(lVar11 + 0x20);
              uVar50 = NEON_rev64(uVar8,4);
              fVar37 = *(float *)(lVar11 + 0x28);
              fVar42 = *(float *)(lVar11 + 0x2c);
              fVar52 = *(float *)((long)__dest + 0x14);
              fVar41 = *(float *)(lVar11 + 0x24);
              uVar12 = NEON_rev64(uVar36,4);
              fVar45 = *(float *)(lVar11 + 0x18);
              fVar51 = *(float *)(lVar11 + 0x30);
              fVar49 = *(float *)(__dest + 4);
              uVar40 = NEON_fmadd(fVar38,fVar37,0);
              fVar43 = (float)uVar46 * fVar48 + 0.0 + (float)uVar50 * fVar34 +
                       (float)uVar12 * fVar41;
              fVar44 = fVar38 * fVar48 + 0.0 + fVar52 * fVar34 + fVar49 * fVar41;
              uVar40 = NEON_fmadd(fVar52,fVar42,uVar40);
              auVar39._4_4_ =
                   (float)((ulong)uVar46 >> 0x20) * fVar37 + 0.0 +
                   (float)((ulong)uVar50 >> 0x20) * fVar42 + (float)((ulong)uVar12 >> 0x20) * fVar51
              ;
              auVar39._0_4_ = fVar43;
              auVar39._8_4_ = fVar44;
              auVar39._12_4_ =
                   (float)uVar46 * fVar37 + 0.0 + (float)uVar50 * fVar42 + (float)uVar12 * fVar51;
              auVar39 = NEON_rev64(auVar39,4);
              uVar40 = NEON_fmadd(fVar49,fVar51,uVar40);
              __dest[1] = CONCAT44((float)uVar7 * fVar48 + 0.0 + (float)uVar8 * fVar34 +
                                   (float)uVar36 * fVar41,
                                   fVar38 * fVar47 + 0.0 + fVar52 * fVar35 + fVar49 * fVar45);
              *__dest = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar47 + 0.0 +
                                 (float)((ulong)uVar8 >> 0x20) * fVar35 +
                                 (float)((ulong)uVar36 >> 0x20) * fVar45,
                                 (float)uVar7 * fVar47 + 0.0 + (float)uVar8 * fVar35 +
                                 (float)uVar36 * fVar45);
              __dest[3] = CONCAT44(auVar39._8_4_,auVar39._0_4_);
              __dest[2] = CONCAT44(fVar44,fVar43);
              *(undefined4 *)(__dest + 4) = uVar40;
              if (*(int *)(lVar11 + 0x40) == 1) {
                uVar12 = *(undefined8 *)((long)__dest + 0x34);
                fVar44 = *(float *)(lVar11 + 0x10);
                fVar37 = *(float *)(lVar11 + 0x14);
                uVar36 = __dest[8];
                uVar7 = NEON_rev64(uVar12,4);
                fVar42 = *(float *)((long)__dest + 0x3c);
                uVar8 = *(undefined8 *)((long)__dest + 0x4c);
                fVar52 = *(float *)(lVar11 + 0x1c);
                fVar48 = *(float *)(lVar11 + 0x20);
                uVar46 = NEON_rev64(uVar36,4);
                fVar41 = *(float *)(lVar11 + 0x28);
                fVar45 = *(float *)(lVar11 + 0x2c);
                fVar51 = *(float *)(__dest + 9);
                fVar38 = *(float *)(lVar11 + 0x24);
                uVar50 = NEON_rev64(uVar8,4);
                fVar43 = *(float *)(lVar11 + 0x18);
                fVar49 = *(float *)(lVar11 + 0x30);
                fVar47 = *(float *)((long)__dest + 0x54);
                uVar40 = NEON_fmadd(fVar42,fVar41,0);
                fVar34 = (float)uVar7 * fVar52 + 0.0 + (float)uVar46 * fVar48 +
                         (float)uVar50 * fVar38;
                fVar35 = fVar42 * fVar52 + 0.0 + fVar51 * fVar48 + fVar47 * fVar38;
                uVar40 = NEON_fmadd(fVar51,fVar45,uVar40);
                auVar6._4_4_ = (float)((ulong)uVar7 >> 0x20) * fVar41 + 0.0 +
                               (float)((ulong)uVar46 >> 0x20) * fVar45 +
                               (float)((ulong)uVar50 >> 0x20) * fVar49;
                auVar6._0_4_ = fVar34;
                auVar6._8_4_ = fVar35;
                auVar6._12_4_ =
                     (float)uVar7 * fVar41 + 0.0 + (float)uVar46 * fVar45 + (float)uVar50 * fVar49;
                auVar39 = NEON_rev64(auVar6,4);
                uVar40 = NEON_fmadd(fVar47,fVar49,uVar40);
                *(float *)((long)__dest + 0x34) =
                     (float)uVar12 * fVar44 + 0.0 + (float)uVar36 * fVar37 + (float)uVar8 * fVar43;
                *(float *)(__dest + 7) =
                     (float)((ulong)uVar12 >> 0x20) * fVar44 + 0.0 +
                     (float)((ulong)uVar36 >> 0x20) * fVar37 +
                     (float)((ulong)uVar8 >> 0x20) * fVar43;
                *(float *)((long)__dest + 0x3c) =
                     fVar42 * fVar44 + 0.0 + fVar51 * fVar37 + fVar47 * fVar43;
                *(float *)(__dest + 8) =
                     (float)uVar12 * fVar52 + 0.0 + (float)uVar36 * fVar48 + (float)uVar8 * fVar38;
                *(ulong *)((long)__dest + 0x4c) = CONCAT44(auVar39._8_4_,auVar39._0_4_);
                *(ulong *)((long)__dest + 0x44) = CONCAT44(fVar35,fVar34);
                *(undefined4 *)((long)__dest + 0x54) = uVar40;
              }
            }
            goto LAB_0029f078;
          }
        }
      }
    }
    pcVar13 = (char *)CamX::Log::GroupToString(0x20000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/camxiqinterface2cc141.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)0x20000,0x16d7cc,(char *)0x1,0x1d4d5d,pcVar13,uVar12,"CalculateHWSetting");
    uVar12 = 1;
    if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) != 1) ||
       (((byte)PTR_g_traceInfo_010f56f0[2] >> 1 & 1) == 0)) goto LAB_0029f194;
    uStack_258 = 0;
    uStack_254 = 0;
    local_260 = 0;
    uStack_25c = 0;
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
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_00284260(&local_260,0x200,"[ERROR]Failed to run the interpolation");
    uVar14 = atrace_get_enabled_tags();
    if ((uVar14 & 0xc00) == 0) goto LAB_0029f308;
LAB_0029f948:
    atrace_begin_body(&local_260);
    uVar14 = atrace_get_enabled_tags();
  }
  else {
LAB_0029f078:
    iVar10 = FUN_00fe7a20(lVar11,__dest,*(long *)(lVar11 + 8) + 0x54,*(long *)(lVar11 + 8) + 4,
                          lVar18);
    if (iVar10 != 0) {
      uVar12 = 0;
      goto LAB_0029f194;
    }
    pcVar13 = (char *)CamX::Log::GroupToString(0x20000);
    uVar12 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/camxiqinterface2cc141.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)0x20000,0x16d7cc,(char *)0x1,0x158e7b,pcVar13,uVar12,"CalculateHWSetting");
    uVar12 = 1;
    if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) != 1) ||
       (((byte)PTR_g_traceInfo_010f56f0[2] >> 1 & 1) == 0)) goto LAB_0029f194;
    uStack_258 = 0;
    uStack_254 = 0;
    local_260 = 0;
    uStack_25c = 0;
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
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_00284260(&local_260,0x200,"[ERROR]Calculate HW setting failed");
    uVar14 = atrace_get_enabled_tags();
    if ((uVar14 & 0xc00) != 0) goto LAB_0029f948;
LAB_0029f308:
    uVar14 = atrace_get_enabled_tags();
  }
  if ((uVar14 & 0xc00) != 0) {
    atrace_end_body();
  }
  uVar12 = 1;
LAB_0029f194:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


