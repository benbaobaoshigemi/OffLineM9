# OffLineM9 逆向笔记

> 最新、完整的状态与下一步见 [HANDOFF.md](HANDOFF.md)。本文件保留早期笔记。

目标：离线、跨设备复现小米 17 Ultra「徕卡一瞬 · M9」快照渲染。
真值来源：17U ROM `nezha OS3.0.308.0.WPACNXM`（`G:\LEICA\17u\...`）。无 17U 样张、无真机。

## ROM 提取
- `tools/superx.py`：稀疏 super.img 随机访问 + LP 元数据解析，直接导出逻辑分区。
- 分区为 EROFS，用 WSL `fsck.erofs --extract`（`tools/extract_erofs.sh`）。解出于 `rom/{odm,vendor,product}`。

## 17U M9 快照管线（odm/etc/camera/xiaomi/legendsnapshot.json）
```
RAW10 → mialgoanchor → MFNR → B2Y → FormatConvertor → AllInOne(RAW16→RGB161616)
      → offcamb2y(RGB16→NV12, IPE+chromatix) → legendST(StyleTrans NN) → Depurple
      → WideLDC → LDC → mileicafilter(LUT+CvStyle) → Watermark → JPEG / Ultra HDR
```

## LeicaFilter（已完成，`m9/leicafilter.py`）
- 插件 `odm/lib64/camera/plugins/com.xiaomi.plugin.mileicafilter.so`（带 C++ 符号）。
- 渲染 `vendor/lib64/libMiPhotoFilter.so`（GLES，着色器明文，见 `re/leicafilter/shaders_all.txt`）。
- 脚本：`CubeLutEffect;cube_strength=1.0;lut_type=1.0;` + 可选
  `CvStyleEffect;Width;Height;SmoothStartValue;SmoothEndValue;SmoothCoordScale;SmoothValueScale;LightDarkPreserveK/B/V/T`。
- 参数文件格式见 `m9/leicafilter.py` 顶部注释。114 张 17³ u8 LUT（[r][g][b]，texel=B,G,R），55 组 CvStyle 参数。
- `ParamTrigger::triggerLut`：lux-index × CCT 双线性（档内平台、档间空隙线性），4 张 LUT 浮点加权后 `trunc`。
- `triggerShading`：选最大的 ≤zoom 的变焦档（不插值），再同样 lux×CCT 插值 8 个 float。
- **StyleTrans 未运行时插件改用 preview 参数**（日志 "use pre param for M9"）；preview LUT 烘焙了 NN 风格近似。

## StyleTrans（进行中）
- 插件 `legendST.so` → `odm/lib64/libmialgo_styletrans.so`（含 OpenCV 4.8、mape 框架）。
- 模型 `odm/etc/camera/styletrans/styletrans_{low,high,colorfix}.minn`：头 `NNiM` 0x1E 字节，
  其后按 16 字节周期 XOR，key = `"legend" + "d"*10`。解密后是 **QNN 2.33 HTP context binary**。
- low/high 按 `lux_threshold_daytime=260` 选择；colorfix 与 `cct_threshold=4692` 有关。
- 输入 `1×864×1120×4` u8（scale 0.007843, offset −128），输出 `1×864×1120×3`；colorfix `544×544×6 → 3`。
- 网络：pixel_unshuffle → conv_first → body_0..19（每个 3×rdb，含 block1/2 conv1/2、fixed_conv、module_cat）
  → conv_body → tail_up1/up2 conv_transpose → tail_conv_0..2 → tail_conv_last。≈Real-ESRGAN RRDBNet(scale=1) 轻量学生网络。
- HTP 权重为 `Xwb/Xpb/Xsb` 打包 + crouton 布局，约 3.7 MB（解密后 0x5D0000–0x970000）。

### HTP context binary 解析（`tools/htpctx.py`）
- 对象流：`u32 id(0x1303xxxx) | u32 kind(class<<28 | op 类型号)`；op 类型名表 tag `0x6F4390BC`（32 种），
  张量格式表 tag `0x74438BBC`（fB,s4,ni,FB,cB,CB,fi,CH,Fi,cH,xwb,Xwb,xpb,Xpb,xsb,Xsb）。
- 名字表：`[u32 node_id][u32 4][u32 len][str]`，node_id 即原 ONNX 节点按拓扑序编号；Const 记录的首字段就是 node_id。
- Const 记录：`node, hash, ctype, [quant def/ref], [shape def/ref], data_off`。高位 0x80000000 = 定义新对象（量化：zp,f32 scale；
  形状：0xCCCC0001, flags(每个非零半字节=一维), dims…），否则为引用。
- **常量数据基址 B = 0x58AAD0（low 模型），地址 = B + (data_off & 0xFFFF)·64**。由偏置组对齐与 fixed_conv 稀疏区起点两条独立证据确定。
- 3×3 权重 `[3,3,32,32]` int8：9 个 tap 按 [ky][kx] 连续，每 tap 1024 B，tile 内 `off=(ci//4)*128 + co*4 + ci%4`。
  每个输出通道都用满 ±127/128 ⇒ 实为逐通道量化。
- fixed_conv `[64,32]`（同 tile 布局）：`out[o] = 0.2·in[o] + 1.0·in[32+o]`（RRDB 残差缩放，经 concat + 固定 1×1 实现）。
- 偏置块（Const ctype 6, dims [128]）实占 512 B：2 组 ×（16 对 `(m0,m1)` + 16 对 `(int32 bias, 0)`）。
  m0 = 符号位 | 0x40<<16 | lo16，lo16/2^14≈0.94–1.06（逐通道比例），m1 ∈[0,1023]（低位扩展）。精确语义待定。
- 激活为 16 bit（W8A16）；块内卷积输出 zp=0（融合 ReLU）。
- 库内另有 HDRNet 式 `bilatera_slice_u8c3`（16×16×8 网格、ccm/shift/slope 引导），归属待确认。

## 前端
- 主摄 OVX10500U：`odm/lib64/camera/com.qti.tuned.nezha_{ofilm,semco}_ovx10500u_wide_{ii,i}.bin`（chromatix，未解析）。
