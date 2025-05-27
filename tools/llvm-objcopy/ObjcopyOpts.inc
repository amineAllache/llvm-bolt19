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
       "OPTIONS (COFF specific)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(llvm::ArrayRef<llvm::StringLiteral>(), "kind", grp_macho, Group, INVALID, INVALID, nullptr, 0, 0, 0,
       "OPTIONS (Mach-O specific)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--add-gnu-debuglink=", add_gnu_debuglink_eq, Joined, INVALID, add_gnu_debuglink, nullptr, 0, DefaultVis, 0,
       "Add a .gnu_debuglink for <debug-file>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "debug-file", nullptr)
OPTION(prefix_1, "--add-gnu-debuglink", add_gnu_debuglink, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "debug-file", nullptr)
OPTION(prefix_1, "--add-section=", add_section_eq, Joined, INVALID, add_section, nullptr, 0, DefaultVis, 0,
       "Add a section named <section> with the contents of <file>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=file", nullptr)
OPTION(prefix_1, "--add-section", add_section, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=file", nullptr)
OPTION(prefix_1, "--add-symbol=", add_symbol_eq, Joined, INVALID, add_symbol, nullptr, 0, DefaultVis, 0,
       "Add new symbol <name> to .symtab. Accepted flags: global, local, weak, default, hidden, protected, file, section, object, function, indirect-function. Accepted but ignored for compatibility: debug, constructor, warning, indirect, synthetic, unique-object, before", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "name=[section:]value[,flags]", nullptr)
OPTION(prefix_1, "--add-symbol", add_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "name=[section:]value[,flags]", nullptr)
OPTION(prefix_1, "--adjust-start", adjust_start, JoinedOrSeparate, INVALID, change_start, nullptr, 0, DefaultVis, 0,
       "Alias for --change-start", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--allow-broken-links", allow_broken_links, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Allow the tool to remove sections even if it would leave invalid section references. The appropriate sh_link fields will be set to zero.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--binary-architecture=", binary_architecture_eq, Joined, INVALID, binary_architecture, nullptr, 0, DefaultVis, 0,
       "Ignored for compatibility", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--binary-architecture", binary_architecture, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-B", B, JoinedOrSeparate, INVALID, binary_architecture, nullptr, 0, DefaultVis, 0,
       "Alias for --binary-architecture", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--change-section-lma=", change_section_lma_eq, Joined, INVALID, change_section_lma, nullptr, 0, DefaultVis, 0,
       "Shift LMA of non-zero-sized sections in the program header by <val>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "*{+|-}val", nullptr)
OPTION(prefix_1, "--change-section-lma", change_section_lma, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "*{+|-}val", nullptr)
OPTION(prefix_1, "--change-start=", change_start_eq, Joined, INVALID, change_start, nullptr, 0, DefaultVis, 0,
       "Add <incr> to the start address. Can be specified multiple times, all values will be applied cumulatively", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "incr", nullptr)
OPTION(prefix_1, "--change-start", change_start, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "incr", nullptr)
OPTION(prefix_1, "--compress-debug-sections=", compress_debug_sections, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Compress DWARF debug sections using specified format. Supported formats: zlib, zstd. Select zlib if <format> is omitted", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "format", nullptr)
OPTION(prefix_1, "--compress-debug-sections", anonymous_0, Flag, INVALID, compress_debug_sections, "zlib\0", 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--compress-sections=", compress_sections_eq, Joined, INVALID, compress_sections, nullptr, 0, DefaultVis, 0,
       "Compress or decompress sections using specified format. Supported formats: zlib, zstd. Specify 'none' for decompression", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<section-glob>=<format>", nullptr)
OPTION(prefix_1, "--compress-sections", compress_sections, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<section-glob>=<format>", nullptr)
OPTION(prefix_1, "--decompress-debug-sections", decompress_debug_sections, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Decompress DWARF debug sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--disable-deterministic-archives", disable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Disable deterministic mode when operating on archives (use real values for UIDs, GIDs, and timestamps).", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--discard-all", discard_all, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove most local symbols. Different file formats may limit this to a subset. For ELF, file and section symbols are not discarded. Additionally, remove all debug sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--discard-locals", discard_locals, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove local symbols starting with .L", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--dump-section=", dump_section_eq, Joined, INVALID, dump_section, nullptr, 0, DefaultVis, 0,
       "Dump contents of section named <section> into file <file>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=file", nullptr)
OPTION(prefix_1, "--dump-section", dump_section, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=file", nullptr)
OPTION(prefix_2, "-D", D, Flag, INVALID, enable_deterministic_archives, nullptr, 0, DefaultVis, 0,
       "Alias for --enable-deterministic-archives", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--enable-deterministic-archives", enable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Enable deterministic mode when operating on archives (use zero for UIDs, GIDs, and timestamps).", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--extract-dwo", extract_dwo, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all sections that are not DWARF .dwo sections from file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--extract-main-partition", extract_main_partition, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Extract main partition from the input file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--extract-partition=", extract_partition_eq, Joined, INVALID, extract_partition, nullptr, 0, DefaultVis, 0,
       "Extract named partition from input file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "name", nullptr)
OPTION(prefix_1, "--extract-partition", extract_partition, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "name", nullptr)
OPTION(prefix_2, "-F", F, JoinedOrSeparate, INVALID, target, nullptr, 0, DefaultVis, 0,
       "Alias for --target", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--gap-fill=", gap_fill_eq, Joined, INVALID, gap_fill, nullptr, 0, DefaultVis, 0,
       "Fill the gaps between sections with <value> instead of zero. <value> must be an unsigned 8-bit integer. This option is only supported for ELF input and binary output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "value", nullptr)
OPTION(prefix_1, "--gap-fill", gap_fill, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "value", nullptr)
OPTION(prefix_1, "--globalize-symbol=", globalize_symbol_eq, Joined, INVALID, globalize_symbol, nullptr, 0, DefaultVis, 0,
       "Mark <symbol> as global", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--globalize-symbols=", globalize_symbols_eq, Joined, INVALID, globalize_symbols, nullptr, 0, DefaultVis, 0,
       "Read a list of symbols from <filename> and mark defined symbols with those names as global", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--globalize-symbols", globalize_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--globalize-symbol", globalize_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_2, "-G", G, JoinedOrSeparate, INVALID, keep_global_symbol, nullptr, 0, DefaultVis, 0,
       "Alias for --keep-global-symbol", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-g", g, Flag, INVALID, strip_debug, nullptr, 0, DefaultVis, 0,
       "Alias for --strip-debug", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--help", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-h", h, Flag, INVALID, help, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--input-target=", input_target_eq, Joined, INVALID, input_target, nullptr, 0, DefaultVis, 0,
       "Read the input as the specified format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "format", nullptr)
OPTION(prefix_1, "--input-target", input_target, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "format", nullptr)
OPTION(prefix_2, "-I", I, JoinedOrSeparate, INVALID, input_target, nullptr, 0, DefaultVis, 0,
       "Alias for --input-target", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-j", j, JoinedOrSeparate, INVALID, only_section, nullptr, 0, DefaultVis, 0,
       "Alias for --only-section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--keep-file-symbols", keep_file_symbols, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Keep symbols of type STT_FILE, even if they would otherwise be stripped", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--keep-global-symbol=", keep_global_symbol_eq, Joined, INVALID, keep_global_symbol, nullptr, 0, DefaultVis, 0,
       "Mark all symbols local, except for symbols with the name <symbol>. Can be specified multiple times to ignore multiple symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--keep-global-symbols=", keep_global_symbols_eq, Joined, INVALID, keep_global_symbols, nullptr, 0, DefaultVis, 0,
       "Read a list of symbols from <filename> and run as if --keep-global-symbol=<symbol> is set for each one. <filename> contains one symbol per line and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--keep-global-symbols", keep_global_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--keep-global-symbol", keep_global_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--keep-section=", keep_section_eq, Joined, INVALID, keep_section, nullptr, 0, DefaultVis, 0,
       "Keep <section>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_1, "--keep-section", keep_section, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_1, "--keep-symbol=", keep_symbol_eq, Joined, INVALID, keep_symbol, nullptr, 0, DefaultVis, 0,
       "When removing symbols, do not remove <symbol>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--keep-symbols=", keep_symbols_eq, Joined, INVALID, keep_symbols, nullptr, 0, DefaultVis, 0,
       "Read a list of symbols from <filename> and run as if --keep-symbol=<symbol> is set for each one. <filename> contains one symbol per line and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--keep-symbols", keep_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--keep-symbol", keep_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--keep-undefined", keep_undefined, Flag, grp_macho, INVALID, nullptr, 0, DefaultVis, 0,
       "Do not remove undefined symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-K", K, JoinedOrSeparate, INVALID, keep_symbol, nullptr, 0, DefaultVis, 0,
       "Alias for --keep-symbol", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--localize-hidden", localize_hidden, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Mark all symbols that have hidden or internal visibility as local", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--localize-symbol=", localize_symbol_eq, Joined, INVALID, localize_symbol, nullptr, 0, DefaultVis, 0,
       "Mark any defined non-common symbol named <symbol> as local", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--localize-symbols=", localize_symbols_eq, Joined, INVALID, localize_symbols, nullptr, 0, DefaultVis, 0,
       "Read a list of names from <filename> and mark any defined non-common symbols with those names as local", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--localize-symbols", localize_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--localize-symbol", localize_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_2, "-L", L, JoinedOrSeparate, INVALID, localize_symbol, nullptr, 0, DefaultVis, 0,
       "Alias for --localize-symbol", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--new-symbol-visibility=", new_symbol_visibility_eq, Joined, INVALID, new_symbol_visibility, nullptr, 0, DefaultVis, 0,
       "Specify the visibility of symbols automatically created when using binary input or --add-symbol. The default is 'default'", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--new-symbol-visibility", new_symbol_visibility, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-verify-note-sections", no_verify_note_sections, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Don't validate note sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-N", N, JoinedOrSeparate, INVALID, strip_symbol, nullptr, 0, DefaultVis, 0,
       "Alias for --strip-symbol", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--only-keep-debug", only_keep_debug, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Produce a debug file as the output that only preserves contents of sections useful for debugging purposes", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--only-section=", only_section_eq, Joined, INVALID, only_section, nullptr, 0, DefaultVis, 0,
       "Remove all but <section>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_1, "--only-section", only_section, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_1, "--output-target=", output_target_eq, Joined, INVALID, output_target, nullptr, 0, DefaultVis, 0,
       "Write the output as the specified format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "format", nullptr)
OPTION(prefix_1, "--output-target", output_target, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "format", nullptr)
OPTION(prefix_2, "-O", O, JoinedOrSeparate, INVALID, output_target, nullptr, 0, DefaultVis, 0,
       "Alias for --output-target", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--pad-to=", pad_to_eq, Joined, INVALID, pad_to, nullptr, 0, DefaultVis, 0,
       "Pad the output up to the load address <address>, using a value of zero or the value specified by the --gap-fill option. This option is only supported for ELF input and binary output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "address", nullptr)
OPTION(prefix_1, "--pad-to", pad_to, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "address", nullptr)
OPTION(prefix_1, "--prefix-alloc-sections=", prefix_alloc_sections_eq, Joined, INVALID, prefix_alloc_sections, nullptr, 0, DefaultVis, 0,
       "Add <prefix> to the start of every allocated section name", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--prefix-alloc-sections", prefix_alloc_sections, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--prefix-symbols=", prefix_symbols_eq, Joined, INVALID, prefix_symbols, nullptr, 0, DefaultVis, 0,
       "Add <prefix> to the start of every symbol name", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--prefix-symbols", prefix_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--preserve-dates", preserve_dates, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Preserve access and modification timestamps", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-p", p, Flag, INVALID, preserve_dates, nullptr, 0, DefaultVis, 0,
       "Alias for --preserve-dates", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--redefine-sym=", redefine_symbol_eq, Joined, INVALID, redefine_symbol, nullptr, 0, DefaultVis, 0,
       "Change the name of a symbol old to new", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "old=new", nullptr)
OPTION(prefix_1, "--redefine-syms=", redefine_symbols_eq, Joined, INVALID, redefine_symbols, nullptr, 0, DefaultVis, 0,
       "Read a list of symbol pairs from <filename> and run as if --redefine-sym=<old>=<new> is set for each one. <filename> contains two symbols per line separated with whitespace and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--redefine-syms", redefine_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--redefine-sym", redefine_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "old=new", nullptr)
OPTION(prefix_1, "--regex", regex, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Permit regular expressions in name comparison", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--remove-section=", remove_section_eq, Joined, INVALID, remove_section, nullptr, 0, DefaultVis, 0,
       "Remove <section>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_1, "--remove-section", remove_section, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_1, "--remove-symbol-prefix=", remove_symbol_prefix_eq, Joined, INVALID, remove_symbol_prefix, nullptr, 0, DefaultVis, 0,
       "Remove <prefix> from the start of every symbol name. No-op for symbols that do not start with <prefix>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--remove-symbol-prefix", remove_symbol_prefix, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "prefix", nullptr)
OPTION(prefix_1, "--rename-section=", rename_section_eq, Joined, INVALID, rename_section, nullptr, 0, DefaultVis, 0,
       "Rename sections called <old> to <new>, and apply any specified <flag> values. See --set-section-flags for a list of supported flags", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "old=new[,flag1,...]", nullptr)
OPTION(prefix_1, "--rename-section", rename_section, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "old=new[,flag1,...]", nullptr)
OPTION(prefix_2, "-R", R, JoinedOrSeparate, INVALID, remove_section, nullptr, 0, DefaultVis, 0,
       "Alias for --remove-section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--set-section-alignment=", set_section_alignment_eq, Joined, INVALID, set_section_alignment, nullptr, 0, DefaultVis, 0,
       "Set alignment for a given section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=align", nullptr)
OPTION(prefix_1, "--set-section-alignment", set_section_alignment, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=align", nullptr)
OPTION(prefix_1, "--set-section-flags=", set_section_flags_eq, Joined, INVALID, set_section_flags, nullptr, 0, DefaultVis, 0,
       "Set section properties based on the specified <flags>. Supported flag names are: alloc, load, noload, readonly, exclude, debug, code, data, rom, share, contents, merge, strings, large", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=flag1[,flag2,...]", nullptr)
OPTION(prefix_1, "--set-section-flags", set_section_flags, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=flag1[,flag2,...]", nullptr)
OPTION(prefix_1, "--set-section-type=", set_section_type_eq, Joined, INVALID, set_section_type, nullptr, 0, DefaultVis, 0,
       "Set the type of section <section> to the integer <type>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=type", nullptr)
OPTION(prefix_1, "--set-section-type", set_section_type, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section=type", nullptr)
OPTION(prefix_1, "--set-start=", set_start_eq, Joined, INVALID, set_start, nullptr, 0, DefaultVis, 0,
       "Set the start address to <addr>. Overrides any previous --change-start or --adjust-start values", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "addr", nullptr)
OPTION(prefix_1, "--set-start", set_start, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "addr", nullptr)
OPTION(prefix_1, "--set-symbol-visibility=", set_symbol_visibility_eq, Joined, INVALID, set_symbol_visibility, nullptr, 0, DefaultVis, 0,
       "Change the visibility of a symbol to the specified value", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol=visibility", nullptr)
OPTION(prefix_1, "--set-symbol-visibility", set_symbol_visibility, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol=visibility", nullptr)
OPTION(prefix_1, "--set-symbols-visibility=", set_symbols_visibility_eq, Joined, INVALID, set_symbols_visibility, nullptr, 0, DefaultVis, 0,
       "Read a list of symbols from <filename> and change their visibility to the specified value. Visibility values: default, internal, hidden, protected", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename=visibility", nullptr)
OPTION(prefix_1, "--set-symbols-visibility", set_symbols_visibility, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename=visibility", nullptr)
OPTION(prefix_1, "--skip-symbol=", skip_symbol_eq, Joined, INVALID, skip_symbol, nullptr, 0, DefaultVis, 0,
       "Do not change parameters of symbol <symbol> when executing other options that can change the symbol's name, binding or visibility", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--skip-symbols=", skip_symbols_eq, Joined, INVALID, skip_symbols, nullptr, 0, DefaultVis, 0,
       "Read a list of symbols from <filename> and run as if --skip-symbol=<symbol> is set for each one. <filename> contains one symbol per line and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--skip-symbols", skip_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--skip-symbol", skip_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--split-dwo=", split_dwo_eq, Joined, INVALID, split_dwo, nullptr, 0, DefaultVis, 0,
       "Equivalent to --extract-dwo and <dwo-file> as the output file and no other options, and then --strip-dwo on the input file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "dwo-file", nullptr)
OPTION(prefix_1, "--split-dwo", split_dwo, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "dwo-file", nullptr)
OPTION(prefix_1, "--strip-all-gnu", strip_all_gnu, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all symbols, debug sections and relocations. Compatible with GNU's --strip-all", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-all", strip_all, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "For ELF, remove all symbols and non-alloc sections not within segments, except for .gnu.warning*, .ARM.attribute, and the section name table. For COFF and Mach-O, remove all symbols, debug sections, and relocations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-debug", strip_debug, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all debug sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-dwo", strip_dwo, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all DWARF .dwo sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-non-alloc", strip_non_alloc, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all non-allocated sections that are not within segments", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-sections", strip_sections, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all section headers and all section data not within segments", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-symbol=", strip_symbol_eq, Joined, INVALID, strip_symbol, nullptr, 0, DefaultVis, 0,
       "Strip <symbol>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--strip-symbols=", strip_symbols_eq, Joined, INVALID, strip_symbols, nullptr, 0, DefaultVis, 0,
       "Remove all symbols whose names appear in the file <filename>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--strip-symbols", strip_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--strip-symbol", strip_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--strip-unneeded-symbol=", strip_unneeded_symbol_eq, Joined, INVALID, strip_unneeded_symbol, nullptr, 0, DefaultVis, 0,
       "Remove all symbols named <symbol> that are local or undefined and are not required by any relocation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--strip-unneeded-symbols=", strip_unneeded_symbols_eq, Joined, INVALID, strip_unneeded_symbols, nullptr, 0, DefaultVis, 0,
       "Remove all symbols whose names appear in the file <file>, if they are local or undefined and are not required by any relocation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--strip-unneeded-symbols", strip_unneeded_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--strip-unneeded-symbol", strip_unneeded_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--strip-unneeded", strip_unneeded, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all symbols not needed by relocations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--subsystem=", subsystem_eq, Joined, grp_coff, subsystem, nullptr, 0, DefaultVis, 0,
       "Set the PE subsystem, and optionally subsystem version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "name[:version]", nullptr)
OPTION(prefix_1, "--subsystem", subsystem, Separate, grp_coff, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "name[:version]", nullptr)
OPTION(prefix_2, "-S", S, Flag, INVALID, strip_all, nullptr, 0, DefaultVis, 0,
       "Alias for --strip-all", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--target=", target_eq, Joined, INVALID, target, nullptr, 0, DefaultVis, 0,
       "Equivalent to --input-target and --output-target for the specified format", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, "binary")
OPTION(prefix_1, "--target", target, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, "binary")
OPTION(prefix_1, "--update-section=", update_section_eq, Joined, INVALID, update_section, nullptr, 0, DefaultVis, 0,
       "Replace the contents of section <name> with contents from a file <file>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "name=file", nullptr)
OPTION(prefix_1, "--update-section", update_section, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "name=file", nullptr)
OPTION(prefix_2, "-U", U, Flag, INVALID, disable_deterministic_archives, nullptr, 0, DefaultVis, 0,
       "Alias for --disable-deterministic-archives", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--verify-note-sections", verify_note_sections, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Validate note sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--version", version, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the version and exit.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-V", V, Flag, INVALID, version, nullptr, 0, DefaultVis, 0,
       "Alias for --version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--weaken-symbol=", weaken_symbol_eq, Joined, INVALID, weaken_symbol, nullptr, 0, DefaultVis, 0,
       "Mark global symbols named <symbol> as weak", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--weaken-symbols=", weaken_symbols_eq, Joined, INVALID, weaken_symbols, nullptr, 0, DefaultVis, 0,
       "Read a list of symbols from <filename> and mark global symbols with those names as weak", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--weaken-symbols", weaken_symbols, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "filename", nullptr)
OPTION(prefix_1, "--weaken-symbol", weaken_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--weaken", weaken, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Mark all defined global symbols as weak", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--wildcard", wildcard, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Allow wildcard syntax for symbol-related flags. Incompatible with --regex. Allows using '*' to match any number of characters, '?' to match any single character, '' to escape special characters, and '[]' to define character classes. Wildcards beginning with '!' will prevent a match, for example \"-N '*' -N '!x'\" will strip all symbols except for \"x\".", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-W", W, JoinedOrSeparate, INVALID, weaken_symbol, nullptr, 0, DefaultVis, 0,
       "Alias for --weaken-symbol", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-w", w, Flag, INVALID, wildcard, nullptr, 0, DefaultVis, 0,
       "Alias for --wildcard", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-X", X, Flag, INVALID, discard_locals, nullptr, 0, DefaultVis, 0,
       "Alias for --discard-locals", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-x", x, Flag, INVALID, discard_all, nullptr, 0, DefaultVis, 0,
       "Alias for --discard-all", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
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


