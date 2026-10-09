---
name: no-17u-samples-or-device
description: No Xiaomi 17 Ultra DNG samples and no physical 17U device are available for testing OffLineM9
metadata:
  node_type: memory
  type: project
  originSessionId: fa77b111-fd75-40d4-81af-7d4a07a1d458
  modified: 2026-10-08T13:26:59.122Z
---

There are no 17U DNG files and no real 17U phone to test against. Do not scan G:\LEICA (or elsewhere) hunting for 17U samples — DNGs there are from other phones/projects.

**Why:** User stated this explicitly (2026-10-08) after I started scanning G:\LEICA for DNGs.

**How to apply:** Validation must come from the ROM itself: reverse-engineer the 17U libs/params, and if needed run the original ARM64 code under emulation as a ground-truth oracle; use synthetic or generic RAW inputs for testing. Design the renderer to accept generic DNG input. Related: [[project-offline-m9]].
