# OffLineM9 — 小米 17 Ultra「徕卡一瞬 · M9」离线 RAW 渲染

```
python -m m9.render input.dng -o out.jpg [--ev 0] [--lux-index N] [--cct K] [--half]
```
真值来源：17U ROM（OS3.0.308）。详细逆向记录见 `M9-style-analysis.md`、`FINDINGS.md`。

## 原版节点核对表（legendsnapshot.json 主链）

| 原版节点 | 原版做什么（已核实） | 离线实现 | 依据 / 取舍 |
|---|---|---|---|
| **AEC（libmiaec + mi_tuning）** | Legend 测光：base_target 26（普通 56）× Stylization 0.6–0.7；short 目标保护高光；ADRC=mid/short ≤4.5 | `m9/ae.py`：对线性 RAW 用 M9 表重新测光（16×16 中心加权、亮块降权、亮部百分位参考目标、DRC 上限） | **必要取舍**：输入是别的相机已曝光的 RAW，只能重测光。直方图子调整（adaptive/mid/night/flat/color 等）的聚合代码未逆向，暂未实现 |
| **AWB（libawbcore）** | `CalLegendModeGain`：**白平衡锁定在传感器 D50 点**（"Legend CCT:5000"），偏好偏移 1.0；统计 AWB 仍运行并报告场景 CCT | 用 DNG 色彩矩阵求 D50 光源下的相机中性点作为增益；场景 CCT 由 AsShotNeutral 求得，供各表插值/模型选择 | 与原版等价（D50 点由 DNG 标定代替 17U 标定） |
| Anchor / MFNR | 多帧对齐降噪 | 不做 | **必要取舍**：DNG 已是相机合成后的单帧 |
| AllinOne（libmialgo_aisp） | AI 降噪+BLC/LSC/WB，输出线性 RGB16，NR 路径不施加 ADRC | rawpy 线性解马赛克 | **必要取舍**：AI 降噪模型针对 17U 传感器；DNG 已含 BLC/LSC |
| B2Y ForRGB – LTM（ltm21） | M9：LTM 曲线强度 #423=0、`lce_strength` #426=0（IPE 与 OFE 均为 0） | 无局部处理 | 精确 |
| B2Y – TMC202 | M9：gtm_percentage=100%、ltm=0% → ADRC 全部由全局曲线承担 | `drc_curve`：斜率=ADRC、1.0 处收敛的全局亮度曲线（保色相） | **近似**：TMC 的直方图拐点算法未逆向，曲线形状为替代 |
| B2Y – CC（cc15） | M9 只有一组矩阵（A 弱；B 为 AI 类别矩阵） | DNG 色度矩阵 × `CC_M9·CC_normal⁻¹`（同档） | **必要取舍**：矩阵与传感器绑定，取相对变换；AI 类别混合（需 17U AI 分割）未做 |
| B2Y – 2D LUT（tdl13） | M9 色相表（度，HSV，15° 格点）+ 饱和度表 | 原表按 lux/CCT/DRC 插值，HSV 双线性 | 精确（色相格点假设均匀 15°） |
| B2Y – gamma152 | M9 曲线（强光档更平） | 原表插值 | 精确 |
| B2Y – CV（cv122） | Cb=a[(B−G)+b(R−G)], Cr=c[(R−G)+d(B−G)]，M9 a/c 0.47–0.49 | 原参数 | 精确 |
| **StyleTrans（legendST）** | low/high 风格网络（1024×768）+ colorfix（544 块）回贴 | `m9/styletrans.py` 前后处理按反汇编复刻；网络用 **QAIRT x86 HTP 模拟器执行 ROM 原版上下文二进制**（`m9/qnn_backend.py`） | 网络精确（原版量化权重）；很慢（分钟级）；浮点权重导出后可换快速后端 |
| humanseg（StyleTrans 第 4 通道） | human_segmentation_768（LMSceneSeg） | 掩码置 0（无人像保护） | 按用户要求暂不处理；模型二进制段还有一层加密未解 |
| Depurple（altek CFR） | 按镜头参数去紫边（w.bin），无 M9 专属 | 不做 | **必要取舍**：17U 镜头专用 |
| WideLDC / LDC | 畸变校正 | 不做 | **必要取舍**：17U 镜头专用 |
| **LeicaFilter** | 17³ LUT（lux×CCT 插值）+ CvStyle 暗角；StyleTrans 运行用 snapshot 参数，否则 preview 参数 | `m9/leicafilter.py` | 精确 |
| Watermark / GainMap / jpegr | 水印、Ultra HDR 增益图 | 只输出 SDR JPEG | 可选，未做 |

## 运行 StyleTrans（精确后端）
- 需要 QAIRT SDK 2.33.0.250327（`M9_QAIRT`），Windows 下通过 WSL 运行 `qnn-net-run`（`M9_WSL_DISTRO`）。
- 模型：`python tools/minn.py <rom>/odm/etc/camera/styletrans/styletrans_{low,high,colorfix}.minn re/models/styletrans_*.bin`。
- 并行：`M9_QNN_JOBS`。关闭：`M9_QNN_SIM=0`（此时 LeicaFilter 使用 preview 参数，与原版 StyleTrans 不可用时的行为一致）。
