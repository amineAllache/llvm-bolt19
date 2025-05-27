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
PREFIX(prefix_1, {llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
PREFIX(prefix_2, {llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
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
OPTION(prefix_1, "-c", max_concurrency, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Maximum number of files to scan concurrently. If 0, use the hardware concurrency.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<ulong>", nullptr)
OPTION(prefix_2, "--help", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display available options", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-h", anonymous_0, Flag, INVALID, help, nullptr, 0, DefaultVis, 0,
       "Alias for --help", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-i", host_interface, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Host interface to bind to.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<string>", nullptr)
OPTION(prefix_1, "-m", min_interval, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Minimum number of seconds to wait before an on-demand update can betriggered by a request for a buildid which is not in the collection.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<number>", nullptr)
OPTION(prefix_1, "-p", port, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Port to listen on. Set to 0 to bind to any available port.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<uint>", nullptr)
OPTION(prefix_1, "-t", scan_interval, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Number of seconds to wait between subsequent automated scans of the filesystem.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<int>", nullptr)
OPTION(prefix_1, "-v", verbose_logging, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Enable verbose logging.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
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


