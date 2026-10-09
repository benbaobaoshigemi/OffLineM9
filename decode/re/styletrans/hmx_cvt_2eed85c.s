; function 0x2eed85c size 0xb4 
02eed85c  sub      sp, sp, #0x50
02eed860  stp      x29, x30, [sp, #0x20]
02eed864  str      x21, [sp, #0x30]
02eed868  stp      x20, x19, [sp, #0x40]
02eed86c  add      x29, sp, #0x20
02eed870  mov      w9, #0x1200
02eed874  mov      w11, #0x48
02eed878  add      w12, w1, #1
02eed87c  add      x13, x0, #0x1b0, lsl #12
02eed880  umaddl   x10, w1, w9, x0
02eed884  mov      x8, x4
02eed888  umull    x19, w2, w11
02eed88c  umaddl   x10, w2, w11, x10
02eed890  add      x11, x13, #0x110
02eed894  umaddl   x20, w12, w9, x11
02eed898  mov      w13, w3
02eed89c  umaddl   x21, w1, w9, x11
02eed8a0  ldr      w1, [x0, #0x50]
02eed8a4  add      x10, x10, x13, lsl #5
02eed8a8  mov      x2, sp
02eed8ac  ldrh     w12, [x20, x19]
02eed8b0  add      x9, x10, #0x48, lsl #12
02eed8b4  add      x9, x9, #0x108
02eed8b8  ldrh     w11, [x21, x19]
02eed8bc  ldrb     w10, [x0, #0x57]
02eed8c0  mov      x3, x8
02eed8c4  and      w12, w12, #0xff0
02eed8c8  lsr      w12, w12, #4
02eed8cc  and      w4, w11, #0xfff
02eed8d0  ldp      q0, q1, [x9]
02eed8d4  orr      w9, w10, #0xffffff7f
02eed8d8  and      w5, w9, w7
02eed8dc  bfi      w4, w12, #0xc, #8
02eed8e0  stp      q0, q1, [sp]
02eed8e4  bl       #0x2eec964
02eed8e8  lsr      w9, w0, #8
02eed8ec  and      w8, w0, #0xfff
02eed8f0  and      w9, w9, #0xff0
02eed8f4  strh     w8, [x21, x19]
02eed8f8  strh     w9, [x20, x19]
02eed8fc  ldp      x20, x19, [sp, #0x40]
02eed900  ldp      x29, x30, [sp, #0x20]
02eed904  ldr      x21, [sp, #0x30]
02eed908  add      sp, sp, #0x50
02eed90c  ret      
