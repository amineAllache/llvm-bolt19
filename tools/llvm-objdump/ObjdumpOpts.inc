/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {llvm::StringLiteral("")})
PREFIX(prefix_2, {llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
PREFIX(prefix_1, {llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
#undef COMMA
#endif // PREFIX

/////////
// Prefix Union

#ifdef PREFIX_UNION
#define COMMA ,
PREFIX_UNION({
llvm::StringLiteral("-") COMMA llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
#undef COMMA
#endif // PREFIX_UNION

/////////
// ValuesCode

#ifdef OPTTABLE_VALUES_CODE
#endif
/////////
// Groups

#ifdef OPTION
OPTION(llvm::ArrayRef<llvm::StringLiteral>(), "kind", grp_mach_o, Group, INVALID, INVALID, nullptr, 0, 0, 0,
       "llvm-objdump MachO Specific Options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--adjust-vma=", adjust_vma_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Increase the displayed address by the specified offset", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "offset", nullptr)
OPTION(prefix_1, "--all-headers", all_headers, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display all available header information, relocation entries and the symbol table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--arch-name=", arch_name_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Target arch to disassemble for, see --version for available targets", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--arch=", arch_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "architecture(s) from a Mach-O file to dump", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--archive-headers", archive_headers, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display archive header information", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--archive-member-offsets", archive_member_offsets, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the offset to each archive member for Mach-O archives (requires --macho and --archive-headers)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--arch", anonymous_31, Separate, grp_mach_o, arch_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-a", anonymous_2, Flag, INVALID, archive_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --archive-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--bind", bind, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display mach-o binding info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--build-id=", build_id_eq, Joined, INVALID, build_id, nullptr, 0, DefaultVis, 0,
       "Build ID to look up. Once found, added as an input file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<hex>", nullptr)
OPTION(prefix_1, "--build-id", build_id, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<hex>", nullptr)
OPTION(prefix_1, "--chained-fixups", chained_fixups, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print chained fixup information (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-C", anonymous_3, Flag, INVALID, demangle, nullptr, 0, DefaultVis, 0,
       "Alias for --demangle", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--data-in-code", data_in_code, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the data in code table for Mach-O objects (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--debug-file-directory=", debug_file_directory_eq, Joined, INVALID, debug_file_directory, nullptr, 0, DefaultVis, 0,
       "Path to directory where to look for debug files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<dir>", nullptr)
OPTION(prefix_1, "--debug-file-directory", debug_file_directory, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<dir>", nullptr)
OPTION(prefix_1, "--debug-vars-indent=", debug_vars_indent_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Distance to indent the source-level variable display, relative to the start of the disassembly", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--debug-vars=", debug_vars_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the locations (in registers or memory) of source-level variables alongside disassembly. Supported formats: ascii, unicode (default)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, "unicode,ascii")
OPTION(prefix_1, "--debug-vars", anonymous_28, Flag, INVALID, debug_vars_EQ, "unicode\0", 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--debuginfod", debuginfod, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Use debuginfod to find debug files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--demangle", demangle, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Demangle symbol names", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dis-symname", dis_symname, Separate, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "disassemble just this symbol's instructions (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--disassemble-all", disassemble_all, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Disassemble all sections found in the input files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--disassemble-symbols=", disassemble_symbols_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "List of symbols to disassemble. Accept demangled names when --demangle is specified, otherwise accept mangled names", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--disassemble-zeroes", disassemble_zeroes, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Do not skip blocks of zeroes when disassembling", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--disassembler-color=", disassembler_color_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Enable or disable disassembler color output. Valid options are \"on\", \"off\" and \"terminal\" (default)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "mode", nullptr)
OPTION(prefix_1, "--disassembler-options=", disassembler_options_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Pass target specific disassembler options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "options", nullptr)
OPTION(prefix_1, "--disassemble", disassemble, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Disassemble all executable sections found in the input files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dsym=", dsym_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Use .dSYM file for debug info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dsym", anonymous_29, Separate, grp_mach_o, dsym_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dwarf=", dwarf_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Dump the specified DWARF debug sections. The only supported value is 'frames'", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, "frames")
OPTION(prefix_1, "--dyld-info", dyld_info, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print bind and rebase information used by dyld to resolve external references in a final linked binary (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dylib-id", dylib_id, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the shared library's id for the dylib Mach-O file (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dylibs-used", dylibs_used, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the shared libraries used for linked Mach-O files (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dynamic-reloc", dynamic_reloc, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the dynamic relocation entries in the file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dynamic-syms", dynamic_syms, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the contents of the dynamic symbol table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-D", anonymous_5, Flag, INVALID, disassemble_all, nullptr, 0, DefaultVis, 0,
       "Alias for --disassemble-all", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-d", anonymous_4, Flag, INVALID, disassemble, nullptr, 0, DefaultVis, 0,
       "Alias for --disassemble", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--exports-trie", exports_trie, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display mach-o exported symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--fault-map-section", fault_map_section, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the content of the fault map section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--file-headers", file_headers, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the contents of the overall file header", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--full-contents", full_contents, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the content of each section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--full-leading-addr", full_leading_addr, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print full leading address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--function-starts=", function_starts_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the function starts table for Mach-O objects. Options: addrs (default), names, both (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, "addrs,names,both")
OPTION(prefix_1, "--function-starts", anonymous_30, Flag, grp_mach_o, function_starts_EQ, "addrs\0", 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-f", anonymous_9, Flag, INVALID, file_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --file-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-g", g, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print line information from debug info if available", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--headers", anonymous_20, Flag, INVALID, section_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --section-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--help-hidden", help_hidden, Flag, INVALID, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "Display all available options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--help", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display available options (--help-hidden for more)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-h", anonymous_21, Flag, INVALID, section_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --section-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--indirect-symbols", indirect_symbols, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print indirect symbol table for Mach-O objects (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--info-plist", info_plist, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the info plist section as strings for Mach-O objects (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-j", anonymous_19, JoinedOrSeparate, INVALID, section_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--lazy-bind", lazy_bind, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display mach-o lazy binding info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--line-numbers", line_numbers, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "When disassembling, display source line numbers. Implies --disassemble", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--link-opt-hints", link_opt_hints, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the linker optimization hints for Mach-O objects (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-l", anonymous_11, Flag, INVALID, line_numbers, nullptr, 0, DefaultVis, 0,
       "Alias for --line-numbers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--macho", macho, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Use MachO specific object file parser", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--mattr=", mattr_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Target specific attributes (--mattr=help for details)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "a1,+a2,-a3,...", nullptr)
OPTION(prefix_1, "--mcpu=", mcpu_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Target a specific cpu type (--mcpu=help for details)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "cpu-name", nullptr)
OPTION(prefix_2, "-mllvm=", anonymous_13, Joined, INVALID, mllvm, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-mllvm", mllvm, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Specify an argument to forward to LLVM's CommandLine library", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<arg>", nullptr)
OPTION(prefix_2, "-M", anonymous_7, JoinedOrSeparate, INVALID, disassembler_options_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --disassembler-options=", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-m", anonymous_12, Flag, INVALID, macho, nullptr, 0, DefaultVis, 0,
       "Alias for --macho", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-addresses", anonymous_14, Flag, INVALID, no_leading_addr, nullptr, 0, DefaultVis, 0,
       "Alias for --no-leading-addr", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-debuginfod", no_debuginfod, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Don't use debuginfod to find debug files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-leading-addr", no_leading_addr, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "When disassembling, do not print leading addresses for instructions or inline relocations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-leading-headers", no_leading_headers, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print no leading headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-print-imm-hex", no_print_imm_hex, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Do not use hex format for immediate values", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-show-raw-insn", no_show_raw_insn, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "When disassembling instructions, do not print the instruction bytes.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-symbolic-operands", no_symbolic_operands, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "do not symbolic operands when disassembling (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--non-verbose", non_verbose, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the info for Mach-O objects in non-verbose or numeric form (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--objc-meta-data", objc_meta_data, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the Objective-C runtime meta data for Mach-O files (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--offloading", offloading, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the content of the offloading section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--prefix-strip=", prefix_strip_eq, Joined, INVALID, prefix_strip, nullptr, 0, DefaultVis, 0,
       "Strip out initial directories from absolute paths. No effect without --prefix", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--prefix-strip", prefix_strip, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--prefix=", prefix_eq, Joined, INVALID, prefix, nullptr, 0, DefaultVis, 0,
       "Add prefix to absolute paths", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--prefix", prefix, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--pretty-pgo-analysis-map", pretty_pgo_analysis_map, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display PGO analysis values with formatting rather than raw numbers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--print-imm-hex=false", anonymous_16, Flag, INVALID, no_print_imm_hex, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--print-imm-hex", print_imm_hex, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Use hex format for immediate values (default)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--private-headers", private_headers, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display format specific file headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--private-header", private_header, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display only the first format specific file header", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-p", anonymous_17, Flag, INVALID, private_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --private-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--raw-clang-ast", raw_clang_ast, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Dump the raw binary contents of the clang AST section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--rebase", rebase, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display mach-o rebasing info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--reloc", reloc, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the relocation entries in the file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--rpaths", rpaths, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the runtime search paths for the Mach-O file (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-R", anonymous_8, Flag, INVALID, dynamic_reloc, nullptr, 0, DefaultVis, 0,
       "Alias for --dynamic-reloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-r", anonymous_15, Flag, INVALID, reloc, nullptr, 0, DefaultVis, 0,
       "Alias for --reloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section-headers", section_headers, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display summaries of the headers for each section.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section=", section_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Operate on the specified sections only. With --macho dump segment,section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section", anonymous_18, Separate, INVALID, section_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--show-all-symbols", show_all_symbols, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Show all symbols during disassembly, even if multiple symbols are defined at the same location", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--show-lma", show_lma, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display LMA column when dumping ELF section headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--source", source, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "When disassembling, display source interleaved with the disassembly. Implies --disassemble", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--start-address=", start_address_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Set the start address for disassembling, printing relocations and printing symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "address", nullptr)
OPTION(prefix_1, "--stop-address=", stop_address_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Set the stop address for disassembling, printing relocations and printing symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "address", nullptr)
OPTION(prefix_1, "--symbol-description", symbol_description, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Add symbol description for disassembly. This option is for XCOFF files only", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--symbolize-operands", symbolize_operands, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Symbolize instruction operands when disassembling", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--syms", syms, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the symbol table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-S", anonymous_22, Flag, INVALID, source, nullptr, 0, DefaultVis, 0,
       "Alias for --source", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-s", anonymous_10, Flag, INVALID, full_contents, nullptr, 0, DefaultVis, 0,
       "Alias for --full-contents", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--traceback-table", traceback_table, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Decode traceback table in disassembly. Implies --disassemble. This option is for XCOFF files only", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--triple=", triple_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Target triple to disassemble for, see --version for available targets", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--triple", anonymous_25, Separate, INVALID, triple_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-T", anonymous_24, Flag, INVALID, dynamic_syms, nullptr, 0, DefaultVis, 0,
       "Alias for --dynamic-syms", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-t", anonymous_23, Flag, INVALID, syms, nullptr, 0, DefaultVis, 0,
       "Alias for --syms", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--universal-headers", universal_headers, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print Mach-O universal headers (requires --macho)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--unwind-info", unwind_info, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display unwind information", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-u", anonymous_26, Flag, INVALID, unwind_info, nullptr, 0, DefaultVis, 0,
       "Alias for --unwind-info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--version", version, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the version of this program", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-v", anonymous_0, Flag, INVALID, version, nullptr, 0, DefaultVis, 0,
       "Alias for --version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--weak-bind", weak_bind, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display mach-o weak binding info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--wide", wide, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Ignored for compatibility with GNU objdump", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-w", anonymous_27, Flag, INVALID, wide, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--x86-asm-syntax=att", x86_asm_syntax_att, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Emit AT&T-style disassembly", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--x86-asm-syntax=intel", x86_asm_syntax_intel, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Emit Intel-style disassembly", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-x", anonymous_1, Flag, INVALID, all_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --all-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-z", anonymous_6, Flag, INVALID, disassemble_zeroes, nullptr, 0, DefaultVis, 0,
       "Alias for --disassemble-zeroes", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = std::size(SimpleEnumValueTables);
#endif // SIMPLE_ENUM_VALUE_TABLE


