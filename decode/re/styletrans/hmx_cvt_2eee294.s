; function 0x2eee294 size 0x13c 
02eee294  sub      sp, sp, #0x40
02eee298  stp      x29, x30, [sp, #0x10]
02eee29c  stp      x22, x21, [sp, #0x20]
02eee2a0  stp      x20, x19, [sp, #0x30]
02eee2a4  add      x29, sp, #0x10
02eee2a8  mov      w8, #0x1200
02eee2ac  mov      w9, #0x48
02eee2b0  mov      x19, x7
02eee2b4  mov      w20, w6
02eee2b8  umaddl   x8, w1, w8, x0
02eee2bc  mov      x21, x4
02eee2c0  add      w10, w3, #2
02eee2c4  mov      w12, w1
02eee2c8  umaddl   x8, w2, w9, x8
02eee2cc  ldr      x9, [x29, #0x30]
02eee2d0  mov      w11, w2
02eee2d4  ldrh     w8, [x8, #0x148]
02eee2d8  lsr      w8, w8, w3
02eee2dc  tbz      w8, #0, #0x2eee2e8
02eee2e0  ldr      w8, [x0, #0xc4]
02eee2e4  b        #0x2eee2ec
02eee2e8  mov      w8, wzr
02eee2ec  mov      w13, #0x1200
02eee2f0  mov      w14, #0x48
02eee2f4  umaddl   x12, w12, w13, x0
02eee2f8  umaddl   x22, w11, w14, x12
02eee2fc  add      x11, x22, #0x108
02eee300  ldr      w1, [x11, w10, uxtw #2]
02eee304  ldr      w2, [x11, w3, uxtw #2]
02eee308  mov      w3, w8
02eee30c  blr      x9
02eee310  add      x8, x22, #0x168, lsl #12
02eee314  ubfx     w9, w19, #2, #2
02eee318  add      x22, x8, #0x110
02eee31c  ubfx     w6, w21, #0x13, #0xc
02eee320  cmp      w9, #1
02eee324  ldrh     w8, [x22]
02eee328  b.ne     #0x2eee340
02eee32c  cmp      w6, w8
02eee330  tbnz     w19, #4, #0x2eee33c
02eee334  csel     w6, w6, w8, lo
02eee338  b        #0x2eee340
02eee33c  csel     w6, w6, w8, hi
02eee340  ubfx     w10, w21, #0x10, #1
02eee344  and      w11, w21, #0x3ff
02eee348  cmp      w9, #2
02eee34c  orr      w10, w11, w10, lsl #10
02eee350  extr     w10, w10, w21, #0x1f
02eee354  eor      w5, w10, #0x800
02eee358  b.ne     #0x2eee370
02eee35c  cmp      w5, w8
02eee360  tbnz     w19, #4, #0x2eee36c
02eee364  csel     w5, w5, w8, lo
02eee368  b        #0x2eee370
02eee36c  csel     w5, w5, w8, hi
02eee370  lsr      w8, w21, #0xd
02eee374  ubfx     w3, w21, #0xa, #5
02eee378  and      w4, w8, #4
02eee37c  mov      w8, #1
02eee380  bfxil    w4, w21, #0x11, #2
02eee384  bic      w7, w8, w19, lsr #1
02eee388  mov      x1, x0
02eee38c  lsr      x2, x21, #0x20
02eee390  strh     w20, [sp]
02eee394  bl       #0x2eed910
02eee398  mov      w8, #7
02eee39c  mov      w9, #-0x10
02eee3a0  ands     w8, w8, w19, lsr #16
02eee3a4  lsl      w8, w9, w8
02eee3a8  mov      w9, #0xffff
02eee3ac  orr      w8, w8, #0xf
02eee3b0  csel     w8, w9, w8, eq
02eee3b4  and      w8, w0, w8
02eee3b8  strh     w8, [x22]
02eee3bc  ldp      x20, x19, [sp, #0x30]
02eee3c0  ldp      x22, x21, [sp, #0x20]
02eee3c4  ldp      x29, x30, [sp, #0x10]
02eee3c8  add      sp, sp, #0x40
02eee3cc  ret      
