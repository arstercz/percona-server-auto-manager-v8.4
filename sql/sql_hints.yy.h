/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_MY_HINT_PARSER_MNT_JENKINS_WORKSPACE_PS8_0_AUTOBUILD_RELEASE_TEST_PERCONA_SERVER_SQL_SQL_HINTS_YY_H_INCLUDED
# define YY_MY_HINT_PARSER_MNT_JENKINS_WORKSPACE_PS8_0_AUTOBUILD_RELEASE_TEST_PERCONA_SERVER_SQL_SQL_HINTS_YY_H_INCLUDED
/* Debug traces.  */
#ifndef MY_HINT_PARSER_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define MY_HINT_PARSER_DEBUG 1
#  else
#   define MY_HINT_PARSER_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define MY_HINT_PARSER_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined MY_HINT_PARSER_DEBUG */
#if MY_HINT_PARSER_DEBUG
extern int my_hint_parser_debug;
#endif

/* Token kinds.  */
#ifndef MY_HINT_PARSER_TOKENTYPE
# define MY_HINT_PARSER_TOKENTYPE
  enum my_hint_parser_tokentype
  {
    MY_HINT_PARSER_EMPTY = -2,
    MY_HINT_PARSER_EOF = 0,        /* "end of file"  */
    MY_HINT_PARSER_error = 256,    /* error  */
    MY_HINT_PARSER_UNDEF = 1050,   /* "invalid token"  */
    MAX_EXECUTION_TIME_HINT = 1000, /* MAX_EXECUTION_TIME_HINT  */
    RESOURCE_GROUP_HINT = 1001,    /* RESOURCE_GROUP_HINT  */
    BKA_HINT = 1002,               /* BKA_HINT  */
    BNL_HINT = 1003,               /* BNL_HINT  */
    DUPSWEEDOUT_HINT = 1004,       /* DUPSWEEDOUT_HINT  */
    FIRSTMATCH_HINT = 1005,        /* FIRSTMATCH_HINT  */
    INTOEXISTS_HINT = 1006,        /* INTOEXISTS_HINT  */
    LOOSESCAN_HINT = 1007,         /* LOOSESCAN_HINT  */
    MATERIALIZATION_HINT = 1008,   /* MATERIALIZATION_HINT  */
    NO_BKA_HINT = 1009,            /* NO_BKA_HINT  */
    NO_BNL_HINT = 1010,            /* NO_BNL_HINT  */
    NO_ICP_HINT = 1011,            /* NO_ICP_HINT  */
    NO_MRR_HINT = 1012,            /* NO_MRR_HINT  */
    NO_RANGE_OPTIMIZATION_HINT = 1013, /* NO_RANGE_OPTIMIZATION_HINT  */
    NO_SEMIJOIN_HINT = 1014,       /* NO_SEMIJOIN_HINT  */
    MRR_HINT = 1015,               /* MRR_HINT  */
    QB_NAME_HINT = 1016,           /* QB_NAME_HINT  */
    SEMIJOIN_HINT = 1017,          /* SEMIJOIN_HINT  */
    SUBQUERY_HINT = 1018,          /* SUBQUERY_HINT  */
    DERIVED_MERGE_HINT = 1019,     /* DERIVED_MERGE_HINT  */
    NO_DERIVED_MERGE_HINT = 1020,  /* NO_DERIVED_MERGE_HINT  */
    JOIN_PREFIX_HINT = 1021,       /* JOIN_PREFIX_HINT  */
    JOIN_SUFFIX_HINT = 1022,       /* JOIN_SUFFIX_HINT  */
    JOIN_ORDER_HINT = 1023,        /* JOIN_ORDER_HINT  */
    JOIN_FIXED_ORDER_HINT = 1024,  /* JOIN_FIXED_ORDER_HINT  */
    INDEX_MERGE_HINT = 1025,       /* INDEX_MERGE_HINT  */
    NO_INDEX_MERGE_HINT = 1026,    /* NO_INDEX_MERGE_HINT  */
    SET_VAR_HINT = 1027,           /* SET_VAR_HINT  */
    SKIP_SCAN_HINT = 1028,         /* SKIP_SCAN_HINT  */
    NO_SKIP_SCAN_HINT = 1029,      /* NO_SKIP_SCAN_HINT  */
    HASH_JOIN_HINT = 1030,         /* HASH_JOIN_HINT  */
    NO_HASH_JOIN_HINT = 1031,      /* NO_HASH_JOIN_HINT  */
    HINT_ARG_NUMBER = 1032,        /* HINT_ARG_NUMBER  */
    HINT_ARG_IDENT = 1033,         /* HINT_ARG_IDENT  */
    HINT_ARG_QB_NAME = 1034,       /* HINT_ARG_QB_NAME  */
    HINT_ARG_TEXT = 1035,          /* HINT_ARG_TEXT  */
    HINT_IDENT_OR_NUMBER_WITH_SCALE = 1036, /* HINT_IDENT_OR_NUMBER_WITH_SCALE  */
    HINT_CLOSE = 1037,             /* HINT_CLOSE  */
    HINT_ERROR = 1038,             /* HINT_ERROR  */
    INDEX_HINT = 1039,             /* INDEX_HINT  */
    NO_INDEX_HINT = 1040,          /* NO_INDEX_HINT  */
    JOIN_INDEX_HINT = 1041,        /* JOIN_INDEX_HINT  */
    NO_JOIN_INDEX_HINT = 1042,     /* NO_JOIN_INDEX_HINT  */
    GROUP_INDEX_HINT = 1043,       /* GROUP_INDEX_HINT  */
    NO_GROUP_INDEX_HINT = 1044,    /* NO_GROUP_INDEX_HINT  */
    ORDER_INDEX_HINT = 1045,       /* ORDER_INDEX_HINT  */
    NO_ORDER_INDEX_HINT = 1046,    /* NO_ORDER_INDEX_HINT  */
    DERIVED_CONDITION_PUSHDOWN_HINT = 1047, /* DERIVED_CONDITION_PUSHDOWN_HINT  */
    NO_DERIVED_CONDITION_PUSHDOWN_HINT = 1048, /* NO_DERIVED_CONDITION_PUSHDOWN_HINT  */
    HINT_ARG_FLOATING_POINT_NUMBER = 1049 /* HINT_ARG_FLOATING_POINT_NUMBER  */
  };
  typedef enum my_hint_parser_tokentype my_hint_parser_token_kind_t;
#endif
/* Token kinds.  */
#define MY_HINT_PARSER_EMPTY -2
#define MY_HINT_PARSER_EOF 0
#define MY_HINT_PARSER_error 256
#define MY_HINT_PARSER_UNDEF 1050
#define MAX_EXECUTION_TIME_HINT 1000
#define RESOURCE_GROUP_HINT 1001
#define BKA_HINT 1002
#define BNL_HINT 1003
#define DUPSWEEDOUT_HINT 1004
#define FIRSTMATCH_HINT 1005
#define INTOEXISTS_HINT 1006
#define LOOSESCAN_HINT 1007
#define MATERIALIZATION_HINT 1008
#define NO_BKA_HINT 1009
#define NO_BNL_HINT 1010
#define NO_ICP_HINT 1011
#define NO_MRR_HINT 1012
#define NO_RANGE_OPTIMIZATION_HINT 1013
#define NO_SEMIJOIN_HINT 1014
#define MRR_HINT 1015
#define QB_NAME_HINT 1016
#define SEMIJOIN_HINT 1017
#define SUBQUERY_HINT 1018
#define DERIVED_MERGE_HINT 1019
#define NO_DERIVED_MERGE_HINT 1020
#define JOIN_PREFIX_HINT 1021
#define JOIN_SUFFIX_HINT 1022
#define JOIN_ORDER_HINT 1023
#define JOIN_FIXED_ORDER_HINT 1024
#define INDEX_MERGE_HINT 1025
#define NO_INDEX_MERGE_HINT 1026
#define SET_VAR_HINT 1027
#define SKIP_SCAN_HINT 1028
#define NO_SKIP_SCAN_HINT 1029
#define HASH_JOIN_HINT 1030
#define NO_HASH_JOIN_HINT 1031
#define HINT_ARG_NUMBER 1032
#define HINT_ARG_IDENT 1033
#define HINT_ARG_QB_NAME 1034
#define HINT_ARG_TEXT 1035
#define HINT_IDENT_OR_NUMBER_WITH_SCALE 1036
#define HINT_CLOSE 1037
#define HINT_ERROR 1038
#define INDEX_HINT 1039
#define NO_INDEX_HINT 1040
#define JOIN_INDEX_HINT 1041
#define NO_JOIN_INDEX_HINT 1042
#define GROUP_INDEX_HINT 1043
#define NO_GROUP_INDEX_HINT 1044
#define ORDER_INDEX_HINT 1045
#define NO_ORDER_INDEX_HINT 1046
#define DERIVED_CONDITION_PUSHDOWN_HINT 1047
#define NO_DERIVED_CONDITION_PUSHDOWN_HINT 1048
#define HINT_ARG_FLOATING_POINT_NUMBER 1049

/* Value type.  */




int my_hint_parser_parse (class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret);


#endif /* !YY_MY_HINT_PARSER_MNT_JENKINS_WORKSPACE_PS8_0_AUTOBUILD_RELEASE_TEST_PERCONA_SERVER_SQL_SQL_HINTS_YY_H_INCLUDED  */
