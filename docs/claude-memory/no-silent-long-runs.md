---
name: no-silent-long-runs
description: No single command may run silently >5 min (split long commands); the overall task continues autonomously; never use the QNN simulator
metadata:
  node_type: memory
  type: feedback
  originSessionId: f8293bb9-63e2-4622-8c39-88edf594519d
  modified: 2026-10-09T08:54:24.971Z
---

Each individual command/tool call must not run silently for more than 5 minutes; split long commands (e.g. batch renders, sweeps) into shorter ones. This limit is per command, NOT per task: keep working through the task autonomously without stopping to ask permission between steps. The QNN x86 HTP simulator is "fatally slow" — do not run it (torch backend is default).

**Why:** user interrupted long background runs and complained about speed; later clarified that asking "要继续吗" after every 5-minute step was a misunderstanding.

**How to apply:** profile before blaming hardware; keep commands short (one qemu run ~22 s, renders in groups of ~3); give brief progress notes but don't wait for approval between steps.
