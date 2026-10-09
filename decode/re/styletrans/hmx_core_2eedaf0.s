; function 0x2eedaf0 size 0x1f8 
02eedaf0  stp      x29, x30, [sp, #-0x40]!
02eedaf4  str      x23, [sp, #0x10]
02eedaf8  stp      x22, x21, [sp, #0x20]
02eedafc  stp      x20, x19, [sp, #0x30]
02eedb00  mov      x29, sp
02eedb04  and      w8, w5, #0xffff
02eedb08  add      x9, x1, x2, asr #8
02eedb0c  sxth     x11, w4
02eedb10  cmp      w8, #7
02eedb14  add      x9, x9, w3, sxtw
02eedb18  cset     w10, eq
02eedb1c  cmp      x9, #0
02eedb20  mov      x13, #-0x200000001
02eedb24  csel     w10, wzr, w10, ge
02eedb28  cmp      w8, #3
02eedb2c  lsl      x11, x9, x11
02eedb30  cset     w8, ne
02eedb34  cmp      x9, #0
02eedb38  and      x12, x11, #0xffffffffffffff00
02eedb3c  csinc    w8, w8, wzr, lt
02eedb40  cmp      x12, x13
02eedb44  cset     w12, hi
02eedb48  tst      x11, #-0x200000000
02eedb4c  cset     w13, ne
02eedb50  lsr      x15, x9, #0x3f
02eedb54  cmp      x9, #0
02eedb58  lsl      x12, x12, #0x21
02eedb5c  lsl      x13, x13, #0x21
02eedb60  and      x11, x11, #0x1ffffff00
02eedb64  ldrh     w14, [x29, #0x48]
02eedb68  csel     x12, x12, x13, lt
02eedb6c  orr      x11, x11, x15, lsl #34
02eedb70  sxth     w13, w5
02eedb74  orr      x11, x11, x12
02eedb78  mov      w12, #0x80
02eedb7c  cmp      x11, #0
02eedb80  mov      w19, w7
02eedb84  ccmp     w14, #0, #0, ne
02eedb88  ldr      w23, [x29, #0x40]
02eedb8c  sbfiz    x0, x6, #0x14, #0x10
02eedb90  csel     x12, x12, xzr, eq
02eedb94  cmp      w13, #4
02eedb98  csel     w8, wzr, w8, ge
02eedb9c  orr      x11, x12, x11
02eedba0  orr      w8, w10, w8
02eedba4  mov      x10, #0x7ffffff80
02eedba8  cmp      w8, #0
02eedbac  mov      x8, #0x7ffffff00
02eedbb0  csel     x8, x10, x8, ne
02eedbb4  sub      w12, w13, #1
02eedbb8  and      x11, x11, x8
02eedbbc  cmp      w12, #6
02eedbc0  sbfx     x8, x11, #7, #0x1c
02eedbc4  b.hi     #0x2eedc44
02eedbc8  adrp     x13, #0x11dd000
02eedbcc  add      x13, x13, #0x4bb  ; =0x11dd4bb
02eedbd0  lsl      x10, x11, #0x1d
02eedbd4  adr      x14, #0x2eedbe4
02eedbd8  ldrb     w15, [x13, x12]
02eedbdc  add      x14, x14, x15, lsl #2
02eedbe0  br       x14
02eedbe4  cmp      x8, #0
02eedbe8  csel     x8, x8, xzr, lt
02eedbec  b        #0x2eedc44
02eedbf0  cmp      x8, #0
02eedbf4  csel     x8, x8, xzr, gt
02eedbf8  b        #0x2eedc44
02eedbfc  cbz      x11, #0x2eedc40
02eedc00  eor      x8, x8, x10, asr #63
02eedc04  b        #0x2eedc44
02eedc08  cmp      x9, #0
02eedc0c  csinv    x8, xzr, x8, eq
02eedc10  b        #0x2eedc44
02eedc14  asr      x9, x9, #0x3f
02eedc18  bic      x8, x9, x8
02eedc1c  b        #0x2eedc44
02eedc20  cmp      x9, #0
02eedc24  csinv    x8, xzr, x8, le
02eedc28  b        #0x2eedc44
02eedc2c  cbz      x9, #0x2eedc40
02eedc30  mov      x9, #-0x1000000000
02eedc34  cmp      x10, x9
02eedc38  cinv     x8, x8, gt
02eedc3c  b        #0x2eedc44
02eedc40  mov      x8, xzr
02eedc44  lsl      x1, x8, #7
02eedc48  bl       #0x2f19e20  ; <mult64_to_128>
02eedc4c  mov      x20, x0
02eedc50  sbfiz    x0, x19, #0x2f, #0x10
02eedc54  mov      x21, x1
02eedc58  bl       #0x2f19b30  ; <cast8s_to_16s>
02eedc5c  mov      x19, x0
02eedc60  mov      x22, x1
02eedc64  mov      x0, x20
02eedc68  mov      x1, x21
02eedc6c  mov      x2, x20
02eedc70  mov      x3, x21
02eedc74  bl       #0x2f19b70  ; <add128>
02eedc78  mov      x2, x19
02eedc7c  mov      x3, x22
02eedc80  bl       #0x2f19b70  ; <add128>
02eedc84  mov      w2, #0x28
02eedc88  bl       #0x2f19b50  ; <shiftr128>
02eedc8c  bl       #0x2f19b60  ; <cast16s_to_8s>
02eedc90  cbz      w23, #0x2eedcb8
02eedc94  tbnz     x0, #0x3f, #0x2eedcd0
02eedc98  mov      w8, #0xffffff
02eedc9c  cmp      x0, x8
02eedca0  csel     x0, x0, x8, lo
02eedca4  ldp      x20, x19, [sp, #0x30]
02eedca8  ldp      x22, x21, [sp, #0x20]
02eedcac  ldr      x23, [sp, #0x10]
02eedcb0  ldp      x29, x30, [sp], #0x40
02eedcb4  ret      
02eedcb8  and      w0, w0, #0xffffff
02eedcbc  ldp      x20, x19, [sp, #0x30]
02eedcc0  ldp      x22, x21, [sp, #0x20]
02eedcc4  ldr      x23, [sp, #0x10]
02eedcc8  ldp      x29, x30, [sp], #0x40
02eedccc  ret      
02eedcd0  mov      w0, wzr
02eedcd4  ldp      x20, x19, [sp, #0x30]
02eedcd8  ldp      x22, x21, [sp, #0x20]
02eedcdc  ldr      x23, [sp, #0x10]
02eedce0  ldp      x29, x30, [sp], #0x40
02eedce4  ret      
