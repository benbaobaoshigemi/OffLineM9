; function 0x14f5210 size 0xab0 
014f5210  stp      x29, x30, [sp, #-0x60]!
014f5214  stp      x28, x27, [sp, #0x10]
014f5218  stp      x26, x25, [sp, #0x20]
014f521c  stp      x24, x23, [sp, #0x30]
014f5220  stp      x22, x21, [sp, #0x40]
014f5224  stp      x20, x19, [sp, #0x50]
014f5228  sub      sp, sp, #0x690
014f522c  ldr      w8, [x0, #0x18]
014f5230  stp      x1, x0, [sp, #0x20]
014f5234  cmp      w8, #1
014f5238  str      w8, [sp, #0xc]
014f523c  b.lt     #0x14f5ca0
014f5240  ldr      x8, [sp, #0x28]
014f5244  ldr      w9, [x8, #0x14]
014f5248  cmp      w9, #1
014f524c  b.lt     #0x14f5ca0
014f5250  ldr      x8, [sp, #0x28]
014f5254  ldr      w8, [x8, #0x10]
014f5258  cmp      w8, #1
014f525c  str      w8, [sp, #0x7c]
014f5260  b.lt     #0x14f5ca0
014f5264  ldr      x8, [sp, #0x20]
014f5268  mov      x10, xzr
014f526c  str      x9, [sp, #0x38]
014f5270  ldp      w11, w8, [x8, #8]
014f5274  str      w8, [sp, #0x1c]
014f5278  mov      w8, w2
014f527c  str      w11, [sp, #0x78]
014f5280  str      x8, [sp, #0x70]
014f5284  ldr      x8, [sp, #0x28]
014f5288  ldp      w8, w11, [x8, #8]
014f528c  sxtw     x8, w8
014f5290  str      w11, [sp, #0x18]
014f5294  lsl      w11, w2, #1
014f5298  stp      x8, x11, [sp, #0x60]
014f529c  add      w8, w11, w2
014f52a0  str      x8, [sp, #0x58]
014f52a4  add      x8, sp, #0x390
014f52a8  add      x24, x8, #0x80
014f52ac  add      x8, sp, #0x190
014f52b0  add      x26, x8, #0x80
014f52b4  str      x24, [sp, #0x48]
014f52b8  b        #0x14f52d0
014f52bc  ldr      x10, [sp, #0x10]
014f52c0  ldr      w8, [sp, #0xc]
014f52c4  add      x10, x10, #0x20
014f52c8  cmp      w8, w10
014f52cc  b.le     #0x14f5ca0
014f52d0  mov      x8, xzr
014f52d4  str      x10, [sp, #0x10]
014f52d8  lsr      x10, x10, #5
014f52dc  str      x10, [sp, #0x30]
014f52e0  b        #0x14f52f4
014f52e4  ldp      x9, x8, [sp, #0x38]
014f52e8  add      x8, x8, #8
014f52ec  cmp      x8, x9
014f52f0  b.hs     #0x14f52bc
014f52f4  str      x8, [sp, #0x40]
014f52f8  sub      x8, x9, x8
014f52fc  cmp      w8, #8
014f5300  mov      w9, #8
014f5304  csel     w9, w8, w9, lt
014f5308  cmp      x8, #1
014f530c  str      w9, [sp, #0x84]
014f5310  b.lt     #0x14f52e4
014f5314  ldr      x13, [sp, #0x40]
014f5318  mov      w14, wzr
014f531c  ldp      w11, w12, [sp, #0x18]
014f5320  mov      w28, wzr
014f5324  lsr      w10, w13, #4
014f5328  lsr      x8, x13, #3
014f532c  mul      w10, w10, w12
014f5330  and      w12, w13, #8
014f5334  mul      w8, w11, w8
014f5338  ldp      x11, x9, [sp, #0x20]
014f533c  ldr      x9, [x9]
014f5340  str      w12, [sp, #0x80]
014f5344  ldr      x12, [sp, #0x30]
014f5348  ldr      x11, [x11]
014f534c  lsl      x12, x12, #3
014f5350  add      x9, x9, x12
014f5354  add      x11, x11, x12
014f5358  add      x20, x9, w8, sxtw #3
014f535c  add      x19, x11, w10, sxtw #3
014f5360  b        #0x14f5394
014f5364  ldp      w8, w14, [sp, #0x88]
014f5368  ldr      x9, [sp, #0x60]
014f536c  add      w28, w28, #4
014f5370  cmp      w8, #0
014f5374  ldr      w8, [sp, #0x78]
014f5378  add      x20, x20, x9, lsl #3
014f537c  add      w14, w14, #1
014f5380  csel     w8, wzr, w8, eq
014f5384  add      x19, x19, w8, sxtw #3
014f5388  ldr      w8, [sp, #0x7c]
014f538c  cmp      w28, w8
014f5390  b.ge     #0x14f52e4
014f5394  ldr      w9, [sp, #0x80]
014f5398  and      w10, w14, #1
014f539c  ldr      x8, [x19]
014f53a0  add      x0, sp, #0x310
014f53a4  add      x1, sp, #0x290
014f53a8  orr      w9, w10, w9
014f53ac  stp      w10, w14, [sp, #0x88]
014f53b0  ubfiz    x9, x9, #7, #0x20
014f53b4  ldr      x10, [sp, #0x58]
014f53b8  add      x25, x8, x9
014f53bc  ldp      x11, x8, [sp, #0x68]
014f53c0  ldr      x11, [x19, x11, lsl #3]
014f53c4  ldr      x10, [x19, x10, lsl #3]
014f53c8  ldp      q0, q1, [x25, #0x40]
014f53cc  add      x21, x11, x9
014f53d0  add      x29, x10, x9
014f53d4  str      q0, [sp, #0x650]
014f53d8  ldp      q2, q3, [x25, #0x60]
014f53dc  str      q1, [sp, #0x660]
014f53e0  str      q2, [sp, #0x670]
014f53e4  ldr      x8, [x19, x8, lsl #3]
014f53e8  str      q3, [sp, #0x680]
014f53ec  ldp      q0, q1, [x25]
014f53f0  add      x27, x8, x9
014f53f4  add      x8, sp, #0x390
014f53f8  str      q0, [sp, #0x610]
014f53fc  ldp      q2, q3, [x25, #0x20]
014f5400  str      q1, [sp, #0x620]
014f5404  str      q2, [sp, #0x630]
014f5408  ldp      q0, q1, [x27, #0x40]
014f540c  str      q3, [sp, #0x640]
014f5410  str      q0, [sp, #0x5d0]
014f5414  ldp      q2, q3, [x27, #0x60]
014f5418  str      q1, [sp, #0x5e0]
014f541c  str      q2, [sp, #0x5f0]
014f5420  ldp      q0, q1, [x27]
014f5424  str      q3, [sp, #0x600]
014f5428  str      q0, [sp, #0x590]
014f542c  ldp      q2, q3, [x27, #0x20]
014f5430  str      q1, [sp, #0x5a0]
014f5434  str      q2, [sp, #0x5b0]
014f5438  ldp      q0, q1, [x21, #0x40]
014f543c  str      q3, [sp, #0x5c0]
014f5440  str      q0, [sp, #0x550]
014f5444  ldp      q2, q3, [x21, #0x60]
014f5448  str      q1, [sp, #0x560]
014f544c  str      q2, [sp, #0x570]
014f5450  ldp      q0, q1, [x21]
014f5454  str      q3, [sp, #0x580]
014f5458  str      q0, [sp, #0x510]
014f545c  ldp      q2, q3, [x21, #0x20]
014f5460  str      q1, [sp, #0x520]
014f5464  str      q2, [sp, #0x530]
014f5468  ldp      q0, q1, [x29, #0x40]
014f546c  str      q3, [sp, #0x540]
014f5470  str      q0, [sp, #0x4d0]
014f5474  ldp      q2, q3, [x29, #0x60]
014f5478  str      q1, [sp, #0x4e0]
014f547c  str      q2, [sp, #0x4f0]
014f5480  ldp      q0, q1, [x29]
014f5484  str      q3, [sp, #0x500]
014f5488  str      q0, [sp, #0x490]
014f548c  ldp      q2, q3, [x29, #0x20]
014f5490  str      q1, [sp, #0x4a0]
014f5494  str      q2, [sp, #0x4b0]
014f5498  ldr      q0, [sp, #0x5d0]
014f549c  str      q3, [sp, #0x4c0]
014f54a0  ldr      q1, [sp, #0x5e0]
014f54a4  ldr      q2, [sp, #0x5f0]
014f54a8  ldr      q3, [sp, #0x600]
014f54ac  ldr      x22, [x20]
014f54b0  stp      q0, q1, [sp, #0x350]
014f54b4  ldr      q0, [sp, #0x590]
014f54b8  ldr      q1, [sp, #0x5a0]
014f54bc  stp      q2, q3, [sp, #0x370]
014f54c0  ldr      q2, [sp, #0x5b0]
014f54c4  ldr      q3, [sp, #0x5c0]
014f54c8  stp      q0, q1, [sp, #0x310]
014f54cc  ldr      q0, [sp, #0x640]
014f54d0  ldr      q1, [sp, #0x630]
014f54d4  stp      q2, q3, [sp, #0x330]
014f54d8  ldr      q2, [sp, #0x620]
014f54dc  ldr      q3, [sp, #0x610]
014f54e0  stp      q1, q0, [sp, #0x2b0]
014f54e4  ldr      q0, [sp, #0x680]
014f54e8  ldr      q1, [sp, #0x670]
014f54ec  stp      q3, q2, [sp, #0x290]
014f54f0  ldr      q2, [sp, #0x660]
014f54f4  ldr      q3, [sp, #0x650]
014f54f8  stp      q1, q0, [sp, #0x2f0]
014f54fc  stp      q3, q2, [sp, #0x2d0]
014f5500  bl       #0x2f15250  ; <Q6_Wh_vshuffoe_VhVh_HVXDBL>
014f5504  ldr      q0, [sp, #0x4d0]
014f5508  add      x8, sp, #0x190
014f550c  ldr      q1, [sp, #0x4e0]
014f5510  add      x0, sp, #0x110
014f5514  ldr      q2, [sp, #0x4f0]
014f5518  add      x1, sp, #0x90
014f551c  ldr      q3, [sp, #0x500]
014f5520  stp      q0, q1, [sp, #0x150]
014f5524  ldr      q0, [sp, #0x490]
014f5528  ldr      q1, [sp, #0x4a0]
014f552c  stp      q2, q3, [sp, #0x170]
014f5530  ldr      q2, [sp, #0x4b0]
014f5534  ldr      q3, [sp, #0x4c0]
014f5538  stp      q0, q1, [sp, #0x110]
014f553c  ldr      q0, [sp, #0x540]
014f5540  ldr      q1, [sp, #0x530]
014f5544  stp      q2, q3, [sp, #0x130]
014f5548  ldr      q2, [sp, #0x520]
014f554c  ldr      q3, [sp, #0x510]
014f5550  stp      q1, q0, [sp, #0xb0]
014f5554  ldr      q0, [sp, #0x580]
014f5558  ldr      q1, [sp, #0x570]
014f555c  stp      q3, q2, [sp, #0x90]
014f5560  ldr      q2, [sp, #0x560]
014f5564  ldr      q3, [sp, #0x550]
014f5568  stp      q1, q0, [sp, #0xf0]
014f556c  stp      q3, q2, [sp, #0xd0]
014f5570  bl       #0x2f15250  ; <Q6_Wh_vshuffoe_VhVh_HVXDBL>
014f5574  add      x1, sp, #0x390
014f5578  mov      x0, x22
014f557c  mov      w2, #0x80
014f5580  add      x23, x22, #0x80
014f5584  bl       #0x2f14a60  ; <memmove>
014f5588  mov      x0, x23
014f558c  mov      x1, x24
014f5590  mov      w2, #0x80
014f5594  bl       #0x2f14a60  ; <memmove>
014f5598  ldp      q0, q1, [sp, #0x1d0]
014f559c  ldp      q2, q3, [sp, #0x1f0]
014f55a0  stp      q0, q1, [x22, #0x140]
014f55a4  ldp      q0, q1, [sp, #0x190]
014f55a8  stp      q2, q3, [x22, #0x160]
014f55ac  ldp      q2, q3, [sp, #0x1b0]
014f55b0  stp      q0, q1, [x22, #0x100]
014f55b4  ldp      q1, q0, [x26, #0x20]
014f55b8  stp      q2, q3, [x22, #0x120]
014f55bc  ldp      q3, q2, [x26]
014f55c0  stp      q1, q0, [x22, #0x1a0]
014f55c4  ldp      q1, q0, [x26, #0x60]
014f55c8  stp      q3, q2, [x22, #0x180]
014f55cc  ldp      q3, q2, [x26, #0x40]
014f55d0  stp      q1, q0, [x22, #0x1e0]
014f55d4  ldr      w8, [sp, #0x84]
014f55d8  stp      q3, q2, [x22, #0x1c0]
014f55dc  cmp      w8, #3
014f55e0  b.lt     #0x14f5364
014f55e4  ldp      q0, q1, [x25, #0x140]
014f55e8  str      x19, [sp, #0x50]
014f55ec  mov      x19, x20
014f55f0  mov      w20, w28
014f55f4  mov      w28, w8
014f55f8  add      x8, sp, #0x390
014f55fc  add      x0, sp, #0x310
014f5600  str      q0, [sp, #0x650]
014f5604  add      x1, sp, #0x290
014f5608  add      x23, x22, #0x200
014f560c  ldp      q2, q3, [x25, #0x160]
014f5610  str      q1, [sp, #0x660]
014f5614  str      q2, [sp, #0x670]
014f5618  ldp      q0, q1, [x25, #0x100]
014f561c  str      q3, [sp, #0x680]
014f5620  str      q0, [sp, #0x610]
014f5624  ldp      q2, q3, [x25, #0x120]
014f5628  str      q1, [sp, #0x620]
014f562c  str      q2, [sp, #0x630]
014f5630  ldp      q0, q1, [x27, #0x140]
014f5634  str      q3, [sp, #0x640]
014f5638  str      q0, [sp, #0x5d0]
014f563c  ldp      q2, q3, [x27, #0x160]
014f5640  str      q1, [sp, #0x5e0]
014f5644  str      q2, [sp, #0x5f0]
014f5648  ldp      q0, q1, [x27, #0x100]
014f564c  str      q3, [sp, #0x600]
014f5650  str      q0, [sp, #0x590]
014f5654  ldp      q2, q3, [x27, #0x120]
014f5658  str      q1, [sp, #0x5a0]
014f565c  str      q2, [sp, #0x5b0]
014f5660  ldp      q0, q1, [x21, #0x140]
014f5664  str      q3, [sp, #0x5c0]
014f5668  str      q0, [sp, #0x550]
014f566c  ldp      q2, q3, [x21, #0x160]
014f5670  str      q1, [sp, #0x560]
014f5674  str      q2, [sp, #0x570]
014f5678  ldp      q0, q1, [x21, #0x100]
014f567c  str      q3, [sp, #0x580]
014f5680  str      q0, [sp, #0x510]
014f5684  ldp      q2, q3, [x21, #0x120]
014f5688  str      q1, [sp, #0x520]
014f568c  str      q2, [sp, #0x530]
014f5690  ldp      q0, q1, [x29, #0x140]
014f5694  str      q3, [sp, #0x540]
014f5698  str      q0, [sp, #0x4d0]
014f569c  ldp      q2, q3, [x29, #0x160]
014f56a0  str      q1, [sp, #0x4e0]
014f56a4  str      q2, [sp, #0x4f0]
014f56a8  ldp      q0, q1, [x29, #0x100]
014f56ac  str      q3, [sp, #0x500]
014f56b0  str      q0, [sp, #0x490]
014f56b4  ldp      q2, q3, [x29, #0x120]
014f56b8  str      q1, [sp, #0x4a0]
014f56bc  str      q2, [sp, #0x4b0]
014f56c0  ldr      q0, [sp, #0x5d0]
014f56c4  str      q3, [sp, #0x4c0]
014f56c8  ldr      q1, [sp, #0x5e0]
014f56cc  ldr      q2, [sp, #0x5f0]
014f56d0  ldr      q3, [sp, #0x600]
014f56d4  stp      q0, q1, [sp, #0x350]
014f56d8  ldr      q0, [sp, #0x590]
014f56dc  ldr      q1, [sp, #0x5a0]
014f56e0  stp      q2, q3, [sp, #0x370]
014f56e4  ldr      q2, [sp, #0x5b0]
014f56e8  ldr      q3, [sp, #0x5c0]
014f56ec  stp      q0, q1, [sp, #0x310]
014f56f0  ldr      q0, [sp, #0x640]
014f56f4  ldr      q1, [sp, #0x630]
014f56f8  stp      q2, q3, [sp, #0x330]
014f56fc  ldr      q2, [sp, #0x620]
014f5700  ldr      q3, [sp, #0x610]
014f5704  stp      q1, q0, [sp, #0x2b0]
014f5708  ldr      q0, [sp, #0x680]
014f570c  ldr      q1, [sp, #0x670]
014f5710  stp      q3, q2, [sp, #0x290]
014f5714  ldr      q2, [sp, #0x660]
014f5718  ldr      q3, [sp, #0x650]
014f571c  stp      q1, q0, [sp, #0x2f0]
014f5720  stp      q3, q2, [sp, #0x2d0]
014f5724  bl       #0x2f15250  ; <Q6_Wh_vshuffoe_VhVh_HVXDBL>
014f5728  ldr      q0, [sp, #0x4d0]
014f572c  add      x8, sp, #0x190
014f5730  ldr      q1, [sp, #0x4e0]
014f5734  add      x0, sp, #0x110
014f5738  ldr      q2, [sp, #0x4f0]
014f573c  add      x1, sp, #0x90
014f5740  ldr      q3, [sp, #0x500]
014f5744  stp      q0, q1, [sp, #0x150]
014f5748  ldr      q0, [sp, #0x490]
014f574c  ldr      q1, [sp, #0x4a0]
014f5750  stp      q2, q3, [sp, #0x170]
014f5754  ldr      q2, [sp, #0x4b0]
014f5758  ldr      q3, [sp, #0x4c0]
014f575c  stp      q0, q1, [sp, #0x110]
014f5760  ldr      q0, [sp, #0x540]
014f5764  ldr      q1, [sp, #0x530]
014f5768  stp      q2, q3, [sp, #0x130]
014f576c  ldr      q2, [sp, #0x520]
014f5770  ldr      q3, [sp, #0x510]
014f5774  stp      q1, q0, [sp, #0xb0]
014f5778  ldr      q0, [sp, #0x580]
014f577c  ldr      q1, [sp, #0x570]
014f5780  stp      q3, q2, [sp, #0x90]
014f5784  ldr      q2, [sp, #0x560]
014f5788  ldr      q3, [sp, #0x550]
014f578c  stp      q1, q0, [sp, #0xf0]
014f5790  stp      q3, q2, [sp, #0xd0]
014f5794  bl       #0x2f15250  ; <Q6_Wh_vshuffoe_VhVh_HVXDBL>
014f5798  add      x1, sp, #0x390
014f579c  mov      x0, x23
014f57a0  mov      w2, #0x80
014f57a4  add      x24, x22, #0x280
014f57a8  bl       #0x2f14a60  ; <memmove>
014f57ac  mov      x0, x24
014f57b0  ldr      x24, [sp, #0x48]
014f57b4  mov      w2, #0x80
014f57b8  mov      x1, x24
014f57bc  bl       #0x2f14a60  ; <memmove>
014f57c0  ldp      q0, q1, [sp, #0x1d0]
014f57c4  mov      w8, w28
014f57c8  mov      w28, w20
014f57cc  mov      x20, x19
014f57d0  cmp      w8, #5
014f57d4  ldp      q2, q3, [sp, #0x1f0]
014f57d8  stp      q0, q1, [x22, #0x340]
014f57dc  ldp      q0, q1, [sp, #0x190]
014f57e0  stp      q2, q3, [x22, #0x360]
014f57e4  ldp      q2, q3, [sp, #0x1b0]
014f57e8  stp      q0, q1, [x22, #0x300]
014f57ec  ldp      q1, q0, [x26, #0x20]
014f57f0  stp      q2, q3, [x22, #0x320]
014f57f4  ldp      q3, q2, [x26]
014f57f8  stp      q1, q0, [x22, #0x3a0]
014f57fc  ldp      q1, q0, [x26, #0x60]
014f5800  stp      q3, q2, [x22, #0x380]
014f5804  ldp      q3, q2, [x26, #0x40]
014f5808  stp      q1, q0, [x22, #0x3e0]
014f580c  ldr      x19, [sp, #0x50]
014f5810  stp      q3, q2, [x22, #0x3c0]
014f5814  b.lt     #0x14f5364
014f5818  add      x23, x25, #0x100
014f581c  add      x27, x27, #0x100
014f5820  add      x25, x29, #0x100
014f5824  add      x29, x21, #0x100
014f5828  add      x8, sp, #0x390
014f582c  add      x0, sp, #0x310
014f5830  ldp      q0, q1, [x23, #0x140]
014f5834  add      x1, sp, #0x290
014f5838  add      x21, x22, #0x400
014f583c  str      q0, [sp, #0x650]
014f5840  ldp      q2, q3, [x23, #0x160]
014f5844  str      q1, [sp, #0x660]
014f5848  str      q2, [sp, #0x670]
014f584c  ldp      q0, q1, [x23, #0x100]
014f5850  str      q3, [sp, #0x680]
014f5854  str      q0, [sp, #0x610]
014f5858  ldp      q2, q3, [x23, #0x120]
014f585c  str      q1, [sp, #0x620]
014f5860  str      q2, [sp, #0x630]
014f5864  ldp      q0, q1, [x27, #0x140]
014f5868  str      q3, [sp, #0x640]
014f586c  str      q0, [sp, #0x5d0]
014f5870  ldp      q2, q3, [x27, #0x160]
014f5874  str      q1, [sp, #0x5e0]
014f5878  str      q2, [sp, #0x5f0]
014f587c  ldp      q0, q1, [x27, #0x100]
014f5880  str      q3, [sp, #0x600]
014f5884  str      q0, [sp, #0x590]
014f5888  ldp      q2, q3, [x27, #0x120]
014f588c  str      q1, [sp, #0x5a0]
014f5890  str      q2, [sp, #0x5b0]
014f5894  ldp      q0, q1, [x29, #0x140]
014f5898  str      q3, [sp, #0x5c0]
014f589c  str      q0, [sp, #0x550]
014f58a0  ldp      q2, q3, [x29, #0x160]
014f58a4  str      q1, [sp, #0x560]
014f58a8  str      q2, [sp, #0x570]
014f58ac  ldp      q0, q1, [x29, #0x100]
014f58b0  str      q3, [sp, #0x580]
014f58b4  str      q0, [sp, #0x510]
014f58b8  ldp      q2, q3, [x29, #0x120]
014f58bc  str      q1, [sp, #0x520]
014f58c0  str      q2, [sp, #0x530]
014f58c4  ldp      q0, q1, [x25, #0x140]
014f58c8  str      q3, [sp, #0x540]
014f58cc  str      q0, [sp, #0x4d0]
014f58d0  ldp      q2, q3, [x25, #0x160]
014f58d4  str      q1, [sp, #0x4e0]
014f58d8  str      q2, [sp, #0x4f0]
014f58dc  ldp      q0, q1, [x25, #0x100]
014f58e0  str      q3, [sp, #0x500]
014f58e4  str      q0, [sp, #0x490]
014f58e8  ldp      q2, q3, [x25, #0x120]
014f58ec  str      q1, [sp, #0x4a0]
014f58f0  str      q2, [sp, #0x4b0]
014f58f4  ldr      q0, [sp, #0x5d0]
014f58f8  str      q3, [sp, #0x4c0]
014f58fc  ldr      q1, [sp, #0x5e0]
014f5900  ldr      q2, [sp, #0x5f0]
014f5904  ldr      q3, [sp, #0x600]
014f5908  stp      q0, q1, [sp, #0x350]
014f590c  ldr      q0, [sp, #0x590]
014f5910  ldr      q1, [sp, #0x5a0]
014f5914  stp      q2, q3, [sp, #0x370]
014f5918  ldr      q2, [sp, #0x5b0]
014f591c  ldr      q3, [sp, #0x5c0]
014f5920  stp      q0, q1, [sp, #0x310]
014f5924  ldr      q0, [sp, #0x640]
014f5928  ldr      q1, [sp, #0x630]
014f592c  stp      q2, q3, [sp, #0x330]
014f5930  ldr      q2, [sp, #0x620]
014f5934  ldr      q3, [sp, #0x610]
014f5938  stp      q1, q0, [sp, #0x2b0]
014f593c  ldr      q0, [sp, #0x680]
014f5940  ldr      q1, [sp, #0x670]
014f5944  stp      q3, q2, [sp, #0x290]
014f5948  ldr      q2, [sp, #0x660]
014f594c  ldr      q3, [sp, #0x650]
014f5950  stp      q1, q0, [sp, #0x2f0]
014f5954  stp      q3, q2, [sp, #0x2d0]
014f5958  bl       #0x2f15250  ; <Q6_Wh_vshuffoe_VhVh_HVXDBL>
014f595c  ldr      q0, [sp, #0x4d0]
014f5960  add      x8, sp, #0x190
014f5964  ldr      q1, [sp, #0x4e0]
014f5968  add      x0, sp, #0x110
014f596c  ldr      q2, [sp, #0x4f0]
014f5970  add      x1, sp, #0x90
014f5974  ldr      q3, [sp, #0x500]
014f5978  stp      q0, q1, [sp, #0x150]
014f597c  ldr      q0, [sp, #0x490]
014f5980  ldr      q1, [sp, #0x4a0]
014f5984  stp      q2, q3, [sp, #0x170]
014f5988  ldr      q2, [sp, #0x4b0]
014f598c  ldr      q3, [sp, #0x4c0]
014f5990  stp      q0, q1, [sp, #0x110]
014f5994  ldr      q0, [sp, #0x540]
014f5998  ldr      q1, [sp, #0x530]
014f599c  stp      q2, q3, [sp, #0x130]
014f59a0  ldr      q2, [sp, #0x520]
014f59a4  ldr      q3, [sp, #0x510]
014f59a8  stp      q1, q0, [sp, #0xb0]
014f59ac  ldr      q0, [sp, #0x580]
014f59b0  ldr      q1, [sp, #0x570]
014f59b4  stp      q3, q2, [sp, #0x90]
014f59b8  ldr      q2, [sp, #0x560]
014f59bc  ldr      q3, [sp, #0x550]
014f59c0  stp      q1, q0, [sp, #0xf0]
014f59c4  stp      q3, q2, [sp, #0xd0]
014f59c8  bl       #0x2f15250  ; <Q6_Wh_vshuffoe_VhVh_HVXDBL>
014f59cc  add      x1, sp, #0x390
014f59d0  mov      x0, x21
014f59d4  mov      w2, #0x80
014f59d8  add      x24, x22, #0x480
014f59dc  bl       #0x2f14a60  ; <memmove>
014f59e0  mov      x0, x24
014f59e4  ldr      x24, [sp, #0x48]
014f59e8  mov      w2, #0x80
014f59ec  mov      x1, x24
014f59f0  bl       #0x2f14a60  ; <memmove>
014f59f4  ldp      q0, q1, [sp, #0x1d0]
014f59f8  str      q0, [x22, #0x540]
014f59fc  ldp      q2, q0, [sp, #0x1f0]
014f5a00  str      q1, [x22, #0x550]
014f5a04  str      q2, [x22, #0x560]
014f5a08  ldp      q1, q2, [sp, #0x190]
014f5a0c  str      q0, [x22, #0x570]
014f5a10  str      q1, [x22, #0x500]
014f5a14  ldp      q0, q1, [sp, #0x1b0]
014f5a18  str      q2, [x22, #0x510]
014f5a1c  str      q0, [x22, #0x520]
014f5a20  ldp      q0, q2, [x26, #0x20]
014f5a24  str      q1, [x22, #0x530]
014f5a28  str      q0, [x22, #0x5a0]
014f5a2c  str      q2, [x22, #0x5b0]
014f5a30  ldr      w8, [sp, #0x84]
014f5a34  ldp      q2, q1, [x26]
014f5a38  cmp      w8, #7
014f5a3c  str      q2, [x22, #0x580]
014f5a40  str      q1, [x22, #0x590]
014f5a44  ldp      q1, q0, [x26, #0x60]
014f5a48  str      q1, [x22, #0x5e0]
014f5a4c  str      q0, [x22, #0x5f0]
014f5a50  ldp      q0, q2, [x26, #0x40]
014f5a54  str      q0, [x22, #0x5c0]
014f5a58  str      q2, [x22, #0x5d0]
014f5a5c  b.lt     #0x14f5364
014f5a60  add      x9, x23, #0x100
014f5a64  add      x11, x27, #0x100
014f5a68  add      x10, x29, #0x100
014f5a6c  add      x8, x25, #0x100
014f5a70  add      x0, sp, #0x310
014f5a74  add      x1, sp, #0x290
014f5a78  ldp      q0, q1, [x9, #0x140]
014f5a7c  add      x23, x22, #0x600
014f5a80  str      q0, [sp, #0x650]
014f5a84  ldp      q2, q3, [x9, #0x160]
014f5a88  str      q1, [sp, #0x660]
014f5a8c  str      q2, [sp, #0x670]
014f5a90  ldp      q0, q1, [x9, #0x100]
014f5a94  str      q3, [sp, #0x680]
014f5a98  str      q0, [sp, #0x610]
014f5a9c  ldp      q2, q3, [x9, #0x120]
014f5aa0  str      q1, [sp, #0x620]
014f5aa4  str      q2, [sp, #0x630]
014f5aa8  ldp      q0, q1, [x11, #0x140]
014f5aac  str      q3, [sp, #0x640]
014f5ab0  str      q0, [sp, #0x5d0]
014f5ab4  ldp      q2, q3, [x11, #0x160]
014f5ab8  str      q1, [sp, #0x5e0]
014f5abc  str      q2, [sp, #0x5f0]
014f5ac0  ldp      q0, q1, [x11, #0x100]
014f5ac4  str      q3, [sp, #0x600]
014f5ac8  str      q0, [sp, #0x590]
014f5acc  ldp      q2, q3, [x11, #0x120]
014f5ad0  str      q1, [sp, #0x5a0]
014f5ad4  str      q2, [sp, #0x5b0]
014f5ad8  ldp      q0, q1, [x10, #0x140]
014f5adc  str      q3, [sp, #0x5c0]
014f5ae0  str      q0, [sp, #0x550]
014f5ae4  ldp      q2, q3, [x10, #0x160]
014f5ae8  str      q1, [sp, #0x560]
014f5aec  str      q2, [sp, #0x570]
014f5af0  ldp      q0, q1, [x10, #0x100]
014f5af4  str      q3, [sp, #0x580]
014f5af8  str      q0, [sp, #0x510]
014f5afc  ldp      q2, q3, [x10, #0x120]
014f5b00  str      q1, [sp, #0x520]
014f5b04  str      q2, [sp, #0x530]
014f5b08  ldp      q0, q1, [x8, #0x140]
014f5b0c  str      q3, [sp, #0x540]
014f5b10  str      q0, [sp, #0x4d0]
014f5b14  ldp      q2, q3, [x8, #0x160]
014f5b18  str      q1, [sp, #0x4e0]
014f5b1c  str      q2, [sp, #0x4f0]
014f5b20  ldp      q0, q1, [x8, #0x100]
014f5b24  str      q3, [sp, #0x500]
014f5b28  str      q0, [sp, #0x490]
014f5b2c  ldp      q2, q3, [x8, #0x120]
014f5b30  str      q1, [sp, #0x4a0]
014f5b34  add      x8, sp, #0x390
014f5b38  str      q2, [sp, #0x4b0]
014f5b3c  ldr      q0, [sp, #0x5d0]
014f5b40  str      q3, [sp, #0x4c0]
014f5b44  ldr      q1, [sp, #0x5e0]
014f5b48  ldr      q2, [sp, #0x5f0]
014f5b4c  ldr      q3, [sp, #0x600]
014f5b50  stp      q0, q1, [sp, #0x350]
014f5b54  ldr      q0, [sp, #0x590]
014f5b58  ldr      q1, [sp, #0x5a0]
014f5b5c  stp      q2, q3, [sp, #0x370]
014f5b60  ldr      q2, [sp, #0x5b0]
014f5b64  ldr      q3, [sp, #0x5c0]
014f5b68  stp      q0, q1, [sp, #0x310]
014f5b6c  ldr      q0, [sp, #0x640]
014f5b70  ldr      q1, [sp, #0x630]
014f5b74  stp      q2, q3, [sp, #0x330]
014f5b78  ldr      q2, [sp, #0x620]
014f5b7c  ldr      q3, [sp, #0x610]
014f5b80  stp      q1, q0, [sp, #0x2b0]
014f5b84  ldr      q0, [sp, #0x680]
014f5b88  ldr      q1, [sp, #0x670]
014f5b8c  stp      q3, q2, [sp, #0x290]
014f5b90  ldr      q2, [sp, #0x660]
014f5b94  ldr      q3, [sp, #0x650]
014f5b98  stp      q1, q0, [sp, #0x2f0]
014f5b9c  stp      q3, q2, [sp, #0x2d0]
014f5ba0  bl       #0x2f15250  ; <Q6_Wh_vshuffoe_VhVh_HVXDBL>
014f5ba4  ldr      q0, [sp, #0x4d0]
014f5ba8  add      x8, sp, #0x190
014f5bac  ldr      q1, [sp, #0x4e0]
014f5bb0  add      x0, sp, #0x110
014f5bb4  ldr      q2, [sp, #0x4f0]
014f5bb8  add      x1, sp, #0x90
014f5bbc  ldr      q3, [sp, #0x500]
014f5bc0  stp      q0, q1, [sp, #0x150]
014f5bc4  ldr      q0, [sp, #0x490]
014f5bc8  ldr      q1, [sp, #0x4a0]
014f5bcc  stp      q2, q3, [sp, #0x170]
014f5bd0  ldr      q2, [sp, #0x4b0]
014f5bd4  ldr      q3, [sp, #0x4c0]
014f5bd8  stp      q0, q1, [sp, #0x110]
014f5bdc  ldr      q0, [sp, #0x540]
014f5be0  ldr      q1, [sp, #0x530]
014f5be4  stp      q2, q3, [sp, #0x130]
014f5be8  ldr      q2, [sp, #0x520]
014f5bec  ldr      q3, [sp, #0x510]
014f5bf0  stp      q1, q0, [sp, #0xb0]
014f5bf4  ldr      q0, [sp, #0x580]
014f5bf8  ldr      q1, [sp, #0x570]
014f5bfc  stp      q3, q2, [sp, #0x90]
014f5c00  ldr      q2, [sp, #0x560]
014f5c04  ldr      q3, [sp, #0x550]
014f5c08  stp      q1, q0, [sp, #0xf0]
014f5c0c  stp      q3, q2, [sp, #0xd0]
014f5c10  bl       #0x2f15250  ; <Q6_Wh_vshuffoe_VhVh_HVXDBL>
014f5c14  add      x1, sp, #0x390
014f5c18  mov      x0, x23
014f5c1c  mov      w2, #0x80
014f5c20  add      x24, x22, #0x680
014f5c24  bl       #0x2f14a60  ; <memmove>
014f5c28  mov      x0, x24
014f5c2c  ldr      x24, [sp, #0x48]
014f5c30  mov      w2, #0x80
014f5c34  mov      x1, x24
014f5c38  bl       #0x2f14a60  ; <memmove>
014f5c3c  ldp      q0, q1, [sp, #0x1d0]
014f5c40  str      q0, [x22, #0x740]
014f5c44  ldp      q2, q0, [sp, #0x1f0]
014f5c48  str      q1, [x22, #0x750]
014f5c4c  str      q2, [x22, #0x760]
014f5c50  ldp      q1, q2, [sp, #0x190]
014f5c54  str      q0, [x22, #0x770]
014f5c58  str      q1, [x22, #0x700]
014f5c5c  ldp      q0, q1, [sp, #0x1b0]
014f5c60  str      q2, [x22, #0x710]
014f5c64  str      q0, [x22, #0x720]
014f5c68  ldp      q0, q2, [x26, #0x20]
014f5c6c  str      q1, [x22, #0x730]
014f5c70  str      q0, [x22, #0x7a0]
014f5c74  str      q2, [x22, #0x7b0]
014f5c78  ldp      q2, q1, [x26]
014f5c7c  str      q2, [x22, #0x780]
014f5c80  str      q1, [x22, #0x790]
014f5c84  ldp      q1, q0, [x26, #0x60]
014f5c88  str      q1, [x22, #0x7e0]
014f5c8c  str      q0, [x22, #0x7f0]
014f5c90  ldp      q0, q2, [x26, #0x40]
014f5c94  str      q0, [x22, #0x7c0]
014f5c98  str      q2, [x22, #0x7d0]
014f5c9c  b        #0x14f5364
014f5ca0  add      sp, sp, #0x690
014f5ca4  ldp      x20, x19, [sp, #0x50]
014f5ca8  ldp      x22, x21, [sp, #0x40]
014f5cac  ldp      x24, x23, [sp, #0x30]
014f5cb0  ldp      x26, x25, [sp, #0x20]
014f5cb4  ldp      x28, x27, [sp, #0x10]
014f5cb8  ldp      x29, x30, [sp], #0x60
014f5cbc  ret      
