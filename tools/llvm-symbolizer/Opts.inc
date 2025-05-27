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
       "llvm-symbolizer Mach-O Specific Options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--addresses", addresses, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Show address before line information", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--adjust-vma=", adjust_vma_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Add specified offset to object file addresses", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<offset>", nullptr)
OPTION(prefix_1, "--adjust-vma", anonymous_0, Separate, INVALID, adjust_vma_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<offset>", nullptr)
OPTION(prefix_2, "-a", anonymous_11, Flag, INVALID, addresses, nullptr, 0, DefaultVis, 0,
       "Alias for --addresses", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--basenames", basenames, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Strip directory names from paths", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--build-id=", build_id_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Build ID used to look up the object file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--build-id", anonymous_1, Separate, INVALID, build_id_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--cache-size=", cache_size_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Max size in bytes of the in-memory binary cache.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--cache-size", anonymous_2, Separate, INVALID, cache_size_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--color=", color_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Whether to use color when symbolizing log markup: always, auto, never", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, "always,auto,never")
OPTION(prefix_1, "--color", color, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Use color when symbolizing log markup.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-C", anonymous_13, Flag, INVALID, demangle, nullptr, 0, DefaultVis, 0,
       "Alias for --demangle", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--debug-file-directory=", debug_file_directory_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Path to directory where to look for debug files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<dir>", nullptr)
OPTION(prefix_1, "--debug-file-directory", anonymous_3, Separate, INVALID, debug_file_directory_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<dir>", nullptr)
OPTION(prefix_1, "--debuginfod", debuginfod, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Use debuginfod to find debug binaries", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--default-arch=", default_arch_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Default architecture (for multi-arch objects)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--default-arch", anonymous_4, Separate, grp_mach_o, default_arch_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-demangle=false", anonymous_29, Flag, INVALID, no_demangle, nullptr, 0, DefaultVis, 0,
       "Alias for --no-demangle", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-demangle=true", anonymous_28, Flag, INVALID, demangle, nullptr, 0, DefaultVis, 0,
       "Alias for --demangle", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--demangle", demangle, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Demangle function names", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dia", use_dia, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Use the DIA library to access symbols (Windows only)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dsym-hint=", dsym_hint_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, DefaultVis, 0,
       "Path to .dSYM bundles to search for debug info for the object files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<dir>", nullptr)
OPTION(prefix_1, "--dsym-hint", anonymous_6, Separate, grp_mach_o, dsym_hint_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<dir>", nullptr)
OPTION(prefix_1, "--dwp=", dwp_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Path to DWP file to be use for any split CUs", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<file>", nullptr)
OPTION(prefix_1, "--dwp", anonymous_5, Separate, INVALID, dwp_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<file>", nullptr)
OPTION(prefix_2, "-e=", anonymous_17, Joined, INVALID, obj_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --obj", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<file>", nullptr)
OPTION(prefix_1, "--exe=", anonymous_14, Joined, INVALID, obj_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --obj", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<file>", nullptr)
OPTION(prefix_1, "--exe", anonymous_15, Separate, INVALID, obj_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --obj", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<file>", nullptr)
OPTION(prefix_2, "-e", anonymous_16, JoinedOrSeparate, INVALID, obj_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --obj", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<file>", nullptr)
OPTION(prefix_2, "-f=", anonymous_19, Joined, INVALID, functions_EQ, nullptr, 0, DefaultVis, 0,
       "Alias for --functions=", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--fallback-debug-path=", fallback_debug_path_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Fallback path for debug binaries", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<dir>", nullptr)
OPTION(prefix_1, "--fallback-debug-path", anonymous_7, Separate, INVALID, fallback_debug_path_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<dir>", nullptr)
OPTION(prefix_1, "--filter-markup", filter_markup, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Filter symbolizer markup from stdin.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--functions=", functions_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print function name for a given address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, "none,short,linkage")
OPTION(prefix_1, "--functions", functions, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print function name for a given address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-f", anonymous_18, Flag, INVALID, functions, nullptr, 0, DefaultVis, 0,
       "Alias for --functions", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--help", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display this help", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-h", anonymous_20, Flag, INVALID, help, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--inlines", inlines, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print all inlined frames for a given address", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--inlining=false", anonymous_27, Flag, INVALID, no_inlines, nullptr, 0, DefaultVis, 0,
       "Alias for --no-inlines", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--inlining=true", anonymous_26, Flag, INVALID, inlines, nullptr, 0, DefaultVis, 0,
       "Alias for --inlines", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--inlining", anonymous_22, Flag, INVALID, inlines, nullptr, 0, DefaultVis, 0,
       "Alias for --inlines", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-i", anonymous_21, Flag, INVALID, inlines, nullptr, 0, DefaultVis, 0,
       "Alias for --inlines", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-debuginfod", no_debuginfod, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Don't use debuginfod to find debug binaries", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-demangle", no_demangle, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Don't demangle function names", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-inlines", no_inlines, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Do not print inlined frames", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-untag-addresses", no_untag_addresses, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove memory tags from addresses before symbolization", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--obj=", obj_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Path to object file to be symbolized (if not provided, object file should be specified for each input line)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<file>", nullptr)
OPTION(prefix_1, "--obj", anonymous_8, Separate, INVALID, obj_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<file>", nullptr)
OPTION(prefix_1, "--output-style=", output_style_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Specify print style. Supported styles: LLVM, GNU, JSON", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "style", "LLVM,GNU,JSON")
OPTION(prefix_1, "--output-style", anonymous_9, Separate, INVALID, output_style_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "style", "LLVM,GNU,JSON")
OPTION(prefix_1, "--pretty-print", pretty_print, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Make the output more human friendly", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--print-address", anonymous_12, Flag, INVALID, addresses, nullptr, 0, DefaultVis, 0,
       "Alias for --addresses", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--print-source-context-lines=", print_source_context_lines_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print N lines of source file context", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--print-source-context-lines", anonymous_10, Separate, INVALID, print_source_context_lines_EQ, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-p", anonymous_23, Flag, INVALID, pretty_print, nullptr, 0, DefaultVis, 0,
       "Alias for --pretty-print", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--relative-address", relative_address, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Interpret addresses as addresses relative to the image base", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--relativenames", relativenames, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Strip the compilation directory from paths", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-s", anonymous_24, Flag, INVALID, basenames, nullptr, 0, DefaultVis, 0,
       "Alias for --basenames", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--untag-addresses", untag_addresses, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--verbose", verbose, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print verbose line info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--version", version, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display the version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-v", anonymous_25, Flag, INVALID, version, nullptr, 0, DefaultVis, 0,
       "Alias for --version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
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


