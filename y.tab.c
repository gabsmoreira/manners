/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     PTR_OP = 262,
     INC_OP = 263,
     DEC_OP = 264,
     LEFT_OP = 265,
     RIGHT_OP = 266,
     LE_OP = 267,
     GE_OP = 268,
     EQ_OP = 269,
     NE_OP = 270,
     AND_OP = 271,
     OR_OP = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     TYPE_NAME = 283,
     TYPEDEF = 284,
     EXTERN = 285,
     STATIC = 286,
     AUTO = 287,
     REGISTER = 288,
     INLINE = 289,
     RESTRICT = 290,
     CHAR = 291,
     SHORT = 292,
     INT = 293,
     LONG = 294,
     SIGNED = 295,
     UNSIGNED = 296,
     FLOAT = 297,
     DOUBLE = 298,
     CONST = 299,
     VOLATILE = 300,
     VOID = 301,
     BOOL = 302,
     COMPLEX = 303,
     IMAGINARY = 304,
     STRUCT = 305,
     UNION = 306,
     ENUM = 307,
     ELLIPSIS = 308,
     CASE = 309,
     DEFAULT = 310,
     IF = 311,
     ELSE = 312,
     SWITCH = 313,
     WHILE = 314,
     DO = 315,
     FOR = 316,
     GOTO = 317,
     CONTINUE = 318,
     BREAK = 319,
     RETURN = 320,
     PLEASE = 321,
     STORE = 322,
     COULD = 323,
     YOU = 324,
     THE = 325,
     FOLLOWING = 326,
     CONDITION = 327,
     COMPUTER = 328,
     FUNCTION = 329,
     CALLED = 330,
     WILL = 331,
     RECEIVE = 332,
     AND = 333,
     WHENEVER = 334,
     I = 335,
     CALL = 336,
     TRUE = 337,
     THIS = 338,
     IT = 339,
     IS = 340
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define INLINE 289
#define RESTRICT 290
#define CHAR 291
#define SHORT 292
#define INT 293
#define LONG 294
#define SIGNED 295
#define UNSIGNED 296
#define FLOAT 297
#define DOUBLE 298
#define CONST 299
#define VOLATILE 300
#define VOID 301
#define BOOL 302
#define COMPLEX 303
#define IMAGINARY 304
#define STRUCT 305
#define UNION 306
#define ENUM 307
#define ELLIPSIS 308
#define CASE 309
#define DEFAULT 310
#define IF 311
#define ELSE 312
#define SWITCH 313
#define WHILE 314
#define DO 315
#define FOR 316
#define GOTO 317
#define CONTINUE 318
#define BREAK 319
#define RETURN 320
#define PLEASE 321
#define STORE 322
#define COULD 323
#define YOU 324
#define THE 325
#define FOLLOWING 326
#define CONDITION 327
#define COMPUTER 328
#define FUNCTION 329
#define CALLED 330
#define WILL 331
#define RECEIVE 332
#define AND 333
#define WHENEVER 334
#define I 335
#define CALL 336
#define TRUE 337
#define THIS 338
#define IT 339
#define IS 340




/* Copy the first part of user declarations.  */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 277 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1629

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  241
/* YYNRULES -- Number of states.  */
#define YYNSTATES  453

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,     2,     2,     2,   101,    94,     2,
      86,    87,    95,    96,    93,    97,    90,   100,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   107,   109,
     102,   108,   103,   106,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,   104,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,   105,    92,    98,     2,     2,     2,
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
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    50,    58,    60,    64,    66,
      69,    72,    75,    78,    83,    85,    87,    89,    91,    93,
      95,    97,   102,   104,   108,   112,   116,   118,   122,   126,
     128,   132,   136,   138,   142,   146,   150,   154,   156,   160,
     164,   166,   170,   172,   176,   178,   182,   184,   188,   190,
     194,   196,   202,   204,   208,   210,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   236,   238,   241,
     245,   247,   250,   252,   255,   257,   260,   262,   265,   267,
     271,   273,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   323,   328,   331,   333,   335,   337,   340,
     344,   347,   349,   352,   354,   356,   360,   362,   365,   369,
     374,   380,   386,   393,   396,   398,   402,   404,   408,   410,
     412,   414,   416,   419,   421,   423,   427,   433,   438,   443,
     450,   457,   463,   468,   472,   477,   482,   486,   488,   491,
     494,   498,   500,   503,   505,   509,   511,   515,   518,   521,
     523,   525,   529,   531,   534,   536,   538,   541,   545,   548,
     552,   556,   561,   565,   570,   573,   577,   581,   586,   588,
     592,   597,   599,   602,   606,   611,   614,   616,   619,   623,
     626,   628,   630,   632,   634,   636,   638,   642,   647,   651,
     654,   658,   660,   663,   665,   667,   669,   672,   678,   694,
     702,   708,   714,   730,   738,   745,   753,   760,   768,   772,
     775,   778,   781,   785,   787,   790,   792,   794,   799,   823,
     827,   829
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     175,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    86,
     130,    87,    -1,   111,    -1,   112,    88,   130,    89,    -1,
     112,    86,    87,    -1,   112,    86,   113,    87,    -1,   112,
      90,     3,    -1,   112,     7,     3,    -1,   112,     8,    -1,
     112,     9,    -1,    86,   158,    87,    91,   162,    92,    -1,
      86,   158,    87,    91,   162,    93,    92,    -1,   128,    -1,
     113,    93,   128,    -1,   112,    -1,     8,   114,    -1,     9,
     114,    -1,   115,   116,    -1,     6,   114,    -1,     6,    86,
     158,    87,    -1,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,    98,    -1,    99,    -1,   114,    -1,    86,   158,    87,
     116,    -1,   116,    -1,   117,    95,   116,    -1,   117,   100,
     116,    -1,   117,   101,   116,    -1,   117,    -1,   118,    96,
     117,    -1,   118,    97,   117,    -1,   118,    -1,   119,    10,
     118,    -1,   119,    11,   118,    -1,   119,    -1,   120,   102,
     119,    -1,   120,   103,   119,    -1,   120,    12,   119,    -1,
     120,    13,   119,    -1,   120,    -1,   121,    14,   120,    -1,
     121,    15,   120,    -1,   121,    -1,   122,    94,   121,    -1,
     122,    -1,   123,   104,   122,    -1,   123,    -1,   124,   105,
     123,    -1,   124,    -1,   125,    16,   124,    -1,   125,    -1,
     126,    17,   125,    -1,   126,    -1,   126,   106,   130,   107,
     127,    -1,   127,    -1,   114,   129,   128,    -1,   108,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
     128,    -1,   130,    93,   128,    -1,   127,    -1,   133,   109,
      -1,   133,   134,   109,    -1,   136,    -1,   136,   133,    -1,
     137,    -1,   137,   133,    -1,   148,    -1,   148,   133,    -1,
     149,    -1,   149,   133,    -1,   135,    -1,   134,    93,   135,
      -1,   150,    -1,   150,   108,   161,    -1,    29,    -1,    30,
      -1,    31,    -1,    32,    -1,    33,    -1,    46,    -1,    36,
      -1,    37,    -1,    38,    -1,    39,    -1,    42,    -1,    43,
      -1,    40,    -1,    41,    -1,    47,    -1,    48,    -1,    49,
      -1,   138,    -1,   145,    -1,    28,    -1,   139,     3,    91,
     140,    92,    -1,   139,    91,   140,    92,    -1,   139,     3,
      -1,    50,    -1,    51,    -1,   141,    -1,   140,   141,    -1,
     142,   143,   109,    -1,   137,   142,    -1,   137,    -1,   148,
     142,    -1,   148,    -1,   144,    -1,   143,    93,   144,    -1,
     150,    -1,   107,   131,    -1,   150,   107,   131,    -1,    52,
      91,   146,    92,    -1,    52,     3,    91,   146,    92,    -1,
      52,    91,   146,    93,    92,    -1,    52,     3,    91,   146,
      93,    92,    -1,    52,     3,    -1,   147,    -1,   146,    93,
     147,    -1,     3,    -1,     3,   108,   131,    -1,    44,    -1,
      35,    -1,    45,    -1,    34,    -1,   152,   151,    -1,   151,
      -1,     3,    -1,    86,   150,    87,    -1,   151,    88,   153,
     128,    89,    -1,   151,    88,   153,    89,    -1,   151,    88,
     128,    89,    -1,   151,    88,    31,   153,   128,    89,    -1,
     151,    88,   153,    31,   128,    89,    -1,   151,    88,   153,
      95,    89,    -1,   151,    88,    95,    89,    -1,   151,    88,
      89,    -1,   151,    86,   154,    87,    -1,   151,    86,   157,
      87,    -1,   151,    86,    87,    -1,    95,    -1,    95,   153,
      -1,    95,   152,    -1,    95,   153,   152,    -1,   148,    -1,
     153,   148,    -1,   155,    -1,   155,    93,    53,    -1,   156,
      -1,   155,    93,   156,    -1,   133,   150,    -1,   133,   159,
      -1,   133,    -1,     3,    -1,   157,    93,     3,    -1,   142,
      -1,   142,   159,    -1,   152,    -1,   160,    -1,   152,   160,
      -1,    86,   159,    87,    -1,    88,    89,    -1,    88,   128,
      89,    -1,   160,    88,    89,    -1,   160,    88,   128,    89,
      -1,    88,    95,    89,    -1,   160,    88,    95,    89,    -1,
      86,    87,    -1,    86,   154,    87,    -1,   160,    86,    87,
      -1,   160,    86,   154,    87,    -1,   128,    -1,    91,   162,
      92,    -1,    91,   162,    93,    92,    -1,   161,    -1,   163,
     161,    -1,   162,    93,   161,    -1,   162,    93,   163,   161,
      -1,   164,   108,    -1,   165,    -1,   164,   165,    -1,    88,
     131,    89,    -1,    90,     3,    -1,   167,    -1,   168,    -1,
     171,    -1,   172,    -1,   173,    -1,   174,    -1,     3,   107,
     166,    -1,    54,   131,   107,   166,    -1,    55,   107,   166,
      -1,    91,    92,    -1,    91,   169,    92,    -1,   170,    -1,
     169,   170,    -1,   132,    -1,   166,    -1,   109,    -1,   130,
     109,    -1,    56,    86,   130,    87,   166,    -1,    66,    60,
      83,   166,    56,    70,    71,    72,    85,    82,    86,   130,
      87,    57,   166,    -1,    56,    86,   130,    87,   166,    57,
     166,    -1,    58,    86,   130,    87,   166,    -1,    59,    86,
     130,    87,   166,    -1,    68,    69,    66,    60,   166,    59,
      70,    71,    72,    85,    82,    86,   130,    87,   106,    -1,
      60,   166,    59,    86,   130,    87,   109,    -1,    61,    86,
     171,   171,    87,   166,    -1,    61,    86,   171,   171,   130,
      87,   166,    -1,    61,    86,   132,   171,    87,   166,    -1,
      61,    86,   132,   171,   130,    87,   166,    -1,    62,     3,
     109,    -1,    63,   109,    -1,    64,   109,    -1,    65,   109,
      -1,    65,   130,   109,    -1,   176,    -1,   175,   176,    -1,
     177,    -1,   132,    -1,   133,   150,   178,   168,    -1,    73,
      93,    70,    74,    75,   150,    76,    77,   178,    78,    65,
     133,    93,    79,    80,    81,    84,    93,    66,    60,    86,
     168,    87,    -1,   133,   150,   168,    -1,   132,    -1,   178,
     132,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    22,    22,    23,    24,    25,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    42,    43,    47,    48,
      49,    50,    51,    52,    56,    57,    58,    59,    60,    61,
      65,    66,    70,    71,    72,    73,    77,    78,    79,    83,
      84,    85,    89,    90,    91,    92,    93,    97,    98,    99,
     103,   104,   108,   109,   113,   114,   118,   119,   123,   124,
     128,   129,   133,   134,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   152,   153,   157,   161,   162,
     166,   167,   168,   169,   170,   171,   172,   173,   177,   178,
     182,   183,   187,   188,   189,   190,   191,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   213,   214,   215,   219,   220,   224,   225,   229,
     233,   234,   235,   236,   240,   241,   245,   246,   247,   251,
     252,   253,   254,   255,   259,   260,   264,   265,   269,   270,
     271,   275,   279,   280,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   301,   302,   303,
     304,   308,   309,   314,   315,   319,   320,   324,   325,   326,
     330,   331,   335,   336,   340,   341,   342,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   360,   361,
     362,   366,   367,   368,   369,   373,   377,   378,   382,   383,
     387,   388,   389,   390,   391,   392,   396,   397,   398,   402,
     403,   407,   408,   412,   413,   417,   418,   422,   423,   424,
     425,   429,   430,   431,   432,   433,   434,   435,   439,   440,
     441,   442,   443,   447,   448,   452,   453,   457,   458,   459,
     463,   464
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE",
  "RESTRICT", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "BOOL", "COMPLEX",
  "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT",
  "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE",
  "BREAK", "RETURN", "PLEASE", "STORE", "COULD", "YOU", "THE", "FOLLOWING",
  "CONDITION", "COMPUTER", "FUNCTION", "CALLED", "WILL", "RECEIVE", "AND",
  "WHENEVER", "I", "CALL", "TRUE", "THIS", "IT", "IS", "'('", "')'", "'['",
  "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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
     335,   336,   337,   338,   339,   340,    40,    41,    91,    93,
      46,   123,   125,    44,    38,    42,    43,    45,   126,    33,
      47,    37,    60,    62,    94,   124,    63,    58,    61,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   119,   120,   120,   120,   120,   120,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   130,   130,   131,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   134,
     135,   135,   136,   136,   136,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   139,   139,   140,   140,   141,
     142,   142,   142,   142,   143,   143,   144,   144,   144,   145,
     145,   145,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   149,   150,   150,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   152,   152,   152,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   156,
     157,   157,   158,   158,   159,   159,   159,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   161,   161,
     161,   162,   162,   162,   162,   163,   164,   164,   165,   165,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   172,   172,
     172,   173,   173,   173,   173,   173,   173,   173,   174,   174,
     174,   174,   174,   175,   175,   176,   176,   177,   177,   177,
     178,   178
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     4,     2,     1,     1,     1,     2,     3,
       2,     1,     2,     1,     1,     3,     1,     2,     3,     4,
       5,     5,     6,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     6,
       6,     5,     4,     3,     4,     4,     3,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     3,     4,     2,     3,     3,     4,     1,     3,
       4,     1,     2,     3,     4,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     5,    15,     7,
       5,     5,    15,     7,     6,     7,     6,     7,     3,     2,
       2,     2,     3,     1,     2,     1,     1,     4,    23,     3,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   111,    92,    93,    94,    95,    96,   141,   139,    98,
      99,   100,   101,   104,   105,   102,   103,   138,   140,    97,
     106,   107,   108,   115,   116,     0,     0,   236,     0,    80,
      82,   109,     0,   110,    84,    86,     0,   233,   235,   133,
       0,     0,   144,     0,   157,    78,     0,    88,    90,   143,
       0,    81,    83,   114,     0,    85,    87,     1,   234,     0,
     136,     0,   134,     0,     0,   161,   159,   158,     0,    79,
       0,     0,   240,     0,   239,     0,     0,     0,   142,     0,
     121,     0,   117,     0,   123,     0,     0,   129,     0,     0,
     145,   162,   160,    89,    90,     2,     3,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209,    24,    25,    26,    27,
      28,    29,   215,     6,    18,    30,     0,    32,    36,    39,
      42,    47,    50,    52,    54,    56,    58,    60,    62,    75,
       0,   213,   214,   200,   201,     0,   211,   202,   203,   204,
     205,     2,     0,   188,    91,   241,   237,   170,   156,   169,
       0,   163,   165,     0,     0,   153,    25,     0,     0,     0,
     120,   113,   118,     0,     0,   124,   126,   122,   130,     0,
      30,    77,   137,   131,   135,     0,     0,     0,    22,     0,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
     229,   230,   231,     0,     0,     0,     0,   172,     0,     0,
      12,    13,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    64,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   210,
     212,     0,     0,   191,     0,     0,     0,   196,     0,     0,
     167,   174,   168,   175,   154,     0,   155,     0,     0,   152,
     148,     0,   147,    25,     0,   112,   127,     0,   119,     0,
     132,     0,   206,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,   228,   232,     0,     0,     5,     0,   174,
     173,     0,    11,     8,     0,    16,     0,    10,    63,    33,
      34,    35,    37,    38,    40,    41,    45,    46,    43,    44,
      48,    49,    51,    53,    55,    57,    59,     0,    76,     0,
     199,   189,     0,   192,   195,   197,   184,     0,     0,   178,
      25,     0,   176,     0,     0,   164,   166,   171,     0,     0,
     151,   146,   125,   128,     0,    23,     0,   207,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     9,     0,
       7,     0,   198,   190,   193,     0,   185,   177,   182,   179,
     186,     0,   180,    25,     0,   149,   150,     0,   217,   220,
     221,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      61,   194,   187,   183,   181,     0,     0,     0,   226,     0,
     224,     0,     0,     0,    14,     0,     0,   219,   223,   227,
     225,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   222,     0,     0,
       0,     0,   238
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   123,   124,   304,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   226,
     140,   182,    27,    73,    46,    47,    29,    30,    31,    32,
      81,    82,    83,   174,   175,    33,    61,    62,    34,    35,
      64,    49,    50,    67,   337,   161,   162,   163,   208,   338,
     263,   253,   254,   255,   256,   257,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    36,    37,    38,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -264
static const yytype_int16 yypact[] =
{
    1505,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,    20,   -16,  -264,    17,  1577,
    1577,  -264,    30,  -264,  1577,  1577,  1254,  -264,  -264,   -45,
     102,    43,  -264,    50,    12,  -264,   -25,  -264,  1173,    83,
      46,  -264,  -264,    33,  1201,  -264,  -264,  -264,  -264,   102,
      -8,   160,  -264,    57,    81,  -264,  -264,    12,    50,  -264,
     401,   821,  -264,    17,  -264,  1390,  1148,   382,    83,  1201,
    1201,  1325,  -264,    28,  1201,   185,   954,  -264,     9,   104,
    -264,  -264,  -264,  -264,    85,    91,  -264,  -264,  1003,  1051,
    1051,   954,    98,   133,   155,   230,   611,   235,   205,   158,
     220,   242,   270,   265,   708,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,    63,   191,   954,  -264,    61,   -34,
      56,    31,   298,   241,   238,   240,   332,     2,  -264,  -264,
      66,  -264,  -264,  -264,  -264,   498,  -264,  -264,  -264,  -264,
    -264,  -264,   778,  -264,  -264,  -264,  -264,  -264,  -264,    34,
     262,   257,  -264,     3,    29,  -264,   263,   264,   764,  1361,
    -264,  -264,  -264,   954,    71,  -264,   248,  -264,  -264,    36,
    -264,  -264,  -264,  -264,  -264,    50,   611,   708,  -264,   708,
    -264,  -264,   249,   611,   954,   954,   954,   299,   595,   250,
    -264,  -264,  -264,    72,   274,   294,   107,    97,   276,   362,
    -264,  -264,   878,   954,   364,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,   954,  -264,   954,   954,
     954,   954,   954,   954,   954,   954,   954,   954,   954,   954,
     954,   954,   954,   954,   954,   954,   954,   954,  -264,  -264,
    -264,   954,   365,  -264,   222,   821,   -30,  -264,  1075,   892,
    -264,    58,  -264,    96,  -264,  1551,  -264,   366,   835,  -264,
    -264,   954,  -264,   281,   282,  -264,  -264,    28,  -264,   954,
    -264,   296,  -264,   286,   293,   611,  -264,   108,   110,   156,
     295,   280,   280,  -264,  -264,   611,   322,  -264,  1300,   154,
    -264,   919,  -264,  -264,   173,  -264,    65,  -264,  -264,  -264,
    -264,  -264,    61,    61,   -34,   -34,    56,    56,    56,    56,
      31,    31,   298,   241,   238,   240,   332,   -12,  -264,   303,
    -264,  -264,   564,  -264,  -264,  -264,  -264,   297,   306,  -264,
     305,   307,    96,  1426,   933,  -264,  -264,  -264,   308,   309,
    -264,  -264,  -264,  -264,   318,   292,   292,  -264,   611,   611,
     611,   954,   947,   989,   343,   611,   778,  -264,  -264,   954,
    -264,   954,  -264,  -264,  -264,   821,  -264,  -264,  -264,  -264,
    -264,   313,  -264,   312,   319,  -264,  -264,  1577,   345,  -264,
    -264,   181,   611,   194,   611,   208,   341,   353,   226,  -264,
    -264,  -264,  -264,  -264,  -264,  1454,   611,   310,  -264,   611,
    -264,   611,   344,   346,  -264,   724,   349,  -264,  -264,  -264,
    -264,   348,   347,  -264,  1577,   336,   350,   330,   372,   340,
     379,   342,   388,   392,   954,   387,   393,   215,   954,   391,
     425,   217,   390,   611,   378,   419,  -264,  -264,   426,   402,
     398,   403,  -264
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -264,  -264,  -264,  -264,    -7,  -264,  -112,    92,    99,    55,
      86,   253,   266,   268,   247,   260,  -264,   -75,   -69,  -264,
    -107,   -88,   -43,     0,  -264,   441,  -264,   -39,  -264,  -264,
     433,   -27,   -62,  -264,   236,  -264,   455,   -64,    93,  -264,
     -18,   -41,   -19,   -26,   -70,  -264,   251,  -264,   122,  -121,
    -240,   -68,   149,  -263,  -264,   261,   -89,  -264,   -47,  -264,
     373,  -182,  -264,  -264,  -264,  -264,   483,  -264,   134
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      28,    74,   153,   154,   203,    72,   160,   206,   167,    78,
      48,   181,    60,   192,   227,    80,   292,   197,   170,   245,
      42,   342,   177,    39,   184,    66,   181,   141,   156,    51,
      52,    42,   155,    53,    55,    56,    28,    42,   262,    60,
      80,    80,    80,   235,   236,    80,    59,     8,    92,    42,
      94,   168,   207,    42,   172,    94,    17,    18,   251,   342,
     252,    42,   231,   232,     8,   176,   233,   234,    68,   375,
     209,   210,   211,    17,    18,    80,   159,    41,   334,   180,
     206,   247,   206,   153,    69,   276,   300,   287,   288,   289,
     266,   188,   190,   191,   180,   371,   267,   282,   181,   274,
      86,   183,   141,    43,   286,    60,   306,    44,   246,   362,
     363,    40,    44,    63,    43,   184,   309,   310,   311,   180,
     258,    54,   259,    44,    79,   207,    45,   207,   280,    44,
      80,    89,    43,   237,   238,   173,    43,    65,   268,   327,
     261,   260,   172,   305,   258,    44,   259,    84,    80,   212,
      80,   213,   375,   214,   370,   291,   228,   308,   247,   247,
      91,   229,   230,   329,   277,   247,   180,   281,    90,    76,
      65,    77,    84,    84,    84,   248,   181,    84,   328,   185,
     278,   294,   343,   298,   344,   259,   153,   333,   299,   367,
     341,   353,    44,    71,   297,   358,   357,   359,   186,   348,
     247,   247,   349,   247,   181,   193,   364,    84,   199,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   194,
      78,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   261,
     298,   195,   259,   360,   180,   151,    96,    97,    98,   247,
      99,   100,    87,    88,   391,   393,   395,    65,   159,   176,
     368,    91,    84,   153,   374,   159,   369,   200,   407,   388,
     389,   390,   180,   381,   247,   384,   397,   178,   179,   299,
      84,   409,    84,   151,    96,    97,    98,   247,    99,   100,
     316,   317,   318,   319,   180,   411,   400,   153,   159,   225,
     399,   247,   440,   408,   444,   410,   153,   401,   247,   283,
     247,   284,   239,   240,   331,   332,   196,   417,   414,   415,
     419,   198,   420,   312,   313,   320,   321,   437,   114,   201,
     204,   441,   314,   315,   205,   241,   116,   117,   118,   119,
     120,   121,   242,   159,    72,   243,   153,   374,   244,   264,
     265,   202,   269,   270,   446,   279,   285,   295,   290,   293,
     296,    91,   155,   301,   180,   302,   114,   307,   330,   347,
     350,   351,   354,   355,   116,   117,   118,   119,   120,   121,
     356,   361,   365,   366,   376,   151,    96,    97,    98,   122,
      99,   100,   372,   377,   378,   387,   379,   385,   386,   396,
     402,   403,   406,   451,    95,    96,    97,    98,   404,    99,
     100,   412,   413,   164,   424,   421,   422,     8,   426,   418,
     425,   428,   429,   430,   427,   432,    17,    18,   434,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   431,   101,   102,   103,   433,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   114,   113,
     435,   165,   436,   438,   439,   442,   116,   166,   118,   119,
     120,   121,   443,   445,   447,   448,   449,   114,   450,    70,
     452,   325,    70,   115,   322,   116,   117,   118,   119,   120,
     121,    95,    96,    97,    98,   326,    99,   100,   323,    93,
     122,   324,   169,   352,    85,   398,   346,   335,   250,    58,
       0,   405,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,   101,   102,   103,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,   113,   151,    96,    97,
      98,     0,    99,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,    70,
     249,     0,   116,   117,   118,   119,   120,   121,   151,    96,
      97,    98,     0,    99,   100,     0,     0,   122,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,     0,    99,
     100,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
     114,     0,   251,     0,   252,   152,   373,     0,   116,   117,
     118,   119,   120,   121,     0,   101,   102,   103,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,   113,
       0,   114,     0,     0,     0,     0,     0,     0,     0,   116,
     117,   118,   119,   120,   121,     0,     0,   114,     0,     0,
       0,     0,    70,     0,   122,   116,   117,   118,   119,   120,
     121,   151,    96,    97,    98,     0,    99,   100,     0,     0,
     122,     0,     0,     0,     0,     0,     0,   151,    96,    97,
      98,     0,    99,   100,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,   151,    96,    97,
      98,     0,    99,   100,     0,     0,     0,     0,     0,     0,
       0,   151,    96,    97,    98,     0,    99,   100,     0,     0,
       0,     0,     0,     0,   114,   271,     0,     0,     0,     8,
       0,     0,   116,   117,   118,   119,   120,   121,    17,    18,
     114,     0,   251,     0,   252,   152,   423,     0,   116,   117,
     118,   119,   120,   121,   151,    96,    97,    98,     0,    99,
     100,     0,     0,     0,     0,     0,     0,     0,   151,    96,
      97,    98,     0,    99,   100,     0,     0,     0,     0,     0,
     114,     0,     0,   272,     0,     0,     0,     0,   116,   273,
     118,   119,   120,   121,   114,     0,   251,     0,   252,   152,
       8,     0,   116,   117,   118,   119,   120,   121,     0,    17,
      18,   151,    96,    97,    98,     0,    99,   100,     0,     0,
       0,     0,     0,     0,     0,   151,    96,    97,    98,     0,
      99,   100,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,   152,     0,     0,   116,   117,   118,   119,   120,
     121,   114,   151,    96,    97,    98,     0,    99,   100,   116,
     117,   118,   119,   120,   121,     0,   151,    96,    97,    98,
       0,    99,   100,     0,     0,     0,     0,     0,     0,     0,
     151,    96,    97,    98,     0,    99,   100,   151,    96,    97,
      98,     0,    99,   100,   114,   303,     0,     0,     0,     0,
       0,     0,   116,   117,   118,   119,   120,   121,   114,     0,
       0,   339,     0,     0,     0,     0,   116,   340,   118,   119,
     120,   121,   151,    96,    97,    98,     0,    99,   100,     0,
       0,     0,     0,     0,     0,   114,   151,    96,    97,    98,
     366,    99,   100,   116,   117,   118,   119,   120,   121,   114,
       0,     0,   382,     0,     0,     0,     0,   116,   383,   118,
     119,   120,   121,   114,   392,     0,     0,     0,     0,     0,
     114,   116,   117,   118,   119,   120,   121,     0,   116,   117,
     118,   119,   120,   121,   151,    96,    97,    98,     0,    99,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   394,     0,    42,     0,
       0,     0,     0,   116,   117,   118,   119,   120,   121,   187,
       0,     0,     0,     0,     0,     0,     0,   116,   117,   118,
     119,   120,   121,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,     0,     0,     0,     0,   116,   117,   118,   119,   120,
     121,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,   336,   259,     0,     0,     0,     0,     0,     0,
      44,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     1,
       0,     0,     0,     0,     0,   158,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     1,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   298,   336,   259,     1,
       0,     0,     0,     0,     0,    44,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,   171,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   275,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    70,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   416,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   345,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
       0,    48,    71,    71,   111,    48,    76,   114,    77,    50,
      28,    86,     3,   101,   126,    54,   198,   106,    80,    17,
       3,   261,    84,     3,    88,    44,   101,    70,    75,    29,
      30,     3,    75,     3,    34,    35,    36,     3,   159,     3,
      79,    80,    81,    12,    13,    84,    91,    35,    67,     3,
      68,    77,   114,     3,    81,    73,    44,    45,    88,   299,
      90,     3,    96,    97,    35,    83,    10,    11,    93,   332,
       7,     8,     9,    44,    45,   114,    76,    93,   108,    86,
     187,    93,   189,   152,   109,   173,   207,   194,   195,   196,
      87,    98,    99,   100,   101,   107,    93,   186,   173,   168,
     108,    92,   145,    86,   193,     3,   213,    95,   106,   291,
     292,    91,    95,    70,    86,   179,   228,   229,   230,   126,
      86,    91,    88,    95,    91,   187,   109,   189,    92,    95,
     169,    74,    86,   102,   103,   107,    86,    44,   164,   246,
     159,   159,   169,   212,    86,    95,    88,    54,   187,    86,
     189,    88,   415,    90,    89,   198,    95,   226,    93,    93,
      67,   100,   101,   251,    93,    93,   173,   185,    87,    86,
      77,    88,    79,    80,    81,   109,   251,    84,   247,    75,
     109,   109,    86,    86,    88,    88,   255,   255,   207,   301,
     259,   279,    95,   108,    87,    87,   285,    87,   107,   268,
      93,    93,   271,    93,   279,   107,   295,   114,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    86,
     261,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   258,
      86,    86,    88,    87,   251,     3,     4,     5,     6,    93,
       8,     9,    92,    93,   361,   362,   363,   164,   258,   277,
      87,   168,   169,   332,   332,   265,    93,   109,    87,   358,
     359,   360,   279,   343,    93,   344,   365,    92,    93,   298,
     187,    87,   189,     3,     4,     5,     6,    93,     8,     9,
     235,   236,   237,   238,   301,    87,   371,   366,   298,   108,
     369,    93,    87,   392,    87,   394,   375,   375,    93,   187,
      93,   189,    14,    15,    92,    93,    86,   406,    92,    93,
     409,    86,   411,   231,   232,   239,   240,   434,    86,   109,
      60,   438,   233,   234,    69,    94,    94,    95,    96,    97,
      98,    99,   104,   343,   387,   105,   415,   415,    16,    87,
      93,   109,    89,    89,   443,   107,   107,    83,    59,   109,
      66,   268,   405,    87,   371,     3,    86,     3,     3,     3,
      89,    89,    76,    87,    94,    95,    96,    97,    98,    99,
      87,    86,    60,    91,    87,     3,     4,     5,     6,   109,
       8,     9,    89,    87,    89,    77,    89,    89,    89,    56,
      87,    89,    57,   450,     3,     4,     5,     6,    89,     8,
       9,    70,    59,    31,    65,    71,    70,    35,    71,   109,
      72,    85,    72,    93,   424,    85,    44,    45,    86,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    82,    54,    55,    56,    79,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    86,    68,
      82,    89,    80,    86,    81,    84,    94,    95,    96,    97,
      98,    99,    57,    93,   106,    66,    60,    86,    86,    91,
      87,   244,    91,    92,   241,    94,    95,    96,    97,    98,
      99,     3,     4,     5,     6,   245,     8,     9,   242,    68,
     109,   243,    79,   277,    59,   366,   265,   256,   145,    36,
      -1,   387,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,    -1,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    -1,   109,    94,    95,    96,    97,    98,
      99,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    31,    -1,    -1,    -1,    35,
      -1,    -1,    94,    95,    96,    97,    98,    99,    44,    45,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    86,    -1,    88,    -1,    90,    91,
      35,    -1,    94,    95,    96,    97,    98,    99,    -1,    44,
      45,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,    98,
      99,    86,     3,     4,     5,     6,    -1,     8,     9,    94,
      95,    96,    97,    98,    99,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,     3,     4,     5,
       6,    -1,     8,     9,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    86,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    86,     3,     4,     5,     6,
      91,     8,     9,    94,    95,    96,    97,    98,    99,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,    86,    87,    -1,    -1,    -1,    -1,    -1,
      86,    94,    95,    96,    97,    98,    99,    -1,    94,    95,
      96,    97,    98,    99,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    -1,     3,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    87,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    28,
      -1,    -1,    -1,    -1,    -1,    95,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    92,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    91,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    73,   132,   133,   136,
     137,   138,   139,   145,   148,   149,   175,   176,   177,     3,
      91,    93,     3,    86,    95,   109,   134,   135,   150,   151,
     152,   133,   133,     3,    91,   133,   133,     0,   176,    91,
       3,   146,   147,    70,   150,   148,   152,   153,    93,   109,
      91,   108,   132,   133,   168,   178,    86,    88,   151,    91,
     137,   140,   141,   142,   148,   146,   108,    92,    93,    74,
      87,   148,   152,   135,   150,     3,     4,     5,     6,     8,
       9,    54,    55,    56,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    68,    86,    92,    94,    95,    96,    97,
      98,    99,   109,   111,   112,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     130,   132,   166,   167,   168,   169,   170,   171,   172,   173,
     174,     3,    91,   128,   161,   132,   168,     3,    87,   133,
     154,   155,   156,   157,    31,    89,    95,   128,   153,   140,
     142,    92,   141,   107,   143,   144,   150,   142,    92,    93,
     114,   127,   131,    92,   147,    75,   107,    86,   114,    86,
     114,   114,   131,   107,    86,    86,    86,   166,    86,     3,
     109,   109,   109,   130,    60,    69,   130,   142,   158,     7,
       8,     9,    86,    88,    90,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   108,   129,   116,    95,   100,
     101,    96,    97,    10,    11,    12,    13,   102,   103,    14,
      15,    94,   104,   105,    16,    17,   106,    93,   109,    92,
     170,    88,    90,   161,   162,   163,   164,   165,    86,    88,
     150,   152,   159,   160,    87,    93,    87,    93,   153,    89,
      89,    31,    89,    95,   128,    92,   131,    93,   109,   107,
      92,   150,   166,   158,   158,   107,   166,   130,   130,   130,
      59,   132,   171,   109,   109,    83,    66,    87,    86,   152,
     159,    87,     3,    87,   113,   128,   130,     3,   128,   116,
     116,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     120,   120,   121,   122,   123,   124,   125,   130,   128,   131,
       3,    92,    93,   161,   108,   165,    87,   154,   159,    89,
      95,   128,   160,    86,    88,    53,   156,     3,   128,   128,
      89,    89,   144,   131,    76,    87,    87,   166,    87,    87,
      87,    86,   171,   171,   166,    60,    91,   116,    87,    93,
      89,   107,    89,    92,   161,   163,    87,    87,    89,    89,
      87,   154,    89,    95,   128,    89,    89,    77,   166,   166,
     166,   130,    87,   130,    87,   130,    56,   166,   162,   128,
     127,   161,    87,    89,    89,   178,    57,    87,   166,    87,
     166,    87,    70,    59,    92,    93,    78,   166,   109,   166,
     166,    71,    70,    92,    65,    72,    71,   133,    85,    72,
      93,    82,    85,    79,    86,    82,    80,   130,    86,    81,
      87,   130,    84,    57,    87,    93,   166,   106,    66,    60,
      86,   168,    87
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
/* Line 1267 of yacc.c.  */
#line 2161 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 468 "manners.y"

#include <stdio.h>
extern char yytext[];
extern int column;
void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
