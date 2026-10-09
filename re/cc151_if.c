// ===== 0x19fa7c FUN_0029f9d0 @ 0029f9d0

void FUN_0029f9d0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined auVar8 [16];
  int iVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 *__dest;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *puVar13;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 *puVar25;
  ulong uVar26;
  undefined4 *puVar27;
  ulong uVar28;
  undefined4 *puVar29;
  long lVar30;
  undefined4 *puVar31;
  int iVar32;
  undefined4 *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined auVar58 [16];
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
  if ((*(int *)(param_1 + 1) == 0x5c8) && (*(int *)(param_1 + 5) == 0x49c)) {
    lVar30 = *param_1;
    lVar17 = param_1[4];
    __dest = *(undefined8 **)(lVar30 + 0x60);
    if (__dest == (undefined8 *)0x0) {
      if ((*(long *)(lVar30 + 0x5b8) != 0) && (*(int *)(lVar30 + 0x40) != 1)) {
        __dest = (undefined8 *)0x0;
        goto LAB_0029fa28;
      }
      __dest = (undefined8 *)param_1[2];
      if ((__dest != (undefined8 *)0x0) && (lVar22 = *(long *)(lVar30 + 8), lVar22 != 0)) {
        plVar16 = (long *)param_1[7];
        lVar2 = *plVar16;
        lVar3 = plVar16[1];
        if (lVar2 != lVar3) {
          lVar14 = param_1[6];
          uVar4 = *(uint *)(lVar30 + 0x70);
          uVar12 = (ulong)uVar4;
          puVar31 = *(undefined4 **)(lVar30 + 0x68);
          uStack_254 = *(undefined4 *)(lVar14 + 0x5c);
          uStack_25c = (undefined4)*(undefined8 *)(lVar22 + 0x54);
          uStack_258 = (undefined4)((ulong)*(undefined8 *)(lVar22 + 0x54) >> 0x20);
          local_260 = (int)*(float *)(lVar14 + 0x58);
          if (uVar4 != 0) {
            uVar23 = (ulong)*(uint *)(lVar30 + 0x74);
            if (uVar4 == 1) {
              uVar28 = 0;
            }
            else {
              if (uVar4 < 4) {
                uVar28 = 0;
              }
              else {
                uVar28 = uVar12 - 4;
                if (uVar28 < 4) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = 0;
                  uVar21 = (uVar28 >> 2) + 1 & 0x7ffffffffffffffe;
                  puVar29 = puVar31;
                  puVar1 = __dest;
                  do {
                    puVar18 = puVar1 + 0x33;
                    if (uVar23 <= uVar24) {
                      puVar18 = (undefined8 *)0x0;
                    }
                    puVar13 = puVar1 + 0x66;
                    puVar20 = puVar1 + 0x99;
                    if (uVar23 <= uVar24 + 1) {
                      puVar13 = (undefined8 *)0x0;
                    }
                    if (uVar23 <= uVar24 + 2) {
                      puVar20 = (undefined8 *)0x0;
                    }
                    puVar19 = puVar1 + 0xcc;
                    if (uVar23 <= uVar24 + 3) {
                      puVar19 = (undefined8 *)0x0;
                    }
                    *(undefined8 *)(puVar29 + 0x1e) = 0;
                    *(undefined8 **)(puVar29 + 0x20) = puVar13;
                    *(undefined8 *)(puVar29 + 0x30) = 0;
                    *(undefined8 **)(puVar29 + 0x32) = puVar20;
                    puVar13 = puVar1 + 0xff;
                    *(undefined8 *)(puVar29 + 0x42) = 0;
                    *(undefined8 **)(puVar29 + 0x44) = puVar19;
                    if (uVar23 <= uVar24 + 4) {
                      puVar13 = (undefined8 *)0x0;
                    }
                    puVar20 = puVar1 + 0x132;
                    *(undefined8 *)(puVar29 + 0xc) = 0;
                    *(undefined8 **)(puVar29 + 0xe) = puVar18;
                    if (uVar23 <= uVar24 + 5) {
                      puVar20 = (undefined8 *)0x0;
                    }
                    puVar18 = puVar1 + 0x165;
                    puVar29[0x10] = 0;
                    if (uVar23 <= uVar24 + 6) {
                      puVar18 = (undefined8 *)0x0;
                    }
                    puVar19 = puVar1 + 0x198;
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
                    *(undefined8 **)(puVar29 + 0x56) = puVar13;
                    *(undefined8 *)(puVar29 + 0x66) = 0;
                    *(undefined8 **)(puVar29 + 0x68) = puVar20;
                    *(undefined8 *)(puVar29 + 0x78) = 0;
                    *(undefined8 **)(puVar29 + 0x7a) = puVar18;
                    *(undefined8 **)(puVar29 + 0x8c) = puVar19;
                    puVar29 = puVar29 + 0x90;
                    puVar1 = puVar1 + 0x198;
                  } while (uVar21 != 0);
                }
                if (((uint)uVar28 >> 2 & 1) == 0) {
                  uVar28 = uVar24 | 1;
                  uVar21 = uVar24 | 2;
                  uVar26 = uVar24 | 3;
                  puVar29 = puVar31 + uVar24 * 0x12;
                  puVar1 = __dest + uVar24 * 0x33 + 0x33;
                  puVar27 = puVar31 + uVar28 * 0x12;
                  if (uVar23 <= uVar24) {
                    puVar1 = (undefined8 *)0x0;
                  }
                  puVar18 = __dest + uVar28 * 0x33 + 0x33;
                  puVar33 = puVar31 + uVar21 * 0x12;
                  if (uVar23 <= uVar28) {
                    puVar18 = (undefined8 *)0x0;
                  }
                  puVar13 = __dest + uVar21 * 0x33 + 0x33;
                  puVar25 = puVar31 + uVar26 * 0x12;
                  *(undefined8 *)(puVar29 + 0xc) = 0;
                  *(undefined8 **)(puVar29 + 0xe) = puVar1;
                  if (uVar23 <= uVar21) {
                    puVar13 = (undefined8 *)0x0;
                  }
                  puVar1 = __dest + uVar26 * 0x33 + 0x33;
                  puVar29[0x10] = 0;
                  if (uVar23 <= uVar26) {
                    puVar1 = (undefined8 *)0x0;
                  }
                  puVar27[0x10] = 0;
                  puVar33[0x10] = 0;
                  puVar25[0x10] = 0;
                  *puVar29 = 0;
                  *puVar27 = 0;
                  *puVar33 = 0;
                  *puVar25 = 0;
                  puVar29[8] = 0;
                  puVar27[8] = 0;
                  puVar33[8] = 0;
                  puVar25[8] = 0;
                  *(undefined8 *)(puVar27 + 0xc) = 0;
                  *(undefined8 **)(puVar27 + 0xe) = puVar18;
                  *(undefined8 *)(puVar33 + 0xc) = 0;
                  *(undefined8 **)(puVar33 + 0xe) = puVar13;
                  *(undefined8 *)(puVar25 + 0xc) = 0;
                  *(undefined8 **)(puVar25 + 0xe) = puVar1;
                }
                if ((uVar4 & 3) == 0) goto LAB_0029ffd4;
                uVar28 = uVar12 & 0xfffffffc;
                if ((uVar12 & 3) == 1) goto LAB_0029ffa8;
              }
              uVar24 = uVar28 | 1;
              puVar1 = __dest + uVar28 * 0x33 + 0x33;
              puVar29 = puVar31 + uVar28 * 0x12;
              puVar27 = puVar31 + uVar24 * 0x12;
              if (uVar23 <= uVar28) {
                puVar1 = (undefined8 *)0x0;
              }
              puVar18 = __dest + uVar24 * 0x33 + 0x33;
              if (uVar23 <= uVar24) {
                puVar18 = (undefined8 *)0x0;
              }
              uVar28 = uVar28 | 2;
              puVar29[0x10] = 0;
              puVar27[0x10] = 0;
              *puVar29 = 0;
              *puVar27 = 0;
              puVar29[8] = 0;
              puVar27[8] = 0;
              *(undefined8 *)(puVar29 + 0xc) = 0;
              *(undefined8 **)(puVar29 + 0xe) = puVar1;
              *(undefined8 *)(puVar27 + 0xc) = 0;
              *(undefined8 **)(puVar27 + 0xe) = puVar18;
              if (uVar12 <= uVar28) goto LAB_0029ffd4;
            }
LAB_0029ffa8:
            puVar29 = puVar31 + uVar28 * 0x12;
            puVar1 = __dest + uVar28 * 0x33 + 0x33;
            if (uVar23 <= uVar28) {
              puVar1 = (undefined8 *)0x0;
            }
            puVar29[0x10] = 0;
            *puVar29 = 0;
            puVar29[8] = 0;
            *(undefined8 *)(puVar29 + 0xc) = 0;
            *(undefined8 **)(puVar29 + 0xe) = puVar1;
          }
LAB_0029ffd4:
          iVar32 = (int)((ulong)(lVar3 - lVar2) >> 2);
          *(long *)(puVar31 + 0xc) = lVar22 + 0x1e0;
          *puVar31 = 1;
          puVar31[0x10] = 1;
          iVar9 = FUN_01030f70(puVar31,iVar32 + 1,lVar14,plVar16,&local_260,&DAT_010fad00);
          if ((iVar9 != 0) &&
             (iVar9 = FUN_01031450(puVar31,*(undefined4 *)(lVar30 + 0x74),iVar32 + 1,FUN_00e0a340),
             iVar9 != 0)) {
            if (*(void **)(puVar31 + 0xe) != (void *)0x0) {
              memcpy(__dest,*(void **)(puVar31 + 0xe),0x198);
            }
            if (iVar9 == 1) {
              if (*(int *)(lVar30 + 0x34) != 5) {
                uVar7 = *__dest;
                fVar35 = *(float *)(lVar30 + 0x10);
                fVar38 = *(float *)(lVar30 + 0x14);
                uVar41 = *(undefined8 *)((long)__dest + 0xc);
                uVar15 = NEON_rev64(uVar7,4);
                fVar46 = *(float *)(__dest + 1);
                uVar54 = __dest[3];
                fVar36 = *(float *)(lVar30 + 0x1c);
                fVar49 = *(float *)(lVar30 + 0x20);
                uVar40 = NEON_rev64(uVar41,4);
                fVar45 = *(float *)(lVar30 + 0x28);
                fVar50 = *(float *)(lVar30 + 0x2c);
                fVar44 = *(float *)((long)__dest + 0x14);
                fVar55 = *(float *)(lVar30 + 0x24);
                uVar47 = NEON_rev64(uVar54,4);
                fVar34 = *(float *)(lVar30 + 0x18);
                fVar42 = *(float *)(lVar30 + 0x30);
                fVar39 = *(float *)(__dest + 4);
                uVar37 = NEON_fmadd(fVar46,fVar45,0);
                fVar51 = (float)uVar15 * fVar36 + 0.0 + (float)uVar40 * fVar49 +
                         (float)uVar47 * fVar55;
                fVar52 = fVar46 * fVar36 + 0.0 + fVar44 * fVar49 + fVar39 * fVar55;
                uVar37 = NEON_fmadd(fVar44,fVar50,uVar37);
                auVar58._4_4_ =
                     (float)((ulong)uVar15 >> 0x20) * fVar45 + 0.0 +
                     (float)((ulong)uVar40 >> 0x20) * fVar50 +
                     (float)((ulong)uVar47 >> 0x20) * fVar42;
                auVar58._0_4_ = fVar51;
                auVar58._8_4_ = fVar52;
                auVar58._12_4_ =
                     (float)uVar15 * fVar45 + 0.0 + (float)uVar40 * fVar50 + (float)uVar47 * fVar42;
                auVar58 = NEON_rev64(auVar58,4);
                uVar37 = NEON_fmadd(fVar39,fVar42,uVar37);
                __dest[1] = CONCAT44((float)uVar7 * fVar36 + 0.0 + (float)uVar41 * fVar49 +
                                     (float)uVar54 * fVar55,
                                     fVar46 * fVar35 + 0.0 + fVar44 * fVar38 + fVar39 * fVar34);
                *__dest = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar35 + 0.0 +
                                   (float)((ulong)uVar41 >> 0x20) * fVar38 +
                                   (float)((ulong)uVar54 >> 0x20) * fVar34,
                                   (float)uVar7 * fVar35 + 0.0 + (float)uVar41 * fVar38 +
                                   (float)uVar54 * fVar34);
                __dest[3] = CONCAT44(auVar58._8_4_,auVar58._0_4_);
                __dest[2] = CONCAT44(fVar52,fVar51);
                *(undefined4 *)(__dest + 4) = uVar37;
                if (*(int *)(lVar30 + 0x40) == 1) {
                  uVar15 = __dest[5];
                  fVar55 = *(float *)(lVar30 + 0x10);
                  fVar39 = *(float *)(lVar30 + 0x14);
                  uVar43 = *(undefined8 *)((long)__dest + 0x34);
                  uVar7 = NEON_rev64(uVar15,4);
                  fVar51 = *(float *)(__dest + 6);
                  uVar41 = __dest[8];
                  fVar42 = *(float *)(lVar30 + 0x1c);
                  fVar45 = *(float *)(lVar30 + 0x20);
                  uVar53 = NEON_rev64(uVar43,4);
                  fVar36 = *(float *)(lVar30 + 0x28);
                  fVar35 = *(float *)(lVar30 + 0x2c);
                  fVar34 = *(float *)((long)__dest + 0x3c);
                  fVar50 = *(float *)(lVar30 + 0x24);
                  uVar37 = NEON_fmadd(fVar51,fVar36,0);
                  uVar54 = NEON_rev64(uVar41,4);
                  fVar44 = *(float *)(lVar30 + 0x18);
                  fVar56 = *(float *)(lVar30 + 0x30);
                  fVar52 = *(float *)(__dest + 9);
                  uVar48 = __dest[0xb];
                  uVar37 = NEON_fmadd(fVar34,fVar35,uVar37);
                  uVar47 = *(undefined8 *)((long)__dest + 0x4c);
                  fVar38 = *(float *)(__dest + 0xc);
                  fVar46 = (float)uVar7 * fVar42 + 0.0 + (float)uVar53 * fVar45 +
                           (float)uVar54 * fVar50;
                  fVar49 = fVar51 * fVar42 + 0.0 + fVar34 * fVar45 + fVar52 * fVar50;
                  uVar37 = NEON_fmadd(fVar52,fVar56,uVar37);
                  uVar57 = *(undefined8 *)((long)__dest + 100);
                  uVar40 = NEON_rev64(uVar57,4);
                  auVar8._4_4_ = (float)((ulong)uVar7 >> 0x20) * fVar36 + 0.0 +
                                 (float)((ulong)uVar53 >> 0x20) * fVar35 +
                                 (float)((ulong)uVar54 >> 0x20) * fVar56;
                  auVar8._0_4_ = fVar46;
                  auVar8._8_4_ = fVar49;
                  auVar8._12_4_ =
                       (float)uVar7 * fVar36 + 0.0 + (float)uVar53 * fVar35 + (float)uVar54 * fVar56
                  ;
                  auVar58 = NEON_rev64(auVar8,4);
                  *(undefined4 *)(__dest + 9) = uVar37;
                  fVar36 = *(float *)((long)__dest + 0x54);
                  uVar7 = NEON_rev64(uVar47,4);
                  __dest[6] = CONCAT44((float)uVar15 * fVar42 + 0.0 + (float)uVar43 * fVar45 +
                                       (float)uVar41 * fVar50,
                                       fVar51 * fVar55 + 0.0 + fVar34 * fVar39 + fVar52 * fVar44);
                  __dest[5] = CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar55 + 0.0 +
                                       (float)((ulong)uVar43 >> 0x20) * fVar39 +
                                       (float)((ulong)uVar41 >> 0x20) * fVar44,
                                       (float)uVar15 * fVar55 + 0.0 + (float)uVar43 * fVar39 +
                                       (float)uVar41 * fVar44);
                  uVar15 = NEON_rev64(uVar48,4);
                  __dest[8] = CONCAT44(auVar58._8_4_,auVar58._0_4_);
                  __dest[7] = CONCAT44(fVar49,fVar46);
                  fVar50 = *(float *)(lVar30 + 0x10);
                  fVar45 = *(float *)(lVar30 + 0x14);
                  fVar42 = *(float *)(lVar30 + 0x1c);
                  fVar55 = *(float *)(lVar30 + 0x20);
                  fVar49 = *(float *)(lVar30 + 0x24);
                  fVar52 = *(float *)(lVar30 + 0x28);
                  fVar51 = *(float *)(lVar30 + 0x2c);
                  fVar46 = *(float *)(lVar30 + 0x18);
                  fVar44 = *(float *)((long)__dest + 0x6c);
                  fVar39 = *(float *)(lVar30 + 0x30);
                  uVar37 = NEON_fmadd(fVar36,fVar52,0);
                  uVar37 = NEON_fmadd(fVar38,fVar51,uVar37);
                  fVar34 = (float)uVar7 * fVar42 + 0.0 + (float)uVar15 * fVar55 +
                           (float)uVar40 * fVar49;
                  fVar35 = fVar36 * fVar42 + 0.0 + fVar38 * fVar55 + fVar44 * fVar49;
                  uVar37 = NEON_fmadd(fVar44,fVar39,uVar37);
                  auVar6._4_4_ = (float)((ulong)uVar7 >> 0x20) * fVar52 + 0.0 +
                                 (float)((ulong)uVar15 >> 0x20) * fVar51 +
                                 (float)((ulong)uVar40 >> 0x20) * fVar39;
                  auVar6._0_4_ = fVar34;
                  auVar6._8_4_ = fVar35;
                  auVar6._12_4_ =
                       (float)uVar7 * fVar52 + 0.0 + (float)uVar15 * fVar51 + (float)uVar40 * fVar39
                  ;
                  auVar58 = NEON_rev64(auVar6,4);
                  *(ulong *)((long)__dest + 0x54) =
                       CONCAT44((float)uVar47 * fVar42 + 0.0 + (float)uVar48 * fVar55 +
                                (float)uVar57 * fVar49,
                                fVar36 * fVar50 + 0.0 + fVar38 * fVar45 + fVar44 * fVar46);
                  *(ulong *)((long)__dest + 0x4c) =
                       CONCAT44((float)((ulong)uVar47 >> 0x20) * fVar50 + 0.0 +
                                (float)((ulong)uVar48 >> 0x20) * fVar45 +
                                (float)((ulong)uVar57 >> 0x20) * fVar46,
                                (float)uVar47 * fVar50 + 0.0 + (float)uVar48 * fVar45 +
                                (float)uVar57 * fVar46);
                  *(undefined4 *)((long)__dest + 0x6c) = uVar37;
                  *(ulong *)((long)__dest + 100) = CONCAT44(auVar58._8_4_,auVar58._0_4_);
                  *(ulong *)((long)__dest + 0x5c) = CONCAT44(fVar35,fVar34);
                }
              }
              goto LAB_0029fa28;
            }
          }
        }
      }
      pcVar11 = (char *)CamX::Log::GroupToString(0x20000);
      uVar15 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/camxiqinterface2cc151.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)0x20000,0x16d7cc,(char *)0x1,0x1b26e8,pcVar11,uVar15,"CalculateHWSetting");
      piVar10 = (int *)0x1;
      lVar17 = extraout_x1_02;
      if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) != 1) ||
         (((byte)PTR_g_traceInfo_010f56f0[2] >> 1 & 1) == 0)) goto LAB_0029fb70;
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
      uVar12 = atrace_get_enabled_tags();
      if ((uVar12 & 0xc00) == 0) goto LAB_0029fce4;
LAB_002a0460:
      atrace_begin_body(&local_260);
      auVar58 = atrace_get_enabled_tags();
joined_r0x0029fcec:
      lVar17 = auVar58._8_8_;
      if ((auVar58 & (undefined  [16])0xc00) != (undefined  [16])0x0) {
        atrace_end_body();
        lVar17 = extraout_x1_03;
      }
      piVar10 = (int *)0x1;
    }
    else {
LAB_0029fa28:
      iVar9 = FUN_00fe94f0(lVar30,__dest,*(long *)(lVar30 + 8) + 0x5c,*(long *)(lVar30 + 8) + 4,
                           lVar17);
      if (iVar9 == 0) {
        pcVar11 = (char *)CamX::Log::GroupToString(0x20000);
        uVar15 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/camxiqinterface2cc151.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)0x20000,0x16d7cc,(char *)0x1,0x1a54b9,pcVar11,uVar15,"CalculateHWSetting")
        ;
        piVar10 = (int *)0x1;
        lVar17 = extraout_x1_01;
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
          FUN_00284260(&local_260,0x200,"[ERROR]Calculate HW setting failed");
          uVar12 = atrace_get_enabled_tags();
          if ((uVar12 & 0xc00) != 0) goto LAB_002a0460;
LAB_0029fce4:
          auVar58 = atrace_get_enabled_tags();
          goto joined_r0x0029fcec;
        }
      }
      else {
        piVar10 = (int *)param_1[10];
        if (*piVar10 != 0) {
          lVar17 = 0;
          if (*(long *)(lVar30 + 8) != 0) {
            lVar17 = *(long *)(lVar30 + 8) + -0x68;
          }
          if (*(undefined8 **)(param_1[0xb] + 0x100) == (undefined8 *)0x0) {
            uVar15 = 0;
          }
          else {
            uVar15 = **(undefined8 **)(param_1[0xb] + 0x100);
          }
          if (*(long *)(lVar5 + 0x28) == local_58) {
            FUN_00287a00(piVar10,lVar17,param_1[6],uVar15);
            return;
          }
          goto LAB_002a0498;
        }
        piVar10 = (int *)0x0;
        lVar17 = extraout_x1;
      }
    }
  }
  else {
    pcVar11 = (char *)CamX::Log::GroupToString(0x20000);
    uVar15 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/camxiqinterface2cc151.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)0x20000,0x16d7cc,(char *)0x1,0x15f9b2,pcVar11,uVar15,"CalculateHWSetting",
               0x5c8,*(undefined4 *)(param_1 + 1),0x49c,*(undefined4 *)(param_1 + 5));
    lVar17 = extraout_x1_00;
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
                   ,0x5c8,*(undefined4 *)(param_1 + 1),0x49c,*(undefined4 *)(param_1 + 5));
      uVar12 = atrace_get_enabled_tags();
      if ((uVar12 & 0xc00) == 0) {
        auVar58 = atrace_get_enabled_tags();
      }
      else {
        atrace_begin_body(&local_260);
        auVar58 = atrace_get_enabled_tags();
      }
      lVar17 = auVar58._8_8_;
      if ((auVar58 & (undefined  [16])0xc00) != (undefined  [16])0x0) {
        atrace_end_body();
        lVar17 = extraout_x1_04;
      }
    }
    piVar10 = (int *)0x4;
  }
LAB_0029fb70:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_002a0498:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar10,lVar17);
}


// ===== 0x1a03a4 FUN_0029f9d0 @ 0029f9d0

void FUN_0029f9d0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined auVar8 [16];
  int iVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 *__dest;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *puVar13;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 *puVar25;
  ulong uVar26;
  undefined4 *puVar27;
  ulong uVar28;
  undefined4 *puVar29;
  long lVar30;
  undefined4 *puVar31;
  int iVar32;
  undefined4 *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined auVar58 [16];
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
  if ((*(int *)(param_1 + 1) == 0x5c8) && (*(int *)(param_1 + 5) == 0x49c)) {
    lVar30 = *param_1;
    lVar17 = param_1[4];
    __dest = *(undefined8 **)(lVar30 + 0x60);
    if (__dest == (undefined8 *)0x0) {
      if ((*(long *)(lVar30 + 0x5b8) != 0) && (*(int *)(lVar30 + 0x40) != 1)) {
        __dest = (undefined8 *)0x0;
        goto LAB_0029fa28;
      }
      __dest = (undefined8 *)param_1[2];
      if ((__dest != (undefined8 *)0x0) && (lVar22 = *(long *)(lVar30 + 8), lVar22 != 0)) {
        plVar16 = (long *)param_1[7];
        lVar2 = *plVar16;
        lVar3 = plVar16[1];
        if (lVar2 != lVar3) {
          lVar14 = param_1[6];
          uVar4 = *(uint *)(lVar30 + 0x70);
          uVar12 = (ulong)uVar4;
          puVar31 = *(undefined4 **)(lVar30 + 0x68);
          uStack_254 = *(undefined4 *)(lVar14 + 0x5c);
          uStack_25c = (undefined4)*(undefined8 *)(lVar22 + 0x54);
          uStack_258 = (undefined4)((ulong)*(undefined8 *)(lVar22 + 0x54) >> 0x20);
          local_260 = (int)*(float *)(lVar14 + 0x58);
          if (uVar4 != 0) {
            uVar23 = (ulong)*(uint *)(lVar30 + 0x74);
            if (uVar4 == 1) {
              uVar28 = 0;
            }
            else {
              if (uVar4 < 4) {
                uVar28 = 0;
              }
              else {
                uVar28 = uVar12 - 4;
                if (uVar28 < 4) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = 0;
                  uVar21 = (uVar28 >> 2) + 1 & 0x7ffffffffffffffe;
                  puVar29 = puVar31;
                  puVar1 = __dest;
                  do {
                    puVar18 = puVar1 + 0x33;
                    if (uVar23 <= uVar24) {
                      puVar18 = (undefined8 *)0x0;
                    }
                    puVar13 = puVar1 + 0x66;
                    puVar20 = puVar1 + 0x99;
                    if (uVar23 <= uVar24 + 1) {
                      puVar13 = (undefined8 *)0x0;
                    }
                    if (uVar23 <= uVar24 + 2) {
                      puVar20 = (undefined8 *)0x0;
                    }
                    puVar19 = puVar1 + 0xcc;
                    if (uVar23 <= uVar24 + 3) {
                      puVar19 = (undefined8 *)0x0;
                    }
                    *(undefined8 *)(puVar29 + 0x1e) = 0;
                    *(undefined8 **)(puVar29 + 0x20) = puVar13;
                    *(undefined8 *)(puVar29 + 0x30) = 0;
                    *(undefined8 **)(puVar29 + 0x32) = puVar20;
                    puVar13 = puVar1 + 0xff;
                    *(undefined8 *)(puVar29 + 0x42) = 0;
                    *(undefined8 **)(puVar29 + 0x44) = puVar19;
                    if (uVar23 <= uVar24 + 4) {
                      puVar13 = (undefined8 *)0x0;
                    }
                    puVar20 = puVar1 + 0x132;
                    *(undefined8 *)(puVar29 + 0xc) = 0;
                    *(undefined8 **)(puVar29 + 0xe) = puVar18;
                    if (uVar23 <= uVar24 + 5) {
                      puVar20 = (undefined8 *)0x0;
                    }
                    puVar18 = puVar1 + 0x165;
                    puVar29[0x10] = 0;
                    if (uVar23 <= uVar24 + 6) {
                      puVar18 = (undefined8 *)0x0;
                    }
                    puVar19 = puVar1 + 0x198;
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
                    *(undefined8 **)(puVar29 + 0x56) = puVar13;
                    *(undefined8 *)(puVar29 + 0x66) = 0;
                    *(undefined8 **)(puVar29 + 0x68) = puVar20;
                    *(undefined8 *)(puVar29 + 0x78) = 0;
                    *(undefined8 **)(puVar29 + 0x7a) = puVar18;
                    *(undefined8 **)(puVar29 + 0x8c) = puVar19;
                    puVar29 = puVar29 + 0x90;
                    puVar1 = puVar1 + 0x198;
                  } while (uVar21 != 0);
                }
                if (((uint)uVar28 >> 2 & 1) == 0) {
                  uVar28 = uVar24 | 1;
                  uVar21 = uVar24 | 2;
                  uVar26 = uVar24 | 3;
                  puVar29 = puVar31 + uVar24 * 0x12;
                  puVar1 = __dest + uVar24 * 0x33 + 0x33;
                  puVar27 = puVar31 + uVar28 * 0x12;
                  if (uVar23 <= uVar24) {
                    puVar1 = (undefined8 *)0x0;
                  }
                  puVar18 = __dest + uVar28 * 0x33 + 0x33;
                  puVar33 = puVar31 + uVar21 * 0x12;
                  if (uVar23 <= uVar28) {
                    puVar18 = (undefined8 *)0x0;
                  }
                  puVar13 = __dest + uVar21 * 0x33 + 0x33;
                  puVar25 = puVar31 + uVar26 * 0x12;
                  *(undefined8 *)(puVar29 + 0xc) = 0;
                  *(undefined8 **)(puVar29 + 0xe) = puVar1;
                  if (uVar23 <= uVar21) {
                    puVar13 = (undefined8 *)0x0;
                  }
                  puVar1 = __dest + uVar26 * 0x33 + 0x33;
                  puVar29[0x10] = 0;
                  if (uVar23 <= uVar26) {
                    puVar1 = (undefined8 *)0x0;
                  }
                  puVar27[0x10] = 0;
                  puVar33[0x10] = 0;
                  puVar25[0x10] = 0;
                  *puVar29 = 0;
                  *puVar27 = 0;
                  *puVar33 = 0;
                  *puVar25 = 0;
                  puVar29[8] = 0;
                  puVar27[8] = 0;
                  puVar33[8] = 0;
                  puVar25[8] = 0;
                  *(undefined8 *)(puVar27 + 0xc) = 0;
                  *(undefined8 **)(puVar27 + 0xe) = puVar18;
                  *(undefined8 *)(puVar33 + 0xc) = 0;
                  *(undefined8 **)(puVar33 + 0xe) = puVar13;
                  *(undefined8 *)(puVar25 + 0xc) = 0;
                  *(undefined8 **)(puVar25 + 0xe) = puVar1;
                }
                if ((uVar4 & 3) == 0) goto LAB_0029ffd4;
                uVar28 = uVar12 & 0xfffffffc;
                if ((uVar12 & 3) == 1) goto LAB_0029ffa8;
              }
              uVar24 = uVar28 | 1;
              puVar1 = __dest + uVar28 * 0x33 + 0x33;
              puVar29 = puVar31 + uVar28 * 0x12;
              puVar27 = puVar31 + uVar24 * 0x12;
              if (uVar23 <= uVar28) {
                puVar1 = (undefined8 *)0x0;
              }
              puVar18 = __dest + uVar24 * 0x33 + 0x33;
              if (uVar23 <= uVar24) {
                puVar18 = (undefined8 *)0x0;
              }
              uVar28 = uVar28 | 2;
              puVar29[0x10] = 0;
              puVar27[0x10] = 0;
              *puVar29 = 0;
              *puVar27 = 0;
              puVar29[8] = 0;
              puVar27[8] = 0;
              *(undefined8 *)(puVar29 + 0xc) = 0;
              *(undefined8 **)(puVar29 + 0xe) = puVar1;
              *(undefined8 *)(puVar27 + 0xc) = 0;
              *(undefined8 **)(puVar27 + 0xe) = puVar18;
              if (uVar12 <= uVar28) goto LAB_0029ffd4;
            }
LAB_0029ffa8:
            puVar29 = puVar31 + uVar28 * 0x12;
            puVar1 = __dest + uVar28 * 0x33 + 0x33;
            if (uVar23 <= uVar28) {
              puVar1 = (undefined8 *)0x0;
            }
            puVar29[0x10] = 0;
            *puVar29 = 0;
            puVar29[8] = 0;
            *(undefined8 *)(puVar29 + 0xc) = 0;
            *(undefined8 **)(puVar29 + 0xe) = puVar1;
          }
LAB_0029ffd4:
          iVar32 = (int)((ulong)(lVar3 - lVar2) >> 2);
          *(long *)(puVar31 + 0xc) = lVar22 + 0x1e0;
          *puVar31 = 1;
          puVar31[0x10] = 1;
          iVar9 = FUN_01030f70(puVar31,iVar32 + 1,lVar14,plVar16,&local_260,&DAT_010fad00);
          if ((iVar9 != 0) &&
             (iVar9 = FUN_01031450(puVar31,*(undefined4 *)(lVar30 + 0x74),iVar32 + 1,FUN_00e0a340),
             iVar9 != 0)) {
            if (*(void **)(puVar31 + 0xe) != (void *)0x0) {
              memcpy(__dest,*(void **)(puVar31 + 0xe),0x198);
            }
            if (iVar9 == 1) {
              if (*(int *)(lVar30 + 0x34) != 5) {
                uVar7 = *__dest;
                fVar35 = *(float *)(lVar30 + 0x10);
                fVar38 = *(float *)(lVar30 + 0x14);
                uVar41 = *(undefined8 *)((long)__dest + 0xc);
                uVar15 = NEON_rev64(uVar7,4);
                fVar46 = *(float *)(__dest + 1);
                uVar54 = __dest[3];
                fVar36 = *(float *)(lVar30 + 0x1c);
                fVar49 = *(float *)(lVar30 + 0x20);
                uVar40 = NEON_rev64(uVar41,4);
                fVar45 = *(float *)(lVar30 + 0x28);
                fVar50 = *(float *)(lVar30 + 0x2c);
                fVar44 = *(float *)((long)__dest + 0x14);
                fVar55 = *(float *)(lVar30 + 0x24);
                uVar47 = NEON_rev64(uVar54,4);
                fVar34 = *(float *)(lVar30 + 0x18);
                fVar42 = *(float *)(lVar30 + 0x30);
                fVar39 = *(float *)(__dest + 4);
                uVar37 = NEON_fmadd(fVar46,fVar45,0);
                fVar51 = (float)uVar15 * fVar36 + 0.0 + (float)uVar40 * fVar49 +
                         (float)uVar47 * fVar55;
                fVar52 = fVar46 * fVar36 + 0.0 + fVar44 * fVar49 + fVar39 * fVar55;
                uVar37 = NEON_fmadd(fVar44,fVar50,uVar37);
                auVar58._4_4_ =
                     (float)((ulong)uVar15 >> 0x20) * fVar45 + 0.0 +
                     (float)((ulong)uVar40 >> 0x20) * fVar50 +
                     (float)((ulong)uVar47 >> 0x20) * fVar42;
                auVar58._0_4_ = fVar51;
                auVar58._8_4_ = fVar52;
                auVar58._12_4_ =
                     (float)uVar15 * fVar45 + 0.0 + (float)uVar40 * fVar50 + (float)uVar47 * fVar42;
                auVar58 = NEON_rev64(auVar58,4);
                uVar37 = NEON_fmadd(fVar39,fVar42,uVar37);
                __dest[1] = CONCAT44((float)uVar7 * fVar36 + 0.0 + (float)uVar41 * fVar49 +
                                     (float)uVar54 * fVar55,
                                     fVar46 * fVar35 + 0.0 + fVar44 * fVar38 + fVar39 * fVar34);
                *__dest = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar35 + 0.0 +
                                   (float)((ulong)uVar41 >> 0x20) * fVar38 +
                                   (float)((ulong)uVar54 >> 0x20) * fVar34,
                                   (float)uVar7 * fVar35 + 0.0 + (float)uVar41 * fVar38 +
                                   (float)uVar54 * fVar34);
                __dest[3] = CONCAT44(auVar58._8_4_,auVar58._0_4_);
                __dest[2] = CONCAT44(fVar52,fVar51);
                *(undefined4 *)(__dest + 4) = uVar37;
                if (*(int *)(lVar30 + 0x40) == 1) {
                  uVar15 = __dest[5];
                  fVar55 = *(float *)(lVar30 + 0x10);
                  fVar39 = *(float *)(lVar30 + 0x14);
                  uVar43 = *(undefined8 *)((long)__dest + 0x34);
                  uVar7 = NEON_rev64(uVar15,4);
                  fVar51 = *(float *)(__dest + 6);
                  uVar41 = __dest[8];
                  fVar42 = *(float *)(lVar30 + 0x1c);
                  fVar45 = *(float *)(lVar30 + 0x20);
                  uVar53 = NEON_rev64(uVar43,4);
                  fVar36 = *(float *)(lVar30 + 0x28);
                  fVar35 = *(float *)(lVar30 + 0x2c);
                  fVar34 = *(float *)((long)__dest + 0x3c);
                  fVar50 = *(float *)(lVar30 + 0x24);
                  uVar37 = NEON_fmadd(fVar51,fVar36,0);
                  uVar54 = NEON_rev64(uVar41,4);
                  fVar44 = *(float *)(lVar30 + 0x18);
                  fVar56 = *(float *)(lVar30 + 0x30);
                  fVar52 = *(float *)(__dest + 9);
                  uVar48 = __dest[0xb];
                  uVar37 = NEON_fmadd(fVar34,fVar35,uVar37);
                  uVar47 = *(undefined8 *)((long)__dest + 0x4c);
                  fVar38 = *(float *)(__dest + 0xc);
                  fVar46 = (float)uVar7 * fVar42 + 0.0 + (float)uVar53 * fVar45 +
                           (float)uVar54 * fVar50;
                  fVar49 = fVar51 * fVar42 + 0.0 + fVar34 * fVar45 + fVar52 * fVar50;
                  uVar37 = NEON_fmadd(fVar52,fVar56,uVar37);
                  uVar57 = *(undefined8 *)((long)__dest + 100);
                  uVar40 = NEON_rev64(uVar57,4);
                  auVar8._4_4_ = (float)((ulong)uVar7 >> 0x20) * fVar36 + 0.0 +
                                 (float)((ulong)uVar53 >> 0x20) * fVar35 +
                                 (float)((ulong)uVar54 >> 0x20) * fVar56;
                  auVar8._0_4_ = fVar46;
                  auVar8._8_4_ = fVar49;
                  auVar8._12_4_ =
                       (float)uVar7 * fVar36 + 0.0 + (float)uVar53 * fVar35 + (float)uVar54 * fVar56
                  ;
                  auVar58 = NEON_rev64(auVar8,4);
                  *(undefined4 *)(__dest + 9) = uVar37;
                  fVar36 = *(float *)((long)__dest + 0x54);
                  uVar7 = NEON_rev64(uVar47,4);
                  __dest[6] = CONCAT44((float)uVar15 * fVar42 + 0.0 + (float)uVar43 * fVar45 +
                                       (float)uVar41 * fVar50,
                                       fVar51 * fVar55 + 0.0 + fVar34 * fVar39 + fVar52 * fVar44);
                  __dest[5] = CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar55 + 0.0 +
                                       (float)((ulong)uVar43 >> 0x20) * fVar39 +
                                       (float)((ulong)uVar41 >> 0x20) * fVar44,
                                       (float)uVar15 * fVar55 + 0.0 + (float)uVar43 * fVar39 +
                                       (float)uVar41 * fVar44);
                  uVar15 = NEON_rev64(uVar48,4);
                  __dest[8] = CONCAT44(auVar58._8_4_,auVar58._0_4_);
                  __dest[7] = CONCAT44(fVar49,fVar46);
                  fVar50 = *(float *)(lVar30 + 0x10);
                  fVar45 = *(float *)(lVar30 + 0x14);
                  fVar42 = *(float *)(lVar30 + 0x1c);
                  fVar55 = *(float *)(lVar30 + 0x20);
                  fVar49 = *(float *)(lVar30 + 0x24);
                  fVar52 = *(float *)(lVar30 + 0x28);
                  fVar51 = *(float *)(lVar30 + 0x2c);
                  fVar46 = *(float *)(lVar30 + 0x18);
                  fVar44 = *(float *)((long)__dest + 0x6c);
                  fVar39 = *(float *)(lVar30 + 0x30);
                  uVar37 = NEON_fmadd(fVar36,fVar52,0);
                  uVar37 = NEON_fmadd(fVar38,fVar51,uVar37);
                  fVar34 = (float)uVar7 * fVar42 + 0.0 + (float)uVar15 * fVar55 +
                           (float)uVar40 * fVar49;
                  fVar35 = fVar36 * fVar42 + 0.0 + fVar38 * fVar55 + fVar44 * fVar49;
                  uVar37 = NEON_fmadd(fVar44,fVar39,uVar37);
                  auVar6._4_4_ = (float)((ulong)uVar7 >> 0x20) * fVar52 + 0.0 +
                                 (float)((ulong)uVar15 >> 0x20) * fVar51 +
                                 (float)((ulong)uVar40 >> 0x20) * fVar39;
                  auVar6._0_4_ = fVar34;
                  auVar6._8_4_ = fVar35;
                  auVar6._12_4_ =
                       (float)uVar7 * fVar52 + 0.0 + (float)uVar15 * fVar51 + (float)uVar40 * fVar39
                  ;
                  auVar58 = NEON_rev64(auVar6,4);
                  *(ulong *)((long)__dest + 0x54) =
                       CONCAT44((float)uVar47 * fVar42 + 0.0 + (float)uVar48 * fVar55 +
                                (float)uVar57 * fVar49,
                                fVar36 * fVar50 + 0.0 + fVar38 * fVar45 + fVar44 * fVar46);
                  *(ulong *)((long)__dest + 0x4c) =
                       CONCAT44((float)((ulong)uVar47 >> 0x20) * fVar50 + 0.0 +
                                (float)((ulong)uVar48 >> 0x20) * fVar45 +
                                (float)((ulong)uVar57 >> 0x20) * fVar46,
                                (float)uVar47 * fVar50 + 0.0 + (float)uVar48 * fVar45 +
                                (float)uVar57 * fVar46);
                  *(undefined4 *)((long)__dest + 0x6c) = uVar37;
                  *(ulong *)((long)__dest + 100) = CONCAT44(auVar58._8_4_,auVar58._0_4_);
                  *(ulong *)((long)__dest + 0x5c) = CONCAT44(fVar35,fVar34);
                }
              }
              goto LAB_0029fa28;
            }
          }
        }
      }
      pcVar11 = (char *)CamX::Log::GroupToString(0x20000);
      uVar15 = CamX::Log::GetFileName
                         (
                         "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/camxiqinterface2cc151.cpp"
                         );
      CamX::Log::LogSystem
                ((Log *)0x20000,0x16d7cc,(char *)0x1,0x1b26e8,pcVar11,uVar15,"CalculateHWSetting");
      piVar10 = (int *)0x1;
      lVar17 = extraout_x1_02;
      if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) != 1) ||
         (((byte)PTR_g_traceInfo_010f56f0[2] >> 1 & 1) == 0)) goto LAB_0029fb70;
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
      uVar12 = atrace_get_enabled_tags();
      if ((uVar12 & 0xc00) == 0) goto LAB_0029fce4;
LAB_002a0460:
      atrace_begin_body(&local_260);
      auVar58 = atrace_get_enabled_tags();
joined_r0x0029fcec:
      lVar17 = auVar58._8_8_;
      if ((auVar58 & (undefined  [16])0xc00) != (undefined  [16])0x0) {
        atrace_end_body();
        lVar17 = extraout_x1_03;
      }
      piVar10 = (int *)0x1;
    }
    else {
LAB_0029fa28:
      iVar9 = FUN_00fe94f0(lVar30,__dest,*(long *)(lVar30 + 8) + 0x5c,*(long *)(lVar30 + 8) + 4,
                           lVar17);
      if (iVar9 == 0) {
        pcVar11 = (char *)CamX::Log::GroupToString(0x20000);
        uVar15 = CamX::Log::GetFileName
                           (
                           "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/camxiqinterface2cc151.cpp"
                           );
        CamX::Log::LogSystem
                  ((Log *)0x20000,0x16d7cc,(char *)0x1,0x1a54b9,pcVar11,uVar15,"CalculateHWSetting")
        ;
        piVar10 = (int *)0x1;
        lVar17 = extraout_x1_01;
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
          FUN_00284260(&local_260,0x200,"[ERROR]Calculate HW setting failed");
          uVar12 = atrace_get_enabled_tags();
          if ((uVar12 & 0xc00) != 0) goto LAB_002a0460;
LAB_0029fce4:
          auVar58 = atrace_get_enabled_tags();
          goto joined_r0x0029fcec;
        }
      }
      else {
        piVar10 = (int *)param_1[10];
        if (*piVar10 != 0) {
          lVar17 = 0;
          if (*(long *)(lVar30 + 8) != 0) {
            lVar17 = *(long *)(lVar30 + 8) + -0x68;
          }
          if (*(undefined8 **)(param_1[0xb] + 0x100) == (undefined8 *)0x0) {
            uVar15 = 0;
          }
          else {
            uVar15 = **(undefined8 **)(param_1[0xb] + 0x100);
          }
          if (*(long *)(lVar5 + 0x28) == local_58) {
            FUN_00287a00(piVar10,lVar17,param_1[6],uVar15);
            return;
          }
          goto LAB_002a0498;
        }
        piVar10 = (int *)0x0;
        lVar17 = extraout_x1;
      }
    }
  }
  else {
    pcVar11 = (char *)CamX::Log::GroupToString(0x20000);
    uVar15 = CamX::Log::GetFileName
                       (
                       "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/camxiqinterface2cc151.cpp"
                       );
    CamX::Log::LogSystem
              ((Log *)0x20000,0x16d7cc,(char *)0x1,0x15f9b2,pcVar11,uVar15,"CalculateHWSetting",
               0x5c8,*(undefined4 *)(param_1 + 1),0x49c,*(undefined4 *)(param_1 + 5));
    lVar17 = extraout_x1_00;
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
                   ,0x5c8,*(undefined4 *)(param_1 + 1),0x49c,*(undefined4 *)(param_1 + 5));
      uVar12 = atrace_get_enabled_tags();
      if ((uVar12 & 0xc00) == 0) {
        auVar58 = atrace_get_enabled_tags();
      }
      else {
        atrace_begin_body(&local_260);
        auVar58 = atrace_get_enabled_tags();
      }
      lVar17 = auVar58._8_8_;
      if ((auVar58 & (undefined  [16])0xc00) != (undefined  [16])0x0) {
        atrace_end_body();
        lVar17 = extraout_x1_04;
      }
    }
    piVar10 = (int *)0x4;
  }
LAB_0029fb70:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_002a0498:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar10,lVar17);
}


