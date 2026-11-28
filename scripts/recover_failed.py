import re
from pathlib import Path

import idapro
import ida_hexrays
import idautils
import idc

ROOT = Path(r"C:\dev\work\classmk")
OUT_ROOT = ROOT / "decompiled"
LOG_FILE = Path(r"C:\Users\hyelcyon\.gemini\antigravity\brain\c681e12c-7a6b-42ab-8788-a2c9d880f5ee\.system_generated\steps\116\output.txt")

def parse_failed_targets():
    lines = LOG_FILE.read_text(encoding="utf-8").splitlines()
    targets = []
    cur_src, cur_dst = None, None
    for l in lines:
        m = re.match(r"^\[\d+/\d+\]\s+(.+?)\s+->\s+(.+)$", l)
        if m:
            cur_src = ROOT / m.group(1).strip()
            cur_dst = ROOT / m.group(2).strip()
        elif "fail=" in l and "ok=0" not in l and "fail=0" not in l and cur_src:
            targets.append((cur_src, cur_dst))
            cur_src, cur_dst = None, None
    return targets

def try_fix_call_analysis(ea: int, hf: ida_hexrays.hexrays_failure_t) -> bool:
    if hf.errea == idc.BADADDR:
        return False
    for xref in idautils.CodeRefsFrom(hf.errea, 0):
        name = idc.get_func_name(xref)
        if "__startOneArgErrorHandling" in name:
            idc.SetType(xref, "double __usercall __startOneArgErrorHandling@<st0>(int@<eax>, int@<edx>, int@<ecx>, double@<st0>);")
            return True
        t = idc.get_type(xref)
        if t and ("(" in t):
            # Fallback: strip guessed stack parameters if caller passes none
            if "__usercall" in t:
                # Keep only register args
                m = re.match(r"^(.+?__usercall[^\(]*)\((.*)\)$", t)
                if m:
                    regs = [a.strip() for a in m.group(2).split(",") if "@<" in a]
                    new_t = f"{m.group(1)}({', '.join(regs) if regs else 'void'});"
                    if idc.SetType(xref, new_t):
                        return True
            else:
                if idc.SetType(xref, f"void __cdecl {name}(void);"):
                    return True
    return False

def recover_file(src: Path, dst: Path) -> tuple[int, int]:
    idapro.open_database(str(src), True)
    try:
        ida_hexrays.init_hexrays_plugin()
        # First pass to populate Hex-Rays cache
        failed_eas = []
        for ea in idautils.Functions():
            try:
                if not ida_hexrays.decompile(ea):
                    failed_eas.append(ea)
            except Exception:
                failed_eas.append(ea)

        # Second pass + fix call analysis errors
        for ea in failed_eas:
            for _ in range(3):
                hf = ida_hexrays.hexrays_failure_t()
                try:
                    cfunc = ida_hexrays.decompile(ea, hf)
                except Exception:
                    cfunc = None
                if cfunc:
                    break
                if not try_fix_call_analysis(ea, hf):
                    break

        # Final export
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
    targets = parse_failed_targets()
    print(f"Recovering {len(targets)} binaries...")
    for i, (src, dst) in enumerate(targets, 1):
        try:
            ok, fail = recover_file(src, dst)
            print(f"[{i}/{len(targets)}] {dst.relative_to(ROOT)}: ok={ok}, fail={fail}", flush=True)
        except Exception as e:
            print(f"[{i}/{len(targets)}] {dst.relative_to(ROOT)}: ERROR {e}", flush=True)

if __name__ == "__main__":
    main()
