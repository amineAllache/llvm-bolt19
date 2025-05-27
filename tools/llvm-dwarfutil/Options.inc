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
PREFIX(prefix_2, {llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
PREFIX(prefix_1, {llvm::StringLiteral("--") COMMA llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
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

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--build-accelerator=", anonymous_0, Joined, INVALID, build_accelerator, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--build-accelerator", build_accelerator, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Build accelerator tables(default: none)\n    =none - Do not build accelerators\n    =DWARF - .debug_names are generated for all DWARF versions\n", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "[none,DWARF]", nullptr)
OPTION(prefix_2, "--garbage-collection", garbage_collection, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Do garbage collection for debug info(default)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--help", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Prints this help output", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-h", h, Flag, INVALID, help, nullptr, 0, DefaultVis, 0,
       "Alias for --help", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-j", anonymous_3, Separate, INVALID, threads, nullptr, 0, DefaultVis, 0,
       "Alias for --num-threads", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--linker=", anonymous_1, Joined, INVALID, linker, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--linker", linker, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Specify the desired type of DWARF linker. Defaults to 'classic'", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<DWARF linker type>", nullptr)
OPTION(prefix_2, "--no-garbage-collection", no_garbage_collection, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Don`t do garbage collection for debug info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--no-odr-deduplication", no_odr_deduplication, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Don`t do ODR deduplication for debug types", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--no-odr", no_odr, Flag, INVALID, no_odr_deduplication, nullptr, 0, DefaultVis, 0,
       "Alias for --no-odr-deduplication", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--no-separate-debug-file", no_separate_debug_file, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Create single output file, containing debug tables(default)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--num-threads", threads, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Number of available threads for multi-threaded execution. Defaults to the number of cores on the current machine", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<threads>", nullptr)
OPTION(prefix_2, "--odr-deduplication", odr_deduplication, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Do ODR deduplication for debug types(default)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--odr", odr, Flag, INVALID, odr_deduplication, nullptr, 0, DefaultVis, 0,
       "Alias for --odr-deduplication", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--separate-debug-file", separate_debug_file, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Create two output files: file w/o debug tables and file with debug tables", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--tombstone=", anonymous_2, Joined, INVALID, tombstone, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "--tombstone", tombstone, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Tombstone value used as a marker of invalid address(default: universal)\n    =bfd - Zero for all addresses and [1,1] for DWARF v4 (or less) address ranges and exec\n    =maxpc - Minus 1 for all addresses and minus 2 for DWARF v4 (or less) address ranges\n    =exec - Match with address ranges of executable sections\n    =universal - Both: bfd and maxpc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "[bfd,maxpc,exec,universal]", nullptr)
OPTION(prefix_2, "--verbose", verbose, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Enable verbose logging", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--verify", verify, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Run the DWARF verifier on the resulting debug info", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--version", version, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Print the version and exit", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_3, "-V", V, Flag, INVALID, version, nullptr, 0, DefaultVis, 0,
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


