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
