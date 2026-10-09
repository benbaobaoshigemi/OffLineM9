; function 0x2eee578 size 0x3ac 
02eee578  sub      sp, sp, #0xc0
02eee57c  stp      x29, x30, [sp, #0x60]
02eee580  stp      x28, x27, [sp, #0x70]
02eee584  stp      x26, x25, [sp, #0x80]
02eee588  stp      x24, x23, [sp, #0x90]
02eee58c  stp      x22, x21, [sp, #0xa0]
02eee590  stp      x20, x19, [sp, #0xb0]
02eee594  add      x29, sp, #0x60
02eee598  mov      w21, #0x1200
02eee59c  mov      w9, #0x48
02eee5a0  mov      x19, x0
02eee5a4  mov      w11, w2
02eee5a8  umaddl   x8, w1, w21, x0
02eee5ac  mov      x23, x4
02eee5b0  ldr      x22, [x29, #0x60]
02eee5b4  add      w25, w3, #2
02eee5b8  umaddl   x8, w2, w9, x8
02eee5bc  add      w9, w1, #1
02eee5c0  mov      w10, w1
02eee5c4  mov      w28, w2
02eee5c8  stur     x7, [x29, #-0x28]
02eee5cc  stur     x9, [x29, #-8]
02eee5d0  mov      w9, #1
02eee5d4  ldrh     w8, [x8, #0x148]
02eee5d8  lsl      w20, w9, w3
02eee5dc  stur     w6, [x29, #-0x1c]
02eee5e0  tst      w20, w8
02eee5e4  b.eq     #0x2eee5f0
02eee5e8  ldr      w8, [x19, #0xc4]
02eee5ec  b        #0x2eee5f4
02eee5f0  mov      w8, wzr
02eee5f4  add      x27, x19, #0x108
02eee5f8  add      x9, x28, x28, lsl #3
02eee5fc  stur     x10, [x29, #-0x18]
02eee600  nop      
02eee604  umaddl   x10, w10, w21, x27
02eee608  lsl      x24, x9, #3
02eee60c  mov      w26, w3
02eee610  add      x9, x10, x24
02eee614  mov      x0, x19
02eee618  stur     w11, [x29, #-0x20]
02eee61c  ldr      w1, [x9, w25, uxtw #2]
02eee620  ldr      w2, [x9, w3, uxtw #2]
02eee624  add      w9, w11, #1
02eee628  mov      w3, w8
02eee62c  stur     x9, [x29, #-0x10]
02eee630  blr      x22
02eee634  ldur     x8, [x29, #-8]
02eee638  str      x0, [sp, #0x30]
02eee63c  nop      
02eee640  umaddl   x8, w8, w21, x27
02eee644  add      x8, x8, x24
02eee648  ldrh     w8, [x8, #0x40]
02eee64c  tst      w20, w8
02eee650  b.eq     #0x2eee65c
02eee654  ldr      w3, [x19, #0xc4]
02eee658  b        #0x2eee660
02eee65c  mov      w3, wzr
02eee660  ldur     x8, [x29, #-8]
02eee664  mov      w21, #0x1200
02eee668  mov      w24, #0x48
02eee66c  mov      x0, x19
02eee670  umaddl   x8, w8, w21, x27
02eee674  umaddl   x8, w28, w24, x8
02eee678  ldr      w1, [x8, x25, lsl #2]
02eee67c  ldr      w2, [x8, x26, lsl #2]
02eee680  blr      x22
02eee684  ldp      x9, x10, [x29, #-0x18]
02eee688  str      x0, [sp, #0x28]
02eee68c  nop      
02eee690  umaddl   x8, w9, w21, x27
02eee694  umaddl   x8, w10, w24, x8
02eee698  ldrh     w8, [x8, #0x40]
02eee69c  tst      w20, w8
02eee6a0  b.eq     #0x2eee6ac
02eee6a4  ldr      w3, [x19, #0xc4]
02eee6a8  b        #0x2eee6b0
02eee6ac  mov      w3, wzr
02eee6b0  ldur     x8, [x29, #-0x10]
02eee6b4  mov      w21, #0x1200
02eee6b8  add      x24, x19, #0x108
02eee6bc  mov      x0, x19
02eee6c0  umaddl   x9, w9, w21, x24
02eee6c4  add      x8, x8, x8, lsl #3
02eee6c8  lsl      x27, x8, #3
02eee6cc  add      x8, x9, x27
02eee6d0  ldr      w1, [x8, x25, lsl #2]
02eee6d4  ldr      w2, [x8, x26, lsl #2]
02eee6d8  blr      x22
02eee6dc  ldur     x8, [x29, #-8]
02eee6e0  nop      
02eee6e4  umaddl   x8, w8, w21, x24
02eee6e8  add      x8, x8, x27
02eee6ec  ldrh     w8, [x8, #0x40]
02eee6f0  tst      w20, w8
02eee6f4  b.eq     #0x2eee704
02eee6f8  mov      x20, x0
02eee6fc  ldr      w3, [x19, #0xc4]
02eee700  b        #0x2eee70c
02eee704  mov      x20, x0
02eee708  mov      w3, wzr
02eee70c  ldur     x9, [x29, #-8]
02eee710  mov      w8, #0x1200
02eee714  mov      w28, #0x48
02eee718  mov      x0, x19
02eee71c  ldur     x27, [x29, #-0x28]
02eee720  nop      
02eee724  umaddl   x8, w9, w8, x19
02eee728  ldur     x9, [x29, #-0x10]
02eee72c  nop      
02eee730  umaddl   x8, w9, w28, x8
02eee734  add      x8, x8, #0x108
02eee738  ldr      w1, [x8, x25, lsl #2]
02eee73c  ldr      w2, [x8, x26, lsl #2]
02eee740  blr      x22
02eee744  ldur     w15, [x29, #-0x1c]
02eee748  ubfx     w8, w27, #9, #2
02eee74c  cmp      w15, #0
02eee750  ccmp     w8, #2, #0, eq
02eee754  cset     w22, ne
02eee758  cbnz     w15, #0x2eee78c
02eee75c  ldp      x2, x4, [sp, #0x28]
02eee760  mov      x3, x20
02eee764  cmp      w8, #3
02eee768  ldur     w21, [x29, #-0x20]
02eee76c  ldur     x14, [x29, #-0x18]
02eee770  b.eq     #0x2eee79c
02eee774  cmp      w8, #2
02eee778  csel     x0, x0, x2, ne
02eee77c  csel     x3, x3, x4, ne
02eee780  mov      x2, xzr
02eee784  mov      x4, xzr
02eee788  b        #0x2eee79c
02eee78c  ldp      x2, x4, [sp, #0x28]
02eee790  mov      x3, x20
02eee794  ldur     w21, [x29, #-0x20]
02eee798  ldur     x14, [x29, #-0x18]
02eee79c  ldp      x12, x13, [x29, #-0x10]
02eee7a0  ubfx     x8, x27, #0xc, #2
02eee7a4  mov      w9, #0x8110
02eee7a8  movk     w9, #0x28, lsl #16
02eee7ac  add      x10, x19, #0x168, lsl #12
02eee7b0  mov      w11, #0x1200
02eee7b4  add      x8, x19, x8, lsl #8
02eee7b8  add      x10, x10, #0x110
02eee7bc  add      x8, x8, x12, lsl #3
02eee7c0  add      w12, w22, w21
02eee7c4  umaddl   x13, w13, w11, x10
02eee7c8  ldr      w8, [x8, x9]
02eee7cc  nop      
02eee7d0  umaddl   x10, w14, w11, x10
02eee7d4  umaddl   x20, w12, w28, x13
02eee7d8  ubfx     w25, w27, #2, #2
02eee7dc  umaddl   x24, w12, w28, x10
02eee7e0  ubfiz    w10, w23, #1, #0xa
02eee7e4  cmp      w25, #2
02eee7e8  ubfx     w9, w8, #0x10, #1
02eee7ec  and      w12, w8, #0x3ff
02eee7f0  ldrh     w11, [x20]
02eee7f4  lsr      w8, w8, #0xb
02eee7f8  orr      w12, w12, w9, lsl #10
02eee7fc  ldrh     w13, [x24]
02eee800  and      w9, w8, #0xff000
02eee804  orr      w8, w10, w12, lsl #11
02eee808  and      w10, w11, #0xff0
02eee80c  bfxil    w8, w23, #0x1f, #1
02eee810  lsl      w10, w10, #0xa
02eee814  bfxil    w9, w23, #0x13, #0xc
02eee818  eor      w8, w8, #0x200000
02eee81c  bfi      w10, w13, #2, #0xc
02eee820  b.eq     #0x2eee844
02eee824  cmp      w25, #1
02eee828  b.ne     #0x2eee864
02eee82c  lsl      w9, w9, #2
02eee830  cmp      w9, w10
02eee834  tbnz     w27, #4, #0x2eee854
02eee838  csel     w9, w9, w10, lo
02eee83c  lsr      w9, w9, #2
02eee840  b        #0x2eee864
02eee844  cmp      w8, w10
02eee848  tbnz     w27, #4, #0x2eee860
02eee84c  csel     w8, w8, w10, lo
02eee850  b        #0x2eee864
02eee854  csel     w9, w9, w10, hi
02eee858  lsr      w9, w9, #2
02eee85c  b        #0x2eee864
02eee860  csel     w8, w8, w10, hi
02eee864  lsr      x10, x23, #0x10
02eee868  lsr      w11, w23, #0xd
02eee86c  and      x5, x10, #0xffffffff0000
02eee870  and      w7, w11, #4
02eee874  mov      w10, #1
02eee878  ubfx     w6, w23, #0xa, #5
02eee87c  bfxil    w7, w23, #0x11, #2
02eee880  bic      w10, w10, w27, lsr #1
02eee884  mov      x1, x0
02eee888  strh     w15, [sp, #0x18]
02eee88c  str      w9, [sp, #8]
02eee890  str      w10, [sp, #0x10]
02eee894  str      w8, [sp]
02eee898  bl       #0x2eedce8
02eee89c  mov      w8, #7
02eee8a0  mov      w9, #-0x10
02eee8a4  ands     w8, w8, w27, lsr #16
02eee8a8  lsr      w10, w0, #0xc
02eee8ac  lsl      w8, w9, w8
02eee8b0  and      w9, w0, #0xfff0
02eee8b4  orr      w8, w8, #0xf
02eee8b8  csinv    w8, w8, wzr, ne
02eee8bc  and      w8, w8, w9, lsr #4
02eee8c0  and      w9, w10, #0xff0
02eee8c4  strh     w8, [x24]
02eee8c8  strh     w9, [x20]
02eee8cc  cbnz     w25, #0x2eee904
02eee8d0  eor      w8, w22, #1
02eee8d4  mov      w9, #0x48
02eee8d8  add      w8, w8, w21
02eee8dc  ldur     x12, [x29, #-8]
02eee8e0  add      x10, x19, #0x168, lsl #12
02eee8e4  mov      w11, #0x1200
02eee8e8  umull    x8, w8, w9
02eee8ec  ldur     x9, [x29, #-0x18]
02eee8f0  add      x10, x10, #0x110
02eee8f4  umaddl   x9, w9, w11, x10
02eee8f8  umaddl   x10, w12, w11, x10
02eee8fc  strh     wzr, [x9, x8]
02eee900  strh     wzr, [x10, x8]
02eee904  ldp      x20, x19, [sp, #0xb0]
02eee908  ldp      x22, x21, [sp, #0xa0]
02eee90c  ldp      x24, x23, [sp, #0x90]
02eee910  ldp      x26, x25, [sp, #0x80]
02eee914  ldp      x28, x27, [sp, #0x70]
02eee918  ldp      x29, x30, [sp, #0x60]
02eee91c  add      sp, sp, #0xc0
02eee920  ret      
