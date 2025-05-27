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
OPTION(llvm::ArrayRef<llvm::StringLiteral>(), "kind", grp_coff, Group, INVALID, INVALID, nullptr, 0, 0, 0,
       "OPTIONS (PE/COFF specific)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(llvm::ArrayRef<llvm::StringLiteral>(), "kind", grp_elf, Group, INVALID, INVALID, nullptr, 0, 0, 0,
       "OPTIONS (ELF specific)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(llvm::ArrayRef<llvm::StringLiteral>(), "kind", grp_mach_o, Group, INVALID, INVALID, nullptr, 0, 0, 0,
       "OPTIONS (Mach-O specific)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(llvm::ArrayRef<llvm::StringLiteral>(), "kind", grp_xcoff, Group, INVALID, INVALID, nullptr, 0, 0, 0,
       "OPTIONS (XCOFF specific)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--addrsig", addrsig, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display address-significance table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--all", all, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Equivalent to setting: --file-header, --program-headers, --section-headers, --symbols, --relocations, --dynamic-table, --notes, --version-info, --unwind, --section-groups and --histogram", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--arch-specific", arch_specific, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display architecture-specific information", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--auxiliary-header", auxiliary_header, Flag, grp_xcoff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the auxiliary header", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-A", anonymous_19, Flag, INVALID, arch_specific, nullptr, 0, DefaultVis, 0,
       "Alias for --arch-specific", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-a", anonymous_20, Flag, INVALID, all, nullptr, 0, DefaultVis, 0,
       "Alias for --all", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--bb-addr-map", bb_addr_map, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the BB address map section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--cg-profile", cg_profile, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display call graph profile section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--codeview-ghash", codeview_ghash, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Enable global hashing for CodeView type stream de-duplication", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--codeview-merged-types", codeview_merged_types, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the merged CodeView type stream", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--codeview-subsection-bytes", codeview_subsection_bytes, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Dump raw contents of codeview debug sections and records", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--codeview", codeview, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display CodeView debug information", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--coff-basereloc", coff_basereloc, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display .reloc section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--coff-debug-directory", coff_debug_directory, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display debug directory", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--coff-directives", coff_directives, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display .drectve section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--coff-exports", coff_exports, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display export table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--coff-imports", coff_imports, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display import table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--coff-load-config", coff_load_config, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display load config", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--coff-resources", coff_resources, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display .rsrc section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--coff-tls-directory", coff_tls_directory, Flag, grp_coff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display TLS directory", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-C", anonymous_21, Flag, INVALID, demangle, nullptr, 0, DefaultVis, 0,
       "Alias for --demangle", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--decompress", decompress, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Dump decompressed section content when used with -x or -p", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--demangle", demangle, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Demangle symbol names", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dependent-libraries", dependent_libraries, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the dependent libraries section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dt", anonymous_5, Flag, INVALID, dyn_syms, nullptr, 0, DefaultVis, 0,
       "Alias for --dyn-syms", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dyn-relocations", dyn_relocations, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the dynamic relocation entries in the file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dyn-symbols", anonymous_9, Flag, INVALID, dyn_syms, nullptr, 0, DefaultVis, 0,
       "Alias for --dyn-syms", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dyn-syms", dyn_syms, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the dynamic symbol table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dynamic-table", dynamic_table, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the dynamic section table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dynamic", anonymous_10, Flag, INVALID, dynamic_table, nullptr, 0, DefaultVis, 0,
       "Alias for --dynamic-table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-d", anonymous_22, Flag, grp_elf, dynamic_table, nullptr, 0, DefaultVis, 0,
       "Alias for --dynamic-table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--elf-cg-profile", anonymous_11, Flag, INVALID, cg_profile, nullptr, HelpHidden, DefaultVis, 0,
       "Alias for --cg-profile", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--elf-hash-histogram", anonymous_12, Flag, INVALID, histogram, nullptr, HelpHidden, DefaultVis, 0,
       "Alias for --histogram", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--elf-linker-options", elf_linker_options, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the .linker-options section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--elf-output-style=", elf_output_style_EQ, Joined, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Specify ELF dump style: LLVM, GNU, JSON", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--elf-output-style", anonymous_3, Separate, grp_elf, elf_output_style_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--elf-section-groups", anonymous_13, Flag, INVALID, section_groups, nullptr, HelpHidden, DefaultVis, 0,
       "Alias for --section-groups", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--exception-section", exception_section, Flag, grp_xcoff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the exception section entries", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--expand-relocs", expand_relocs, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Expand each shown relocation to multiple lines", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--extra-sym-info", extra_sym_info, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display extra information when showing symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-e", anonymous_23, Flag, INVALID, headers, nullptr, 0, DefaultVis, 0,
       "Alias for --headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--file-headers", anonymous_14, Flag, INVALID, file_header, nullptr, HelpHidden, DefaultVis, 0,
       "Alias for --file-header", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--file-header", file_header, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display file header", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--gnu-hash-table", gnu_hash_table, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the GNU hash table for dynamic symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-g", anonymous_24, Flag, grp_elf, section_groups, nullptr, 0, DefaultVis, 0,
       "Alias for --section-groups", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--hash-symbols", hash_symbols, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the dynamic symbols derived from the hash section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--hash-table", hash_table, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display .hash section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--headers", headers, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Equivalent to setting: --file-header, --program-headers, --section-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--help", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display this help", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--hex-dump=", hex_dump_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the specified section(s) as hexadecimal bytes", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<name or index>", nullptr)
OPTION(prefix_1, "--hex-dump", anonymous_0, Separate, INVALID, hex_dump_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<name or index>", nullptr)
OPTION(prefix_1, "--histogram", histogram, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display bucket list histogram for hash sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-h", anonymous_25, Flag, INVALID, file_header, nullptr, 0, DefaultVis, 0,
       "Alias for --file-header", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-I", anonymous_26, Flag, grp_elf, histogram, nullptr, 0, DefaultVis, 0,
       "Alias for --histogram", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--loader-section-header", loader_section_header, Flag, grp_xcoff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the loader section header", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--loader-section-relocations", loader_section_relocations, Flag, grp_xcoff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the loader section relocation entries", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--loader-section-symbols", loader_section_symbols, Flag, grp_xcoff, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the loader section symbol table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-l", anonymous_27, Flag, INVALID, program_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --program-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--macho-data-in-code", macho_data_in_code, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display Data in Code command", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--macho-dysymtab", macho_dysymtab, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display Dysymtab command", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--macho-indirect-symbols", macho_indirect_symbols, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display indirect symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--macho-linker-options", macho_linker_options, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display linker options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--macho-segment", macho_segment, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display Segment command", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--macho-version-min", macho_version_min, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Display version min command", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--memtag", memtag, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display memory tagging metadata (modes, Android notes, global descriptors)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--needed-libs", needed_libs, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the needed libraries", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-demangle", no_demangle, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Do not demangle symbol names (default)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--notes", notes, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display notes", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-n", anonymous_28, Flag, INVALID, notes, nullptr, 0, DefaultVis, 0,
       "Alias for --notes", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--pretty-pgo-analysis-map", pretty_pgo_analysis_map, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display PGO analysis values with formatting rather than raw numbers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--pretty-print", pretty_print, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Pretty print JSON output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--program-headers", program_headers, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display program headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-p", anonymous_29, JoinedOrSeparate, INVALID, string_dump_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --string-dump", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<name or index>", nullptr)
OPTION(prefix_1, "--relocations", anonymous_15, Flag, INVALID, relocs, nullptr, 0, DefaultVis, 0,
       "Alias for --relocs", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--relocs", relocs, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the relocation entries in the file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-r", anonymous_30, Flag, INVALID, relocs, nullptr, 0, DefaultVis, 0,
       "Alias for --relocs", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--sd", anonymous_6, Flag, INVALID, section_data, nullptr, 0, DefaultVis, 0,
       "Alias for --section-data", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section-data", section_data, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display section data for each section shown. This option has no effect for GNU style output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section-details", section_details, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the section details", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section-groups", section_groups, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display section groups", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section-headers", section_headers, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display section headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section-mapping=false", section_mapping_EQ_false, Flag, INVALID, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "Don't display the section to segment mapping", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section-mapping", section_mapping, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the section to segment mapping", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section-relocations", section_relocations, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display relocations for each section shown. This option has no effect for GNU style output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--section-symbols", section_symbols, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display symbols for each section shown. This option has no effect for GNU style output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--sections", anonymous_16, Flag, INVALID, section_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --section-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--segments", anonymous_17, Flag, grp_elf, program_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --program-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--sort-symbols=", sort_symbols_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Specify the keys to sort the symbols before displaying symtab", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--sort-symbols", anonymous_1, Separate, INVALID, sort_symbols_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--sr", anonymous_8, Flag, INVALID, section_relocations, nullptr, 0, DefaultVis, 0,
       "Alias for --section-relocations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--stack-sizes", stack_sizes, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display contents of all stack sizes sections. This option has no effect for GNU style output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--stackmap", stackmap, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display contents of stackmap section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--string-dump=", string_dump_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the specified section(s) as a list of strings", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<name or index>", nullptr)
OPTION(prefix_1, "--string-dump", anonymous_2, Separate, INVALID, string_dump_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<name or index>", nullptr)
OPTION(prefix_1, "--string-table", string_table, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the string table (only for XCOFF now)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--st", anonymous_7, Flag, INVALID, section_symbols, nullptr, 0, DefaultVis, 0,
       "Alias for --section-symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--symbols", symbols, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the symbol table. Also display the dynamic symbol table when using GNU output style for ELF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--syms", anonymous_18, Flag, INVALID, symbols, nullptr, 0, DefaultVis, 0,
       "Alias for --symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-S", anonymous_31, Flag, INVALID, section_headers, nullptr, 0, DefaultVis, 0,
       "Alias for --section-headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-s", anonymous_32, Flag, INVALID, symbols, nullptr, 0, DefaultVis, 0,
       "Alias for --symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-t", anonymous_33, Flag, INVALID, section_details, nullptr, 0, DefaultVis, 0,
       "Alias for --section-details", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--unwind", unwind, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display unwind information", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-u", anonymous_34, Flag, INVALID, unwind, nullptr, 0, DefaultVis, 0,
       "Alias for --unwind", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--version-info", version_info, Flag, grp_elf, INVALID, nullptr, 0, DefaultVis, 0,
       "Display version sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--version", version, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-V", anonymous_36, Flag, grp_elf, version_info, nullptr, 0, DefaultVis, 0,
       "Alias for --version-info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--wide", wide, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Ignored for GNU readelf compatibility", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-W", anonymous_4, Flag, INVALID, wide, nullptr, 0, DefaultVis, 0,
       "Ignored for GNU readelf compatibility", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-X", anonymous_35, Flag, grp_elf, extra_sym_info, nullptr, 0, DefaultVis, 0,
       "Alias for --extra-sym-info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-x", anonymous_37, JoinedOrSeparate, INVALID, hex_dump_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --hex-dump", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<name or index>", nullptr)
OPTION(prefix_2, "-z", anonymous_38, Flag, INVALID, decompress, nullptr, 0, DefaultVis, 0,
       "Alias for --decompress", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
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


