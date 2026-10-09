---
name: cleanup-intermediates
description: "User wants intermediate/waste files (raw partition images, extracted archives, temp outputs) deleted promptly"
metadata:
  node_type: memory
  type: feedback
  originSessionId: fa77b111-fd75-40d4-81af-7d4a07a1d458
  modified: 2026-10-08T13:21:14.111Z
---

Delete intermediate artifacts as soon as they've served their purpose (e.g. rom/*_a.img after EROFS extraction, unpacked reference zips, temp renders, logs).

**Why:** User said "废物及时清理" while I was extracting ~10 GB of partition images in F:\OffLineM9\rom; disks (C/F/G) are ~83% full.

**How to apply:** After each extraction/conversion step, remove the source intermediates and keep only what the project needs; mention what was deleted.
