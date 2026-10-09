; function 0x24d21e0 size 0x38c _ZN5OpDefC2ER12GraphPrepareRN4hnnx12DeserializerE
024d21e0  stp      x29, x30, [sp, #-0x60]!
024d21e4  stp      x28, x27, [sp, #0x10]
024d21e8  stp      x26, x25, [sp, #0x20]
024d21ec  stp      x24, x23, [sp, #0x30]
024d21f0  stp      x22, x21, [sp, #0x40]
024d21f4  stp      x20, x19, [sp, #0x50]
024d21f8  ldp      x8, x9, [x2, #0x60]
024d21fc  mov      x20, x2
024d2200  mov      x21, x1
024d2204  mov      x19, x0
024d2208  cmp      x8, x9
024d220c  b.lo     #0x24d2228
024d2210  ldr      x8, [x20]
024d2214  mov      x0, x20
024d2218  ldr      x8, [x8, #0x10]
024d221c  blr      x8
024d2220  mov      x8, x0
024d2224  ldr      x9, [x20, #0x68]
024d2228  ldrh     w10, [x8], #4
024d222c  cmp      x8, x9
024d2230  str      x8, [x20, #0x60]
024d2234  strh     w10, [x19, #8]
024d2238  b.lo     #0x24d2254
024d223c  ldr      x8, [x20]
024d2240  mov      x0, x20
024d2244  ldr      x8, [x8, #0x10]
024d2248  blr      x8
024d224c  mov      x8, x0
024d2250  ldr      x9, [x20, #0x68]
024d2254  adrp     x11, #0x3163000
024d2258  add      x10, x8, #4
024d225c  ldr      x11, [x11, #0x670]  ; =0x3163670 <_ZTV5OpDef>
024d2260  str      wzr, [x19, #0xc]
024d2264  ldrh     w12, [x8], #0xc
024d2268  cmp      x8, x9
024d226c  str      x10, [x20, #0x60]
024d2270  add      x11, x11, #0x10  ; =0x3163010 <_ZTV11TensorShapeILj4EE>
024d2274  str      x21, [x19, #0x10]
024d2278  strh     w12, [x19, #0xa]
024d227c  str      x11, [x19]
024d2280  b.ls     #0x24d2290
024d2284  mov      x0, x20
024d2288  bl       #0x2f16550  ; <_ZN4hnnx6Deserz18deser_u64_slowpathEv>
024d228c  b        #0x24d2298
024d2290  str      x8, [x20, #0x60]
024d2294  ldr      x0, [x10]
024d2298  str      x0, [x19, #0x18]
024d229c  mov      x0, x20
024d22a0  bl       #0x2f16480  ; <_ZN4hnnx6Deserz15deserialize_strEv>
024d22a4  bl       #0x2f170e0  ; <_ZN4hnnx12string_tag_t7map_strENSt6__ndk117basic_string_viewIcNS1_11char_traitsIcEEEE>
024d22a8  mov      x21, x19
024d22ac  mov      x8, x0
024d22b0  str      xzr, [x21, #0x28]!
024d22b4  stp      xzr, xzr, [x21, #8]
024d22b8  ldp      x0, x9, [x20, #0x60]
024d22bc  stur     x8, [x21, #-8]
024d22c0  ldr      w10, [x8, #0x10]
024d22c4  cmp      x0, x9
024d22c8  sturh    w10, [x21, #-0x1e]
024d22cc  b.lo     #0x24d22e0
024d22d0  ldr      x8, [x20]
024d22d4  ldr      x8, [x8, #0x10]
024d22d8  mov      x0, x20
024d22dc  blr      x8
024d22e0  ldr      w24, [x0], #4
024d22e4  str      x0, [x20, #0x60]
024d22e8  cbz      w24, #0x24d245c
024d22ec  mov      x25, xzr
024d22f0  b        #0x24d2308
024d22f4  str      x23, [x29], #8
024d22f8  str      x29, [x19, #0x30]
024d22fc  add      x25, x25, #1
024d2300  cmp      x25, x24
024d2304  b.eq     #0x24d2458
024d2308  ldp      x8, x10, [x20, #0x60]
024d230c  add      x9, x8, #8
024d2310  cmp      x9, x10
024d2314  b.ls     #0x24d2334
024d2318  mov      x0, x20
024d231c  bl       #0x2f16550  ; <_ZN4hnnx6Deserz18deser_u64_slowpathEv>
024d2320  mov      x23, x0
024d2324  ldp      x29, x8, [x19, #0x30]
024d2328  cmp      x29, x8
024d232c  b.lo     #0x24d22f4
024d2330  b        #0x24d2348
024d2334  str      x9, [x20, #0x60]
024d2338  ldr      x23, [x8]
024d233c  ldp      x29, x8, [x19, #0x30]
024d2340  cmp      x29, x8
024d2344  b.lo     #0x24d22f4
024d2348  ldr      x22, [x21]
024d234c  sub      x27, x29, x22
024d2350  asr      x26, x27, #3
024d2354  add      x9, x26, #1
024d2358  lsr      x10, x9, #0x3d
024d235c  cbnz     x10, #0x24d2534
024d2360  sub      x8, x8, x22
024d2364  lsr      x10, x8, #2
024d2368  cmp      x10, x9
024d236c  csel     x9, x10, x9, hi
024d2370  mov      x10, #0x7ffffffffffffff8
024d2374  cmp      x8, x10
024d2378  mov      x8, #0x1fffffffffffffff
024d237c  csel     x28, x9, x8, lo
024d2380  cbz      x28, #0x24d23ac
024d2384  lsr      x8, x28, #0x3d
024d2388  cbnz     x8, #0x24d253c
024d238c  lsl      x0, x28, #3
024d2390  bl       #0x2f15710  ; <_Znwm>
024d2394  add      x8, x0, x26, lsl #3
024d2398  subs     x10, x29, x22
024d239c  mov      x9, x8
024d23a0  str      x23, [x9], #8
024d23a4  b.ne     #0x24d23c4
024d23a8  b        #0x24d243c
024d23ac  mov      x0, xzr
024d23b0  add      x8, xzr, x26, lsl #3
024d23b4  subs     x10, x29, x22
024d23b8  mov      x9, x8
024d23bc  str      x23, [x9], #8
024d23c0  b.eq     #0x24d243c
024d23c4  sub      x10, x10, #8
024d23c8  cmp      x10, #0x58
024d23cc  b.lo     #0x24d242c
024d23d0  sub      x11, x29, x0
024d23d4  sub      x11, x11, x27
024d23d8  cmp      x11, #0x20
024d23dc  b.lo     #0x24d242c
024d23e0  lsr      x10, x10, #3
024d23e4  add      x14, x0, x26, lsl #3
024d23e8  add      x10, x10, #1
024d23ec  and      x11, x10, #0x3ffffffffffffffc
024d23f0  lsl      x13, x11, #3
024d23f4  mov      x15, x11
024d23f8  sub      x12, x29, x13
024d23fc  sub      x8, x8, x13
024d2400  sub      x13, x14, #0x10
024d2404  sub      x14, x29, #0x10
024d2408  ldp      q1, q0, [x14, #-0x10]
024d240c  sub      x14, x14, #0x20
024d2410  subs     x15, x15, #4
024d2414  stp      q1, q0, [x13, #-0x10]
024d2418  sub      x13, x13, #0x20
024d241c  b.ne     #0x24d2408
024d2420  mov      x29, x12
024d2424  cmp      x10, x11
024d2428  b.eq     #0x24d243c
024d242c  ldr      x10, [x29, #-8]!
024d2430  cmp      x29, x22
024d2434  str      x10, [x8, #-8]!
024d2438  b.ne     #0x24d242c
024d243c  add      x10, x0, x28, lsl #3
024d2440  stp      x8, x9, [x19, #0x28]
024d2444  str      x10, [x19, #0x38]
024d2448  cbz      x22, #0x24d22fc
024d244c  mov      x0, x22
024d2450  bl       #0x2f15720  ; <_ZdlPv>
024d2454  b        #0x24d22fc
024d2458  ldr      x0, [x20, #0x60]
024d245c  ldr      x9, [x20, #0x68]
024d2460  cmp      x0, x9
024d2464  b.lo     #0x24d247c
024d2468  ldr      x8, [x20]
024d246c  ldr      x8, [x8, #0x10]
024d2470  mov      x0, x20
024d2474  blr      x8
024d2478  ldr      x9, [x20, #0x68]
024d247c  ldr      w8, [x0], #4
024d2480  cmp      x0, x9
024d2484  str      x0, [x20, #0x60]
024d2488  str      w8, [x19, #0x40]
024d248c  b.lo     #0x24d24a4
024d2490  ldr      x8, [x20]
024d2494  ldr      x8, [x8, #0x10]
024d2498  mov      x0, x20
024d249c  blr      x8
024d24a0  ldr      w8, [x19, #0x40]
024d24a4  ldr      w9, [x0], #4
024d24a8  add      x1, x19, #0x48
024d24ac  cmp      w8, #8
024d24b0  mov      w10, #8
024d24b4  str      x0, [x20, #0x60]
024d24b8  csel     w2, w8, w10, lo
024d24bc  str      w9, [x19, #0x44]
024d24c0  mov      x0, x20
024d24c4  bl       #0x2f16520  ; <_ZN4hnnx6Deserz28deserialize_uint32_arr_sizetEPmm>
024d24c8  ldp      x0, x8, [x20, #0x60]
024d24cc  cmp      x0, x8
024d24d0  b.lo     #0x24d24e8
024d24d4  ldr      x8, [x20]
024d24d8  ldr      x8, [x8, #0x10]
024d24dc  mov      x0, x20
024d24e0  blr      x8
024d24e4  ldr      x8, [x20, #0x68]
024d24e8  ldr      w9, [x0], #4
024d24ec  cmp      x0, x8
024d24f0  str      x0, [x20, #0x60]
024d24f4  str      w9, [x19, #0x88]
024d24f8  b.lo     #0x24d250c
024d24fc  ldr      x8, [x20]
024d2500  ldr      x8, [x8, #0x10]
024d2504  mov      x0, x20
024d2508  blr      x8
024d250c  ldr      s0, [x0], #4
024d2510  str      x0, [x20, #0x60]
024d2514  ldp      x22, x21, [sp, #0x40]
024d2518  str      s0, [x19, #0x8c]
024d251c  ldp      x20, x19, [sp, #0x50]
024d2520  ldp      x24, x23, [sp, #0x30]
024d2524  ldp      x26, x25, [sp, #0x20]
024d2528  ldp      x28, x27, [sp, #0x10]
024d252c  ldp      x29, x30, [sp], #0x60
024d2530  ret      
024d2534  mov      x0, x21
024d2538  bl       #0x197a584
024d253c  bl       #0x1509564
024d2540  b        #0x24d2550
024d2544  b        #0x24d2550
024d2548  b        #0x24d2550
024d254c  b        #0x24d2550
024d2550  mov      x20, x0
024d2554  ldr      x0, [x21]
024d2558  cbz      x0, #0x24d2564
024d255c  str      x0, [x19, #0x30]
024d2560  bl       #0x2f15720  ; <_ZdlPv>
024d2564  mov      x0, x20
024d2568  bl       #0x2e8806c
