
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "bison.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>
    int mark1=0;
	int pop=1;
	int switchdone = 0;
	int switchvar;
    int save=0;
	int ifval[1000];
	int ifptr = -1;
	int ifdone[1000];
    int okk=0;
    int ptr = 0;
    int value[1000];
    char varlist[1000][1000];
    char keep[1000][1000];
	int v1[100];
	int mark=0;
    ///if already declared  return 1 else return 0
    int isdeclared(char str[]){
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) return 1;
        }
        return 0;
    }
    /// if already declared return 0 or add new value and return 1;
    int addnewval(char str[],int val){
        if(isdeclared(str) == 1) return 0;
        strcpy(varlist[ptr],str);
        value[ptr] = val;
        ptr++;
        return 1;
    }

    ///get the value of corresponding string
    int getval(char str[]){
        int indx = -1;
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) {
                indx = i;
                break;
            }
        }
        return value[indx];
    }
    int setval(char str[], int val){
    	int indx = -1;
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) {
                indx = i;
                break;
            }
        }
        value[indx] = val;

    }




/* Line 189 of yacc.c  */
#line 139 "bison.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUM = 259,
     STR = 260,
     GE = 261,
     LE = 262,
     GT = 263,
     LT = 264,
     MINUS = 265,
     PLUS = 266,
     DIV = 267,
     MULT = 268,
     INT = 269,
     DOUBLE = 270,
     Bin = 271,
     sin1 = 272,
     gcd1 = 273,
     pow1 = 274,
     lcm1 = 275,
     cos1 = 276,
     asin1 = 277,
     acos1 = 278,
     Cir_area = 279,
     STAR = 280,
     CHAR = 281,
     SORT = 282,
     Prime = 283,
     Print = 284,
     MAIN = 285,
     PB = 286,
     CMP = 287,
     REV = 288,
     FACT = 289,
     CUM = 290,
     CMP1 = 291,
     MINI = 292,
     PE = 293,
     BB = 294,
     BE = 295,
     SM = 296,
     CM = 297,
     ASGN = 298,
     PRINTVAR = 299,
     MAXI = 300,
     PRINTSTR = 301,
     PRINTLN = 302,
     IF = 303,
     ELSE = 304,
     ELSEIF = 305,
     FOR = 306,
     INC = 307,
     TO = 308,
     SWITCH = 309,
     DEFAULT = 310,
     COL = 311,
     FUNCTION = 312,
     IFX = 313,
     SH = 314
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 68 "bison.y"

  char text[1000];
  int val;



/* Line 214 of yacc.c  */
#line 241 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 253 "bison.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   903

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  226

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    15,    16,    19,    22,    25,    28,
      31,    34,    37,    40,    43,    44,    47,    48,    51,    55,
      57,    59,    61,    65,    67,    69,    73,    79,    85,    90,
      94,    98,   102,   106,   110,   114,   118,   122,   128,   134,
     139,   145,   151,   156,   162,   168,   173,   179,   185,   190,
     192,   194,   198,   202,   206,   210,   213,   217,   221,   225,
     229,   233,   237,   241,   245,   249,   253,   262,   264,   265,
     274,   280,   288,   293,   301,   303,   304,   311,   318,   319,
     322,   331,   332,   336,   337
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    84,    62,    84,    -1,    14,    30,    31,
      38,    39,    63,    40,    -1,    -1,    63,    66,    -1,    63,
      72,    -1,    63,    75,    -1,    63,    76,    -1,    63,    71,
      -1,    63,    79,    -1,    63,    81,    -1,    63,    80,    -1,
      63,    70,    -1,    -1,    64,    74,    -1,    -1,    65,    73,
      -1,    67,    68,    41,    -1,    14,    -1,    15,    -1,    26,
      -1,    69,    42,    68,    -1,    69,    -1,     3,    -1,     3,
      43,    75,    -1,    45,    31,    75,    38,    41,    -1,    37,
      31,    75,    38,    41,    -1,    31,    75,    38,    41,    -1,
      34,    75,    41,    -1,    24,    75,    41,    -1,    17,    75,
      41,    -1,    21,    75,    41,    -1,    25,    75,    41,    -1,
      35,    75,    41,    -1,    28,    75,    41,    -1,    16,    75,
      41,    -1,    33,    31,     5,    38,    41,    -1,    27,    31,
       5,    38,    41,    -1,     3,    43,    75,    41,    -1,    44,
      31,     3,    38,    41,    -1,    46,    31,     5,    38,    41,
      -1,    47,    31,    38,    41,    -1,    44,    31,     3,    38,
      41,    -1,    46,    31,     5,    38,    41,    -1,    47,    31,
      38,    41,    -1,    44,    31,     3,    38,    41,    -1,    46,
      31,     5,    38,    41,    -1,    47,    31,    38,    41,    -1,
       4,    -1,     3,    -1,    75,    11,    75,    -1,    75,    10,
      75,    -1,    75,    13,    75,    -1,    75,    32,    75,    -1,
      75,    35,    -1,    75,    36,    75,    -1,    75,    18,    75,
      -1,    75,    20,    75,    -1,    75,    19,    75,    -1,    75,
      12,    75,    -1,    75,     9,    75,    -1,    75,     8,    75,
      -1,    75,     7,    75,    -1,    75,     6,    75,    -1,    31,
      75,    38,    -1,    48,    31,    77,    38,    39,    65,    40,
      78,    -1,    75,    -1,    -1,    78,    50,    31,    75,    38,
      39,    65,    40,    -1,    78,    49,    39,    65,    40,    -1,
      51,    31,    75,    53,    75,    52,    75,    -1,    38,    39,
      64,    40,    -1,    54,    31,    82,    38,    39,    83,    40,
      -1,    75,    -1,    -1,    83,    75,    56,    39,    63,    40,
      -1,    83,    55,    56,    39,    63,    40,    -1,    -1,    84,
      85,    -1,    67,    57,    31,    86,    38,    39,    63,    40,
      -1,    -1,    67,     3,    87,    -1,    -1,    87,    42,    67,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    97,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   111,   112,   115,   116,   121,   123,
     123,   123,   125,   126,   128,   138,   153,   157,   161,   165,
     172,   178,   186,   194,   207,   214,   232,   246,   253,   272,
     288,   299,   305,   310,   323,   329,   336,   350,   359,   373,
     374,   384,   386,   388,   390,   395,   399,   404,   417,   432,
     444,   455,   457,   459,   461,   463,   473,   498,   512,   513,
     534,   563,   577,   584,   587,   595,   596,   603,   617,   618,
     621,   626,   627,   629,   630
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "STR", "GE", "LE", "GT",
  "LT", "MINUS", "PLUS", "DIV", "MULT", "INT", "DOUBLE", "Bin", "sin1",
  "gcd1", "pow1", "lcm1", "cos1", "asin1", "acos1", "Cir_area", "STAR",
  "CHAR", "SORT", "Prime", "Print", "MAIN", "PB", "CMP", "REV", "FACT",
  "CUM", "CMP1", "MINI", "PE", "BB", "BE", "SM", "CM", "ASGN", "PRINTVAR",
  "MAXI", "PRINTSTR", "PRINTLN", "IF", "ELSE", "ELSEIF", "FOR", "INC",
  "TO", "SWITCH", "DEFAULT", "COL", "FUNCTION", "IFX", "SH", "$accept",
  "starthere", "program", "statement", "statement1", "lost", "declaration",
  "type", "variables", "variable", "sob", "assign", "print", "lol", "temp",
  "expression", "ifelse", "ifexp", "elseif", "forloop", "extend", "switch",
  "expswitch", "switchinside", "function", "func", "fparameter",
  "fsparameter", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    66,    67,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      72,    72,    72,    73,    73,    73,    74,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    77,    78,    78,
      78,    79,    80,    81,    82,    83,    83,    83,    84,    84,
      85,    86,    86,    87,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     7,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     2,     0,     2,     3,     1,
       1,     1,     3,     1,     1,     3,     5,     5,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     1,
       1,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     8,     1,     0,     8,
       5,     7,     4,     7,     1,     0,     6,     6,     0,     2,
       8,     0,     3,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      78,     0,     0,     1,    19,    20,    21,    78,     0,    79,
       0,     2,     0,     0,    19,    81,     0,     0,     0,     4,
      83,     0,     0,    82,     4,    50,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     5,     0,
      13,     9,     6,     7,     8,    10,    12,    11,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,    80,     0,     0,    36,    31,    32,    30,    33,     0,
      35,    65,     0,    29,    34,     0,     0,     0,     0,     0,
       0,    67,     0,     0,    74,     0,     0,    18,     0,    64,
      63,    62,    61,    52,    51,    60,    53,    57,    59,    58,
      54,    56,    84,    39,    65,     0,    28,     0,     0,    72,
       0,     0,     0,    15,     0,     0,     0,    42,     0,     0,
       0,    25,    22,    38,    37,    27,     0,     0,     0,    40,
      26,    41,    16,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    68,     0,     0,     0,    17,    71,
      73,     0,     0,    46,    47,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     4,    16,     0,
       0,     0,    45,     0,     0,     0,     0,    43,    44,    77,
      76,    70,     0,    16,     0,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,    22,   116,   178,    48,    49,    84,    85,
      50,    51,    52,   188,   153,    53,    54,   122,   195,    55,
      56,    57,   125,   180,     2,     9,    18,    23
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -208
static const yytype_int16 yypact[] =
{
    -208,    18,     5,  -208,   -23,  -208,  -208,  -208,   -47,  -208,
     -16,     7,    -6,    -9,  -208,     7,    -5,    40,     4,  -208,
    -208,     6,    78,     8,  -208,    11,  -208,    10,    10,    10,
      10,    10,    17,    10,    10,    22,    10,    10,    27,    37,
    -208,    28,    46,    47,    49,    56,    58,    65,  -208,    94,
    -208,  -208,  -208,   856,  -208,  -208,  -208,  -208,     7,   164,
      10,  -208,    10,   367,   403,   439,   475,   511,    93,   547,
     691,    95,   583,   619,    10,  -208,   104,    10,   103,    72,
      10,    10,    10,    71,    76,    77,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,  -208,    10,
     117,  -208,   655,   724,  -208,  -208,  -208,  -208,  -208,    83,
    -208,    86,    90,  -208,  -208,   757,    -8,    92,   790,    97,
     105,   856,   106,   305,   856,   107,    10,  -208,    94,   867,
     867,   867,   867,   139,   139,   187,   187,   856,   856,   856,
     856,   856,  -208,  -208,  -208,   112,  -208,   115,   119,  -208,
     100,   102,   116,  -208,   120,   122,   123,  -208,   131,    10,
     133,   856,  -208,  -208,  -208,  -208,   166,   168,   138,  -208,
    -208,  -208,  -208,   336,  -208,   149,   155,   136,     0,    10,
      20,   153,   159,  -208,  -208,   165,   172,   185,  -208,   856,
    -208,   161,   130,  -208,  -208,   -22,   217,   216,   190,   191,
     193,   194,   198,   201,   202,   205,  -208,  -208,  -208,    10,
     208,   211,  -208,   210,   256,    39,   823,  -208,  -208,  -208,
    -208,  -208,   203,  -208,    44,  -208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,  -208,   -24,  -208,  -207,  -208,    15,   125,  -208,
    -208,  -208,  -208,  -208,  -208,   -25,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,   244,  -208,  -208,  -208
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      59,   215,    63,    64,    65,    66,    67,    10,    69,    70,
      12,    72,    73,    61,    26,    13,   224,     8,     3,     4,
       5,    14,     5,    61,    26,    15,     8,   201,   202,    16,
      17,     6,   149,     6,    19,   102,   150,   103,   151,   152,
     184,    62,    21,    20,   185,    24,   186,   187,    68,   115,
      58,    62,   118,    71,    60,   121,   123,   124,    74,    76,
     190,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   100,   141,   191,    75,    77,    78,   221,
      79,    25,    26,   185,   225,   186,   187,    80,   185,    81,
     186,   187,    14,     5,    27,    28,    82,    83,   109,    29,
     112,   161,    30,    31,     6,    32,    33,   117,   119,    34,
     120,    35,    36,    37,   126,    38,    39,   127,    40,   128,
     142,   145,    41,    42,    43,    44,    45,   146,   147,    46,
     154,   166,    47,   167,   173,   156,    86,    87,    88,    89,
      90,    91,    92,    93,   158,   160,   157,   168,    94,    95,
      96,    92,    93,   163,   189,   192,   164,    94,    95,    96,
     165,   169,    97,   170,   171,    98,    99,    25,    26,   175,
     172,    97,   174,   176,    98,    99,   177,   183,    14,     5,
      27,    28,   213,   214,   216,    29,   200,   181,    30,    31,
       6,    32,    33,   182,   193,    34,   196,    35,    36,    37,
     194,    38,    39,   197,   101,    94,    95,    96,    41,    42,
      43,    44,    45,    25,    26,    46,   198,   199,    47,    97,
     203,   204,    98,    99,    14,     5,    27,    28,   205,   209,
     206,    29,   207,   208,    30,    31,     6,    32,    33,   210,
     211,    34,   223,    35,    36,    37,   212,    38,    39,   217,
     219,    11,   218,   162,    41,    42,    43,    44,    45,    25,
      26,    46,     0,     0,    47,     0,     0,     0,     0,     0,
      14,     5,    27,    28,     0,     0,     0,    29,     0,     0,
      30,    31,     6,    32,    33,     0,     0,    34,     0,    35,
      36,    37,     0,    38,    39,     0,   220,     0,     0,     0,
      41,    42,    43,    44,    45,     0,     0,    46,     0,     0,
      47,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      98,    99,    86,    87,    88,    89,    90,    91,    92,    93,
       0,     0,     0,     0,    94,    95,    96,     0,   159,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,    98,    99,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,    94,    95,    96,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99,     0,     0,     0,     0,   104,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
       0,     0,     0,     0,   105,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,     0,     0,     0,     0,
     106,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      98,    99,     0,     0,     0,     0,   107,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,     0,     0,
       0,     0,   108,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99,     0,     0,     0,     0,   110,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
       0,     0,     0,     0,   113,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,     0,     0,     0,     0,
     114,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      98,    99,     0,     0,     0,     0,   143,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,     0,   111,
      86,    87,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,    94,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,     0,   144,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99,     0,   148,    86,    87,    88,    89,
      90,    91,    92,    93,     0,     0,     0,     0,    94,    95,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,     0,   155,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
       0,   222,    86,    87,    88,    89,    90,    91,    92,    93,
       0,     0,     0,     0,    94,    95,    96,    90,    91,    92,
      93,     0,     0,     0,     0,    94,    95,    96,    97,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99
};

static const yytype_int16 yycheck[] =
{
      24,   208,    27,    28,    29,    30,    31,    30,    33,    34,
      57,    36,    37,     3,     4,    31,   223,     2,     0,    14,
      15,    14,    15,     3,     4,    31,    11,    49,    50,    38,
      15,    26,    40,    26,    39,    60,    44,    62,    46,    47,
      40,    31,    38,     3,    44,    39,    46,    47,    31,    74,
      42,    31,    77,    31,    43,    80,    81,    82,    31,    31,
      40,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    58,    99,    55,    39,    31,    31,    40,
      31,     3,     4,    44,    40,    46,    47,    31,    44,    31,
      46,    47,    14,    15,    16,    17,    31,     3,     5,    21,
       5,   126,    24,    25,    26,    27,    28,     3,     5,    31,
      38,    33,    34,    35,    43,    37,    38,    41,    40,    42,
       3,    38,    44,    45,    46,    47,    48,    41,    38,    51,
      38,    31,    54,    31,   159,    38,     6,     7,     8,     9,
      10,    11,    12,    13,    38,    38,    41,    31,    18,    19,
      20,    12,    13,    41,   179,   180,    41,    18,    19,    20,
      41,    41,    32,    41,    41,    35,    36,     3,     4,     3,
      39,    32,    39,     5,    35,    36,    38,    41,    14,    15,
      16,    17,   206,   207,   209,    21,    56,    38,    24,    25,
      26,    27,    28,    38,    41,    31,    31,    33,    34,    35,
      41,    37,    38,    31,    40,    18,    19,    20,    44,    45,
      46,    47,    48,     3,     4,    51,    31,    56,    54,    32,
       3,     5,    35,    36,    14,    15,    16,    17,    38,    31,
      39,    21,    39,    39,    24,    25,    26,    27,    28,    38,
      38,    31,    39,    33,    34,    35,    41,    37,    38,    41,
      40,     7,    41,   128,    44,    45,    46,    47,    48,     3,
       4,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    31,    -1,    33,
      34,    35,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    -1,    -1,
      54,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    18,    19,    20,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    18,    19,    20,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    41,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      41,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    41,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      41,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    38,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    38,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    38,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    18,    19,    20,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    18,    19,    20,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    84,     0,    14,    15,    26,    62,    67,    85,
      30,    84,    57,    31,    14,    31,    38,    67,    86,    39,
       3,    38,    63,    87,    39,     3,     4,    16,    17,    21,
      24,    25,    27,    28,    31,    33,    34,    35,    37,    38,
      40,    44,    45,    46,    47,    48,    51,    54,    66,    67,
      70,    71,    72,    75,    76,    79,    80,    81,    42,    63,
      43,     3,    31,    75,    75,    75,    75,    75,    31,    75,
      75,    31,    75,    75,    31,    39,    31,    31,    31,    31,
      31,    31,    31,     3,    68,    69,     6,     7,     8,     9,
      10,    11,    12,    13,    18,    19,    20,    32,    35,    36,
      67,    40,    75,    75,    41,    41,    41,    41,    41,     5,
      41,    38,     5,    41,    41,    75,    64,     3,    75,     5,
      38,    75,    77,    75,    75,    82,    43,    41,    42,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,     3,    41,    38,    38,    41,    38,    38,    40,
      44,    46,    47,    74,    38,    38,    38,    41,    38,    53,
      38,    75,    68,    41,    41,    41,    31,    31,    31,    41,
      41,    41,    39,    75,    39,     3,     5,    38,    65,    52,
      83,    38,    38,    41,    40,    44,    46,    47,    73,    75,
      40,    55,    75,    41,    41,    78,    31,    31,    31,    56,
      56,    49,    50,     3,     5,    38,    39,    39,    39,    31,
      38,    38,    41,    63,    63,    65,    75,    41,    41,    40,
      40,    40,    38,    39,    65,    40
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 3:

/* Line 1455 of yacc.c  */
#line 97 "bison.y"
    { printf("\nCompilation Successful\n"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 121 "bison.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 123 "bison.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 125 "bison.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 126 "bison.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 129 "bison.y"
    {
						//printf("%s\n",$1);
						int x = addnewval((yyvsp[(1) - (1)].text),0);
						if(!x) {
							printf("Compilation Error:Variable %s is already declared\n",(yyvsp[(1) - (1)].text));
							exit(-1);
						}

					;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 139 "bison.y"
    {
						//printf("%s %d\n",$1,$3);
						int x = addnewval((yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].val));
						if(!x) {
							printf("Compilation Error: Variable %s is already declared\n",(yyvsp[(1) - (3)].text));
							exit(-1);
							}
					;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 154 "bison.y"
    {
		  printf("%d\n",(yyvsp[(3) - (5)].val));
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 158 "bison.y"
    {
		  printf("%d\n",(yyvsp[(3) - (5)].val));
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 162 "bison.y"
    {
		 
		;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 166 "bison.y"
    {
		 int mul=1,i=0;
		 for(i=1;i<=(yyvsp[(2) - (3)].val);i++)
		 mul*=i;
		  printf("%d\n",mul);
		;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 173 "bison.y"
    {
		 double pi=acos(-1);
		 double kk=pi*(yyvsp[(2) - (3)].val)*(yyvsp[(2) - (3)].val);
		  printf("%.6f\n",kk);
		;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 179 "bison.y"
    {
		double pi=acos(-1);
		  double a=(yyvsp[(2) - (3)].val)*pi;
		  a/=180;
		 pi=sin(a);
		  printf("%.6f\n",pi);
		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 187 "bison.y"
    {
		double pi=acos(-1);
		  double a=(yyvsp[(2) - (3)].val)*pi;
		  a/=180;
		 pi=cos(a);
		  printf("%.6f\n",pi);
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 195 "bison.y"
    {
		 int row, c, n;
		 n=(yyvsp[(2) - (3)].val);
		for (row = 1; row <= n; row++) 
		{
		for (c = 1; c <= n-row; c++) 
		printf(" ");
		for (c = 1; c <= 2*row - 1; c++) 
		printf("*");
		printf("\n");
		}
		;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 208 "bison.y"
    {
		 int mul=0,i=0;
		 for(i=1;i<=(yyvsp[(2) - (3)].val);i++)
		 mul+=i;
		  printf("%d\n",mul);
		;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 215 "bison.y"
    {
		
		int i,j;  
		for(i=2; i<=(yyvsp[(2) - (3)].val); i++)
		{
		int looo=0;
        for(j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
               looo=1;
			   break;
            }
        }
		if(!looo)printf("%d ",i);
		}
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 233 "bison.y"
    {
		int a[10],n,i;    
		n=(yyvsp[(2) - (3)].val);  
		for(i=0;n>0;i++)    
		{    
		a[i]=n%2;    
		n=n/2;    
		}        
	for(i=i-1;i>=0;i--)    
	{    
	printf("%d",a[i]);    
	}    
 		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 247 "bison.y"
    {
		 int l = strlen((yyvsp[(3) - (5)].text));
		int i;
		for(i = l-2;  i >0; i--) printf("%c",(yyvsp[(3) - (5)].text)[i]);
		
		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 254 "bison.y"
    {
		 int l = strlen((yyvsp[(3) - (5)].text));
		int i,j;
		for(i=1; i<l-1; i++)
		{
        for(j=i+1; j<l-1; j++)
        {
            if((yyvsp[(3) - (5)].text)[i] > (yyvsp[(3) - (5)].text)[j])
            {
                char temp     = (yyvsp[(3) - (5)].text)[i];
                (yyvsp[(3) - (5)].text)[i] = (yyvsp[(3) - (5)].text)[j];
                (yyvsp[(3) - (5)].text)[j] = temp;
            }
        }
		}
		for(i = 1;  i < l-1; i++) printf("%c",(yyvsp[(3) - (5)].text)[i]);
		;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 273 "bison.y"
    {
						if(!isdeclared((yyvsp[(1) - (4)].text))) {
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(1) - (4)].text));
							exit(-1);
						}
						else{
							setval((yyvsp[(1) - (4)].text),(yyvsp[(3) - (4)].val));
						}
				    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 289 "bison.y"
    {
						if(!isdeclared((yyvsp[(3) - (5)].text))){
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(3) - (5)].text));
							exit(-1);
						}
						else{
							int v = getval((yyvsp[(3) - (5)].text));
							printf("%d",v);
						}
					;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 300 "bison.y"
    {
						int l = strlen((yyvsp[(3) - (5)].text));
						int i;
						for(i = 1;  i < l-1; i++) printf("%c",(yyvsp[(3) - (5)].text)[i]);
					;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 306 "bison.y"
    {
						printf("\n");
					;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 311 "bison.y"
    {
					pop++;
						if(!isdeclared((yyvsp[(3) - (5)].text))){
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(3) - (5)].text));
							exit(-1);
						}
						else{
							mark=1;
				      v1[pop] = getval((yyvsp[(3) - (5)].text));

						}
					;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 324 "bison.y"
    {
					pop++;
					mark=2;
					strcpy(keep[pop],(yyvsp[(3) - (5)].text));	
					;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 330 "bison.y"
    {
					pop++;
						mark=3;
					;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 337 "bison.y"
    {
						if(!isdeclared((yyvsp[(3) - (5)].text))){
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(3) - (5)].text));
							exit(-1);
						}
						else{
						    int k=0;
							for(k = 1; k <= save; k += okk){
    							int v = getval((yyvsp[(3) - (5)].text));
								printf("%d",v);
							}
						}
					;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 351 "bison.y"
    {
						int l = strlen((yyvsp[(3) - (5)].text));
						int k = 0,i=0;
						for(k = 1; k <= save; k += okk){
						for(i = 1;  i < l-1; i++) { printf("%c",(yyvsp[(3) - (5)].text)[i]);
						}
						}
					;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 360 "bison.y"
    {
						int k = 0;
						for(k = 1; k <= save; k += okk){
						printf("\n");
						}
					;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 373 "bison.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 375 "bison.y"
    {
						if(!isdeclared((yyvsp[(1) - (1)].text))) {
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(1) - (1)].text));
							exit(-1);
						}
						else{
							(yyval.val) = getval((yyvsp[(1) - (1)].text));
						}
				 	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 385 "bison.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 387 "bison.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 389 "bison.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 391 "bison.y"
    {
					if((yyvsp[(1) - (3)].val)>(yyvsp[(3) - (3)].val)) (yyval.val)=(yyvsp[(1) - (3)].val);
					else (yyval.val)=(yyvsp[(3) - (3)].val);
					;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 396 "bison.y"
    {
					 (yyval.val)=(yyvsp[(1) - (2)].val);
					;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 400 "bison.y"
    {
					if((yyvsp[(3) - (3)].val)>(yyvsp[(1) - (3)].val)) (yyval.val)=(yyvsp[(1) - (3)].val);
					else (yyval.val)=(yyvsp[(3) - (3)].val);
					;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 405 "bison.y"
    {
					int n1=(yyvsp[(1) - (3)].val);
					int n2=(yyvsp[(3) - (3)].val);
					
					while(n1!=n2)
					{
					if(n1 > n2)
					n1 -= n2;
					else
					n2 -= n1;
					}printf("%d\n",n1);
					;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 418 "bison.y"
    {
					int n1=(yyvsp[(1) - (3)].val);
					int n2=(yyvsp[(3) - (3)].val);
					int a=n1*n2;
					while(n1!=n2)
					{
					if(n1 > n2)
					n1 -= n2;
					else
					n2 -= n1;
					}
					n1=a/n1;
					printf("%d\n",n1);
					;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 433 "bison.y"
    {
					int n1=(yyvsp[(1) - (3)].val);
					int n2=(yyvsp[(3) - (3)].val);
					int ans=1;
					while(n2)
					{
					ans*=n1;
					n2--;
					}
					printf("%d\n",ans);
					;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 445 "bison.y"
    {
						if((yyvsp[(3) - (3)].val)) {
 							(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
							}
				  		else {
							(yyval.val) = 0;
							printf("\nRuntime Error: division by zero\t");
							exit(-1);
				  		} 
					;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 456 "bison.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 458 "bison.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 460 "bison.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 462 "bison.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 464 "bison.y"
    {(yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 474 "bison.y"
    {

						ifdone[ifptr] = 0;
						ifptr--;
						if(mark1){
						
						if(mark==1)
							{
							printf("%d",v1[0]);
							}
							else if(mark==2)
							{
							int i;
							int l=strlen(keep[0]);
							for(i = 1;  i < l-1; i++) printf("%c",keep[0][i]);
							}
							else
							{
							printf("\n");
							}
							}
							
					;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 499 "bison.y"
    {			
                        pop=-1;
					    mark1=0;
						ifptr++;
						ifdone[ifptr] = 0;
						if((yyvsp[(1) - (1)].val)){
						mark1=1;
							ifdone[ifptr] = 1;
							
						}	
					;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 514 "bison.y"
    {
						if((yyvsp[(4) - (8)].val) && ifdone[ifptr] == 0){
							ifdone[ifptr] = 1;
							
							if(mark==1)
							{
							printf("%d",v1[1]);
							}
							else if(mark==2)
							{
							int i;
							int l=strlen(keep[1]);
							for(i = 1;  i < l-1; i++) printf("%c",keep[1][i]);
							}
							else
							{
							printf("\n");
							}
							}
						;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 535 "bison.y"
    {
						if(ifdone[ifptr] == 0){
							ifdone[ifptr] = 1;
							if(mark==1)
							{
							printf("%d",v1[2]);
							}
							else if(mark==2)
							{
							int i;
							int l=strlen(keep[2]);
							for(i = 1;  i < l-1; i++) printf("%c",keep[2][i]);
							}
							else
							{
							printf("\n");
							}
							}
						;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 564 "bison.y"
    {
						int st = (yyvsp[(3) - (7)].val);
						int ed = (yyvsp[(5) - (7)].val);
						int dif = (yyvsp[(7) - (7)].val);
						int cnt = 0;
						int k = 0;
						okk=dif;
						for(k = st; k <= ed; k += dif){
							cnt++;
						}	
						save=cnt;
						
					;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 588 "bison.y"
    {
						switchdone = 0;
						switchvar = (yyvsp[(1) - (1)].val);
					;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 597 "bison.y"
    {
						if((yyvsp[(2) - (6)].val) == switchvar){
							printf("Executed %d\n",(yyvsp[(2) - (6)].val));
							switchdone = 1;
						}					
					;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 604 "bison.y"
    {
						if(switchdone == 0){
							switchdone = 1;
							printf("Default Block executed\n");
						}
					;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 622 "bison.y"
    {
						printf("Function Declared\n");
					;}
    break;



/* Line 1455 of yacc.c  */
#line 2486 "bison.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 635 "bison.y"



int yyerror(char *s){
	printf( "%s\n", s);
}

