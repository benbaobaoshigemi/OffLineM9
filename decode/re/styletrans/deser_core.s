; function 0x1781a20 size 0x164 _ZN2OpC2ERN4hnnx6DeserzE
01781a20  stp      x30, x21, [sp, #-0x20]!
01781a24  stp      x20, x19, [sp, #0x10]
01781a28  adrp     x9, #0x3163000
01781a2c  mov      x19, x1
01781a30  ldr      x9, [x9, #0x568]  ; =0x3163568 <_ZTV2Op>
01781a34  ldp      x8, x10, [x1, #0x60]
01781a38  add      x11, x9, #0x10  ; =0x3163010 <_ZTV11TensorShapeILj4EE>
01781a3c  add      x9, x8, #8
01781a40  cmp      x9, x10
01781a44  str      x11, [x0]
01781a48  b.ls     #0x1781ab0
01781a4c  mov      x0, x19
01781a50  bl       #0x2f16550  ; <_ZN4hnnx6Deserz18deser_u64_slowpathEv>
01781a54  mov      x20, x0
01781a58  ldr      w8, [x19, #0x78]
01781a5c  and      w8, w8, #3
01781a60  cmp      w8, #1
01781a64  b.eq     #0x1781ac8
01781a68  cmp      w8, #2
01781a6c  b.eq     #0x1781ad8
01781a70  cmp      w8, #3
01781a74  b.ne     #0x1781b10
01781a78  ldp      x0, x8, [x19, #0x60]
01781a7c  cmp      x0, x8
01781a80  b.lo     #0x1781a94
01781a84  ldr      x8, [x19]
01781a88  mov      x0, x19
01781a8c  ldr      x8, [x8, #0x10]
01781a90  blr      x8
01781a94  ldr      w21, [x0]
01781a98  mov      w8, #1
01781a9c  add      x9, x0, #4
01781aa0  str      x9, [x19, #0x60]
01781aa4  ldr      x9, [x19, #0x80]
01781aa8  cbnz     x9, #0x1781b64
01781aac  b        #0x1781b70
01781ab0  str      x9, [x19, #0x60]
01781ab4  ldr      x20, [x8]
01781ab8  ldr      w8, [x19, #0x78]
01781abc  and      w8, w8, #3
01781ac0  cmp      w8, #1
01781ac4  b.ne     #0x1781a68
01781ac8  mov      w21, wzr
01781acc  ldr      x9, [x19, #0x80]
01781ad0  cbnz     x9, #0x1781b64
01781ad4  b        #0x1781b70
01781ad8  ldp      x0, x8, [x19, #0x60]
01781adc  cmp      x0, x8
01781ae0  b.lo     #0x1781af4
01781ae4  ldr      x8, [x19]
01781ae8  mov      x0, x19
01781aec  ldr      x8, [x8, #0x10]
01781af0  blr      x8
01781af4  ldr      w8, [x0]
01781af8  mov      w21, wzr
01781afc  add      x9, x0, #4
01781b00  str      x9, [x19, #0x60]
01781b04  ldr      x9, [x19, #0x80]
01781b08  cbnz     x9, #0x1781b64
01781b0c  b        #0x1781b70
01781b10  ldp      x0, x8, [x19, #0x60]
01781b14  cmp      x0, x8
01781b18  b.lo     #0x1781b30
01781b1c  ldr      x8, [x19]
01781b20  mov      x0, x19
01781b24  ldr      x8, [x8, #0x10]
01781b28  blr      x8
01781b2c  ldr      x8, [x19, #0x68]
01781b30  ldr      w21, [x0], #4
01781b34  cmp      x0, x8
01781b38  str      x0, [x19, #0x60]
01781b3c  b.lo     #0x1781b50
01781b40  ldr      x8, [x19]
01781b44  mov      x0, x19
01781b48  ldr      x8, [x8, #0x10]
01781b4c  blr      x8
01781b50  ldr      w8, [x0]
01781b54  add      x9, x0, #4
01781b58  str      x9, [x19, #0x60]
01781b5c  ldr      x9, [x19, #0x80]
01781b60  cbz      x9, #0x1781b70
01781b64  ldp      x20, x19, [sp, #0x10]
01781b68  ldp      x30, x21, [sp], #0x20
01781b6c  ret      
01781b70  str      x20, [x19, #0x80]
01781b74  stp      w21, w8, [x19, #0x88]
01781b78  ldp      x20, x19, [sp, #0x10]
01781b7c  ldp      x30, x21, [sp], #0x20
01781b80  ret      
; function 0x17f01b8 size 0x104 _ZN4hnnx13TypicalOpUtil14do_deserializeERNS_6DeserzEmPPK6TensormPNSt6__ndk110unique_ptrIS3_NS_18DeleterWithDisableIS3_EEEE
017f01b8  sub      sp, sp, #0x50
017f01bc  str      x30, [sp, #0x10]
017f01c0  stp      x24, x23, [sp, #0x20]
017f01c4  stp      x22, x21, [sp, #0x30]
017f01c8  stp      x20, x19, [sp, #0x40]
017f01cc  mov      x19, x5
017f01d0  mov      x20, x4
017f01d4  mov      x21, x1
017f01d8  mov      x22, x3
017f01dc  ldr      w8, [x1, #0xa4]
017f01e0  mov      x23, x2
017f01e4  cbnz     w8, #0x17f020c
017f01e8  ldp      x0, x8, [x21, #0x60]
017f01ec  cmp      x0, x8
017f01f0  b.lo     #0x17f0204
017f01f4  ldr      x8, [x21]
017f01f8  mov      x0, x21
017f01fc  ldr      x8, [x8, #0x10]
017f0200  blr      x8
017f0204  add      x8, x0, #4
017f0208  str      x8, [x21, #0x60]
017f020c  cbz      x23, #0x17f0228
017f0210  ldr      x8, [x21, #0x48]
017f0214  mov      x1, x21
017f0218  mov      x2, x22
017f021c  mov      w3, w23
017f0220  add      x0, x8, #0xf8
017f0224  bl       #0x1745230
017f0228  cbz      x20, #0x17f029c
017f022c  mov      x8, sp
017f0230  mov      x24, xzr
017f0234  add      x22, x8, #8
017f0238  b        #0x17f0250
017f023c  ldrb     w8, [sp, #8]
017f0240  strb     w8, [x23]
017f0244  add      w24, w24, #1
017f0248  cmp      x24, x20
017f024c  b.hs     #0x17f029c
017f0250  mov      x8, sp
017f0254  mov      x0, x21
017f0258  bl       #0x2f164a0  ; <_ZN4hnnx18deserialize_tensorERNS_6DeserzE>
017f025c  add      x23, x19, x24, lsl #4
017f0260  ldr      x8, [sp]
017f0264  str      xzr, [sp]
017f0268  ldr      x1, [x23]
017f026c  str      x8, [x23], #8
017f0270  cbz      x1, #0x17f023c
017f0274  mov      x0, x23
017f0278  bl       #0x2f164b0  ; <_ZNK4hnnx18DeleterWithDisableI6TensorEclEPKS1_>
017f027c  ldrb     w8, [sp, #8]
017f0280  ldr      x1, [sp]
017f0284  str      xzr, [sp]
017f0288  strb     w8, [x23]
017f028c  cbz      x1, #0x17f0244
017f0290  mov      x0, x22
017f0294  bl       #0x2f164b0  ; <_ZNK4hnnx18DeleterWithDisableI6TensorEclEPKS1_>
017f0298  b        #0x17f0244
017f029c  ldp      x20, x19, [sp, #0x40]
017f02a0  ldp      x22, x21, [sp, #0x30]
017f02a4  ldp      x24, x23, [sp, #0x20]
017f02a8  ldr      x30, [sp, #0x10]
017f02ac  add      sp, sp, #0x50
017f02b0  ret      
017f02b4  bl       #0x14d7678
017f02b8  bl       #0x14d7678
; function 0x1746b18 size 0xd4 _ZN4hnnx18deserialize_tensorERNS_6DeserzE
01746b18  str      x30, [sp, #-0x30]!
01746b1c  stp      x22, x21, [sp, #0x10]
01746b20  stp      x20, x19, [sp, #0x20]
01746b24  mov      x20, x0
01746b28  ldr      x0, [x0, #0x60]
01746b2c  mov      x19, x8
01746b30  ldr      x9, [x20, #0x68]
01746b34  cmp      x0, x9
01746b38  b.lo     #0x1746b4c
01746b3c  ldr      x8, [x20]
01746b40  mov      x0, x20
01746b44  ldr      x8, [x8, #0x10]
01746b48  blr      x8
01746b4c  ldr      w22, [x0], #4
01746b50  str      x0, [x20, #0x60]
01746b54  mov      x0, x20
01746b58  and      w1, w22, #0x7fffffff
01746b5c  bl       #0x1746bec
01746b60  ldr      w8, [x20, #0xa4]
01746b64  mov      x21, x0
01746b68  cbz      w8, #0x1746b80
01746b6c  mov      x8, x19
01746b70  mov      x0, x20
01746b74  blr      x21
01746b78  tbz      w22, #0x1f, #0x1746bb4
01746b7c  b        #0x1746bc8
01746b80  ldp      x0, x8, [x20, #0x60]
01746b84  cmp      x0, x8
01746b88  b.lo     #0x1746b9c
01746b8c  ldr      x8, [x20]
01746b90  mov      x0, x20
01746b94  ldr      x8, [x8, #0x10]
01746b98  blr      x8
01746b9c  add      x8, x0, #4
01746ba0  str      x8, [x20, #0x60]
01746ba4  mov      x8, x19
01746ba8  mov      x0, x20
01746bac  blr      x21
01746bb0  tbnz     w22, #0x1f, #0x1746bc8
01746bb4  ldr      x8, [x20, #0x48]
01746bb8  ldr      x2, [x19]
01746bbc  add      x0, x8, #0xf8
01746bc0  mov      x1, x20
01746bc4  bl       #0x1744f8c
01746bc8  ldp      x20, x19, [sp, #0x20]
01746bcc  ldp      x22, x21, [sp, #0x10]
01746bd0  ldr      x30, [sp], #0x30
01746bd4  ret      
01746bd8  mov      x20, x0
01746bdc  mov      x0, x19
01746be0  bl       #0x1746e58
01746be4  mov      x0, x20
01746be8  bl       #0x2e8806c
