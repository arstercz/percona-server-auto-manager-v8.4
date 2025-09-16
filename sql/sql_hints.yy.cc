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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         MY_HINT_PARSER_STYPE
/* Substitute the variable and function names.  */
#define yyparse         my_hint_parser_parse
#define yylex           my_hint_parser_lex
#define yyerror         my_hint_parser_error
#define yydebug         my_hint_parser_debug
#define yynerrs         my_hint_parser_nerrs

/* First part of user prologue.  */
#line 29 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"

#include <assert.h>
#include <climits>
#include <cstdlib>

#include "lex_string.h"
#include "m_string.h"

#include "my_double2ulonglong.h"
#include "my_inttypes.h"  // TODO: replace with cstdint
#include "mysqld_error.h"
#include "sql/derror.h"
#include "sql/item.h"
#include "sql/item_subselect.h"
#include "sql/lexer_yystype.h"
#include "sql/opt_hints.h"
#include "sql/parse_tree_helpers.h"  // check_resource_group_name_len
#include "sql/parse_tree_hints.h"
#include "sql/parser_yystype.h"
#include "sql/sql_class.h"
#include "sql/sql_const.h"
#include "sql/sql_error.h"
#include "sql/sql_hints.yy.h"
#include "sql/sql_lex_hints.h"

#define NEW_PTN new (thd->mem_root)

static bool parse_int(longlong *to, const char *from, size_t from_length)
{
  int error;
  const char *end= from + from_length;
  *to= my_strtoll10(from, &end, &error);
  return error != 0 || end != from + from_length;
}

// ODR violation here as well, so rename yysymbol_kind_t
#define yysymbol_kind_t my_hint_parser_symbol_kind_t


#line 117 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"

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

#include "sql_hints.yy.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAX_EXECUTION_TIME_HINT = 3,    /* MAX_EXECUTION_TIME_HINT  */
  YYSYMBOL_RESOURCE_GROUP_HINT = 4,        /* RESOURCE_GROUP_HINT  */
  YYSYMBOL_BKA_HINT = 5,                   /* BKA_HINT  */
  YYSYMBOL_BNL_HINT = 6,                   /* BNL_HINT  */
  YYSYMBOL_DUPSWEEDOUT_HINT = 7,           /* DUPSWEEDOUT_HINT  */
  YYSYMBOL_FIRSTMATCH_HINT = 8,            /* FIRSTMATCH_HINT  */
  YYSYMBOL_INTOEXISTS_HINT = 9,            /* INTOEXISTS_HINT  */
  YYSYMBOL_LOOSESCAN_HINT = 10,            /* LOOSESCAN_HINT  */
  YYSYMBOL_MATERIALIZATION_HINT = 11,      /* MATERIALIZATION_HINT  */
  YYSYMBOL_NO_BKA_HINT = 12,               /* NO_BKA_HINT  */
  YYSYMBOL_NO_BNL_HINT = 13,               /* NO_BNL_HINT  */
  YYSYMBOL_NO_ICP_HINT = 14,               /* NO_ICP_HINT  */
  YYSYMBOL_NO_MRR_HINT = 15,               /* NO_MRR_HINT  */
  YYSYMBOL_NO_RANGE_OPTIMIZATION_HINT = 16, /* NO_RANGE_OPTIMIZATION_HINT  */
  YYSYMBOL_NO_SEMIJOIN_HINT = 17,          /* NO_SEMIJOIN_HINT  */
  YYSYMBOL_MRR_HINT = 18,                  /* MRR_HINT  */
  YYSYMBOL_QB_NAME_HINT = 19,              /* QB_NAME_HINT  */
  YYSYMBOL_SEMIJOIN_HINT = 20,             /* SEMIJOIN_HINT  */
  YYSYMBOL_SUBQUERY_HINT = 21,             /* SUBQUERY_HINT  */
  YYSYMBOL_DERIVED_MERGE_HINT = 22,        /* DERIVED_MERGE_HINT  */
  YYSYMBOL_NO_DERIVED_MERGE_HINT = 23,     /* NO_DERIVED_MERGE_HINT  */
  YYSYMBOL_JOIN_PREFIX_HINT = 24,          /* JOIN_PREFIX_HINT  */
  YYSYMBOL_JOIN_SUFFIX_HINT = 25,          /* JOIN_SUFFIX_HINT  */
  YYSYMBOL_JOIN_ORDER_HINT = 26,           /* JOIN_ORDER_HINT  */
  YYSYMBOL_JOIN_FIXED_ORDER_HINT = 27,     /* JOIN_FIXED_ORDER_HINT  */
  YYSYMBOL_INDEX_MERGE_HINT = 28,          /* INDEX_MERGE_HINT  */
  YYSYMBOL_NO_INDEX_MERGE_HINT = 29,       /* NO_INDEX_MERGE_HINT  */
  YYSYMBOL_SET_VAR_HINT = 30,              /* SET_VAR_HINT  */
  YYSYMBOL_SKIP_SCAN_HINT = 31,            /* SKIP_SCAN_HINT  */
  YYSYMBOL_NO_SKIP_SCAN_HINT = 32,         /* NO_SKIP_SCAN_HINT  */
  YYSYMBOL_HASH_JOIN_HINT = 33,            /* HASH_JOIN_HINT  */
  YYSYMBOL_NO_HASH_JOIN_HINT = 34,         /* NO_HASH_JOIN_HINT  */
  YYSYMBOL_HINT_ARG_NUMBER = 35,           /* HINT_ARG_NUMBER  */
  YYSYMBOL_HINT_ARG_IDENT = 36,            /* HINT_ARG_IDENT  */
  YYSYMBOL_HINT_ARG_QB_NAME = 37,          /* HINT_ARG_QB_NAME  */
  YYSYMBOL_HINT_ARG_TEXT = 38,             /* HINT_ARG_TEXT  */
  YYSYMBOL_HINT_IDENT_OR_NUMBER_WITH_SCALE = 39, /* HINT_IDENT_OR_NUMBER_WITH_SCALE  */
  YYSYMBOL_HINT_CLOSE = 40,                /* HINT_CLOSE  */
  YYSYMBOL_HINT_ERROR = 41,                /* HINT_ERROR  */
  YYSYMBOL_INDEX_HINT = 42,                /* INDEX_HINT  */
  YYSYMBOL_NO_INDEX_HINT = 43,             /* NO_INDEX_HINT  */
  YYSYMBOL_JOIN_INDEX_HINT = 44,           /* JOIN_INDEX_HINT  */
  YYSYMBOL_NO_JOIN_INDEX_HINT = 45,        /* NO_JOIN_INDEX_HINT  */
  YYSYMBOL_GROUP_INDEX_HINT = 46,          /* GROUP_INDEX_HINT  */
  YYSYMBOL_NO_GROUP_INDEX_HINT = 47,       /* NO_GROUP_INDEX_HINT  */
  YYSYMBOL_ORDER_INDEX_HINT = 48,          /* ORDER_INDEX_HINT  */
  YYSYMBOL_NO_ORDER_INDEX_HINT = 49,       /* NO_ORDER_INDEX_HINT  */
  YYSYMBOL_DERIVED_CONDITION_PUSHDOWN_HINT = 50, /* DERIVED_CONDITION_PUSHDOWN_HINT  */
  YYSYMBOL_NO_DERIVED_CONDITION_PUSHDOWN_HINT = 51, /* NO_DERIVED_CONDITION_PUSHDOWN_HINT  */
  YYSYMBOL_HINT_ARG_FLOATING_POINT_NUMBER = 52, /* HINT_ARG_FLOATING_POINT_NUMBER  */
  YYSYMBOL_53_ = 53,                       /* '('  */
  YYSYMBOL_54_ = 54,                       /* ')'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* '='  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_start = 58,                     /* start  */
  YYSYMBOL_hint_list = 59,                 /* hint_list  */
  YYSYMBOL_hint = 60,                      /* hint  */
  YYSYMBOL_max_execution_time_hint = 61,   /* max_execution_time_hint  */
  YYSYMBOL_opt_hint_param_table_list = 62, /* opt_hint_param_table_list  */
  YYSYMBOL_hint_param_table_list = 63,     /* hint_param_table_list  */
  YYSYMBOL_opt_hint_param_table_list_empty_qb = 64, /* opt_hint_param_table_list_empty_qb  */
  YYSYMBOL_hint_param_table_list_empty_qb = 65, /* hint_param_table_list_empty_qb  */
  YYSYMBOL_opt_hint_param_index_list = 66, /* opt_hint_param_index_list  */
  YYSYMBOL_hint_param_index_list = 67,     /* hint_param_index_list  */
  YYSYMBOL_hint_param_index = 68,          /* hint_param_index  */
  YYSYMBOL_hint_param_table_empty_qb = 69, /* hint_param_table_empty_qb  */
  YYSYMBOL_hint_param_table = 70,          /* hint_param_table  */
  YYSYMBOL_hint_param_table_ext = 71,      /* hint_param_table_ext  */
  YYSYMBOL_opt_qb_name = 72,               /* opt_qb_name  */
  YYSYMBOL_qb_level_hint = 73,             /* qb_level_hint  */
  YYSYMBOL_semijoin_strategies = 74,       /* semijoin_strategies  */
  YYSYMBOL_semijoin_strategy = 75,         /* semijoin_strategy  */
  YYSYMBOL_subquery_strategy = 76,         /* subquery_strategy  */
  YYSYMBOL_table_level_hint = 77,          /* table_level_hint  */
  YYSYMBOL_index_level_hint = 78,          /* index_level_hint  */
  YYSYMBOL_table_level_hint_type_on = 79,  /* table_level_hint_type_on  */
  YYSYMBOL_table_level_hint_type_off = 80, /* table_level_hint_type_off  */
  YYSYMBOL_key_level_hint_type_on = 81,    /* key_level_hint_type_on  */
  YYSYMBOL_key_level_hint_type_off = 82,   /* key_level_hint_type_off  */
  YYSYMBOL_qb_name_hint = 83,              /* qb_name_hint  */
  YYSYMBOL_set_var_hint = 84,              /* set_var_hint  */
  YYSYMBOL_resource_group_hint = 85,       /* resource_group_hint  */
  YYSYMBOL_set_var_ident = 86,             /* set_var_ident  */
  YYSYMBOL_set_var_num_item = 87,          /* set_var_num_item  */
  YYSYMBOL_set_var_text_value = 88,        /* set_var_text_value  */
  YYSYMBOL_set_var_string_item = 89,       /* set_var_string_item  */
  YYSYMBOL_set_var_arg = 90                /* set_var_arg  */
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
         || (defined MY_HINT_PARSER_STYPE_IS_TRIVIAL && MY_HINT_PARSER_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   1050


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
      53,    54,     2,     2,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       2
};

#if MY_HINT_PARSER_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   213,   213,   215,   217,   222,   228,   236,   237,   238,
     239,   240,   241,   242,   247,   267,   268,   272,   278,   287,
     288,   292,   298,   307,   308,   312,   318,   327,   331,   339,
     347,   348,   356,   357,   361,   368,   375,   382,   389,   396,
     403,   410,   417,   424,   433,   434,   438,   445,   446,   447,
     448,   452,   454,   459,   465,   472,   478,   488,   495,   505,
     509,   513,   517,   521,   528,   532,   536,   540,   544,   551,
     555,   559,   563,   567,   571,   575,   579,   586,   590,   594,
     598,   602,   606,   610,   614,   621,   630,   639,   651,   652,
     656,   671,   675,   710,   711,   715,   723,   724
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if MY_HINT_PARSER_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"",
  "MAX_EXECUTION_TIME_HINT", "RESOURCE_GROUP_HINT", "BKA_HINT", "BNL_HINT",
  "DUPSWEEDOUT_HINT", "FIRSTMATCH_HINT", "INTOEXISTS_HINT",
  "LOOSESCAN_HINT", "MATERIALIZATION_HINT", "NO_BKA_HINT", "NO_BNL_HINT",
  "NO_ICP_HINT", "NO_MRR_HINT", "NO_RANGE_OPTIMIZATION_HINT",
  "NO_SEMIJOIN_HINT", "MRR_HINT", "QB_NAME_HINT", "SEMIJOIN_HINT",
  "SUBQUERY_HINT", "DERIVED_MERGE_HINT", "NO_DERIVED_MERGE_HINT",
  "JOIN_PREFIX_HINT", "JOIN_SUFFIX_HINT", "JOIN_ORDER_HINT",
  "JOIN_FIXED_ORDER_HINT", "INDEX_MERGE_HINT", "NO_INDEX_MERGE_HINT",
  "SET_VAR_HINT", "SKIP_SCAN_HINT", "NO_SKIP_SCAN_HINT", "HASH_JOIN_HINT",
  "NO_HASH_JOIN_HINT", "HINT_ARG_NUMBER", "HINT_ARG_IDENT",
  "HINT_ARG_QB_NAME", "HINT_ARG_TEXT", "HINT_IDENT_OR_NUMBER_WITH_SCALE",
  "HINT_CLOSE", "HINT_ERROR", "INDEX_HINT", "NO_INDEX_HINT",
  "JOIN_INDEX_HINT", "NO_JOIN_INDEX_HINT", "GROUP_INDEX_HINT",
  "NO_GROUP_INDEX_HINT", "ORDER_INDEX_HINT", "NO_ORDER_INDEX_HINT",
  "DERIVED_CONDITION_PUSHDOWN_HINT", "NO_DERIVED_CONDITION_PUSHDOWN_HINT",
  "HINT_ARG_FLOATING_POINT_NUMBER", "'('", "')'", "','", "'='", "$accept",
  "start", "hint_list", "hint", "max_execution_time_hint",
  "opt_hint_param_table_list", "hint_param_table_list",
  "opt_hint_param_table_list_empty_qb", "hint_param_table_list_empty_qb",
  "opt_hint_param_index_list", "hint_param_index_list", "hint_param_index",
  "hint_param_table_empty_qb", "hint_param_table", "hint_param_table_ext",
  "opt_qb_name", "qb_level_hint", "semijoin_strategies",
  "semijoin_strategy", "subquery_strategy", "table_level_hint",
  "index_level_hint", "table_level_hint_type_on",
  "table_level_hint_type_off", "key_level_hint_type_on",
  "key_level_hint_type_off", "qb_name_hint", "set_var_hint",
  "resource_group_hint", "set_var_ident", "set_var_num_item",
  "set_var_text_value", "set_var_string_item", "set_var_arg", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-65)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      50,   -34,   -17,   -15,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -13,   -65,    36,    38,    55,   -65,   -65,    57,    59,
      64,    72,   -65,   -65,    81,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   104,
      -1,   -65,   -65,   -65,   -65,   -65,    82,    83,    84,    85,
     -65,   -65,   -65,   -65,    17,   103,   105,   107,   105,   105,
     -27,    22,    51,   105,    -2,   -65,   100,   -65,   -65,    79,
      92,    94,    94,    87,    90,   -65,   116,    91,   116,    26,
     105,   110,    93,    95,   -65,   110,    97,   110,    98,    99,
     -65,   -65,   101,   -65,   110,   102,   110,   106,   112,   -65,
     113,   113,   -65,   -65,   -65,   -65,   -65,   -65,     6,   -65,
     -65,    78,   -65,   -65,   108,   -65,   -65,   109,   111,   -65,
     -65,   118,   114,   -65,   115,   -65,   -65,    67,   117,   -65,
     119,   -65,   -65,   -65,   120,   121,   -65,   123,   -65,   116,
     -65,   -65,   -65,   110,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   124,   -65,   -65,   -65,   113,
     -65,   -65,   -65,   -65,   -65
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    59,    60,    64,    65,    77,    78,
      70,     0,    69,     0,     0,     0,    62,    67,     0,     0,
       0,     0,    71,    79,     0,    72,    80,    61,    66,    73,
      81,    74,    82,    75,    83,    76,    84,    63,    68,     0,
       0,     5,    11,     9,     8,     7,     0,     0,     0,     0,
      10,    12,    13,     4,     0,     0,    32,     0,    32,    32,
      15,    15,    15,    32,     0,     1,     0,     2,     6,    15,
      15,     0,     0,     0,     0,    33,    44,     0,    44,     0,
      32,    19,     0,    16,    17,    19,     0,    19,     0,     0,
      89,    88,     0,     3,    19,     0,    19,     0,     0,    30,
      23,    23,    14,    87,    50,    47,    48,    49,     0,    45,
      85,     0,    52,    51,     0,    29,    28,     0,    20,    21,
      37,     0,     0,    39,     0,    41,    43,     0,     0,    53,
       0,    55,    31,    27,     0,    24,    25,     0,    35,     0,
      34,    36,    38,     0,    18,    40,    42,    90,    93,    94,
      92,    91,    97,    95,    96,     0,    54,    56,    57,     0,
      58,    46,    22,    86,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -65,   -65,   -65,   125,   -65,    52,   -65,    24,   -65,    54,
     -65,     0,    15,   -64,    89,    27,   -65,    86,    28,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    39,    40,    41,    42,    82,    83,   117,   118,   134,
     135,   136,   119,    84,   100,    76,    43,   108,   109,   114,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    92,
     152,   153,   154,   155
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      66,    90,     2,     3,     4,     5,    53,    99,    99,    80,
      81,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    91,   112,    54,   113,    55,    67,
      56,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,     1,    73,     2,     3,     4,     5,   144,    80,    85,
     138,   139,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    78,    79,    80,    87,    57,
      89,    58,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   147,   148,    65,   149,   150,   115,    59,   122,
      60,   124,    61,    86,    88,    80,    94,    62,   128,   151,
     130,    95,    97,   104,   105,    63,   106,   107,    80,    96,
      80,    98,   140,   139,    64,    69,    70,    71,    72,    74,
      93,   102,    75,    77,   103,   110,   116,   120,   132,   133,
     121,   123,   125,   126,    80,   137,   129,   127,   162,   164,
     131,   101,   141,   142,   111,    68,   143,   161,   145,   146,
       0,   156,     0,   157,   158,     0,   159,   160,   163
};

static const yytype_int16 yycheck[] =
{
       1,     3,     3,     4,     5,     6,    40,    71,    72,    36,
      37,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    36,     9,    53,    11,    53,    40,
      53,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     1,    35,     3,     4,     5,     6,   121,    36,    37,
      54,    55,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    58,    59,    36,    37,    53,
      63,    53,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    35,    36,     0,    38,    39,    80,    53,    85,
      53,    87,    53,    61,    62,    36,    37,    53,    94,    52,
      96,    69,    70,     7,     8,    53,    10,    11,    36,    37,
      36,    37,    54,    55,    53,    53,    53,    53,    53,    36,
      40,    54,    37,    36,    54,    54,    36,    54,    36,    36,
      55,    54,    54,    54,    36,   101,    54,    56,   143,   159,
      54,    72,    54,    54,    78,    40,    55,   139,    54,    54,
      -1,    54,    -1,    54,    54,    -1,    55,    54,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    58,
      59,    60,    61,    73,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    40,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,     0,     1,    40,    60,    53,
      53,    53,    53,    35,    36,    37,    72,    36,    72,    72,
      36,    37,    62,    63,    70,    37,    62,    37,    62,    72,
       3,    36,    86,    40,    37,    62,    37,    62,    37,    70,
      71,    71,    54,    54,     7,     8,    10,    11,    74,    75,
      54,    74,     9,    11,    76,    72,    36,    64,    65,    69,
      54,    55,    64,    54,    64,    54,    54,    56,    64,    54,
      64,    54,    36,    36,    66,    67,    68,    66,    54,    55,
      54,    54,    54,    55,    70,    54,    54,    35,    36,    38,
      39,    52,    87,    88,    89,    90,    54,    54,    54,    55,
      54,    75,    69,    54,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    58,    59,    59,    60,    60,    60,
      60,    60,    60,    60,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    69,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    75,    75,    75,
      75,    76,    76,    77,    77,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    84,    85,    86,    86,
      87,    87,    87,    88,    88,    89,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     1,     1,     3,     0,
       1,     1,     3,     0,     1,     1,     3,     1,     1,     2,
       1,     2,     0,     1,     5,     5,     5,     4,     5,     4,
       5,     4,     5,     4,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     4,     5,     4,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = MY_HINT_PARSER_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == MY_HINT_PARSER_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (thd, scanner, ret, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use MY_HINT_PARSER_error or MY_HINT_PARSER_UNDEF. */
#define YYERRCODE MY_HINT_PARSER_UNDEF


/* Enable debugging if requested.  */
#if MY_HINT_PARSER_DEBUG

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
                  Kind, Value, thd, scanner, ret); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (thd);
  YY_USE (scanner);
  YY_USE (ret);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, thd, scanner, ret);
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
                 int yyrule, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], thd, scanner, ret);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, thd, scanner, ret); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !MY_HINT_PARSER_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !MY_HINT_PARSER_DEBUG */


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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
{
  YY_USE (yyvaluep);
  YY_USE (thd);
  YY_USE (scanner);
  YY_USE (ret);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

  yychar = MY_HINT_PARSER_EMPTY; /* Cause a token to be read.  */

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
  if (yychar == MY_HINT_PARSER_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, scanner);
    }

  if (yychar <= MY_HINT_PARSER_EOF)
    {
      yychar = MY_HINT_PARSER_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == MY_HINT_PARSER_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = MY_HINT_PARSER_UNDEF;
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
  yychar = MY_HINT_PARSER_EMPTY;
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
  case 2: /* start: hint_list HINT_CLOSE  */
#line 214 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          { *ret= (yyvsp[-1].hint_list); }
#line 1414 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 3: /* start: hint_list error HINT_CLOSE  */
#line 216 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          { *ret= (yyvsp[-2].hint_list); }
#line 1420 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 4: /* start: error HINT_CLOSE  */
#line 218 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          { *ret= nullptr; }
#line 1426 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 5: /* hint_list: hint  */
#line 223 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_list)= NEW_PTN PT_hint_list(thd->mem_root);
            if ((yyval.hint_list) == nullptr || (yyval.hint_list)->push_back((yyvsp[0].hint)))
              YYABORT; // OOM
          }
#line 1436 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 6: /* hint_list: hint_list hint  */
#line 229 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyvsp[-1].hint_list)->push_back((yyvsp[0].hint));
            (yyval.hint_list)= (yyvsp[-1].hint_list);
          }
#line 1445 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 14: /* max_execution_time_hint: MAX_EXECUTION_TIME_HINT '(' HINT_ARG_NUMBER ')'  */
#line 248 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            longlong n;
            if (parse_int(&n, (yyvsp[-1].lexer.hint_string).str, (yyvsp[-1].lexer.hint_string).length) || n > UINT_MAX32)
            {
              scanner->syntax_warning(ER_THD(thd,
                                             ER_WARN_BAD_MAX_EXECUTION_TIME));
              (yyval.hint)= nullptr;
            }
            else
            {
              (yyval.hint)= NEW_PTN PT_hint_max_execution_time(n);
              if ((yyval.hint) == nullptr)
                YYABORT; // OOM
            }
          }
#line 1465 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 15: /* opt_hint_param_table_list: %empty  */
#line 267 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                 { (yyval.hint_param_table_list).init(thd->mem_root); }
#line 1471 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 17: /* hint_param_table_list: hint_param_table  */
#line 273 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_param_table_list).init(thd->mem_root);
            if ((yyval.hint_param_table_list).push_back((yyvsp[0].hint_param_table)))
              YYABORT; // OOM
          }
#line 1481 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 18: /* hint_param_table_list: hint_param_table_list ',' hint_param_table  */
#line 279 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            if ((yyvsp[-2].hint_param_table_list).push_back((yyvsp[0].hint_param_table)))
              YYABORT; // OOM
            (yyval.hint_param_table_list)= (yyvsp[-2].hint_param_table_list);
          }
#line 1491 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 19: /* opt_hint_param_table_list_empty_qb: %empty  */
#line 287 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                 { (yyval.hint_param_table_list).init(thd->mem_root); }
#line 1497 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 21: /* hint_param_table_list_empty_qb: hint_param_table_empty_qb  */
#line 293 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_param_table_list).init(thd->mem_root);
            if ((yyval.hint_param_table_list).push_back((yyvsp[0].hint_param_table)))
              YYABORT; // OOM
          }
#line 1507 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 22: /* hint_param_table_list_empty_qb: hint_param_table_list_empty_qb ',' hint_param_table_empty_qb  */
#line 299 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            if ((yyvsp[-2].hint_param_table_list).push_back((yyvsp[0].hint_param_table)))
              YYABORT; // OOM
            (yyval.hint_param_table_list)= (yyvsp[-2].hint_param_table_list);
          }
#line 1517 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 23: /* opt_hint_param_index_list: %empty  */
#line 307 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                 { (yyval.hint_param_index_list).init(thd->mem_root); }
#line 1523 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 25: /* hint_param_index_list: hint_param_index  */
#line 313 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_param_index_list).init(thd->mem_root);
            if ((yyval.hint_param_index_list).push_back((yyvsp[0].lexer.hint_string)))
              YYABORT; // OOM
          }
#line 1533 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 26: /* hint_param_index_list: hint_param_index_list ',' hint_param_index  */
#line 319 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            if ((yyvsp[-2].hint_param_index_list).push_back((yyvsp[0].lexer.hint_string)))
              YYABORT; // OOM
            (yyval.hint_param_index_list)= (yyvsp[-2].hint_param_index_list);
          }
#line 1543 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 28: /* hint_param_table_empty_qb: HINT_ARG_IDENT  */
#line 332 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_param_table).table= (yyvsp[0].lexer.hint_string);
            (yyval.hint_param_table).opt_query_block= NULL_CSTR;
          }
#line 1552 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 29: /* hint_param_table: HINT_ARG_IDENT opt_qb_name  */
#line 340 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_param_table).table= (yyvsp[-1].lexer.hint_string);
            (yyval.hint_param_table).opt_query_block= (yyvsp[0].lexer.hint_string);
          }
#line 1561 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 31: /* hint_param_table_ext: HINT_ARG_QB_NAME HINT_ARG_IDENT  */
#line 349 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_param_table).table= (yyvsp[0].lexer.hint_string);
            (yyval.hint_param_table).opt_query_block= (yyvsp[-1].lexer.hint_string);
          }
#line 1570 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 32: /* opt_qb_name: %empty  */
#line 356 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                 { (yyval.lexer.hint_string)= NULL_CSTR; }
#line 1576 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 34: /* qb_level_hint: SEMIJOIN_HINT '(' opt_qb_name semijoin_strategies ')'  */
#line 362 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, SEMIJOIN_HINT_ENUM, (yyvsp[-1].ulong_num));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1586 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 35: /* qb_level_hint: NO_SEMIJOIN_HINT '(' opt_qb_name semijoin_strategies ')'  */
#line 369 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), false, SEMIJOIN_HINT_ENUM, (yyvsp[-1].ulong_num));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1596 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 36: /* qb_level_hint: SUBQUERY_HINT '(' opt_qb_name subquery_strategy ')'  */
#line 376 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, SUBQUERY_HINT_ENUM, (yyvsp[-1].ulong_num));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1606 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 37: /* qb_level_hint: JOIN_PREFIX_HINT '(' opt_hint_param_table_list ')'  */
#line 383 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint(NULL_CSTR, true, JOIN_PREFIX_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1616 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 38: /* qb_level_hint: JOIN_PREFIX_HINT '(' HINT_ARG_QB_NAME opt_hint_param_table_list_empty_qb ')'  */
#line 390 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, JOIN_PREFIX_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1626 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 39: /* qb_level_hint: JOIN_SUFFIX_HINT '(' opt_hint_param_table_list ')'  */
#line 397 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint(NULL_CSTR, true, JOIN_SUFFIX_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1636 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 40: /* qb_level_hint: JOIN_SUFFIX_HINT '(' HINT_ARG_QB_NAME opt_hint_param_table_list_empty_qb ')'  */
#line 404 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, JOIN_SUFFIX_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1646 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 41: /* qb_level_hint: JOIN_ORDER_HINT '(' opt_hint_param_table_list ')'  */
#line 411 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint(NULL_CSTR, true, JOIN_ORDER_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1656 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 42: /* qb_level_hint: JOIN_ORDER_HINT '(' HINT_ARG_QB_NAME opt_hint_param_table_list_empty_qb ')'  */
#line 418 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, JOIN_ORDER_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1666 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 43: /* qb_level_hint: JOIN_FIXED_ORDER_HINT '(' opt_qb_name ')'  */
#line 425 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-1].lexer.hint_string), true, JOIN_FIXED_ORDER_HINT_ENUM, 0);
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1676 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 44: /* semijoin_strategies: %empty  */
#line 433 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                 { (yyval.ulong_num)= 0; }
#line 1682 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 45: /* semijoin_strategies: semijoin_strategy  */
#line 435 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.ulong_num)= (yyvsp[0].ulong_num);
          }
#line 1690 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 46: /* semijoin_strategies: semijoin_strategies ',' semijoin_strategy  */
#line 439 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.ulong_num)= (yyvsp[-2].ulong_num) | (yyvsp[0].ulong_num);
          }
#line 1698 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 47: /* semijoin_strategy: FIRSTMATCH_HINT  */
#line 445 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                               { (yyval.ulong_num)= OPTIMIZER_SWITCH_FIRSTMATCH; }
#line 1704 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 48: /* semijoin_strategy: LOOSESCAN_HINT  */
#line 446 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                               { (yyval.ulong_num)= OPTIMIZER_SWITCH_LOOSE_SCAN; }
#line 1710 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 49: /* semijoin_strategy: MATERIALIZATION_HINT  */
#line 447 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                               { (yyval.ulong_num)= OPTIMIZER_SWITCH_MATERIALIZATION; }
#line 1716 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 50: /* semijoin_strategy: DUPSWEEDOUT_HINT  */
#line 448 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                               { (yyval.ulong_num)= OPTIMIZER_SWITCH_DUPSWEEDOUT; }
#line 1722 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 51: /* subquery_strategy: MATERIALIZATION_HINT  */
#line 452 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                               { (yyval.ulong_num)=
                                   static_cast<long>(Subquery_strategy::SUBQ_MATERIALIZATION); }
#line 1729 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 52: /* subquery_strategy: INTOEXISTS_HINT  */
#line 454 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
                               { (yyval.ulong_num)= static_cast<long>(Subquery_strategy::SUBQ_EXISTS); }
#line 1735 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 53: /* table_level_hint: table_level_hint_type_on '(' opt_hint_param_table_list ')'  */
#line 460 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_table_level_hint(NULL_CSTR, (yyvsp[-1].hint_param_table_list), true, (yyvsp[-3].hint_type));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1745 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 54: /* table_level_hint: table_level_hint_type_on '(' HINT_ARG_QB_NAME opt_hint_param_table_list_empty_qb ')'  */
#line 467 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_table_level_hint((yyvsp[-2].lexer.hint_string), (yyvsp[-1].hint_param_table_list), true, (yyvsp[-4].hint_type));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1755 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 55: /* table_level_hint: table_level_hint_type_off '(' opt_hint_param_table_list ')'  */
#line 473 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_table_level_hint(NULL_CSTR, (yyvsp[-1].hint_param_table_list), false, (yyvsp[-3].hint_type));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1765 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 56: /* table_level_hint: table_level_hint_type_off '(' HINT_ARG_QB_NAME opt_hint_param_table_list_empty_qb ')'  */
#line 480 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_table_level_hint((yyvsp[-2].lexer.hint_string), (yyvsp[-1].hint_param_table_list), false, (yyvsp[-4].hint_type));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1775 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 57: /* index_level_hint: key_level_hint_type_on '(' hint_param_table_ext opt_hint_param_index_list ')'  */
#line 490 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_key_level_hint((yyvsp[-2].hint_param_table), (yyvsp[-1].hint_param_index_list), true, (yyvsp[-4].hint_type));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1785 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 58: /* index_level_hint: key_level_hint_type_off '(' hint_param_table_ext opt_hint_param_index_list ')'  */
#line 497 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_key_level_hint((yyvsp[-2].hint_param_table), (yyvsp[-1].hint_param_index_list), false, (yyvsp[-4].hint_type));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 1795 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 59: /* table_level_hint_type_on: BKA_HINT  */
#line 506 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= BKA_HINT_ENUM;
          }
#line 1803 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 60: /* table_level_hint_type_on: BNL_HINT  */
#line 510 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= BNL_HINT_ENUM;
          }
#line 1811 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 61: /* table_level_hint_type_on: HASH_JOIN_HINT  */
#line 514 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= HASH_JOIN_HINT_ENUM;
          }
#line 1819 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 62: /* table_level_hint_type_on: DERIVED_MERGE_HINT  */
#line 518 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= DERIVED_MERGE_HINT_ENUM;
          }
#line 1827 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 63: /* table_level_hint_type_on: DERIVED_CONDITION_PUSHDOWN_HINT  */
#line 522 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= DERIVED_CONDITION_PUSHDOWN_HINT_ENUM;
          }
#line 1835 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 64: /* table_level_hint_type_off: NO_BKA_HINT  */
#line 529 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= BKA_HINT_ENUM;
          }
#line 1843 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 65: /* table_level_hint_type_off: NO_BNL_HINT  */
#line 533 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= BNL_HINT_ENUM;
          }
#line 1851 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 66: /* table_level_hint_type_off: NO_HASH_JOIN_HINT  */
#line 537 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= HASH_JOIN_HINT_ENUM;
          }
#line 1859 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 67: /* table_level_hint_type_off: NO_DERIVED_MERGE_HINT  */
#line 541 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= DERIVED_MERGE_HINT_ENUM;
          }
#line 1867 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 68: /* table_level_hint_type_off: NO_DERIVED_CONDITION_PUSHDOWN_HINT  */
#line 545 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= DERIVED_CONDITION_PUSHDOWN_HINT_ENUM;
          }
#line 1875 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 69: /* key_level_hint_type_on: MRR_HINT  */
#line 552 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= MRR_HINT_ENUM;
          }
#line 1883 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 70: /* key_level_hint_type_on: NO_RANGE_OPTIMIZATION_HINT  */
#line 556 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= NO_RANGE_HINT_ENUM;
          }
#line 1891 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 71: /* key_level_hint_type_on: INDEX_MERGE_HINT  */
#line 560 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= INDEX_MERGE_HINT_ENUM;
          }
#line 1899 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 72: /* key_level_hint_type_on: SKIP_SCAN_HINT  */
#line 564 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= SKIP_SCAN_HINT_ENUM;
          }
#line 1907 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 73: /* key_level_hint_type_on: INDEX_HINT  */
#line 568 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= INDEX_HINT_ENUM;
          }
#line 1915 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 74: /* key_level_hint_type_on: JOIN_INDEX_HINT  */
#line 572 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= JOIN_INDEX_HINT_ENUM;
          }
#line 1923 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 75: /* key_level_hint_type_on: GROUP_INDEX_HINT  */
#line 576 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= GROUP_INDEX_HINT_ENUM;
          }
#line 1931 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 76: /* key_level_hint_type_on: ORDER_INDEX_HINT  */
#line 580 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= ORDER_INDEX_HINT_ENUM;
          }
#line 1939 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 77: /* key_level_hint_type_off: NO_ICP_HINT  */
#line 587 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= ICP_HINT_ENUM;
          }
#line 1947 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 78: /* key_level_hint_type_off: NO_MRR_HINT  */
#line 591 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= MRR_HINT_ENUM;
          }
#line 1955 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 79: /* key_level_hint_type_off: NO_INDEX_MERGE_HINT  */
#line 595 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= INDEX_MERGE_HINT_ENUM;
          }
#line 1963 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 80: /* key_level_hint_type_off: NO_SKIP_SCAN_HINT  */
#line 599 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= SKIP_SCAN_HINT_ENUM;
          }
#line 1971 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 81: /* key_level_hint_type_off: NO_INDEX_HINT  */
#line 603 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= INDEX_HINT_ENUM;
          }
#line 1979 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 82: /* key_level_hint_type_off: NO_JOIN_INDEX_HINT  */
#line 607 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= JOIN_INDEX_HINT_ENUM;
          }
#line 1987 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 83: /* key_level_hint_type_off: NO_GROUP_INDEX_HINT  */
#line 611 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= GROUP_INDEX_HINT_ENUM;
          }
#line 1995 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 84: /* key_level_hint_type_off: NO_ORDER_INDEX_HINT  */
#line 615 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint_type)= ORDER_INDEX_HINT_ENUM;
          }
#line 2003 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 85: /* qb_name_hint: QB_NAME_HINT '(' HINT_ARG_IDENT ')'  */
#line 622 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_hint_qb_name((yyvsp[-1].lexer.hint_string));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 2013 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 86: /* set_var_hint: SET_VAR_HINT '(' set_var_ident '=' set_var_arg ')'  */
#line 631 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.hint)= NEW_PTN PT_hint_sys_var((yyvsp[-3].lexer.hint_string), (yyvsp[-1].item));
            if ((yyval.hint) == nullptr)
              YYABORT; // OOM
          }
#line 2023 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 87: /* resource_group_hint: RESOURCE_GROUP_HINT '(' HINT_ARG_IDENT ')'  */
#line 640 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
         {
           if (check_resource_group_name_len((yyvsp[-1].lexer.hint_string), Sql_condition::SL_WARNING))
             YYERROR;

           (yyval.hint)= NEW_PTN PT_hint_resource_group((yyvsp[-1].lexer.hint_string));
           if ((yyval.hint) == nullptr)
              YYABORT; // OOM
         }
#line 2036 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 90: /* set_var_num_item: HINT_ARG_NUMBER  */
#line 657 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            longlong n;
            if (parse_int(&n, (yyvsp[0].lexer.hint_string).str, (yyvsp[0].lexer.hint_string).length))
            {
              scanner->syntax_warning(ER_THD(thd, ER_WRONG_SIZE_NUMBER));
              (yyval.item)= nullptr;
            }
            else
            {
              (yyval.item)= NEW_PTN Item_int((ulonglong)n);
              if ((yyval.item) == nullptr)
                YYABORT; // OOM
            }
          }
#line 2055 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 91: /* set_var_num_item: HINT_ARG_FLOATING_POINT_NUMBER  */
#line 672 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            (yyval.item)= NEW_PTN Item_float((yyvsp[0].lexer.hint_string).str, (yyvsp[0].lexer.hint_string).length);
          }
#line 2063 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 92: /* set_var_num_item: HINT_IDENT_OR_NUMBER_WITH_SCALE  */
#line 676 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
          {
            longlong n;
            if (parse_int(&n, (yyvsp[0].lexer.hint_string).str, (yyvsp[0].lexer.hint_string).length - 1))
            {
              scanner->syntax_warning(ER_THD(thd, ER_WRONG_SIZE_NUMBER));
              (yyval.item)= nullptr;
            }
            else
            {
              int multiplier;
              switch ((yyvsp[0].lexer.hint_string).str[(yyvsp[0].lexer.hint_string).length - 1]) {
              case 'K': multiplier= 1024; break;
              case 'M': multiplier= 1024 * 1024; break;
              case 'G': multiplier= 1024 * 1024 * 1024; break;
              default:
                assert(false);  // should not happen
                YYABORT;        // for sure
              }
              if (1.0L * n * multiplier > LLONG_MAX_DOUBLE)
              {
                scanner->syntax_warning(ER_THD(thd, ER_WRONG_SIZE_NUMBER));
                (yyval.item)= nullptr;
              }
              else
              {
                (yyval.item)= NEW_PTN Item_int((ulonglong)n * multiplier);
                if ((yyval.item) == nullptr)
                  YYABORT; // OOM
              }
            }
          }
#line 2099 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;

  case 95: /* set_var_string_item: set_var_text_value  */
#line 716 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy"
        {
          (yyval.item)= NEW_PTN Item_string((yyvsp[0].lexer.hint_string).str, (yyvsp[0].lexer.hint_string).length, thd->charset());
          if ((yyval.item) == nullptr)
            YYABORT; // OOM
        }
#line 2109 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"
    break;


#line 2113 "/mnt/jenkins/workspace/ps8.0-autobuild-RELEASE/test/percona-server/sql/sql_hints.yy.cc"

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
  yytoken = yychar == MY_HINT_PARSER_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (thd, scanner, ret, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= MY_HINT_PARSER_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == MY_HINT_PARSER_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, thd, scanner, ret);
          yychar = MY_HINT_PARSER_EMPTY;
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, thd, scanner, ret);
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
  yyerror (thd, scanner, ret, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != MY_HINT_PARSER_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, thd, scanner, ret);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, thd, scanner, ret);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

