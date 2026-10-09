; function 0x2eee3d0 size 0x1a8 
02eee3d0  sub      sp, sp, #0x90
02eee3d4  stp      x29, x30, [sp, #0x30]
02eee3d8  stp      x28, x27, [sp, #0x40]
02eee3dc  stp      x26, x25, [sp, #0x50]
02eee3e0  stp      x24, x23, [sp, #0x60]
02eee3e4  stp      x22, x21, [sp, #0x70]
02eee3e8  stp      x20, x19, [sp, #0x80]
02eee3ec  add      x29, sp, #0x30
02eee3f0  mov      w23, #0x1200
02eee3f4  mov      w9, #0x48
02eee3f8  mov      w10, #1
02eee3fc  mov      x19, x0
02eee400  umaddl   x8, w1, w23, x0
02eee404  mov      x22, x4
02eee408  ldr      x27, [x29, #0x60]
02eee40c  add      w24, w3, #2
02eee410  umaddl   x8, w2, w9, x8
02eee414  add      w28, w1, #1
02eee418  mov      w11, w1
02eee41c  mov      w9, w2
02eee420  lsl      w21, w10, w3
02eee424  stur     x7, [x29, #-8]
02eee428  stur     w6, [x29, #-0x14]
02eee42c  ldrh     w8, [x8, #0x148]
02eee430  tst      w21, w8
02eee434  b.eq     #0x2eee440
02eee438  ldr      w8, [x19, #0xc4]
02eee43c  b        #0x2eee444
02eee440  mov      w8, wzr
02eee444  add      x25, x19, #0x108
02eee448  add      x9, x9, x9, lsl #3
02eee44c  umaddl   x10, w11, w23, x25
02eee450  lsl      x26, x9, #3
02eee454  mov      w20, w3
02eee458  mov      x0, x19
02eee45c  add      x9, x10, x26
02eee460  stur     x11, [x29, #-0x10]
02eee464  ldr      w1, [x9, w24, uxtw #2]
02eee468  ldr      w2, [x9, w3, uxtw #2]
02eee46c  mov      w3, w8
02eee470  blr      x27
02eee474  umaddl   x8, w28, w23, x25
02eee478  mov      x23, x0
02eee47c  add      x8, x8, x26
02eee480  ldrh     w8, [x8, #0x40]
02eee484  tst      w21, w8
02eee488  b.eq     #0x2eee494
02eee48c  ldr      w3, [x19, #0xc4]
02eee490  b        #0x2eee498
02eee494  mov      w3, wzr
02eee498  add      x8, x28, x28, lsl #3
02eee49c  add      x9, x19, x26
02eee4a0  lsl      x28, x8, #9
02eee4a4  mov      x0, x19
02eee4a8  add      x8, x9, x28
02eee4ac  add      x8, x8, #0x108
02eee4b0  ldr      w1, [x8, x24, lsl #2]
02eee4b4  lsr      x24, x22, #0x20
02eee4b8  ldr      w2, [x8, x20, lsl #2]
02eee4bc  blr      x27
02eee4c0  ubfx     w8, w22, #0x10, #1
02eee4c4  and      w9, w22, #0x3ff
02eee4c8  ldur     x20, [x29, #-8]
02eee4cc  ubfx     w7, w22, #0x16, #1
02eee4d0  orr      w8, w9, w8, lsl #10
02eee4d4  ubfx     x9, x22, #0xd, #0x13
02eee4d8  and      w5, w9, #4
02eee4dc  mov      w9, #1
02eee4e0  extr     w8, w8, w22, #0x1f
02eee4e4  ubfx     w4, w22, #0xa, #5
02eee4e8  bfxil    w5, w22, #0x11, #2
02eee4ec  mov      x1, x0
02eee4f0  mov      x2, x23
02eee4f4  mov      w3, w24
02eee4f8  eor      w6, w8, #0x800
02eee4fc  bic      w8, w9, w20, lsr #1
02eee500  ldur     w9, [x29, #-0x14]
02eee504  str      w8, [sp]
02eee508  strh     w9, [sp, #8]
02eee50c  bl       #0x2eedaf0
02eee510  mov      w8, #7
02eee514  mov      w9, #-0x10
02eee518  ands     w8, w8, w20, lsr #16
02eee51c  ldur     x12, [x29, #-0x10]
02eee520  add      x10, x19, #0x168, lsl #12
02eee524  mov      w11, #0x1200
02eee528  add      x10, x10, #0x110
02eee52c  lsl      w8, w9, w8
02eee530  and      w9, w0, #0xfff0
02eee534  orr      w8, w8, #0xf
02eee538  umaddl   x11, w12, w11, x10
02eee53c  csinv    w8, w8, wzr, ne
02eee540  lsr      w12, w0, #0xc
02eee544  and      w8, w8, w9, lsr #4
02eee548  and      w9, w12, #0xff0
02eee54c  add      x10, x10, x28
02eee550  strh     w8, [x11, x26]
02eee554  strh     w9, [x10, x26]
02eee558  ldp      x20, x19, [sp, #0x80]
02eee55c  ldp      x22, x21, [sp, #0x70]
02eee560  ldp      x24, x23, [sp, #0x60]
02eee564  ldp      x26, x25, [sp, #0x50]
02eee568  ldp      x28, x27, [sp, #0x40]
02eee56c  ldp      x29, x30, [sp, #0x30]
02eee570  add      sp, sp, #0x90
02eee574  ret      
