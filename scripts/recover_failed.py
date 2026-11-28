import re
from pathlib import Path

import idapro
import ida_hexrays
import idautils
import idc

ROOT = Path(r"C:\dev\work\classmk")
OUT_ROOT = ROOT / "decompiled"

# The 24 binaries that still had >0 failures after the first recovery pass
REMAINING_24 = [
    (r"ClassM_2.0.57\unpacked\Client\mvnc.exe", r"decompiled\ClassM_2.0.57\Client\mvnc.cpp"),
    (r"ClassM_2.0.57\unpacked\Client\MwWatch.exe", r"decompiled\ClassM_2.0.57\Client\MwWatch.cpp"),
    (r"ClassM_2.0.57\unpacked\Server\mvncv.exe", r"decompiled\ClassM_2.0.57\Server\mvncv.cpp"),
    (r"ClassM_2.0.57\unpacked\sheriff_GPT.dll", r"decompiled\ClassM_2.0.57\sheriff_GPT.cpp"),
    (r"ClassM_2.0.57\unpacked\sheriff_MBR.dll", r"decompiled\ClassM_2.0.57\sheriff_MBR.cpp"),
    (r"ClassM_2.0.57\unpacked\Client\sheriff_GPT.dll", r"decompiled\ClassM_2.0.57\Client\sheriff_GPT.cpp"),
    (r"ClassM_2.0.57\unpacked\Client\sheriff_MBR.dll", r"decompiled\ClassM_2.0.57\Client\sheriff_MBR.cpp"),
    (r"ClassM_3.0.500\ClassM_Client_unpacked\hscdm.exe", r"decompiled\ClassM_3.0.500\Client\hscdm.cpp"),
    (r"ClassM_3.0.500\ClassM_Client_unpacked\hscfm.exe", r"decompiled\ClassM_3.0.500\Client\hscfm.cpp"),
    (r"ClassM_3.0.500\ClassM_Client_unpacked\hscrelay.exe", r"decompiled\ClassM_3.0.500\Client\hscrelay.cpp"),
    (r"ClassM_3.0.500\ClassM_Client_unpacked\mvnc.exe", r"decompiled\ClassM_3.0.500\Client\mvnc.cpp"),
    (r"ClassM_3.0.500\ClassM_Client_unpacked\scrtm_client.exe", r"decompiled\ClassM_3.0.500\Client\scrtm_client.cpp"),
    (r"ClassM_3.0.500\ClassM_Client_unpacked\scrtm_server.exe", r"decompiled\ClassM_3.0.500\Client\scrtm_server.cpp"),
    (r"ClassM_3.0.500\ClassM_x64_unpacked\ClassM Main\scrtm_server.exe", r"decompiled\ClassM_3.0.500\ClassM Main\scrtm_server.cpp"),
    (r"ClassM_3.0.500\ClassM_x64_unpacked\ClassM Server\Binary\hssremote.exe", r"decompiled\ClassM_3.0.500\ClassM Server\Binary\hssremote.cpp"),
    (r"ClassM_3.0.500\ClassM_x64_unpacked\ClassM Server\CertificationManager\hsscertman_c.exe", r"decompiled\ClassM_3.0.500\ClassM Server\CertificationManager\hsscertman_c.cpp"),
    (r"ClassM_3.0.500\ClassM_Client_unpacked\hscnet.dll", r"decompiled\ClassM_3.0.500\Client\hscnet.cpp"),
    (r"ClassM_3.0.500\ClassM_Client_unpacked\IntegCert.dll", r"decompiled\ClassM_3.0.500\Client\IntegCert.cpp"),
    (r"ClassM_3.0.500\ClassM_Client_unpacked\sheriff_MBR.dll", r"decompiled\ClassM_3.0.500\Client\sheriff_MBR.cpp"),
    (r"ClassM_3.0.500\ClassM_x64_unpacked\$PLUGINSDIR\SimpleSC.dll", r"decompiled\ClassM_3.0.500\$PLUGINSDIR\SimpleSC.cpp"),
    (r"ClassM_3.0.500\ClassM_x64_unpacked\ClassM Main\hscnet.cpp" if False else r"ClassM_3.0.500\ClassM_x64_unpacked\ClassM Main\hscnet.dll", r"decompiled\ClassM_3.0.500\ClassM Main\hscnet.cpp"),
    (r"ClassM_3.0.500\ClassM_x64_unpacked\ClassM Server\CertificationManager\IntegCert.dll", r"decompiled\ClassM_3.0.500\ClassM Server\CertificationManager\IntegCert.cpp"),
    (r"Sheriff9_9.0.52\unpacked\sheriff_MBR.dll", r"decompiled\Sheriff9_9.0.52\sheriff_MBR.cpp"),
    (r"Sheriff9_9.0.52\unpacked\Client\sheriff_MBR.dll", r"decompiled\Sheriff9_9.0.52\Client\sheriff_MBR.cpp"),
]

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
            if "__usercall" in t:
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

def dump_disasm(ea: int, hf: ida_hexrays.hexrays_failure_t) -> str:
    name = idc.get_func_name(ea)
    lines = [
        f"// Address: 0x{ea:X} ({name})",
        f"// DECOMPILATION FAILED (code={hf.code}, errea=0x{hf.errea:X}): {hf.desc()}",
        "/*",
    ]
    for insn_ea in idautils.FuncItems(ea):
        lines.append(f"  0x{insn_ea:X}: {idc.GetDisasm(insn_ea)}")
    lines.append("*/\n")
    return "\n".join(lines)

def recover_file(src: Path, dst: Path) -> tuple[int, int]:
    idapro.open_database(str(src), True)
    try:
        ida_hexrays.init_hexrays_plugin()
        failed_eas = []
        for ea in idautils.Functions():
            try:
                if not ida_hexrays.decompile(ea):
                    failed_eas.append(ea)
            except Exception:
                failed_eas.append(ea)

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

        ok, fallback = 0, 0
        with open(dst, "w", encoding="utf-8") as f:
            f.write(f"// Decompiled from {src.name} ({src.relative_to(ROOT)})\n\n")
            for ea in idautils.Functions():
                hf = ida_hexrays.hexrays_failure_t()
                try:
                    cfunc = ida_hexrays.decompile(ea, hf)
                except Exception:
                    cfunc = None
                if cfunc:
                    f.write(f"// Address: 0x{ea:X}\n{cfunc}\n")
                    ok += 1
                else:
                    f.write(dump_disasm(ea, hf))
                    fallback += 1
        return ok, fallback
    finally:
        idapro.close_database(False)

def main():
    print(f"Recovering {len(REMAINING_24)} binaries...")
    for i, (src_rel, dst_rel) in enumerate(REMAINING_24, 1):
        src = ROOT / src_rel
        dst = ROOT / dst_rel
        try:
            ok, fallback = recover_file(src, dst)
            print(f"[{i}/{len(REMAINING_24)}] {dst_rel}: ok={ok}, disasm_fallback={fallback}", flush=True)
        except Exception as e:
            print(f"[{i}/{len(REMAINING_24)}] {dst_rel}: ERROR {e}", flush=True)

if __name__ == "__main__":
    main()
