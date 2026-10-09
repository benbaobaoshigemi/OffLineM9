"""Exact StyleTrans backend: runs the original 17U QNN context binaries (decrypted .minn)
on the x86 HTP simulator of the QAIRT SDK (libQnnHtp.so for x86_64-linux), i.e. the
original network, weights and quantisation, bit-for-bit as compiled for SM8850 (V81).

Graph I/O (qnn-context-binary-utility): UFIXED_POINT_8, scale 1/127.5, offset -128
-> the application feeds and reads plain 0..255 pixels.

Config (env):
  M9_QAIRT   SDK root (default F:/qairt/qairt/2.33.0.250327, must be 2.33.x: models are built
             with v2.33.0.250327)
  M9_MODELS  dir with styletrans_{low,high,colorfix}.bin (decrypted; tools/minn.py)
  M9_QNN_JOBS parallel simulator processes (default: cores // 8)
Slow (minutes per image) - it is the reference implementation; a float PyTorch backend can
replace it once the weights are exported.
"""
from __future__ import annotations

import os
import platform
import shutil
import subprocess
import tempfile
from concurrent.futures import ThreadPoolExecutor

import numpy as np

_HERE = os.path.dirname(os.path.abspath(__file__))
DEF_SDK = r"F:/qairt/qairt/2.33.0.250327"
DEF_MODELS = os.path.join(_HERE, "..", "re", "models")
SHAPES = {"low": (864, 1120, 3), "high": (864, 1120, 3), "colorfix": (544, 544, 3)}


def _to_wsl(p: str) -> str:
    p = os.path.abspath(p).replace("\\", "/")
    if len(p) > 1 and p[1] == ":":
        return f"/mnt/{p[0].lower()}{p[2:]}"
    return p


class QnnSimBackend:
    def __init__(self, sdk: str, models: str, jobs: int):
        self.sdk, self.models, self.jobs = sdk, models, jobs
        self.windows = platform.system() == "Windows"

    @classmethod
    def create(cls):
        sdk = os.environ.get("M9_QAIRT", DEF_SDK)
        models = os.environ.get("M9_MODELS", DEF_MODELS)
        lib = os.path.join(sdk, "lib", "x86_64-linux-clang", "libQnnHtp.so")
        if not os.path.exists(lib) or not os.path.exists(os.path.join(models, "styletrans_low.bin")):
            return None
        jobs = int(os.environ.get("M9_QNN_JOBS", max(1, (os.cpu_count() or 8) // 8)))  # each sim uses ~8 threads
        return cls(sdk, models, jobs)

    def _cmd(self, ctx: str, ilist: str, outdir: str, cwd: str) -> list[str]:
        q = _to_wsl(self.sdk) if self.windows else self.sdk
        sh = (f"cd '{_to_wsl(cwd) if self.windows else cwd}' && "
              f"LD_LIBRARY_PATH='{q}/lib/x86_64-linux-clang' '{q}/bin/x86_64-linux-clang/qnn-net-run' "
              f"--backend '{q}/lib/x86_64-linux-clang/libQnnHtp.so' "
              f"--retrieve_context '{_to_wsl(ctx) if self.windows else ctx}' --input_list '{ilist}' "
              f"--output_dir '{outdir}' --use_native_input_files --use_native_output_files")
        return (["wsl", "-d", os.environ.get("M9_WSL_DISTRO", "Ubuntu-24.04"), "bash", "-c", sh]
                if self.windows else ["bash", "-c", sh])

    def run(self, model: str, x: np.ndarray) -> np.ndarray:
        """x: [N,H,W,C] values 0..255 -> [N,h,w,3] float32 0..255."""
        ctx = os.path.join(self.models, f"styletrans_{model}.bin")
        u8 = np.clip(np.rint(x), 0, 255).astype(np.uint8)
        n = len(u8)
        work = tempfile.mkdtemp(prefix="m9qnn_", dir=os.environ.get("M9_TMP"))
        try:
            groups = [list(range(n))[k::self.jobs] for k in range(min(self.jobs, n))]

            def job(gi):
                d = os.path.join(work, f"j{gi}")
                os.makedirs(d)
                with open(os.path.join(d, "list.txt"), "w", newline="\n") as f:
                    for i in groups[gi]:
                        u8[i].tofile(os.path.join(d, f"in{i}.raw"))
                        f.write(f"input:=in{i}.raw\n")
                r = subprocess.run(self._cmd(ctx, "list.txt", "out", d), capture_output=True, text=True)
                if r.returncode != 0:
                    raise RuntimeError(f"qnn-net-run failed ({model}): {r.stdout[-2000:]}{r.stderr[-2000:]}")
                return gi

            with ThreadPoolExecutor(len(groups)) as ex:
                list(ex.map(job, range(len(groups))))
            h, w, c = SHAPES[model]
            out = np.zeros((n, h, w, c), np.float32)
            for gi, g in enumerate(groups):
                for k, i in enumerate(g):
                    p = os.path.join(work, f"j{gi}", "out", f"Result_{k}", "output_native.raw")
                    out[i] = np.fromfile(p, np.uint8).reshape(h, w, c)
            return out
        finally:
            shutil.rmtree(work, ignore_errors=True)
