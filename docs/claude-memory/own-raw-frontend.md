---
name: own-raw-frontend
description: "Own RAW front end; chromatix MUST be decoded and analysed to understand the M9 style intent, but never transplanted live; only M9 stages exact"
metadata:
  node_type: memory
  type: feedback
  originSessionId: 345d5c57-2691-4e4e-9cc0-eefc3dcc5698
  modified: 2026-10-08T17:31:23.876Z
---

Build our own RAW pipeline, "in tune with" (心意相通) the original M9 look. Decoding the 17U chromatix/IPE tuning IS required — to analyse what style it aims for (which modules are active and how strong, tone/gamma shape, colour conversion, saturation, local contrast, how they vary with lux/CCT). The purpose is understanding, NOT live transplant (活体移植): don't copy dynamic/adaptive parameters into the pipeline; re-implement the intent offline (e.g. a local-contrast node at strength 0 is simply not reproduced).

**Why:** User (2026-10-09): first "离线处理的目的就是绕开这个要命的tuning文件…不能领会它的用意之后复刻吗", then corrected my over-reaction: "'中性、干净…的底片'这个不要瞎说。你得分析他要的风格，拆Chromax是必须的。但目的不是活体移植".

**How to apply:** Decode chromatix for the M9 snapshot path (B2Y on RGB16), analyse and summarise the intended look with evidence, then design our own front end from that analysis. Never claim what style the front end should have without evidence from the ROM. Reverse-engineer M9-specific stages (StyleTrans + pre/post, LeicaFilter) exactly. Related: [[project-offline-m9]], [[no-distillation]].
