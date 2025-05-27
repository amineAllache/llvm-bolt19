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
OPTION(prefix_1, "--allow-broken-links", allow_broken_links, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Allow the tool to remove sections even if it would leave invalid section references. The appropriate sh_link fields will be set to zero.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--disable-deterministic-archives", disable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Disable deterministic mode when operating on archives (use real values for UIDs, GIDs, and timestamps).", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--discard-all", discard_all, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove most local symbols. Different file formats may limit this to a subset. For ELF, file and section symbols are not discarded. Additionally, remove all debug sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--discard-locals", discard_locals, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove local symbols starting with .L", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-D", D, Flag, INVALID, enable_deterministic_archives, nullptr, 0, DefaultVis, 0,
       "Alias for --enable-deterministic-archives", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-d", d, Flag, INVALID, strip_debug, nullptr, 0, DefaultVis, 0,
       "Alias for --strip-debug", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--enable-deterministic-archives", enable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Enable deterministic mode when operating on archives (use zero for UIDs, GIDs, and timestamps).", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-g", g, Flag, INVALID, strip_debug, nullptr, 0, DefaultVis, 0,
       "Alias for --strip-debug", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--help", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-h", h, Flag, INVALID, help, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--keep-file-symbols", keep_file_symbols, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Keep symbols of type STT_FILE, even if they would otherwise be stripped", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--keep-section=", keep_section_eq, Joined, INVALID, keep_section, nullptr, 0, DefaultVis, 0,
       "Keep <section>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_1, "--keep-section", keep_section, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_1, "--keep-symbol=", keep_symbol_eq, Joined, INVALID, keep_symbol, nullptr, 0, DefaultVis, 0,
       "When removing symbols, do not remove <symbol>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--keep-symbol", keep_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--keep-undefined", keep_undefined, Flag, grp_macho, INVALID, nullptr, 0, DefaultVis, 0,
       "Do not remove undefined symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-K", K, JoinedOrSeparate, INVALID, keep_symbol, nullptr, 0, DefaultVis, 0,
       "Alias for --keep-symbol", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--no-strip-all", no_strip_all, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Disable --strip-all", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-N", N, JoinedOrSeparate, INVALID, strip_symbol, nullptr, 0, DefaultVis, 0,
       "Alias for --strip-symbol", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--only-keep-debug", only_keep_debug, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Produce a debug file as the output that only preserves contents of sections useful for debugging purposes", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-o", output, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Write output to <file>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<file>", nullptr)
OPTION(prefix_1, "--preserve-dates", preserve_dates, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Preserve access and modification timestamps", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-p", p, Flag, INVALID, preserve_dates, nullptr, 0, DefaultVis, 0,
       "Alias for --preserve-dates", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--regex", regex, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Permit regular expressions in name comparison", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--remove-section=", remove_section_eq, Joined, INVALID, remove_section, nullptr, 0, DefaultVis, 0,
       "Remove <section>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_1, "--remove-section", remove_section, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "section", nullptr)
OPTION(prefix_2, "-R", R, JoinedOrSeparate, INVALID, remove_section, nullptr, 0, DefaultVis, 0,
       "Alias for --remove-section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-all-gnu", strip_all_gnu, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all symbols, debug sections and relocations. Compatible with GNU's --strip-all", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-all", strip_all, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "For ELF, remove all symbols and non-alloc sections not within segments, except for .gnu.warning*, .ARM.attribute, and the section name table. For COFF and Mach-O, remove all symbols, debug sections, and relocations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-debug", strip_debug, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all debug sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-sections", strip_sections, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all section headers and all section data not within segments", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--strip-symbol=", strip_symbol_eq, Joined, INVALID, strip_symbol, nullptr, 0, DefaultVis, 0,
       "Strip <symbol>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--strip-symbol", strip_symbol, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "symbol", nullptr)
OPTION(prefix_1, "--strip-unneeded", strip_unneeded, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove all symbols not needed by relocations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-S", S, Flag, INVALID, strip_debug, nullptr, 0, DefaultVis, 0,
       "Alias for --strip-debug", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-s", s, Flag, INVALID, strip_all, nullptr, 0, DefaultVis, 0,
       "Alias for --strip-all", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-T", strip_swift_symbols, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Remove Swift symbols", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-U", U, Flag, INVALID, disable_deterministic_archives, nullptr, 0, DefaultVis, 0,
       "Alias for --disable-deterministic-archives", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--version", version, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the version and exit.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "-V", V, Flag, INVALID, version, nullptr, 0, DefaultVis, 0,
       "Alias for --version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--wildcard", wildcard, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Allow wildcard syntax for symbol-related flags. Incompatible with --regex. Allows using '*' to match any number of characters, '?' to match any single character, '' to escape special characters, and '[]' to define character classes. Wildcards beginning with '!' will prevent a match, for example \"-N '*' -N '!x'\" will strip all symbols except for \"x\".", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
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


