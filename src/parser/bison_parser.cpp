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
    SQL_REFERENCES = 267,
    SQL_DISTINCT = 268,
    SQL_NVARCHAR = 269,
    SQL_RESTRICT = 270,
    SQL_TRUNCATE = 271,
    SQL_ANALYZE = 272,
    SQL_BETWEEN = 273,
    SQL_CASCADE = 274,
    SQL_COLUMNS = 275,
    SQL_CONTROL = 276,
    SQL_DEFAULT = 277,
    SQL_EXECUTE = 278,
    SQL_EXPLAIN = 279,
    SQL_FOREIGN = 280,
    SQL_HISTORY = 281,
    SQL_INTEGER = 282,
    SQL_NATURAL = 283,
    SQL_PREPARE = 284,
    SQL_PRIMARY = 285,
    SQL_SCHEMAS = 286,
    SQL_SPATIAL = 287,
    SQL_VARCHAR = 288,
    SQL_VIRTUAL = 289,
    SQL_BEFORE = 290,
    SQL_COLUMN = 291,
    SQL_CREATE = 292,
    SQL_DELETE = 293,
    SQL_DIRECT = 294,
    SQL_DOUBLE = 295,
    SQL_ESCAPE = 296,
    SQL_EXCEPT = 297,
    SQL_EXISTS = 298,
    SQL_EXTRACT = 299,
    SQL_GLOBAL = 300,
    SQL_HAVING = 301,
    SQL_IMPORT = 302,
    SQL_INSERT = 303,
    SQL_ISNULL = 304,
    SQL_OFFSET = 305,
    SQL_RENAME = 306,
    SQL_SCHEMA = 307,
    SQL_SELECT = 308,
    SQL_SORTED = 309,
    SQL_TABLES = 310,
    SQL_UNIQUE = 311,
    SQL_UNLOAD = 312,
    SQL_UPDATE = 313,
    SQL_VALUES = 314,
    SQL_AFTER = 315,
    SQL_ALTER = 316,
    SQL_CROSS = 317,
    SQL_DELTA = 318,
    SQL_FLOAT = 319,
    SQL_GROUP = 320,
    SQL_INDEX = 321,
    SQL_INNER = 322,
    SQL_LIMIT = 323,
    SQL_LOCAL = 324,
    SQL_MERGE = 325,
    SQL_MINUS = 326,
    SQL_ORDER = 327,
    SQL_OUTER = 328,
    SQL_RIGHT = 329,
    SQL_TABLE = 330,
    SQL_UNION = 331,
    SQL_USING = 332,
    SQL_WHERE = 333,
    SQL_CALL = 334,
    SQL_CASE = 335,
    SQL_CHAR = 336,
    SQL_DATE = 337,
    SQL_DESC = 338,
    SQL_DROP = 339,
    SQL_ELSE = 340,
    SQL_FILE = 341,
    SQL_FROM = 342,
    SQL_FULL = 343,
    SQL_HASH = 344,
    SQL_HINT = 345,
    SQL_INTO = 346,
    SQL_JOIN = 347,
    SQL_LEFT = 348,
    SQL_LIKE = 349,
    SQL_LOAD = 350,
    SQL_LONG = 351,
    SQL_NULL = 352,
    SQL_PLAN = 353,
    SQL_SHOW = 354,
    SQL_TEXT = 355,
    SQL_THEN = 356,
    SQL_TIME = 357,
    SQL_VIEW = 358,
    SQL_WHEN = 359,
    SQL_WITH = 360,
    SQL_ADD = 361,
    SQL_ALL = 362,
    SQL_AND = 363,
    SQL_ASC = 364,
    SQL_CSV = 365,
    SQL_END = 366,
    SQL_FOR = 367,
    SQL_INT = 368,
    SQL_KEY = 369,
    SQL_NOT = 370,
    SQL_OFF = 371,
    SQL_SET = 372,
    SQL_TBL = 373,
    SQL_TOP = 374,
    SQL_AS = 375,
    SQL_BY = 376,
    SQL_IF = 377,
    SQL_IN = 378,
    SQL_IS = 379,
    SQL_OF = 380,
    SQL_ON = 381,
    SQL_OR = 382,
    SQL_TO = 383,
    SQL_ARRAY = 384,
    SQL_CONCAT = 385,
    SQL_ILIKE = 386,
    SQL_SECOND = 387,
    SQL_MINUTE = 388,
    SQL_HOUR = 389,
    SQL_DAY = 390,
    SQL_MONTH = 391,
    SQL_YEAR = 392,
    SQL_TRUE = 393,
    SQL_FALSE = 394,
    SQL_EQUALS = 395,
    SQL_NOTEQUALS = 396,
    SQL_LESS = 397,
    SQL_GREATER = 398,
    SQL_LESSEQ = 399,
    SQL_GREATEREQ = 400,
    SQL_NOTNULL = 401,
    SQL_UMINUS = 402
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
	hsql::ForeignRelation* foreign_relation;

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
	std::vector<hsql::ForeignRelation*>* foreign_vec;

#line 377 "bison_parser.cpp" /* yacc.c:353  */
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
#define YYLAST   630

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  457

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   402

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   154,     2,     2,
     159,   160,   152,   150,   163,   151,   161,   153,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   162,
     143,   140,   144,   164,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   157,     2,   158,   155,     2,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   141,   142,   145,   146,   147,
     148,   149,   156
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   262,   262,   283,   289,   298,   302,   306,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   330,   331,   336,
     337,   341,   345,   357,   364,   367,   371,   383,   392,   396,
     406,   409,   423,   430,   438,   448,   457,   466,   476,   481,
     485,   491,   496,   497,   501,   502,   506,   511,   512,   513,
     514,   515,   516,   517,   518,   522,   523,   524,   534,   540,
     546,   554,   555,   564,   573,   586,   596,   602,   609,   617,
     618,   628,   637,   638,   642,   654,   655,   656,   673,   674,
     678,   679,   683,   693,   710,   714,   715,   716,   720,   721,
     725,   737,   738,   742,   746,   747,   750,   755,   756,   760,
     765,   769,   770,   773,   774,   778,   779,   783,   787,   788,
     789,   795,   796,   800,   801,   802,   803,   804,   805,   806,
     807,   814,   815,   819,   820,   824,   825,   829,   839,   840,
     841,   842,   843,   847,   848,   849,   850,   851,   852,   853,
     854,   855,   856,   860,   861,   865,   866,   867,   868,   869,
     873,   874,   875,   876,   877,   878,   879,   880,   881,   882,
     883,   887,   888,   892,   893,   894,   895,   901,   902,   903,
     904,   908,   909,   913,   914,   918,   919,   920,   921,   922,
     923,   924,   928,   929,   933,   937,   938,   939,   940,   941,
     942,   945,   949,   953,   957,   958,   959,   960,   964,   965,
     966,   967,   968,   972,   976,   977,   981,   982,   986,   990,
     994,  1006,  1007,  1017,  1018,  1022,  1023,  1032,  1033,  1038,
    1049,  1058,  1059,  1064,  1065,  1070,  1071,  1075,  1076,  1081,
    1082,  1090,  1098,  1108,  1127,  1128,  1129,  1130,  1131,  1132,
    1133,  1134,  1135,  1136,  1141,  1150,  1151,  1156,  1157
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "REFERENCES", "DISTINCT", "NVARCHAR", "RESTRICT",
  "TRUNCATE", "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL",
  "DEFAULT", "EXECUTE", "EXPLAIN", "FOREIGN", "HISTORY", "INTEGER",
  "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS", "SPATIAL", "VARCHAR",
  "VIRTUAL", "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE",
  "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "GLOBAL", "HAVING", "IMPORT",
  "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED",
  "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER",
  "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING",
  "WHERE", "CALL", "CASE", "CHAR", "DATE", "DESC", "DROP", "ELSE", "FILE",
  "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD",
  "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN",
  "WITH", "ADD", "ALL", "AND", "ASC", "CSV", "END", "FOR", "INT", "KEY",
  "NOT", "OFF", "SET", "TBL", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "TRUE", "FALSE", "'='", "EQUALS", "NOTEQUALS",
  "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'",
  "'.'", "';'", "','", "'?'", "$accept", "input", "statement_list",
  "statement", "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "primary_key", "foreign_key_list", "foreign_key",
  "opt_not_exists", "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "value_list", "insert_value", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_with_paren", "select_paren_or_clause", "select_no_paren",
  "set_operator", "set_type", "opt_all", "select_clause", "opt_distinct",
  "select_list", "opt_from_clause", "from_clause", "opt_where",
  "opt_group", "opt_having", "opt_order", "order_list", "order_desc",
  "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "opt_literal_list", "literal_list", "expr_alias", "expr", "operand",
  "scalar_expr", "unary_expr", "binary_expr", "logic_expr", "in_expr",
  "case_expr", "case_list", "exists_expr", "comp_expr", "function_expr",
  "extract_expr", "datetime_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "param_expr", "table_ref", "table_ref_atomic",
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
      61,   395,   396,    60,    62,   397,   398,   399,   400,   401,
      43,    45,    42,    47,    37,    94,   402,    91,    93,    40,
      41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -325

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-325)))

#define YYTABLE_NINF -244

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-244)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     376,    17,    32,    33,    44,    14,   -29,   -18,   -11,   -26,
      32,    86,     0,   -37,   114,    10,  -325,    73,    73,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,    12,
    -325,    22,   102,    29,  -325,    74,   112,    70,    70,    32,
     125,    32,   203,   226,   135,  -325,   147,   147,    32,  -325,
     116,   128,  -325,   376,  -325,   184,  -325,  -325,  -325,  -325,
    -325,   -37,   183,   174,   -37,    50,  -325,   296,    24,   301,
     191,    32,    32,   235,  -325,   241,   274,  -325,  -325,  -325,
     211,   331,   302,    32,    32,  -325,  -325,  -325,  -325,   180,
    -325,   272,  -325,  -325,  -325,   211,   272,   203,    31,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,   186,   185,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,   304,   -69,
     192,   211,  -325,   348,  -325,   -46,   197,   199,   121,   239,
     202,   258,  -325,   178,   273,   198,  -325,     3,   339,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,   224,   -61,  -325,  -325,  -325,  -325,
     362,    50,   206,  -325,    85,    50,  -325,   316,   321,   322,
    -325,    24,  -325,   256,   377,   378,   259,    48,   285,  -325,
     223,    -1,     5,   332,   188,   211,    92,    25,   225,   258,
     424,   211,   157,   229,   -86,     7,   235,  -325,   211,  -325,
     211,   383,   211,  -325,  -325,   258,  -325,   258,   -71,   234,
      83,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   203,   211,   331,  -325,
     236,  -115,  -325,  -325,   211,  -325,  -325,  -325,  -325,   203,
     203,   203,  -325,   308,   -14,  -103,  -325,  -325,    77,   -37,
      32,    24,   237,  -325,   211,  -325,  -325,   242,  -325,  -325,
    -325,  -325,  -325,  -325,   317,   -57,    75,   211,   211,  -325,
     332,   312,    65,  -325,  -325,   -37,  -325,     4,  -325,   244,
    -325,    11,  -325,   343,  -325,  -325,  -325,   303,   390,   458,
     258,   253,   178,  -325,   318,   261,   458,   458,   458,   458,
     473,   473,   473,   473,   157,   157,   -74,   -74,   -74,   -62,
     262,    48,  -325,    24,  -325,   362,  -325,  -325,  -325,  -325,
     348,  -325,   257,  -325,  -325,   260,  -325,  -325,  -325,    88,
    -325,   109,  -325,   418,  -325,  -325,    78,  -325,    93,  -325,
     211,   211,   211,  -325,    99,    68,   265,  -325,   266,   335,
    -325,  -325,  -325,   355,   357,   358,   340,     7,   433,  -325,
    -325,  -325,   320,  -325,   258,   458,   178,   277,   105,  -325,
    -325,   107,  -325,  -325,   432,   436,  -325,   346,  -325,   330,
     334,   126,   140,  -325,  -325,  -325,  -325,  -325,   -84,    48,
     100,  -325,   211,  -325,    11,     7,  -325,  -325,  -325,     7,
     204,   286,   211,   424,   289,   141,  -325,  -325,  -325,   291,
     292,  -325,   294,   297,  -325,   430,  -325,   430,  -325,  -325,
      48,  -325,  -325,   373,   378,   -31,  -325,  -325,  -325,  -325,
     454,   378,   155,  -325,   299,   211,   168,   211,  -325,   305,
     172,  -325,     6,    48,  -325,  -325,    48,   447,  -325,   306,
     311,   461,  -325,   309,   469,   314,  -325
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,   246,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,    75,
      76,   104,     0,   221,    64,    25,     0,    43,    43,     0,
       0,     0,     0,    92,     0,   220,    62,    62,     0,    30,
       0,     0,     1,   245,     2,     0,     6,     5,    86,    87,
      85,     0,    89,     0,     0,   120,    60,     0,   124,     0,
       0,     0,     0,    98,    28,     0,     0,   208,   111,    91,
       0,     0,     0,     0,     0,    31,    79,    78,     4,     0,
      80,   104,    81,    88,    84,     0,   104,     0,     0,    82,
     222,   203,   206,   209,   204,   205,   210,     0,   123,   125,
     198,   199,   200,   207,   201,   202,    24,    23,     0,     0,
      70,     0,    63,     0,    67,   194,     0,     0,     0,     0,
       0,     0,   196,     0,    95,    93,   121,   230,   128,   135,
     136,   137,   130,   132,   138,   131,   150,   139,   140,   141,
     134,   129,   143,   144,     0,    98,    72,    61,    58,    59,
       0,   120,   103,   105,   110,   120,   115,   117,   116,   113,
      26,     0,    42,     0,     0,     0,     0,    97,     0,    29,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
     146,     0,   145,     0,     0,     0,    98,    94,     0,   228,
       0,     0,     0,   229,   127,     0,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      21,     0,    19,    77,     0,   109,   108,   107,    83,     0,
       0,     0,   126,     0,     0,     0,    44,   247,     0,     0,
       0,     0,    65,   182,     0,   195,   197,     0,   185,   186,
     187,   188,   189,   190,     0,     0,     0,     0,     0,   169,
       0,     0,     0,   142,   133,     0,    96,   211,   213,     0,
     215,   226,   214,   100,   122,   161,   227,   162,     0,   157,
       0,     0,     0,   148,     0,   160,   159,   175,   176,   177,
     178,   179,   180,   181,   152,   151,   154,   153,   155,   156,
       0,    74,    73,     0,    17,     0,   106,   119,   118,   114,
       0,    48,     0,    51,    50,     0,    49,    54,    47,    57,
      33,     0,    69,     0,    37,    27,     0,    66,     0,   173,
       0,     0,     0,   167,     0,     0,     0,   191,     0,     0,
     242,   234,   240,   238,   241,   236,     0,     0,     0,   225,
     219,   223,     0,    90,     0,   158,     0,     0,     0,   149,
     192,     0,    20,    32,     0,     0,    55,     0,    46,     0,
       0,     0,     0,    39,    45,   248,    68,   183,     0,   171,
       0,   170,     0,   174,   226,     0,   237,   239,   235,     0,
     212,   227,     0,   193,     0,     0,   165,   163,    22,     0,
       0,    56,     0,     0,    35,     0,    36,     0,   184,   168,
     172,   216,   231,   243,     0,   102,   166,   164,    52,    53,
       0,     0,     0,    40,     0,     0,     0,     0,    99,     0,
       0,    34,     0,   244,   232,   224,   101,     0,    38,   194,
       0,     0,   233,     0,     0,     0,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -325,  -325,  -325,   423,  -325,   459,  -325,   163,  -325,  -325,
    -325,  -325,  -325,   165,  -325,  -325,  -325,    80,    71,   462,
    -325,   166,  -325,  -325,  -325,   455,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,   275,   -78,    40,   437,   -13,   475,
    -325,  -325,   220,   323,  -325,  -325,  -325,  -117,  -325,  -325,
     133,  -325,   276,  -325,  -325,    69,  -189,  -325,  -226,   310,
     -94,   -70,  -325,  -325,  -325,  -325,  -325,  -325,   325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,    67,   -64,  -118,
    -325,  -325,   -35,  -325,  -325,  -325,  -324,   117,  -325,  -325,
    -325,     1,  -325,   119,   379,  -325,  -325,  -325,  -325,  -325,
    -315
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    56,   231,   232,    18,   117,
      19,    20,    75,   178,    21,    22,   381,   382,   383,    71,
     245,   246,   329,   378,    23,    83,    24,    25,    26,   180,
     252,   176,    27,   155,   156,    28,    29,    91,    30,    61,
      62,    94,    31,    80,   134,   196,   197,   122,   363,   438,
      65,   162,   163,   237,    43,    99,   135,   107,   108,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   187,   145,
     146,   147,   148,   264,   149,   150,   151,   152,   153,   110,
     111,   112,   113,   114,   115,   276,   277,   278,   279,   280,
      44,   281,   359,   360,   361,   204,   282,   356,   444,    54,
     248
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   164,   272,    34,   109,   179,   199,    78,   255,   449,
      33,    45,    79,   321,   199,   437,     9,   121,   173,   322,
      48,    58,   200,   290,   200,   336,   323,   177,   101,   102,
      77,    58,   349,   400,   186,    33,    35,    77,   229,   194,
      73,   202,    76,   202,   341,   314,    32,    36,   315,    85,
     324,   200,   291,    50,    59,    49,   211,   330,    39,   190,
     331,   192,   166,   169,    59,   338,   350,   325,   211,    40,
     202,   351,   119,   120,   274,   423,   418,   352,   353,   283,
      41,   225,   326,   226,   158,   159,   327,   371,    60,    37,
     174,   265,   354,    42,    63,   226,  -243,   355,    60,   328,
      97,    90,   228,   368,    90,    66,   285,   242,   287,   436,
     267,   200,   244,   181,    52,   182,   440,    38,    98,   190,
     193,   103,    13,   201,   125,   101,   102,    77,   167,   268,
     202,   358,   198,   311,   379,   288,   269,   289,   168,   380,
     164,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   200,   256,   132,   253,
     342,    46,   104,   105,   126,   127,   275,  -217,   235,   392,
     257,   334,    53,   344,   345,   202,   200,   405,    55,   268,
     293,   125,   101,   102,    77,   376,   343,   109,   106,    47,
      67,   310,    70,   200,   236,   202,   185,   348,   294,    69,
     200,   128,   179,   377,   317,   318,   319,   200,   200,    77,
     391,   419,   202,   425,   125,   101,   102,    77,   103,   202,
     365,   126,   127,   347,   161,   185,   202,   202,   198,   165,
     233,     9,   349,    68,   238,    74,   129,   332,   386,    79,
     333,   171,   125,   101,   102,    77,   388,   389,   390,   109,
     130,   335,    81,   387,   126,   127,   198,   346,   128,   104,
     105,   125,   101,   102,    77,   407,   350,   408,   198,    82,
     171,   351,   131,   132,    89,   103,    86,   352,   353,   367,
     133,    92,   188,   127,    92,   106,   414,   211,    87,   415,
      93,   128,   354,   129,   403,    95,  -243,   355,   420,   100,
     416,   427,   127,   417,   198,   116,   118,   130,   103,   222,
     223,   224,   225,   121,   226,   441,   104,   105,   417,   128,
     258,   259,   260,   261,   262,   263,   129,   123,   445,   131,
     132,   333,   448,   124,   154,   333,   103,   133,   128,   160,
     130,   443,   106,   446,    63,   157,   170,   172,   171,   104,
     105,   175,   101,   404,   189,   103,   183,   205,   184,   191,
     195,   198,   131,   132,   227,   230,   239,  -218,   130,   234,
     133,   240,   241,   189,   243,   106,   250,   104,   105,   249,
     244,   247,   251,     1,   270,     9,   286,   130,   206,   273,
     131,   132,     2,   292,   320,   313,   104,   105,   133,     3,
     337,   349,   339,   106,   340,     4,   290,   357,   362,   131,
     132,   200,   366,     5,     6,   369,   374,   133,   226,   375,
     370,   385,   106,     7,     8,   393,   394,   395,   396,     9,
     397,   398,   399,   207,    10,   350,   401,   406,   409,   206,
     351,   402,   410,   411,   412,   424,   352,   353,   413,   426,
     434,   428,   429,   430,   208,   379,   431,   439,   442,   451,
      11,   354,   209,   210,   453,   447,   355,   182,   454,   211,
     212,   452,   455,   206,   456,    12,    88,    57,   372,   213,
     214,   215,   216,   217,   207,   373,   218,   219,   433,   220,
     221,   222,   223,   224,   225,   432,   226,   384,   364,   435,
      72,    96,    84,   312,   254,   271,    64,   206,   284,   450,
     316,   266,   422,   421,   210,     0,   203,     0,   207,     0,
     211,   212,   206,     0,     0,     0,     0,     0,     0,     0,
     213,   214,   215,   216,   217,    13,     0,   218,   219,   271,
     220,   221,   222,   223,   224,   225,     0,   226,   210,     0,
       0,     0,  -244,     0,   211,   212,     0,     0,     0,     0,
       0,     0,     0,     0,   213,   214,   215,   216,   217,     0,
       0,   218,   219,     0,   220,   221,   222,   223,   224,   225,
       0,   226,   210,     0,     0,     0,     0,     0,   211,  -244,
       0,     0,     0,     0,     0,     0,     0,   210,  -244,  -244,
    -244,   216,   217,   211,     0,   218,   219,     0,   220,   221,
     222,   223,   224,   225,     0,   226,  -244,  -244,     0,     0,
    -244,  -244,     0,   220,   221,   222,   223,   224,   225,     0,
     226
};

static const yytype_int16 yycheck[] =
{
      13,    95,   191,     2,    68,   123,     3,    42,     3,     3,
       3,    10,    13,    27,     3,    46,    53,    78,    87,    33,
      20,     9,   108,    94,   108,   251,    40,   121,     4,     5,
       6,     9,    28,   357,   128,     3,     3,     6,   155,   133,
      39,   127,    41,   127,   101,   160,    29,     3,   163,    48,
      64,   108,   123,    13,    42,    55,   130,   160,    87,   129,
     163,   131,    97,    98,    42,   254,    62,    81,   130,    87,
     127,    67,    71,    72,   160,   399,   160,    73,    74,   196,
      91,   155,    96,   157,    83,    84,   100,   313,    76,    75,
     159,   185,    88,   119,    72,   157,    92,    93,    76,   113,
      50,    61,   163,   292,    64,     3,   200,   171,   202,   424,
      85,   108,     3,   159,     0,   161,   431,   103,    68,   189,
     133,    97,   159,   120,     3,     4,     5,     6,    97,   104,
     127,   120,   163,   227,    25,   205,   111,   207,   107,    30,
     234,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   108,   152,   152,   160,
      85,    75,   138,   139,    43,    44,   159,   163,    83,   101,
     183,   249,   162,   267,   268,   127,   108,   366,   105,   104,
      97,     3,     4,     5,     6,    97,   111,   251,   164,   103,
     161,   226,   122,   108,   109,   127,   104,   275,   115,    87,
     108,    80,   320,   115,   239,   240,   241,   108,   108,     6,
     111,   111,   127,   402,     3,     4,     5,     6,    97,   127,
     290,    43,    44,   158,    91,   104,   127,   127,   163,    96,
     161,    53,    28,   159,   165,   110,   115,   160,   160,    13,
     163,   163,     3,     4,     5,     6,   340,   341,   342,   313,
     129,   250,   117,   160,    43,    44,   163,   270,    80,   138,
     139,     3,     4,     5,     6,   160,    62,   160,   163,   122,
     163,    67,   151,   152,    90,    97,   160,    73,    74,   292,
     159,    61,    43,    44,    64,   164,   160,   130,   160,   163,
     107,    80,    88,   115,   364,   121,    92,    93,   392,     3,
     160,   160,    44,   163,   163,     4,   115,   129,    97,   152,
     153,   154,   155,    78,   157,   160,   138,   139,   163,    80,
     132,   133,   134,   135,   136,   137,   115,    86,   160,   151,
     152,   163,   160,    59,     3,   163,    97,   159,    80,   159,
     129,   435,   164,   437,    72,    43,   160,    43,   163,   138,
     139,   159,     4,   366,   115,    97,   159,    18,   159,   157,
      87,   163,   151,   152,   140,     3,    50,   163,   129,   163,
     159,    50,    50,   115,   118,   164,    91,   138,   139,   120,
       3,     3,   159,     7,   159,    53,     3,   129,    49,   160,
     151,   152,    16,   159,    86,   159,   138,   139,   159,    23,
     163,    28,   160,   164,    87,    29,    94,   163,    65,   151,
     152,   108,   159,    37,    38,    97,   159,   159,   157,   159,
     158,     3,   164,    47,    48,   160,   160,    92,    73,    53,
      73,    73,    92,    94,    58,    62,     3,   160,     6,    49,
      67,   121,     6,    97,   114,   159,    73,    74,   114,   160,
      77,   160,   160,   159,   115,    25,   159,     3,   159,    12,
      84,    88,   123,   124,     3,   160,    93,   161,   159,   130,
     131,   160,     3,    49,   160,    99,    53,    18,   315,   140,
     141,   142,   143,   144,    94,   320,   147,   148,   417,   150,
     151,   152,   153,   154,   155,   415,   157,   331,   108,   126,
      38,    64,    47,   228,   181,   115,    31,    49,   198,   442,
     234,   186,   395,   394,   124,    -1,   137,    -1,    94,    -1,
     130,   131,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,   159,    -1,   147,   148,   115,
     150,   151,   152,   153,   154,   155,    -1,   157,   124,    -1,
      -1,    -1,    94,    -1,   130,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,
      -1,   147,   148,    -1,   150,   151,   152,   153,   154,   155,
      -1,   157,   124,    -1,    -1,    -1,    -1,    -1,   130,   131,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   140,   141,
     142,   143,   144,   130,    -1,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,    -1,   157,   143,   144,    -1,    -1,
     147,   148,    -1,   150,   151,   152,   153,   154,   155,    -1,
     157
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    16,    23,    29,    37,    38,    47,    48,    53,
      58,    84,    99,   159,   166,   167,   168,   169,   173,   175,
     176,   179,   180,   189,   191,   192,   193,   197,   200,   201,
     203,   207,    29,     3,   256,     3,     3,    75,   103,    87,
      87,    91,   119,   219,   255,   256,    75,   103,    20,    55,
     201,   203,     0,   162,   264,   105,   170,   170,     9,    42,
      76,   204,   205,    72,   204,   215,     3,   161,   159,    87,
     122,   184,   184,   256,   110,   177,   256,     6,   247,    13,
     208,   117,   122,   190,   190,   256,   160,   160,   168,    90,
     201,   202,   207,   107,   206,   121,   202,    50,    68,   220,
       3,     4,     5,    97,   138,   139,   164,   222,   223,   243,
     244,   245,   246,   247,   248,   249,     4,   174,   115,   256,
     256,    78,   212,    86,    59,     3,    43,    44,    80,   115,
     129,   151,   152,   159,   209,   221,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   234,   235,   236,   237,   239,
     240,   241,   242,   243,     3,   198,   199,    43,   256,   256,
     159,   215,   216,   217,   225,   215,   247,    97,   107,   247,
     160,   163,    43,    87,   159,   159,   196,   225,   178,   244,
     194,   159,   161,   159,   159,   104,   225,   233,    43,   115,
     226,   157,   226,   203,   225,    87,   210,   211,   163,     3,
     108,   120,   127,   259,   260,    18,    49,    94,   115,   123,
     124,   130,   131,   140,   141,   142,   143,   144,   147,   148,
     150,   151,   152,   153,   154,   155,   157,   140,   163,   212,
       3,   171,   172,   220,   163,    83,   109,   218,   220,    50,
      50,    50,   243,   118,     3,   185,   186,     3,   265,   120,
      91,   159,   195,   160,   208,     3,   152,   203,   132,   133,
     134,   135,   136,   137,   238,   225,   233,    85,   104,   111,
     159,   115,   221,   160,   160,   159,   250,   251,   252,   253,
     254,   256,   261,   212,   224,   225,     3,   225,   226,   226,
      94,   123,   159,    97,   115,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     247,   225,   199,   159,   160,   163,   217,   247,   247,   247,
      86,    27,    33,    40,    64,    81,    96,   100,   113,   187,
     160,   163,   160,   163,   200,   256,   223,   163,   221,   160,
      87,   101,    85,   111,   225,   225,   203,   158,   200,    28,
      62,    67,    73,    74,    88,    93,   262,   163,   120,   257,
     258,   259,    65,   213,   108,   226,   159,   203,   221,    97,
     158,   223,   172,   178,   159,   159,    97,   115,   188,    25,
      30,   181,   182,   183,   186,     3,   160,   160,   225,   225,
     225,   111,   101,   160,   160,    92,    73,    73,    73,    92,
     251,     3,   121,   226,   203,   221,   160,   160,   160,     6,
       6,    97,   114,   114,   160,   163,   160,   163,   160,   111,
     225,   258,   252,   251,   159,   221,   160,   160,   160,   160,
     159,   159,   182,   183,    77,   126,   265,    46,   214,     3,
     265,   160,   159,   225,   263,   160,   225,   160,   160,     3,
     242,    12,   160,     3,   159,     3,   160
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   165,   166,   167,   167,   168,   168,   168,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   174,   175,   175,   176,   177,   178,
     179,   179,   180,   180,   180,   180,   180,   180,   181,   182,
     182,   183,   184,   184,   185,   185,   186,   187,   187,   187,
     187,   187,   187,   187,   187,   188,   188,   188,   189,   189,
     189,   190,   190,   191,   192,   193,   194,   194,   195,   196,
     196,   197,   198,   198,   199,   200,   200,   200,   201,   201,
     202,   202,   203,   203,   204,   205,   205,   205,   206,   206,
     207,   208,   208,   209,   210,   210,   211,   212,   212,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   218,   218,
     218,   219,   219,   220,   220,   220,   220,   220,   220,   220,
     220,   221,   221,   222,   222,   223,   223,   224,   225,   225,
     225,   225,   225,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   227,   227,   228,   228,   228,   228,   228,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   230,   230,   231,   231,   231,   231,   232,   232,   232,
     232,   233,   233,   234,   234,   235,   235,   235,   235,   235,
     235,   235,   236,   236,   237,   238,   238,   238,   238,   238,
     238,   239,   240,   241,   242,   242,   242,   242,   243,   243,
     243,   243,   243,   244,   245,   245,   246,   246,   247,   248,
     249,   250,   250,   251,   251,   252,   252,   253,   253,   254,
     255,   256,   256,   257,   257,   258,   258,   259,   259,   260,
     260,   261,   261,   261,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   263,   264,   264,   265,   265
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,    11,     9,     9,     7,     5,     1,
       3,    10,     3,     0,     1,     3,     3,     1,     1,     1,
       1,     1,     4,     4,     1,     1,     2,     0,     4,     4,
       3,     2,     0,     4,     2,     6,     3,     0,     3,     3,
       0,     5,     1,     3,     3,     1,     1,     5,     3,     3,
       1,     1,     3,     5,     2,     1,     1,     1,     1,     0,
       7,     1,     0,     1,     1,     0,     2,     2,     0,     4,
       0,     2,     0,     3,     0,     1,     3,     2,     1,     1,
       0,     2,     0,     2,     4,     2,     2,     2,     4,     4,
       0,     1,     3,     1,     0,     1,     3,     2,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     2,     2,     3,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     3,     3,     5,     6,     5,     6,     4,     6,     3,
       5,     4,     5,     4,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     6,     1,     1,     1,     1,     1,
       1,     4,     4,     5,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     4,     1,     3,     2,
       1,     1,     3,     1,     5,     1,     0,     2,     1,     1,
       0,     4,     6,     8,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     0,     1,     1,     0,     1,     3
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
#line 147 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).sval)) ); }
#line 1713 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 4: /* STRING  */
#line 147 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).sval)) ); }
#line 1719 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 5: /* FLOATVAL  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1725 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 6: /* INTVAL  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1731 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 167: /* statement_list  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1744 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 168: /* statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).statement)); }
#line 1750 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 169: /* preparable_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).statement)); }
#line 1756 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 170: /* opt_hints  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
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

    case 171: /* hint_list  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1782 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 172: /* hint  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 1788 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 173: /* prepare_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1794 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 174: /* prepare_target_query  */
#line 147 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).sval)) ); }
#line 1800 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 175: /* execute_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1806 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 176: /* import_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1812 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 177: /* import_file_type  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1818 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 178: /* file_path  */
#line 147 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).sval)) ); }
#line 1824 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 179: /* show_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1830 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 180: /* create_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1836 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 181: /* primary_key  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1849 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 182: /* foreign_key_list  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).foreign_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).foreign_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).foreign_vec));
}
#line 1862 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 183: /* foreign_key  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).foreign_relation)); }
#line 1868 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 184: /* opt_not_exists  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1874 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 185: /* column_def_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1887 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 186: /* column_def  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).column_t)); }
#line 1893 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 187: /* column_type  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1899 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 188: /* opt_column_nullable  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1905 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 189: /* drop_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1911 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 190: /* opt_exists  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 1917 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 191: /* delete_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1923 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 192: /* truncate_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1929 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 193: /* insert_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1935 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 194: /* value_list  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).value_list)); }
#line 1941 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 195: /* insert_value  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).insert_value)); }
#line 1947 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 196: /* opt_column_list  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1960 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 197: /* update_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1966 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 198: /* update_clause_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1979 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 199: /* update_clause  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).update_t)); }
#line 1985 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 200: /* select_statement  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1991 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 201: /* select_with_paren  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1997 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 202: /* select_paren_or_clause  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2003 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 203: /* select_no_paren  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2009 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 207: /* select_clause  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2015 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 208: /* opt_distinct  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 2021 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 209: /* select_list  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2034 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 210: /* opt_from_clause  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2040 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 211: /* from_clause  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2046 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 212: /* opt_where  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2052 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 213: /* opt_group  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).group_t)); }
#line 2058 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 214: /* opt_having  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2064 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 215: /* opt_order  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2077 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 216: /* order_list  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2090 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 217: /* order_desc  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).order)); }
#line 2096 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 218: /* opt_order_type  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 2102 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 219: /* opt_top  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).limit)); }
#line 2108 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 220: /* opt_limit  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).limit)); }
#line 2114 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 221: /* expr_list  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2127 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 222: /* opt_literal_list  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2140 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 223: /* literal_list  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2153 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 224: /* expr_alias  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2159 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 225: /* expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2165 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 226: /* operand  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2171 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 227: /* scalar_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2177 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 228: /* unary_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2183 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 229: /* binary_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2189 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 230: /* logic_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2195 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 231: /* in_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2201 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 232: /* case_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2207 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 233: /* case_list  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2213 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 234: /* exists_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2219 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 235: /* comp_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2225 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 236: /* function_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2231 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 237: /* extract_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2237 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 238: /* datetime_field  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 2243 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 239: /* array_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2249 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 240: /* array_index  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2255 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 241: /* between_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2261 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 242: /* column_name  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2267 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 243: /* literal  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2273 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 244: /* string_literal  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2279 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 245: /* bool_literal  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2285 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 246: /* num_literal  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2291 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 247: /* int_literal  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2297 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 248: /* null_literal  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2303 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 249: /* param_expr  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2309 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 250: /* table_ref  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2315 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 251: /* table_ref_atomic  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2321 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 252: /* nonjoin_table_ref_atomic  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2327 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 253: /* table_ref_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2340 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 254: /* table_ref_name  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2346 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 255: /* table_ref_name_no_alias  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2352 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 256: /* table_name  */
#line 146 "bison_parser.y" /* yacc.c:1254  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2358 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 257: /* table_alias  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).alias_t)); }
#line 2364 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 258: /* opt_table_alias  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).alias_t)); }
#line 2370 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 259: /* alias  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).alias_t)); }
#line 2376 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 260: /* opt_alias  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).alias_t)); }
#line 2382 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 261: /* join_clause  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).table)); }
#line 2388 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 262: /* opt_join_type  */
#line 145 "bison_parser.y" /* yacc.c:1254  */
      { }
#line 2394 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 263: /* join_condition  */
#line 156 "bison_parser.y" /* yacc.c:1254  */
      { delete (((*yyvaluep).expr)); }
#line 2400 "bison_parser.cpp" /* yacc.c:1254  */
        break;

    case 265: /* ident_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1254  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2413 "bison_parser.cpp" /* yacc.c:1254  */
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

#line 2532 "bison_parser.cpp" /* yacc.c:1435  */
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
#line 262 "bison_parser.y" /* yacc.c:1660  */
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
#line 2737 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 3:
#line 283 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2748 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 4:
#line 289 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2759 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 5:
#line 298 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2768 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 6:
#line 302 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2777 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 7:
#line 306 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2785 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 8:
#line 313 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2791 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 9:
#line 314 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2797 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 10:
#line 315 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2803 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 11:
#line 316 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2809 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 12:
#line 317 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2815 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 13:
#line 318 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2821 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 14:
#line 319 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2827 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 15:
#line 320 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2833 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 16:
#line 321 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2839 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 17:
#line 330 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2845 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 18:
#line 331 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = nullptr; }
#line 2851 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 19:
#line 336 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2857 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 20:
#line 337 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2863 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 21:
#line 341 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2872 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 22:
#line 345 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2882 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 23:
#line 357 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2892 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 25:
#line 367 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2901 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 26:
#line 371 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2911 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 27:
#line 383 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2922 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 28:
#line 392 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kImportCSV; }
#line 2928 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 29:
#line 396 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2934 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 30:
#line 406 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2942 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 31:
#line 409 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2952 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 32:
#line 423 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2964 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 33:
#line 430 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);

		}
#line 2977 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 34:
#line 438 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-8].bval);
			(yyval.create_stmt)->schema = (yyvsp[-7].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-7].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-5].column_vec);
			(yyval.create_stmt)->primaryKeys = (yyvsp[-3].str_vec);
			(yyval.create_stmt)->foreignRelations = (yyvsp[-1].foreign_vec);

		}
#line 2992 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 35:
#line 448 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
			(yyval.create_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-3].column_vec);
			(yyval.create_stmt)->primaryKeys = (yyvsp[-1].str_vec);

		}
#line 3006 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 36:
#line 457 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
			(yyval.create_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-3].column_vec);
			(yyval.create_stmt)->foreignRelations = (yyvsp[-1].foreign_vec);

		}
#line 3020 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 37:
#line 466 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3033 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 38:
#line 476 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.str_vec) = (yyvsp[-1].str_vec);
		}
#line 3041 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 39:
#line 481 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.foreign_vec) = new std::vector<ForeignRelation*>();
			(yyval.foreign_vec)->push_back((yyvsp[0].foreign_relation));
		}
#line 3050 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 40:
#line 485 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyvsp[-2].foreign_vec)->push_back((yyvsp[0].foreign_relation));
			(yyval.foreign_vec) = (yyvsp[-2].foreign_vec);
		}
#line 3059 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 41:
#line 491 "bison_parser.y" /* yacc.c:1660  */
    {
		(yyval.foreign_relation) = new ForeignRelation((yyvsp[-6].sval),(yyvsp[-3].sval),(yyvsp[-1].sval));
	}
#line 3067 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 42:
#line 496 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = true; }
#line 3073 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 43:
#line 497 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 3079 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 44:
#line 501 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3085 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 45:
#line 502 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3091 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 46:
#line 506 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3099 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 47:
#line 511 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3105 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 48:
#line 512 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3111 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 49:
#line 513 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3117 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 50:
#line 514 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3123 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 51:
#line 515 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3129 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 52:
#line 516 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3135 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 53:
#line 517 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3141 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 54:
#line 518 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3147 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 55:
#line 522 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = true; }
#line 3153 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 56:
#line 523 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 3159 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 57:
#line 524 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 3165 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 58:
#line 534 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3176 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 59:
#line 540 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3187 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 60:
#line 546 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3197 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 61:
#line 554 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = true; }
#line 3203 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 62:
#line 555 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 3209 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 63:
#line 564 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3220 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 64:
#line 573 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3230 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 65:
#line 586 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.insert_stmt)->values = (yyvsp[-1].value_list)->values;
			(yyval.insert_stmt)->values->push_back((yyvsp[0].insert_value));
		}
#line 3242 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 66:
#line 597 "bison_parser.y" /* yacc.c:1660  */
    {
            (yyvsp[-2].value_list)->values->push_back((yyvsp[-1].insert_value));
            (yyval.value_list) = (yyvsp[-2].value_list);
        }
#line 3251 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 67:
#line 602 "bison_parser.y" /* yacc.c:1660  */
    {
            (yyval.value_list) = new InsertValueList();
            (yyval.value_list)->values = new std::vector<InsertValue*>();
        }
#line 3260 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 68:
#line 610 "bison_parser.y" /* yacc.c:1660  */
    {
            (yyval.insert_value) = new InsertValue();
            (yyval.insert_value)->values = (yyvsp[-1].expr_vec);
        }
#line 3269 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 69:
#line 617 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3275 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 70:
#line 618 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.str_vec) = nullptr; }
#line 3281 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 71:
#line 628 "bison_parser.y" /* yacc.c:1660  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3292 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 72:
#line 637 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3298 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 73:
#line 638 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3304 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 74:
#line 642 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3314 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 77:
#line 656 "bison_parser.y" /* yacc.c:1660  */
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
#line 3333 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 78:
#line 673 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3339 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 79:
#line 674 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3345 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 82:
#line 683 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3360 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 83:
#line 693 "bison_parser.y" /* yacc.c:1660  */
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
#line 3379 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 90:
#line 725 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3393 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 91:
#line 737 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = true; }
#line 3399 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 92:
#line 738 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.bval) = false; }
#line 3405 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 94:
#line 746 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3411 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 95:
#line 747 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table) = nullptr; }
#line 3417 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 96:
#line 750 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3423 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 97:
#line 755 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3429 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 98:
#line 756 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = nullptr; }
#line 3435 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 99:
#line 760 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3445 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 100:
#line 765 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.group_t) = nullptr; }
#line 3451 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 101:
#line 769 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3457 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 102:
#line 770 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = nullptr; }
#line 3463 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 103:
#line 773 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3469 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 104:
#line 774 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_vec) = nullptr; }
#line 3475 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 105:
#line 778 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3481 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 106:
#line 779 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3487 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 107:
#line 783 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3493 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 108:
#line 787 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_type) = kOrderAsc; }
#line 3499 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 109:
#line 788 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_type) = kOrderDesc; }
#line 3505 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 110:
#line 789 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.order_type) = kOrderAsc; }
#line 3511 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 111:
#line 795 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3517 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 112:
#line 796 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = nullptr; }
#line 3523 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 113:
#line 800 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3529 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 114:
#line 801 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3535 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 115:
#line 802 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3541 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 116:
#line 803 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = nullptr; }
#line 3547 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 117:
#line 804 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = nullptr;  }
#line 3553 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 118:
#line 805 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3559 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 119:
#line 806 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3565 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 120:
#line 807 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.limit) = nullptr; }
#line 3571 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 121:
#line 814 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3577 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 122:
#line 815 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3583 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 123:
#line 819 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3589 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 124:
#line 820 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = nullptr; }
#line 3595 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 125:
#line 824 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3601 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 126:
#line 825 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3607 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 127:
#line 829 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3619 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 133:
#line 847 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3625 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 142:
#line 856 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3631 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 145:
#line 865 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3637 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 146:
#line 866 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3643 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 147:
#line 867 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3649 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 148:
#line 868 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3655 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 149:
#line 869 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3661 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 151:
#line 874 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3667 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 152:
#line 875 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3673 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 153:
#line 876 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3679 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 154:
#line 877 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3685 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 155:
#line 878 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3691 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 156:
#line 879 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3697 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 157:
#line 880 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3703 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 158:
#line 881 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3709 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 159:
#line 882 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3715 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 160:
#line 883 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3721 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 161:
#line 887 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3727 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 162:
#line 888 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3733 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 163:
#line 892 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3739 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 164:
#line 893 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3745 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 165:
#line 894 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3751 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 166:
#line 895 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3757 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 167:
#line 901 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3763 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 168:
#line 902 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3769 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 169:
#line 903 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3775 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 170:
#line 904 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3781 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 171:
#line 908 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3787 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 172:
#line 909 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3793 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 173:
#line 913 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3799 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 174:
#line 914 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3805 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 175:
#line 918 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3811 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 176:
#line 919 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3817 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 177:
#line 920 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3823 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 178:
#line 921 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3829 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 179:
#line 922 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3835 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 180:
#line 923 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3841 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 181:
#line 924 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3847 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 182:
#line 928 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3853 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 183:
#line 929 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3859 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 184:
#line 933 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3865 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 185:
#line 937 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3871 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 186:
#line 938 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3877 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 187:
#line 939 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3883 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 188:
#line 940 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3889 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 189:
#line 941 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3895 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 190:
#line 942 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3901 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 191:
#line 945 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3907 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 192:
#line 949 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3913 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 193:
#line 953 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3919 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 194:
#line 957 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3925 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 195:
#line 958 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3931 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 196:
#line 959 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3937 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 197:
#line 960 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3943 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 203:
#line 972 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3949 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 204:
#line 976 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3955 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 205:
#line 977 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3961 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 206:
#line 981 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3967 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 208:
#line 986 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3973 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 209:
#line 990 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3979 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 210:
#line 994 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3989 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 212:
#line 1007 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4000 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 216:
#line 1023 "bison_parser.y" /* yacc.c:1660  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4011 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 217:
#line 1032 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4017 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 218:
#line 1033 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4023 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 219:
#line 1038 "bison_parser.y" /* yacc.c:1660  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4035 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 220:
#line 1049 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4045 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 221:
#line 1058 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4051 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 222:
#line 1059 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4057 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 224:
#line 1065 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4063 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 226:
#line 1071 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = nullptr; }
#line 4069 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 227:
#line 1075 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4075 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 228:
#line 1076 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4081 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 230:
#line 1082 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.alias_t) = nullptr; }
#line 4087 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 231:
#line 1091 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4099 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 232:
#line 1099 "bison_parser.y" /* yacc.c:1660  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4112 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 233:
#line 1109 "bison_parser.y" /* yacc.c:1660  */
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
#line 4132 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 234:
#line 1127 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinInner; }
#line 4138 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 235:
#line 1128 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinLeft; }
#line 4144 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 236:
#line 1129 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinLeft; }
#line 4150 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 237:
#line 1130 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinRight; }
#line 4156 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 238:
#line 1131 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinRight; }
#line 4162 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 239:
#line 1132 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinFull; }
#line 4168 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 240:
#line 1133 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinFull; }
#line 4174 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 241:
#line 1134 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinFull; }
#line 4180 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 242:
#line 1135 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinCross; }
#line 4186 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 243:
#line 1136 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.uval) = kJoinInner; }
#line 4192 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 247:
#line 1156 "bison_parser.y" /* yacc.c:1660  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4198 "bison_parser.cpp" /* yacc.c:1660  */
    break;

  case 248:
#line 1157 "bison_parser.y" /* yacc.c:1660  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4204 "bison_parser.cpp" /* yacc.c:1660  */
    break;


#line 4208 "bison_parser.cpp" /* yacc.c:1660  */
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
#line 1160 "bison_parser.y" /* yacc.c:1903  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
