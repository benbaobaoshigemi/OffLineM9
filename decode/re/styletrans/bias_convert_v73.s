; function 0x1a47b98 size 0x2a4 
01a47b98  sub      sp, sp, #0xd0
01a47b9c  str      d10, [sp, #0x50]
01a47ba0  stp      d9, d8, [sp, #0x60]
01a47ba4  stp      x29, x30, [sp, #0x70]
01a47ba8  stp      x28, x27, [sp, #0x80]
01a47bac  stp      x26, x25, [sp, #0x90]
01a47bb0  stp      x24, x23, [sp, #0xa0]
01a47bb4  stp      x22, x21, [sp, #0xb0]
01a47bb8  stp      x20, x19, [sp, #0xc0]
01a47bbc  movi     v0.2d, #0000000000000000
01a47bc0  mov      x22, x3
01a47bc4  mov      x20, x2
01a47bc8  mov      x21, x1
01a47bcc  mov      x19, x0
01a47bd0  mov      x23, xzr
01a47bd4  mov      x24, sp
01a47bd8  stp      q0, q0, [sp]
01a47bdc  ldr      x8, [x21]
01a47be0  mov      x0, x21
01a47be4  mov      x1, x23
01a47be8  ldr      x8, [x8, #0x28]
01a47bec  blr      x8
01a47bf0  str      x0, [x24, x23, lsl #3]
01a47bf4  add      x23, x23, #1
01a47bf8  cmp      x23, #4
01a47bfc  b.ne     #0x1a47bdc
01a47c00  ldr      s0, [x22, #0xc]
01a47c04  mov      w10, #1
01a47c08  fmov     s2, #1.00000000
01a47c0c  ldr      x22, [sp, #0x18]
01a47c10  ldr      x11, [x19, #8]
01a47c14  mov      x9, xzr
01a47c18  scvtf    s0, s0
01a47c1c  ldr      x12, [x20, #0x20]
01a47c20  mov      x8, xzr
01a47c24  fcvtzs   w24, s0
01a47c28  ldr      s0, [x11, #8]
01a47c2c  add      x11, x12, #0x18
01a47c30  add      x12, sp, #0x30
01a47c34  stp      xzr, xzr, [sp, #0x38]
01a47c38  lsl      w10, w10, w24
01a47c3c  cmp      w24, #0
01a47c40  str      xzr, [sp, #0x48]
01a47c44  scvtf    s1, w10
01a47c48  add      x10, x22, #0x1f
01a47c4c  fcsel    s1, s1, s2, gt
01a47c50  add      x13, x12, x9
01a47c54  ldr      x14, [x11, x9]
01a47c58  add      x9, x9, #8
01a47c5c  cmp      x9, #0x18
01a47c60  ldr      x13, [x13, #8]
01a47c64  nop      
01a47c68  madd     x8, x14, x8, x13
01a47c6c  b.ne     #0x1a47c50
01a47c70  and      x23, x10, #0xffffffffffffffe0
01a47c74  cbz      x22, #0x1a47d94
01a47c78  adrp     x9, #0x3171000
01a47c7c  ldr      x10, [x20, #0x28]
01a47c80  fmul     s8, s1, s0
01a47c84  add      x26, sp, #0x30
01a47c88  movi     v9.2s, #0x80, lsl #24
01a47c8c  ldr      w27, [x10, x8, lsl #2]
01a47c90  ldr      w9, [x9, #0x7b0]  ; =0x31717b0
01a47c94  mov      x25, xzr
01a47c98  add      x29, x26, #8
01a47c9c  sub      w28, w9, #1
01a47ca0  fmov     s10, s8
01a47ca4  cmp      w27, w28
01a47ca8  b.eq     #0x1a47cf0
01a47cac  ldr      x10, [x20, #0x20]
01a47cb0  mov      x9, xzr
01a47cb4  mov      x8, xzr
01a47cb8  stp      xzr, xzr, [x29]
01a47cbc  str      x25, [sp, #0x48]
01a47cc0  add      x10, x10, #0x18
01a47cc4  add      x11, x26, x9
01a47cc8  ldr      x12, [x10, x9]
01a47ccc  add      x9, x9, #8  ; =0x3171008
01a47cd0  cmp      x9, #0x18
01a47cd4  ldr      x11, [x11, #8]
01a47cd8  nop      
01a47cdc  madd     x8, x12, x8, x11
01a47ce0  b.ne     #0x1a47cc4
01a47ce4  ldr      x9, [x20, #0x28]
01a47ce8  ldr      s0, [x9, x8, lsl #2]
01a47cec  fmul     s10, s0, s8
01a47cf0  ldr      x8, [x21]
01a47cf4  add      x2, sp, #0x30
01a47cf8  add      x3, sp, #0x20
01a47cfc  mov      x0, x21
01a47d00  mov      w1, #4
01a47d04  stp      xzr, xzr, [sp, #0x30]
01a47d08  ldr      x8, [x8, #0x50]
01a47d0c  stp      xzr, x25, [sp, #0x40]
01a47d10  stp      xzr, xzr, [sp, #0x20]
01a47d14  blr      x8
01a47d18  mov      x1, x0
01a47d1c  ldp      x8, x0, [sp, #0x20]
01a47d20  ldr      x8, [x8, #8]
01a47d24  blr      x8
01a47d28  fdiv     s0, s0, s10
01a47d2c  fmov     s1, #0.50000000
01a47d30  mvni     v2.4s, #0x80, lsl #24
01a47d34  cmp      w24, #0x10
01a47d38  ldr      x11, [x19, #0x20]
01a47d3c  mov      x9, xzr
01a47d40  mov      x8, xzr
01a47d44  stp      xzr, xzr, [x29]
01a47d48  str      x25, [sp, #0x48]
01a47d4c  add      x11, x11, #0x18
01a47d50  bif      v1.16b, v0.16b, v2.16b
01a47d54  fcsel    s1, s1, s9, eq
01a47d58  fadd     s0, s0, s1
01a47d5c  fcvtzs   x10, s0
01a47d60  add      x12, x26, x9
01a47d64  ldr      x13, [x11, x9]
01a47d68  add      x9, x9, #8  ; =0x3171008
01a47d6c  cmp      x9, #0x18
01a47d70  ldr      x12, [x12, #8]
01a47d74  nop      
01a47d78  madd     x8, x13, x8, x12
01a47d7c  b.ne     #0x1a47d60
01a47d80  add      x25, x25, #1
01a47d84  ldr      x9, [x19, #0x28]
01a47d88  cmp      x25, x22
01a47d8c  str      w10, [x9, x8, lsl #2]
01a47d90  b.ne     #0x1a47ca0
01a47d94  cmp      x22, x23
01a47d98  b.hs     #0x1a47e10
01a47d9c  ldp      x12, x10, [x19, #0x20]
01a47da0  add      x8, sp, #0x30
01a47da4  movi     v0.2s, #0xcf, lsl #24
01a47da8  add      x9, x8, #8
01a47dac  ldr      x11, [x19, #8]
01a47db0  mov      w13, #0x4effffff
01a47db4  add      x12, x12, #0x18
01a47db8  mov      x15, xzr
01a47dbc  mov      x14, xzr
01a47dc0  stp      xzr, xzr, [x9]
01a47dc4  str      x22, [sp, #0x48]
01a47dc8  add      x16, x8, x15
01a47dcc  ldr      x17, [x12, x15]
01a47dd0  add      x15, x15, #8
01a47dd4  cmp      x15, #0x18
01a47dd8  ldr      x16, [x16, #8]
01a47ddc  nop      
01a47de0  madd     x14, x17, x14, x16
01a47de4  b.ne     #0x1a47dc8
01a47de8  ldr      s1, [x11, #4]
01a47dec  fmov     s2, w13
01a47df0  add      x22, x22, #1
01a47df4  cmp      x22, x23
01a47df8  scvtf    s1, s1
01a47dfc  fminnm   s1, s1, s2
01a47e00  fmaxnm   s1, s1, s0
01a47e04  fcvtzs   w15, s1
01a47e08  str      w15, [x10, x14, lsl #2]
01a47e0c  b.ne     #0x1a47db8
01a47e10  ldp      x20, x19, [sp, #0xc0]
01a47e14  mov      w0, wzr
01a47e18  ldp      x22, x21, [sp, #0xb0]
01a47e1c  ldp      x24, x23, [sp, #0xa0]
01a47e20  ldp      x26, x25, [sp, #0x90]
01a47e24  ldp      x28, x27, [sp, #0x80]
01a47e28  ldp      x29, x30, [sp, #0x70]
01a47e2c  ldp      d9, d8, [sp, #0x60]
01a47e30  ldr      d10, [sp, #0x50]
01a47e34  add      sp, sp, #0xd0
01a47e38  ret      
