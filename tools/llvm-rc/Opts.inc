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
PREFIX(prefix_1, {llvm::StringLiteral("/") COMMA llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
#undef COMMA
#endif // PREFIX

/////////
// Prefix Union

#ifdef PREFIX_UNION
#define COMMA ,
PREFIX_UNION({
llvm::StringLiteral("-") COMMA llvm::StringLiteral("/") COMMA llvm::StringLiteral("")})
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
OPTION(prefix_1, "/###", _HASH_HASH_HASH, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/?", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Display this help and exit.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/C", codepage, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Set the codepage used for input strings.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/dry-run", dry_run, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Don't compile the input; only try to parse it.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/D", define, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Define a symbol for the C preprocessor.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/FM", fm, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/FO", fileout, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Change the output file location.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/G1", g1, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/G2", g2, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/GN", gn, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/G", g, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/H", h, Flag, INVALID, help, nullptr, 0, DefaultVis, 0,
       "Display this help and exit.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/I", includepath, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Add an include path.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/LN", lang_name, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Set the default language name.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/L", lang_id, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Set the default language identifier.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/no-preprocess", no_preprocess, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Don't try to preprocess the input file.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/NOLOGO", nologo, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/N", add_null, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Null-terminate all strings in the string table.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/Q", q, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/R", r, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/SL", sl, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/U", undef, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Undefine a symbol for the C preprocessor.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/V", verbose, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Be verbose.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/W", w, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/X", noinclude, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Ignore 'include' variable.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "/Y", dupid_nowarn, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "Suppress warnings on duplicate resource IDs.", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
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


