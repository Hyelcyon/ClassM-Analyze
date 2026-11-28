import hashlib
import os
import sys
from pathlib import Path

import idapro
import ida_hexrays
import idautils

ROOT = Path(r"C:\dev\work\classmk")
OUT_ROOT = ROOT / "decompiled"

SKIP_PREFIXES = ("ora", "oci", "redis-", "uninst")
SKIP_EXACT = {
    "hiredis.dll",
    "eventlog.dll",
    "classm.exe",
    "classm_client.exe",
    "classm_x64.exe",
    "sheriff9.exe",
}

def should_skip(path: Path) -> bool:
    name = path.name.lower()
    if name in SKIP_EXACT:
        return True
    if name.startswith(SKIP_PREFIXES):
        return True
    return False

def map_output_path(src: Path) -> Path:
    rel = src.relative_to(ROOT)
    parts = list(rel.parts)
    version_dir = parts[0]  # ClassM_2.0.57, ClassM_3.0.500, Sheriff9_9.0.52
    sub_parts = parts[1:]
    # Strip 'unpacked', 'ClassM_Client_unpacked', 'ClassM_x64_unpacked'
    if sub_parts and sub_parts[0] in ("unpacked", "ClassM_Client_unpacked", "ClassM_x64_unpacked"):
        if sub_parts[0] == "ClassM_Client_unpacked":
            sub_parts = ["Client"] + sub_parts[1:]
        else:
            sub_parts = sub_parts[1:]
    out_rel = Path(version_dir, *sub_parts).with_suffix(".cpp")
    return OUT_ROOT / out_rel

def decompile_file(src: Path, dst: Path) -> tuple[int, int]:
    dst.parent.mkdir(parents=True, exist_ok=True)
    idapro.open_database(str(src), True)
    try:
        ida_hexrays.init_hexrays_plugin()
        ok, fail = 0, 0
        with open(dst, "w", encoding="utf-8") as f:
            f.write(f"// Decompiled from {src.name} ({src.relative_to(ROOT)})\n\n")
            for ea in idautils.Functions():
                try:
                    cfunc = ida_hexrays.decompile(ea)
                    if cfunc:
                        f.write(f"// Address: 0x{ea:X}\n{cfunc}\n")
                        ok += 1
                    else:
                        fail += 1
                except Exception:
                    fail += 1
        return ok, fail
    finally:
        idapro.close_database(False)

def main():
    targets = []
    for version in ("ClassM_2.0.57", "ClassM_3.0.500", "Sheriff9_9.0.52"):
        vdir = ROOT / version
        if not vdir.exists():
            continue
        for ext in ("*.exe", "*.dll"):
            for p in vdir.rglob(ext):
                if should_skip(p):
                    continue
                dst = map_output_path(p)
                if dst.exists():
                    continue
                targets.append((p, dst))

    print(f"Found {len(targets)} binaries to decompile.")
    for i, (src, dst) in enumerate(targets, 1):
        print(f"[{i}/{len(targets)}] {src.relative_to(ROOT)} -> {dst.relative_to(ROOT)}", flush=True)
        try:
            ok, fail = decompile_file(src, dst)
            print(f"    ok={ok}, fail={fail}", flush=True)
        except Exception as e:
            print(f"    ERROR: {e}", flush=True)

if __name__ == "__main__":
    main()
