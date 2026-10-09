; function 0x2eedce8 size 0x1fc 
02eedce8  stp      x29, x30, [sp, #-0x30]!
02eedcec  stp      x22, x21, [sp, #0x10]
02eedcf0  stp      x20, x19, [sp, #0x20]
02eedcf4  mov      x29, sp
02eedcf8  add      x8, x2, x1, lsl #8
02eedcfc  lsl      x9, x5, #0x10
02eedd00  add      x8, x8, x3
02eedd04  and      w10, w7, #0xffff
02eedd08  sxth     x11, w6
02eedd0c  cmp      w10, #7
02eedd10  add      x8, x4, x8, lsl #8
02eedd14  mov      x14, #-0x200000001
02eedd18  add      x9, x8, x9, asr #16
02eedd1c  cset     w8, eq
02eedd20  cmp      x9, #0
02eedd24  asr      x12, x9, #0x10
02eedd28  csel     w8, wzr, w8, ge
02eedd2c  cmp      w10, #3
02eedd30  lsl      x11, x12, x11
02eedd34  cset     w10, ne
02eedd38  cmp      x9, #0
02eedd3c  and      x13, x11, #0xffffffffffffff00
02eedd40  csinc    w10, w10, wzr, lt
02eedd44  cmp      x13, x14
02eedd48  cset     w13, hi
02eedd4c  tst      x11, #-0x200000000
02eedd50  cset     w14, ne
02eedd54  lsr      x12, x12, #0x3f
02eedd58  cmp      x9, #0
02eedd5c  lsl      x13, x13, #0x21
02eedd60  lsl      x14, x14, #0x21
02eedd64  and      x11, x11, #0x1ffffff00
02eedd68  ldrh     w15, [x29, #0x48]
02eedd6c  csel     x13, x13, x14, lt
02eedd70  orr      x11, x11, x12, lsl #34
02eedd74  mov      w12, #0x80
02eedd78  orr      x11, x11, x13
02eedd7c  sxth     w13, w7
02eedd80  cmp      x11, #0
02eedd84  mov      x14, #0x7ffffff80
02eedd88  ccmp     w15, #0, #0, ne
02eedd8c  ldr      w22, [x29, #0x40]
02eedd90  ldr      w21, [x29, #0x38]
02eedd94  csel     x12, x12, xzr, eq
02eedd98  cmp      w13, #4
02eedd9c  csel     w10, wzr, w10, ge
02eedda0  orr      x11, x12, x11
02eedda4  orr      w8, w8, w10
02eedda8  ldrsw    x10, [x29, #0x30]
02eeddac  cmp      w8, #0
02eeddb0  mov      x8, #0x7ffffff00
02eeddb4  csel     x8, x14, x8, ne
02eeddb8  sub      w12, w13, #1
02eeddbc  and      x11, x11, x8
02eeddc0  lsl      x0, x10, #0xa
02eeddc4  sbfx     x8, x11, #7, #0x1c
02eeddc8  cmp      w12, #6
02eeddcc  b.hi     #0x2eede50
02eeddd0  adrp     x13, #0x11dd000
02eeddd4  add      x13, x13, #0x4c2  ; =0x11dd4c2
02eeddd8  lsl      x10, x11, #0x1d
02eedddc  adr      x14, #0x2eeddec
02eedde0  ldrb     w15, [x13, x12]
02eedde4  add      x14, x14, x15, lsl #2
02eedde8  br       x14
02eeddec  cmp      x8, #0
02eeddf0  csel     x8, x8, xzr, lt
02eeddf4  b        #0x2eede50
02eeddf8  cmp      x8, #0
02eeddfc  csel     x8, x8, xzr, gt
02eede00  b        #0x2eede50
02eede04  cbz      x11, #0x2eede3c
02eede08  eor      x8, x8, x10, asr #63
02eede0c  b        #0x2eede50
02eede10  cmp      x9, #0x10, lsl #12
02eede14  csinv    x8, xzr, x8, lo
02eede18  b        #0x2eede50
02eede1c  asr      x9, x9, #0x3f
02eede20  bic      x8, x9, x8
02eede24  b        #0x2eede50
02eede28  cmp      x9, #0x10, lsl #12
02eede2c  csinv    x8, xzr, x8, lt
02eede30  b        #0x2eede50
02eede34  cmp      x9, #0x10, lsl #12
02eede38  b.hs     #0x2eede44
02eede3c  mov      x8, xzr
02eede40  b        #0x2eede50
02eede44  mov      x9, #-0x1000000000
02eede48  cmp      x10, x9
02eede4c  cinv     x8, x8, gt
02eede50  lsl      x1, x8, #7
02eede54  bl       #0x2f19e20  ; <mult64_to_128>
02eede58  mov      x19, x0
02eede5c  lsl      x0, x21, #0x2c
02eede60  mov      x20, x1
02eede64  bl       #0x2f19b30  ; <cast8s_to_16s>
02eede68  mov      x21, x0
02eede6c  mov      x0, x19
02eede70  mov      x1, x20
02eede74  mov      x2, x19
02eede78  mov      x3, x20
02eede7c  bl       #0x2f19b70  ; <add128>
02eede80  mov      x2, x21
02eede84  mov      x3, xzr
02eede88  bl       #0x2f19b70  ; <add128>
02eede8c  mov      w2, #0x28
02eede90  bl       #0x2f19b50  ; <shiftr128>
02eede94  bl       #0x2f19b60  ; <cast16s_to_8s>
02eede98  cbz      w22, #0x2eedebc
02eede9c  tbnz     x0, #0x3f, #0x2eeded0
02eedea0  mov      w8, #0xffffff
02eedea4  cmp      x0, x8
02eedea8  csel     x0, x0, x8, lo
02eedeac  ldp      x20, x19, [sp, #0x20]
02eedeb0  ldp      x22, x21, [sp, #0x10]
02eedeb4  ldp      x29, x30, [sp], #0x30
02eedeb8  ret      
02eedebc  and      w0, w0, #0xffffff
02eedec0  ldp      x20, x19, [sp, #0x20]
02eedec4  ldp      x22, x21, [sp, #0x10]
02eedec8  ldp      x29, x30, [sp], #0x30
02eedecc  ret      
02eeded0  mov      w0, wzr
02eeded4  ldp      x20, x19, [sp, #0x20]
02eeded8  ldp      x22, x21, [sp, #0x10]
02eededc  ldp      x29, x30, [sp], #0x30
02eedee0  ret      
