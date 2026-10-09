; function 0x1a10c size 0x168 _ZN9ParamUtil18readParamLuxAndCctEPcR7param_ttRj12param_type_t
0001a10c  bti      c
0001a110  ldrh     w8, [x2, #8]
0001a114  cmp      w8, w3, uxth
0001a118  b.ls     #0x1a270
0001a11c  paciasp  
0001a120  stp      x29, x30, [sp, #-0x50]!
0001a124  stp      x26, x25, [sp, #0x10]
0001a128  stp      x24, x23, [sp, #0x20]
0001a12c  stp      x22, x21, [sp, #0x30]
0001a130  stp      x20, x19, [sp, #0x40]
0001a134  mov      x29, sp
0001a138  and      x23, x3, #0xffff
0001a13c  ldr      x9, [x2]
0001a140  mov      x22, x0
0001a144  add      x8, x23, w3, uxth #1
0001a148  mov      w20, w5
0001a14c  mov      x19, x4
0001a150  mov      x21, x2
0001a154  mov      x26, x1
0001a158  lsl      x24, x8, #3
0001a15c  ldrh     w8, [x1]
0001a160  strh     w8, [x9, x24]
0001a164  ldr      x8, [x2]
0001a168  ldrh     w9, [x1, #2]
0001a16c  add      x8, x8, x24
0001a170  strh     w9, [x8, #2]
0001a174  ldr      x8, [x2]
0001a178  ldrh     w9, [x1, #4]
0001a17c  add      x8, x8, x24
0001a180  strh     w9, [x8, #0x10]
0001a184  ldr      x8, [x2]
0001a188  add      x25, x8, x24
0001a18c  ldrh     w8, [x25, #0x10]
0001a190  add      x8, x8, x8, lsl #1
0001a194  lsl      x0, x8, #1
0001a198  bl       #0x1f658  ; <_Znam>
0001a19c  str      x0, [x25, #8]
0001a1a0  add      x1, x26, #6
0001a1a4  ldr      x8, [x21]
0001a1a8  add      x8, x8, x24
0001a1ac  ldrh     w9, [x8, #0x10]
0001a1b0  ldr      x0, [x8, #8]
0001a1b4  add      x9, x9, x9, lsl #1
0001a1b8  lsl      x2, x9, #1
0001a1bc  bl       #0x1f358  ; <memcpy>
0001a1c0  ldr      x11, [x21]
0001a1c4  add      x8, x11, x24
0001a1c8  ldrh     w8, [x8, #0x10]
0001a1cc  cbz      w8, #0x1a248
0001a1d0  mov      x8, xzr
0001a1d4  mov      w9, #4
0001a1d8  mov      w10, #0x18
0001a1dc  b        #0x1a214
0001a1e0  umaddl   x11, w23, w10, x11
0001a1e4  ldr      x11, [x11, #8]
0001a1e8  ldrh     w11, [x11, x9]
0001a1ec  add      w11, w11, #1
0001a1f0  str      w11, [x22, #0x37c]
0001a1f4  ldr      x11, [x21]
0001a1f8  nop      
0001a1fc  umaddl   x12, w23, w10, x11
0001a200  add      x8, x8, #1
0001a204  add      x9, x9, #6
0001a208  ldrh     w12, [x12, #0x10]
0001a20c  cmp      x8, x12
0001a210  b.hs     #0x1a238
0001a214  cbz      w20, #0x1a1e0
0001a218  cmp      w20, #1
0001a21c  b.ne     #0x1a1f4
0001a220  umaddl   x11, w23, w10, x11
0001a224  ldr      x11, [x11, #8]
0001a228  ldrh     w11, [x11, x9]
0001a22c  add      w11, w11, #1
0001a230  str      w11, [x22, #0x378]
0001a234  b        #0x1a1f4
0001a238  mov      w8, #6
0001a23c  mov      w9, #6
0001a240  madd     w8, w12, w8, w9
0001a244  b        #0x1a24c
0001a248  mov      w8, #6
0001a24c  ldr      w9, [x19]
0001a250  add      w8, w8, w9
0001a254  str      w8, [x19]
0001a258  ldp      x20, x19, [sp, #0x40]
0001a25c  ldp      x22, x21, [sp, #0x30]
0001a260  ldp      x24, x23, [sp, #0x20]
0001a264  ldp      x26, x25, [sp, #0x10]
0001a268  ldp      x29, x30, [sp], #0x50
0001a26c  autiasp  
0001a270  ret      
