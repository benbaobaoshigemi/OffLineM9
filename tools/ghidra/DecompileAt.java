// Headless: decompile the functions containing the given addresses.
//   analyzeHeadless <proj_dir> <proj> -import <lib> -postScript DecompileAt.java <out.c> <addr>...
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.PrintWriter;

public class DecompileAt extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        DecompInterface d = new DecompInterface();
        d.openProgram(currentProgram);
        try (PrintWriter w = new PrintWriter(args[0])) {
            for (int i = 1; i < args.length; i++) {
                Address a = currentProgram.getAddressFactory().getDefaultAddressSpace()
                        .getAddress(Long.parseLong(args[i].replace("0x", ""), 16) + currentProgram.getImageBase().getOffset());
                Function f = getFunctionContaining(a);
                if (f == null) { w.println("// no function at " + args[i]); continue; }
                DecompileResults r = d.decompileFunction(f, 600, monitor);
                w.println("// ===== " + args[i] + " " + f.getName() + " @ " + f.getEntryPoint());
                w.println(r.decompileCompleted() ? r.getDecompiledFunction().getC() : "// failed: " + r.getErrorMessage());
            }
        }
    }
}
