# OffLineM9 — 小米 17 Ultra「徕卡一瞬 · M9」离线 RAW 渲染

```
python -m m9.render input.dng -o out.jpg [--camera main|tele] [--zoom Z] [--ev 0] [--lux-index N] [--cct K] [--half]
```
**两个版本**（见 FINDINGS.md「M9 跨摄像头一致性」）：
- `--camera main`（默认）：主摄 ovx10500u 的 Legend 调校——AE 压暗（base 26 × Stylization 0.6–0.7，mode 37/42）、
  M9 gamma/cc/cv/tdl/tmc（LTM 关、GTM 100%）。
- `--camera tele`：长焦 s5khpe 的 Legend 调校（sensor mode 4）——M9 gamma/cc/cv/tdl/tmc，意图与主摄一致（LTM 关、
  GTM 100%、降饱和）；AE 按原版长焦 Legend 不整体压暗（只压人脸目标），所以比主摄亮约 1–1.5 EV。
  暗角按变焦倍率（默认由 DNG 等效焦距/23mm 推出，限 3.2–4.3x）。
- 三颗共有、两版相同：AWB 锁定、StyleTrans、LeicaFilter。超广角未做。
真值来源：17U ROM（OS3.0.308）。详细逆向记录见 `M9-style-analysis.md`、`FINDINGS.md`。

## 仓库结构（私有）
| 目录 | 内容 |
|---|---|
| `m9/` | 离线渲染器：前端（AE/AWB/IPE/TMC）、StyleTrans（PyTorch 后端 + QNN 模拟器后端）、LeicaFilter、GainMap、Ultra HDR 写入 |
| `m9/assets/` | 从 ROM 解出的调校表（IPE、AE、LeicaFilter 参数、Display P3 ICC） |
| `re/weights/` | StyleTrans low/high/colorfix 浮点权重（由 `decode/` 从 ROM 上下文二进制还原） |
| `re/models/` | 解密后的 `.minn` 模型（QNN HTP 上下文二进制 / DLC） |
| `re/*.c`、`re/miaec/` | Ghidra 反编译结果、mi_tuning 描述符 |
| `tools/` | mi_tuning/chromatix/protobuf 解析、导出、校验脚本、Ghidra 无头脚本 |
| `emu/src/` | qemu-aarch64 下直接调用 ROM 原版库的测试程序（TMC、chromatix 节点、libultrahdr） |
| `decode/` | StyleTrans 权重解码工具链（HTP 上下文解析、量化/HMX 规则、导出）及其笔记 `HANDOFF.md` / `NOTES.md` |
| `docs/claude-memory/` | 工作记忆笔记（约束、经验） |
| `FINDINGS.md`、`M9-style-analysis.md` | 逆向发现与风格分析 |

不入库：ROM 本体与 sysroot、Ghidra 工程、样张 DNG、渲染输出、参考项目压缩包。

## 原版节点核对表（legendsnapshot.json 主链）

| 原版节点 | 原版做什么（已核实） | 离线实现 | 依据 / 取舍 |
|---|---|---|---|
| **AEC（libmiaec + mi_tuning）** | 主摄 Legend：base_target 26（普通 56）× Stylization 0.6–0.7（仅 mode 37/42，即 M9 所用模式）；长焦 Legend = 普通（base ~52）；short 目标保护高光；ADRC=mid/short ≤4.5 | `m9/ae.py`：对线性 RAW 用 M9 表重新测光（16×16 中心加权、亮块降权、亮部百分位参考目标、DRC 上限） | **必要取舍**：输入是别的相机已曝光的 RAW，只能重测光。直方图子调整（adaptive/mid/night/flat/color 等）的聚合代码未逆向，暂未实现 |
| **AWB（libawbcore）** | `CalLegendModeGain`：**白平衡锁定在传感器 D50 点**（"Legend CCT:5000"），偏好偏移 1.0；统计 AWB 仍运行并报告场景 CCT | 用 DNG 色彩矩阵求 D50 光源下的相机中性点作为增益；场景 CCT 由 AsShotNeutral 求得，供各表插值/模型选择 | 与原版等价（D50 点由 DNG 标定代替 17U 标定） |
| Anchor / MFNR | 多帧对齐降噪 | 不做 | **必要取舍**：DNG 已是相机合成后的单帧 |
| AllinOne（libmialgo_aisp） | AI 降噪+BLC/LSC/WB，输出线性 RGB16，NR 路径不施加 ADRC | rawpy 线性解马赛克 | **必要取舍**：AI 降噪模型针对 17U 传感器；DNG 已含 BLC/LSC |
| B2Y ForRGB – LTM（ltm21） | M9：LTM 曲线强度 #423=0、`lce_strength` #426=0（IPE 与 OFE 均为 0） | 无局部处理 | 精确 |
| B2Y – TMC202 | 主摄、长焦 M9：gtm 100%、ltm 0% | `m9/tmc.py`：原版拐点 + 单调 Hermite 曲线，按 Y 比例增益施加 | **精确**（qemu 跑原版，4 组 lux/DRC 误差 ≤1.2e-6）；主摄、长焦 M9 均为 GTM 100%、LTM 0，无需局部算子 |
| B2Y – CC（cc15） | M9 只有一组矩阵（A 弱；B 为 AI 类别矩阵） | DNG 色度矩阵 × `CC_M9·CC_normal⁻¹`（同档） | **必要取舍**：矩阵与传感器绑定，取相对变换；AI 类别混合（需 17U AI 分割）未做 |
| B2Y – 2D LUT（tdl13） | M9 色相表（度，HSV，15° 格点）+ 饱和度表 | 原表按 lux/CCT/DRC 插值，HSV 双线性 | 精确（色相格点假设均匀 15°） |
| B2Y – gamma152 | M9 曲线（强光档更平） | 原表插值 | 精确 |
| B2Y – CV（cv122） | Cb=a[(B−G)+b(R−G)], Cr=c[(R−G)+d(B−G)]，M9 a/c 0.47–0.49 | 原参数 | 精确 |
| **StyleTrans（legendST）** | low/high 风格网络（1024×768）+ colorfix（544 块）回贴 | `m9/styletrans.py` 前后处理按反汇编复刻；网络用 **QAIRT x86 HTP 模拟器执行 ROM 原版上下文二进制**（`m9/qnn_backend.py`） | 默认 PyTorch/GPU 后端（从 ROM 上下文二进制还原的浮点权重，`m9/torch_backend.py`，每张 10–25 s）；模拟器后端仅 `M9_BACKEND=qnn` 时使用 |
| humanseg（StyleTrans 第 4 通道） | human_segmentation_768（LMSceneSeg） | 掩码置 0（无人像保护） | 按用户要求暂不处理；模型二进制段还有一层加密未解 |
| Depurple（altek CFR） | 按镜头参数去紫边（w.bin），无 M9 专属 | 不做 | **必要取舍**：17U 镜头专用 |
| WideLDC / LDC | 畸变校正 | 不做 | **必要取舍**：17U 镜头专用 |
| **LeicaFilter** | 17³ LUT（lux×CCT 插值）+ CvStyle 暗角；StyleTrans 运行用 snapshot 参数，否则 preview 参数 | `m9/leicafilter.py` | 精确 |
| **GainMap 支路**（B2Y GainmapForRGB → GainMap → GainMapPostProc → jpegrAggr） | B2Y 以 function 51 `UltraHdrLinearFrame` 调校（自有 gamma/tmc，cc/cv/tdl 同 M9）、数字增益 0.3（Legend）×LDR 修正；GainMap 取 (maxRGB+meanRGB)/2 生成 Y8（1/2 尺寸）；PostProc 按 ≥250 占比给 extraGain，maxBoost = extra×5.0 | `m9/gainmap.py` + `m9/uhdr.py`（Ultra HDR v1：XMP hdrgm + MPF），默认开启，`--no-hdr` 关闭 | 逐节点按反汇编复刻；ISO 21496-1 元数据与 ROM libultrahdr 输出逐字节一致；成片经 **ROM libultrahdr 解码器**（qemu，`emu/uhdr dec`）解出的线性 HDR 与 SDR×5^(g/255) 中位比 1.0016；LDC 不做（与主图一致）；主图未嵌 ICC（默认 sRGB） |
| Watermark | 徕卡水印 | 不做 | 可选 |

## 运行 StyleTrans（精确后端）
- 需要 QAIRT SDK 2.33.0.250327（`M9_QAIRT`），Windows 下通过 WSL 运行 `qnn-net-run`（`M9_WSL_DISTRO`）。
- 模型：`python tools/minn.py <rom>/odm/etc/camera/styletrans/styletrans_{low,high,colorfix}.minn re/models/styletrans_*.bin`。
- 并行：`M9_QNN_JOBS`。关闭：`M9_QNN_SIM=0`（此时 LeicaFilter 使用 preview 参数，与原版 StyleTrans 不可用时的行为一致）。
