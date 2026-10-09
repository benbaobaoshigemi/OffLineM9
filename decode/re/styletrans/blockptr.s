; function 0x17d0334 size 0x170 _ZN6Tensor25deserialize_block_pointerERN4hnnx6DeserzE
017d0334  stp      x30, x21, [sp, #-0x20]!
017d0338  stp      x20, x19, [sp, #0x10]
017d033c  mov      x19, x0
017d0340  ldr      x0, [x0, #0x60]
017d0344  ldr      x8, [x19, #0x68]
017d0348  cmp      x0, x8
017d034c  b.lo     #0x17d0360
017d0350  ldr      x8, [x19]
017d0354  mov      x0, x19
017d0358  ldr      x8, [x8, #0x10]
017d035c  blr      x8
017d0360  ldr      w8, [x19, #0xa4]
017d0364  ldr      w21, [x0], #4
017d0368  str      x0, [x19, #0x60]
017d036c  cbz      w8, #0x17d039c
017d0370  lsr      w8, w21, #0x1e
017d0374  cbnz     w8, #0x17d03dc
017d0378  cbz      w21, #0x17d03cc
017d037c  lsr      w20, w21, #0x10
017d0380  ubfiz    w21, w21, #6, #0x10
017d0384  ldr      x0, [x19, #0x10]
017d0388  mov      w1, w20
017d038c  ldp      x20, x19, [sp, #0x10]
017d0390  mov      w2, w21
017d0394  ldp      x30, x21, [sp], #0x20
017d0398  b        #0x2f17470  ; <_ZNK2fa16RuntimeAllocator19map_block_referenceEjj>
017d039c  tbnz     w21, #1, #0x17d041c
017d03a0  ldr      x8, [x19, #0x68]
017d03a4  cmp      x0, x8
017d03a8  b.lo     #0x17d03bc
017d03ac  ldr      x8, [x19]
017d03b0  mov      x0, x19
017d03b4  ldr      x8, [x8, #0x10]
017d03b8  blr      x8
017d03bc  add      x8, x0, #4
017d03c0  cmp      w21, #1
017d03c4  str      x8, [x19, #0x60]
017d03c8  b.ne     #0x17d0480
017d03cc  ldp      x20, x19, [sp, #0x10]
017d03d0  mov      x0, xzr
017d03d4  ldp      x30, x21, [sp], #0x20
017d03d8  ret      
017d03dc  ldr      x8, [x19, #0x68]
017d03e0  and      w20, w21, #0xfffffff
017d03e4  cmp      x0, x8
017d03e8  b.lo     #0x17d03fc
017d03ec  ldr      x8, [x19]
017d03f0  mov      x0, x19
017d03f4  ldr      x8, [x8, #0x10]
017d03f8  blr      x8
017d03fc  ldr      w21, [x0], #4
017d0400  str      x0, [x19, #0x60]
017d0404  ldr      x0, [x19, #0x10]
017d0408  mov      w1, w20
017d040c  ldp      x20, x19, [sp, #0x10]
017d0410  mov      w2, w21
017d0414  ldp      x30, x21, [sp], #0x20
017d0418  b        #0x2f17470  ; <_ZNK2fa16RuntimeAllocator19map_block_referenceEjj>
017d041c  ldr      x8, [x19, #0x68]
017d0420  cmp      x0, x8
017d0424  b.lo     #0x17d043c
017d0428  ldr      x8, [x19]
017d042c  mov      x0, x19
017d0430  ldr      x8, [x8, #0x10]
017d0434  blr      x8
017d0438  ldr      x8, [x19, #0x68]
017d043c  lsr      w20, w21, #3
017d0440  ldr      w21, [x0], #4
017d0444  cmp      x0, x8
017d0448  str      x0, [x19, #0x60]
017d044c  b.lo     #0x17d0460
017d0450  ldr      x8, [x19]
017d0454  mov      x0, x19
017d0458  ldr      x8, [x8, #0x10]
017d045c  blr      x8
017d0460  add      x8, x0, #4
017d0464  str      x8, [x19, #0x60]
017d0468  ldr      x0, [x19, #0x10]
017d046c  mov      w1, w20
017d0470  ldp      x20, x19, [sp, #0x10]
017d0474  mov      w2, w21
017d0478  ldp      x30, x21, [sp], #0x20
017d047c  b        #0x2f17470  ; <_ZNK2fa16RuntimeAllocator19map_block_referenceEjj>
017d0480  lsl      w8, w21, #6
017d0484  lsr      w20, w21, #0x16
017d0488  and      w21, w8, #0xfffff00
017d048c  ldr      x0, [x19, #0x10]
017d0490  mov      w1, w20
017d0494  ldp      x20, x19, [sp, #0x10]
017d0498  mov      w2, w21
017d049c  ldp      x30, x21, [sp], #0x20
017d04a0  b        #0x2f17470  ; <_ZNK2fa16RuntimeAllocator19map_block_referenceEjj>
; function 0x17d04a4 size 0x330 _ZN6Tensor30deserialize_blocktable_genericERN4hnnx6DeserzEPPPvj
017d04a4  sub      sp, sp, #0x60
017d04a8  stp      x30, x25, [sp, #0x20]
017d04ac  stp      x24, x23, [sp, #0x30]
017d04b0  stp      x22, x21, [sp, #0x40]
017d04b4  stp      x20, x19, [sp, #0x50]
017d04b8  mov      x20, x0
017d04bc  ldr      w8, [x0, #0xa4]
017d04c0  mov      x19, x1
017d04c4  cbz      w8, #0x17d056c
017d04c8  ldp      x0, x8, [x20, #0x60]
017d04cc  cmp      x0, x8
017d04d0  b.lo     #0x17d04e4
017d04d4  ldr      x8, [x20]
017d04d8  mov      x0, x20
017d04dc  ldr      x8, [x8, #0x10]
017d04e0  blr      x8
017d04e4  ldr      w21, [x0], #4
017d04e8  mov      w8, #0x2000
017d04ec  str      x0, [x20, #0x60]
017d04f0  movk     w8, #0x800, lsl #16
017d04f4  ubfx     w24, w21, #0xe, #0xe
017d04f8  tst      w21, w8
017d04fc  b.eq     #0x17d055c
017d0500  mov      w22, #0x3fff
017d0504  bics     wzr, w22, w21
017d0508  b.ne     #0x17d0530
017d050c  ldr      x8, [x20, #0x68]
017d0510  cmp      x0, x8
017d0514  b.lo     #0x17d0528
017d0518  ldr      x8, [x20]
017d051c  mov      x0, x20
017d0520  ldr      x8, [x8, #0x10]
017d0524  blr      x8
017d0528  add      x0, x0, #4
017d052c  str      x0, [x20, #0x60]
017d0530  cmp      w24, w22
017d0534  b.ne     #0x17d055c
017d0538  ldr      x8, [x20, #0x68]
017d053c  cmp      x0, x8
017d0540  b.lo     #0x17d0554
017d0544  ldr      x8, [x20]
017d0548  mov      x0, x20
017d054c  ldr      x8, [x8, #0x10]
017d0550  blr      x8
017d0554  ldr      w24, [x0], #4
017d0558  str      x0, [x20, #0x60]
017d055c  tbnz     w21, #0x1e, #0x17d05d0
017d0560  mov      x25, xzr
017d0564  mov      w21, wzr
017d0568  b        #0x17d0650
017d056c  ldr      x8, [x20, #0x18]
017d0570  mov      w22, w2
017d0574  cbz      x8, #0x17d0598
017d0578  add      x8, x8, #7
017d057c  ldr      x9, [x20, #0x20]
017d0580  and      x21, x8, #0xfffffffffffffff8
017d0584  add      x8, x21, x22, lsl #3
017d0588  cmp      x8, x9
017d058c  b.hi     #0x17d0598
017d0590  str      x8, [x20, #0x18]
017d0594  cbnz     x21, #0x17d0708
017d0598  cbz      w2, #0x17d0704
017d059c  ldr      x21, [x20, #0x28]
017d05a0  lsl      x1, x22, #3
017d05a4  add      x8, sp, #8
017d05a8  mov      w2, #8
017d05ac  mov      x0, x21
017d05b0  bl       #0x2f160f0  ; <_ZN4hnnx5Crate15add_record_slotEmm>
017d05b4  ldr      w8, [sp, #0x18]
017d05b8  tbnz     w8, #0x1f, #0x17d05c8
017d05bc  ldr      x8, [x21, #0x40]
017d05c0  add      x8, x8, #1
017d05c4  str      x8, [x21, #0x40]
017d05c8  ldr      x21, [sp, #0x10]
017d05cc  b        #0x17d0708
017d05d0  ldr      x8, [x20, #0x68]
017d05d4  cmp      x0, x8
017d05d8  b.lo     #0x17d05ec
017d05dc  ldr      x8, [x20]
017d05e0  mov      x0, x20
017d05e4  ldr      x8, [x8, #0x10]
017d05e8  blr      x8
017d05ec  ldr      w8, [x0], #4
017d05f0  str      x0, [x20, #0x60]
017d05f4  tbnz     w8, #0x1f, #0x17d0604
017d05f8  lsr      w22, w8, #0x10
017d05fc  and      w21, w8, #0xffff
017d0600  b        #0x17d062c
017d0604  ldr      x9, [x20, #0x68]
017d0608  and      w22, w8, #0x7fffffff
017d060c  cmp      x0, x9
017d0610  b.lo     #0x17d0624
017d0614  ldr      x8, [x20]
017d0618  mov      x0, x20
017d061c  ldr      x8, [x8, #0x10]
017d0620  blr      x8
017d0624  ldr      w21, [x0], #4
017d0628  str      x0, [x20, #0x60]
017d062c  ldr      x8, [x20, #0x48]
017d0630  mov      w1, w22
017d0634  ldr      x9, [x8, #0x11e0]
017d0638  ldr      x8, [x8, #0x11d8]
017d063c  sub      x9, x9, x8
017d0640  cmp      x1, x9, asr #3
017d0644  b.hs     #0x17d078c
017d0648  add      x25, x8, x1, lsl #3
017d064c  cbz      w24, #0x17d06f4
017d0650  ldr      x8, [x20, #0x18]
017d0654  mov      w22, w24
017d0658  cbz      x8, #0x17d067c
017d065c  add      x8, x8, #7
017d0660  ldr      x9, [x20, #0x20]
017d0664  and      x23, x8, #0xfffffffffffffff8
017d0668  add      x8, x23, x22, lsl #3
017d066c  cmp      x8, x9
017d0670  b.hi     #0x17d067c
017d0674  str      x8, [x20, #0x18]
017d0678  cbnz     x23, #0x17d06b0
017d067c  cbz      w24, #0x17d06d4
017d0680  ldr      x23, [x20, #0x28]
017d0684  lsl      x1, x22, #3
017d0688  add      x8, sp, #8
017d068c  mov      w2, #8
017d0690  mov      x0, x23
017d0694  bl       #0x2f160f0  ; <_ZN4hnnx5Crate15add_record_slotEmm>
017d0698  ldr      w8, [sp, #0x18]
017d069c  tbnz     w8, #0x1f, #0x17d06ac
017d06a0  ldr      x8, [x23, #0x40]
017d06a4  add      x8, x8, #1
017d06a8  str      x8, [x23, #0x40]
017d06ac  ldr      x23, [sp, #0x10]
017d06b0  ldr      x0, [x20, #0x10]
017d06b4  mov      x1, x20
017d06b8  mov      x2, x23
017d06bc  mov      x3, x22
017d06c0  bl       #0x2f17480  ; <_ZN2fa16RuntimeAllocator18deserialize_blocksERN4hnnx6DeserzEPPKvm>
017d06c4  cbz      x25, #0x17d06cc
017d06c8  str      x23, [x25]
017d06cc  add      x21, x23, w21, uxtw #3
017d06d0  b        #0x17d0740
017d06d4  mov      x23, xzr
017d06d8  ldr      x0, [x20, #0x10]
017d06dc  mov      x1, x20
017d06e0  mov      x2, x23
017d06e4  mov      x3, x22
017d06e8  bl       #0x2f17480  ; <_ZN2fa16RuntimeAllocator18deserialize_blocksERN4hnnx6DeserzEPPKvm>
017d06ec  cbnz     x25, #0x17d06c8
017d06f0  b        #0x17d06cc
017d06f4  ldr      x8, [x25]
017d06f8  cbz      x8, #0x17d075c
017d06fc  add      x21, x8, w21, uxtw #3
017d0700  b        #0x17d0740
017d0704  mov      x21, xzr
017d0708  ldr      x0, [x20, #0x10]
017d070c  mov      x1, x20
017d0710  mov      x2, x21
017d0714  mov      x3, x22
017d0718  bl       #0x2f17480  ; <_ZN2fa16RuntimeAllocator18deserialize_blocksERN4hnnx6DeserzEPPKvm>
017d071c  ldp      x0, x8, [x20, #0x60]
017d0720  cmp      x0, x8
017d0724  b.lo     #0x17d0738
017d0728  ldr      x8, [x20]
017d072c  mov      x0, x20
017d0730  ldr      x8, [x8, #0x10]
017d0734  blr      x8
017d0738  add      x8, x0, #4
017d073c  str      x8, [x20, #0x60]
017d0740  str      x21, [x19]
017d0744  ldp      x20, x19, [sp, #0x50]
017d0748  ldp      x22, x21, [sp, #0x40]
017d074c  ldp      x24, x23, [sp, #0x30]
017d0750  ldp      x30, x25, [sp, #0x20]
017d0754  add      sp, sp, #0x60
017d0758  ret      
017d075c  add      x0, x20, #0xa8
017d0760  mov      w2, w21
017d0764  mov      x3, x19
017d0768  bl       #0x17e7530
017d076c  tbnz     w0, #0, #0x17d0744
017d0770  mov      w0, #0x10
017d0774  bl       #0x2f15740  ; <__cxa_allocate_exception>
017d0778  mov      x19, x0
017d077c  adrp     x1, #0x565000
017d0780  add      x1, x1, #0x13f  ; "link sequence"
017d0784  bl       #0x1509df0
017d0788  b        #0x17d07a4
017d078c  mov      w0, #0x10
017d0790  bl       #0x2f15740  ; <__cxa_allocate_exception>
017d0794  mov      x19, x0
017d0798  adrp     x1, #0x586000
017d079c  add      x1, x1, #0xc48  ; "link index"
017d07a0  bl       #0x1509df0
017d07a4  adrp     x1, #0x3162000
017d07a8  adrp     x2, #0x3162000
017d07ac  mov      x0, x19
017d07b0  ldr      x1, [x1, #0xf90]  ; =0x3162f90 <_ZTISt13runtime_error>
017d07b4  ldr      x2, [x2, #0xfd0]  ; =0x3162fd0 <_ZNSt13runtime_errorD1Ev>
017d07b8  bl       #0x2f15760  ; <__cxa_throw>
017d07bc  b        #0x17d07c0
017d07c0  mov      x20, x0
017d07c4  mov      x0, x19
017d07c8  bl       #0x2f15770  ; <__cxa_free_exception>
017d07cc  mov      x0, x20
017d07d0  bl       #0x2e8806c
