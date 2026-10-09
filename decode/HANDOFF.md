# OffLineM9 移交文档（2026-10-09）

## 1. 目标与硬约束

- 目标：离线、跨设备的 RAW 渲染器，复现 **小米 17 Ultra by Leica「徕卡一瞬 · M9」快照**。不是实时相机。
- 真值来源：17U ROM `G:\LEICA\17u\nezha_images_OS3.0.308.0.WPACNXM_16.0`（nezha，OS3.0.308）。
- 参考包 `材料\xiaomi15-v7604-delivery-20260823.zip`（15U 移植 MOD）**只作线索，不照搬**。
- **没有 17U 的 DNG，也没有 17U 真机**。不要去 G:\LEICA 里找样张。
- 用户有一台**同平台 OPPO 手机（SM8850 / HTP V81）**：只能作为偶尔使用的"钥匙"，帮助拆解某个格式；**不能频繁用于比对对错，不能用于生成数据，禁止蒸馏或训练替代网络**。网络必须从 ROM 权重精确还原。动手机之前先征求用户确认。
- 中间文件用完及时清理（各盘剩余空间都只有约 17%）。
- 用户允许自由安装工具（WSL 里用 `wsl -u root` 免密执行 apt）。

## 2. 当前进度一览

| 模块 | 状态 |
|---|---|
| ROM 提取 | ✅ `rom/odm`、`rom/vendor` 已解包（product/system 已删，可按 §6 重建） |
| LeicaFilter（LUT + CvStyle 暗角） | ✅ 完整实现 `m9/leicafilter.py`，规则与参数文件格式已核实 |
| 端到端 MVP | ✅ `python -m m9.render in.dng -o out.jpg`（前端色调为占位实现，StyleTrans 未接入时使用插件自带的 preview 参数回退） |
| StyleTrans 网络结构 | ✅ 拓扑基本确定（见 §4） |
| StyleTrans 权重 int8 解码 | ✅ 排布、基址已确定 |
| 逐通道乘数 / 偏置 → 浮点 | ⏳ 进行中（见 §5，最后一步） |
| colorfix 网络 | ❌ 未开始（同格式，工具可复用） |
| 前端（AllInOne + IPE/chromatix） | ❌ 未开始（只有占位色调） |
| humanseg 抠图掩码（网络第 4 输入通道） | ❌ 未开始，可先用全 0 或全 1 |

## 3. 管线（`odm/etc/camera/xiaomi/legendsnapshot.json`）

```
RAW10 → mialgoanchor → MFNR → B2Y → FormatConvertor → AllInOne(RAW16→RGB161616)
      → offcamb2y(RGB16→NV12, IPE+chromatix) → legendST(StyleTrans NN) → Depurple
      → WideLDC → LDC → mileicafilter(LUT+CvStyle) → Watermark → JPEG / Ultra HDR
```

- StyleTrans：`odm/lib64/libmialgo_styletrans.so`；模型 `odm/etc/camera/styletrans/styletrans_{low,high,colorfix}.minn`；
  参数 `styletrans_params.json`（low/high 按 `lux_threshold_daytime=260` 选择，colorfix 与 `cct_threshold=4692` 相关；
  输入 `1×864×1120×4`（RGB + 人像抠图掩码），输出 `1×864×1120×3`；colorfix 为 `544×544×6→3`）。
  库里还有 HDRNet 式 `bilatera_slice_u8c3`、`colorfix` 分块、`pad_input`、`resize`，**全分辨率回贴逻辑尚未逆向**（入口 `MialgoAi_DIPS_Run`，主流程函数 `0x449518`，styletrans 处理 `0x444694`，colorfix `0x44788c`）。
- LeicaFilter：插件 `mileicafilter.so`（带符号），渲染 `vendor/lib64/libMiPhotoFilter.so`（GLES 着色器明文）。
  **StyleTrans 未运行时插件改用 preview 参数**（preview LUT 内含网络风格的近似）。

## 4. StyleTrans 网络（已还原的结构）

- 解密：`.minn` 头 `NNiM` 0x1E 字节，之后 XOR，周期 16，key=`"legend"+"d"*10` → QNN 2.33 **HTP context binary**（W8A16）。
- 头部：`_Slice`=RGB→`pixel_unshuffle(4)`→48ch；`_Slice_1`=掩码→`down4x`(AvgPool 4×4)→1ch；`module_cat`→49ch；`conv_first` 3×3 49→64（权重存为 64×64，多余输入通道补 0）。
- 20 个 body，每个：
  ```
  x0 → r1 = RDB1(x0); c1 = conv1_1x1(cat(x0,r1))          [128→64]
       r2 = RDB2(c1); c2 = conv2_1x1(cat(x0,r1,r2))        [192→64]
       r3 = RDB3(c2); out = fixed_1x1(cat(r3_out, x0))     [128→64, 固定系数 ≈1.0/0.2]
  RDB(x 64ch):  chain = 5×(3×3 32→32)，前 4 层 ReLU（输出 zp=0）
                fixed = 0.2·chain + 半A           （64→32 固定 1×1，权重 127/25）
                out   = conv_out_1x1(cat(fixed, 半B))   [64→64]
  ```
  ⚠ chain 读取的是 x 的哪一半（前/后 32 通道）、concat 的通道顺序还要最终确认（看视图块地址或 fixed 权重排布）。
- 尾部：`conv_body` 3×3 64→64 → `module_cat_181` → `fixed_conv_conv`(128→64) → `tail_conv_0`(1×1 64→32) →
  `tail_up1_conv_transpose`(×2，x2s_opt 实现) → `tail_conv_1` 3×3 → `tail_up2_conv_transpose`(×2，权重 [3,3,4,32]) →
  `tail_conv_2` 3×3 → `tail_conv_last` 3×3 32→3。tail_up1 的权重常量尚未定位。
- 权重统计：3×3×32×32 ×302、3×3×64×64 ×2、1×1 64→32 ×57（去重后）、64→64 ×60、128→64 ×40、192→64 ×20。

## 5. HTP 格式要点（全部从 ROM 自带库静态逆向，未用手机）

工具见 `tools/`。核心事实：

- **常量数据基址** `B = 0x58AAD0`（仅 low 模型；high/colorfix 需各自重算，方法：偏置组均满足地址 ≡ 0xD0 mod 256，`B = 偏置区起点 − 最小偏置偏移×64`；或取 fixed_conv 稀疏区第一个非零字节）。地址 = `B + (data_off & 0xFFFF)·64`。
- **3×3 权重**：9 个 tap 按 [ky][kx]，每 tap 1024 B，tile 内 `off=(ci//4)*128 + co*4 + ci%4`，int8，**逐通道量化**（每通道最大值 127/128）。1×1（xpb/xsb）同样的 tile 布局，Cin 方向多个 1024 B 块。
- **偏置块（Fi）**：每 32 输出通道 512 B = 2 组 ×（16 对 (m0,m1) + 16 对 (bias,0)）。`bias_mxmem2` 映射：槽 2c=(m0_c, bias_c)，槽 2c+1=(m1_c, 0)。
- **HMX 输出转换**（`libQnnHtpPrepare.so` 0x2EEDAF0 / 0x2EEE3D0）：
  `acc = a + (b>>8) + bias`（a/b 为 16 位激活高/低字节累加）；`v=(acc<<exp)>>7`；`r=round(mant·v/4096)`；out16≈r>>8；
  `mant=((bit16<<11)|(bits0-9<<1)|bit31)^0x800`，`exp=bits10-14`，mode=bits15,17,18，flag=bit22。
  ⚠ fixed_conv 等的 m0 还用了 bit23–30，m1 像浮点 → 还有别的转换路径未解读。
- **编译期公式（最后读到的）`bias_convert_v73`（0x1A47B98）**：`bias_int[c] = round(bias_f[c] / (s_in · s_w[c] · 2^shift))`（shift 来自一个标量参数，>0 时生效；补齐通道填常量）。
  下一步读 `conv_scale_from_weight_conversion`（vtable 0x2F5F028，execute 首项 0x1A42E90）和 `combine_scales`，即可得到 m0/m1 的精确生成公式 → 浮点权重 `W=q·s_w[c]`、偏置 `b=bias_int·s_in·s_w[c]·2^shift`。
- **记录流语法**：`id(0x1303xxxx，bit31=标志) | kind(mode<<28|op) | u64(node,hash) | extra{m1:0,m2:1,m3:1,m0:2} | n_in 输入序号 | 输出张量…`；
  张量序号顺序分配：Const=1、普通算子=1/输出、`@DummyOpN`=N、调度算子 0；Concat 变长（`t&0xFFFF`=个数）。全模型 1085/1085 锚点自洽。
- **张量体**：量化接口（def: id|0x80000000, zp, f32）→ Shape<4>（每维半字节：低 2 位模式，bit2 显式分配长，bit3 前置偏移；模式1 `dim=低16, alloc=dim+byte2, off=byte3`）→ 块表（Crouton_16 块=8×4×32×2B，Crouton_8 块=8×8×32；块编码 4 种，见 `htpblocks.py`；块表可共享，`bit30`=槽位引用）。
- **Spill/Fill**：`[node][hash][len][seq][ddr_pool][n][ddr_off] n×(tcm|1,size)`。
- `htpflow.py` 用内存模拟恢复真实数据流（每 2 KB 记最后写入者）；body 内结果干净，tail 部分仍有噪声（halo 陈旧写入）。

## 6. 工具与环境

- `tools/superx.py`：稀疏 super.img → 逻辑分区；`tools/extract_erofs.sh`、`extract_system.sh`（WSL 里跑 `fsck.erofs`）。
- `tools/a64.py`：ARM64 静态分析（`xref` 字符串交叉引用、`func` 带注释反汇编、`calls`、`funcs`）。
- `tools/htpctx.py`（解密、记录切分、Const 解析、名字表）、`htpgraph.py`（张量序号/输入）、`htpblocks.py`（形状/块表）、`htpflow.py`（数据流）。
- `re/styletrans/prepare_syms.txt`：`libQnnHtpPrepare.so` 反修饰后的符号（地址 大小 名字）。
- `emu/`：qemu + 17U bionic sysroot（`tools/mk_sysroot.sh`，`tools/qrun.sh <bin>`）。`emu/src/qnn_min.h` 为自写 QNN 头（函数表顺序、`sizeof(Qnn_Tensor_t)=0x90` 已核实）。
  `gen_conv` 想在 qemu 里用 17U `libQnnHtp.so` 生成参照图，但后端会探测 SoC 并连接 FastRPC → 失败；改走静态读 Prepare 源码路线，此路暂缓。
- Python：`C:\Users\zhang\miniconda3\python.exe`（numpy/cv2/rawpy/lief/capstone/pyelftools/tifffile/torch+CUDA）。
- WSL Ubuntu-24.04：erofs-utils、qemu-user-static、llvm（Hexagon 后端可用于反汇编 `vendor/lib/rfsa/adsp/libQnnHtpV81*.so`）。
- 重建删除的分区：`python tools/superx.py <super.img> extract product_a rom/product_a.img`，再在 WSL 里跑 `fsck.erofs --extract`。

## 7. 建议的下一步（按顺序）

1. 读完 `conv_scale_from_weight_conversion` / `combine_scales`（Prepare 库），确定 m0/m1（含 bit23–30、浮点 m1）的生成公式；用 fixed_conv（真值 1.0/0.2）和 concat 共享编码做自洽检验。
2. 写 `m9/styletrans_export.py`：把 low/high/colorfix 三个模型导出为 PyTorch 浮点权重（`.npz`），PyTorch 实现网络（§4）。确认 RDB 半通道选择与 concat 顺序。
3. 用自然图片跑浮点网络，检查各层激活是否落在 HTP 量化编码范围内（ROM 内部自洽，不用手机）。
4. 逆向 `libmialgo_styletrans.so` 的前后处理：YUV→RGB、864×1120 缩放/padding、low/high 选择、colorfix 用法、全分辨率回贴（疑似 bilateral grid / 引导滤波）。
5. 接入 `m9/render.py`，`style="snapshot"` 时走 StyleTrans + snapshot LUT。
6. 前端：解析 `odm/lib64/camera/com.qti.tuned.nezha_*_ovx10500u_wide_*.bin`（chromatix：CCM、gamma、LTM），替换占位色调。
7. （可选）humanseg 掩码、Depurple、LDC、Ultra HDR 增益图。

## 8. 记忆文件

`C:\Users\zhang\.claude\projects\F--OffLineM9\memory\`：项目目标、无样张、禁蒸馏/手机仅作钥匙、及时清理。

## 9. 2026-10-09 续：乘数公式已解（§7 第1步完成）

来源：`libQnnHtpPrepare.so` HMX 模拟器——转换函数表 0x316D9F8（7 种模式），W8A16 用模式 6
（0x2EEE578 + 核心 0x2EEDCE8，每通道占两列 HMX）。反汇编存于 `re/styletrans/hmx_core2_2eedce8.s`、`hmx_disp.s`。
- Fi 块：通道 c = 2k+g（g 组、k 组内序号），旧版"槽 2c"的理解是错的。
- `mant22 = ((m1.b16<<10 | m1[0:10])<<11 | m0[0:10]<<1 | m0.b31) ^ 0x200000`，`e = m0[10:15]`
- `out16 = (Σq·act16/256 + bias)·2^(e-7)·mant22/2^30 + zpf/16`，`zpf = m1[23:31]<<12 | m0[19:31]`（= zp_out+0.5）
- bias 已扣除 `zp_in·Σq/256`（激活按原始 u16 累加）。⇒ `W = q·F·s_out/s_in`，`b = 256·F·s_out·(bias + zp_in·Σq/256)`，`F = mant22·2^(e-45)`
- `conv_scale_from_weights` 只用于非对称权重，本模型恒为 1，可忽略。
- 验证：486/486 个卷积 zp 精确吻合；同一节点的两套编码（conv_first、body_x_fixed 等共 49 对）还原出的浮点权重相差约 3e-7；fixed conv 还原为 1.0/0.2（量化截断导致 0.97–1.0）。
- 权重 tile 顺序：Xwb 3×3 为 [co_blk][ci_blk][tap]；Xsb/Xpb 1×1 为 [ci_blk][co_blk]。
- tail_up1/up2 = nearest ×2（恒等 3×3 单抽头卷积 + 复制 4 份通道块的视图 + x2s_opt depth-to-space），增益 0.998。
- 总 fixed_conv_conv = conv_body + conv_first（两半都是 1.0）；conv_first 的 ci48 = 掩码，ci49..63 为 0；tail_conv_last 只有 3 个有效输出通道。
- 代码：`tools/htpquant.py`、`m9/styletrans_export.py`（→ `out/styletrans/low.npz`）、`m9/styletrans_net.py`。
- 3×3 抽头每行内 kx 倒序存放：tap = ky*3 + (2-kx)（块状输入实验 + 高频相关性 0.07→0.86 确认；修正前输出有 4px 锯齿）。
- 接线（地址追踪 cat2，干净）：A=x[:32]→chain 和 fixed，B=x[32:]→conv_out；conv1=cat(x,r1)，conv2=cat(x,r1,r2)，fixed=cat(r3,x)。
- high：基址同样是 0x58AAD0（136/136）；tail 的输入编码改为取拓扑上游（数据流解码会把 tail_conv_1 的输入错读成它自己的输出编码）。
- 结果：`out/styletrans/{low,high}.npz`，`m9/styletrans_net.py` 输出合理（mvp_test 上与输入的相关系数 0.99，无伪影）。

### colorfix（U-Net，544×544×6→3）
- 它的 op/格式名表编号和 low/high 不同 → 工具改为按名字查（Const、fi/xwb/CH…）；记录流从 0x5CE0 开始（Model 新增 lo 参数）。
- B=0x82800（Fi 块结构 108/108）；`0x40000004 + 字节偏移` 是第二种寻址方式（同样相对 B）。
- 导出：`export_unet`（`m9/styletrans_export.py`）→ `out/styletrans/colorfix.npz`；网络 `m9/colorfix_net.py`。
  编码器 32/64/128/256/512（maxpool）；上采样 = 1×1 卷积出 4 个相位 + x2s；Fi 由 4 个相位共享。
- x2s（16 位 Crouton 快速路径 0x14F5210，经 vtable 定位）：4 个输入通道块的偏移 = 相位×nCB，即 DCR 排列，通道 = (a*2+b)*C + c；
  vshuffoe 的偶/奇半字对应 b=0/1，相位 0/1 写偶数行、2/3 写奇数行。注意：TV、棋盘格等统计指标在这里会误导，以实现代码为准。
- 解码器 concat 顺序 = cat(skip, up)（编码越界率 0.04%，反过来约 0.4%，输出与图像的相关系数 0.99）。
- 未决：6 个输入通道的含义（暂按 [原图 RGB, 风格化 RGB] 测试，顺序待第 4 步逆向 libmialgo 确认）；low 的 tail_up 对齐偏移按 0 处理。
