# 17U chromatix 解析笔记（M9 B2Y 风格分析用）

目的：读懂 M9 快照在 B2Y（offcamb2y，IPE）阶段的风格意图，**不做活体移植**。

## 工具链
- WSL `qemu-aarch64-static` + 17U ROM 的 bionic/vendor 库（`emu/root`，符号链接到 ROM；`/apex` 指向 `emu/apex`）。
- `tools/qrun_ns.sh`：root + 私有挂载命名空间里伪造 `/sys/devices/soc0`（soc_id=660，SM8850）后运行。
- `emu/chromatix`（`emu/src/chromatix.c`）：dlopen `camera.qcom.core.so`，
  `TuningDataManager::Initialize(NULL)` → `CreateTunedModeTree(path)` → `GetChromatix()` →
  内部 `GetModule`（core.so +0x610C20）`(psm, name, modeBranch, count, NULL)`。
  modeBranch = `{u32 type, u32 value}[]`，**必须以 Default(0=0) 开头**。
  结果节点 +0x68 起为反序列化结构；按 scudo 块头大小递归转储（`*.mem`）。
- `tools/memdump.py` 查看块；`tools/memhash.py` 比较不同模式的内容签名。

## 文件格式
- 头 `QTI Chromatix Header`，Parameter Parser V6.0.7；4 个段：
  段4 符号表（32B/项：u64 模块类型哈希, ver, …, 段1偏移, 大小, 序号）；段3 模式→模块集映射；
  段2 模式树（24B/项：模块集, ?, 节点id, 类型|值<<16, 槽位, 父id）；段1 数据。
- 模块类型哈希可从节点 +0x18 读出（`re/chromatix/module_hashes.json`）。

## 调参模式
- 类型：0 Default, 1 Sensor, 2 Usecase, 3 Feature0, 4 Feature1, 5 Feature2, 6 Scene, 7 Effect。
- 传说模式由 `libmicamera_adapter.so` `updateLegendCustomFeature` 设定：
  control=0xF4，**Feature0 = 8（M9，legendMode==2）/ 7（M3）**；
  FormatConvertor 节点 Feature1=0x24，PreRawEmbeder 节点 Feature2=0xBC；B2Y 节点不改 Feature1/2。

## 主摄可用模块（wide_i）
风格相关 IPE：gamma152, ltm21, cc15, cv122, tdl13, sce112, cs202, asf353, gra102, upscale202, hdr10p102；SW：tmc202。

## M9 专属（Feature0=8，Sensor 1/4/11、Usecase 0/1 结果一致）
gamma152、ltm21、cc15、cv122、tdl13、tmc202 均为 M9 专属实例；gra102、sce112 与默认相同；
cs202 仅 Usecase0 不同；asf353/upscale 随传感器/usecase 变化，与 M9 无关。
