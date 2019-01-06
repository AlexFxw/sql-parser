/* A Bison parser, made by GNU Bison 3.2.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.2.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* First part of user prologue.  */
#line 1 "bison_parser.y" /* yacc.c:338  */

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 106 "bison_parser.cpp" /* yacc.c:338  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y" /* yacc.c:353  */

// %code requires block

#include "../sql/statements.h"
#include "../SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 171 "bison_parser.cpp" /* yacc.c:353  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_HISTORY = 279,
    SQL_INTEGER = 280,
    SQL_NATURAL = 281,
    SQL_PREPARE = 282,
    SQL_PRIMARY = 283,
    SQL_SCHEMAS = 284,
    SQL_SPATIAL = 285,
    SQL_VARCHAR = 286,
    SQL_VIRTUAL = 287,
    SQL_BEFORE = 288,
    SQL_COLUMN = 289,
    SQL_CREATE = 290,
    SQL_DELETE = 291,
    SQL_DIRECT = 292,
    SQL_DOUBLE = 293,
    SQL_ESCAPE = 294,
    SQL_EXCEPT = 295,
    SQL_EXISTS = 296,
    SQL_EXTRACT = 297,
    SQL_GLOBAL = 298,
    SQL_HAVING = 299,
    SQL_IMPORT = 300,
    SQL_INSERT = 301,
    SQL_ISNULL = 302,
    SQL_OFFSET = 303,
    SQL_RENAME = 304,
    SQL_SCHEMA = 305,
    SQL_SELECT = 306,
    SQL_SORTED = 307,
    SQL_TABLES = 308,
    SQL_UNIQUE = 309,
    SQL_UNLOAD = 310,
    SQL_UPDATE = 311,
    SQL_VALUES = 312,
    SQL_AFTER = 313,
    SQL_ALTER = 314,
    SQL_CROSS = 315,
    SQL_DELTA = 316,
    SQL_FLOAT = 317,
    SQL_GROUP = 318,
    SQL_INDEX = 319,
    SQL_INNER = 320,
    SQL_LIMIT = 321,
    SQL_LOCAL = 322,
    SQL_MERGE = 323,
    SQL_MINUS = 324,
    SQL_ORDER = 325,
    SQL_OUTER = 326,
    SQL_RIGHT = 327,
    SQL_TABLE = 328,
    SQL_UNION = 329,
    SQL_USING = 330,
    SQL_WHERE = 331,
    SQL_CALL = 332,
    SQL_CASE = 333,
    SQL_CHAR = 334,
    SQL_DATE = 335,
    SQL_DESC = 336,
    SQL_DROP = 337,
    SQL_ELSE = 338,
    SQL_FILE = 339,
    SQL_FROM = 340,
    SQL_FULL = 341,
    SQL_HASH = 342,
    SQL_HINT = 343,
    SQL_INTO = 344,
    SQL_JOIN = 345,
    SQL_LEFT = 346,
    SQL_LIKE = 347,
    SQL_LOAD = 348,
    SQL_LONG = 349,
    SQL_NULL = 350,
    SQL_PLAN = 351,
    SQL_SHOW = 352,
    SQL_TEXT = 353,
    SQL_THEN = 354,
    SQL_TIME = 355,
    SQL_VIEW = 356,
    SQL_WHEN = 357,
    SQL_WITH = 358,
    SQL_ADD = 359,
    SQL_ALL = 360,
    SQL_AND = 361,
    SQL_ASC = 362,
    SQL_CSV = 363,
    SQL_END = 364,
    SQL_FOR = 365,
    SQL_INT = 366,
    SQL_KEY = 367,
    SQL_NOT = 368,
    SQL_OFF = 369,
    SQL_SET = 370,
    SQL_TBL = 371,
    SQL_TOP = 372,
    SQL_AS = 373,
    SQL_BY = 374,
    SQL_IF = 375,
    SQL_IN = 376,
    SQL_IS = 377,
    SQL_OF = 378,
    SQL_ON = 379,
    SQL_OR = 380,
    SQL_TO = 381,
    SQL_ARRAY = 382,
    SQL_CONCAT = 383,
    SQL_ILIKE = 384,
    SQL_SECOND = 385,
    SQL_MINUTE = 386,
    SQL_HOUR = 387,
    SQL_DAY = 388,
    SQL_MONTH = 389,
    SQL_YEAR = 390,
    SQL_TRUE = 391,
    SQL_FALSE = 392,
    SQL_EQUALS = 393,
    SQL_NOTEQUALS = 394,
    SQL_LESS = 395,
    SQL_GREATER = 396,
    SQL_LESSEQ = 397,
    SQL_GREATEREQ = 398,
    SQL_NOTNULL = 399,
    SQL_UMINUS = 400
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 95 "bison_parser.y" /* yacc.c:353  */

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;
	hsql::InsertValue* insert_value;
	hsql::InsertValueList* value_list;

	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;

#line 373 "bison_parser.cpp" /* yacc.c:353  */
};

typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   638

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  242
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  438

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   400

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   152,     2,     2,
     157,   158,   150,   148,   161,   149,   159,   151,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   160,
     141,   138,   142,   162,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   155,     2,   156,   153,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   139,   140,   143,   144,   145,   146,   147,
     154
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   258,   258,   279,   285,   294,   298,   302,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   326,   327,   332,
     333,   337,   341,   353,   360,   363,   367,   379,   388,   392,
     402,   405,   419,   426,   433,   442,   453,   454,   458,   459,
     463,   468,   469,   470,   471,   472,   473,   474,   475,   479,
     480,   481,   491,   497,   503,   511,   512,   521,   530,   543,
     553,   559,   566,   574,   575,   585,   594,   595,   599,   611,
     612,   613,   630,   631,   635,   636,   640,   650,   667,   671,
     672,   673,   677,   678,   682,   694,   695,   699,   703,   704,
     707,   712,   713,   717,   722,   726,   727,   730,   731,   735,
     736,   740,   744,   745,   746,   752,   753,   757,   758,   759,
     760,   761,   762,   763,   764,   771,   772,   776,   777,   781,
     782,   786,   796,   797,   798,   799,   800,   804,   805,   806,
     807,   808,   809,   810,   811,   812,   813,   817,   818,   822,
     823,   824,   825,   826,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,   844,   845,   849,   850,   851,
     852,   858,   859,   860,   861,   865,   866,   870,   871,   875,
     876,   877,   878,   879,   880,   881,   885,   886,   890,   894,
     895,   896,   897,   898,   899,   902,   906,   910,   914,   915,
     916,   917,   921,   922,   923,   924,   925,   929,   933,   934,
     938,   939,   943,   947,   951,   963,   964,   974,   975,   979,
     980,   989,   990,   995,  1006,  1015,  1016,  1021,  1022,  1027,
    1028,  1032,  1033,  1038,  1039,  1047,  1055,  1065,  1084,  1085,
    1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,  1098,  1107,
    1108,  1113,  1114
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "HISTORY", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL", "BEFORE", "COLUMN", "CREATE",
  "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT",
  "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME",
  "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE",
  "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX",
  "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT",
  "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR", "DATE",
  "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO",
  "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT",
  "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC",
  "CSV", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TBL", "TOP",
  "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY", "CONCAT",
  "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "TRUE",
  "FALSE", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER",
  "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "opt_column_nullable", "drop_statement",
  "opt_exists", "delete_statement", "truncate_statement",
  "insert_statement", "value_list", "insert_value", "opt_column_list",
  "update_statement", "update_clause_commalist", "update_clause",
  "select_statement", "select_with_paren", "select_paren_or_clause",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "datetime_field", "array_expr",
  "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "join_clause", "opt_join_type",
  "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,    61,   393,
     394,    60,    62,   395,   396,   397,   398,   399,    43,    45,
      42,    47,    37,    94,   400,    91,    93,    40,    41,    46,
      59,    44,    63
};
# endif

#define YYPACT_NINF -326

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-326)))

#define YYTABLE_NINF -238

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-238)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      44,    20,    33,    34,    45,   -23,    -4,     8,    27,    25,
      33,    10,     2,   -42,   130,   -32,  -326,    75,    75,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,    14,
    -326,    35,   228,    74,  -326,    88,   154,   118,   118,    33,
     146,    33,   253,   248,   166,  -326,   162,   162,    33,  -326,
     127,   129,  -326,    44,  -326,   203,  -326,  -326,  -326,  -326,
    -326,   -42,   188,   178,   -42,   124,  -326,   307,    24,   313,
     206,    33,    33,   246,  -326,   239,   267,  -326,  -326,  -326,
     220,   324,   287,    33,    33,  -326,  -326,  -326,  -326,   175,
    -326,   264,  -326,  -326,  -326,   220,   264,   253,    19,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,   172,   174,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,   295,   -71,
     180,   220,  -326,   335,  -326,    59,   184,   185,    93,   231,
     193,   260,  -326,   163,   258,   189,  -326,     4,   299,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,   207,   -59,  -326,  -326,  -326,  -326,
     346,   124,   191,  -326,   -61,   124,  -326,   303,   306,   311,
    -326,    24,  -326,   244,   358,   359,   245,    11,   275,  -326,
     208,     6,     9,   315,   173,   220,    73,    29,   214,   260,
     419,   220,    30,   217,   -84,     5,   246,  -326,   220,  -326,
     220,   369,   220,  -326,  -326,   260,  -326,   260,   -54,   219,
      81,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   253,   220,   324,  -326,
     221,    95,  -326,  -326,   220,  -326,  -326,  -326,  -326,   253,
     253,   253,  -326,   300,   190,   109,  -326,  -326,   110,   -42,
      33,    24,   222,  -326,   220,  -326,  -326,   232,  -326,  -326,
    -326,  -326,  -326,  -326,   304,   -73,    82,   220,   220,  -326,
     315,   302,    71,  -326,  -326,   -42,  -326,   314,  -326,   234,
    -326,     7,  -326,   329,  -326,  -326,  -326,   292,   364,   451,
     260,   242,   163,  -326,   308,   247,   451,   451,   451,   451,
     483,   483,   483,   483,    30,    30,   -97,   -97,   -97,   -93,
     250,    11,  -326,    24,  -326,   346,  -326,  -326,  -326,  -326,
     335,  -326,   251,  -326,  -326,   256,  -326,  -326,  -326,   104,
    -326,    54,  -326,   398,  -326,  -326,   116,  -326,   117,  -326,
     220,   220,   220,  -326,    83,   -12,   249,  -326,   257,   326,
    -326,  -326,  -326,   343,   347,   352,   334,     5,   422,  -326,
    -326,  -326,   310,  -326,   260,   451,   163,   268,   122,  -326,
    -326,   128,  -326,  -326,   424,   425,  -326,   337,  -326,   321,
    -326,  -326,  -326,  -326,   -82,    11,    94,  -326,   220,  -326,
       7,     5,  -326,  -326,  -326,     5,   393,   277,   220,   419,
     278,   134,  -326,  -326,  -326,   284,   285,  -326,   289,  -326,
    -326,    11,  -326,  -326,   464,   359,   -38,  -326,  -326,  -326,
    -326,   359,   298,   220,   153,   220,  -326,   160,    13,    11,
    -326,  -326,    11,   301,   276,   305,  -326,  -326
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       0,     0,     0,     0,     0,   240,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,    69,
      70,    98,     0,   215,    58,    25,     0,    37,    37,     0,
       0,     0,     0,    86,     0,   214,    56,    56,     0,    30,
       0,     0,     1,   239,     2,     0,     6,     5,    80,    81,
      79,     0,    83,     0,     0,   114,    54,     0,   118,     0,
       0,     0,     0,    92,    28,     0,     0,   202,   105,    85,
       0,     0,     0,     0,     0,    31,    73,    72,     4,     0,
      74,    98,    75,    82,    78,     0,    98,     0,     0,    76,
     216,   197,   200,   203,   198,   199,   204,     0,   117,   119,
     192,   193,   194,   201,   195,   196,    24,    23,     0,     0,
      64,     0,    57,     0,    61,   188,     0,     0,     0,     0,
       0,     0,   190,     0,    89,    87,   115,   224,   122,   129,
     130,   131,   124,   126,   132,   125,   144,   133,   134,   135,
     128,   123,   137,   138,     0,    92,    66,    55,    52,    53,
       0,   114,    97,    99,   104,   114,   109,   111,   110,   107,
      26,     0,    36,     0,     0,     0,     0,    91,     0,    29,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
     140,     0,   139,     0,     0,     0,    92,    88,     0,   222,
       0,     0,     0,   223,   121,     0,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      21,     0,    19,    71,     0,   103,   102,   101,    77,     0,
       0,     0,   120,     0,     0,     0,    38,   241,     0,     0,
       0,     0,    59,   176,     0,   189,   191,     0,   179,   180,
     181,   182,   183,   184,     0,     0,     0,     0,     0,   163,
       0,     0,     0,   136,   127,     0,    90,   205,   207,     0,
     209,   220,   208,    94,   116,   155,   221,   156,     0,   151,
       0,     0,     0,   142,     0,   154,   153,   169,   170,   171,
     172,   173,   174,   175,   146,   145,   148,   147,   149,   150,
       0,    68,    67,     0,    17,     0,   100,   113,   112,   108,
       0,    42,     0,    45,    44,     0,    43,    48,    41,    51,
      33,     0,    63,     0,    35,    27,     0,    60,     0,   167,
       0,     0,     0,   161,     0,     0,     0,   185,     0,     0,
     236,   228,   234,   232,   235,   230,     0,     0,     0,   219,
     213,   217,     0,    84,     0,   152,     0,     0,     0,   143,
     186,     0,    20,    32,     0,     0,    49,     0,    40,     0,
      39,   242,    62,   177,     0,   165,     0,   164,     0,   168,
     220,     0,   231,   233,   229,     0,   206,   221,     0,   187,
       0,     0,   159,   157,    22,     0,     0,    50,     0,   178,
     162,   166,   210,   225,   237,     0,    96,   160,   158,    46,
      47,     0,     0,     0,     0,     0,    93,     0,     0,   238,
     226,   218,    95,     0,   188,     0,    34,   227
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -326,  -326,  -326,   404,  -326,   442,  -326,   147,  -326,  -326,
    -326,  -326,  -326,   141,  -326,  -326,   429,  -326,   137,  -326,
    -326,  -326,   426,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,   241,  -157,    40,   407,   -13,   441,  -326,  -326,   132,
     293,  -326,  -326,  -326,  -136,  -326,  -326,    36,  -326,   254,
    -326,  -326,    79,  -189,  -326,  -236,   280,   -94,   -68,  -326,
    -326,  -326,  -326,  -326,  -326,   290,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,    52,   -64,  -118,  -326,  -326,   -29,
    -326,  -326,  -326,  -325,    90,  -326,  -326,  -326,     1,  -326,
      92,   348,  -326,  -326,  -326,  -326,  -326,  -208
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    56,   231,   232,    18,   117,
      19,    20,    75,   178,    21,    22,    71,   245,   246,   329,
     378,    23,    83,    24,    25,    26,   180,   252,   176,    27,
     155,   156,    28,    29,    91,    30,    61,    62,    94,    31,
      80,   134,   196,   197,   122,   363,   426,    65,   162,   163,
     237,    43,    99,   135,   107,   108,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   187,   145,   146,   147,   148,
     264,   149,   150,   151,   152,   153,   110,   111,   112,   113,
     114,   115,   276,   277,   278,   279,   280,    44,   281,   359,
     360,   361,   204,   282,   356,   430,    54,   248
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   164,   272,    34,   109,   179,   425,   199,    33,     9,
     199,    45,   255,    78,   173,   336,   434,   121,    79,   229,
     235,    48,   200,    58,   200,    77,   341,   177,   101,   102,
      77,   211,   396,   200,   186,   211,    33,    35,   290,   194,
      73,   202,    76,   202,    58,   200,   236,    32,    36,    85,
      37,     1,   202,    50,    59,    49,   225,   244,   226,     2,
     283,   190,   226,   192,   202,   338,     3,   291,   166,   169,
     414,     4,   119,   120,   274,    59,   409,   371,    38,     5,
       6,    39,   379,    46,   158,   159,   174,   388,    60,     7,
       8,   265,   334,    40,   200,     9,   125,   101,   102,    77,
      10,    90,   228,   368,    90,    63,   285,   242,   287,    60,
     200,    47,   267,   202,   167,    13,    41,   200,   348,   103,
     193,   190,   201,   198,   168,   358,    11,   161,    53,   202,
      52,   268,   165,   311,   126,   127,   202,   288,   269,   289,
     164,    12,    42,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   211,   256,
     104,   105,   275,   132,   253,   342,   125,   101,   102,    77,
     257,   128,    97,   344,   345,   185,   293,   401,    55,   200,
     222,   223,   224,   225,   268,   226,   106,   109,   103,   200,
      98,   343,   387,    92,   294,   185,    92,   310,   202,   376,
     200,    13,   179,   410,   126,   127,   129,   424,   202,   416,
     317,   318,   319,   427,     9,   321,   181,   377,   182,   202,
     130,   322,   365,   125,   101,   102,    77,   347,   323,   104,
     105,    66,   198,    67,   125,   101,   102,    77,    70,    69,
     233,   128,   131,   132,   238,    68,   384,   385,   386,   109,
     133,   335,   324,   314,    74,   106,   315,   346,   103,    77,
      79,   126,   127,   125,   101,   102,    77,   330,   332,   325,
     331,   333,   188,   127,   382,   383,   129,   171,   198,   367,
     403,    81,    82,   198,   326,    86,   404,    87,   327,   171,
     130,    89,   418,    93,   411,   198,   399,    95,   128,   104,
     105,   328,   127,   258,   259,   260,   261,   262,   263,   128,
     100,   431,   131,   132,   333,   103,   205,   116,   433,   118,
     133,   333,   121,   123,   124,   106,   103,   154,   157,   429,
     170,   432,   160,   129,    63,   171,   172,   175,   128,   101,
     349,   183,   184,   195,   189,   227,   206,   130,   191,   230,
     198,   239,   234,   400,   240,   103,   104,   105,   130,   241,
     243,   244,   247,   249,   250,   251,     9,   104,   105,   131,
     132,   270,   286,   189,   350,   273,   292,   133,   313,   351,
     131,   132,   106,   337,   320,   352,   353,   130,   133,   340,
     339,   207,   362,   106,   290,   357,   104,   105,   200,   366,
     354,   381,   226,   369,  -237,   355,   370,   389,   374,   131,
     132,   206,   208,   375,   392,   390,   391,   133,   393,   349,
     209,   210,   106,   394,   395,   397,   402,   211,   212,   398,
     405,   406,   407,   408,   415,   182,   417,   213,   214,   215,
     216,   217,   419,   420,   218,   219,   421,   220,   221,   222,
     223,   224,   225,   350,   226,   428,   207,    88,   351,   436,
      57,   373,   372,   437,   352,   353,   206,    72,   380,   312,
     364,    96,    64,    84,   254,  -211,   266,   271,   284,   354,
     435,   413,   412,  -237,   355,   203,   210,     0,   316,     0,
     349,     0,   211,   212,     0,     0,     0,     0,   206,     0,
       0,     0,   213,   214,   215,   216,   217,     0,     0,   218,
     219,   207,   220,   221,   222,   223,   224,   225,     0,   226,
       0,     0,     0,     0,   350,     0,     0,     0,     0,   351,
     206,     0,   271,     0,     0,   352,   353,     0,     0,   422,
       0,   210,     0,  -238,     0,     0,     0,   211,   212,     0,
     354,     0,     0,     0,  -212,   355,     0,   213,   214,   215,
     216,   217,     0,     0,   218,   219,     0,   220,   221,   222,
     223,   224,   225,   210,   226,     0,     0,     0,     0,   211,
    -238,     0,     0,     0,     0,     0,     0,     0,   423,  -238,
    -238,  -238,   216,   217,     0,     0,   218,   219,     0,   220,
     221,   222,   223,   224,   225,   210,   226,     0,     0,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -238,  -238,     0,     0,  -238,  -238,
       0,   220,   221,   222,   223,   224,   225,     0,   226
};

static const yytype_int16 yycheck[] =
{
      13,    95,   191,     2,    68,   123,    44,     3,     3,    51,
       3,    10,     3,    42,    85,   251,     3,    76,    12,   155,
      81,    19,   106,     9,   106,     6,    99,   121,     4,     5,
       6,   128,   357,   106,   128,   128,     3,     3,    92,   133,
      39,   125,    41,   125,     9,   106,   107,    27,     3,    48,
      73,     7,   125,    13,    40,    53,   153,     3,   155,    15,
     196,   129,   155,   131,   125,   254,    22,   121,    97,    98,
     395,    27,    71,    72,   158,    40,   158,   313,   101,    35,
      36,    85,    28,    73,    83,    84,   157,    99,    74,    45,
      46,   185,   249,    85,   106,    51,     3,     4,     5,     6,
      56,    61,   161,   292,    64,    70,   200,   171,   202,    74,
     106,   101,    83,   125,    95,   157,    89,   106,   275,    95,
     133,   189,   118,   161,   105,   118,    82,    91,   160,   125,
       0,   102,    96,   227,    41,    42,   125,   205,   109,   207,
     234,    97,   117,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   128,   150,
     136,   137,   157,   150,   158,    83,     3,     4,     5,     6,
     183,    78,    48,   267,   268,   102,    95,   366,   103,   106,
     150,   151,   152,   153,   102,   155,   162,   251,    95,   106,
      66,   109,   109,    61,   113,   102,    64,   226,   125,    95,
     106,   157,   320,   109,    41,    42,   113,   415,   125,   398,
     239,   240,   241,   421,    51,    25,   157,   113,   159,   125,
     127,    31,   290,     3,     4,     5,     6,   156,    38,   136,
     137,     3,   161,   159,     3,     4,     5,     6,   120,    85,
     161,    78,   149,   150,   165,   157,   340,   341,   342,   313,
     157,   250,    62,   158,   108,   162,   161,   270,    95,     6,
      12,    41,    42,     3,     4,     5,     6,   158,   158,    79,
     161,   161,    41,    42,   158,   158,   113,   161,   161,   292,
     158,   115,   120,   161,    94,   158,   158,   158,    98,   161,
     127,    88,   158,   105,   388,   161,   364,   119,    78,   136,
     137,   111,    42,   130,   131,   132,   133,   134,   135,    78,
       3,   158,   149,   150,   161,    95,    17,     4,   158,   113,
     157,   161,    76,    84,    57,   162,    95,     3,    41,   423,
     158,   425,   157,   113,    70,   161,    41,   157,    78,     4,
      26,   157,   157,    85,   113,   138,    47,   127,   155,     3,
     161,    48,   161,   366,    48,    95,   136,   137,   127,    48,
     116,     3,     3,   118,    89,   157,    51,   136,   137,   149,
     150,   157,     3,   113,    60,   158,   157,   157,   157,    65,
     149,   150,   162,   161,    84,    71,    72,   127,   157,    85,
     158,    92,    63,   162,    92,   161,   136,   137,   106,   157,
      86,     3,   155,    95,    90,    91,   156,   158,   157,   149,
     150,    47,   113,   157,    71,   158,    90,   157,    71,    26,
     121,   122,   162,    71,    90,     3,   158,   128,   129,   119,
       6,     6,    95,   112,   157,   159,   158,   138,   139,   140,
     141,   142,   158,   158,   145,   146,   157,   148,   149,   150,
     151,   152,   153,    60,   155,   157,    92,    53,    65,   158,
      18,   320,   315,   158,    71,    72,    47,    38,   331,   228,
     106,    64,    31,    47,   181,   161,   186,   113,   198,    86,
     428,   391,   390,    90,    91,   137,   122,    -1,   234,    -1,
      26,    -1,   128,   129,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,    92,   148,   149,   150,   151,   152,   153,    -1,   155,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,
      47,    -1,   113,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,   122,    -1,    92,    -1,    -1,    -1,   128,   129,    -1,
      86,    -1,    -1,    -1,   161,    91,    -1,   138,   139,   140,
     141,   142,    -1,    -1,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   122,   155,    -1,    -1,    -1,    -1,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   138,
     139,   140,   141,   142,    -1,    -1,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,   122,   155,    -1,    -1,    -1,
      -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,    -1,   155
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    27,    35,    36,    45,    46,    51,
      56,    82,    97,   157,   164,   165,   166,   167,   171,   173,
     174,   177,   178,   184,   186,   187,   188,   192,   195,   196,
     198,   202,    27,     3,   251,     3,     3,    73,   101,    85,
      85,    89,   117,   214,   250,   251,    73,   101,    19,    53,
     196,   198,     0,   160,   259,   103,   168,   168,     9,    40,
      74,   199,   200,    70,   199,   210,     3,   159,   157,    85,
     120,   179,   179,   251,   108,   175,   251,     6,   242,    12,
     203,   115,   120,   185,   185,   251,   158,   158,   166,    88,
     196,   197,   202,   105,   201,   119,   197,    48,    66,   215,
       3,     4,     5,    95,   136,   137,   162,   217,   218,   238,
     239,   240,   241,   242,   243,   244,     4,   172,   113,   251,
     251,    76,   207,    84,    57,     3,    41,    42,    78,   113,
     127,   149,   150,   157,   204,   216,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   229,   230,   231,   232,   234,
     235,   236,   237,   238,     3,   193,   194,    41,   251,   251,
     157,   210,   211,   212,   220,   210,   242,    95,   105,   242,
     158,   161,    41,    85,   157,   157,   191,   220,   176,   239,
     189,   157,   159,   157,   157,   102,   220,   228,    41,   113,
     221,   155,   221,   198,   220,    85,   205,   206,   161,     3,
     106,   118,   125,   254,   255,    17,    47,    92,   113,   121,
     122,   128,   129,   138,   139,   140,   141,   142,   145,   146,
     148,   149,   150,   151,   152,   153,   155,   138,   161,   207,
       3,   169,   170,   215,   161,    81,   107,   213,   215,    48,
      48,    48,   238,   116,     3,   180,   181,     3,   260,   118,
      89,   157,   190,   158,   203,     3,   150,   198,   130,   131,
     132,   133,   134,   135,   233,   220,   228,    83,   102,   109,
     157,   113,   216,   158,   158,   157,   245,   246,   247,   248,
     249,   251,   256,   207,   219,   220,     3,   220,   221,   221,
      92,   121,   157,    95,   113,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     242,   220,   194,   157,   158,   161,   212,   242,   242,   242,
      84,    25,    31,    38,    62,    79,    94,    98,   111,   182,
     158,   161,   158,   161,   195,   251,   218,   161,   216,   158,
      85,    99,    83,   109,   220,   220,   198,   156,   195,    26,
      60,    65,    71,    72,    86,    91,   257,   161,   118,   252,
     253,   254,    63,   208,   106,   221,   157,   198,   216,    95,
     156,   218,   170,   176,   157,   157,    95,   113,   183,    28,
     181,     3,   158,   158,   220,   220,   220,   109,    99,   158,
     158,    90,    71,    71,    71,    90,   246,     3,   119,   221,
     198,   216,   158,   158,   158,     6,     6,    95,   112,   158,
     109,   220,   253,   247,   246,   157,   216,   158,   158,   158,
     158,   157,    75,   124,   260,    44,   209,   260,   157,   220,
     258,   158,   220,   158,     3,   237,   158,   158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   165,   165,   166,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   172,   173,   173,   174,   175,   176,
     177,   177,   178,   178,   178,   178,   179,   179,   180,   180,
     181,   182,   182,   182,   182,   182,   182,   182,   182,   183,
     183,   183,   184,   184,   184,   185,   185,   186,   187,   188,
     189,   189,   190,   191,   191,   192,   193,   193,   194,   195,
     195,   195,   196,   196,   197,   197,   198,   198,   199,   200,
     200,   200,   201,   201,   202,   203,   203,   204,   205,   205,
     206,   207,   207,   208,   208,   209,   209,   210,   210,   211,
     211,   212,   213,   213,   213,   214,   214,   215,   215,   215,
     215,   215,   215,   215,   215,   216,   216,   217,   217,   218,
     218,   219,   220,   220,   220,   220,   220,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   222,   222,   223,
     223,   223,   223,   223,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   225,   225,   226,   226,   226,
     226,   227,   227,   227,   227,   228,   228,   229,   229,   230,
     230,   230,   230,   230,   230,   230,   231,   231,   232,   233,
     233,   233,   233,   233,   233,   234,   235,   236,   237,   237,
     237,   237,   238,   238,   238,   238,   238,   239,   240,   240,
     241,   241,   242,   243,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   250,   251,   251,   252,   252,   253,
     253,   254,   254,   255,   255,   256,   256,   256,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   258,   259,
     259,   260,   260
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,    13,     7,     3,     0,     1,     3,
       3,     1,     1,     1,     1,     1,     4,     4,     1,     1,
       2,     0,     4,     4,     3,     2,     0,     4,     2,     6,
       3,     0,     3,     3,     0,     5,     1,     3,     3,     1,
       1,     5,     3,     3,     1,     1,     3,     5,     2,     1,
       1,     1,     1,     0,     7,     1,     0,     1,     1,     0,
       2,     2,     0,     4,     0,     2,     0,     3,     0,     1,
       3,     2,     1,     1,     0,     2,     0,     2,     4,     2,
       2,     2,     4,     4,     0,     1,     3,     1,     0,     1,
       3,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       2,     2,     3,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     5,     6,     5,
       6,     4,     6,     3,     5,     4,     5,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     6,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       4,     1,     3,     2,     1,     1,     3,     1,     5,     1,
       0,     2,     1,     1,     0,     4,     6,     8,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     0,     1,     1,
       0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* IDENTIFIER  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).sval)) ); }
#line 1700 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 4: /* STRING  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).sval)) ); }
#line 1706 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 5: /* FLOATVAL  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1712 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 6: /* INTVAL  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1718 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 165: /* statement_list  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1731 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 166: /* statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).statement)); }
#line 1737 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 167: /* preparable_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).statement)); }
#line 1743 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 168: /* opt_hints  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1756 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 169: /* hint_list  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1769 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 170: /* hint  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 1775 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 171: /* prepare_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1781 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 172: /* prepare_target_query  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).sval)) ); }
#line 1787 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 173: /* execute_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1793 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 174: /* import_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1799 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 175: /* import_file_type  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1805 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 176: /* file_path  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).sval)) ); }
#line 1811 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 177: /* show_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1817 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 178: /* create_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1823 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 179: /* opt_not_exists  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1829 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 180: /* column_def_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1842 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 181: /* column_def  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).column_t)); }
#line 1848 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 182: /* column_type  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1854 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 183: /* opt_column_nullable  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1860 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 184: /* drop_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1866 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 185: /* opt_exists  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1872 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 186: /* delete_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1878 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 187: /* truncate_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1884 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 188: /* insert_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1890 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 189: /* value_list  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).value_list)); }
#line 1896 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 190: /* insert_value  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).insert_value)); }
#line 1902 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 191: /* opt_column_list  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1915 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 192: /* update_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1921 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 193: /* update_clause_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1934 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 194: /* update_clause  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).update_t)); }
#line 1940 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 195: /* select_statement  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1946 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 196: /* select_with_paren  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1952 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 197: /* select_paren_or_clause  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1958 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 198: /* select_no_paren  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1964 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 202: /* select_clause  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1970 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 203: /* opt_distinct  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1976 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 204: /* select_list  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1989 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 205: /* opt_from_clause  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 1995 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 206: /* from_clause  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2001 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 207: /* opt_where  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2007 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 208: /* opt_group  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).group_t)); }
#line 2013 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 209: /* opt_having  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2019 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 210: /* opt_order  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2032 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 211: /* order_list  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2045 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 212: /* order_desc  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).order)); }
#line 2051 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 213: /* opt_order_type  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 2057 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 214: /* opt_top  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).limit)); }
#line 2063 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 215: /* opt_limit  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).limit)); }
#line 2069 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 216: /* expr_list  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2082 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 217: /* opt_literal_list  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2095 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 218: /* literal_list  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2108 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 219: /* expr_alias  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2114 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 220: /* expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2120 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 221: /* operand  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2126 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 222: /* scalar_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2132 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 223: /* unary_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2138 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 224: /* binary_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2144 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 225: /* logic_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2150 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 226: /* in_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2156 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 227: /* case_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2162 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 228: /* case_list  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2168 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 229: /* exists_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2174 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 230: /* comp_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2180 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 231: /* function_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2186 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 232: /* extract_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2192 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 233: /* datetime_field  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 2198 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 234: /* array_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2204 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 235: /* array_index  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2210 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 236: /* between_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2216 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 237: /* column_name  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2222 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 238: /* literal  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2228 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 239: /* string_literal  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2234 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 240: /* bool_literal  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2240 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 241: /* num_literal  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2246 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 242: /* int_literal  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2252 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 243: /* null_literal  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2258 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 244: /* param_expr  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2264 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 245: /* table_ref  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2270 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 246: /* table_ref_atomic  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2276 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 247: /* nonjoin_table_ref_atomic  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2282 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 248: /* table_ref_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2295 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 249: /* table_ref_name  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2301 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 250: /* table_ref_name_no_alias  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2307 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 251: /* table_name  */
#line 144 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2313 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 252: /* table_alias  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).alias_t)); }
#line 2319 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 253: /* opt_table_alias  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).alias_t)); }
#line 2325 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 254: /* alias  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).alias_t)); }
#line 2331 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 255: /* opt_alias  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).alias_t)); }
#line 2337 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 256: /* join_clause  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2343 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 257: /* opt_join_type  */
#line 143 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 2349 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 258: /* join_condition  */
#line 154 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2355 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 260: /* ident_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2368 "bison_parser.cpp" /* yacc.c:1254  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y" /* yacc.c:1435  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2487 "bison_parser.cpp" /* yacc.c:1435  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 258 "bison_parser.y" /* yacc.c:1660  */
    {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2692 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 3:
#line 279 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2703 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 4:
#line 285 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2714 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 5:
#line 294 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2723 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 6:
#line 298 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2732 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 7:
#line 302 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2740 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 8:
#line 309 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2746 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 9:
#line 310 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2752 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 10:
#line 311 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2758 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 11:
#line 312 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2764 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 12:
#line 313 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2770 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 13:
#line 314 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2776 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 14:
#line 315 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2782 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 15:
#line 316 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2788 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 16:
#line 317 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2794 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 17:
#line 326 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2800 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 18:
#line 327 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = nullptr; }
#line 2806 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 19:
#line 332 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2812 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 20:
#line 333 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2818 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 21:
#line 337 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2827 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 22:
#line 341 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2837 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 23:
#line 353 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2847 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 25:
#line 363 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2856 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 26:
#line 367 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2866 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 27:
#line 379 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2877 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 28:
#line 388 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kImportCSV; }
#line 2883 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 29:
#line 392 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2889 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 30:
#line 402 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2897 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 31:
#line 405 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2907 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 32:
#line 419 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2919 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 33:
#line 426 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2931 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 34:
#line 433 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-10].bval);
			(yyval.create_stmt)->schema = (yyvsp[-9].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-9].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-7].column_vec);
			(yyval.create_stmt)->primaryKeys = (yyvsp[-2].str_vec);

		}
#line 2945 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 35:
#line 442 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2958 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 36:
#line 453 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = true; }
#line 2964 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 37:
#line 454 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 2970 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 38:
#line 458 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2976 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 39:
#line 459 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2982 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 40:
#line 463 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 2990 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 41:
#line 468 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 2996 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 42:
#line 469 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3002 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 43:
#line 470 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3008 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 44:
#line 471 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3014 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 45:
#line 472 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3020 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 46:
#line 473 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3026 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 47:
#line 474 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3032 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 48:
#line 475 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3038 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 49:
#line 479 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = true; }
#line 3044 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 50:
#line 480 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 3050 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 51:
#line 481 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 3056 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 52:
#line 491 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3067 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 53:
#line 497 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3078 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 54:
#line 503 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3088 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 55:
#line 511 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = true; }
#line 3094 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 56:
#line 512 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 3100 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 57:
#line 521 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3111 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 58:
#line 530 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3121 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 59:
#line 543 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.insert_stmt)->values = (yyvsp[-1].value_list)->values;
			(yyval.insert_stmt)->values->push_back((yyvsp[0].insert_value));
		}
#line 3133 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 60:
#line 554 "bison_parser.y" /* yacc.c:1660  */
    {
            (yyvsp[-2].value_list)->values->push_back((yyvsp[-1].insert_value));
            (yyval.value_list) = (yyvsp[-2].value_list);
        }
#line 3142 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 61:
#line 559 "bison_parser.y" /* yacc.c:1660  */
    {
            (yyval.value_list) = new InsertValueList();
            (yyval.value_list)->values = new std::vector<InsertValue*>();
        }
#line 3151 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 62:
#line 567 "bison_parser.y" /* yacc.c:1660  */
    {
            (yyval.insert_value) = new InsertValue();
            (yyval.insert_value)->values = (yyvsp[-1].expr_vec);
        }
#line 3160 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 63:
#line 574 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3166 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 64:
#line 575 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.str_vec) = nullptr; }
#line 3172 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 65:
#line 585 "bison_parser.y" /* yacc.c:1660  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3183 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 66:
#line 594 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3189 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 67:
#line 595 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3195 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 68:
#line 599 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3205 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 71:
#line 613 "bison_parser.y" /* yacc.c:1660  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3224 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 72:
#line 630 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3230 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 73:
#line 631 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3236 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 76:
#line 640 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3251 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 77:
#line 650 "bison_parser.y" /* yacc.c:1660  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3270 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 84:
#line 682 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3284 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 85:
#line 694 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = true; }
#line 3290 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 86:
#line 695 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 3296 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 88:
#line 703 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3302 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 89:
#line 704 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table) = nullptr; }
#line 3308 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 90:
#line 707 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3314 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 91:
#line 712 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3320 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 92:
#line 713 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = nullptr; }
#line 3326 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 93:
#line 717 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3336 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 94:
#line 722 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.group_t) = nullptr; }
#line 3342 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 95:
#line 726 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3348 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 96:
#line 727 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = nullptr; }
#line 3354 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 97:
#line 730 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3360 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 98:
#line 731 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_vec) = nullptr; }
#line 3366 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 99:
#line 735 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3372 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 100:
#line 736 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3378 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 101:
#line 740 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3384 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 102:
#line 744 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_type) = kOrderAsc; }
#line 3390 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 103:
#line 745 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_type) = kOrderDesc; }
#line 3396 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 104:
#line 746 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_type) = kOrderAsc; }
#line 3402 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 105:
#line 752 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3408 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 106:
#line 753 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = nullptr; }
#line 3414 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 107:
#line 757 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3420 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 108:
#line 758 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3426 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 109:
#line 759 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3432 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 110:
#line 760 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = nullptr; }
#line 3438 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 111:
#line 761 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = nullptr;  }
#line 3444 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 112:
#line 762 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3450 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 113:
#line 763 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3456 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 114:
#line 764 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = nullptr; }
#line 3462 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 115:
#line 771 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3468 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 116:
#line 772 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3474 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 117:
#line 776 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3480 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 118:
#line 777 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = nullptr; }
#line 3486 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 119:
#line 781 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3492 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 120:
#line 782 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3498 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 121:
#line 786 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3510 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 127:
#line 804 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3516 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 136:
#line 813 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3522 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 139:
#line 822 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3528 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 140:
#line 823 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3534 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 141:
#line 824 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3540 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 142:
#line 825 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3546 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 143:
#line 826 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3552 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 145:
#line 831 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3558 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 146:
#line 832 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3564 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 147:
#line 833 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3570 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 148:
#line 834 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3576 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 149:
#line 835 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3582 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 150:
#line 836 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3588 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 151:
#line 837 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3594 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 152:
#line 838 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3600 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 153:
#line 839 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3606 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 154:
#line 840 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3612 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 155:
#line 844 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3618 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 156:
#line 845 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3624 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 157:
#line 849 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3630 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 158:
#line 850 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3636 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 159:
#line 851 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3642 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 160:
#line 852 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3648 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 161:
#line 858 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3654 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 162:
#line 859 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3660 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 163:
#line 860 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3666 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 164:
#line 861 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3672 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 165:
#line 865 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3678 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 166:
#line 866 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3684 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 167:
#line 870 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3690 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 168:
#line 871 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3696 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 169:
#line 875 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3702 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 170:
#line 876 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3708 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 171:
#line 877 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3714 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 172:
#line 878 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3720 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 173:
#line 879 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3726 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 174:
#line 880 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3732 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 175:
#line 881 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3738 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 176:
#line 885 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3744 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 177:
#line 886 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3750 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 178:
#line 890 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3756 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 179:
#line 894 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3762 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 180:
#line 895 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3768 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 181:
#line 896 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3774 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 182:
#line 897 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3780 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 183:
#line 898 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3786 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 184:
#line 899 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3792 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 185:
#line 902 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3798 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 186:
#line 906 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3804 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 187:
#line 910 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3810 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 188:
#line 914 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3816 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 189:
#line 915 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3822 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 190:
#line 916 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3828 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 191:
#line 917 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3834 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 197:
#line 929 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3840 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 198:
#line 933 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3846 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 199:
#line 934 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3852 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 200:
#line 938 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3858 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 202:
#line 943 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3864 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 203:
#line 947 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3870 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 204:
#line 951 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3880 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 206:
#line 964 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3891 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 210:
#line 980 "bison_parser.y" /* yacc.c:1660  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3902 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 211:
#line 989 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3908 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 212:
#line 990 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3914 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 213:
#line 995 "bison_parser.y" /* yacc.c:1660  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3926 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 214:
#line 1006 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 3936 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 215:
#line 1015 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 3942 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 216:
#line 1016 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 3948 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 218:
#line 1022 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 3954 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 220:
#line 1028 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = nullptr; }
#line 3960 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 221:
#line 1032 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3966 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 222:
#line 1033 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3972 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 224:
#line 1039 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = nullptr; }
#line 3978 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 225:
#line 1048 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3990 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 226:
#line 1056 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4003 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 227:
#line 1066 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4023 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 228:
#line 1084 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinInner; }
#line 4029 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 229:
#line 1085 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinLeft; }
#line 4035 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 230:
#line 1086 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinLeft; }
#line 4041 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 231:
#line 1087 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinRight; }
#line 4047 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 232:
#line 1088 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinRight; }
#line 4053 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 233:
#line 1089 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinFull; }
#line 4059 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 234:
#line 1090 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinFull; }
#line 4065 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 235:
#line 1091 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinFull; }
#line 4071 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 236:
#line 1092 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinCross; }
#line 4077 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 237:
#line 1093 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinInner; }
#line 4083 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 241:
#line 1113 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4089 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 242:
#line 1114 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4095 "bison_parser.cpp" /* yacc.c:1660  */
    break;


#line 4099 "bison_parser.cpp" /* yacc.c:1660  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1117 "bison_parser.y" /* yacc.c:1903  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
