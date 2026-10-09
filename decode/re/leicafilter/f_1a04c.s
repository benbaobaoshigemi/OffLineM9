; function 0x1a04c size 0xc0 _ZN9ParamUtil9readParamEPcR7param_t12param_type_t
0001a04c  paciasp  
0001a050  sub      sp, sp, #0x50
0001a054  stp      x29, x30, [sp, #0x10]
0001a058  stp      x24, x23, [sp, #0x20]
0001a05c  stp      x22, x21, [sp, #0x30]
0001a060  stp      x20, x19, [sp, #0x40]
0001a064  add      x29, sp, #0x10
0001a068  mrs      x24, tpidr_el0
0001a06c  mov      x22, x0
0001a070  mov      w9, #2
0001a074  ldr      x8, [x24, #0x28]
0001a078  mov      w19, w3
0001a07c  mov      x20, x2
0001a080  mov      x21, x1
0001a084  str      x8, [sp, #8]
0001a088  ldrh     w23, [x1]
0001a08c  str      w9, [sp, #4]
0001a090  add      x8, x23, x23, lsl #1
0001a094  strh     w23, [x2, #8]
0001a098  lsl      x0, x8, #3
0001a09c  bl       #0x1f658  ; <_Znam>
0001a0a0  str      x0, [x20]
0001a0a4  cbz      x23, #0x1a0dc
0001a0a8  mov      w23, wzr
0001a0ac  ldr      w8, [sp, #4]
0001a0b0  add      x4, sp, #4
0001a0b4  mov      x0, x22
0001a0b8  mov      x2, x20
0001a0bc  mov      w3, w23
0001a0c0  mov      w5, w19
0001a0c4  add      x1, x21, x8
0001a0c8  bl       #0x1f748  ; <_ZN9ParamUtil18readParamLuxAndCctEPcR7param_ttRj12param_type_t>
0001a0cc  ldrh     w8, [x20, #8]
0001a0d0  add      w23, w23, #1
0001a0d4  cmp      w23, w8
0001a0d8  b.lo     #0x1a0ac
0001a0dc  ldr      x8, [x24, #0x28]
0001a0e0  ldr      x9, [sp, #8]
0001a0e4  cmp      x8, x9
0001a0e8  b.ne     #0x1a108
0001a0ec  ldp      x20, x19, [sp, #0x40]
0001a0f0  ldp      x22, x21, [sp, #0x30]
0001a0f4  ldp      x24, x23, [sp, #0x20]
0001a0f8  ldp      x29, x30, [sp, #0x10]
0001a0fc  add      sp, sp, #0x50
0001a100  autiasp  
0001a104  ret      
0001a108  bl       #0x1ecf8  ; <__stack_chk_fail>
