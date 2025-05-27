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
OPTION(llvm::ArrayRef<llvm::StringLiteral>(), "kind", grp_obsolete, Group, INVALID, INVALID, nullptr, 0, 0, 0,
       "Obsolete and unsupported flags", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-arch", arch, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "select slice of universal Mach-O file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-B", anonymous_1, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "force Thum disassembly (ARM 32-bit objects only)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-chained_fixups", chained_fixups, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print chained fixup information", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-C", C, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print linker optimization hints", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-dyld_info", dyld_info, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print bind and rebase information", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-D", D, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print shared library id", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-d", d, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print data section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-f", f, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print universal headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-G", G, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print data-in-code table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--help-hidden", help_hidden, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print help for hidden flags", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--help", help, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print help", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-H", anonymous_2, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "print two-level hints table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-h", h, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print mach header", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-I", I, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print indirect symbol table", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-j", j, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print opcode bytes", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-L", L, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print used shared libraries", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-l", l, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print load commnads", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-mcpu=", mcpu_EQ, Joined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "select cpu for disassembly", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-M", anonymous_3, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "print module table of shared library", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-o", o, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print Objective-C segment", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-P", P, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print __TEXT,__info_plist section as strings", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-p", p, Separate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "start disassembly at <function name>", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<function name>", nullptr)
OPTION(prefix_1, "-Q", anonymous_7, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "llvm-otool cannot use otool-classic's disassembler", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-q", anonymous_0, Flag, INVALID, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "use LLVM's disassembler (default)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-R", anonymous_4, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "print reference table of shared library", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-r", r, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print relocation entries", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-S", anonymous_5, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "print table of contents of library", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-s", s, MultiArg, INVALID, INVALID, nullptr, 0, DefaultVis, 2,
       "print contents of section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), "<segname> <sectname>", nullptr)
OPTION(prefix_1, "-T", anonymous_6, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, DefaultVis, 0,
       "print table of contents of shared library", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-t", t, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print text section", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_2, "--version", version, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print version", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-V", V, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "symbolize disassembled operands (implies -v)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-v", v, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "verbose output / disassemble when printing text sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-X", X, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "omit leading addresses or headers", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
OPTION(prefix_1, "-x", x, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "print all text sections", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ std::make_pair(std::array<unsigned, 2>{{0, 0}}, nullptr) }}), nullptr, nullptr)
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


