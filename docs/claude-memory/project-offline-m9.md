---
name: project-offline-m9
description: "OffLineM9 goal: offline cross-device RAW renderer reproducing Xiaomi 17 Ultra \"Leica Moment M9\" look from the 17U ROM; 15U port zip is only a hint"
metadata:
  node_type: memory
  type: project
  originSessionId: fa77b111-fd75-40d4-81af-7d4a07a1d458
  modified: 2026-10-08T13:22:40.386Z
---

Goal (started 2026-10-08): build an offline (not real-time camera) RAW renderer in F:\OffLineM9 that runs on any device and reproduces the Xiaomi 17 Ultra by Leica "徕卡一瞬 M9" rendering. Source of truth = 17U ROM at G:\LEICA\17u\nezha_images_OS3.0.308.0.WPACNXM_16.0 (device nezha). Reference F:\OffLineM9\材料\xiaomi15-v7604-delivery-20260823.zip is a KernelSU port of M9 to 15U.

**Why:** User said "不要把参考项目奉为圭臬" and "尽量你自己完成工作".

**How to apply:** Use the reference only for hints (file names, pipeline order); verify everything against the 17U ROM originals and reverse-engineer/implement independently. Work autonomously; avoid asking the user unless truly blocked. See also [[cleanup-intermediates]].
