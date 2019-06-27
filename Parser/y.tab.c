/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>
	#include "../node.h"

	int yylex();
	void yyerror(char * s);
	char buff[30];

#line 78 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    STRING = 259,
    INT = 260,
    CHAR = 261,
    DECIMAL = 262,
    MAIN = 263,
    ELSE = 264,
    RETURN = 265,
    WHEN = 266,
    DURING = 267,
    REPEAT = 268,
    DOT = 269,
    PRINTF = 270,
    READ = 271,
    ASSIGN = 272,
    SUM_ASSIGN = 273,
    SUB_ASSIGN = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    OP_ASSIGN = 277,
    MOD_ASSIGN = 278,
    LEQ_THAN = 279,
    GEQ_THAN = 280,
    EQUAL = 281,
    NOT_EQUAL = 282,
    LESS_THAN = 283,
    GREATER_THAN = 284,
    AND = 285,
    OR = 286,
    NOT = 287,
    SUM = 288,
    SUB = 289,
    MULT = 290,
    DIV = 291,
    MOD = 292,
    COLON = 293,
    SEMICOLON = 294,
    COMMA = 295,
    OPEN_CURLY_PARENTHESES = 296,
    CLOSE_CURLY_PARENTHESES = 297,
    OPEN_PARENTHESES = 298,
    CLOSE_PARENTHESES = 299,
    OPEN_BRACKETS = 300,
    CLOSE_BRACKETS = 301,
    CONSTANT = 302,
    T_CHAR = 303,
    T_INT = 304,
    T_STRING = 305,
    T_DECIMAL = 306,
    T_VOID = 307,
    END = 308
  };
#endif
/* Tokens.  */
#define ID 258
#define STRING 259
#define INT 260
#define CHAR 261
#define DECIMAL 262
#define MAIN 263
#define ELSE 264
#define RETURN 265
#define WHEN 266
#define DURING 267
#define REPEAT 268
#define DOT 269
#define PRINTF 270
#define READ 271
#define ASSIGN 272
#define SUM_ASSIGN 273
#define SUB_ASSIGN 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define OP_ASSIGN 277
#define MOD_ASSIGN 278
#define LEQ_THAN 279
#define GEQ_THAN 280
#define EQUAL 281
#define NOT_EQUAL 282
#define LESS_THAN 283
#define GREATER_THAN 284
#define AND 285
#define OR 286
#define NOT 287
#define SUM 288
#define SUB 289
#define MULT 290
#define DIV 291
#define MOD 292
#define COLON 293
#define SEMICOLON 294
#define COMMA 295
#define OPEN_CURLY_PARENTHESES 296
#define CLOSE_CURLY_PARENTHESES 297
#define OPEN_PARENTHESES 298
#define CLOSE_PARENTHESES 299
#define OPEN_BRACKETS 300
#define CLOSE_BRACKETS 301
#define CONSTANT 302
#define T_CHAR 303
#define T_INT 304
#define T_STRING 305
#define T_DECIMAL 306
#define T_VOID 307
#define END 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "yacc.y" /* yacc.c:355  */

	struct Node * node;
	char * string;

#line 229 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "y.tab.c" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    46,    50,    54,    63,    67,    77,    88,
      90,    92,    94,    96,    99,   101,   105,   110,   114,   119,
     121,   125,   129,   133,   137,   141,   145,   149,   153,   156,
     160,   164,   172,   179,   185,   191,   197,   203,   209,   215,
     221,   227,   234,   239,   244,   250,   252,   254,   256,   258,
     260,   262,   265,   267,   269,   271,   273,   276,   281,   286,
     291,   296,   302,   308,   314,   320,   326,   329,   335,   339,
     343,   348,   359,   365,   376,   379,   390,   400,   403,   410,
     417,   422,   425,   427,   429,   431,   436,   440,   442,   444,
     446,   448,   450
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING", "INT", "CHAR", "DECIMAL",
  "MAIN", "ELSE", "RETURN", "WHEN", "DURING", "REPEAT", "DOT", "PRINTF",
  "READ", "ASSIGN", "SUM_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "OP_ASSIGN", "MOD_ASSIGN", "LEQ_THAN", "GEQ_THAN", "EQUAL", "NOT_EQUAL",
  "LESS_THAN", "GREATER_THAN", "AND", "OR", "NOT", "SUM", "SUB", "MULT",
  "DIV", "MOD", "COLON", "SEMICOLON", "COMMA", "OPEN_CURLY_PARENTHESES",
  "CLOSE_CURLY_PARENTHESES", "OPEN_PARENTHESES", "CLOSE_PARENTHESES",
  "OPEN_BRACKETS", "CLOSE_BRACKETS", "CONSTANT", "T_CHAR", "T_INT",
  "T_STRING", "T_DECIMAL", "T_VOID", "END", "$accept", "program",
  "sentence", "global", "main", "function", "type", "arguments", "arg",
  "var", "code", "lines", "line", "declare", "assign", "assval", "value",
  "call_function", "call_arguments", "return", "when", "else", "during",
  "condition", "expression", "compare", YY_NULLPTR
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
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -73

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-73)))

#define YYTABLE_NINF -45

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     164,   -73,    -3,   -73,   -73,   -73,     7,   173,   -73,   -73,
      10,   -19,   -73,   -73,   -73,    23,   -15,   -14,    -8,   173,
      -5,   173,    50,    17,   -73,    20,   113,    19,   -73,    55,
     173,    22,   132,    34,    35,    38,    44,    46,    88,    98,
      99,   100,    90,     3,    64,   -73,   113,    93,    94,    95,
      97,   -73,   -73,    72,   164,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,    51,   185,    71,   -73,   -73,   -73,   -73,
     193,   -73,   139,   139,   113,   190,    73,   101,   103,   110,
     117,   -73,   123,   112,   -73,   -73,   -73,   -73,   -73,   -73,
     113,   -73,    71,   -73,   -73,   -73,   150,   -73,   105,   116,
     -73,   136,   193,    16,    16,    16,    16,    16,   139,   139,
     108,   -73,   115,   118,   124,   -73,    65,    16,    81,    16,
     154,   152,   125,   -73,   -73,   -73,   -73,   -73,   -73,    16,
     -73,   190,   -25,   -25,   -73,   -73,   -73,   -73,   -13,   129,
     131,   161,   -73,    71,   -73,   -73,   193,    71,   -73,   -73,
     193,   -73,   204,   -73,   193,   -73,   139,   139,   113,   113,
     137,   -73,   193,   155,   158,   156,   162,   139,   -73,   -73,
     172,   -73,   159,    -7,   -73,   203,   175,   113,   -73,   139,
     189,   188,   -73,   192,   113,   194,   172,   -73
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    11,     9,    10,    12,    13,     0,     2,     4,     6,
       0,     0,     1,     9,     3,     0,     0,     0,     0,    14,
       0,    14,     0,     0,    15,    17,    19,     0,    18,     0,
       0,     0,    70,     0,     0,     0,     0,     0,    11,     9,
      10,    12,     0,     0,     0,    20,    22,     0,     0,     0,
       0,    28,    29,     0,     0,    16,    45,    46,    47,    48,
      49,    50,    51,     0,     0,    52,    69,    53,    55,    54,
      68,    56,     0,     0,    19,     0,     0,     0,     0,     0,
       0,    27,    30,     0,     7,    21,    23,    24,    25,    26,
      19,     5,    52,    83,    53,    63,    86,    56,     0,    66,
      43,    55,    42,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,    65,     0,     0,     0,     0,
       0,     0,     0,    89,    90,    87,    88,    91,    92,     0,
      62,     0,    57,    58,    59,    60,    61,    80,     0,     0,
       0,     0,    64,    41,    39,    40,    33,    38,    36,    37,
      35,    34,     0,     8,    85,    67,     0,     0,    19,    19,
       0,    32,    31,     0,     0,     0,     0,     0,    78,    79,
      74,    76,     0,     0,    71,     0,     0,    19,    75,     0,
       0,     0,    72,     0,    19,     0,    74,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -73,   -73,   -73,   180,   -73,   -73,     8,   214,   207,   -73,
     -65,   195,   -73,   -73,   -73,   -73,   -31,   -26,   -72,   -73,
     -73,    52,   -73,   -57,   -61,   -73
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    14,    43,    23,    24,    25,
      44,    45,    46,    47,    48,    64,    96,    71,    98,    50,
      51,   174,    52,   110,   111,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    70,    99,   114,   176,    11,    82,    12,    10,   113,
     105,   106,   107,    16,    99,    15,   112,   156,   157,    65,
      49,    67,    68,    69,    17,   122,    18,    22,    19,    22,
      20,    36,    37,   102,   177,    21,    26,    97,    22,    56,
      57,    58,    59,    60,    61,    62,    97,    97,    49,    97,
      83,   137,   138,    28,    92,    93,    94,    68,    69,   155,
      30,    29,    10,    53,    49,    63,    36,    37,   143,    54,
      99,   144,   132,   133,   134,   135,   136,    72,    73,    74,
      36,    37,    97,    97,   147,   148,   146,    75,   150,    76,
     145,    77,   149,   165,   166,    95,    36,    37,   154,   163,
     164,    78,    79,    80,    81,    97,    84,    86,    87,    88,
     172,    89,   180,    90,    63,   121,    31,   115,   116,   185,
     117,   162,   181,    32,    33,    34,    35,   118,    36,    37,
      97,    97,    49,    49,   119,    65,    66,    67,    68,    69,
     120,    97,    92,    93,    94,    68,    69,    36,    37,   130,
     -44,    49,   139,    97,    36,    37,   131,   151,    49,   140,
     141,    38,    39,    40,    41,     5,    42,   153,   142,   152,
     158,   108,   159,   160,   123,   124,   125,   126,   127,   128,
     167,   173,   109,   103,   104,   105,   106,   107,    65,   100,
      67,   101,    69,    92,    93,    94,    68,    69,   170,   168,
      36,    37,   169,   175,   171,    36,    37,    65,   161,    67,
      68,    69,     1,     2,     3,     4,     5,   178,   179,    36,
      37,     1,    13,     3,     4,     5,   103,   104,   105,   106,
     107,   182,   183,   184,    91,    27,   186,    55,   187,     0,
       0,    85
};

static const yytype_int16 yycheck[] =
{
      26,    32,    63,    75,    11,     8,     3,     0,     0,    74,
      35,    36,    37,     3,    75,     7,    73,    30,    31,     3,
      46,     5,     6,     7,    43,    90,     3,    19,    43,    21,
      44,    15,    16,    64,    41,    43,    41,    63,    30,    17,
      18,    19,    20,    21,    22,    23,    72,    73,    74,    75,
      47,   108,   109,     3,     3,     4,     5,     6,     7,   131,
      40,    44,    54,    44,    90,    43,    15,    16,     3,    14,
     131,     6,   103,   104,   105,   106,   107,    43,    43,    41,
      15,    16,   108,   109,     3,     4,   117,    43,   119,    43,
     116,     3,   118,   158,   159,    44,    15,    16,   129,   156,
     157,     3,     3,     3,    14,   131,    42,    14,    14,    14,
     167,    14,   177,    41,    43,     3,     3,    44,    17,   184,
      17,   152,   179,    10,    11,    12,    13,    17,    15,    16,
     156,   157,   158,   159,    17,     3,     4,     5,     6,     7,
      17,   167,     3,     4,     5,     6,     7,    15,    16,    44,
      14,   177,    44,   179,    15,    16,    40,     3,   184,    44,
      42,    48,    49,    50,    51,    52,    53,    42,    44,    17,
      41,    32,    41,    12,    24,    25,    26,    27,    28,    29,
      43,     9,    43,    33,    34,    35,    36,    37,     3,     4,
       5,     6,     7,     3,     4,     5,     6,     7,    42,    44,
      15,    16,    44,    44,    42,    15,    16,     3,     4,     5,
       6,     7,    48,    49,    50,    51,    52,    14,    43,    15,
      16,    48,    49,    50,    51,    52,    33,    34,    35,    36,
      37,    42,    44,    41,    54,    21,    42,    30,   186,    -1,
      -1,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,    49,    50,    51,    52,    55,    56,    57,    58,
      60,     8,     0,    49,    59,    60,     3,    43,     3,    43,
      44,    43,    60,    61,    62,    63,    41,    61,     3,    44,
      40,     3,    10,    11,    12,    13,    15,    16,    48,    49,
      50,    51,    53,    60,    64,    65,    66,    67,    68,    71,
      73,    74,    76,    44,    14,    62,    17,    18,    19,    20,
      21,    22,    23,    43,    69,     3,     4,     5,     6,     7,
      70,    71,    43,    43,    41,    43,    43,     3,     3,     3,
       3,    14,     3,    47,    42,    65,    14,    14,    14,    14,
      41,    57,     3,     4,     5,    44,    70,    71,    72,    78,
       4,     6,    70,    33,    34,    35,    36,    37,    32,    43,
      77,    78,    77,    64,    72,    44,    17,    17,    17,    17,
      17,     3,    64,    24,    25,    26,    27,    28,    29,    79,
      44,    40,    70,    70,    70,    70,    70,    77,    77,    44,
      44,    42,    44,     3,     6,    71,    70,     3,     4,    71,
      70,     3,    17,    42,    70,    72,    30,    31,    41,    41,
      12,     4,    70,    77,    77,    64,    64,    43,    44,    44,
      42,    42,    77,     9,    75,    44,    11,    41,    14,    43,
      64,    77,    42,    44,    41,    64,    42,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    59,    60,
      60,    60,    60,    60,    61,    61,    62,    62,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    72,    72,    73,    73,
      73,    74,    75,    75,    75,    76,    76,    77,    77,    77,
      77,    78,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     7,     1,     7,     8,     1,
       1,     1,     1,     1,     0,     1,     3,     1,     2,     0,
       1,     2,     1,     2,     2,     2,     2,     2,     1,     1,
       2,     5,     5,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     4,     3,     4,     3,     1,     3,     2,     2,
       1,     8,     4,     9,     0,     9,     7,     1,     5,     5,
       2,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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

  return yystpcpy (yyres, yystr) - yyres;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 41 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);;
	 																		printHeaders();
																		 	printTree((yyval.node));
																		}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("sentence");
	 																		append((yyval.node), (yyvsp[-1].node));
	 																		append((yyval.node), (yyvsp[0].node));
																		}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 50 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("sentence");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 54 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("global");
																			append((yyval.node), (yyvsp[-6].node));
																			append((yyval.node), newNodeWithValue((yyvsp[-5].string), idN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append((yyval.node), (yyvsp[-3].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																			append((yyval.node), newNodeWithValue(NULL, dotN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("global");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("main");
      																			append((yyval.node), newNodeWithValue(NULL, tintN));
      																			append((yyval.node), newNodeWithValue(NULL, mainN));
																			append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
      																			append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																			append((yyval.node), newNodeWithValue(NULL, opCurlyN));
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, clCurlyN));
																		}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("function");
																			append((yyval.node), (yyvsp[-7].node));
																			append((yyval.node), newNodeWithValue((yyvsp[-6].string), idN));
																			append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
																			append((yyval.node), (yyvsp[-4].node));
																			append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																			append((yyval.node), newNodeWithValue(NULL, opCurlyN));
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, clCurlyN));
																		}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, tintN);
																		}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 90 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL,tstringN);
																		}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, tcharN);
																		}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 94 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, tdecimalN);
																		}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 96 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, tvoidN);
																		}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 99 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;
	  																	}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 101 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("argumentss");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 105 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("arg");
     																			append((yyval.node), (yyvsp[-2].node));
     																			append((yyval.node), newNodeWithValue(NULL, commaN));
																			append((yyval.node), (yyvsp[0].node));
     																		}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 110 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("arg");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 114 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("var");
     																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue((yyvsp[0].string), idN));
																		}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;
      																		}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 121 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("code");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 125 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("lines");
       																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 129 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("lines");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 133 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("line");
      																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, dotN));
																		}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 137 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("line");
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, dotN));
																		}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 141 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("line");
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, dotN));
																		}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 145 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("line");
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, dotN));
																		}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 149 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("line");
																			append((yyval.node), newNodeWithValue(NULL, endN));
																			append((yyval.node), newNodeWithValue(NULL, dotN));
																		}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 153 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("line");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 156 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("line");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 160 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue((yyvsp[0].string), idN));
																		}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 164 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), (yyvsp[-4].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, constantN));
                                                                                                                                                        append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, assignN));
                                                                                                                                                        append((yyval.node), (yyvsp[0].node));

																		}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 172 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
                                                                                                                                                        append((yyval.node), (yyvsp[-4].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, constantN));
                                                                                                                                                        append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, assignN));
                                                                                                                                                        append((yyval.node), newNodeWithValue((yyvsp[0].string),stringN));
																		}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 179 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), newNodeWithValue(NULL, tintN));
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
																			append((yyval.node), newNodeWithValue(NULL, assignN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 185 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), (yyvsp[-3].node));
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
																			append((yyval.node), newNodeWithValue(NULL, assignN));
																			append((yyval.node), newNodeWithValue((yyvsp[0].string), idN));
																		}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 191 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), newNodeWithValue(NULL, tdecimalN));
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
																			append((yyval.node), newNodeWithValue(NULL, assignN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 197 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), newNodeWithValue(NULL, tstringN));
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
																			append((yyval.node), newNodeWithValue(NULL, assignN));
																			append((yyval.node), newNodeWithValue((yyvsp[0].string), stringN));
																		}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 203 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), newNodeWithValue(NULL, tstringN));
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
																			append((yyval.node), newNodeWithValue(NULL, assignN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 209 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), newNodeWithValue(NULL, tstringN));
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, assignN));
                                                                                                                                                        append((yyval.node), newNodeWithValue((yyvsp[0].string), idN));
																		}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 215 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), newNodeWithValue(NULL, tcharN));
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, assignN));
																			append((yyval.node), newNodeWithValue((yyvsp[0].string), charN));
																		}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 221 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), newNodeWithValue(NULL, tcharN));
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string),idN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, assignN));
                                                                                                                                                        append((yyval.node), (yyvsp[0].node));
																		}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 227 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("declare");
																			append((yyval.node), newNodeWithValue(NULL, tcharN));
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string),idN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, assignN));
                                                                                                                                                        append((yyval.node), newNodeWithValue((yyvsp[0].string), idN));
																		}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 234 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("assign");
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 239 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("assign");
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
                                                                                                                                                        append((yyval.node), (yyvsp[-1].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue((yyvsp[0].string), stringN));
																		}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 244 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("assign");
																			append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
                                                                                                                                                        append((yyval.node), (yyvsp[-1].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue((yyvsp[0].string), charN));
																		}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 250 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, assignN);
																		}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 252 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, sumAssignN);
																		}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 254 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, subAssignN);
																		}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 256 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, mulAssignN);
																		}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 258 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, divAssignN);
																		}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 260 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, opAssignN);
																		}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 262 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, modAssignN);
																		}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 265 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue((yyvsp[0].string), idN);
       																		}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 267 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue((yyvsp[0].string), intN);
																		}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 269 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue((yyvsp[0].string), decimalN);
																		}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 271 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue((yyvsp[0].string), charN);
																		}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 273 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("value");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 276 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("value");
																			append((yyval.node), (yyvsp[-2].node));
																			append((yyval.node), newNodeWithValue(NULL, sumN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 281 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("value");
                                                                                                                                                        append((yyval.node), (yyvsp[-2].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, subN));
                                                                                                                                                        append((yyval.node), (yyvsp[0].node));
																		}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 286 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("value");
                                                                                                                                                        append((yyval.node), (yyvsp[-2].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, multN));
                                                                                                                                                        append((yyval.node), (yyvsp[0].node));
																		}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 291 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("value");
                                                                                                                                                        append((yyval.node), (yyvsp[-2].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, divN));
                                                                                                                                                        append((yyval.node), (yyvsp[0].node));
																		}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 296 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("value");
                                                                                                                                                        append((yyval.node), (yyvsp[-2].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, modN));
                                                                                                                                                        append((yyval.node), (yyvsp[0].node));
																		}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 302 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("call_function");
		      																	append((yyval.node), newNodeWithValue((yyvsp[-3].string), idN));
																			append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																		}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 308 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("call_function");
                                                                                                                                                        append((yyval.node), newNodeWithValue((yyvsp[-2].string), idN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, clParenthesesN));

																		}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 314 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("call_function");
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, printfN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append((yyval.node), (yyvsp[-1].node));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																		}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 320 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("call_function");
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, readN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																		}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 326 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("call_arguments");
	       																		append((yyval.node), (yyvsp[0].node));
																		}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 329 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("call_arguments");
																			append((yyval.node), (yyvsp[-2].node));
																			append((yyval.node), newNodeWithValue(NULL, commaN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 335 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("return");
																			append((yyval.node), newNodeWithValue(NULL, returnN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 339 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("return");
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, returnN));
                                                                                                                                                        append((yyval.node), newNodeWithValue((yyvsp[0].string), stringN));
																		}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 343 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("return");
																			append((yyval.node), newNodeWithValue(NULL, returnN));

																		}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 348 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("when");
      																			append((yyval.node), newNodeWithValue(NULL, whenN));
                                                                                                                                                        append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append((yyval.node), (yyvsp[-5].node));
																			append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																			append((yyval.node), newNodeWithValue(NULL, opCurlyN));
																			append((yyval.node), (yyvsp[-2].node));
																			append((yyval.node), newNodeWithValue(NULL, clCurlyN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 359 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("else");
	  																		append((yyval.node), newNodeWithValue(NULL, elseN));
																			append((yyval.node), newNodeWithValue(NULL, opCurlyN));
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, clCurlyN));
	  																	}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 365 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("else");
																			append((yyval.node), newNodeWithValue(NULL, elseN));
																			append((yyval.node), newNodeWithValue(NULL, whenN));
																			append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
																			append((yyval.node), (yyvsp[-5].node));
																			append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																			append((yyval.node), newNodeWithValue(NULL, opCurlyN));
																			append((yyval.node), (yyvsp[-2].node));
																			append((yyval.node), newNodeWithValue(NULL, clCurlyN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 376 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;
																		}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 379 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("during");
																			append((yyval.node), newNodeWithValue(NULL, repeatN));
																			append((yyval.node), newNodeWithValue(NULL, opCurlyN));
																			append((yyval.node), (yyvsp[-6].node));
																			append((yyval.node), newNodeWithValue(NULL, clCurlyN));
																			append((yyval.node), newNodeWithValue(NULL, duringN));
																			append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
																			append((yyval.node), (yyvsp[-2].node));
																			append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																			append((yyval.node), newNodeWithValue(NULL, dotN));
																		}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 390 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("during");
																			append((yyval.node), newNodeWithValue(NULL, duringN));
																			append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
																			append((yyval.node), (yyvsp[-4].node));
																			append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																			append((yyval.node), newNodeWithValue(NULL, opCurlyN));
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, clCurlyN));
																		}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 400 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("condition");
	  																		append((yyval.node), (yyvsp[0].node));
																		}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 403 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("condition");
																			append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
																			append((yyval.node), (yyvsp[-3].node));
																			append((yyval.node), newNodeWithValue(NULL, andN));
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																		}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 410 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("condition");
																			append((yyval.node), newNodeWithValue(NULL, opParenthesesN));
																			append((yyval.node), (yyvsp[-3].node));
																			append((yyval.node), newNodeWithValue(NULL, orN));
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNodeWithValue(NULL, clParenthesesN));
																		}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 417 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("condition");
																			append((yyval.node), newNodeWithValue(NULL, notN));
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 422 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("expression");
	   																		append((yyval.node), (yyvsp[0].node));
																		}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 425 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue((yyvsp[0].string), intN);
																		}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 427 "yacc.y" /* yacc.c:1646  */
    { 	(yyval.node) = newNodeWithValue((yyvsp[0].string), stringN);
																		}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 429 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue((yyvsp[0].string), idN);
																		}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 431 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("expression");
																			append((yyval.node),(yyvsp[-2].node));
																			append((yyval.node),(yyvsp[-1].node));
																			append((yyval.node),(yyvsp[0].node));
																		}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 436 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode("expression");
																			append((yyval.node), (yyvsp[0].node));
																		}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 440 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, equalN);
																		}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 442 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, notEqualN);
																		}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 444 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, leqN);
																		}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 446 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, geqN);
																		}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 448 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, lessN);
																		}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 450 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNodeWithValue(NULL, greaterN);
																		}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2305 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 455 "yacc.y" /* yacc.c:1906  */


int main(){
	yyparse();
	return 0;
}

void yyerror(char * s){
	fprintf(stderr, "%s\n", s);
	return;
}
