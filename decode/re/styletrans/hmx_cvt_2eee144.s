; function 0x2eee144 size 0x150 
02eee144  sub      sp, sp, #0x50
02eee148  stp      x29, x30, [sp, #0x10]
02eee14c  stp      x24, x23, [sp, #0x20]
02eee150  stp      x22, x21, [sp, #0x30]
02eee154  stp      x20, x19, [sp, #0x40]
02eee158  add      x29, sp, #0x10
02eee15c  mov      w8, #0x1200
02eee160  mov      w9, #0x48
02eee164  mov      x19, x7
02eee168  mov      w20, w6
02eee16c  umaddl   x8, w1, w8, x0
02eee170  mov      x22, x0
02eee174  mov      x21, x4
02eee178  mov      w24, w1
02eee17c  umaddl   x8, w2, w9, x8
02eee180  add      w9, w5, w3
02eee184  mov      w23, w2
02eee188  add      x11, x8, w9, uxtw #2
02eee18c  ldrh     w10, [x8, #0x148]
02eee190  ldr      x8, [x29, #0x40]
02eee194  ldr      w1, [x11, #0x108]
02eee198  lsr      w9, w10, w9
02eee19c  tbz      w9, #0, #0x2eee1a8
02eee1a0  ldr      w2, [x22, #0xc4]
02eee1a4  b        #0x2eee1ac
02eee1a8  mov      w2, wzr
02eee1ac  mov      x0, x22
02eee1b0  mov      w3, w2
02eee1b4  blr      x8
02eee1b8  mov      w8, #0x1200
02eee1bc  mov      w9, #0x48
02eee1c0  ubfx     w6, w21, #0x13, #0xc
02eee1c4  umaddl   x8, w24, w8, x22
02eee1c8  umaddl   x8, w23, w9, x8
02eee1cc  ubfx     w9, w19, #2, #2
02eee1d0  cmp      w9, #1
02eee1d4  add      x8, x8, #0x168, lsl #12
02eee1d8  add      x22, x8, #0x110
02eee1dc  ldrh     w8, [x22]
02eee1e0  b.ne     #0x2eee1f8
02eee1e4  cmp      w6, w8
02eee1e8  tbnz     w19, #4, #0x2eee1f4
02eee1ec  csel     w6, w6, w8, lo
02eee1f0  b        #0x2eee1f8
02eee1f4  csel     w6, w6, w8, hi
02eee1f8  ubfx     w10, w21, #0x10, #1
02eee1fc  and      w11, w21, #0x3ff
02eee200  cmp      w9, #2
02eee204  orr      w10, w11, w10, lsl #10
02eee208  extr     w10, w10, w21, #0x1f
02eee20c  eor      w5, w10, #0x800
02eee210  b.ne     #0x2eee228
02eee214  cmp      w5, w8
02eee218  tbnz     w19, #4, #0x2eee224
02eee21c  csel     w5, w5, w8, lo
02eee220  b        #0x2eee228
02eee224  csel     w5, w5, w8, hi
02eee228  lsr      x8, x21, #0x20
02eee22c  lsr      w9, w21, #0xd
02eee230  and      w2, w8, #0xfffffff0
02eee234  and      w4, w9, #4
02eee238  mov      w8, #1
02eee23c  ubfx     w3, w21, #0xa, #5
02eee240  bfxil    w4, w21, #0x11, #2
02eee244  bic      w7, w8, w19, lsr #1
02eee248  mov      x1, x0
02eee24c  strh     w20, [sp]
02eee250  bl       #0x2eed910
02eee254  mov      w8, #7
02eee258  mov      w9, #-0x10
02eee25c  ands     w8, w8, w19, lsr #16
02eee260  lsl      w8, w9, w8
02eee264  mov      w9, #0xffff
02eee268  and      w8, w8, #0xffe0
02eee26c  orr      w8, w8, #0xf
02eee270  csel     w8, w9, w8, eq
02eee274  and      w8, w0, w8
02eee278  strh     w8, [x22]
02eee27c  ldp      x20, x19, [sp, #0x40]
02eee280  ldp      x22, x21, [sp, #0x30]
02eee284  ldp      x24, x23, [sp, #0x20]
02eee288  ldp      x29, x30, [sp, #0x10]
02eee28c  add      sp, sp, #0x50
02eee290  ret      
