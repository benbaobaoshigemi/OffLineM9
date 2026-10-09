// ===== 0xf30f70 FUN_01030f70 @ 01030f70

undefined8
FUN_01030f70(long param_1,int param_2,long param_3,long *param_4,undefined8 param_5,long param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 local_7c;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*param_4 != param_4[1]) && (uVar8 = (ulong)(param_2 - 1U), param_2 - 1U != 0)) {
      uVar12 = (int)((ulong)(param_4[1] - *param_4) >> 2) - 1;
      if (uVar12 == 0) {
        uVar13 = 0;
        uVar11 = 1;
        local_7c = 0;
        uVar12 = 0;
        do {
          while (uVar13 != 0) {
            uVar5 = uVar11 * 2;
            uVar11 = uVar11 * 3;
            if (*(int *)(*param_4 + uVar13 * 4 + -4) != 0x15) {
              uVar11 = uVar5;
            }
            uVar5 = uVar11 + uVar12;
            if (uVar11 != 0) {
              lVar9 = 8;
              goto LAB_01031170;
            }
            uVar11 = 0;
            uVar13 = uVar13 + 1;
            uVar12 = uVar5;
            if (uVar13 == uVar8) {
              return 1;
            }
          }
          lVar9 = 0;
          uVar5 = uVar12 + 1;
          uVar11 = 1;
          local_7c = 1;
LAB_01031170:
          iVar10 = 0;
          uVar14 = (ulong)uVar11;
          do {
            piVar6 = (int *)(param_1 + (ulong)uVar12 * 0x48);
            uVar3 = *(uint *)(*param_4 + uVar13 * 4);
            iVar7 = 2;
            if (uVar3 == 0x15) {
              iVar7 = 3;
            }
            if (*piVar6 == 1) {
              lVar1 = 0x10;
              if (uVar3 != 0x15) {
                lVar1 = lVar9;
              }
              iVar4 = (**(code **)(param_6 + lVar1))
                                (*(undefined4 *)(param_3 + (ulong)uVar3 * 4),local_7c,piVar6,
                                 param_1 + (ulong)(iVar10 + uVar5) * 0x48,param_5);
              if (iVar4 == 0) break;
            }
            iVar10 = iVar7 + iVar10;
            uVar14 = uVar14 - 1;
            uVar12 = uVar12 + 1;
          } while (uVar14 != 0);
          uVar13 = uVar13 + 1;
          uVar12 = uVar5;
        } while (uVar13 != uVar8);
      }
      else {
        uVar13 = 0;
        uVar5 = 1;
        local_7c = 0;
        uVar11 = 0;
        do {
          while (uVar13 != 0) {
            uVar3 = uVar5 * 2;
            uVar5 = uVar5 * 3;
            if (*(int *)(*param_4 + uVar13 * 4 + -4) != 0x15) {
              uVar5 = uVar3;
            }
            if (uVar13 == uVar12) {
              local_7c = 1;
            }
            uVar3 = uVar5 + uVar11;
            if (uVar5 != 0) {
              lVar9 = 8;
              goto LAB_0103105c;
            }
            uVar5 = 0;
            uVar13 = uVar13 + 1;
            uVar11 = uVar3;
            if (uVar13 == uVar8) {
              return 1;
            }
          }
          lVar9 = 0;
          uVar3 = uVar11 + 1;
          uVar5 = 1;
LAB_0103105c:
          iVar10 = 0;
          uVar14 = (ulong)uVar5;
          do {
            piVar6 = (int *)(param_1 + (ulong)uVar11 * 0x48);
            uVar2 = *(uint *)(*param_4 + uVar13 * 4);
            iVar7 = 2;
            if (uVar2 == 0x15) {
              iVar7 = 3;
            }
            if (*piVar6 == 1) {
              lVar1 = 0x10;
              if (uVar2 != 0x15) {
                lVar1 = lVar9;
              }
              iVar4 = (**(code **)(param_6 + lVar1))
                                (*(undefined4 *)(param_3 + (ulong)uVar2 * 4),local_7c,piVar6,
                                 param_1 + (ulong)(iVar10 + uVar3) * 0x48,param_5);
              if (iVar4 == 0) break;
            }
            iVar10 = iVar7 + iVar10;
            uVar14 = uVar14 - 1;
            uVar11 = uVar11 + 1;
          } while (uVar14 != 0);
          uVar13 = uVar13 + 1;
          uVar11 = uVar3;
        } while (uVar13 != uVar8);
      }
    }
  }
  return 1;
}


// ===== 0xd9c390 FUN_00e9c390 @ 00e9c390

void FUN_00e9c390(float param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if (((param_2 == (float *)0x0) || (param_3 == (float *)0x0)) || (param_4 == (undefined4 *)0x0)) {
    return;
  }
  if (param_2 != param_3) {
    if ((0.0 < param_1) && (param_1 < 1.0)) {
      uVar6 = NEON_fmadd(*param_3 - *param_2,param_1,*param_2);
      *param_4 = uVar6;
      uVar6 = NEON_fmadd(param_3[1] - param_2[1],param_1,param_2[1]);
      param_4[1] = uVar6;
      uVar6 = NEON_fmadd(param_3[2] - param_2[2],param_1,param_2[2]);
      param_4[2] = uVar6;
      uVar6 = NEON_fmadd(param_3[3] - param_2[3],param_1,param_2[3]);
      param_4[3] = uVar6;
      uVar6 = NEON_fmadd(param_3[4] - param_2[4],param_1,param_2[4]);
      param_4[4] = uVar6;
      uVar6 = NEON_fmadd(param_3[5] - param_2[5],param_1,param_2[5]);
      param_4[5] = uVar6;
      uVar6 = NEON_fmadd(param_3[6] - param_2[6],param_1,param_2[6]);
      param_4[6] = uVar6;
      uVar6 = NEON_fmadd(param_3[7] - param_2[7],param_1,param_2[7]);
      param_4[7] = uVar6;
      uVar6 = NEON_fmadd(param_3[8] - param_2[8],param_1,param_2[8]);
      param_4[8] = uVar6;
      uVar6 = NEON_fmadd(param_3[9] - param_2[9],param_1,param_2[9]);
      param_4[9] = uVar6;
      uVar6 = NEON_fmadd(param_3[10] - param_2[10],param_1,param_2[10]);
      param_4[10] = uVar6;
      uVar6 = NEON_fmadd(param_3[0xb] - param_2[0xb],param_1,param_2[0xb]);
      param_4[0xb] = uVar6;
      uVar6 = NEON_fmadd(param_3[0xc] - param_2[0xc],param_1,param_2[0xc]);
      param_4[0xc] = uVar6;
      uVar6 = NEON_fmadd(param_3[0xd] - param_2[0xd],param_1,param_2[0xd]);
      param_4[0xd] = uVar6;
      uVar6 = NEON_fmadd(param_3[0xe] - param_2[0xe],param_1,param_2[0xe]);
      param_4[0xe] = uVar6;
      uVar6 = NEON_fmadd(param_3[0xf] - param_2[0xf],param_1,param_2[0xf]);
      param_4[0xf] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x10] - param_2[0x10],param_1,param_2[0x10]);
      param_4[0x10] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x11] - param_2[0x11],param_1,param_2[0x11]);
      param_4[0x11] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x12] - param_2[0x12],param_1,param_2[0x12]);
      param_4[0x12] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x13] - param_2[0x13],param_1,param_2[0x13]);
      param_4[0x13] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x14] - param_2[0x14],param_1,param_2[0x14]);
      param_4[0x14] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x15] - param_2[0x15],param_1,param_2[0x15]);
      param_4[0x15] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x16] - param_2[0x16],param_1,param_2[0x16]);
      param_4[0x16] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x17] - param_2[0x17],param_1,param_2[0x17]);
      param_4[0x17] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x18] - param_2[0x18],param_1,param_2[0x18]);
      param_4[0x18] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x19] - param_2[0x19],param_1,param_2[0x19]);
      param_4[0x19] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x1a] - param_2[0x1a],param_1,param_2[0x1a]);
      param_4[0x1a] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x1b] - param_2[0x1b],param_1,param_2[0x1b]);
      param_4[0x1b] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x1c] - param_2[0x1c],param_1,param_2[0x1c]);
      param_4[0x1c] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x1d] - param_2[0x1d],param_1,param_2[0x1d]);
      param_4[0x1d] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x1e] - param_2[0x1e],param_1,param_2[0x1e]);
      param_4[0x1e] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x1f] - param_2[0x1f],param_1,param_2[0x1f]);
      param_4[0x1f] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x20] - param_2[0x20],param_1,param_2[0x20]);
      param_4[0x20] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x21] - param_2[0x21],param_1,param_2[0x21]);
      param_4[0x21] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x22] - param_2[0x22],param_1,param_2[0x22]);
      param_4[0x22] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x23] - param_2[0x23],param_1,param_2[0x23]);
      param_4[0x23] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x24] - param_2[0x24],param_1,param_2[0x24]);
      param_4[0x24] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x25] - param_2[0x25],param_1,param_2[0x25]);
      param_4[0x25] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x26] - param_2[0x26],param_1,param_2[0x26]);
      param_4[0x26] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x27] - param_2[0x27],param_1,param_2[0x27]);
      param_4[0x27] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x28] - param_2[0x28],param_1,param_2[0x28]);
      param_4[0x28] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x29] - param_2[0x29],param_1,param_2[0x29]);
      param_4[0x29] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x2a] - param_2[0x2a],param_1,param_2[0x2a]);
      param_4[0x2a] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x2b] - param_2[0x2b],param_1,param_2[0x2b]);
      param_4[0x2b] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x2c] - param_2[0x2c],param_1,param_2[0x2c]);
      param_4[0x2c] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x2d] - param_2[0x2d],param_1,param_2[0x2d]);
      param_4[0x2d] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x2e] - param_2[0x2e],param_1,param_2[0x2e]);
      param_4[0x2e] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x2f] - param_2[0x2f],param_1,param_2[0x2f]);
      param_4[0x2f] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x30] - param_2[0x30],param_1,param_2[0x30]);
      param_4[0x30] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x31] - param_2[0x31],param_1,param_2[0x31]);
      param_4[0x31] = uVar6;
      uVar5 = *(undefined8 *)(param_3 + 0x32);
      fVar1 = (float)*(undefined8 *)(param_2 + 0x32);
      fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 0x32) >> 0x20);
      fVar3 = (float)*(undefined8 *)(param_2 + 0x34);
      fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x34) >> 0x20);
      *(ulong *)(param_4 + 0x34) =
           CONCAT44(fVar4 + ((float)((ulong)*(undefined8 *)(param_3 + 0x34) >> 0x20) - fVar4) *
                            param_1,
                    fVar3 + ((float)*(undefined8 *)(param_3 + 0x34) - fVar3) * param_1);
      *(ulong *)(param_4 + 0x32) =
           CONCAT44(fVar2 + ((float)((ulong)uVar5 >> 0x20) - fVar2) * param_1,
                    fVar1 + ((float)uVar5 - fVar1) * param_1);
      uVar5 = *(undefined8 *)(param_3 + 0x36);
      fVar1 = (float)*(undefined8 *)(param_2 + 0x36);
      fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 0x36) >> 0x20);
      fVar3 = (float)*(undefined8 *)(param_2 + 0x38);
      fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
      *(ulong *)(param_4 + 0x38) =
           CONCAT44(fVar4 + ((float)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20) - fVar4) *
                            param_1,
                    fVar3 + ((float)*(undefined8 *)(param_3 + 0x38) - fVar3) * param_1);
      *(ulong *)(param_4 + 0x36) =
           CONCAT44(fVar2 + ((float)((ulong)uVar5 >> 0x20) - fVar2) * param_1,
                    fVar1 + ((float)uVar5 - fVar1) * param_1);
      uVar6 = NEON_fmadd(param_3[0x3a] - param_2[0x3a],param_1,param_2[0x3a]);
      param_4[0x3a] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x3b] - param_2[0x3b],param_1,param_2[0x3b]);
      param_4[0x3b] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x3c] - param_2[0x3c],param_1,param_2[0x3c]);
      param_4[0x3c] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x3d] - param_2[0x3d],param_1,param_2[0x3d]);
      param_4[0x3d] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x3e] - param_2[0x3e],param_1,param_2[0x3e]);
      param_4[0x3e] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x3f] - param_2[0x3f],param_1,param_2[0x3f]);
      param_4[0x3f] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x40] - param_2[0x40],param_1,param_2[0x40]);
      param_4[0x40] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x41] - param_2[0x41],param_1,param_2[0x41]);
      param_4[0x41] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x42] - param_2[0x42],param_1,param_2[0x42]);
      param_4[0x42] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x43] - param_2[0x43],param_1,param_2[0x43]);
      param_4[0x43] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x44] - param_2[0x44],param_1,param_2[0x44]);
      param_4[0x44] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x45] - param_2[0x45],param_1,param_2[0x45]);
      param_4[0x45] = uVar6;
      uVar6 = NEON_fmadd(param_3[0x46] - param_2[0x46],param_1,param_2[0x46]);
      param_4[0x46] = uVar6;
      uVar5 = *(undefined8 *)(param_3 + 0x47);
      fVar1 = (float)*(undefined8 *)(param_2 + 0x47);
      fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 0x47) >> 0x20);
      fVar3 = (float)*(undefined8 *)(param_2 + 0x49);
      fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x49) >> 0x20);
      *(ulong *)(param_4 + 0x49) =
           CONCAT44(fVar4 + ((float)((ulong)*(undefined8 *)(param_3 + 0x49) >> 0x20) - fVar4) *
                            param_1,
                    fVar3 + ((float)*(undefined8 *)(param_3 + 0x49) - fVar3) * param_1);
      *(ulong *)(param_4 + 0x47) =
           CONCAT44(fVar2 + ((float)((ulong)uVar5 >> 0x20) - fVar2) * param_1,
                    fVar1 + ((float)uVar5 - fVar1) * param_1);
      return;
    }
    if ((DAT_001035b8 <= (double)ABS(param_1)) &&
       (param_2 = param_3, DAT_001035b8 <= (double)ABS(param_1 + -1.0))) {
      return;
    }
  }
  memcpy(param_4,param_2,300);
  return;
}


// ===== 0x187a00 FUN_00287a00 @ 00287a00

void FUN_00287a00(uint *param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong in_stack_fffffffffffffd70;
  undefined4 uVar10;
  undefined8 in_stack_fffffffffffffd78;
  undefined4 uVar11;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
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
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar3 = PTR_g_logInfo_010f56f8;
  uVar10 = (undefined4)(in_stack_fffffffffffffd70 >> 0x20);
  uVar11 = (undefined4)((ulong)in_stack_fffffffffffffd78 >> 0x20);
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_4 == 0)) {
    pcVar4 = (char *)CamX::Log::GroupToString(0x200000);
    uVar6 = CamX::Log::GetFileName
                      (
                      "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/include/camxiqinterface2utils.h"
                      );
    CamX::Log::LogSystem
              ((Log *)&fde_table_entry_001ffffc.data_loc,0x16d7cc,(char *)0x1,0x196ff7,pcVar4,uVar6,
               "PopulateLiveTuningInfo",(ulong)(param_2 != 0),
               CONCAT44(uVar10,(uint)(param_1 != (uint *)0x0)),CONCAT44(uVar11,(uint)(param_4 != 0))
              );
    if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) == 1) &&
       (((byte)PTR_g_traceInfo_010f56f0[2] >> 5 & 1) != 0)) {
      uStack_268 = 0;
      local_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
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
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
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
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      FUN_00284260(&local_270,0x200,
                   "[ERROR](pChromatix != NULL) %d (pLiveTuningData != NULL) %d (pTuningSetManager != NULL) %d invalid arguments"
                   ,(ulong)(param_2 != 0),(uint)(param_1 != (uint *)0x0),(uint)(param_4 != 0));
      uVar7 = atrace_get_enabled_tags();
      if ((uVar7 & 0xc00) == 0) {
        uVar7 = atrace_get_enabled_tags();
      }
      else {
        atrace_begin_body(&local_270);
        uVar7 = atrace_get_enabled_tags();
      }
      if ((uVar7 & 0xc00) != 0) {
        atrace_end_body();
      }
    }
    uVar6 = 4;
  }
  else if (*param_1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    lVar8 = 0x188;
    lVar9 = *(long *)(param_2 + 0x18);
    uVar6 = *(undefined8 *)(PTR_g_logInfo_010f56f8 + 0x28);
    do {
      if (((uint)uVar6 >> 0x15 & 1) != 0) {
        pcVar4 = (char *)CamX::Log::GroupToString(0x200000);
        uVar6 = CamX::Log::GetFileName
                          (
                          "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/include/camxiqinterface2utils.h"
                          );
        in_stack_fffffffffffffd70 = *(ulong *)((long)param_1 + lVar8);
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1512e7,pcVar4,
                   uVar6,"PopulateLiveTuningInfo",uVar7 & 0xffffffff,in_stack_fffffffffffffd70,lVar9
                  );
        uVar6 = *(undefined8 *)(puVar3 + 0x28);
      }
      if (lVar9 == *(long *)((long)param_1 + lVar8)) {
        if (((uint)uVar6 >> 0x15 & 1) != 0) {
          pcVar4 = (char *)CamX::Log::GroupToString(0x200000);
          uVar6 = CamX::Log::GetFileName
                            (
                            "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/include/camxiqinterface2utils.h"
                            );
          CamX::Log::LogSystem
                    ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x19e129,pcVar4,
                     uVar6,"PopulateLiveTuningInfo",uVar7 & 0xffffffff);
        }
        pcVar4 = (char *)CamX::Log::GroupToString(0x200000);
        uVar6 = CamX::Log::GetFileName
                          (
                          "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/include/camxiqinterface2utils.h"
                          );
        uVar5 = in_stack_fffffffffffffd70 & 0xffffffff00000000;
        CamX::Log::LogSystem
                  ((Log *)&fde_table_entry_001ffffc.data_loc,0x16d7cc,(char *)0x1,0x1b87e0,pcVar4,
                   uVar6,"PopulateLiveTuningInfo",uVar7 & 0xffffffff,uVar5);
        uVar10 = (undefined4)(uVar5 >> 0x20);
        if ((*(int *)(PTR_g_traceInfo_010f56f0 + 8) == 1) &&
           (((byte)PTR_g_traceInfo_010f56f0[2] >> 5 & 1) != 0)) {
          uStack_268 = 0;
          local_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
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
          uStack_1c8 = 0;
          local_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          local_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          local_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          local_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          local_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
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
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          FUN_00284260(&local_270,0x200,
                       "[ERROR]Live Tunning SetTriggered failed Vendor Tag Index [%d] returnValue %d"
                       ,uVar7 & 0xffffffff,0);
          uVar5 = atrace_get_enabled_tags();
          if ((uVar5 & 0xc00) == 0) {
            uVar5 = atrace_get_enabled_tags();
          }
          else {
            atrace_begin_body(&local_270);
            uVar5 = atrace_get_enabled_tags();
          }
          if ((uVar5 & 0xc00) == 0) goto LAB_00287d38;
          atrace_end_body();
          bVar1 = puVar3[0x2a];
        }
        else {
LAB_00287d38:
          bVar1 = puVar3[0x2a];
        }
        uVar6 = 1;
        if ((bVar1 >> 5 & 1) != 0) {
          pcVar4 = (char *)CamX::Log::GroupToString(0x200000);
          uVar6 = CamX::Log::GetFileName
                            (
                            "vendor/qcom/proprietary/camx-lib/hwl/iqinterface2/include/camxiqinterface2utils.h"
                            );
          CamX::Log::LogSystem
                    ((Log *)&fde_table_entry_001ffffc.data_loc,0x174c9b,(char *)0x5,0x1bfb91,pcVar4,
                     uVar6,"PopulateLiveTuningInfo",uVar7 & 0xffffffff,CONCAT44(uVar10,1));
          uVar6 = 1;
        }
        goto LAB_00287d98;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x188;
    } while (uVar7 < *param_1);
    uVar6 = 0;
  }
LAB_00287d98:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


