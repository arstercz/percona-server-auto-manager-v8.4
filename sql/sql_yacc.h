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

#ifndef YY_MY_SQL_PARSER_MNT_JENKINS_WORKSPACE_PS8_0_AUTOBUILD_RELEASE_TEST_PERCONA_SERVER_SQL_SQL_YACC_H_INCLUDED
# define YY_MY_SQL_PARSER_MNT_JENKINS_WORKSPACE_PS8_0_AUTOBUILD_RELEASE_TEST_PERCONA_SERVER_SQL_SQL_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef MY_SQL_PARSER_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define MY_SQL_PARSER_DEBUG 1
#  else
#   define MY_SQL_PARSER_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define MY_SQL_PARSER_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined MY_SQL_PARSER_DEBUG */
#if MY_SQL_PARSER_DEBUG
extern int my_sql_parser_debug;
#endif

/* Token kinds.  */
#ifndef MY_SQL_PARSER_TOKENTYPE
# define MY_SQL_PARSER_TOKENTYPE
  enum my_sql_parser_tokentype
  {
    MY_SQL_PARSER_EMPTY = -2,
    MY_SQL_PARSER_EOF = 0,         /* "end of file"  */
    MY_SQL_PARSER_error = 256,     /* error  */
    MY_SQL_PARSER_UNDEF = 1150,    /* "invalid token"  */
    ABORT_SYM = 258,               /* ABORT_SYM  */
    ACCESSIBLE_SYM = 259,          /* ACCESSIBLE_SYM  */
    ACCOUNT_SYM = 260,             /* ACCOUNT_SYM  */
    ACTION = 261,                  /* ACTION  */
    ADD = 262,                     /* ADD  */
    ADDDATE_SYM = 263,             /* ADDDATE_SYM  */
    AFTER_SYM = 264,               /* AFTER_SYM  */
    AGAINST = 265,                 /* AGAINST  */
    AGGREGATE_SYM = 266,           /* AGGREGATE_SYM  */
    ALGORITHM_SYM = 267,           /* ALGORITHM_SYM  */
    ALL = 268,                     /* ALL  */
    ALTER = 269,                   /* ALTER  */
    ALWAYS_SYM = 270,              /* ALWAYS_SYM  */
    OBSOLETE_TOKEN_271 = 271,      /* OBSOLETE_TOKEN_271  */
    ANALYZE_SYM = 272,             /* ANALYZE_SYM  */
    AND_AND_SYM = 273,             /* AND_AND_SYM  */
    AND_SYM = 274,                 /* AND_SYM  */
    ANY_SYM = 275,                 /* ANY_SYM  */
    AS = 276,                      /* AS  */
    ASC = 277,                     /* ASC  */
    ASCII_SYM = 278,               /* ASCII_SYM  */
    ASENSITIVE_SYM = 279,          /* ASENSITIVE_SYM  */
    AT_SYM = 280,                  /* AT_SYM  */
    AUTOEXTEND_SIZE_SYM = 281,     /* AUTOEXTEND_SIZE_SYM  */
    AUTO_INC = 282,                /* AUTO_INC  */
    AVG_ROW_LENGTH = 283,          /* AVG_ROW_LENGTH  */
    AVG_SYM = 284,                 /* AVG_SYM  */
    BACKUP_SYM = 285,              /* BACKUP_SYM  */
    BEFORE_SYM = 286,              /* BEFORE_SYM  */
    BEGIN_SYM = 287,               /* BEGIN_SYM  */
    BETWEEN_SYM = 288,             /* BETWEEN_SYM  */
    BIGINT_SYM = 289,              /* BIGINT_SYM  */
    BINARY_SYM = 290,              /* BINARY_SYM  */
    BINLOG_SYM = 291,              /* BINLOG_SYM  */
    BIN_NUM = 292,                 /* BIN_NUM  */
    BIT_AND_SYM = 293,             /* BIT_AND_SYM  */
    BIT_OR_SYM = 294,              /* BIT_OR_SYM  */
    BIT_SYM = 295,                 /* BIT_SYM  */
    BIT_XOR_SYM = 296,             /* BIT_XOR_SYM  */
    BLOB_SYM = 297,                /* BLOB_SYM  */
    BLOCK_SYM = 298,               /* BLOCK_SYM  */
    BOOLEAN_SYM = 299,             /* BOOLEAN_SYM  */
    BOOL_SYM = 300,                /* BOOL_SYM  */
    BOTH = 301,                    /* BOTH  */
    BTREE_SYM = 302,               /* BTREE_SYM  */
    BY = 303,                      /* BY  */
    BYTE_SYM = 304,                /* BYTE_SYM  */
    CACHE_SYM = 305,               /* CACHE_SYM  */
    CALL_SYM = 306,                /* CALL_SYM  */
    CASCADE = 307,                 /* CASCADE  */
    CASCADED = 308,                /* CASCADED  */
    CASE_SYM = 309,                /* CASE_SYM  */
    CAST_SYM = 310,                /* CAST_SYM  */
    CATALOG_NAME_SYM = 311,        /* CATALOG_NAME_SYM  */
    CHAIN_SYM = 312,               /* CHAIN_SYM  */
    CHANGE = 313,                  /* CHANGE  */
    CHANGED = 314,                 /* CHANGED  */
    CHANNEL_SYM = 315,             /* CHANNEL_SYM  */
    CHARSET = 316,                 /* CHARSET  */
    CHAR_SYM = 317,                /* CHAR_SYM  */
    CHECKSUM_SYM = 318,            /* CHECKSUM_SYM  */
    CHECK_SYM = 319,               /* CHECK_SYM  */
    CIPHER_SYM = 320,              /* CIPHER_SYM  */
    CLASS_ORIGIN_SYM = 321,        /* CLASS_ORIGIN_SYM  */
    CLIENT_SYM = 322,              /* CLIENT_SYM  */
    CLOSE_SYM = 323,               /* CLOSE_SYM  */
    COALESCE = 324,                /* COALESCE  */
    CODE_SYM = 325,                /* CODE_SYM  */
    COLLATE_SYM = 326,             /* COLLATE_SYM  */
    COLLATION_SYM = 327,           /* COLLATION_SYM  */
    COLUMNS = 328,                 /* COLUMNS  */
    COLUMN_SYM = 329,              /* COLUMN_SYM  */
    COLUMN_FORMAT_SYM = 330,       /* COLUMN_FORMAT_SYM  */
    COLUMN_NAME_SYM = 331,         /* COLUMN_NAME_SYM  */
    COMMENT_SYM = 332,             /* COMMENT_SYM  */
    COMMITTED_SYM = 333,           /* COMMITTED_SYM  */
    COMMIT_SYM = 334,              /* COMMIT_SYM  */
    COMPACT_SYM = 335,             /* COMPACT_SYM  */
    COMPLETION_SYM = 336,          /* COMPLETION_SYM  */
    COMPRESSED_SYM = 337,          /* COMPRESSED_SYM  */
    COMPRESSION_SYM = 338,         /* COMPRESSION_SYM  */
    ENCRYPTION_SYM = 339,          /* ENCRYPTION_SYM  */
    CONCURRENT = 340,              /* CONCURRENT  */
    CONDITION_SYM = 341,           /* CONDITION_SYM  */
    CONNECTION_SYM = 342,          /* CONNECTION_SYM  */
    CONSISTENT_SYM = 343,          /* CONSISTENT_SYM  */
    CONSTRAINT = 344,              /* CONSTRAINT  */
    CONSTRAINT_CATALOG_SYM = 345,  /* CONSTRAINT_CATALOG_SYM  */
    CONSTRAINT_NAME_SYM = 346,     /* CONSTRAINT_NAME_SYM  */
    CONSTRAINT_SCHEMA_SYM = 347,   /* CONSTRAINT_SCHEMA_SYM  */
    CONTAINS_SYM = 348,            /* CONTAINS_SYM  */
    CONTEXT_SYM = 349,             /* CONTEXT_SYM  */
    CONTINUE_SYM = 350,            /* CONTINUE_SYM  */
    CONVERT_SYM = 351,             /* CONVERT_SYM  */
    COUNT_SYM = 352,               /* COUNT_SYM  */
    CPU_SYM = 353,                 /* CPU_SYM  */
    CREATE = 354,                  /* CREATE  */
    CROSS = 355,                   /* CROSS  */
    CUBE_SYM = 356,                /* CUBE_SYM  */
    CURDATE = 357,                 /* CURDATE  */
    CURRENT_SYM = 358,             /* CURRENT_SYM  */
    CURRENT_USER = 359,            /* CURRENT_USER  */
    CURSOR_SYM = 360,              /* CURSOR_SYM  */
    CURSOR_NAME_SYM = 361,         /* CURSOR_NAME_SYM  */
    CURTIME = 362,                 /* CURTIME  */
    DATABASE = 363,                /* DATABASE  */
    DATABASES = 364,               /* DATABASES  */
    DATAFILE_SYM = 365,            /* DATAFILE_SYM  */
    DATA_SYM = 366,                /* DATA_SYM  */
    DATETIME_SYM = 367,            /* DATETIME_SYM  */
    DATE_ADD_INTERVAL = 368,       /* DATE_ADD_INTERVAL  */
    DATE_SUB_INTERVAL = 369,       /* DATE_SUB_INTERVAL  */
    DATE_SYM = 370,                /* DATE_SYM  */
    DAY_HOUR_SYM = 371,            /* DAY_HOUR_SYM  */
    DAY_MICROSECOND_SYM = 372,     /* DAY_MICROSECOND_SYM  */
    DAY_MINUTE_SYM = 373,          /* DAY_MINUTE_SYM  */
    DAY_SECOND_SYM = 374,          /* DAY_SECOND_SYM  */
    DAY_SYM = 375,                 /* DAY_SYM  */
    DEALLOCATE_SYM = 376,          /* DEALLOCATE_SYM  */
    DECIMAL_NUM = 377,             /* DECIMAL_NUM  */
    DECIMAL_SYM = 378,             /* DECIMAL_SYM  */
    DECLARE_SYM = 379,             /* DECLARE_SYM  */
    DEFAULT_SYM = 380,             /* DEFAULT_SYM  */
    DEFAULT_AUTH_SYM = 381,        /* DEFAULT_AUTH_SYM  */
    DEFINER_SYM = 382,             /* DEFINER_SYM  */
    DELAYED_SYM = 383,             /* DELAYED_SYM  */
    DELAY_KEY_WRITE_SYM = 384,     /* DELAY_KEY_WRITE_SYM  */
    DELETE_SYM = 385,              /* DELETE_SYM  */
    DESC = 386,                    /* DESC  */
    DESCRIBE = 387,                /* DESCRIBE  */
    OBSOLETE_TOKEN_388 = 388,      /* OBSOLETE_TOKEN_388  */
    DETERMINISTIC_SYM = 389,       /* DETERMINISTIC_SYM  */
    DIAGNOSTICS_SYM = 390,         /* DIAGNOSTICS_SYM  */
    DIRECTORY_SYM = 391,           /* DIRECTORY_SYM  */
    DISABLE_SYM = 392,             /* DISABLE_SYM  */
    DISCARD_SYM = 393,             /* DISCARD_SYM  */
    DISK_SYM = 394,                /* DISK_SYM  */
    DISTINCT = 395,                /* DISTINCT  */
    DIV_SYM = 396,                 /* DIV_SYM  */
    DOUBLE_SYM = 397,              /* DOUBLE_SYM  */
    DO_SYM = 398,                  /* DO_SYM  */
    DROP = 399,                    /* DROP  */
    DUAL_SYM = 400,                /* DUAL_SYM  */
    DUMPFILE = 401,                /* DUMPFILE  */
    DUPLICATE_SYM = 402,           /* DUPLICATE_SYM  */
    DYNAMIC_SYM = 403,             /* DYNAMIC_SYM  */
    EACH_SYM = 404,                /* EACH_SYM  */
    ELSE = 405,                    /* ELSE  */
    ELSEIF_SYM = 406,              /* ELSEIF_SYM  */
    ENABLE_SYM = 407,              /* ENABLE_SYM  */
    ENCLOSED = 408,                /* ENCLOSED  */
    END = 409,                     /* END  */
    ENDS_SYM = 410,                /* ENDS_SYM  */
    END_OF_INPUT = 411,            /* END_OF_INPUT  */
    ENGINES_SYM = 412,             /* ENGINES_SYM  */
    ENGINE_SYM = 413,              /* ENGINE_SYM  */
    ENUM_SYM = 414,                /* ENUM_SYM  */
    EQ = 415,                      /* EQ  */
    EQUAL_SYM = 416,               /* EQUAL_SYM  */
    ERROR_SYM = 417,               /* ERROR_SYM  */
    ERRORS = 418,                  /* ERRORS  */
    ESCAPED = 419,                 /* ESCAPED  */
    ESCAPE_SYM = 420,              /* ESCAPE_SYM  */
    EVENTS_SYM = 421,              /* EVENTS_SYM  */
    EVENT_SYM = 422,               /* EVENT_SYM  */
    EVERY_SYM = 423,               /* EVERY_SYM  */
    EXCHANGE_SYM = 424,            /* EXCHANGE_SYM  */
    EXECUTE_SYM = 425,             /* EXECUTE_SYM  */
    EXISTS = 426,                  /* EXISTS  */
    EXIT_SYM = 427,                /* EXIT_SYM  */
    EXPANSION_SYM = 428,           /* EXPANSION_SYM  */
    EXPIRE_SYM = 429,              /* EXPIRE_SYM  */
    EXPORT_SYM = 430,              /* EXPORT_SYM  */
    EXTENDED_SYM = 431,            /* EXTENDED_SYM  */
    EXTENT_SIZE_SYM = 432,         /* EXTENT_SIZE_SYM  */
    EXTRACT_SYM = 433,             /* EXTRACT_SYM  */
    FALSE_SYM = 434,               /* FALSE_SYM  */
    FAST_SYM = 435,                /* FAST_SYM  */
    FAULTS_SYM = 436,              /* FAULTS_SYM  */
    FETCH_SYM = 437,               /* FETCH_SYM  */
    FILE_SYM = 438,                /* FILE_SYM  */
    FILE_BLOCK_SIZE_SYM = 439,     /* FILE_BLOCK_SIZE_SYM  */
    FILTER_SYM = 440,              /* FILTER_SYM  */
    FIRST_SYM = 441,               /* FIRST_SYM  */
    FIXED_SYM = 442,               /* FIXED_SYM  */
    FLOAT_NUM = 443,               /* FLOAT_NUM  */
    FLOAT_SYM = 444,               /* FLOAT_SYM  */
    FLUSH_SYM = 445,               /* FLUSH_SYM  */
    FOLLOWS_SYM = 446,             /* FOLLOWS_SYM  */
    FORCE_SYM = 447,               /* FORCE_SYM  */
    FOREIGN = 448,                 /* FOREIGN  */
    FOR_SYM = 449,                 /* FOR_SYM  */
    FORMAT_SYM = 450,              /* FORMAT_SYM  */
    FOUND_SYM = 451,               /* FOUND_SYM  */
    FROM = 452,                    /* FROM  */
    FULL = 453,                    /* FULL  */
    FULLTEXT_SYM = 454,            /* FULLTEXT_SYM  */
    FUNCTION_SYM = 455,            /* FUNCTION_SYM  */
    GE = 456,                      /* GE  */
    GENERAL = 457,                 /* GENERAL  */
    GENERATED = 458,               /* GENERATED  */
    GROUP_REPLICATION = 459,       /* GROUP_REPLICATION  */
    GEOMETRYCOLLECTION_SYM = 460,  /* GEOMETRYCOLLECTION_SYM  */
    GEOMETRY_SYM = 461,            /* GEOMETRY_SYM  */
    GET_FORMAT = 462,              /* GET_FORMAT  */
    GET_SYM = 463,                 /* GET_SYM  */
    GLOBAL_SYM = 464,              /* GLOBAL_SYM  */
    GRANT = 465,                   /* GRANT  */
    GRANTS = 466,                  /* GRANTS  */
    GROUP_SYM = 467,               /* GROUP_SYM  */
    GROUP_CONCAT_SYM = 468,        /* GROUP_CONCAT_SYM  */
    GT_SYM = 469,                  /* GT_SYM  */
    HANDLER_SYM = 470,             /* HANDLER_SYM  */
    HASH_SYM = 471,                /* HASH_SYM  */
    HAVING = 472,                  /* HAVING  */
    HELP_SYM = 473,                /* HELP_SYM  */
    HEX_NUM = 474,                 /* HEX_NUM  */
    HIGH_PRIORITY = 475,           /* HIGH_PRIORITY  */
    HOST_SYM = 476,                /* HOST_SYM  */
    HOSTS_SYM = 477,               /* HOSTS_SYM  */
    HOUR_MICROSECOND_SYM = 478,    /* HOUR_MICROSECOND_SYM  */
    HOUR_MINUTE_SYM = 479,         /* HOUR_MINUTE_SYM  */
    HOUR_SECOND_SYM = 480,         /* HOUR_SECOND_SYM  */
    HOUR_SYM = 481,                /* HOUR_SYM  */
    IDENT = 482,                   /* IDENT  */
    IDENTIFIED_SYM = 483,          /* IDENTIFIED_SYM  */
    IDENT_QUOTED = 484,            /* IDENT_QUOTED  */
    IF = 485,                      /* IF  */
    IGNORE_SYM = 486,              /* IGNORE_SYM  */
    IGNORE_SERVER_IDS_SYM = 487,   /* IGNORE_SERVER_IDS_SYM  */
    IMPORT = 488,                  /* IMPORT  */
    INDEXES = 489,                 /* INDEXES  */
    INDEX_SYM = 490,               /* INDEX_SYM  */
    INFILE_SYM = 491,              /* INFILE_SYM  */
    INITIAL_SIZE_SYM = 492,        /* INITIAL_SIZE_SYM  */
    INNER_SYM = 493,               /* INNER_SYM  */
    INOUT_SYM = 494,               /* INOUT_SYM  */
    INSENSITIVE_SYM = 495,         /* INSENSITIVE_SYM  */
    INSERT_SYM = 496,              /* INSERT_SYM  */
    INSERT_METHOD = 497,           /* INSERT_METHOD  */
    INSTANCE_SYM = 498,            /* INSTANCE_SYM  */
    INSTALL_SYM = 499,             /* INSTALL_SYM  */
    INTERVAL_SYM = 500,            /* INTERVAL_SYM  */
    INTO = 501,                    /* INTO  */
    INT_SYM = 502,                 /* INT_SYM  */
    INVOKER_SYM = 503,             /* INVOKER_SYM  */
    IN_SYM = 504,                  /* IN_SYM  */
    IO_AFTER_GTIDS = 505,          /* IO_AFTER_GTIDS  */
    IO_BEFORE_GTIDS = 506,         /* IO_BEFORE_GTIDS  */
    IO_SYM = 507,                  /* IO_SYM  */
    IPC_SYM = 508,                 /* IPC_SYM  */
    IS = 509,                      /* IS  */
    ISOLATION = 510,               /* ISOLATION  */
    ISSUER_SYM = 511,              /* ISSUER_SYM  */
    ITERATE_SYM = 512,             /* ITERATE_SYM  */
    JOIN_SYM = 513,                /* JOIN_SYM  */
    JSON_SEPARATOR_SYM = 514,      /* JSON_SEPARATOR_SYM  */
    JSON_SYM = 515,                /* JSON_SYM  */
    KEYS = 516,                    /* KEYS  */
    KEY_BLOCK_SIZE = 517,          /* KEY_BLOCK_SIZE  */
    KEY_SYM = 518,                 /* KEY_SYM  */
    KILL_SYM = 519,                /* KILL_SYM  */
    LANGUAGE_SYM = 520,            /* LANGUAGE_SYM  */
    LAST_SYM = 521,                /* LAST_SYM  */
    LE = 522,                      /* LE  */
    LEADING = 523,                 /* LEADING  */
    LEAVES = 524,                  /* LEAVES  */
    LEAVE_SYM = 525,               /* LEAVE_SYM  */
    LEFT = 526,                    /* LEFT  */
    LESS_SYM = 527,                /* LESS_SYM  */
    LEVEL_SYM = 528,               /* LEVEL_SYM  */
    LEX_HOSTNAME = 529,            /* LEX_HOSTNAME  */
    LIKE = 530,                    /* LIKE  */
    LIMIT = 531,                   /* LIMIT  */
    LINEAR_SYM = 532,              /* LINEAR_SYM  */
    LINES = 533,                   /* LINES  */
    LINESTRING_SYM = 534,          /* LINESTRING_SYM  */
    LIST_SYM = 535,                /* LIST_SYM  */
    LOAD = 536,                    /* LOAD  */
    LOCAL_SYM = 537,               /* LOCAL_SYM  */
    OBSOLETE_TOKEN_538 = 538,      /* OBSOLETE_TOKEN_538  */
    LOCKS_SYM = 539,               /* LOCKS_SYM  */
    LOCK_SYM = 540,                /* LOCK_SYM  */
    LOGFILE_SYM = 541,             /* LOGFILE_SYM  */
    LOGS_SYM = 542,                /* LOGS_SYM  */
    LONGBLOB_SYM = 543,            /* LONGBLOB_SYM  */
    LONGTEXT_SYM = 544,            /* LONGTEXT_SYM  */
    LONG_NUM = 545,                /* LONG_NUM  */
    LONG_SYM = 546,                /* LONG_SYM  */
    LOOP_SYM = 547,                /* LOOP_SYM  */
    LOW_PRIORITY = 548,            /* LOW_PRIORITY  */
    LT = 549,                      /* LT  */
    OBSOLETE_TOKEN_550 = 550,      /* OBSOLETE_TOKEN_550  */
    OBSOLETE_TOKEN_551 = 551,      /* OBSOLETE_TOKEN_551  */
    OBSOLETE_TOKEN_552 = 552,      /* OBSOLETE_TOKEN_552  */
    OBSOLETE_TOKEN_553 = 553,      /* OBSOLETE_TOKEN_553  */
    OBSOLETE_TOKEN_554 = 554,      /* OBSOLETE_TOKEN_554  */
    OBSOLETE_TOKEN_555 = 555,      /* OBSOLETE_TOKEN_555  */
    OBSOLETE_TOKEN_556 = 556,      /* OBSOLETE_TOKEN_556  */
    OBSOLETE_TOKEN_557 = 557,      /* OBSOLETE_TOKEN_557  */
    OBSOLETE_TOKEN_558 = 558,      /* OBSOLETE_TOKEN_558  */
    OBSOLETE_TOKEN_559 = 559,      /* OBSOLETE_TOKEN_559  */
    OBSOLETE_TOKEN_561 = 561,      /* OBSOLETE_TOKEN_561  */
    OBSOLETE_TOKEN_562 = 562,      /* OBSOLETE_TOKEN_562  */
    OBSOLETE_TOKEN_563 = 563,      /* OBSOLETE_TOKEN_563  */
    OBSOLETE_TOKEN_564 = 564,      /* OBSOLETE_TOKEN_564  */
    OBSOLETE_TOKEN_565 = 565,      /* OBSOLETE_TOKEN_565  */
    OBSOLETE_TOKEN_566 = 566,      /* OBSOLETE_TOKEN_566  */
    OBSOLETE_TOKEN_567 = 567,      /* OBSOLETE_TOKEN_567  */
    OBSOLETE_TOKEN_568 = 568,      /* OBSOLETE_TOKEN_568  */
    OBSOLETE_TOKEN_569 = 569,      /* OBSOLETE_TOKEN_569  */
    OBSOLETE_TOKEN_570 = 570,      /* OBSOLETE_TOKEN_570  */
    MASTER_SYM = 571,              /* MASTER_SYM  */
    OBSOLETE_TOKEN_572 = 572,      /* OBSOLETE_TOKEN_572  */
    OBSOLETE_TOKEN_573 = 573,      /* OBSOLETE_TOKEN_573  */
    MATCH = 574,                   /* MATCH  */
    MAX_CONNECTIONS_PER_HOUR = 575, /* MAX_CONNECTIONS_PER_HOUR  */
    MAX_QUERIES_PER_HOUR = 576,    /* MAX_QUERIES_PER_HOUR  */
    MAX_ROWS = 577,                /* MAX_ROWS  */
    MAX_SIZE_SYM = 578,            /* MAX_SIZE_SYM  */
    MAX_SYM = 579,                 /* MAX_SYM  */
    MAX_UPDATES_PER_HOUR = 580,    /* MAX_UPDATES_PER_HOUR  */
    MAX_USER_CONNECTIONS_SYM = 581, /* MAX_USER_CONNECTIONS_SYM  */
    MAX_VALUE_SYM = 582,           /* MAX_VALUE_SYM  */
    MEDIUMBLOB_SYM = 583,          /* MEDIUMBLOB_SYM  */
    MEDIUMINT_SYM = 584,           /* MEDIUMINT_SYM  */
    MEDIUMTEXT_SYM = 585,          /* MEDIUMTEXT_SYM  */
    MEDIUM_SYM = 586,              /* MEDIUM_SYM  */
    MEMORY_SYM = 587,              /* MEMORY_SYM  */
    MERGE_SYM = 588,               /* MERGE_SYM  */
    MESSAGE_TEXT_SYM = 589,        /* MESSAGE_TEXT_SYM  */
    MICROSECOND_SYM = 590,         /* MICROSECOND_SYM  */
    MIGRATE_SYM = 591,             /* MIGRATE_SYM  */
    MINUTE_MICROSECOND_SYM = 592,  /* MINUTE_MICROSECOND_SYM  */
    MINUTE_SECOND_SYM = 593,       /* MINUTE_SECOND_SYM  */
    MINUTE_SYM = 594,              /* MINUTE_SYM  */
    MIN_ROWS = 595,                /* MIN_ROWS  */
    MIN_SYM = 596,                 /* MIN_SYM  */
    MODE_SYM = 597,                /* MODE_SYM  */
    MODIFIES_SYM = 598,            /* MODIFIES_SYM  */
    MODIFY_SYM = 599,              /* MODIFY_SYM  */
    MOD_SYM = 600,                 /* MOD_SYM  */
    MONTH_SYM = 601,               /* MONTH_SYM  */
    MULTILINESTRING_SYM = 602,     /* MULTILINESTRING_SYM  */
    MULTIPOINT_SYM = 603,          /* MULTIPOINT_SYM  */
    MULTIPOLYGON_SYM = 604,        /* MULTIPOLYGON_SYM  */
    MUTEX_SYM = 605,               /* MUTEX_SYM  */
    MYSQL_ERRNO_SYM = 606,         /* MYSQL_ERRNO_SYM  */
    NAMES_SYM = 607,               /* NAMES_SYM  */
    NAME_SYM = 608,                /* NAME_SYM  */
    NATIONAL_SYM = 609,            /* NATIONAL_SYM  */
    NATURAL = 610,                 /* NATURAL  */
    NCHAR_STRING = 611,            /* NCHAR_STRING  */
    NCHAR_SYM = 612,               /* NCHAR_SYM  */
    NDBCLUSTER_SYM = 613,          /* NDBCLUSTER_SYM  */
    NE = 614,                      /* NE  */
    NEG = 615,                     /* NEG  */
    NEVER_SYM = 616,               /* NEVER_SYM  */
    NEW_SYM = 617,                 /* NEW_SYM  */
    NEXT_SYM = 618,                /* NEXT_SYM  */
    NODEGROUP_SYM = 619,           /* NODEGROUP_SYM  */
    NONE_SYM = 620,                /* NONE_SYM  */
    NOT2_SYM = 621,                /* NOT2_SYM  */
    NOT_SYM = 622,                 /* NOT_SYM  */
    NOW_SYM = 623,                 /* NOW_SYM  */
    NO_SYM = 624,                  /* NO_SYM  */
    NO_WAIT_SYM = 625,             /* NO_WAIT_SYM  */
    NO_WRITE_TO_BINLOG = 626,      /* NO_WRITE_TO_BINLOG  */
    NULL_SYM = 627,                /* NULL_SYM  */
    NUM = 628,                     /* NUM  */
    NUMBER_SYM = 629,              /* NUMBER_SYM  */
    NUMERIC_SYM = 630,             /* NUMERIC_SYM  */
    NVARCHAR_SYM = 631,            /* NVARCHAR_SYM  */
    OFFSET_SYM = 632,              /* OFFSET_SYM  */
    ON_SYM = 633,                  /* ON_SYM  */
    ONE_SYM = 634,                 /* ONE_SYM  */
    ONLY_SYM = 635,                /* ONLY_SYM  */
    OPEN_SYM = 636,                /* OPEN_SYM  */
    OPTIMIZE = 637,                /* OPTIMIZE  */
    OPTIMIZER_COSTS_SYM = 638,     /* OPTIMIZER_COSTS_SYM  */
    OPTIONS_SYM = 639,             /* OPTIONS_SYM  */
    OPTION = 640,                  /* OPTION  */
    OPTIONALLY = 641,              /* OPTIONALLY  */
    OR2_SYM = 642,                 /* OR2_SYM  */
    ORDER_SYM = 643,               /* ORDER_SYM  */
    OR_OR_SYM = 644,               /* OR_OR_SYM  */
    OR_SYM = 645,                  /* OR_SYM  */
    OUTER_SYM = 646,               /* OUTER_SYM  */
    OUTFILE = 647,                 /* OUTFILE  */
    OUT_SYM = 648,                 /* OUT_SYM  */
    OWNER_SYM = 649,               /* OWNER_SYM  */
    PACK_KEYS_SYM = 650,           /* PACK_KEYS_SYM  */
    PAGE_SYM = 651,                /* PAGE_SYM  */
    PARAM_MARKER = 652,            /* PARAM_MARKER  */
    PARSER_SYM = 653,              /* PARSER_SYM  */
    OBSOLETE_TOKEN_654 = 654,      /* OBSOLETE_TOKEN_654  */
    PARTIAL = 655,                 /* PARTIAL  */
    PARTITION_SYM = 656,           /* PARTITION_SYM  */
    PARTITIONS_SYM = 657,          /* PARTITIONS_SYM  */
    PARTITIONING_SYM = 658,        /* PARTITIONING_SYM  */
    PASSWORD = 659,                /* PASSWORD  */
    PHASE_SYM = 660,               /* PHASE_SYM  */
    PLUGIN_DIR_SYM = 661,          /* PLUGIN_DIR_SYM  */
    PLUGIN_SYM = 662,              /* PLUGIN_SYM  */
    PLUGINS_SYM = 663,             /* PLUGINS_SYM  */
    POINT_SYM = 664,               /* POINT_SYM  */
    POLYGON_SYM = 665,             /* POLYGON_SYM  */
    PORT_SYM = 666,                /* PORT_SYM  */
    POSITION_SYM = 667,            /* POSITION_SYM  */
    PRECEDES_SYM = 668,            /* PRECEDES_SYM  */
    PRECISION = 669,               /* PRECISION  */
    PREPARE_SYM = 670,             /* PREPARE_SYM  */
    PRESERVE_SYM = 671,            /* PRESERVE_SYM  */
    PREV_SYM = 672,                /* PREV_SYM  */
    PRIMARY_SYM = 673,             /* PRIMARY_SYM  */
    PRIVILEGES = 674,              /* PRIVILEGES  */
    PROCEDURE_SYM = 675,           /* PROCEDURE_SYM  */
    PROCESS = 676,                 /* PROCESS  */
    PROCESSLIST_SYM = 677,         /* PROCESSLIST_SYM  */
    PROFILE_SYM = 678,             /* PROFILE_SYM  */
    PROFILES_SYM = 679,            /* PROFILES_SYM  */
    PROXY_SYM = 680,               /* PROXY_SYM  */
    PURGE = 681,                   /* PURGE  */
    QUARTER_SYM = 682,             /* QUARTER_SYM  */
    QUERY_SYM = 683,               /* QUERY_SYM  */
    QUICK = 684,                   /* QUICK  */
    RANGE_SYM = 685,               /* RANGE_SYM  */
    READS_SYM = 686,               /* READS_SYM  */
    READ_ONLY_SYM = 687,           /* READ_ONLY_SYM  */
    READ_SYM = 688,                /* READ_SYM  */
    READ_WRITE_SYM = 689,          /* READ_WRITE_SYM  */
    REAL_SYM = 690,                /* REAL_SYM  */
    REBUILD_SYM = 691,             /* REBUILD_SYM  */
    RECOVER_SYM = 692,             /* RECOVER_SYM  */
    OBSOLETE_TOKEN_693 = 693,      /* OBSOLETE_TOKEN_693  */
    REDO_BUFFER_SIZE_SYM = 694,    /* REDO_BUFFER_SIZE_SYM  */
    REDUNDANT_SYM = 695,           /* REDUNDANT_SYM  */
    REFERENCES = 696,              /* REFERENCES  */
    REGEXP = 697,                  /* REGEXP  */
    RELAY = 698,                   /* RELAY  */
    RELAYLOG_SYM = 699,            /* RELAYLOG_SYM  */
    RELAY_LOG_FILE_SYM = 700,      /* RELAY_LOG_FILE_SYM  */
    RELAY_LOG_POS_SYM = 701,       /* RELAY_LOG_POS_SYM  */
    RELAY_THREAD = 702,            /* RELAY_THREAD  */
    RELEASE_SYM = 703,             /* RELEASE_SYM  */
    RELOAD = 704,                  /* RELOAD  */
    REMOVE_SYM = 705,              /* REMOVE_SYM  */
    RENAME = 706,                  /* RENAME  */
    REORGANIZE_SYM = 707,          /* REORGANIZE_SYM  */
    REPAIR = 708,                  /* REPAIR  */
    REPEATABLE_SYM = 709,          /* REPEATABLE_SYM  */
    REPEAT_SYM = 710,              /* REPEAT_SYM  */
    REPLACE_SYM = 711,             /* REPLACE_SYM  */
    REPLICATION = 712,             /* REPLICATION  */
    REPLICATE_DO_DB = 713,         /* REPLICATE_DO_DB  */
    REPLICATE_IGNORE_DB = 714,     /* REPLICATE_IGNORE_DB  */
    REPLICATE_DO_TABLE = 715,      /* REPLICATE_DO_TABLE  */
    REPLICATE_IGNORE_TABLE = 716,  /* REPLICATE_IGNORE_TABLE  */
    REPLICATE_WILD_DO_TABLE = 717, /* REPLICATE_WILD_DO_TABLE  */
    REPLICATE_WILD_IGNORE_TABLE = 718, /* REPLICATE_WILD_IGNORE_TABLE  */
    REPLICATE_REWRITE_DB = 719,    /* REPLICATE_REWRITE_DB  */
    REQUIRE_SYM = 720,             /* REQUIRE_SYM  */
    RESET_SYM = 721,               /* RESET_SYM  */
    RESIGNAL_SYM = 722,            /* RESIGNAL_SYM  */
    RESOURCES = 723,               /* RESOURCES  */
    RESTORE_SYM = 724,             /* RESTORE_SYM  */
    RESTRICT = 725,                /* RESTRICT  */
    RESUME_SYM = 726,              /* RESUME_SYM  */
    RETURNED_SQLSTATE_SYM = 727,   /* RETURNED_SQLSTATE_SYM  */
    RETURNS_SYM = 728,             /* RETURNS_SYM  */
    RETURN_SYM = 729,              /* RETURN_SYM  */
    REVERSE_SYM = 730,             /* REVERSE_SYM  */
    REVOKE = 731,                  /* REVOKE  */
    RIGHT = 732,                   /* RIGHT  */
    ROLLBACK_SYM = 733,            /* ROLLBACK_SYM  */
    ROLLUP_SYM = 734,              /* ROLLUP_SYM  */
    ROTATE_SYM = 735,              /* ROTATE_SYM  */
    ROUTINE_SYM = 736,             /* ROUTINE_SYM  */
    ROWS_SYM = 737,                /* ROWS_SYM  */
    ROW_FORMAT_SYM = 738,          /* ROW_FORMAT_SYM  */
    ROW_SYM = 739,                 /* ROW_SYM  */
    ROW_COUNT_SYM = 740,           /* ROW_COUNT_SYM  */
    RTREE_SYM = 741,               /* RTREE_SYM  */
    SAVEPOINT_SYM = 742,           /* SAVEPOINT_SYM  */
    SCHEDULE_SYM = 743,            /* SCHEDULE_SYM  */
    SCHEMA_NAME_SYM = 744,         /* SCHEMA_NAME_SYM  */
    SECOND_MICROSECOND_SYM = 745,  /* SECOND_MICROSECOND_SYM  */
    SECOND_SYM = 746,              /* SECOND_SYM  */
    SECURITY_SYM = 747,            /* SECURITY_SYM  */
    SELECT_SYM = 748,              /* SELECT_SYM  */
    SENSITIVE_SYM = 749,           /* SENSITIVE_SYM  */
    SEPARATOR_SYM = 750,           /* SEPARATOR_SYM  */
    SERIALIZABLE_SYM = 751,        /* SERIALIZABLE_SYM  */
    SERIAL_SYM = 752,              /* SERIAL_SYM  */
    SESSION_SYM = 753,             /* SESSION_SYM  */
    SERVER_SYM = 754,              /* SERVER_SYM  */
    OBSOLETE_TOKEN_755 = 755,      /* OBSOLETE_TOKEN_755  */
    SET_SYM = 756,                 /* SET_SYM  */
    SET_VAR = 757,                 /* SET_VAR  */
    SHARE_SYM = 758,               /* SHARE_SYM  */
    SHIFT_LEFT = 759,              /* SHIFT_LEFT  */
    SHIFT_RIGHT = 760,             /* SHIFT_RIGHT  */
    SHOW = 761,                    /* SHOW  */
    SHUTDOWN = 762,                /* SHUTDOWN  */
    SIGNAL_SYM = 763,              /* SIGNAL_SYM  */
    SIGNED_SYM = 764,              /* SIGNED_SYM  */
    SIMPLE_SYM = 765,              /* SIMPLE_SYM  */
    SLAVE = 766,                   /* SLAVE  */
    SLOW = 767,                    /* SLOW  */
    SMALLINT_SYM = 768,            /* SMALLINT_SYM  */
    SNAPSHOT_SYM = 769,            /* SNAPSHOT_SYM  */
    SOCKET_SYM = 770,              /* SOCKET_SYM  */
    SONAME_SYM = 771,              /* SONAME_SYM  */
    SOUNDS_SYM = 772,              /* SOUNDS_SYM  */
    SOURCE_SYM = 773,              /* SOURCE_SYM  */
    SPATIAL_SYM = 774,             /* SPATIAL_SYM  */
    SPECIFIC_SYM = 775,            /* SPECIFIC_SYM  */
    SQLEXCEPTION_SYM = 776,        /* SQLEXCEPTION_SYM  */
    SQLSTATE_SYM = 777,            /* SQLSTATE_SYM  */
    SQLWARNING_SYM = 778,          /* SQLWARNING_SYM  */
    SQL_AFTER_GTIDS = 779,         /* SQL_AFTER_GTIDS  */
    SQL_AFTER_MTS_GAPS = 780,      /* SQL_AFTER_MTS_GAPS  */
    SQL_BEFORE_GTIDS = 781,        /* SQL_BEFORE_GTIDS  */
    SQL_BIG_RESULT = 782,          /* SQL_BIG_RESULT  */
    SQL_BUFFER_RESULT = 783,       /* SQL_BUFFER_RESULT  */
    OBSOLETE_TOKEN_784 = 784,      /* OBSOLETE_TOKEN_784  */
    SQL_CALC_FOUND_ROWS = 785,     /* SQL_CALC_FOUND_ROWS  */
    SQL_NO_CACHE_SYM = 786,        /* SQL_NO_CACHE_SYM  */
    SQL_SMALL_RESULT = 787,        /* SQL_SMALL_RESULT  */
    SQL_SYM = 788,                 /* SQL_SYM  */
    SQL_THREAD = 789,              /* SQL_THREAD  */
    SSL_SYM = 790,                 /* SSL_SYM  */
    STACKED_SYM = 791,             /* STACKED_SYM  */
    STARTING = 792,                /* STARTING  */
    STARTS_SYM = 793,              /* STARTS_SYM  */
    START_SYM = 794,               /* START_SYM  */
    STATS_AUTO_RECALC_SYM = 795,   /* STATS_AUTO_RECALC_SYM  */
    STATS_PERSISTENT_SYM = 796,    /* STATS_PERSISTENT_SYM  */
    STATS_SAMPLE_PAGES_SYM = 797,  /* STATS_SAMPLE_PAGES_SYM  */
    STATUS_SYM = 798,              /* STATUS_SYM  */
    STDDEV_SAMP_SYM = 799,         /* STDDEV_SAMP_SYM  */
    STD_SYM = 800,                 /* STD_SYM  */
    STOP_SYM = 801,                /* STOP_SYM  */
    STORAGE_SYM = 802,             /* STORAGE_SYM  */
    STORED_SYM = 803,              /* STORED_SYM  */
    STRAIGHT_JOIN = 804,           /* STRAIGHT_JOIN  */
    STRING_SYM = 805,              /* STRING_SYM  */
    SUBCLASS_ORIGIN_SYM = 806,     /* SUBCLASS_ORIGIN_SYM  */
    SUBDATE_SYM = 807,             /* SUBDATE_SYM  */
    SUBJECT_SYM = 808,             /* SUBJECT_SYM  */
    SUBPARTITIONS_SYM = 809,       /* SUBPARTITIONS_SYM  */
    SUBPARTITION_SYM = 810,        /* SUBPARTITION_SYM  */
    SUBSTRING = 811,               /* SUBSTRING  */
    SUM_SYM = 812,                 /* SUM_SYM  */
    SUPER_SYM = 813,               /* SUPER_SYM  */
    SUSPEND_SYM = 814,             /* SUSPEND_SYM  */
    SWAPS_SYM = 815,               /* SWAPS_SYM  */
    SWITCHES_SYM = 816,            /* SWITCHES_SYM  */
    SYSDATE = 817,                 /* SYSDATE  */
    TABLES = 818,                  /* TABLES  */
    TABLESPACE_SYM = 819,          /* TABLESPACE_SYM  */
    OBSOLETE_TOKEN_820 = 820,      /* OBSOLETE_TOKEN_820  */
    TABLE_SYM = 821,               /* TABLE_SYM  */
    TABLE_CHECKSUM_SYM = 822,      /* TABLE_CHECKSUM_SYM  */
    TABLE_NAME_SYM = 823,          /* TABLE_NAME_SYM  */
    TEMPORARY = 824,               /* TEMPORARY  */
    TEMPTABLE_SYM = 825,           /* TEMPTABLE_SYM  */
    TERMINATED = 826,              /* TERMINATED  */
    TEXT_STRING = 827,             /* TEXT_STRING  */
    TEXT_SYM = 828,                /* TEXT_SYM  */
    THAN_SYM = 829,                /* THAN_SYM  */
    THEN_SYM = 830,                /* THEN_SYM  */
    TIMESTAMP_SYM = 831,           /* TIMESTAMP_SYM  */
    TIMESTAMP_ADD = 832,           /* TIMESTAMP_ADD  */
    TIMESTAMP_DIFF = 833,          /* TIMESTAMP_DIFF  */
    TIME_SYM = 834,                /* TIME_SYM  */
    TINYBLOB_SYM = 835,            /* TINYBLOB_SYM  */
    TINYINT_SYM = 836,             /* TINYINT_SYM  */
    TINYTEXT_SYN = 837,            /* TINYTEXT_SYN  */
    TO_SYM = 838,                  /* TO_SYM  */
    TRAILING = 839,                /* TRAILING  */
    TRANSACTION_SYM = 840,         /* TRANSACTION_SYM  */
    TRIGGERS_SYM = 841,            /* TRIGGERS_SYM  */
    TRIGGER_SYM = 842,             /* TRIGGER_SYM  */
    TRIM = 843,                    /* TRIM  */
    TRUE_SYM = 844,                /* TRUE_SYM  */
    TRUNCATE_SYM = 845,            /* TRUNCATE_SYM  */
    TYPES_SYM = 846,               /* TYPES_SYM  */
    TYPE_SYM = 847,                /* TYPE_SYM  */
    OBSOLETE_TOKEN_848 = 848,      /* OBSOLETE_TOKEN_848  */
    ULONGLONG_NUM = 849,           /* ULONGLONG_NUM  */
    UNCOMMITTED_SYM = 850,         /* UNCOMMITTED_SYM  */
    UNDEFINED_SYM = 851,           /* UNDEFINED_SYM  */
    UNDERSCORE_CHARSET = 852,      /* UNDERSCORE_CHARSET  */
    UNDOFILE_SYM = 853,            /* UNDOFILE_SYM  */
    UNDO_BUFFER_SIZE_SYM = 854,    /* UNDO_BUFFER_SIZE_SYM  */
    UNDO_SYM = 855,                /* UNDO_SYM  */
    UNICODE_SYM = 856,             /* UNICODE_SYM  */
    UNINSTALL_SYM = 857,           /* UNINSTALL_SYM  */
    UNION_SYM = 858,               /* UNION_SYM  */
    UNIQUE_SYM = 859,              /* UNIQUE_SYM  */
    UNKNOWN_SYM = 860,             /* UNKNOWN_SYM  */
    UNLOCK_SYM = 861,              /* UNLOCK_SYM  */
    UNSIGNED_SYM = 862,            /* UNSIGNED_SYM  */
    UNTIL_SYM = 863,               /* UNTIL_SYM  */
    UPDATE_SYM = 864,              /* UPDATE_SYM  */
    UPGRADE_SYM = 865,             /* UPGRADE_SYM  */
    USAGE = 866,                   /* USAGE  */
    USER = 867,                    /* USER  */
    USE_FRM = 868,                 /* USE_FRM  */
    USE_SYM = 869,                 /* USE_SYM  */
    USING = 870,                   /* USING  */
    UTC_DATE_SYM = 871,            /* UTC_DATE_SYM  */
    UTC_TIMESTAMP_SYM = 872,       /* UTC_TIMESTAMP_SYM  */
    UTC_TIME_SYM = 873,            /* UTC_TIME_SYM  */
    VALIDATION_SYM = 874,          /* VALIDATION_SYM  */
    VALUES = 875,                  /* VALUES  */
    VALUE_SYM = 876,               /* VALUE_SYM  */
    VARBINARY_SYM = 877,           /* VARBINARY_SYM  */
    VARCHAR_SYM = 878,             /* VARCHAR_SYM  */
    VARIABLES = 879,               /* VARIABLES  */
    VARIANCE_SYM = 880,            /* VARIANCE_SYM  */
    VARYING = 881,                 /* VARYING  */
    VAR_SAMP_SYM = 882,            /* VAR_SAMP_SYM  */
    VIEW_SYM = 883,                /* VIEW_SYM  */
    VIRTUAL_SYM = 884,             /* VIRTUAL_SYM  */
    WAIT_SYM = 885,                /* WAIT_SYM  */
    WARNINGS = 886,                /* WARNINGS  */
    WEEK_SYM = 887,                /* WEEK_SYM  */
    WEIGHT_STRING_SYM = 888,       /* WEIGHT_STRING_SYM  */
    WHEN_SYM = 889,                /* WHEN_SYM  */
    WHERE = 890,                   /* WHERE  */
    WHILE_SYM = 891,               /* WHILE_SYM  */
    WITH = 892,                    /* WITH  */
    OBSOLETE_TOKEN_893 = 893,      /* OBSOLETE_TOKEN_893  */
    WITH_ROLLUP_SYM = 894,         /* WITH_ROLLUP_SYM  */
    WITHOUT_SYM = 895,             /* WITHOUT_SYM  */
    WORK_SYM = 896,                /* WORK_SYM  */
    WRAPPER_SYM = 897,             /* WRAPPER_SYM  */
    WRITE_SYM = 898,               /* WRITE_SYM  */
    X509_SYM = 899,                /* X509_SYM  */
    XA_SYM = 900,                  /* XA_SYM  */
    XID_SYM = 901,                 /* XID_SYM  */
    XML_SYM = 902,                 /* XML_SYM  */
    XOR = 903,                     /* XOR  */
    YEAR_MONTH_SYM = 904,          /* YEAR_MONTH_SYM  */
    YEAR_SYM = 905,                /* YEAR_SYM  */
    ZEROFILL_SYM = 906,            /* ZEROFILL_SYM  */
    JSON_UNQUOTED_SEPARATOR_SYM = 907, /* JSON_UNQUOTED_SEPARATOR_SYM  */
    PERSIST_SYM = 908,             /* PERSIST_SYM  */
    ROLE_SYM = 909,                /* ROLE_SYM  */
    ADMIN_SYM = 910,               /* ADMIN_SYM  */
    INVISIBLE_SYM = 911,           /* INVISIBLE_SYM  */
    VISIBLE_SYM = 912,             /* VISIBLE_SYM  */
    EXCEPT_SYM = 913,              /* EXCEPT_SYM  */
    COMPONENT_SYM = 914,           /* COMPONENT_SYM  */
    RECURSIVE_SYM = 915,           /* RECURSIVE_SYM  */
    GRAMMAR_SELECTOR_EXPR = 916,   /* GRAMMAR_SELECTOR_EXPR  */
    GRAMMAR_SELECTOR_GCOL = 917,   /* GRAMMAR_SELECTOR_GCOL  */
    GRAMMAR_SELECTOR_PART = 918,   /* GRAMMAR_SELECTOR_PART  */
    GRAMMAR_SELECTOR_CTE = 919,    /* GRAMMAR_SELECTOR_CTE  */
    JSON_OBJECTAGG = 920,          /* JSON_OBJECTAGG  */
    JSON_ARRAYAGG = 921,           /* JSON_ARRAYAGG  */
    OF_SYM = 922,                  /* OF_SYM  */
    SKIP_SYM = 923,                /* SKIP_SYM  */
    LOCKED_SYM = 924,              /* LOCKED_SYM  */
    NOWAIT_SYM = 925,              /* NOWAIT_SYM  */
    GROUPING_SYM = 926,            /* GROUPING_SYM  */
    PERSIST_ONLY_SYM = 927,        /* PERSIST_ONLY_SYM  */
    HISTOGRAM_SYM = 928,           /* HISTOGRAM_SYM  */
    BUCKETS_SYM = 929,             /* BUCKETS_SYM  */
    OBSOLETE_TOKEN_930 = 930,      /* OBSOLETE_TOKEN_930  */
    CLONE_SYM = 931,               /* CLONE_SYM  */
    CUME_DIST_SYM = 932,           /* CUME_DIST_SYM  */
    DENSE_RANK_SYM = 933,          /* DENSE_RANK_SYM  */
    EXCLUDE_SYM = 934,             /* EXCLUDE_SYM  */
    FIRST_VALUE_SYM = 935,         /* FIRST_VALUE_SYM  */
    FOLLOWING_SYM = 936,           /* FOLLOWING_SYM  */
    GROUPS_SYM = 937,              /* GROUPS_SYM  */
    LAG_SYM = 938,                 /* LAG_SYM  */
    LAST_VALUE_SYM = 939,          /* LAST_VALUE_SYM  */
    LEAD_SYM = 940,                /* LEAD_SYM  */
    NTH_VALUE_SYM = 941,           /* NTH_VALUE_SYM  */
    NTILE_SYM = 942,               /* NTILE_SYM  */
    NULLS_SYM = 943,               /* NULLS_SYM  */
    OTHERS_SYM = 944,              /* OTHERS_SYM  */
    OVER_SYM = 945,                /* OVER_SYM  */
    PERCENT_RANK_SYM = 946,        /* PERCENT_RANK_SYM  */
    PRECEDING_SYM = 947,           /* PRECEDING_SYM  */
    RANK_SYM = 948,                /* RANK_SYM  */
    RESPECT_SYM = 949,             /* RESPECT_SYM  */
    ROW_NUMBER_SYM = 950,          /* ROW_NUMBER_SYM  */
    TIES_SYM = 951,                /* TIES_SYM  */
    UNBOUNDED_SYM = 952,           /* UNBOUNDED_SYM  */
    WINDOW_SYM = 953,              /* WINDOW_SYM  */
    EMPTY_SYM = 954,               /* EMPTY_SYM  */
    JSON_TABLE_SYM = 955,          /* JSON_TABLE_SYM  */
    NESTED_SYM = 956,              /* NESTED_SYM  */
    ORDINALITY_SYM = 957,          /* ORDINALITY_SYM  */
    PATH_SYM = 958,                /* PATH_SYM  */
    HISTORY_SYM = 959,             /* HISTORY_SYM  */
    REUSE_SYM = 960,               /* REUSE_SYM  */
    SRID_SYM = 961,                /* SRID_SYM  */
    THREAD_PRIORITY_SYM = 962,     /* THREAD_PRIORITY_SYM  */
    RESOURCE_SYM = 963,            /* RESOURCE_SYM  */
    SYSTEM_SYM = 964,              /* SYSTEM_SYM  */
    VCPU_SYM = 965,                /* VCPU_SYM  */
    OBSOLETE_TOKEN_966 = 966,      /* OBSOLETE_TOKEN_966  */
    OBSOLETE_TOKEN_967 = 967,      /* OBSOLETE_TOKEN_967  */
    RESTART_SYM = 968,             /* RESTART_SYM  */
    DEFINITION_SYM = 969,          /* DEFINITION_SYM  */
    DESCRIPTION_SYM = 970,         /* DESCRIPTION_SYM  */
    ORGANIZATION_SYM = 971,        /* ORGANIZATION_SYM  */
    REFERENCE_SYM = 972,           /* REFERENCE_SYM  */
    ACTIVE_SYM = 973,              /* ACTIVE_SYM  */
    INACTIVE_SYM = 974,            /* INACTIVE_SYM  */
    LATERAL_SYM = 975,             /* LATERAL_SYM  */
    ARRAY_SYM = 976,               /* ARRAY_SYM  */
    MEMBER_SYM = 977,              /* MEMBER_SYM  */
    OPTIONAL_SYM = 978,            /* OPTIONAL_SYM  */
    SECONDARY_SYM = 979,           /* SECONDARY_SYM  */
    SECONDARY_ENGINE_SYM = 980,    /* SECONDARY_ENGINE_SYM  */
    SECONDARY_LOAD_SYM = 981,      /* SECONDARY_LOAD_SYM  */
    SECONDARY_UNLOAD_SYM = 982,    /* SECONDARY_UNLOAD_SYM  */
    RETAIN_SYM = 983,              /* RETAIN_SYM  */
    OLD_SYM = 984,                 /* OLD_SYM  */
    ENFORCED_SYM = 985,            /* ENFORCED_SYM  */
    OJ_SYM = 986,                  /* OJ_SYM  */
    NETWORK_NAMESPACE_SYM = 987,   /* NETWORK_NAMESPACE_SYM  */
    RANDOM_SYM = 988,              /* RANDOM_SYM  */
    OBSOLETE_TOKEN_989 = 989,      /* OBSOLETE_TOKEN_989  */
    OBSOLETE_TOKEN_990 = 990,      /* OBSOLETE_TOKEN_990  */
    PRIVILEGE_CHECKS_USER_SYM = 991, /* PRIVILEGE_CHECKS_USER_SYM  */
    OBSOLETE_TOKEN_992 = 992,      /* OBSOLETE_TOKEN_992  */
    REQUIRE_ROW_FORMAT_SYM = 993,  /* REQUIRE_ROW_FORMAT_SYM  */
    PASSWORD_LOCK_TIME_SYM = 994,  /* PASSWORD_LOCK_TIME_SYM  */
    FAILED_LOGIN_ATTEMPTS_SYM = 995, /* FAILED_LOGIN_ATTEMPTS_SYM  */
    REQUIRE_TABLE_PRIMARY_KEY_CHECK_SYM = 996, /* REQUIRE_TABLE_PRIMARY_KEY_CHECK_SYM  */
    STREAM_SYM = 997,              /* STREAM_SYM  */
    OFF_SYM = 998,                 /* OFF_SYM  */
    RETURNING_SYM = 999,           /* RETURNING_SYM  */
    JSON_VALUE_SYM = 1151,         /* JSON_VALUE_SYM  */
    TLS_SYM = 1152,                /* TLS_SYM  */
    ATTRIBUTE_SYM = 1153,          /* ATTRIBUTE_SYM  */
    ENGINE_ATTRIBUTE_SYM = 1154,   /* ENGINE_ATTRIBUTE_SYM  */
    SECONDARY_ENGINE_ATTRIBUTE_SYM = 1155, /* SECONDARY_ENGINE_ATTRIBUTE_SYM  */
    SOURCE_CONNECTION_AUTO_FAILOVER_SYM = 1156, /* SOURCE_CONNECTION_AUTO_FAILOVER_SYM  */
    ZONE_SYM = 1157,               /* ZONE_SYM  */
    GRAMMAR_SELECTOR_DERIVED_EXPR = 1158, /* GRAMMAR_SELECTOR_DERIVED_EXPR  */
    REPLICA_SYM = 1159,            /* REPLICA_SYM  */
    REPLICAS_SYM = 1160,           /* REPLICAS_SYM  */
    ASSIGN_GTIDS_TO_ANONYMOUS_TRANSACTIONS_SYM = 1161, /* ASSIGN_GTIDS_TO_ANONYMOUS_TRANSACTIONS_SYM  */
    GET_SOURCE_PUBLIC_KEY_SYM = 1162, /* GET_SOURCE_PUBLIC_KEY_SYM  */
    SOURCE_AUTO_POSITION_SYM = 1163, /* SOURCE_AUTO_POSITION_SYM  */
    SOURCE_BIND_SYM = 1164,        /* SOURCE_BIND_SYM  */
    SOURCE_COMPRESSION_ALGORITHM_SYM = 1165, /* SOURCE_COMPRESSION_ALGORITHM_SYM  */
    SOURCE_CONNECT_RETRY_SYM = 1166, /* SOURCE_CONNECT_RETRY_SYM  */
    SOURCE_DELAY_SYM = 1167,       /* SOURCE_DELAY_SYM  */
    SOURCE_HEARTBEAT_PERIOD_SYM = 1168, /* SOURCE_HEARTBEAT_PERIOD_SYM  */
    SOURCE_HOST_SYM = 1169,        /* SOURCE_HOST_SYM  */
    SOURCE_LOG_FILE_SYM = 1170,    /* SOURCE_LOG_FILE_SYM  */
    SOURCE_LOG_POS_SYM = 1171,     /* SOURCE_LOG_POS_SYM  */
    SOURCE_PASSWORD_SYM = 1172,    /* SOURCE_PASSWORD_SYM  */
    SOURCE_PORT_SYM = 1173,        /* SOURCE_PORT_SYM  */
    SOURCE_PUBLIC_KEY_PATH_SYM = 1174, /* SOURCE_PUBLIC_KEY_PATH_SYM  */
    SOURCE_RETRY_COUNT_SYM = 1175, /* SOURCE_RETRY_COUNT_SYM  */
    SOURCE_SSL_SYM = 1176,         /* SOURCE_SSL_SYM  */
    SOURCE_SSL_CA_SYM = 1177,      /* SOURCE_SSL_CA_SYM  */
    SOURCE_SSL_CAPATH_SYM = 1178,  /* SOURCE_SSL_CAPATH_SYM  */
    SOURCE_SSL_CERT_SYM = 1179,    /* SOURCE_SSL_CERT_SYM  */
    SOURCE_SSL_CIPHER_SYM = 1180,  /* SOURCE_SSL_CIPHER_SYM  */
    SOURCE_SSL_CRL_SYM = 1181,     /* SOURCE_SSL_CRL_SYM  */
    SOURCE_SSL_CRLPATH_SYM = 1182, /* SOURCE_SSL_CRLPATH_SYM  */
    SOURCE_SSL_KEY_SYM = 1183,     /* SOURCE_SSL_KEY_SYM  */
    SOURCE_SSL_VERIFY_SERVER_CERT_SYM = 1184, /* SOURCE_SSL_VERIFY_SERVER_CERT_SYM  */
    SOURCE_TLS_CIPHERSUITES_SYM = 1185, /* SOURCE_TLS_CIPHERSUITES_SYM  */
    SOURCE_TLS_VERSION_SYM = 1186, /* SOURCE_TLS_VERSION_SYM  */
    SOURCE_USER_SYM = 1187,        /* SOURCE_USER_SYM  */
    SOURCE_ZSTD_COMPRESSION_LEVEL_SYM = 1188, /* SOURCE_ZSTD_COMPRESSION_LEVEL_SYM  */
    ST_COLLECT_SYM = 1189,         /* ST_COLLECT_SYM  */
    KEYRING_SYM = 1190,            /* KEYRING_SYM  */
    AUTHENTICATION_SYM = 1191,     /* AUTHENTICATION_SYM  */
    FACTOR_SYM = 1192,             /* FACTOR_SYM  */
    FINISH_SYM = 1193,             /* FINISH_SYM  */
    INITIATE_SYM = 1194,           /* INITIATE_SYM  */
    REGISTRATION_SYM = 1195,       /* REGISTRATION_SYM  */
    UNREGISTER_SYM = 1196,         /* UNREGISTER_SYM  */
    INITIAL_SYM = 1197,            /* INITIAL_SYM  */
    CHALLENGE_RESPONSE_SYM = 1198, /* CHALLENGE_RESPONSE_SYM  */
    GTID_ONLY_SYM = 1199,          /* GTID_ONLY_SYM  */
    INTERSECT_SYM = 1200,          /* INTERSECT_SYM  */
    BULK_SYM = 1201,               /* BULK_SYM  */
    URL_SYM = 1202,                /* URL_SYM  */
    GENERATE_SYM = 1203,           /* GENERATE_SYM  */
    DOLLAR_QUOTED_STRING_SYM = 1204, /* DOLLAR_QUOTED_STRING_SYM  */
    PARSE_TREE_SYM = 1205,         /* PARSE_TREE_SYM  */
    LOG_SYM = 1206,                /* LOG_SYM  */
    GTIDS_SYM = 1207,              /* GTIDS_SYM  */
    PARALLEL_SYM = 1208,           /* PARALLEL_SYM  */
    S3_SYM = 1209,                 /* S3_SYM  */
    QUALIFY_SYM = 1210,            /* QUALIFY_SYM  */
    AUTO_SYM = 1211,               /* AUTO_SYM  */
    MANUAL_SYM = 1212,             /* MANUAL_SYM  */
    BERNOULLI_SYM = 1213,          /* BERNOULLI_SYM  */
    TABLESAMPLE_SYM = 1214,        /* TABLESAMPLE_SYM  */
    CLIENT_STATS_SYM = 1301,       /* CLIENT_STATS_SYM  */
    CLUSTERING_SYM = 1302,         /* CLUSTERING_SYM  */
    COMPRESSION_DICTIONARY_SYM = 1303, /* COMPRESSION_DICTIONARY_SYM  */
    INDEX_STATS_SYM = 1304,        /* INDEX_STATS_SYM  */
    TABLE_STATS_SYM = 1305,        /* TABLE_STATS_SYM  */
    THREAD_STATS_SYM = 1306,       /* THREAD_STATS_SYM  */
    USER_STATS_SYM = 1307,         /* USER_STATS_SYM  */
    EFFECTIVE_SYM = 1350,          /* EFFECTIVE_SYM  */
    SEQUENCE_TABLE_SYM = 1351,     /* SEQUENCE_TABLE_SYM  */
    PERCONA_SEQUENCE_TABLE_SYM = 1352, /* PERCONA_SEQUENCE_TABLE_SYM  */
    KEYWORD_USED_AS_IDENT = 1353,  /* KEYWORD_USED_AS_IDENT  */
    KEYWORD_USED_AS_KEYWORD = 1354, /* KEYWORD_USED_AS_KEYWORD  */
    CONDITIONLESS_JOIN = 1355,     /* CONDITIONLESS_JOIN  */
    PREFER_PARENTHESES = 1356,     /* PREFER_PARENTHESES  */
    EMPTY_FROM_CLAUSE = 1357       /* EMPTY_FROM_CLAUSE  */
  };
  typedef enum my_sql_parser_tokentype my_sql_parser_token_kind_t;
#endif
/* Token kinds.  */
#define MY_SQL_PARSER_EMPTY -2
#define MY_SQL_PARSER_EOF 0
#define MY_SQL_PARSER_error 256
#define MY_SQL_PARSER_UNDEF 1150
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACCOUNT_SYM 260
#define ACTION 261
#define ADD 262
#define ADDDATE_SYM 263
#define AFTER_SYM 264
#define AGAINST 265
#define AGGREGATE_SYM 266
#define ALGORITHM_SYM 267
#define ALL 268
#define ALTER 269
#define ALWAYS_SYM 270
#define OBSOLETE_TOKEN_271 271
#define ANALYZE_SYM 272
#define AND_AND_SYM 273
#define AND_SYM 274
#define ANY_SYM 275
#define AS 276
#define ASC 277
#define ASCII_SYM 278
#define ASENSITIVE_SYM 279
#define AT_SYM 280
#define AUTOEXTEND_SIZE_SYM 281
#define AUTO_INC 282
#define AVG_ROW_LENGTH 283
#define AVG_SYM 284
#define BACKUP_SYM 285
#define BEFORE_SYM 286
#define BEGIN_SYM 287
#define BETWEEN_SYM 288
#define BIGINT_SYM 289
#define BINARY_SYM 290
#define BINLOG_SYM 291
#define BIN_NUM 292
#define BIT_AND_SYM 293
#define BIT_OR_SYM 294
#define BIT_SYM 295
#define BIT_XOR_SYM 296
#define BLOB_SYM 297
#define BLOCK_SYM 298
#define BOOLEAN_SYM 299
#define BOOL_SYM 300
#define BOTH 301
#define BTREE_SYM 302
#define BY 303
#define BYTE_SYM 304
#define CACHE_SYM 305
#define CALL_SYM 306
#define CASCADE 307
#define CASCADED 308
#define CASE_SYM 309
#define CAST_SYM 310
#define CATALOG_NAME_SYM 311
#define CHAIN_SYM 312
#define CHANGE 313
#define CHANGED 314
#define CHANNEL_SYM 315
#define CHARSET 316
#define CHAR_SYM 317
#define CHECKSUM_SYM 318
#define CHECK_SYM 319
#define CIPHER_SYM 320
#define CLASS_ORIGIN_SYM 321
#define CLIENT_SYM 322
#define CLOSE_SYM 323
#define COALESCE 324
#define CODE_SYM 325
#define COLLATE_SYM 326
#define COLLATION_SYM 327
#define COLUMNS 328
#define COLUMN_SYM 329
#define COLUMN_FORMAT_SYM 330
#define COLUMN_NAME_SYM 331
#define COMMENT_SYM 332
#define COMMITTED_SYM 333
#define COMMIT_SYM 334
#define COMPACT_SYM 335
#define COMPLETION_SYM 336
#define COMPRESSED_SYM 337
#define COMPRESSION_SYM 338
#define ENCRYPTION_SYM 339
#define CONCURRENT 340
#define CONDITION_SYM 341
#define CONNECTION_SYM 342
#define CONSISTENT_SYM 343
#define CONSTRAINT 344
#define CONSTRAINT_CATALOG_SYM 345
#define CONSTRAINT_NAME_SYM 346
#define CONSTRAINT_SCHEMA_SYM 347
#define CONTAINS_SYM 348
#define CONTEXT_SYM 349
#define CONTINUE_SYM 350
#define CONVERT_SYM 351
#define COUNT_SYM 352
#define CPU_SYM 353
#define CREATE 354
#define CROSS 355
#define CUBE_SYM 356
#define CURDATE 357
#define CURRENT_SYM 358
#define CURRENT_USER 359
#define CURSOR_SYM 360
#define CURSOR_NAME_SYM 361
#define CURTIME 362
#define DATABASE 363
#define DATABASES 364
#define DATAFILE_SYM 365
#define DATA_SYM 366
#define DATETIME_SYM 367
#define DATE_ADD_INTERVAL 368
#define DATE_SUB_INTERVAL 369
#define DATE_SYM 370
#define DAY_HOUR_SYM 371
#define DAY_MICROSECOND_SYM 372
#define DAY_MINUTE_SYM 373
#define DAY_SECOND_SYM 374
#define DAY_SYM 375
#define DEALLOCATE_SYM 376
#define DECIMAL_NUM 377
#define DECIMAL_SYM 378
#define DECLARE_SYM 379
#define DEFAULT_SYM 380
#define DEFAULT_AUTH_SYM 381
#define DEFINER_SYM 382
#define DELAYED_SYM 383
#define DELAY_KEY_WRITE_SYM 384
#define DELETE_SYM 385
#define DESC 386
#define DESCRIBE 387
#define OBSOLETE_TOKEN_388 388
#define DETERMINISTIC_SYM 389
#define DIAGNOSTICS_SYM 390
#define DIRECTORY_SYM 391
#define DISABLE_SYM 392
#define DISCARD_SYM 393
#define DISK_SYM 394
#define DISTINCT 395
#define DIV_SYM 396
#define DOUBLE_SYM 397
#define DO_SYM 398
#define DROP 399
#define DUAL_SYM 400
#define DUMPFILE 401
#define DUPLICATE_SYM 402
#define DYNAMIC_SYM 403
#define EACH_SYM 404
#define ELSE 405
#define ELSEIF_SYM 406
#define ENABLE_SYM 407
#define ENCLOSED 408
#define END 409
#define ENDS_SYM 410
#define END_OF_INPUT 411
#define ENGINES_SYM 412
#define ENGINE_SYM 413
#define ENUM_SYM 414
#define EQ 415
#define EQUAL_SYM 416
#define ERROR_SYM 417
#define ERRORS 418
#define ESCAPED 419
#define ESCAPE_SYM 420
#define EVENTS_SYM 421
#define EVENT_SYM 422
#define EVERY_SYM 423
#define EXCHANGE_SYM 424
#define EXECUTE_SYM 425
#define EXISTS 426
#define EXIT_SYM 427
#define EXPANSION_SYM 428
#define EXPIRE_SYM 429
#define EXPORT_SYM 430
#define EXTENDED_SYM 431
#define EXTENT_SIZE_SYM 432
#define EXTRACT_SYM 433
#define FALSE_SYM 434
#define FAST_SYM 435
#define FAULTS_SYM 436
#define FETCH_SYM 437
#define FILE_SYM 438
#define FILE_BLOCK_SIZE_SYM 439
#define FILTER_SYM 440
#define FIRST_SYM 441
#define FIXED_SYM 442
#define FLOAT_NUM 443
#define FLOAT_SYM 444
#define FLUSH_SYM 445
#define FOLLOWS_SYM 446
#define FORCE_SYM 447
#define FOREIGN 448
#define FOR_SYM 449
#define FORMAT_SYM 450
#define FOUND_SYM 451
#define FROM 452
#define FULL 453
#define FULLTEXT_SYM 454
#define FUNCTION_SYM 455
#define GE 456
#define GENERAL 457
#define GENERATED 458
#define GROUP_REPLICATION 459
#define GEOMETRYCOLLECTION_SYM 460
#define GEOMETRY_SYM 461
#define GET_FORMAT 462
#define GET_SYM 463
#define GLOBAL_SYM 464
#define GRANT 465
#define GRANTS 466
#define GROUP_SYM 467
#define GROUP_CONCAT_SYM 468
#define GT_SYM 469
#define HANDLER_SYM 470
#define HASH_SYM 471
#define HAVING 472
#define HELP_SYM 473
#define HEX_NUM 474
#define HIGH_PRIORITY 475
#define HOST_SYM 476
#define HOSTS_SYM 477
#define HOUR_MICROSECOND_SYM 478
#define HOUR_MINUTE_SYM 479
#define HOUR_SECOND_SYM 480
#define HOUR_SYM 481
#define IDENT 482
#define IDENTIFIED_SYM 483
#define IDENT_QUOTED 484
#define IF 485
#define IGNORE_SYM 486
#define IGNORE_SERVER_IDS_SYM 487
#define IMPORT 488
#define INDEXES 489
#define INDEX_SYM 490
#define INFILE_SYM 491
#define INITIAL_SIZE_SYM 492
#define INNER_SYM 493
#define INOUT_SYM 494
#define INSENSITIVE_SYM 495
#define INSERT_SYM 496
#define INSERT_METHOD 497
#define INSTANCE_SYM 498
#define INSTALL_SYM 499
#define INTERVAL_SYM 500
#define INTO 501
#define INT_SYM 502
#define INVOKER_SYM 503
#define IN_SYM 504
#define IO_AFTER_GTIDS 505
#define IO_BEFORE_GTIDS 506
#define IO_SYM 507
#define IPC_SYM 508
#define IS 509
#define ISOLATION 510
#define ISSUER_SYM 511
#define ITERATE_SYM 512
#define JOIN_SYM 513
#define JSON_SEPARATOR_SYM 514
#define JSON_SYM 515
#define KEYS 516
#define KEY_BLOCK_SIZE 517
#define KEY_SYM 518
#define KILL_SYM 519
#define LANGUAGE_SYM 520
#define LAST_SYM 521
#define LE 522
#define LEADING 523
#define LEAVES 524
#define LEAVE_SYM 525
#define LEFT 526
#define LESS_SYM 527
#define LEVEL_SYM 528
#define LEX_HOSTNAME 529
#define LIKE 530
#define LIMIT 531
#define LINEAR_SYM 532
#define LINES 533
#define LINESTRING_SYM 534
#define LIST_SYM 535
#define LOAD 536
#define LOCAL_SYM 537
#define OBSOLETE_TOKEN_538 538
#define LOCKS_SYM 539
#define LOCK_SYM 540
#define LOGFILE_SYM 541
#define LOGS_SYM 542
#define LONGBLOB_SYM 543
#define LONGTEXT_SYM 544
#define LONG_NUM 545
#define LONG_SYM 546
#define LOOP_SYM 547
#define LOW_PRIORITY 548
#define LT 549
#define OBSOLETE_TOKEN_550 550
#define OBSOLETE_TOKEN_551 551
#define OBSOLETE_TOKEN_552 552
#define OBSOLETE_TOKEN_553 553
#define OBSOLETE_TOKEN_554 554
#define OBSOLETE_TOKEN_555 555
#define OBSOLETE_TOKEN_556 556
#define OBSOLETE_TOKEN_557 557
#define OBSOLETE_TOKEN_558 558
#define OBSOLETE_TOKEN_559 559
#define OBSOLETE_TOKEN_561 561
#define OBSOLETE_TOKEN_562 562
#define OBSOLETE_TOKEN_563 563
#define OBSOLETE_TOKEN_564 564
#define OBSOLETE_TOKEN_565 565
#define OBSOLETE_TOKEN_566 566
#define OBSOLETE_TOKEN_567 567
#define OBSOLETE_TOKEN_568 568
#define OBSOLETE_TOKEN_569 569
#define OBSOLETE_TOKEN_570 570
#define MASTER_SYM 571
#define OBSOLETE_TOKEN_572 572
#define OBSOLETE_TOKEN_573 573
#define MATCH 574
#define MAX_CONNECTIONS_PER_HOUR 575
#define MAX_QUERIES_PER_HOUR 576
#define MAX_ROWS 577
#define MAX_SIZE_SYM 578
#define MAX_SYM 579
#define MAX_UPDATES_PER_HOUR 580
#define MAX_USER_CONNECTIONS_SYM 581
#define MAX_VALUE_SYM 582
#define MEDIUMBLOB_SYM 583
#define MEDIUMINT_SYM 584
#define MEDIUMTEXT_SYM 585
#define MEDIUM_SYM 586
#define MEMORY_SYM 587
#define MERGE_SYM 588
#define MESSAGE_TEXT_SYM 589
#define MICROSECOND_SYM 590
#define MIGRATE_SYM 591
#define MINUTE_MICROSECOND_SYM 592
#define MINUTE_SECOND_SYM 593
#define MINUTE_SYM 594
#define MIN_ROWS 595
#define MIN_SYM 596
#define MODE_SYM 597
#define MODIFIES_SYM 598
#define MODIFY_SYM 599
#define MOD_SYM 600
#define MONTH_SYM 601
#define MULTILINESTRING_SYM 602
#define MULTIPOINT_SYM 603
#define MULTIPOLYGON_SYM 604
#define MUTEX_SYM 605
#define MYSQL_ERRNO_SYM 606
#define NAMES_SYM 607
#define NAME_SYM 608
#define NATIONAL_SYM 609
#define NATURAL 610
#define NCHAR_STRING 611
#define NCHAR_SYM 612
#define NDBCLUSTER_SYM 613
#define NE 614
#define NEG 615
#define NEVER_SYM 616
#define NEW_SYM 617
#define NEXT_SYM 618
#define NODEGROUP_SYM 619
#define NONE_SYM 620
#define NOT2_SYM 621
#define NOT_SYM 622
#define NOW_SYM 623
#define NO_SYM 624
#define NO_WAIT_SYM 625
#define NO_WRITE_TO_BINLOG 626
#define NULL_SYM 627
#define NUM 628
#define NUMBER_SYM 629
#define NUMERIC_SYM 630
#define NVARCHAR_SYM 631
#define OFFSET_SYM 632
#define ON_SYM 633
#define ONE_SYM 634
#define ONLY_SYM 635
#define OPEN_SYM 636
#define OPTIMIZE 637
#define OPTIMIZER_COSTS_SYM 638
#define OPTIONS_SYM 639
#define OPTION 640
#define OPTIONALLY 641
#define OR2_SYM 642
#define ORDER_SYM 643
#define OR_OR_SYM 644
#define OR_SYM 645
#define OUTER_SYM 646
#define OUTFILE 647
#define OUT_SYM 648
#define OWNER_SYM 649
#define PACK_KEYS_SYM 650
#define PAGE_SYM 651
#define PARAM_MARKER 652
#define PARSER_SYM 653
#define OBSOLETE_TOKEN_654 654
#define PARTIAL 655
#define PARTITION_SYM 656
#define PARTITIONS_SYM 657
#define PARTITIONING_SYM 658
#define PASSWORD 659
#define PHASE_SYM 660
#define PLUGIN_DIR_SYM 661
#define PLUGIN_SYM 662
#define PLUGINS_SYM 663
#define POINT_SYM 664
#define POLYGON_SYM 665
#define PORT_SYM 666
#define POSITION_SYM 667
#define PRECEDES_SYM 668
#define PRECISION 669
#define PREPARE_SYM 670
#define PRESERVE_SYM 671
#define PREV_SYM 672
#define PRIMARY_SYM 673
#define PRIVILEGES 674
#define PROCEDURE_SYM 675
#define PROCESS 676
#define PROCESSLIST_SYM 677
#define PROFILE_SYM 678
#define PROFILES_SYM 679
#define PROXY_SYM 680
#define PURGE 681
#define QUARTER_SYM 682
#define QUERY_SYM 683
#define QUICK 684
#define RANGE_SYM 685
#define READS_SYM 686
#define READ_ONLY_SYM 687
#define READ_SYM 688
#define READ_WRITE_SYM 689
#define REAL_SYM 690
#define REBUILD_SYM 691
#define RECOVER_SYM 692
#define OBSOLETE_TOKEN_693 693
#define REDO_BUFFER_SIZE_SYM 694
#define REDUNDANT_SYM 695
#define REFERENCES 696
#define REGEXP 697
#define RELAY 698
#define RELAYLOG_SYM 699
#define RELAY_LOG_FILE_SYM 700
#define RELAY_LOG_POS_SYM 701
#define RELAY_THREAD 702
#define RELEASE_SYM 703
#define RELOAD 704
#define REMOVE_SYM 705
#define RENAME 706
#define REORGANIZE_SYM 707
#define REPAIR 708
#define REPEATABLE_SYM 709
#define REPEAT_SYM 710
#define REPLACE_SYM 711
#define REPLICATION 712
#define REPLICATE_DO_DB 713
#define REPLICATE_IGNORE_DB 714
#define REPLICATE_DO_TABLE 715
#define REPLICATE_IGNORE_TABLE 716
#define REPLICATE_WILD_DO_TABLE 717
#define REPLICATE_WILD_IGNORE_TABLE 718
#define REPLICATE_REWRITE_DB 719
#define REQUIRE_SYM 720
#define RESET_SYM 721
#define RESIGNAL_SYM 722
#define RESOURCES 723
#define RESTORE_SYM 724
#define RESTRICT 725
#define RESUME_SYM 726
#define RETURNED_SQLSTATE_SYM 727
#define RETURNS_SYM 728
#define RETURN_SYM 729
#define REVERSE_SYM 730
#define REVOKE 731
#define RIGHT 732
#define ROLLBACK_SYM 733
#define ROLLUP_SYM 734
#define ROTATE_SYM 735
#define ROUTINE_SYM 736
#define ROWS_SYM 737
#define ROW_FORMAT_SYM 738
#define ROW_SYM 739
#define ROW_COUNT_SYM 740
#define RTREE_SYM 741
#define SAVEPOINT_SYM 742
#define SCHEDULE_SYM 743
#define SCHEMA_NAME_SYM 744
#define SECOND_MICROSECOND_SYM 745
#define SECOND_SYM 746
#define SECURITY_SYM 747
#define SELECT_SYM 748
#define SENSITIVE_SYM 749
#define SEPARATOR_SYM 750
#define SERIALIZABLE_SYM 751
#define SERIAL_SYM 752
#define SESSION_SYM 753
#define SERVER_SYM 754
#define OBSOLETE_TOKEN_755 755
#define SET_SYM 756
#define SET_VAR 757
#define SHARE_SYM 758
#define SHIFT_LEFT 759
#define SHIFT_RIGHT 760
#define SHOW 761
#define SHUTDOWN 762
#define SIGNAL_SYM 763
#define SIGNED_SYM 764
#define SIMPLE_SYM 765
#define SLAVE 766
#define SLOW 767
#define SMALLINT_SYM 768
#define SNAPSHOT_SYM 769
#define SOCKET_SYM 770
#define SONAME_SYM 771
#define SOUNDS_SYM 772
#define SOURCE_SYM 773
#define SPATIAL_SYM 774
#define SPECIFIC_SYM 775
#define SQLEXCEPTION_SYM 776
#define SQLSTATE_SYM 777
#define SQLWARNING_SYM 778
#define SQL_AFTER_GTIDS 779
#define SQL_AFTER_MTS_GAPS 780
#define SQL_BEFORE_GTIDS 781
#define SQL_BIG_RESULT 782
#define SQL_BUFFER_RESULT 783
#define OBSOLETE_TOKEN_784 784
#define SQL_CALC_FOUND_ROWS 785
#define SQL_NO_CACHE_SYM 786
#define SQL_SMALL_RESULT 787
#define SQL_SYM 788
#define SQL_THREAD 789
#define SSL_SYM 790
#define STACKED_SYM 791
#define STARTING 792
#define STARTS_SYM 793
#define START_SYM 794
#define STATS_AUTO_RECALC_SYM 795
#define STATS_PERSISTENT_SYM 796
#define STATS_SAMPLE_PAGES_SYM 797
#define STATUS_SYM 798
#define STDDEV_SAMP_SYM 799
#define STD_SYM 800
#define STOP_SYM 801
#define STORAGE_SYM 802
#define STORED_SYM 803
#define STRAIGHT_JOIN 804
#define STRING_SYM 805
#define SUBCLASS_ORIGIN_SYM 806
#define SUBDATE_SYM 807
#define SUBJECT_SYM 808
#define SUBPARTITIONS_SYM 809
#define SUBPARTITION_SYM 810
#define SUBSTRING 811
#define SUM_SYM 812
#define SUPER_SYM 813
#define SUSPEND_SYM 814
#define SWAPS_SYM 815
#define SWITCHES_SYM 816
#define SYSDATE 817
#define TABLES 818
#define TABLESPACE_SYM 819
#define OBSOLETE_TOKEN_820 820
#define TABLE_SYM 821
#define TABLE_CHECKSUM_SYM 822
#define TABLE_NAME_SYM 823
#define TEMPORARY 824
#define TEMPTABLE_SYM 825
#define TERMINATED 826
#define TEXT_STRING 827
#define TEXT_SYM 828
#define THAN_SYM 829
#define THEN_SYM 830
#define TIMESTAMP_SYM 831
#define TIMESTAMP_ADD 832
#define TIMESTAMP_DIFF 833
#define TIME_SYM 834
#define TINYBLOB_SYM 835
#define TINYINT_SYM 836
#define TINYTEXT_SYN 837
#define TO_SYM 838
#define TRAILING 839
#define TRANSACTION_SYM 840
#define TRIGGERS_SYM 841
#define TRIGGER_SYM 842
#define TRIM 843
#define TRUE_SYM 844
#define TRUNCATE_SYM 845
#define TYPES_SYM 846
#define TYPE_SYM 847
#define OBSOLETE_TOKEN_848 848
#define ULONGLONG_NUM 849
#define UNCOMMITTED_SYM 850
#define UNDEFINED_SYM 851
#define UNDERSCORE_CHARSET 852
#define UNDOFILE_SYM 853
#define UNDO_BUFFER_SIZE_SYM 854
#define UNDO_SYM 855
#define UNICODE_SYM 856
#define UNINSTALL_SYM 857
#define UNION_SYM 858
#define UNIQUE_SYM 859
#define UNKNOWN_SYM 860
#define UNLOCK_SYM 861
#define UNSIGNED_SYM 862
#define UNTIL_SYM 863
#define UPDATE_SYM 864
#define UPGRADE_SYM 865
#define USAGE 866
#define USER 867
#define USE_FRM 868
#define USE_SYM 869
#define USING 870
#define UTC_DATE_SYM 871
#define UTC_TIMESTAMP_SYM 872
#define UTC_TIME_SYM 873
#define VALIDATION_SYM 874
#define VALUES 875
#define VALUE_SYM 876
#define VARBINARY_SYM 877
#define VARCHAR_SYM 878
#define VARIABLES 879
#define VARIANCE_SYM 880
#define VARYING 881
#define VAR_SAMP_SYM 882
#define VIEW_SYM 883
#define VIRTUAL_SYM 884
#define WAIT_SYM 885
#define WARNINGS 886
#define WEEK_SYM 887
#define WEIGHT_STRING_SYM 888
#define WHEN_SYM 889
#define WHERE 890
#define WHILE_SYM 891
#define WITH 892
#define OBSOLETE_TOKEN_893 893
#define WITH_ROLLUP_SYM 894
#define WITHOUT_SYM 895
#define WORK_SYM 896
#define WRAPPER_SYM 897
#define WRITE_SYM 898
#define X509_SYM 899
#define XA_SYM 900
#define XID_SYM 901
#define XML_SYM 902
#define XOR 903
#define YEAR_MONTH_SYM 904
#define YEAR_SYM 905
#define ZEROFILL_SYM 906
#define JSON_UNQUOTED_SEPARATOR_SYM 907
#define PERSIST_SYM 908
#define ROLE_SYM 909
#define ADMIN_SYM 910
#define INVISIBLE_SYM 911
#define VISIBLE_SYM 912
#define EXCEPT_SYM 913
#define COMPONENT_SYM 914
#define RECURSIVE_SYM 915
#define GRAMMAR_SELECTOR_EXPR 916
#define GRAMMAR_SELECTOR_GCOL 917
#define GRAMMAR_SELECTOR_PART 918
#define GRAMMAR_SELECTOR_CTE 919
#define JSON_OBJECTAGG 920
#define JSON_ARRAYAGG 921
#define OF_SYM 922
#define SKIP_SYM 923
#define LOCKED_SYM 924
#define NOWAIT_SYM 925
#define GROUPING_SYM 926
#define PERSIST_ONLY_SYM 927
#define HISTOGRAM_SYM 928
#define BUCKETS_SYM 929
#define OBSOLETE_TOKEN_930 930
#define CLONE_SYM 931
#define CUME_DIST_SYM 932
#define DENSE_RANK_SYM 933
#define EXCLUDE_SYM 934
#define FIRST_VALUE_SYM 935
#define FOLLOWING_SYM 936
#define GROUPS_SYM 937
#define LAG_SYM 938
#define LAST_VALUE_SYM 939
#define LEAD_SYM 940
#define NTH_VALUE_SYM 941
#define NTILE_SYM 942
#define NULLS_SYM 943
#define OTHERS_SYM 944
#define OVER_SYM 945
#define PERCENT_RANK_SYM 946
#define PRECEDING_SYM 947
#define RANK_SYM 948
#define RESPECT_SYM 949
#define ROW_NUMBER_SYM 950
#define TIES_SYM 951
#define UNBOUNDED_SYM 952
#define WINDOW_SYM 953
#define EMPTY_SYM 954
#define JSON_TABLE_SYM 955
#define NESTED_SYM 956
#define ORDINALITY_SYM 957
#define PATH_SYM 958
#define HISTORY_SYM 959
#define REUSE_SYM 960
#define SRID_SYM 961
#define THREAD_PRIORITY_SYM 962
#define RESOURCE_SYM 963
#define SYSTEM_SYM 964
#define VCPU_SYM 965
#define OBSOLETE_TOKEN_966 966
#define OBSOLETE_TOKEN_967 967
#define RESTART_SYM 968
#define DEFINITION_SYM 969
#define DESCRIPTION_SYM 970
#define ORGANIZATION_SYM 971
#define REFERENCE_SYM 972
#define ACTIVE_SYM 973
#define INACTIVE_SYM 974
#define LATERAL_SYM 975
#define ARRAY_SYM 976
#define MEMBER_SYM 977
#define OPTIONAL_SYM 978
#define SECONDARY_SYM 979
#define SECONDARY_ENGINE_SYM 980
#define SECONDARY_LOAD_SYM 981
#define SECONDARY_UNLOAD_SYM 982
#define RETAIN_SYM 983
#define OLD_SYM 984
#define ENFORCED_SYM 985
#define OJ_SYM 986
#define NETWORK_NAMESPACE_SYM 987
#define RANDOM_SYM 988
#define OBSOLETE_TOKEN_989 989
#define OBSOLETE_TOKEN_990 990
#define PRIVILEGE_CHECKS_USER_SYM 991
#define OBSOLETE_TOKEN_992 992
#define REQUIRE_ROW_FORMAT_SYM 993
#define PASSWORD_LOCK_TIME_SYM 994
#define FAILED_LOGIN_ATTEMPTS_SYM 995
#define REQUIRE_TABLE_PRIMARY_KEY_CHECK_SYM 996
#define STREAM_SYM 997
#define OFF_SYM 998
#define RETURNING_SYM 999
#define JSON_VALUE_SYM 1151
#define TLS_SYM 1152
#define ATTRIBUTE_SYM 1153
#define ENGINE_ATTRIBUTE_SYM 1154
#define SECONDARY_ENGINE_ATTRIBUTE_SYM 1155
#define SOURCE_CONNECTION_AUTO_FAILOVER_SYM 1156
#define ZONE_SYM 1157
#define GRAMMAR_SELECTOR_DERIVED_EXPR 1158
#define REPLICA_SYM 1159
#define REPLICAS_SYM 1160
#define ASSIGN_GTIDS_TO_ANONYMOUS_TRANSACTIONS_SYM 1161
#define GET_SOURCE_PUBLIC_KEY_SYM 1162
#define SOURCE_AUTO_POSITION_SYM 1163
#define SOURCE_BIND_SYM 1164
#define SOURCE_COMPRESSION_ALGORITHM_SYM 1165
#define SOURCE_CONNECT_RETRY_SYM 1166
#define SOURCE_DELAY_SYM 1167
#define SOURCE_HEARTBEAT_PERIOD_SYM 1168
#define SOURCE_HOST_SYM 1169
#define SOURCE_LOG_FILE_SYM 1170
#define SOURCE_LOG_POS_SYM 1171
#define SOURCE_PASSWORD_SYM 1172
#define SOURCE_PORT_SYM 1173
#define SOURCE_PUBLIC_KEY_PATH_SYM 1174
#define SOURCE_RETRY_COUNT_SYM 1175
#define SOURCE_SSL_SYM 1176
#define SOURCE_SSL_CA_SYM 1177
#define SOURCE_SSL_CAPATH_SYM 1178
#define SOURCE_SSL_CERT_SYM 1179
#define SOURCE_SSL_CIPHER_SYM 1180
#define SOURCE_SSL_CRL_SYM 1181
#define SOURCE_SSL_CRLPATH_SYM 1182
#define SOURCE_SSL_KEY_SYM 1183
#define SOURCE_SSL_VERIFY_SERVER_CERT_SYM 1184
#define SOURCE_TLS_CIPHERSUITES_SYM 1185
#define SOURCE_TLS_VERSION_SYM 1186
#define SOURCE_USER_SYM 1187
#define SOURCE_ZSTD_COMPRESSION_LEVEL_SYM 1188
#define ST_COLLECT_SYM 1189
#define KEYRING_SYM 1190
#define AUTHENTICATION_SYM 1191
#define FACTOR_SYM 1192
#define FINISH_SYM 1193
#define INITIATE_SYM 1194
#define REGISTRATION_SYM 1195
#define UNREGISTER_SYM 1196
#define INITIAL_SYM 1197
#define CHALLENGE_RESPONSE_SYM 1198
#define GTID_ONLY_SYM 1199
#define INTERSECT_SYM 1200
#define BULK_SYM 1201
#define URL_SYM 1202
#define GENERATE_SYM 1203
#define DOLLAR_QUOTED_STRING_SYM 1204
#define PARSE_TREE_SYM 1205
#define LOG_SYM 1206
#define GTIDS_SYM 1207
#define PARALLEL_SYM 1208
#define S3_SYM 1209
#define QUALIFY_SYM 1210
#define AUTO_SYM 1211
#define MANUAL_SYM 1212
#define BERNOULLI_SYM 1213
#define TABLESAMPLE_SYM 1214
#define CLIENT_STATS_SYM 1301
#define CLUSTERING_SYM 1302
#define COMPRESSION_DICTIONARY_SYM 1303
#define INDEX_STATS_SYM 1304
#define TABLE_STATS_SYM 1305
#define THREAD_STATS_SYM 1306
#define USER_STATS_SYM 1307
#define EFFECTIVE_SYM 1350
#define SEQUENCE_TABLE_SYM 1351
#define PERCONA_SEQUENCE_TABLE_SYM 1352
#define KEYWORD_USED_AS_IDENT 1353
#define KEYWORD_USED_AS_KEYWORD 1354
#define CONDITIONLESS_JOIN 1355
#define PREFER_PARENTHESES 1356
#define EMPTY_FROM_CLAUSE 1357

/* Value type.  */

/* Location type.  */
#if ! defined MY_SQL_PARSER_LTYPE && ! defined MY_SQL_PARSER_LTYPE_IS_DECLARED
typedef struct MY_SQL_PARSER_LTYPE MY_SQL_PARSER_LTYPE;
struct MY_SQL_PARSER_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define MY_SQL_PARSER_LTYPE_IS_DECLARED 1
# define MY_SQL_PARSER_LTYPE_IS_TRIVIAL 1
#endif




int my_sql_parser_parse (class THD *YYTHD, class Parse_tree_root **parse_tree);


#endif /* !YY_MY_SQL_PARSER_MNT_JENKINS_WORKSPACE_PS8_0_AUTOBUILD_RELEASE_TEST_PERCONA_SERVER_SQL_SQL_YACC_H_INCLUDED  */
