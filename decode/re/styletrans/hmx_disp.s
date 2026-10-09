; function 0x2eee9a4 size 0x180 
02eee9a4  sub      sp, sp, #0x90
02eee9a8  stp      x29, x30, [sp, #0x30]
02eee9ac  stp      x28, x27, [sp, #0x40]
02eee9b0  stp      x26, x25, [sp, #0x50]
02eee9b4  stp      x24, x23, [sp, #0x60]
02eee9b8  stp      x22, x21, [sp, #0x70]
02eee9bc  stp      x20, x19, [sp, #0x80]
02eee9c0  add      x29, sp, #0x30
02eee9c4  ldur     x8, [x0, #0x54]
02eee9c8  nop      
02eee9cc  adr      x9, #0x2eee114
02eee9d0  nop      
02eee9d4  adr      x10, #0x2eee10c
02eee9d8  mov      x22, x0
02eee9dc  tst      x8, #0x800000
02eee9e0  ldrb     w11, [x0, #0xd2]
02eee9e4  csel     x24, x10, x9, eq
02eee9e8  cbz      w11, #0x2eeead0
02eee9ec  ubfiz    x9, x2, #2, #0x20
02eee9f0  adrp     x10, #0x316d000
02eee9f4  add      x10, x10, #0xa38  ; =0x316da38
02eee9f8  ldrb     w19, [x22, #0xd0]
02eee9fc  ldr      w14, [x10, x9]
02eeea00  cbz      w19, #0x2eeeac0
02eeea04  ubfx     w21, w8, #0x18, #1
02eeea08  adrp     x8, #0x316d000
02eeea0c  add      x8, x8, #0xa54  ; =0x316da54
02eeea10  adrp     x10, #0x316d000
02eeea14  add      x10, x10, #0x9f8  ; =0x316d9f8
02eeea18  mov      w28, w4
02eeea1c  ldr      w25, [x8, x9]
02eeea20  ubfx     x8, x1, #0xc, #2
02eeea24  ldr      x23, [x10, w2, uxtw #3]
02eeea28  mov      w20, w3
02eeea2c  and      x26, x1, #0xffffffff
02eeea30  add      x8, x22, x8, lsl #8
02eeea34  stur     wzr, [x29, #-4]
02eeea38  stur     w11, [x29, #-0x14]
02eeea3c  stp      x1, x8, [sp, #8]
02eeea40  str      w14, [sp, #0x18]
02eeea44  ldur     w8, [x29, #-4]
02eeea48  mov      w27, wzr
02eeea4c  ldr      x11, [sp, #0x10]
02eeea50  add      x8, x11, w8, uxtw #3
02eeea54  mov      w11, #0x8110
02eeea58  movk     w11, #0x28, lsl #16
02eeea5c  ldr      x8, [x8, x11]
02eeea60  stur     x8, [x29, #-0x10]
02eeea64  mov      x0, x22
02eeea68  mov      w1, w27
02eeea6c  ldur     w2, [x29, #-4]
02eeea70  mov      w3, w21
02eeea74  ldur     x4, [x29, #-0x10]
02eeea78  mov      w5, w20
02eeea7c  mov      w6, w28
02eeea80  mov      x7, x26
02eeea84  str      x24, [sp]
02eeea88  blr      x23
02eeea8c  add      w27, w27, w25
02eeea90  cmp      w27, w19
02eeea94  b.lo     #0x2eeea64
02eeea98  ldr      w14, [sp, #0x18]
02eeea9c  ldur     w8, [x29, #-4]
02eeeaa0  ldur     w11, [x29, #-0x14]
02eeeaa4  add      w8, w8, w14
02eeeaa8  cmp      w8, w11
02eeeaac  stur     w8, [x29, #-4]
02eeeab0  b.lo     #0x2eeea44
02eeeab4  ldur     x8, [x22, #0x54]
02eeeab8  ldr      x1, [sp, #8]
02eeeabc  b        #0x2eeead0
02eeeac0  mov      w9, wzr
02eeeac4  add      w9, w9, w14
02eeeac8  cmp      w9, w11
02eeeacc  b.lo     #0x2eeeac4
02eeead0  ubfiz    w9, w1, #4, #1
02eeead4  tbnz     w8, #8, #0x2eeeaf0
02eeead8  ldrh     w8, [x22, #0x4a]
02eeeadc  and      w8, w8, #0xffffffef
02eeeae0  orr      w8, w8, w9
02eeeae4  eor      w8, w8, #0x10
02eeeae8  strh     w8, [x22, #0x4a]
02eeeaec  b        #0x2eeeb04
02eeeaf0  ldrh     w8, [x22, #0x4c]
02eeeaf4  and      w8, w8, #0xffffffef
02eeeaf8  orr      w8, w8, w9
02eeeafc  eor      w8, w8, #0x10
02eeeb00  strh     w8, [x22, #0x4c]
02eeeb04  ldp      x20, x19, [sp, #0x80]
02eeeb08  ldp      x22, x21, [sp, #0x70]
02eeeb0c  ldp      x24, x23, [sp, #0x60]
02eeeb10  ldp      x26, x25, [sp, #0x50]
02eeeb14  ldp      x28, x27, [sp, #0x40]
02eeeb18  ldp      x29, x30, [sp, #0x30]
02eeeb1c  add      sp, sp, #0x90
02eeeb20  ret      
