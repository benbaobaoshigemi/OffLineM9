; function 0x443610 size 0x148 
00443610  sub      sp, sp, #0x180
00443614  stp      x29, x30, [sp, #0x150]
00443618  str      x28, [sp, #0x160]
0044361c  stp      x20, x19, [sp, #0x170]
00443620  add      x29, sp, #0x150
00443624  mrs      x20, tpidr_el0
00443628  mov      x19, x0
0044362c  ldr      x8, [x20, #0x28]
00443630  mov      w1, #0xc00
00443634  mov      w2, #0x1000
00443638  mov      w3, #0x10
0044363c  mov      x5, xzr
00443640  stur     x8, [x29, #-8]
00443644  ldr      x8, [x0, #0x238]
00443648  sub      x0, x29, #0x68
0044364c  ldr      x4, [x8, #0x30]
00443650  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00443654  ldr      x8, [x19, #0x248]
00443658  ldr      w1, [x19, #0x33c]
0044365c  ldr      w2, [x19, #0x340]
00443660  ldr      x4, [x8, #0x30]
00443664  add      x0, sp, #0x88
00443668  mov      w3, #0x10
0044366c  mov      x5, xzr
00443670  bl       #0xc48ba0  ; <_ZN2cv3MatC1EiiiPvm>
00443674  ldp      w9, w8, [x29, #-0x60]
00443678  ldp      w11, w10, [sp, #0x90]
0044367c  sub      w8, w8, w10
00443680  sub      w9, w9, w11
00443684  cmp      w8, #0
00443688  stp      w10, w11, [sp, #0x20]
0044368c  cinc     w8, w8, lt
00443690  cmp      w9, #0
00443694  cinc     w9, w9, lt
00443698  asr      w8, w8, #1
0044369c  asr      w9, w9, #1
004436a0  stp      w8, w9, [sp, #0x18]
004436a4  add      x0, sp, #0x28
004436a8  sub      x1, x29, #0x68
004436ac  add      x2, sp, #0x18
004436b0  bl       #0xc48bc0  ; <_ZN2cv3MatC1ERKS0_RKNS_5Rect_IiEE>
004436b4  mov      w8, #0x2010000
004436b8  add      x9, sp, #0x88
004436bc  str      w8, [sp]
004436c0  stp      x9, xzr, [sp, #8]
004436c4  add      x0, sp, #0x28
004436c8  mov      x1, sp
004436cc  bl       #0xc48bd0  ; <_ZNK2cv3Mat6copyToERKNS_12_OutputArrayE>
004436d0  add      x0, sp, #0x28
004436d4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004436d8  add      x0, sp, #0x88
004436dc  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004436e0  sub      x0, x29, #0x68
004436e4  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
004436e8  ldr      x8, [x20, #0x28]
004436ec  ldur     x9, [x29, #-8]
004436f0  cmp      x8, x9
004436f4  b.ne     #0x443754
004436f8  mov      w0, wzr
004436fc  ldp      x20, x19, [sp, #0x170]
00443700  ldp      x29, x30, [sp, #0x150]
00443704  ldr      x28, [sp, #0x160]
00443708  add      sp, sp, #0x180
0044370c  ret      
00443710  mov      x19, x0
00443714  add      x0, sp, #0x28
00443718  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044371c  b        #0x443724
00443720  mov      x19, x0
00443724  add      x0, sp, #0x88
00443728  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044372c  b        #0x443734
00443730  mov      x19, x0
00443734  sub      x0, x29, #0x68
00443738  bl       #0xc48ab0  ; <_ZN2cv3MatD1Ev>
0044373c  ldr      x8, [x20, #0x28]
00443740  ldur     x9, [x29, #-8]
00443744  cmp      x8, x9
00443748  b.ne     #0x443754
0044374c  mov      x0, x19
00443750  bl       #0xc44424
00443754  bl       #0xc48830  ; <__stack_chk_fail>
