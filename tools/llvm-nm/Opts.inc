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
PREFIX(prefix_3, {llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
PREFIX(prefix_1, {llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
PREFIX(prefix_2, {llvm::StringLiteral("--") COMMA llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
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
       "llvm-nm Mach-O Specific Options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(llvm::ArrayRef<llvm::StringLiteral>(), "kind", grp_xcoff_o, Group, INVALID, INVALID, nullptr, 0, 0, 0,
       "llvm-nm XCOFF Specific Options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--add-dyldinfo", add_dyldinfo, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Add symbols from the dyldinfo not already in the symbol table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--add-inlinedinfo", add_inlinedinfo, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Add symbols from the inlined libraries, TBD only", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--arch=", arch_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "architecture(s) from a Mach-O file to dump", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--arch", anonymous_2, Separate, INVALID, arch_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-A", anonymous_6, Flag, INVALID, print_file_name, nullptr, 0, DefaultVis, 0,
       "Alias for --print-file-name", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-a", anonymous_5, Flag, INVALID, debug_syms, nullptr, 0, DefaultVis, 0,
       "Alias for --debug-syms", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-B", anonymous_7, Flag, INVALID, format_EQ, "bsd\0", 0, DefaultVis, 0,
       "Alias for --format=bsd", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-C", anonymous_8, Flag, INVALID, demangle, nullptr, 0, DefaultVis, 0,
       "Alias for --demangle", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--debug-syms", debug_syms, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Show all symbols, even debugger only", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--defined-only", defined_only, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Show only defined symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--demangle", demangle, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Demangle C++ symbol names", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dyldinfo-only", dyldinfo_only, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Show only symbols from the dyldinfo", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dynamic", dynamic, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display dynamic symbols instead of normal symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-D", anonymous_9, Flag, INVALID, dynamic, nullptr, 0, DefaultVis, 0,
       "Alias for --dynamic", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--export-symbols", export_symbols, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Export symbol list for all inputs", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--extern-only", extern_only, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Show only external symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--format=", format_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Specify output format: bsd (default), posix, sysv, darwin, just-symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<format>", nullptr)
OPTION(prefix_1, "--format", anonymous_0, Separate, INVALID, format_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<format>", nullptr)
OPTION(prefix_3, "-f", anonymous_10, JoinedOrSeparate, INVALID, format_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<format>", nullptr)
OPTION(prefix_3, "-g", anonymous_12, Flag, INVALID, extern_only, nullptr, 0, DefaultVis, 0,
       "Alias for --extern-only", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--help", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display this help", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-h", anonymous_11, Flag, INVALID, help, nullptr, 0, DefaultVis, 0,
       "Alias for --help", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--just-symbol-name", anonymous_3, Flag, INVALID, format_EQ, "just-symbols\0", HelpHidden, DefaultVis, 0,
       "Alias for --format=just-symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-j", anonymous_13, Flag, INVALID, format_EQ, "just-symbols\0", 0, DefaultVis, 0,
       "Alias for --format=just-symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--line-numbers", line_numbers, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Use debugging information to print symbols' filenames and line numbers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-l", anonymous_14, Flag, INVALID, line_numbers, nullptr, 0, DefaultVis, 0,
       "Alias for --line-numbers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-M", anonymous_16, Flag, INVALID, print_armap, nullptr, HelpHidden, DefaultVis, 0,
       "Deprecated alias for --print-armap", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-m", anonymous_15, Flag, INVALID, format_EQ, "darwin\0", 0, DefaultVis, 0,
       "Alias for --format=darwin", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-demangle", no_demangle, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Don't demangle symbol names", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-dyldinfo", no_dyldinfo, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Don't add any symbols from the dyldinfo", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-llvm-bc", no_llvm_bc, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Disable LLVM bitcode reader", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-rsrc", no_rsrc, Flag, grp_xcoff_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Exclude resource file symbols (__rsrc) from the export symbol list.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-sort", no_sort, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Show symbols in order encountered", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-weak", no_weak, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Show only non-weak symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--numeric-sort", numeric_sort, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Sort symbols by address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-n", anonymous_17, Flag, INVALID, numeric_sort, nullptr, 0, DefaultVis, 0,
       "Alias for --numeric-sort", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-o", anonymous_18, Flag, INVALID, print_file_name, nullptr, 0, DefaultVis, 0,
       "Alias for --print-file-name", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--portability", anonymous_4, Flag, INVALID, format_EQ, "posix\0", 0, DefaultVis, 0,
       "Alias for --format=posix", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--print-armap", print_armap, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the archive map", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--print-file-name", print_file_name, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Precede each symbol with the object file it came from", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--print-size", print_size, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Show symbol size as well as address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-P", anonymous_20, Flag, INVALID, format_EQ, "posix\0", 0, DefaultVis, 0,
       "Alias for --format=posix", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-p", anonymous_19, Flag, INVALID, no_sort, nullptr, 0, DefaultVis, 0,
       "Alias for --no-sort", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--quiet", quiet, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Suppress 'no symbols' diagnostic", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--radix=", radix_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Radix (o/d/x) for printing symbol Values", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<radix>", nullptr)
OPTION(prefix_1, "--radix", anonymous_1, Separate, INVALID, radix_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<radix>", nullptr)
OPTION(prefix_1, "--reverse-sort", reverse_sort, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Sort in reverse order", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-r", anonymous_21, Flag, INVALID, reverse_sort, nullptr, 0, DefaultVis, 0,
       "Alias for --reverse-sort", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--size-sort", size_sort, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Sort symbols by size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--special-syms", special_syms, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Do not filter special symbols from the output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-S", anonymous_22, Flag, INVALID, print_size, nullptr, 0, DefaultVis, 0,
       "Alias for --print-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-s", s, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Dump only symbols from this segment and section name", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-t", anonymous_23, JoinedOrSeparate, INVALID, radix_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --radix", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<radix>", nullptr)
OPTION(prefix_1, "--undefined-only", undefined_only, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Show only undefined symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-U", anonymous_25, Flag, INVALID, defined_only, nullptr, 0, DefaultVis, 0,
       "Alias for --defined-only", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-u", anonymous_24, Flag, INVALID, undefined_only, nullptr, 0, DefaultVis, 0,
       "Alias for --undefined-only", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--version", version, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-V", anonymous_27, Flag, INVALID, version, nullptr, 0, DefaultVis, 0,
       "Alias for --version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-v", anonymous_26, Flag, INVALID, numeric_sort, nullptr, 0, DefaultVis, 0,
       "Alias for --numeric-sort", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--without-aliases", without_aliases, Flag, INVALID, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "Exclude aliases from output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-W", anonymous_28, Flag, INVALID, no_weak, nullptr, 0, DefaultVis, 0,
       "Alias for --no-weak", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-X", X, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Specifies the type of ELF, XCOFF, or IR object file to examine. The value must be one of: 32, 64, 32_64, any (default)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-x", x, Flag, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Print symbol entry in hex", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
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


