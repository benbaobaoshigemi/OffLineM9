---
name: no-distillation
description: "StyleTrans NN must be recovered exactly from ROM weights; no distillation; OPPO SM8850 phone only as an occasional \"key\" for decoding, not routine verification"
metadata:
  node_type: memory
  type: feedback
  originSessionId: 11e0edfd-ea4f-4ecd-8fbd-5d37da6b0712
  modified: 2026-10-08T13:58:32.454Z
---

Do NOT propose or use distillation / training an equivalent network with phone (or any) outputs as teacher. The user has a same-platform phone (OPPO, Snapdragon 8 Elite Gen 5 / SM8850, HTP V81). It must NOT be used to generate data, and NOT used frequently to check "is my reconstruction right". It MAY be used sparingly as a "key": a targeted probe that unlocks a specific encoding/layout question static analysis can't settle (e.g. reveal how a packed format or requant field is interpreted).

**Why:** User (2026-10-08): "不接受这个方案…只能辅助拆解权重，不能用于数据生成" and then "也不要频繁用于比对验证'做的对不对'。但是如果能作为钥匙，是可以的".

**How to apply:** Default to pure static RE of the HTP context binaries (self-consistency checks from the ROM itself). Only reach for the phone when a concrete format question is blocked, design a minimal probe for that question, and ask the user before pushing/running anything on it. Related: [[project-offline-m9]], [[no-17u-samples-or-device]].
