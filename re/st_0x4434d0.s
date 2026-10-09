; function 0x4434d0 size 0x140 
004434d0  sub      sp, sp, #0x150
004434d4  stp      x29, x30, [sp, #0x120]
004434d8  stp      x28, x21, [sp, #0x130]
004434dc  stp      x20, x19, [sp, #0x140]
004434e0  add      x29, sp, #0x120
004434e4  mrs      x20, tpidr_el0
004434e8  mov      x19, x0
004434ec  ldr      x8, [x20, #0x28]
004434f0  mov      w3, #0x10
004434f4  mov      x5, xzr
004434f8  sub      x21, x29, #0x68
004434fc  stur     x8, [x29, #-8]
00443500  ldr      x8, [x0, #0x208]
00443504  ldr      w1, [x0, #0x33c]
00443508  ldr      w2, [x0, #0x340]
0044350c  sub      x0, x29, #0x68
00443510  ldr      x4, [x8, #0x30]
00443514  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00443518  ldr      x8, [x19, #0x1f8]
0044351c  ldr      x4, [x8, #0x30]
00443520  add      x0, sp, #0x58
00443524  mov      w1, #0xc00
00443528  mov      w2, #0x1000
0044352c  mov      w3, #0x10
00443530  mov      x5, xzr
00443534  add      x19, sp, #0x58
00443538  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
0044353c  ldp      w8, w12, [x29, #-0x60]
00443540  ldp      w9, w10, [sp, #0x60]
00443544  movi     v0.2d, #0000000000000000
00443548  mov      w11, #0x1010000
0044354c  stp      x21, xzr, [sp, #0x20]
00443550  stp      x19, xzr, [sp, #8]
00443554  sub      w8, w9, w8
00443558  sub      w9, w10, w12
0044355c  cmp      w8, #0
00443560  str      w11, [sp, #0x18]
00443564  cinc     w10, w8, lt
00443568  cmp      w9, #0
0044356c  asr      w2, w10, #1
00443570  mov      w10, #0x2010000
00443574  sub      w3, w8, w2
00443578  cinc     w8, w9, lt
0044357c  asr      w4, w8, #1
00443580  stp      q0, q0, [sp, #0x30]
00443584  str      w10, [sp]
00443588  sub      w5, w9, w4
0044358c  add      x0, sp, #0x18
00443590  mov      x1, sp
00443594  add      x7, sp, #0x30
00443598  mov      w6, #4
0044359c  bl       #0xc48bb0  ; <_ZN2cv14copyMakeBorderERKNS_11_InputArrayERKNS_12_OutputArrayEiiiiiRKNS_7Scalar_IdEE>
004435a0  add      x0, sp, #0x58
004435a4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004435a8  sub      x0, x29, #0x68
004435ac  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004435b0  ldr      x8, [x20, #0x28]
004435b4  ldur     x9, [x29, #-8]
004435b8  cmp      x8, x9
004435bc  b.ne     #0x44360c
004435c0  mov      w0, wzr
004435c4  ldp      x20, x19, [sp, #0x140]
004435c8  ldp      x28, x21, [sp, #0x130]
004435cc  ldp      x29, x30, [sp, #0x120]
004435d0  add      sp, sp, #0x150
004435d4  ret      
004435d8  mov      x19, x0
004435dc  add      x0, sp, #0x58
004435e0  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004435e4  b        #0x4435ec
004435e8  mov      x19, x0
004435ec  sub      x0, x29, #0x68
004435f0  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004435f4  ldr      x8, [x20, #0x28]
004435f8  ldur     x9, [x29, #-8]
004435fc  cmp      x8, x9
00443600  b.ne     #0x44360c
00443604  mov      x0, x19
00443608  bl       #0xc44424
0044360c  bl       #0xc48830  ; <__stack_chk_fail>
