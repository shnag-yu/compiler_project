/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.yacc"

#include <stdio.h>
#include "TeaplAst.h"

extern A_pos pos;
extern A_program root;

// extern int yydebug=1;

extern int yylex(void);
extern "C"{
extern void yyerror(char *s); 
extern int  yywrap();
}


#line 88 "y.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "y.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ADD = 3,                        /* ADD  */
  YYSYMBOL_SUB = 4,                        /* SUB  */
  YYSYMBOL_MUL = 5,                        /* MUL  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_SEMICOLON = 7,                  /* SEMICOLON  */
  YYSYMBOL_LEFT_PARENT = 8,                /* LEFT_PARENT  */
  YYSYMBOL_RIGHT_PARENT = 9,               /* RIGHT_PARENT  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 10,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 11,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_BRACE = 12,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 13,               /* RIGHT_BRACE  */
  YYSYMBOL_GREATER = 14,                   /* GREATER  */
  YYSYMBOL_NOT_LESS_THEN = 15,             /* NOT_LESS_THEN  */
  YYSYMBOL_LESS = 16,                      /* LESS  */
  YYSYMBOL_NOT_GREATER_THEN = 17,          /* NOT_GREATER_THEN  */
  YYSYMBOL_EQUAL = 18,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 19,                 /* NOT_EQUAL  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_COMMA = 21,                     /* COMMA  */
  YYSYMBOL_COLON = 22,                     /* COLON  */
  YYSYMBOL_LET = 23,                       /* LET  */
  YYSYMBOL_POINT = 24,                     /* POINT  */
  YYSYMBOL_RET = 25,                       /* RET  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_FN = 29,                        /* FN  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_WHILE = 32,                     /* WHILE  */
  YYSYMBOL_BREAK = 33,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 34,                  /* CONTINUE  */
  YYSYMBOL_RIGHT_ARROW = 35,               /* RIGHT_ARROW  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_STRUCT = 37,                    /* STRUCT  */
  YYSYMBOL_Id = 38,                        /* Id  */
  YYSYMBOL_Num = 39,                       /* Num  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_Type = 41,                      /* Type  */
  YYSYMBOL_VarDecl = 42,                   /* VarDecl  */
  YYSYMBOL_VarDef = 43,                    /* VarDef  */
  YYSYMBOL_RightVal = 44,                  /* RightVal  */
  YYSYMBOL_ArithExpr = 45,                 /* ArithExpr  */
  YYSYMBOL_BoolExpr = 46,                  /* BoolExpr  */
  YYSYMBOL_ArithBiOpExpr = 47,             /* ArithBiOpExpr  */
  YYSYMBOL_ArithUExpr = 48,                /* ArithUExpr  */
  YYSYMBOL_ExprUnit = 49,                  /* ExprUnit  */
  YYSYMBOL_FnCall = 50,                    /* FnCall  */
  YYSYMBOL_IndexExpr = 51,                 /* IndexExpr  */
  YYSYMBOL_ArrayExpr = 52,                 /* ArrayExpr  */
  YYSYMBOL_MemberExpr = 53,                /* MemberExpr  */
  YYSYMBOL_BoolUnit = 54,                  /* BoolUnit  */
  YYSYMBOL_BoolBiOpExpr = 55,              /* BoolBiOpExpr  */
  YYSYMBOL_BoolUOpExpr = 56,               /* BoolUOpExpr  */
  YYSYMBOL_ComExpr = 57,                   /* ComExpr  */
  YYSYMBOL_LeftVal = 58,                   /* LeftVal  */
  YYSYMBOL_AssignStmt = 59,                /* AssignStmt  */
  YYSYMBOL_RightValList = 60,              /* RightValList  */
  YYSYMBOL_VarDefScalar = 61,              /* VarDefScalar  */
  YYSYMBOL_VarDefArray = 62,               /* VarDefArray  */
  YYSYMBOL_VarDeclScalar = 63,             /* VarDeclScalar  */
  YYSYMBOL_VarDeclArray = 64,              /* VarDeclArray  */
  YYSYMBOL_VarDeclStmt = 65,               /* VarDeclStmt  */
  YYSYMBOL_VarDeclList = 66,               /* VarDeclList  */
  YYSYMBOL_StructDef = 67,                 /* StructDef  */
  YYSYMBOL_ParamDecl = 68,                 /* ParamDecl  */
  YYSYMBOL_FnDecl = 69,                    /* FnDecl  */
  YYSYMBOL_FnDef = 70,                     /* FnDef  */
  YYSYMBOL_CodeBlockStmt = 71,             /* CodeBlockStmt  */
  YYSYMBOL_IfStmt = 72,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 73,                 /* WhileStmt  */
  YYSYMBOL_FnDeclStmt = 74,                /* FnDeclStmt  */
  YYSYMBOL_CallStmt = 75,                  /* CallStmt  */
  YYSYMBOL_ReturnStmt = 76,                /* ReturnStmt  */
  YYSYMBOL_ProgramElement = 77,            /* ProgramElement  */
  YYSYMBOL_CodeBlockStmtList = 78,         /* CodeBlockStmtList  */
  YYSYMBOL_ProgramElementList = 79,        /* ProgramElementList  */
  YYSYMBOL_Program = 80                    /* Program  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   151,   151,   155,   163,   167,   176,   180,   188,   192,
     200,   204,   212,   216,   223,   227,   231,   235,   242,   255,
     259,   263,   267,   271,   275,   279,   286,   294,   298,   305,
     312,   322,   326,   330,   337,   341,   348,   355,   359,   363,
     367,   371,   375,   384,   388,   392,   400,   407,   411,   415,
     422,   426,   433,   440,   444,   451,   455,   465,   469,   477,
     481,   485,   493,   500,   508,   512,   519,   534,   538,   542,
     546,   550,   554,   558,   562,   566,   573,   577,   585,   592,
     599,   606,   609,   621,   625,   629,   633,   637,   646,   650,
     657,   661,   668
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ADD", "SUB", "MUL",
  "DIV", "SEMICOLON", "LEFT_PARENT", "RIGHT_PARENT", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_BRACE", "RIGHT_BRACE", "GREATER",
  "NOT_LESS_THEN", "LESS", "NOT_GREATER_THEN", "EQUAL", "NOT_EQUAL",
  "ASSIGN", "COMMA", "COLON", "LET", "POINT", "RET", "AND", "OR", "NOT",
  "FN", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "RIGHT_ARROW", "INT",
  "STRUCT", "Id", "Num", "$accept", "Type", "VarDecl", "VarDef",
  "RightVal", "ArithExpr", "BoolExpr", "ArithBiOpExpr", "ArithUExpr",
  "ExprUnit", "FnCall", "IndexExpr", "ArrayExpr", "MemberExpr", "BoolUnit",
  "BoolBiOpExpr", "BoolUOpExpr", "ComExpr", "LeftVal", "AssignStmt",
  "RightValList", "VarDefScalar", "VarDefArray", "VarDeclScalar",
  "VarDeclArray", "VarDeclStmt", "VarDeclList", "StructDef", "ParamDecl",
  "FnDecl", "FnDef", "CodeBlockStmt", "IfStmt", "WhileStmt", "FnDeclStmt",
  "CallStmt", "ReturnStmt", "ProgramElement", "CodeBlockStmtList",
  "ProgramElementList", "Program", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-138)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-46)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,  -138,   -29,   -18,     1,  -138,  -138,   118,  -138,  -138,
       8,  -138,    13,   106,    10,    37,  -138,  -138,  -138,  -138,
      43,    42,  -138,    72,  -138,  -138,    41,    53,    60,  -138,
    -138,    45,    45,  -138,     4,    81,   109,   122,   143,   144,
     147,  -138,  -138,    83,  -138,  -138,    72,  -138,  -138,  -138,
    -138,   148,   149,    14,    53,    53,    16,  -138,  -138,   128,
     130,  -138,  -138,   129,  -138,    91,    98,  -138,  -138,  -138,
    -138,    99,  -138,  -138,   142,    25,   145,  -138,   154,   151,
    -138,   158,    53,    53,  -138,  -138,    53,  -138,    24,    53,
     131,  -138,  -138,   146,    14,  -138,   115,    32,   129,  -138,
      14,    14,    14,    14,    53,    53,    14,    14,    14,    14,
      14,    14,    53,   132,    60,    45,   135,  -138,  -138,    73,
      85,   152,   163,  -138,  -138,   156,   167,  -138,    60,  -138,
    -138,  -138,   153,   153,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,   164,  -138,  -138,    60,   165,
     166,    53,  -138,  -138,  -138,   159,   160,  -138,    72,    72,
    -138,   168,    60,   170,   171,    53,  -138,   150,  -138,   172,
     174,  -138,    72,   175,  -138
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      91,    87,     0,     0,     0,    83,    84,     0,    86,    85,
      91,    92,     0,    54,     0,     0,     6,     7,     4,     5,
       0,     0,    79,    89,    90,     1,     0,     0,     0,    57,
      58,    61,    61,    75,     0,     0,     0,     0,     0,    45,
       0,    43,    44,     0,    68,    67,    89,    70,    71,    69,
      72,     0,     0,     0,     0,     0,    20,    19,    51,     8,
       9,    10,    25,    11,    22,    23,    24,    13,    12,    33,
      31,     0,     2,     3,    53,    54,    60,    63,     0,     0,
      82,     0,     0,     0,    74,    73,    49,    80,     0,     0,
       0,    88,    66,    56,     0,    18,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    64,    62,    81,     0,
       0,    48,     0,    28,    27,     0,     0,    30,     0,    11,
      21,    32,    14,    15,    16,    17,    35,    34,    37,    40,
      39,    38,    42,    41,    50,     0,    53,    59,     0,     0,
       0,    49,    26,    29,    46,    55,    56,    65,    89,    89,
      47,     0,     0,     0,     0,    49,    55,    76,    78,     0,
       0,    52,    89,     0,    77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,   -98,   185,  -138,   -24,   -16,   -49,  -138,  -138,   -34,
     -23,  -138,   -21,   -19,   121,  -138,  -138,  -138,   -17,  -138,
    -137,  -138,  -138,  -138,  -138,    36,   -25,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,   -45,   179,
    -138
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    74,    76,    15,   121,    59,    60,    61,    62,    63,
      64,   125,    65,    66,    67,    68,    69,    70,    71,    44,
     122,    16,    17,    18,    19,    45,    77,     6,    78,     7,
       8,    46,    47,    48,     9,    49,    50,    10,    51,    11,
      12
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    91,    41,    58,    42,    97,    43,    79,    53,    13,
      81,    80,    54,    25,   160,     1,   146,    29,    53,    95,
      20,    98,    94,    40,    86,    41,   -45,    42,   169,    43,
     155,     2,    55,   119,   120,   113,     5,     3,    96,    21,
     -45,   131,    56,    57,    30,     4,     5,   114,    98,    98,
     157,    31,    56,    57,    32,   136,   137,    53,   104,   105,
     129,    54,   123,   124,   166,   126,   129,   129,   129,   129,
      98,    98,   138,   139,   140,   141,   142,   143,    96,    33,
      52,    55,   149,    75,   132,   133,   134,   135,   144,    82,
     147,    56,    57,    88,   150,     2,    72,    34,    73,   104,
     105,   -43,    35,    89,    36,    37,    38,    90,   -44,    88,
      39,   104,   105,   163,   164,   -43,    26,    83,   100,   101,
     102,   103,   -44,    90,   130,    22,    27,   173,    28,    84,
      23,   100,   101,   102,   103,    40,    40,    41,    41,    42,
      42,    43,    43,   106,   107,   108,   109,   110,   111,    40,
      85,    41,    86,    42,    87,    43,   104,   105,   102,   103,
      93,    92,   112,   116,   117,   118,   115,   153,   128,   127,
     148,   145,   152,   151,   154,   156,    99,   158,   159,   161,
     165,   170,   162,   167,   168,   171,   172,    14,   174,    24
};

static const yytype_uint8 yycheck[] =
{
      23,    46,    23,    27,    23,    54,    23,    32,     4,    38,
      34,     7,     8,     0,   151,     7,   114,     7,     4,    53,
      38,    55,     8,    46,     8,    46,    10,    46,   165,    46,
     128,    23,    28,    82,    83,    10,     0,    29,    54,    38,
      24,     9,    38,    39,     7,    37,    10,    22,    82,    83,
     148,     8,    38,    39,    12,   104,   105,     4,    26,    27,
      94,     8,    38,    39,   162,    89,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    94,     7,
      39,    28,     9,    38,   100,   101,   102,   103,   112,     8,
     115,    38,    39,    10,     9,    23,    36,    25,    38,    26,
      27,    10,    30,    20,    32,    33,    34,    24,    10,    10,
      38,    26,    27,   158,   159,    24,    10,     8,     3,     4,
       5,     6,    24,    24,     9,     7,    20,   172,    22,     7,
      12,     3,     4,     5,     6,   158,   159,   158,   159,   158,
     159,   158,   159,    14,    15,    16,    17,    18,    19,   172,
       7,   172,     8,   172,     7,   172,    26,    27,     5,     6,
      11,    13,    20,     9,    13,     7,    21,    11,    22,    38,
      35,    39,     9,    21,     7,    11,    55,    12,    12,    20,
      12,    31,    22,    13,    13,    13,    12,     2,    13,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    23,    29,    37,    65,    67,    69,    70,    74,
      77,    79,    80,    38,    42,    43,    61,    62,    63,    64,
      38,    38,     7,    12,    79,     0,    10,    20,    22,     7,
       7,     8,    12,     7,    25,    30,    32,    33,    34,    38,
      50,    52,    53,    58,    59,    65,    71,    72,    73,    75,
      76,    78,    39,     4,     8,    28,    38,    39,    44,    45,
      46,    47,    48,    49,    50,    52,    53,    54,    55,    56,
      57,    58,    36,    38,    41,    38,    42,    66,    68,    66,
       7,    44,     8,     8,     7,     7,     8,     7,    10,    20,
      24,    78,    13,    11,     8,    49,    45,    46,    49,    54,
       3,     4,     5,     6,    26,    27,    14,    15,    16,    17,
      18,    19,    20,    10,    22,    21,     9,    13,     7,    46,
      46,    44,    60,    38,    39,    51,    44,    38,    22,    49,
       9,     9,    45,    45,    45,    45,    46,    46,    49,    49,
      49,    49,    49,    49,    44,    39,    41,    66,    35,     9,
       9,    21,     9,    11,     7,    41,    11,    41,    12,    12,
      60,    20,    22,    78,    78,    12,    41,    13,    13,    60,
      31,    13,    12,    78,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    43,    44,    44,
      45,    45,    46,    46,    47,    47,    47,    47,    48,    49,
      49,    49,    49,    49,    49,    49,    50,    51,    51,    52,
      53,    54,    54,    54,    55,    55,    56,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    59,    60,    60,    60,
      61,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    66,    67,    68,    69,    69,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    74,
      75,    76,    76,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     2,     1,
       1,     3,     1,     1,     1,     1,     4,     1,     1,     4,
       3,     1,     3,     1,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     4,     3,     1,     0,
       5,     3,    10,     3,     1,     6,     4,     3,     3,     3,
       1,     0,     5,     1,     5,     7,     4,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     7,    11,     7,     2,
       2,     3,     2,     1,     1,     1,     1,     1,     2,     0,
       2,     0,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Type: INT  */
#line 151 "parser.yacc"
   {
  (yyval.type) = A_NativeType((yyvsp[0].pos),A_intTypeKind);
}
#line 1282 "y.tab.cpp"
    break;

  case 3: /* Type: Id  */
#line 155 "parser.yacc"
  {
  (yyval.type) = A_StructType((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1290 "y.tab.cpp"
    break;

  case 4: /* VarDecl: VarDeclScalar  */
#line 163 "parser.yacc"
             {
  (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[0].varDeclScalar)->pos,(yyvsp[0].varDeclScalar));
}
#line 1298 "y.tab.cpp"
    break;

  case 5: /* VarDecl: VarDeclArray  */
#line 167 "parser.yacc"
            {
  (yyval.varDecl) = A_VarDecl_Array((yyvsp[0].varDeclArray)->pos,(yyvsp[0].varDeclArray));
}
#line 1306 "y.tab.cpp"
    break;

  case 6: /* VarDef: VarDefScalar  */
#line 176 "parser.yacc"
            {
  (yyval.varDef) = A_VarDef_Scalar((yyvsp[0].varDefScalar)->pos,(yyvsp[0].varDefScalar));
}
#line 1314 "y.tab.cpp"
    break;

  case 7: /* VarDef: VarDefArray  */
#line 180 "parser.yacc"
           {
  (yyval.varDef) = A_VarDef_Array((yyvsp[0].varDefArray)->pos,(yyvsp[0].varDefArray));
}
#line 1322 "y.tab.cpp"
    break;

  case 8: /* RightVal: ArithExpr  */
#line 188 "parser.yacc"
         {
  (yyval.rightVal) = A_ArithExprRVal((yyvsp[0].arithExpr)->pos,(yyvsp[0].arithExpr));
}
#line 1330 "y.tab.cpp"
    break;

  case 9: /* RightVal: BoolExpr  */
#line 192 "parser.yacc"
        {
  (yyval.rightVal) = A_BoolExprRVal((yyvsp[0].boolExpr)->pos,(yyvsp[0].boolExpr));
}
#line 1338 "y.tab.cpp"
    break;

  case 10: /* ArithExpr: ArithBiOpExpr  */
#line 200 "parser.yacc"
             {
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[0].arithBiOpExpr)->pos,(yyvsp[0].arithBiOpExpr));
}
#line 1346 "y.tab.cpp"
    break;

  case 11: /* ArithExpr: ExprUnit  */
#line 204 "parser.yacc"
        {
  (yyval.arithExpr) = A_ExprUnit((yyvsp[0].exprUnit)->pos,(yyvsp[0].exprUnit));
}
#line 1354 "y.tab.cpp"
    break;

  case 12: /* BoolExpr: BoolBiOpExpr  */
#line 212 "parser.yacc"
            {
  (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[0].boolBiOpExpr)->pos,(yyvsp[0].boolBiOpExpr));
}
#line 1362 "y.tab.cpp"
    break;

  case 13: /* BoolExpr: BoolUnit  */
#line 216 "parser.yacc"
        {
  (yyval.boolExpr) = A_BoolExpr((yyvsp[0].boolUnit)->pos,(yyvsp[0].boolUnit));
}
#line 1370 "y.tab.cpp"
    break;

  case 14: /* ArithBiOpExpr: ArithExpr ADD ArithExpr  */
#line 223 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_add,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1378 "y.tab.cpp"
    break;

  case 15: /* ArithBiOpExpr: ArithExpr SUB ArithExpr  */
#line 227 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_sub,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1386 "y.tab.cpp"
    break;

  case 16: /* ArithBiOpExpr: ArithExpr MUL ArithExpr  */
#line 231 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_mul,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1394 "y.tab.cpp"
    break;

  case 17: /* ArithBiOpExpr: ArithExpr DIV ArithExpr  */
#line 235 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_div,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1402 "y.tab.cpp"
    break;

  case 18: /* ArithUExpr: SUB ExprUnit  */
#line 242 "parser.yacc"
            {
  (yyval.arithUExpr) = A_ArithUExpr((yyvsp[-1].pos),A_neg,(yyvsp[0].exprUnit));
}
#line 1410 "y.tab.cpp"
    break;

  case 19: /* ExprUnit: Num  */
#line 255 "parser.yacc"
   {
  (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num);
}
#line 1418 "y.tab.cpp"
    break;

  case 20: /* ExprUnit: Id  */
#line 259 "parser.yacc"
  {
  (yyval.exprUnit) = A_IdExprUnit((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1426 "y.tab.cpp"
    break;

  case 21: /* ExprUnit: LEFT_PARENT ArithExpr RIGHT_PARENT  */
#line 263 "parser.yacc"
                                   { 
  (yyval.exprUnit) = A_ArithExprUnit((yyvsp[-2].pos),(yyvsp[-1].arithExpr)); //括号是Apos类型
}
#line 1434 "y.tab.cpp"
    break;

  case 22: /* ExprUnit: FnCall  */
#line 267 "parser.yacc"
      {
  (yyval.exprUnit) = A_CallExprUnit((yyvsp[0].fnCall)->pos,(yyvsp[0].fnCall));
}
#line 1442 "y.tab.cpp"
    break;

  case 23: /* ExprUnit: ArrayExpr  */
#line 271 "parser.yacc"
         {
  (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr));
}
#line 1450 "y.tab.cpp"
    break;

  case 24: /* ExprUnit: MemberExpr  */
#line 275 "parser.yacc"
          {
  (yyval.exprUnit) = A_MemberExprUnit((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr));
}
#line 1458 "y.tab.cpp"
    break;

  case 25: /* ExprUnit: ArithUExpr  */
#line 279 "parser.yacc"
          {
  (yyval.exprUnit) = A_ArithUExprUnit((yyvsp[0].arithUExpr)->pos,(yyvsp[0].arithUExpr));
}
#line 1466 "y.tab.cpp"
    break;

  case 26: /* FnCall: Id LEFT_PARENT RightValList RIGHT_PARENT  */
#line 286 "parser.yacc"
                                        {
  (yyval.fnCall) = A_FnCall((yyvsp[-3].tokenId)->pos,(yyvsp[-3].tokenId)->id,(yyvsp[-1].rightValList));
}
#line 1474 "y.tab.cpp"
    break;

  case 27: /* IndexExpr: Num  */
#line 294 "parser.yacc"
   {
  (yyval.indexExpr) = A_NumIndexExpr((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num);
}
#line 1482 "y.tab.cpp"
    break;

  case 28: /* IndexExpr: Id  */
#line 298 "parser.yacc"
  {
  (yyval.indexExpr) = A_IdIndexExpr((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1490 "y.tab.cpp"
    break;

  case 29: /* ArrayExpr: LeftVal LEFT_SQUARE_BRACKET IndexExpr RIGHT_SQUARE_BRACKET  */
#line 305 "parser.yacc"
                                                          {
  (yyval.arrayExpr) = A_ArrayExpr((yyvsp[-3].leftVal)->pos,(yyvsp[-3].leftVal),(yyvsp[-1].indexExpr));
}
#line 1498 "y.tab.cpp"
    break;

  case 30: /* MemberExpr: LeftVal POINT Id  */
#line 312 "parser.yacc"
                {
  (yyval.memberExpr) = A_MemberExpr((yyvsp[-2].leftVal)->pos,(yyvsp[-2].leftVal),(yyvsp[0].tokenId)->id);
}
#line 1506 "y.tab.cpp"
    break;

  case 31: /* BoolUnit: ComExpr  */
#line 322 "parser.yacc"
       {
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[0].comExpr)->pos,(yyvsp[0].comExpr));
}
#line 1514 "y.tab.cpp"
    break;

  case 32: /* BoolUnit: LEFT_PARENT BoolExpr RIGHT_PARENT  */
#line 326 "parser.yacc"
                                 {
  (yyval.boolUnit) = A_BoolExprUnit((yyvsp[-2].pos),(yyvsp[-1].boolExpr));
}
#line 1522 "y.tab.cpp"
    break;

  case 33: /* BoolUnit: BoolUOpExpr  */
#line 330 "parser.yacc"
           {
  (yyval.boolUnit) = A_BoolUOpExprUnit((yyvsp[0].boolUOpExpr)->pos,(yyvsp[0].boolUOpExpr));
}
#line 1530 "y.tab.cpp"
    break;

  case 34: /* BoolBiOpExpr: BoolExpr OR BoolExpr  */
#line 337 "parser.yacc"
                    {
  (yyval.boolBiOpExpr) = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos,A_or,(yyvsp[-2].boolExpr),(yyvsp[0].boolExpr));
}
#line 1538 "y.tab.cpp"
    break;

  case 35: /* BoolBiOpExpr: BoolExpr AND BoolExpr  */
#line 341 "parser.yacc"
                     {
  (yyval.boolBiOpExpr) = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos,A_and,(yyvsp[-2].boolExpr),(yyvsp[0].boolExpr));
}
#line 1546 "y.tab.cpp"
    break;

  case 36: /* BoolUOpExpr: NOT BoolUnit  */
#line 348 "parser.yacc"
            {
  (yyval.boolUOpExpr) = A_BoolUOpExpr((yyvsp[-1].pos),A_not,(yyvsp[0].boolUnit));
}
#line 1554 "y.tab.cpp"
    break;

  case 37: /* ComExpr: ExprUnit GREATER ExprUnit  */
#line 355 "parser.yacc"
                         {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_gt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1562 "y.tab.cpp"
    break;

  case 38: /* ComExpr: ExprUnit NOT_GREATER_THEN ExprUnit  */
#line 359 "parser.yacc"
                                  {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_le,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1570 "y.tab.cpp"
    break;

  case 39: /* ComExpr: ExprUnit LESS ExprUnit  */
#line 363 "parser.yacc"
                      {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_lt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1578 "y.tab.cpp"
    break;

  case 40: /* ComExpr: ExprUnit NOT_LESS_THEN ExprUnit  */
#line 367 "parser.yacc"
                               {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ge,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1586 "y.tab.cpp"
    break;

  case 41: /* ComExpr: ExprUnit NOT_EQUAL ExprUnit  */
#line 371 "parser.yacc"
                           {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ne,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1594 "y.tab.cpp"
    break;

  case 42: /* ComExpr: ExprUnit EQUAL ExprUnit  */
#line 375 "parser.yacc"
                       {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_eq,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1602 "y.tab.cpp"
    break;

  case 43: /* LeftVal: ArrayExpr  */
#line 384 "parser.yacc"
         {
  (yyval.leftVal) = A_ArrExprLVal((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr));
}
#line 1610 "y.tab.cpp"
    break;

  case 44: /* LeftVal: MemberExpr  */
#line 388 "parser.yacc"
          {
  (yyval.leftVal) = A_MemberExprLVal((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr));
}
#line 1618 "y.tab.cpp"
    break;

  case 45: /* LeftVal: Id  */
#line 392 "parser.yacc"
  {
  (yyval.leftVal) = A_IdExprLVal((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1626 "y.tab.cpp"
    break;

  case 46: /* AssignStmt: LeftVal ASSIGN RightVal SEMICOLON  */
#line 400 "parser.yacc"
                                 {
 (yyval.assignStmt) = A_AssignStmt((yyvsp[-3].leftVal)->pos,(yyvsp[-3].leftVal),(yyvsp[-1].rightVal));
}
#line 1634 "y.tab.cpp"
    break;

  case 47: /* RightValList: RightVal COMMA RightValList  */
#line 407 "parser.yacc"
                           {
  (yyval.rightValList) = A_RightValList((yyvsp[-2].rightVal),(yyvsp[0].rightValList));
}
#line 1642 "y.tab.cpp"
    break;

  case 48: /* RightValList: RightVal  */
#line 411 "parser.yacc"
        {
  (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal),NULL);
}
#line 1650 "y.tab.cpp"
    break;

  case 49: /* RightValList: %empty  */
#line 415 "parser.yacc"
{
  (yyval.rightValList) = NULL;
}
#line 1658 "y.tab.cpp"
    break;

  case 50: /* VarDefScalar: Id COLON Type ASSIGN RightVal  */
#line 422 "parser.yacc"
                             {
  (yyval.varDefScalar) = A_VarDefScalar((yyvsp[-4].tokenId)->pos,(yyvsp[-4].tokenId)->id,(yyvsp[-2].type),(yyvsp[0].rightVal));
}
#line 1666 "y.tab.cpp"
    break;

  case 51: /* VarDefScalar: Id ASSIGN RightVal  */
#line 426 "parser.yacc"
                  {
  (yyval.varDefScalar) = A_VarDefScalar((yyvsp[-2].tokenId)->pos,(yyvsp[-2].tokenId)->id,NULL,(yyvsp[0].rightVal));
}
#line 1674 "y.tab.cpp"
    break;

  case 52: /* VarDefArray: Id LEFT_SQUARE_BRACKET Num RIGHT_SQUARE_BRACKET COLON Type ASSIGN LEFT_BRACE RightValList RIGHT_BRACE  */
#line 433 "parser.yacc"
                                                                                                     {
  (yyval.varDefArray) = A_VarDefArray((yyvsp[-9].tokenId)->pos,(yyvsp[-9].tokenId)->id,(yyvsp[-7].tokenNum)->num,(yyvsp[-4].type),(yyvsp[-1].rightValList));
}
#line 1682 "y.tab.cpp"
    break;

  case 53: /* VarDeclScalar: Id COLON Type  */
#line 440 "parser.yacc"
             {
  (yyval.varDeclScalar) = A_VarDeclScalar((yyvsp[-2].tokenId)->pos,(yyvsp[-2].tokenId)->id,(yyvsp[0].type));
}
#line 1690 "y.tab.cpp"
    break;

  case 54: /* VarDeclScalar: Id  */
#line 444 "parser.yacc"
  {
  (yyval.varDeclScalar) = A_VarDeclScalar((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id,NULL);
}
#line 1698 "y.tab.cpp"
    break;

  case 55: /* VarDeclArray: Id LEFT_SQUARE_BRACKET Num RIGHT_SQUARE_BRACKET COLON Type  */
#line 451 "parser.yacc"
                                                          {
  (yyval.varDeclArray) = A_VarDeclArray((yyvsp[-5].tokenId)->pos,(yyvsp[-5].tokenId)->id,(yyvsp[-3].tokenNum)->num,(yyvsp[0].type));
}
#line 1706 "y.tab.cpp"
    break;

  case 56: /* VarDeclArray: Id LEFT_SQUARE_BRACKET Num RIGHT_SQUARE_BRACKET  */
#line 455 "parser.yacc"
                                               {
  (yyval.varDeclArray) = A_VarDeclArray((yyvsp[-3].tokenId)->pos,(yyvsp[-3].tokenId)->id,(yyvsp[-1].tokenNum)->num,NULL);
}
#line 1714 "y.tab.cpp"
    break;

  case 57: /* VarDeclStmt: LET VarDecl SEMICOLON  */
#line 465 "parser.yacc"
                     {
  (yyval.varDeclStmt) = A_VarDeclStmt((yyvsp[-2].pos),(yyvsp[-1].varDecl));
}
#line 1722 "y.tab.cpp"
    break;

  case 58: /* VarDeclStmt: LET VarDef SEMICOLON  */
#line 469 "parser.yacc"
                    {
  (yyval.varDeclStmt) = A_VarDefStmt((yyvsp[-2].pos),(yyvsp[-1].varDef));
}
#line 1730 "y.tab.cpp"
    break;

  case 59: /* VarDeclList: VarDecl COMMA VarDeclList  */
#line 477 "parser.yacc"
                         {
  (yyval.varDeclList) = A_VarDeclList((yyvsp[-2].varDecl),(yyvsp[0].varDeclList));
}
#line 1738 "y.tab.cpp"
    break;

  case 60: /* VarDeclList: VarDecl  */
#line 481 "parser.yacc"
       {
  (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl),NULL);
}
#line 1746 "y.tab.cpp"
    break;

  case 61: /* VarDeclList: %empty  */
#line 485 "parser.yacc"
{
  (yyval.varDeclList) = NULL;
}
#line 1754 "y.tab.cpp"
    break;

  case 62: /* StructDef: STRUCT Id LEFT_BRACE VarDeclList RIGHT_BRACE  */
#line 493 "parser.yacc"
                                            {
  (yyval.structDef) = A_StructDef((yyvsp[-4].pos),(yyvsp[-3].tokenId)->id,(yyvsp[-1].varDeclList));
}
#line 1762 "y.tab.cpp"
    break;

  case 63: /* ParamDecl: VarDeclList  */
#line 500 "parser.yacc"
           {
  (yyval.paramDecl) = A_ParamDecl((yyvsp[0].varDeclList));
}
#line 1770 "y.tab.cpp"
    break;

  case 64: /* FnDecl: FN Id LEFT_PARENT ParamDecl RIGHT_PARENT  */
#line 508 "parser.yacc"
                                        {
  (yyval.fnDecl) = A_FnDecl((yyvsp[-4].pos),(yyvsp[-3].tokenId)->id,(yyvsp[-1].paramDecl),NULL);
}
#line 1778 "y.tab.cpp"
    break;

  case 65: /* FnDecl: FN Id LEFT_PARENT ParamDecl RIGHT_PARENT RIGHT_ARROW Type  */
#line 512 "parser.yacc"
                                                         {
  (yyval.fnDecl) = A_FnDecl((yyvsp[-6].pos),(yyvsp[-5].tokenId)->id,(yyvsp[-3].paramDecl),(yyvsp[0].type));
}
#line 1786 "y.tab.cpp"
    break;

  case 66: /* FnDef: FnDecl LEFT_BRACE CodeBlockStmtList RIGHT_BRACE  */
#line 519 "parser.yacc"
                                               {
  (yyval.fnDef) = A_FnDef((yyvsp[-3].fnDecl)->pos,(yyvsp[-3].fnDecl),(yyvsp[-1].codeBlockStmtList));
}
#line 1794 "y.tab.cpp"
    break;

  case 67: /* CodeBlockStmt: VarDeclStmt  */
#line 534 "parser.yacc"
           {
  (yyval.codeBlockStmt) = A_BlockVarDeclStmt((yyvsp[0].varDeclStmt)->pos,(yyvsp[0].varDeclStmt));
}
#line 1802 "y.tab.cpp"
    break;

  case 68: /* CodeBlockStmt: AssignStmt  */
#line 538 "parser.yacc"
          {
  (yyval.codeBlockStmt) = A_BlockAssignStmt((yyvsp[0].assignStmt)->pos,(yyvsp[0].assignStmt));
}
#line 1810 "y.tab.cpp"
    break;

  case 69: /* CodeBlockStmt: CallStmt  */
#line 542 "parser.yacc"
        {
  (yyval.codeBlockStmt) = A_BlockCallStmt((yyvsp[0].callStmt)->pos,(yyvsp[0].callStmt));
}
#line 1818 "y.tab.cpp"
    break;

  case 70: /* CodeBlockStmt: IfStmt  */
#line 546 "parser.yacc"
      {
  (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[0].ifStmt)->pos,(yyvsp[0].ifStmt));
}
#line 1826 "y.tab.cpp"
    break;

  case 71: /* CodeBlockStmt: WhileStmt  */
#line 550 "parser.yacc"
         {
  (yyval.codeBlockStmt) = A_BlockWhileStmt((yyvsp[0].whileStmt)->pos,(yyvsp[0].whileStmt));
}
#line 1834 "y.tab.cpp"
    break;

  case 72: /* CodeBlockStmt: ReturnStmt  */
#line 554 "parser.yacc"
          {
  (yyval.codeBlockStmt) = A_BlockReturnStmt((yyvsp[0].returnStmt)->pos,(yyvsp[0].returnStmt));
}
#line 1842 "y.tab.cpp"
    break;

  case 73: /* CodeBlockStmt: CONTINUE SEMICOLON  */
#line 558 "parser.yacc"
                  {
  (yyval.codeBlockStmt) = A_BlockContinueStmt((yyvsp[-1].pos));
}
#line 1850 "y.tab.cpp"
    break;

  case 74: /* CodeBlockStmt: BREAK SEMICOLON  */
#line 562 "parser.yacc"
               {
  (yyval.codeBlockStmt) = A_BlockBreakStmt((yyvsp[-1].pos));
}
#line 1858 "y.tab.cpp"
    break;

  case 75: /* CodeBlockStmt: SEMICOLON  */
#line 566 "parser.yacc"
         {
  (yyval.codeBlockStmt) = A_BlockNullStmt((yyvsp[0].pos));
}
#line 1866 "y.tab.cpp"
    break;

  case 76: /* IfStmt: IF LEFT_PARENT BoolExpr RIGHT_PARENT LEFT_BRACE CodeBlockStmtList RIGHT_BRACE  */
#line 573 "parser.yacc"
                                                                             {
  (yyval.ifStmt) = A_IfStmt((yyvsp[-6].pos),(yyvsp[-4].boolExpr),(yyvsp[-1].codeBlockStmtList),NULL);
}
#line 1874 "y.tab.cpp"
    break;

  case 77: /* IfStmt: IF LEFT_PARENT BoolExpr RIGHT_PARENT LEFT_BRACE CodeBlockStmtList RIGHT_BRACE ELSE LEFT_BRACE CodeBlockStmtList RIGHT_BRACE  */
#line 577 "parser.yacc"
                                                                                                                           {
  (yyval.ifStmt) = A_IfStmt((yyvsp[-10].pos),(yyvsp[-8].boolExpr),(yyvsp[-5].codeBlockStmtList),(yyvsp[-1].codeBlockStmtList));
}
#line 1882 "y.tab.cpp"
    break;

  case 78: /* WhileStmt: WHILE LEFT_PARENT BoolExpr RIGHT_PARENT LEFT_BRACE CodeBlockStmtList RIGHT_BRACE  */
#line 585 "parser.yacc"
                                                                                {
  (yyval.whileStmt) = A_WhileStmt((yyvsp[-6].pos),(yyvsp[-4].boolExpr),(yyvsp[-1].codeBlockStmtList));
}
#line 1890 "y.tab.cpp"
    break;

  case 79: /* FnDeclStmt: FnDecl SEMICOLON  */
#line 592 "parser.yacc"
                {
  (yyval.fnDeclStmt) = A_FnDeclStmt((yyvsp[-1].fnDecl)->pos,(yyvsp[-1].fnDecl));
}
#line 1898 "y.tab.cpp"
    break;

  case 80: /* CallStmt: FnCall SEMICOLON  */
#line 599 "parser.yacc"
                {
  (yyval.callStmt) = A_CallStmt((yyvsp[-1].fnCall)->pos,(yyvsp[-1].fnCall));
}
#line 1906 "y.tab.cpp"
    break;

  case 81: /* ReturnStmt: RET RightVal SEMICOLON  */
#line 606 "parser.yacc"
                      {
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-2].pos),(yyvsp[-1].rightVal));
}
#line 1914 "y.tab.cpp"
    break;

  case 82: /* ReturnStmt: RET SEMICOLON  */
#line 609 "parser.yacc"
               {
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-1].pos),NULL);
}
#line 1922 "y.tab.cpp"
    break;

  case 83: /* ProgramElement: VarDeclStmt  */
#line 622 "parser.yacc"
{
  (yyval.programElement) = A_ProgramVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
}
#line 1930 "y.tab.cpp"
    break;

  case 84: /* ProgramElement: StructDef  */
#line 626 "parser.yacc"
{
  (yyval.programElement) = A_ProgramStructDef((yyvsp[0].structDef)->pos, (yyvsp[0].structDef));
}
#line 1938 "y.tab.cpp"
    break;

  case 85: /* ProgramElement: FnDeclStmt  */
#line 630 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDeclStmt((yyvsp[0].fnDeclStmt)->pos, (yyvsp[0].fnDeclStmt));
}
#line 1946 "y.tab.cpp"
    break;

  case 86: /* ProgramElement: FnDef  */
#line 634 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDef((yyvsp[0].fnDef)->pos, (yyvsp[0].fnDef));
}
#line 1954 "y.tab.cpp"
    break;

  case 87: /* ProgramElement: SEMICOLON  */
#line 638 "parser.yacc"
{
  (yyval.programElement) = A_ProgramNullStmt((yyvsp[0].pos));
}
#line 1962 "y.tab.cpp"
    break;

  case 88: /* CodeBlockStmtList: CodeBlockStmt CodeBlockStmtList  */
#line 646 "parser.yacc"
                               {
  (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[-1].codeBlockStmt),(yyvsp[0].codeBlockStmtList));
}
#line 1970 "y.tab.cpp"
    break;

  case 89: /* CodeBlockStmtList: %empty  */
#line 650 "parser.yacc"
{
  (yyval.codeBlockStmtList) = NULL;
}
#line 1978 "y.tab.cpp"
    break;

  case 90: /* ProgramElementList: ProgramElement ProgramElementList  */
#line 657 "parser.yacc"
                                 {
  (yyval.programElementList) = A_ProgramElementList((yyvsp[-1].programElement),(yyvsp[0].programElementList));
}
#line 1986 "y.tab.cpp"
    break;

  case 91: /* ProgramElementList: %empty  */
#line 661 "parser.yacc"
{
  (yyval.programElementList) = NULL;
}
#line 1994 "y.tab.cpp"
    break;

  case 92: /* Program: ProgramElementList  */
#line 669 "parser.yacc"
{  
  root = A_Program((yyvsp[0].programElementList));
  (yyval.program) = A_Program((yyvsp[0].programElementList));
}
#line 2003 "y.tab.cpp"
    break;


#line 2007 "y.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 675 "parser.yacc"


extern "C"{
void yyerror(char * s)
{
  fprintf(stderr, "%s\n",s);
}
int yywrap()
{
  return(1);
}
}


