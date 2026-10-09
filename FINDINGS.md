# 17U M9 逆向：顺带发现（为后续活体移植保留）

记录在拆解过程中发现、当前前端未必用到，但对"活体移植"可能关键的事实。
每条注明来源（库 + 地址/偏移）和可信度。

## 工具 / 运行环境
- qemu-aarch64 + 17U bionic/vendor 可直接驱动 `camera.qcom.core.so` 的 TuningDataManager 解析任意 tuned.bin、
  任意模式（`emu/src/chromatix.c`）。modeBranch 必须以 `0=0` 开头；需伪造 `/sys/devices/soc0`（soc_id=660）。
  → 移植时可用同一方法**离线按场景取任何 IQ 模块的插值前数据**。
- chromatix 模块字段名被裁掉，但 `libhwliqinterface2.so` 的**日志字符串 + 取址偏移**能逐个坐实字段
  （本次用于 LTM/TMC/TDL）。

## IQ 模块语义（`libhwliqinterface2.so`）
- ltm21_rgn_data（526 f32）：#258–#322 = 65 点 LTM 增益曲线；#423 = 该曲线强度；#426 = `lce_strength`
  （`ltm211setting.cpp`, 函数 0xf6a050，日志 "Update final lce_strength"）。另有 `ApplyAdditionalLceStrengthWeight`
  会在运行时乘一个额外权重（节点 +0xc08）。
- tmc202_rgn_data（75 f32）：#0–3 gtm_percentage，#4–7 sub_gtm_percentage，#8–12 ltm_percentage
  （`tmc202interpolation_v2.cpp` `CalculateAnchorKneePoints` 0xd9c940）；#56/57 = stretch_dark_str / stretch_bright_str；
  #63 = ihist curve damping；#64–68 = la/ltm/lce/gamma/local offset（`update_ihist_based_curve` 0xd8d070）。
  TMC 是**依赖直方图（BHist/IHist）、人脸亮度、DRC 增益的动态算法**——活体移植需重写此逻辑，不能只搬表。
- tdl13_rgn_data（964 f32）：#0–383 色相表 24 色相 × 16 饱和度（单位：度，HSV 色相，格点 15°），
  #384–767 饱和度增益表（相对），#768+ 标志位。硬件 IPE 2DLUT131 把它扩成 25×16（`lut_2d_h[400]`），
  色相轴 `lut_1d_h[25]` 以 度/60×2048 换算（一圈 12288）。（`ipe2dlut131setting.cpp` 0xf2c640）
  **ACB（AI 色彩分类：Skin/Sky/Veg）会在运行时对 2DLUT 叠加按类别的色相/饱和度调整**（`RunACB2DLUTProcessing`，
  日志 acbOutputFor2DLUT_Skin/Sky/Veg）——活体移植需要考虑这一层，离线前端目前没有。
- 色相格点是否非均匀：`lut_1d_h` 由输入结构 +0..+0x60 的 25 个角度生成，来源未追（当前假设均匀 15°）。

## M9 风格层（Feature0=7）
- M9 ≠ 8；8 是 M3 Monopan 黑白（App legendMode 2）。`libmicamera_adapter.so::updateLegendCustomFeature` 写 control 0xF4。
- M9 专属实例：gamma152、ltm21、cc15、cv122、tdl13、tmc202（见 M9-style-analysis.md）。
- M9 的 TDL 色相表在所有 lux/CCT 档基本一致（固定意图），饱和度表随档略变。

## StyleTrans（`odm/lib64/libmialgo_styletrans.so`）
- run 0x449518；pad 0x4434d0；resize 0x443758（mode1/2/3）；process 0x444694；colorfix 0x44788c；
  crop 0x443610；yuv→rgb 0x441db8（`MialgoCvtcolorYUVToRGB`，code 0x190/0x191）；rgb→yuv 0x442934。
- BT.601 **全范围**（NEON 常数 0x59cb=1.403, 0x7148=1.770，u8 版 44/91/180/227）。
- 工作分辨率固定 4096×3072 横向；非此尺寸居中补边（REFLECT_101）再裁回。
- 调试开关：`persist.vendor.camera.styletrans.bypass.enable`、`persist.vendor.camera.styletrans.exif2img.enable`；
  dump 目录 `/styletrans/`，文件 yuv2rgb_input_y/uv.dat、resize1_input.dat、styletrans_input.dat/png、
  styletrans_output.dat/png、colorfix_input_1/2.dat、colorfix_output.dat、rgb2yuv_*.dat、styletrans_log.txt。
  → **若有真机，打开 dump 即可得到每一级的真值**（对验证/移植价值极高）。
- humanseg 输出 768×768，resize 到 1024×768 作第 4 通道；RGB 补边 BORDER_REFLECT，mask 补 0。
- colorfix：544×544×6（风格图在前、原图在后；待模型确认），步长 512，取中心 512 硬拼接。

## 手机 / 样本
- 用户 Find X9 Ultra（PMA110, SM8850, QNN 2.37, KernelSU）可只读 adb；推送/运行需先征得同意。
- 本地样本 `samples/`（OPPO DNG，不入库）。

## 小米 3A 调参（mi_tuning，2026-10-09 新增）
- `odm/etc/camera/mi_tuning/<sensor>.bin`：u32 头 + 一串 u32 长度前缀的 protobuf 记录。
  记录成对：头 `{1: 模块枚举, 2..8: mode/scenario/feature0/function/sub_function/scene/filter 数值键}` + 载荷。
  偶数模块号=参数数据，奇数=LinkKey（把一个键重定向到另一个键的数据）。工具：`tools/mipb.py`、`tools/mituning.py`。
- 字段名：`libmiaec.so` / `libmituning_datacenter.so` 内嵌完整 FileDescriptorProto，`tools/protodesc.py` 抽出
  （`re/miaec/*.pb`），`tools/protoprint.py` 打印。模块枚举 `EnumTuningDataLable_Module`（AEC 512–553）。
- **M9 曝光（Feature0=7 Legend）**：
  - `AEC_Metering`（所有 sensor mode 的 Legend 都 Link 到 mode1 的数据）：base_target 26（普通 56），夜间 18–19（普通 32）。
  - `AEC_Stylization`（仅 mode 37/42 有 Legend 数据，enable=True；普通默认关闭）：base_target_scale 0.6–0.7 按 lux，
    直方图核心/自适应参考目标再 ×0.75–0.95，人脸目标 ×0.5–0.6。→ M9 中间调比普通拍照暗约 1.6–1.8 EV。
    ⚠ mode 37/42 是否为 M9 实际传感器模式：由 Legend AWB 数据也只在这些模式出现等旁证推断，未直接证实。
  - `AEC_FaceMetering`、`AEC_WhiteBlack`（夜间 ×1.02）、`AEC_AsdEnhance`（按 AI 场景 ×0.5–1.5）也有 Legend 专属数据。
  - AWB 也有 Legend 专属：模块 4 AWBAiAwb、22 AWBPreference、32 AWBStatsMap（**尚未解码**，需 AWB 的 proto）。
- AEC 结构（日志串）：short/safe/long 三目标；`mid_tone_gain`(ADRC) = mid/short，上限 DrcConfig.max_drc_gain(lux)=4.5。
  hist_target_by_lux 下的 adaptive/mid/night/dark-prevent/flat/color/saturation 子调整按权重聚合后限幅
  [aggregation_lower,upper]；具体合成代码未逆向（libmiaec 0x18e194 一带）。

## M9 快照真实节点（legendsnapshot.json）
- 主链：Anchor→MFNR→B2Y(SigFrame)→FormatConvertor(RAW16)→AllinOne(AISP)→B2Y ForRGB→StyleTrans→Depurple→WideLDC→LDC
  →LeicaFilter→Watermark→JPEG→jpegrAggr(Ultra HDR)。旁路：GainmapAnchor/GainmapForRGB 两个 B2Y→GainMap(Y8)→LDC→
  gainmapPostProc→jpegr；RawEmbeder（RAW 嵌入）。
- AllinOne：`libmialgo_aisp.so`，配置 `aisp.json`/`aisp_correct_image.json`；NR 路径 `dgain_apply_adrc=0`
  （输出线性 RGB，ADRC 留给 IPE/TMC）；接收 ipe/bps gamma 表、wb、lsc、adrc_gain、aitone_flag。`SetLegendMeta`
  经 `liblegendmsg.so` 把 `LegendMsg.M9Msg{AwbGain, aisp_algoversion, Rect, imgname}` 传给 StyleTrans（元数据）。
- B2Y ForRGB 用 subfunction 179/180（AllinoneTone[Denoise]）：已核实 M9 的 gamma/ltm/cc/cv/tdl/tmc/sce/gra/asf/cs/hnr/
  upscale/lenr/cac 与不带 subfunction 时**完全相同**；只有 anr 不同（降噪）。OFE：仅 ltm21_ofe 在 M9 下 423/426 归零。
- cc15：每叶 102 f32 = 矩阵 A(0–8) + 矩阵 B(10–18) + AI 类别权重(30–62)。普通 A=B；M9 A 弱、B 极强，`aiEnable` 时按
  AI 类别（ACB）混合。M9 全条件只有一组。离线取 A。
- cv122：Cb = a·[(B−G)+b·(R−G)], Cr = c·[(R−G)+d·(B−G)]（a/b/c/d 各有正负两值），由 BT.601 值反推验证（b=−0.338 ⇔ −0.169/0.5）。
- chromatix 触发树的 type 字段=层号（不是变量号），各层变量按取值范围判定（见 m9/tuning.py）。
- Depurple = altek CFR（`libmorpho_Depurple.so`），参数按镜头 `odm/etc/camera/{w,uw,t_3x,t_5x}.bin`，无 M9 专属。
- StyleTrans 模型编译版本 `v2.33.0.250327`；humanseg 用 `scene_human_seg`/`human_segmentation_768`，
  疑为 `human_seg_bimap_quant_npu_768.minn`（.minn 格式 2，未解）。
- 参考包的"改头文件"= 改 5 字节让 15U 手机上的 QNN 加载 17U 模型（仍需 NPU）。离线方案：QAIRT x86 HTP 模拟后端
  直接执行原版上下文二进制（进行中）。

## M9 跨摄像头一致性（2026-10-09，已更正）
- ⚠ 更正：此前"长焦没有 M9 IPE 调校"是查表错误——chromatix 第一层是**传感器模式**，Legend 节点只写在该摄像头
  Legend 实际用的模式下；用主摄的 mode 1 去查长焦会静默回退到普通节点。长焦 Legend 节点在 sensor mode 2/3/4
  （导出用 mode 4；mi_tuning 长焦 Legend 也在 mode 4/7）。主摄 M9 表在 mode 1/2/4/11 相同，AE Stylization 在 37/42。
- **意图在主摄与长焦上一致**（绝对数值是各传感器校准，不可比；风格 = 同一摄像头上 M9 相对普通的差量）：
  | | LTM#423 | LCE#426 | GTM% | LTM% | cc A 对角均值 |
  |---|---|---|---|---|---|
  | 主摄 M9 / 普通 | 0 / 0–0.6 | 0 / 0–1.3 | 100% / 20–40% | 0 / 60–80% | 1.25 / 1.44 |
  | 长焦 M9 / 普通 | 0 / 0–0.6 | 0 / 0–1.1 | 100% / 20% | 0 / 80% | 1.03 / 1.46 |
  长焦 M9 gamma 与主摄 M9 gamma 几乎相同。
- **AE 是唯一真正不一致的**：主摄 Legend base_target 26 × Stylization 0.6–0.7（-1.7~-2.2 EV）；长焦 Legend Metering
  （mode 4/7）base 55 = 普通，无 Stylization；长焦 Legend 只改人脸目标（×0.5–0.6，按变焦）、关语义权重、曝光表允许更高增益。
  超广：Metering base 25.5–28（普通 35–55），无 Stylization（超广 IPE 尚未按正确模式重查）。
- 结构理解：ISP 的 M9 层 = 把每颗摄像头拉到同一张"M9 底片"（全局曲线、无局部提亮、淡色、AWB 锁 D50）的适配器；
  StyleTrans（单一网络，三摄共用）假定这个输入分布；LeicaFilter 统一调色 + 按焦段暗角。
- AWB：三颗都有 Legend 的 AiAwb/Preference/StatsMap（模块 4/22/32）数据；锁 D50 的 CalLegendModeGain 是代码逻辑，与摄像头无关。
- cc15 AI 混合：开关是 cc15 输入 `commonLibInput+0x40`（aiEnable），由 IPE 驱动 CC 模块 `FillDependencyData`
  （libcamxhwlipedriver 0x38b760，camxipehwlcolorcorrection141p.cpp）从每帧 AI 使能（IPE 节点 m_isAIEnabledPerFrame，
  camera.qcom.sm8850.so SetAIEnabledPerFrame / IPEIQControlAIEnable）取得；aiEnable=1 时用 ACB 的 CCM 输出变换矩阵
  （libhwliqinterface2 0x29f020 → 0xfe7a20）。Legend 下是否置 1 未追完（sm8850 库 Ghidra 分析超 5 分钟）。
- TMC202：m9/tmc.py 与原版在 4 组 lux/DRC 下一致（≤1.2e-6，tools/verify_tmc.py）。

## Ultra HDR 增益图（2026-10-09）
- legendsnapshot：两路 B2Y（GainmapAnchor 吃 anchor RAW，GainmapForRGB 吃 AIO RGB16）都接 GainMap **port 2 = LinearYUV**；
  port 0/1 = SDR/HDR（libultrahdr generateGainMap，Legend 不用），port 3 = RAW。
- offcamb2y `updateMetaForGainMap`(0x4bde4)：设 `com.xiaomi.ultraHDR.linearFrame` → chromatix **function 51
  UltraHdrLinearFrame**（function 53 BkUltraHdrLinearFrame 为人像）：M9 下 gamma152/tmc202/ltm21 不同（gamma 黑位抬到
  47–78/1023，tmc GTM 50%/LTM 50% 但 LTM 强度 0），cc15/cv122/tdl13/gtm133 与 M9 相同。
  数字增益 "regular algo"：dg = 0.3（legendMode 1/2，否则 0.6），luxIdx>150 且 adrc<1.33 时 ×adrc/1.33；ADRC 沿用主帧。
  配置 odm/etc/camera/xiaomi/chiofflinesetting.json "UltraHdr"（histstep 3、brightRatio 300ppm、evAnchor/evTarget、
  normADRCKnee 133、normADRCLux 150、luxIdx 表）；EVx/HDR 多帧时另有亮区直方图增益路径（离线单帧不走）。
- gainmap 插件属性默认：policy 2、maxRGB 1、scaleFactor 2（superhd 4）、maxHdrBoost 500→5.0。MaxRGB(0xc320)：
  g8 = clip(Y + (max(dR,dG,dB)⁺ + mean)/2)，整数系数 359/-88/-183/454 >>8、×0x5556>>16。元数据 ver 1.0、gamma 1、offset 0、
  min 1、max 5、hdrCap 1/5。
- gainmapPostProc：hl% = g8≥250 占比；extra 100%(≤8%)→80%(≥20%)；maxBoost=hdrCapMax=max(1, extra×5.0×residualGain)；
  灰度 JPEG 质量 98。jpegrAggr 写 XMP + MPF（还写 ISO 21496 元数据、Leica 水印/四边框高度处理）。
- ROM libultrahdr（vendor/lib64）为数组版元数据（max/min/gamma/offset 各 [3] + cap_min/max + use_base_cg）；
  jpegrAggr 默认写 ISO 21496-1（persist.vendor.camera.algoengine.jpegrAggr.iso21496_1=1），分数由连分数逼近 float32 值
  （单通道 flags 0x40，全部分母相同时 0x48 公分母）。`emu/uhdr`：dec/enc/iso 三种模式直接调用 ROM 库。
