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
     IF = 258,
     THEN = 259,
     ELSE = 260,
     ELIF = 261,
     FI = 262,
     CASE = 263,
     ESAC = 264,
     FOR = 265,
     SELECT = 266,
     WHILE = 267,
     UNTIL = 268,
     DO = 269,
     DONE = 270,
     FUNCTION = 271,
     COPROC = 272,
     COND_START = 273,
     COND_END = 274,
     COND_ERROR = 275,
     IN = 276,
     BANG = 277,
     TIME = 278,
     TIMEOPT = 279,
     TIMEIGN = 280,
     WORD = 281,
     ASSIGNMENT_WORD = 282,
     REDIR_WORD = 283,
     NUMBER = 284,
     ARITH_CMD = 285,
     ARITH_FOR_EXPRS = 286,
     COND_CMD = 287,
     AND_AND = 288,
     OR_OR = 289,
     GREATER_GREATER = 290,
     LESS_LESS = 291,
     LESS_AND = 292,
     LESS_LESS_LESS = 293,
     GREATER_AND = 294,
     SEMI_SEMI = 295,
     SEMI_AND = 296,
     SEMI_SEMI_AND = 297,
     LESS_LESS_MINUS = 298,
     AND_GREATER = 299,
     AND_GREATER_GREATER = 300,
     LESS_GREATER = 301,
     GREATER_BAR = 302,
     BAR_AND = 303,
     yacc_EOF = 304
   };
#endif
/* Tokens.  */
#define IF 258
#define THEN 259
#define ELSE 260
#define ELIF 261
#define FI 262
#define CASE 263
#define ESAC 264
#define FOR 265
#define SELECT 266
#define WHILE 267
#define UNTIL 268
#define DO 269
#define DONE 270
#define FUNCTION 271
#define COPROC 272
#define COND_START 273
#define COND_END 274
#define COND_ERROR 275
#define IN 276
#define BANG 277
#define TIME 278
#define TIMEOPT 279
#define TIMEIGN 280
#define WORD 281
#define ASSIGNMENT_WORD 282
#define REDIR_WORD 283
#define NUMBER 284
#define ARITH_CMD 285
#define ARITH_FOR_EXPRS 286
#define COND_CMD 287
#define AND_AND 288
#define OR_OR 289
#define GREATER_GREATER 290
#define LESS_LESS 291
#define LESS_AND 292
#define LESS_LESS_LESS 293
#define GREATER_AND 294
#define SEMI_SEMI 295
#define SEMI_AND 296
#define SEMI_SEMI_AND 297
#define LESS_LESS_MINUS 298
#define AND_GREATER 299
#define AND_GREATER_GREATER 300
#define LESS_GREATER 301
#define GREATER_BAR 302
#define BAR_AND 303
#define yacc_EOF 304




/* Copy the first part of user declarations.  */
#line 21 "/usr/src/local/bash/bash-4.3-patched/parse.y"

#include "config.h"

#include "bashtypes.h"
#include "bashansi.h"

#include "filecntl.h"

#if defined (HAVE_UNISTD_H)
#  include <unistd.h>
#endif

#if defined (HAVE_LOCALE_H)
#  include <locale.h>
#endif

#include <stdio.h>
#include "chartypes.h"
#include <signal.h>

#include "memalloc.h"

#include "bashintl.h"

#define NEED_STRFTIME_DECL	/* used in externs.h */

#include "shell.h"
#include "typemax.h"		/* SIZE_MAX if needed */
#include "trap.h"
#include "flags.h"
#include "parser.h"
#include "mailcheck.h"
#include "test.h"
#include "builtins.h"
#include "builtins/common.h"
#include "builtins/builtext.h"

#include "shmbutil.h"

#if defined (READLINE)
#  include "bashline.h"
#  include <readline/readline.h>
#endif /* READLINE */

#if defined (HISTORY)
#  include "bashhist.h"
#  include <readline/history.h>
#endif /* HISTORY */

#if defined (JOB_CONTROL)
#  include "jobs.h"
#endif /* JOB_CONTROL */

#if defined (ALIAS)
#  include "alias.h"
#else
typedef void *alias_t;
#endif /* ALIAS */

#if defined (PROMPT_STRING_DECODE)
#  ifndef _MINIX
#    include <sys/param.h>
#  endif
#  include <time.h>
#  if defined (TM_IN_SYS_TIME)
#    include <sys/types.h>
#    include <sys/time.h>
#  endif /* TM_IN_SYS_TIME */
#  include "maxpath.h"
#endif /* PROMPT_STRING_DECODE */

#define RE_READ_TOKEN	-99
#define NO_EXPANSION	-100

#ifdef DEBUG
#  define YYDEBUG 1
#else
#  define YYDEBUG 0
#endif

#if defined (HANDLE_MULTIBYTE)
#  define last_shell_getc_is_singlebyte \
	((shell_input_line_index > 1) \
		? shell_input_line_property[shell_input_line_index - 1] \
		: 1)
#  define MBTEST(x)	((x) && last_shell_getc_is_singlebyte)
#else
#  define last_shell_getc_is_singlebyte	1
#  define MBTEST(x)	((x))
#endif

#if defined (EXTENDED_GLOB)
extern int extended_glob;
#endif

extern int eof_encountered;
extern int no_line_editing, running_under_emacs;
extern int current_command_number;
extern int sourcelevel, parse_and_execute_level;
extern int posixly_correct;
extern int last_command_exit_value;
extern pid_t last_command_subst_pid;
extern char *shell_name, *current_host_name;
extern char *dist_version;
extern int patch_level;
extern int dump_translatable_strings, dump_po_strings;
extern sh_builtin_func_t *last_shell_builtin, *this_shell_builtin;
#if defined (BUFFERED_INPUT)
extern int bash_input_fd_changed;
#endif

extern int errno;
/* **************************************************************** */
/*								    */
/*		    "Forward" declarations			    */
/*								    */
/* **************************************************************** */

#ifdef DEBUG
static void debug_parser __P((int));
#endif

static int yy_getc __P((void));
static int yy_ungetc __P((int));

#if defined (READLINE)
static int yy_readline_get __P((void));
static int yy_readline_unget __P((int));
#endif

static int yy_string_get __P((void));
static int yy_string_unget __P((int));
static void rewind_input_string __P((void));
static int yy_stream_get __P((void));
static int yy_stream_unget __P((int));

static int shell_getc __P((int));
static void shell_ungetc __P((int));
static void discard_until __P((int));

#if defined (ALIAS) || defined (DPAREN_ARITHMETIC)
static void push_string __P((char *, int, alias_t *));
static void pop_string __P((void));
static void free_string_list __P((void));
#endif

static char *read_a_line __P((int));

static int reserved_word_acceptable __P((int));
static int yylex __P((void));

static void push_heredoc __P((REDIRECT *));
static char *mk_alexpansion __P((char *));
static int alias_expand_token __P((char *));
static int time_command_acceptable __P((void));
static int special_case_tokens __P((char *));
static int read_token __P((int));
static char *parse_matched_pair __P((int, int, int, int *, int));
static char *parse_comsub __P((int, int, int, int *, int));
#if defined (ARRAY_VARS)
static char *parse_compound_assignment __P((int *));
#endif
#if defined (DPAREN_ARITHMETIC) || defined (ARITH_FOR_COMMAND)
static int parse_dparen __P((int));
static int parse_arith_cmd __P((char **, int));
#endif
#if defined (COND_COMMAND)
static void cond_error __P((void));
static COND_COM *cond_expr __P((void));
static COND_COM *cond_or __P((void));
static COND_COM *cond_and __P((void));
static COND_COM *cond_term __P((void));
static int cond_skip_newlines __P((void));
static COMMAND *parse_cond_command __P((void));
#endif
#if defined (ARRAY_VARS)
static int token_is_assignment __P((char *, int));
static int token_is_ident __P((char *, int));
#endif
static int read_token_word __P((int));
static void discard_parser_constructs __P((int));

static char *error_token_from_token __P((int));
static char *error_token_from_text __P((void));
static void print_offending_line __P((void));
static void report_syntax_error __P((char *));

static void handle_eof_input_unit __P((void));
static void prompt_again __P((void));
#if 0
static void reset_readline_prompt __P((void));
#endif
static void print_prompt __P((void));

#if defined (HANDLE_MULTIBYTE)
static void set_line_mbstate __P((void));
static char *shell_input_line_property = NULL;
#else
#  define set_line_mbstate()
#endif

extern int yyerror __P((const char *));

#ifdef DEBUG
extern int yydebug;
#endif

/* Default prompt strings */
char *primary_prompt = PPROMPT;
char *secondary_prompt = SPROMPT;

/* PROMPT_STRING_POINTER points to one of these, never to an actual string. */
char *ps1_prompt, *ps2_prompt;

/* Handle on the current prompt string.  Indirectly points through
   ps1_ or ps2_prompt. */
char **prompt_string_pointer = (char **)NULL;
char *current_prompt_string;

/* Non-zero means we expand aliases in commands. */
int expand_aliases = 0;

/* If non-zero, the decoded prompt string undergoes parameter and
   variable substitution, command substitution, arithmetic substitution,
   string expansion, process substitution, and quote removal in
   decode_prompt_string. */
int promptvars = 1;

/* If non-zero, $'...' and $"..." are expanded when they appear within
   a ${...} expansion, even when the expansion appears within double
   quotes. */
int extended_quote = 1;

/* The number of lines read from input while creating the current command. */
int current_command_line_count;

/* The number of lines in a command saved while we run parse_and_execute */
int saved_command_line_count;

/* The token that currently denotes the end of parse. */
int shell_eof_token;

/* The token currently being read. */
int current_token;

/* The current parser state. */
int parser_state;

/* Variables to manage the task of reading here documents, because we need to
   defer the reading until after a complete command has been collected. */
#define HEREDOC_MAX 16

static REDIRECT *redir_stack[HEREDOC_MAX];
int need_here_doc;

/* Where shell input comes from.  History expansion is performed on each
   line when the shell is interactive. */
static char *shell_input_line = (char *)NULL;
static size_t shell_input_line_index;
static size_t shell_input_line_size;	/* Amount allocated for shell_input_line. */
static size_t shell_input_line_len;	/* strlen (shell_input_line) */

/* Either zero or EOF. */
static int shell_input_line_terminator;

/* The line number in a script on which a function definition starts. */
static int function_dstart;

/* The line number in a script on which a function body starts. */
static int function_bstart;

/* The line number in a script at which an arithmetic for command starts. */
static int arith_for_lineno;

/* The decoded prompt string.  Used if READLINE is not defined or if
   editing is turned off.  Analogous to current_readline_prompt. */
static char *current_decoded_prompt;

/* The last read token, or NULL.  read_token () uses this for context
   checking. */
static int last_read_token;

/* The token read prior to last_read_token. */
static int token_before_that;

/* The token read prior to token_before_that. */
static int two_tokens_ago;

static int global_extglob;

/* The line number in a script where the word in a `case WORD', `select WORD'
   or `for WORD' begins.  This is a nested command maximum, since the array
   index is decremented after a case, select, or for command is parsed. */
#define MAX_CASE_NEST	128
static int word_lineno[MAX_CASE_NEST+1];
static int word_top = -1;

/* If non-zero, it is the token that we want read_token to return
   regardless of what text is (or isn't) present to be read.  This
   is reset by read_token.  If token_to_read == WORD or
   ASSIGNMENT_WORD, yylval.word should be set to word_desc_to_read. */
static int token_to_read;
static WORD_DESC *word_desc_to_read;

static REDIRECTEE source;
static REDIRECTEE redir;


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
typedef union YYSTYPE
#line 329 "/usr/src/local/bash/bash-4.3-patched/parse.y"
{
  WORD_DESC *word;		/* the word that we read. */
  int number;			/* the number that we read. */
  WORD_LIST *word_list;
  COMMAND *command;
  REDIRECT *redirect;
  ELEMENT element;
  PATTERN_LIST *pattern;
}
/* Line 193 of yacc.c.  */
#line 512 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 525 "y.tab.c"

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
#define YYFINAL  116
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   659

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNRULES -- Number of states.  */
#define YYNSTATES  342

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,     2,
      59,    60,     2,     2,     2,    56,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
      55,     2,    54,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,    53,    58,     2,     2,     2,     2,
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
      45,    46,    47,    48,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    15,    18,    21,
      24,    28,    32,    36,    40,    43,    47,    51,    54,    58,
      62,    65,    69,    73,    76,    80,    84,    87,    91,    95,
      98,   102,   106,   109,   113,   117,   120,   124,   128,   131,
     135,   139,   142,   146,   150,   153,   157,   161,   164,   168,
     172,   175,   178,   180,   182,   184,   186,   189,   191,   194,
     196,   198,   201,   203,   205,   207,   209,   215,   221,   223,
     225,   227,   229,   231,   233,   235,   242,   249,   257,   265,
     276,   287,   297,   307,   315,   323,   329,   335,   342,   349,
     357,   365,   376,   387,   394,   402,   409,   415,   422,   427,
     429,   432,   436,   439,   443,   447,   452,   455,   461,   469,
     476,   480,   482,   486,   491,   498,   504,   506,   509,   514,
     519,   525,   531,   534,   538,   541,   545,   548,   552,   554,
     558,   561,   563,   566,   570,   574,   578,   583,   588,   593,
     598,   603,   605,   607,   609,   611,   613,   615,   616,   619,
     621,   624,   627,   632,   637,   641,   645,   647,   649,   652,
     655,   658,   661,   666,   671,   673,   675,   678
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    94,    91,    -1,    51,    -1,     1,    51,
      -1,    52,    -1,    26,    -1,    63,    26,    -1,    54,    26,
      -1,    55,    26,    -1,    29,    54,    26,    -1,    29,    55,
      26,    -1,    28,    54,    26,    -1,    28,    55,    26,    -1,
      35,    26,    -1,    29,    35,    26,    -1,    28,    35,    26,
      -1,    47,    26,    -1,    29,    47,    26,    -1,    28,    47,
      26,    -1,    46,    26,    -1,    29,    46,    26,    -1,    28,
      46,    26,    -1,    36,    26,    -1,    29,    36,    26,    -1,
      28,    36,    26,    -1,    43,    26,    -1,    29,    43,    26,
      -1,    28,    43,    26,    -1,    38,    26,    -1,    29,    38,
      26,    -1,    28,    38,    26,    -1,    37,    29,    -1,    29,
      37,    29,    -1,    28,    37,    29,    -1,    39,    29,    -1,
      29,    39,    29,    -1,    28,    39,    29,    -1,    37,    26,
      -1,    29,    37,    26,    -1,    28,    37,    26,    -1,    39,
      26,    -1,    29,    39,    26,    -1,    28,    39,    26,    -1,
      39,    56,    -1,    29,    39,    56,    -1,    28,    39,    56,
      -1,    37,    56,    -1,    29,    37,    56,    -1,    28,    37,
      56,    -1,    44,    26,    -1,    45,    26,    -1,    26,    -1,
      27,    -1,    64,    -1,    64,    -1,    66,    64,    -1,    65,
      -1,    67,    65,    -1,    67,    -1,    69,    -1,    69,    66,
      -1,    74,    -1,    77,    -1,    70,    -1,    73,    -1,    12,
      88,    14,    88,    15,    -1,    13,    88,    14,    88,    15,
      -1,    72,    -1,    78,    -1,    76,    -1,    79,    -1,    80,
      -1,    81,    -1,    71,    -1,    10,    26,    93,    14,    88,
      15,    -1,    10,    26,    93,    57,    88,    58,    -1,    10,
      26,    50,    93,    14,    88,    15,    -1,    10,    26,    50,
      93,    57,    88,    58,    -1,    10,    26,    93,    21,    63,
      92,    93,    14,    88,    15,    -1,    10,    26,    93,    21,
      63,    92,    93,    57,    88,    58,    -1,    10,    26,    93,
      21,    92,    93,    14,    88,    15,    -1,    10,    26,    93,
      21,    92,    93,    57,    88,    58,    -1,    10,    31,    92,
      93,    14,    88,    15,    -1,    10,    31,    92,    93,    57,
      88,    58,    -1,    10,    31,    14,    88,    15,    -1,    10,
      31,    57,    88,    58,    -1,    11,    26,    93,    14,    87,
      15,    -1,    11,    26,    93,    57,    87,    58,    -1,    11,
      26,    50,    93,    14,    87,    15,    -1,    11,    26,    50,
      93,    57,    87,    58,    -1,    11,    26,    93,    21,    63,
      92,    93,    14,    87,    15,    -1,    11,    26,    93,    21,
      63,    92,    93,    57,    87,    58,    -1,     8,    26,    93,
      21,    93,     9,    -1,     8,    26,    93,    21,    85,    93,
       9,    -1,     8,    26,    93,    21,    83,     9,    -1,    26,
      59,    60,    93,    75,    -1,    16,    26,    59,    60,    93,
      75,    -1,    16,    26,    93,    75,    -1,    69,    -1,    69,
      66,    -1,    59,    88,    60,    -1,    17,    69,    -1,    17,
      69,    66,    -1,    17,    26,    69,    -1,    17,    26,    69,
      66,    -1,    17,    67,    -1,     3,    88,     4,    88,     7,
      -1,     3,    88,     4,    88,     5,    88,     7,    -1,     3,
      88,     4,    88,    82,     7,    -1,    57,    88,    58,    -1,
      30,    -1,    18,    32,    19,    -1,     6,    88,     4,    88,
      -1,     6,    88,     4,    88,     5,    88,    -1,     6,    88,
       4,    88,    82,    -1,    84,    -1,    85,    84,    -1,    93,
      86,    60,    88,    -1,    93,    86,    60,    93,    -1,    93,
      59,    86,    60,    88,    -1,    93,    59,    86,    60,    93,
      -1,    84,    40,    -1,    85,    84,    40,    -1,    84,    41,
      -1,    85,    84,    41,    -1,    84,    42,    -1,    85,    84,
      42,    -1,    26,    -1,    86,    53,    26,    -1,    93,    89,
      -1,    87,    -1,    93,    90,    -1,    90,    51,    93,    -1,
      90,    49,    93,    -1,    90,    50,    93,    -1,    90,    33,
      93,    90,    -1,    90,    34,    93,    90,    -1,    90,    49,
      93,    90,    -1,    90,    50,    93,    90,    -1,    90,    51,
      93,    90,    -1,    96,    -1,    51,    -1,    52,    -1,    51,
      -1,    50,    -1,    52,    -1,    -1,    93,    51,    -1,    95,
      -1,    95,    49,    -1,    95,    50,    -1,    95,    33,    93,
      95,    -1,    95,    34,    93,    95,    -1,    95,    49,    95,
      -1,    95,    50,    95,    -1,    96,    -1,    97,    -1,    22,
      96,    -1,    98,    96,    -1,    98,    92,    -1,    22,    92,
      -1,    97,    53,    93,    97,    -1,    97,    48,    93,    97,
      -1,    68,    -1,    23,    -1,    23,    24,    -1,    23,    24,
      25,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   382,   382,   393,   402,   417,   427,   429,   433,   439,
     445,   451,   457,   463,   469,   475,   481,   487,   493,   499,
     505,   511,   517,   523,   530,   537,   544,   551,   558,   565,
     571,   577,   583,   589,   595,   601,   607,   613,   619,   625,
     631,   637,   643,   649,   655,   661,   667,   673,   679,   685,
     691,   697,   705,   707,   709,   713,   717,   728,   730,   734,
     736,   738,   754,   756,   760,   762,   764,   766,   768,   770,
     772,   774,   776,   778,   780,   784,   789,   794,   799,   804,
     809,   814,   819,   826,   831,   836,   841,   848,   853,   858,
     863,   868,   873,   880,   885,   890,   897,   900,   903,   907,
     909,   940,   947,   952,   969,   974,   991,   998,  1000,  1002,
    1007,  1011,  1015,  1019,  1021,  1023,  1027,  1028,  1032,  1034,
    1036,  1038,  1042,  1044,  1046,  1048,  1050,  1052,  1056,  1058,
    1067,  1075,  1076,  1082,  1083,  1090,  1094,  1096,  1098,  1105,
    1107,  1109,  1113,  1114,  1117,  1119,  1121,  1125,  1126,  1135,
    1148,  1164,  1179,  1181,  1183,  1190,  1193,  1197,  1199,  1205,
    1211,  1228,  1248,  1250,  1273,  1277,  1279,  1281
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "THEN", "ELSE", "ELIF", "FI",
  "CASE", "ESAC", "FOR", "SELECT", "WHILE", "UNTIL", "DO", "DONE",
  "FUNCTION", "COPROC", "COND_START", "COND_END", "COND_ERROR", "IN",
  "BANG", "TIME", "TIMEOPT", "TIMEIGN", "WORD", "ASSIGNMENT_WORD",
  "REDIR_WORD", "NUMBER", "ARITH_CMD", "ARITH_FOR_EXPRS", "COND_CMD",
  "AND_AND", "OR_OR", "GREATER_GREATER", "LESS_LESS", "LESS_AND",
  "LESS_LESS_LESS", "GREATER_AND", "SEMI_SEMI", "SEMI_AND",
  "SEMI_SEMI_AND", "LESS_LESS_MINUS", "AND_GREATER", "AND_GREATER_GREATER",
  "LESS_GREATER", "GREATER_BAR", "BAR_AND", "'&'", "';'", "'\\n'",
  "yacc_EOF", "'|'", "'>'", "'<'", "'-'", "'{'", "'}'", "'('", "')'",
  "$accept", "inputunit", "word_list", "redirection",
  "simple_command_element", "redirection_list", "simple_command",
  "command", "shell_command", "for_command", "arith_for_command",
  "select_command", "case_command", "function_def", "function_body",
  "subshell", "coproc", "if_command", "group_command", "arith_command",
  "cond_command", "elif_clause", "case_clause", "pattern_list",
  "case_clause_sequence", "pattern", "list", "compound_list", "list0",
  "list1", "simple_list_terminator", "list_terminator", "newline_list",
  "simple_list", "simple_list1", "pipeline_command", "pipeline",
  "timespec", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,    38,
      59,    10,   304,   124,    62,    60,    45,   123,   125,    40,
      41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    62,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    66,    66,    67,    67,    68,
      68,    68,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    71,    71,    72,    72,    72,
      72,    72,    72,    73,    73,    73,    74,    74,    74,    75,
      75,    76,    77,    77,    77,    77,    77,    78,    78,    78,
      79,    80,    81,    82,    82,    82,    83,    83,    84,    84,
      84,    84,    85,    85,    85,    85,    85,    85,    86,    86,
      87,    88,    88,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    91,    91,    92,    92,    92,    93,    93,    94,
      94,    94,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    97,    97,    97,    98,    98,    98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     2,     2,     2,
       3,     3,     3,     3,     2,     3,     3,     2,     3,     3,
       2,     3,     3,     2,     3,     3,     2,     3,     3,     2,
       3,     3,     2,     3,     3,     2,     3,     3,     2,     3,
       3,     2,     3,     3,     2,     3,     3,     2,     3,     3,
       2,     2,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     2,     1,     1,     1,     1,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     6,     6,     7,     7,    10,
      10,     9,     9,     7,     7,     5,     5,     6,     6,     7,
       7,    10,    10,     6,     7,     6,     5,     6,     4,     1,
       2,     3,     2,     3,     3,     4,     2,     5,     7,     6,
       3,     1,     3,     4,     6,     5,     1,     2,     4,     4,
       5,     5,     2,     3,     2,     3,     2,     3,     1,     3,
       2,     1,     2,     3,     3,     3,     4,     4,     4,     4,
       4,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       2,     2,     4,     4,     3,     3,     1,     1,     2,     2,
       2,     2,     4,     4,     1,     1,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   147,     0,     0,     0,   147,   147,     0,     0,
       0,     0,   165,    52,    53,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     5,
       0,     0,   147,   147,     0,    54,    57,    59,   164,    60,
      64,    74,    68,    65,    62,    70,    63,    69,    71,    72,
      73,     0,   149,   156,   157,     0,     4,   131,     0,     0,
     147,   147,     0,   147,     0,     0,   147,    52,   106,   102,
       0,   145,   144,   146,   161,   158,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    23,
      38,    32,    47,    29,    41,    35,    44,    26,    50,    51,
      20,    17,     8,     9,     0,     0,     1,    52,    58,    55,
      61,   142,   143,     2,   147,   147,   150,   151,   147,   147,
     160,   159,   147,   148,   130,   132,   141,     0,   147,     0,
     147,   147,   147,   147,     0,   147,   147,     0,     0,   104,
     103,   112,   167,   147,    16,    25,    40,    34,    49,    31,
      43,    37,    46,    28,    22,    19,    12,    13,    15,    24,
      39,    33,    48,    30,    42,    36,    45,    27,    21,    18,
      10,    11,   110,   101,    56,     0,     0,   154,   155,     0,
       0,     0,   147,   147,   147,   147,   147,   147,     0,   147,
       0,   147,     0,     0,     0,     0,   147,     0,   147,     0,
       0,   147,    99,    98,   105,     0,   152,   153,     0,     0,
     163,   162,   147,   147,   107,     0,     0,     0,   134,   135,
     133,     0,   116,   147,     0,   147,   147,     0,     6,     0,
     147,     0,    85,    86,   147,   147,   147,   147,     0,     0,
       0,     0,    66,    67,     0,   100,    96,     0,     0,   109,
     136,   137,   138,   139,   140,    95,   122,   124,   126,   117,
       0,    93,   128,     0,     0,     0,     0,    75,     7,   147,
       0,    76,     0,     0,     0,     0,    87,     0,   147,    88,
      97,   108,   147,   147,   147,   147,   123,   125,   127,    94,
       0,     0,   147,    77,    78,     0,   147,   147,    83,    84,
      89,    90,     0,   113,     0,     0,     0,   147,   129,   118,
     119,   147,   147,     0,     0,   147,   147,   147,   115,   120,
     121,     0,     0,    81,    82,     0,     0,   114,    79,    80,
      91,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    34,   239,    35,    36,   120,    37,    38,    39,    40,
      41,    42,    43,    44,   213,    45,    46,    47,    48,    49,
      50,   225,   231,   232,   233,   274,    57,    58,   134,   135,
     123,    74,    59,    51,   187,   136,    54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -208
static const yytype_int16 yypact[] =
{
     296,   -35,  -208,    -2,    38,    10,  -208,  -208,    24,   546,
      31,   346,    51,    47,  -208,   591,   604,  -208,    56,    71,
     -18,   112,   130,   115,   128,   136,   143,   154,  -208,  -208,
     157,   170,  -208,  -208,   111,  -208,  -208,   229,  -208,   578,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,   -12,    -3,  -208,    48,   346,  -208,  -208,   208,   396,
    -208,    73,    15,   163,   190,   201,   160,   107,   229,   578,
     204,  -208,  -208,  -208,  -208,  -208,   195,   165,   202,   215,
     152,   216,   153,   222,   227,   236,   237,   244,   245,   253,
     158,   254,   171,   255,   256,   259,   261,   262,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,   231,   230,  -208,  -208,  -208,  -208,
     578,  -208,  -208,  -208,  -208,  -208,   446,   446,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,   210,  -208,     4,  -208,    65,
    -208,  -208,  -208,  -208,    70,  -208,  -208,   232,    41,   578,
     578,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,   396,   396,    23,    23,   496,
     496,    97,  -208,  -208,  -208,  -208,  -208,  -208,    85,  -208,
     185,  -208,   276,   235,   100,   110,  -208,   268,  -208,   280,
     283,  -208,   578,  -208,   578,    41,  -208,  -208,   446,   446,
      48,    48,  -208,  -208,  -208,   295,   396,   396,   396,   396,
     396,   294,   161,  -208,    19,  -208,  -208,   290,  -208,   200,
    -208,   252,  -208,  -208,  -208,  -208,  -208,  -208,   302,   396,
     200,   269,  -208,  -208,    41,   578,  -208,   313,   324,  -208,
    -208,  -208,    55,    55,    55,  -208,  -208,  -208,  -208,   192,
      34,  -208,  -208,   303,   -19,   315,   278,  -208,  -208,  -208,
     114,  -208,   322,   286,   323,   287,  -208,   210,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
       8,   320,  -208,  -208,  -208,   117,  -208,  -208,  -208,  -208,
    -208,  -208,   119,   167,   396,   396,   396,  -208,  -208,  -208,
     396,  -208,  -208,   337,   307,  -208,  -208,  -208,  -208,  -208,
     396,   345,   308,  -208,  -208,   352,   312,  -208,  -208,  -208,
    -208,  -208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,   164,   -37,   -31,   -62,   368,  -208,    -5,  -208,
    -208,  -208,  -208,  -208,  -206,  -208,  -208,  -208,  -208,  -208,
    -208,    66,  -208,   145,  -208,    88,  -173,    -6,  -208,  -207,
    -208,   -45,   -48,  -208,     5,     3,    17,  -208
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      64,    65,   119,    53,    69,    52,   118,   150,   100,   256,
     130,   101,   137,   139,    75,   144,    56,   142,   148,   260,
     261,   262,   263,   264,    60,   197,   114,   115,   271,   140,
     124,   125,   119,   248,   301,   251,    63,   118,   102,   121,
     122,   302,   287,   299,     2,   272,   126,   127,   290,     3,
      66,     4,     5,     6,     7,   133,   124,   125,   131,    10,
     272,   301,   149,    70,    61,    71,    72,    73,   317,    62,
     133,    17,   141,   284,   285,    76,   185,   186,   273,   199,
     189,   190,    98,   184,   206,   133,   200,   214,   192,   193,
     198,   207,   133,   273,   204,   205,   128,    99,    32,   235,
      33,   129,   222,   223,   224,   215,    77,   262,   263,   264,
       2,   116,   119,   184,   244,     3,   133,     4,     5,     6,
       7,   133,   201,   138,   246,    10,   191,   208,   306,    53,
      53,   321,   188,   325,   202,   203,   133,    17,   103,   209,
     210,   107,   236,   212,   226,   227,   228,   229,   230,   234,
     255,   133,   335,   336,   108,   240,   104,   245,   249,   105,
     249,   133,   109,   254,    32,   133,    33,   247,   133,   110,
     133,   307,   327,   223,   322,   119,   326,   184,   156,   160,
     111,   157,   161,   112,   170,   270,   106,   171,    53,    53,
     216,   217,   280,   237,   279,   241,   113,   174,   249,   249,
     175,   266,   267,   268,   145,   288,   220,   221,   158,   162,
     212,   238,   132,   143,   172,   146,   257,   258,   184,   147,
     152,    53,    53,   151,   188,   153,   278,   176,   154,   275,
     276,   305,   296,   297,   298,    71,    72,    73,   282,   283,
     312,   155,   159,   192,   193,   314,   315,   316,   163,   212,
      71,    72,    73,   164,   320,   117,    14,    15,    16,   194,
     195,   196,   165,   166,    18,    19,    20,    21,    22,   330,
     167,   168,    23,    24,    25,    26,    27,   249,   249,   169,
     173,   177,   178,    30,    31,   179,   313,   180,   181,   182,
     183,   242,   211,   243,   238,   252,   319,     1,   253,     2,
     323,   324,   259,   265,     3,   277,     4,     5,     6,     7,
     281,   329,     8,     9,    10,   331,   332,   286,    11,    12,
     291,   337,    13,    14,    15,    16,    17,   289,   292,   272,
     303,    18,    19,    20,    21,    22,   304,   308,   310,    23,
      24,    25,    26,    27,   309,   311,   318,    28,    29,     2,
      30,    31,   333,    32,     3,    33,     4,     5,     6,     7,
     338,   300,     8,     9,    10,   334,   339,   340,    11,    12,
     341,   250,    13,    14,    15,    16,    17,    68,   269,   328,
       0,    18,    19,    20,    21,    22,     0,     0,     0,    23,
      24,    25,    26,    27,     0,     0,    71,    72,    73,     2,
      30,    31,     0,    32,     3,    33,     4,     5,     6,     7,
       0,     0,     8,     9,    10,     0,     0,     0,    11,    12,
       0,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,    23,
      24,    25,    26,    27,     0,     0,     0,   133,     0,     2,
      30,    31,     0,    32,     3,    33,     4,     5,     6,     7,
       0,     0,     8,     9,    10,     0,     0,     0,    11,    12,
       0,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     2,
      30,    31,     0,    32,     3,    33,     4,     5,     6,     7,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,    23,
      24,    25,    26,    27,     0,     0,     0,   133,     0,     2,
      30,    31,     0,    32,     3,    33,     4,     5,     6,     7,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,    67,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
      30,    31,     0,    32,     0,    33,    15,    16,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,     0,     0,
       0,    23,    24,    25,    26,    27,    78,    79,    80,    81,
      82,     0,    30,    31,    83,     0,     0,    84,    85,    88,
      89,    90,    91,    92,     0,    86,    87,    93,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,    96,    97
};

static const yytype_int16 yycheck[] =
{
       6,     7,    39,     0,     9,     0,    37,    69,    26,   215,
      55,    29,    60,    61,    11,    63,    51,    62,    66,   226,
     227,   228,   229,   230,    26,    21,    32,    33,     9,    14,
      33,    34,    69,   206,    53,   208,    26,    68,    56,    51,
      52,    60,   249,     9,     3,    26,    49,    50,   254,     8,
      26,    10,    11,    12,    13,    51,    33,    34,    55,    18,
      26,    53,    67,    32,    26,    50,    51,    52,    60,    31,
      51,    30,    57,   246,   247,    24,   124,   125,    59,    14,
     128,   129,    26,   120,    14,    51,    21,   149,    33,    34,
     138,    21,    51,    59,   142,   143,    48,    26,    57,    14,
      59,    53,     5,     6,     7,   153,    59,   314,   315,   316,
       3,     0,   149,   150,    14,     8,    51,    10,    11,    12,
      13,    51,    57,    50,    14,    18,   132,    57,    14,   126,
     127,    14,   127,    14,   140,   141,    51,    30,    26,   145,
     146,    26,    57,   148,   192,   193,   194,   195,   196,   197,
     212,    51,   325,   326,    26,   200,    26,    57,   206,    29,
     208,    51,    26,   211,    57,    51,    59,    57,    51,    26,
      51,    57,     5,     6,    57,   212,    57,   214,    26,    26,
      26,    29,    29,    26,    26,   233,    56,    29,   185,   186,
     185,   186,   240,   199,   239,   201,    26,    26,   246,   247,
      29,    40,    41,    42,    14,   250,   189,   190,    56,    56,
     215,    26,     4,    50,    56,    14,   222,   223,   255,    59,
      25,   218,   219,    19,   219,    60,    26,    56,    26,   235,
     236,   279,    40,    41,    42,    50,    51,    52,   244,   245,
     288,    26,    26,    33,    34,   293,   294,   295,    26,   254,
      50,    51,    52,    26,   302,    26,    27,    28,    29,    49,
      50,    51,    26,    26,    35,    36,    37,    38,    39,   317,
      26,    26,    43,    44,    45,    46,    47,   325,   326,    26,
      26,    26,    26,    54,    55,    26,   292,    26,    26,    58,
      60,    15,    60,    58,    26,    15,   302,     1,    15,     3,
     306,   307,     7,     9,     8,    15,    10,    11,    12,    13,
      58,   317,    16,    17,    18,   321,   322,    15,    22,    23,
       7,   327,    26,    27,    28,    29,    30,    58,     4,    26,
      15,    35,    36,    37,    38,    39,    58,    15,    15,    43,
      44,    45,    46,    47,    58,    58,    26,    51,    52,     3,
      54,    55,    15,    57,     8,    59,    10,    11,    12,    13,
      15,   273,    16,    17,    18,    58,    58,    15,    22,    23,
      58,   207,    26,    27,    28,    29,    30,     9,   233,   313,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    50,    51,    52,     3,
      54,    55,    -1,    57,     8,    59,    10,    11,    12,    13,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    51,    -1,     3,
      54,    55,    -1,    57,     8,    59,    10,    11,    12,    13,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,     3,
      54,    55,    -1,    57,     8,    59,    10,    11,    12,    13,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    51,    -1,     3,
      54,    55,    -1,    57,     8,    59,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    57,    -1,    59,    28,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    35,    36,    37,    38,
      39,    -1,    54,    55,    43,    -1,    -1,    46,    47,    35,
      36,    37,    38,    39,    -1,    54,    55,    43,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     8,    10,    11,    12,    13,    16,    17,
      18,    22,    23,    26,    27,    28,    29,    30,    35,    36,
      37,    38,    39,    43,    44,    45,    46,    47,    51,    52,
      54,    55,    57,    59,    62,    64,    65,    67,    68,    69,
      70,    71,    72,    73,    74,    76,    77,    78,    79,    80,
      81,    94,    95,    96,    97,    98,    51,    87,    88,    93,
      26,    26,    31,    26,    88,    88,    26,    26,    67,    69,
      32,    50,    51,    52,    92,    96,    24,    59,    35,    36,
      37,    38,    39,    43,    46,    47,    54,    55,    35,    36,
      37,    38,    39,    43,    46,    47,    54,    55,    26,    26,
      26,    29,    56,    26,    26,    29,    56,    26,    26,    26,
      26,    26,    26,    26,    88,    88,     0,    26,    65,    64,
      66,    51,    52,    91,    33,    34,    49,    50,    48,    53,
      92,    96,     4,    51,    89,    90,    96,    93,    50,    93,
      14,    57,    92,    50,    93,    14,    14,    59,    93,    69,
      66,    19,    25,    60,    26,    26,    26,    29,    56,    26,
      26,    29,    56,    26,    26,    26,    26,    26,    26,    26,
      26,    29,    56,    26,    26,    29,    56,    26,    26,    26,
      26,    26,    58,    60,    64,    93,    93,    95,    95,    93,
      93,    88,    33,    34,    49,    50,    51,    21,    93,    14,
      21,    57,    88,    88,    93,    93,    14,    21,    57,    88,
      88,    60,    69,    75,    66,    93,    95,    95,    49,    50,
      97,    97,     5,     6,     7,    82,    93,    93,    93,    93,
      93,    83,    84,    85,    93,    14,    57,    88,    26,    63,
      92,    88,    15,    58,    14,    57,    14,    57,    87,    93,
      63,    87,    15,    15,    93,    66,    75,    88,    88,     7,
      90,    90,    90,    90,    90,     9,    40,    41,    42,    84,
      93,     9,    26,    59,    86,    88,    88,    15,    26,    92,
      93,    58,    88,    88,    87,    87,    15,    90,    92,    58,
      75,     7,     4,    49,    50,    51,    40,    41,    42,     9,
      86,    53,    60,    15,    58,    93,    14,    57,    15,    58,
      15,    58,    93,    88,    93,    93,    93,    60,    26,    88,
      93,    14,    57,    88,    88,    14,    57,     5,    82,    88,
      93,    88,    88,    15,    58,    87,    87,    88,    15,    58,
      15,    58
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
        case 2:
#line 383 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  /* Case of regular command.  Discard the error
			     safety net,and return the command just parsed. */
			  global_command = (yyvsp[(1) - (2)].command);
			  eof_encountered = 0;
			  /* discard_parser_constructs (0); */
			  if (parser_state & PST_CMDSUBST)
			    parser_state |= PST_EOFTOKEN;
			  YYACCEPT;
			}
    break;

  case 3:
#line 394 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  /* Case of regular command, but not a very
			     interesting one.  Return a NULL command. */
			  global_command = (COMMAND *)NULL;
			  if (parser_state & PST_CMDSUBST)
			    parser_state |= PST_EOFTOKEN;
			  YYACCEPT;
			}
    break;

  case 4:
#line 403 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  /* Error during parsing.  Return NULL command. */
			  global_command = (COMMAND *)NULL;
			  eof_encountered = 0;
			  /* discard_parser_constructs (1); */
			  if (interactive && parse_and_execute_level == 0)
			    {
			      YYACCEPT;
			    }
			  else
			    {
			      YYABORT;
			    }
			}
    break;

  case 5:
#line 418 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  /* Case of EOF seen by itself.  Do ignoreeof or
			     not. */
			  global_command = (COMMAND *)NULL;
			  handle_eof_input_unit ();
			  YYACCEPT;
			}
    break;

  case 6:
#line 428 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.word_list) = make_word_list ((yyvsp[(1) - (1)].word), (WORD_LIST *)NULL); }
    break;

  case 7:
#line 430 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.word_list) = make_word_list ((yyvsp[(2) - (2)].word), (yyvsp[(1) - (2)].word_list)); }
    break;

  case 8:
#line 434 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 1;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_output_direction, redir, 0);
			}
    break;

  case 9:
#line 440 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 0;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_input_direction, redir, 0);
			}
    break;

  case 10:
#line 446 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_output_direction, redir, 0);
			}
    break;

  case 11:
#line 452 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_input_direction, redir, 0);
			}
    break;

  case 12:
#line 458 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_output_direction, redir, REDIR_VARASSIGN);
			}
    break;

  case 13:
#line 464 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_input_direction, redir, REDIR_VARASSIGN);
			}
    break;

  case 14:
#line 470 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 1;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_appending_to, redir, 0);
			}
    break;

  case 15:
#line 476 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_appending_to, redir, 0);
			}
    break;

  case 16:
#line 482 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_appending_to, redir, REDIR_VARASSIGN);
			}
    break;

  case 17:
#line 488 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 1;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_output_force, redir, 0);
			}
    break;

  case 18:
#line 494 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_output_force, redir, 0);
			}
    break;

  case 19:
#line 500 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_output_force, redir, REDIR_VARASSIGN);
			}
    break;

  case 20:
#line 506 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 0;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_input_output, redir, 0);
			}
    break;

  case 21:
#line 512 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_input_output, redir, 0);
			}
    break;

  case 22:
#line 518 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_input_output, redir, REDIR_VARASSIGN);
			}
    break;

  case 23:
#line 524 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 0;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_reading_until, redir, 0);
			  push_heredoc ((yyval.redirect));
			}
    break;

  case 24:
#line 531 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_reading_until, redir, 0);
			  push_heredoc ((yyval.redirect));
			}
    break;

  case 25:
#line 538 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_reading_until, redir, REDIR_VARASSIGN);
			  push_heredoc ((yyval.redirect));
			}
    break;

  case 26:
#line 545 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 0;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_deblank_reading_until, redir, 0);
			  push_heredoc ((yyval.redirect));
			}
    break;

  case 27:
#line 552 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_deblank_reading_until, redir, 0);
			  push_heredoc ((yyval.redirect));
			}
    break;

  case 28:
#line 559 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_deblank_reading_until, redir, REDIR_VARASSIGN);
			  push_heredoc ((yyval.redirect));
			}
    break;

  case 29:
#line 566 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 0;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_reading_string, redir, 0);
			}
    break;

  case 30:
#line 572 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_reading_string, redir, 0);
			}
    break;

  case 31:
#line 578 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_reading_string, redir, REDIR_VARASSIGN);
			}
    break;

  case 32:
#line 584 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 0;
			  redir.dest = (yyvsp[(2) - (2)].number);
			  (yyval.redirect) = make_redirection (source, r_duplicating_input, redir, 0);
			}
    break;

  case 33:
#line 590 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.dest = (yyvsp[(3) - (3)].number);
			  (yyval.redirect) = make_redirection (source, r_duplicating_input, redir, 0);
			}
    break;

  case 34:
#line 596 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.dest = (yyvsp[(3) - (3)].number);
			  (yyval.redirect) = make_redirection (source, r_duplicating_input, redir, REDIR_VARASSIGN);
			}
    break;

  case 35:
#line 602 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 1;
			  redir.dest = (yyvsp[(2) - (2)].number);
			  (yyval.redirect) = make_redirection (source, r_duplicating_output, redir, 0);
			}
    break;

  case 36:
#line 608 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.dest = (yyvsp[(3) - (3)].number);
			  (yyval.redirect) = make_redirection (source, r_duplicating_output, redir, 0);
			}
    break;

  case 37:
#line 614 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.dest = (yyvsp[(3) - (3)].number);
			  (yyval.redirect) = make_redirection (source, r_duplicating_output, redir, REDIR_VARASSIGN);
			}
    break;

  case 38:
#line 620 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 0;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_duplicating_input_word, redir, 0);
			}
    break;

  case 39:
#line 626 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_duplicating_input_word, redir, 0);
			}
    break;

  case 40:
#line 632 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_duplicating_input_word, redir, REDIR_VARASSIGN);
			}
    break;

  case 41:
#line 638 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 1;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_duplicating_output_word, redir, 0);
			}
    break;

  case 42:
#line 644 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_duplicating_output_word, redir, 0);
			}
    break;

  case 43:
#line 650 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.filename = (yyvsp[(3) - (3)].word);
			  (yyval.redirect) = make_redirection (source, r_duplicating_output_word, redir, REDIR_VARASSIGN);
			}
    break;

  case 44:
#line 656 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 1;
			  redir.dest = 0;
			  (yyval.redirect) = make_redirection (source, r_close_this, redir, 0);
			}
    break;

  case 45:
#line 662 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.dest = 0;
			  (yyval.redirect) = make_redirection (source, r_close_this, redir, 0);
			}
    break;

  case 46:
#line 668 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.dest = 0;
			  (yyval.redirect) = make_redirection (source, r_close_this, redir, REDIR_VARASSIGN);
			}
    break;

  case 47:
#line 674 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 0;
			  redir.dest = 0;
			  (yyval.redirect) = make_redirection (source, r_close_this, redir, 0);
			}
    break;

  case 48:
#line 680 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = (yyvsp[(1) - (3)].number);
			  redir.dest = 0;
			  (yyval.redirect) = make_redirection (source, r_close_this, redir, 0);
			}
    break;

  case 49:
#line 686 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.filename = (yyvsp[(1) - (3)].word);
			  redir.dest = 0;
			  (yyval.redirect) = make_redirection (source, r_close_this, redir, REDIR_VARASSIGN);
			}
    break;

  case 50:
#line 692 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 1;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_err_and_out, redir, 0);
			}
    break;

  case 51:
#line 698 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  source.dest = 1;
			  redir.filename = (yyvsp[(2) - (2)].word);
			  (yyval.redirect) = make_redirection (source, r_append_err_and_out, redir, 0);
			}
    break;

  case 52:
#line 706 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.element).word = (yyvsp[(1) - (1)].word); (yyval.element).redirect = 0; }
    break;

  case 53:
#line 708 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.element).word = (yyvsp[(1) - (1)].word); (yyval.element).redirect = 0; }
    break;

  case 54:
#line 710 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.element).redirect = (yyvsp[(1) - (1)].redirect); (yyval.element).word = 0; }
    break;

  case 55:
#line 714 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.redirect) = (yyvsp[(1) - (1)].redirect);
			}
    break;

  case 56:
#line 718 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  register REDIRECT *t;

			  for (t = (yyvsp[(1) - (2)].redirect); t->next; t = t->next)
			    ;
			  t->next = (yyvsp[(2) - (2)].redirect);
			  (yyval.redirect) = (yyvsp[(1) - (2)].redirect);
			}
    break;

  case 57:
#line 729 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_simple_command ((yyvsp[(1) - (1)].element), (COMMAND *)NULL); }
    break;

  case 58:
#line 731 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_simple_command ((yyvsp[(2) - (2)].element), (yyvsp[(1) - (2)].command)); }
    break;

  case 59:
#line 735 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = clean_simple_command ((yyvsp[(1) - (1)].command)); }
    break;

  case 60:
#line 737 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 61:
#line 739 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  COMMAND *tc;

			  tc = (yyvsp[(1) - (2)].command);
			  if (tc->redirects)
			    {
			      register REDIRECT *t;
			      for (t = tc->redirects; t->next; t = t->next)
				;
			      t->next = (yyvsp[(2) - (2)].redirect);
			    }
			  else
			    tc->redirects = (yyvsp[(2) - (2)].redirect);
			  (yyval.command) = (yyvsp[(1) - (2)].command);
			}
    break;

  case 62:
#line 755 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 63:
#line 757 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 64:
#line 761 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 65:
#line 763 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 66:
#line 765 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_while_command ((yyvsp[(2) - (5)].command), (yyvsp[(4) - (5)].command)); }
    break;

  case 67:
#line 767 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_until_command ((yyvsp[(2) - (5)].command), (yyvsp[(4) - (5)].command)); }
    break;

  case 68:
#line 769 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 69:
#line 771 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 70:
#line 773 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 71:
#line 775 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 72:
#line 777 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 73:
#line 779 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 74:
#line 781 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 75:
#line 785 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_for_command ((yyvsp[(2) - (6)].word), add_string_to_list ("\"$@\"", (WORD_LIST *)NULL), (yyvsp[(5) - (6)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 76:
#line 790 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_for_command ((yyvsp[(2) - (6)].word), add_string_to_list ("\"$@\"", (WORD_LIST *)NULL), (yyvsp[(5) - (6)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 77:
#line 795 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_for_command ((yyvsp[(2) - (7)].word), add_string_to_list ("\"$@\"", (WORD_LIST *)NULL), (yyvsp[(6) - (7)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 78:
#line 800 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_for_command ((yyvsp[(2) - (7)].word), add_string_to_list ("\"$@\"", (WORD_LIST *)NULL), (yyvsp[(6) - (7)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 79:
#line 805 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_for_command ((yyvsp[(2) - (10)].word), REVERSE_LIST ((yyvsp[(5) - (10)].word_list), WORD_LIST *), (yyvsp[(9) - (10)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 80:
#line 810 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_for_command ((yyvsp[(2) - (10)].word), REVERSE_LIST ((yyvsp[(5) - (10)].word_list), WORD_LIST *), (yyvsp[(9) - (10)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 81:
#line 815 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_for_command ((yyvsp[(2) - (9)].word), (WORD_LIST *)NULL, (yyvsp[(8) - (9)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 82:
#line 820 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_for_command ((yyvsp[(2) - (9)].word), (WORD_LIST *)NULL, (yyvsp[(8) - (9)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 83:
#line 827 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
				  (yyval.command) = make_arith_for_command ((yyvsp[(2) - (7)].word_list), (yyvsp[(6) - (7)].command), arith_for_lineno);
				  if (word_top > 0) word_top--;
				}
    break;

  case 84:
#line 832 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
				  (yyval.command) = make_arith_for_command ((yyvsp[(2) - (7)].word_list), (yyvsp[(6) - (7)].command), arith_for_lineno);
				  if (word_top > 0) word_top--;
				}
    break;

  case 85:
#line 837 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
				  (yyval.command) = make_arith_for_command ((yyvsp[(2) - (5)].word_list), (yyvsp[(4) - (5)].command), arith_for_lineno);
				  if (word_top > 0) word_top--;
				}
    break;

  case 86:
#line 842 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
				  (yyval.command) = make_arith_for_command ((yyvsp[(2) - (5)].word_list), (yyvsp[(4) - (5)].command), arith_for_lineno);
				  if (word_top > 0) word_top--;
				}
    break;

  case 87:
#line 849 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_select_command ((yyvsp[(2) - (6)].word), add_string_to_list ("\"$@\"", (WORD_LIST *)NULL), (yyvsp[(5) - (6)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 88:
#line 854 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_select_command ((yyvsp[(2) - (6)].word), add_string_to_list ("\"$@\"", (WORD_LIST *)NULL), (yyvsp[(5) - (6)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 89:
#line 859 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_select_command ((yyvsp[(2) - (7)].word), add_string_to_list ("\"$@\"", (WORD_LIST *)NULL), (yyvsp[(6) - (7)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 90:
#line 864 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_select_command ((yyvsp[(2) - (7)].word), add_string_to_list ("\"$@\"", (WORD_LIST *)NULL), (yyvsp[(6) - (7)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 91:
#line 869 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_select_command ((yyvsp[(2) - (10)].word), REVERSE_LIST ((yyvsp[(5) - (10)].word_list), WORD_LIST *), (yyvsp[(9) - (10)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 92:
#line 874 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_select_command ((yyvsp[(2) - (10)].word), REVERSE_LIST ((yyvsp[(5) - (10)].word_list), WORD_LIST *), (yyvsp[(9) - (10)].command), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 93:
#line 881 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_case_command ((yyvsp[(2) - (6)].word), (PATTERN_LIST *)NULL, word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 94:
#line 886 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_case_command ((yyvsp[(2) - (7)].word), (yyvsp[(5) - (7)].pattern), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 95:
#line 891 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_case_command ((yyvsp[(2) - (6)].word), (yyvsp[(5) - (6)].pattern), word_lineno[word_top]);
			  if (word_top > 0) word_top--;
			}
    break;

  case 96:
#line 898 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_function_def ((yyvsp[(1) - (5)].word), (yyvsp[(5) - (5)].command), function_dstart, function_bstart); }
    break;

  case 97:
#line 901 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_function_def ((yyvsp[(2) - (6)].word), (yyvsp[(6) - (6)].command), function_dstart, function_bstart); }
    break;

  case 98:
#line 904 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_function_def ((yyvsp[(2) - (4)].word), (yyvsp[(4) - (4)].command), function_dstart, function_bstart); }
    break;

  case 99:
#line 908 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 100:
#line 910 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  COMMAND *tc;

			  tc = (yyvsp[(1) - (2)].command);
			  /* According to Posix.2 3.9.5, redirections
			     specified after the body of a function should
			     be attached to the function and performed when
			     the function is executed, not as part of the
			     function definition command. */
			  /* XXX - I don't think it matters, but we might
			     want to change this in the future to avoid
			     problems differentiating between a function
			     definition with a redirection and a function
			     definition containing a single command with a
			     redirection.  The two are semantically equivalent,
			     though -- the only difference is in how the
			     command printing code displays the redirections. */
			  if (tc->redirects)
			    {
			      register REDIRECT *t;
			      for (t = tc->redirects; t->next; t = t->next)
				;
			      t->next = (yyvsp[(2) - (2)].redirect);
			    }
			  else
			    tc->redirects = (yyvsp[(2) - (2)].redirect);
			  (yyval.command) = (yyvsp[(1) - (2)].command);
			}
    break;

  case 101:
#line 941 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_subshell_command ((yyvsp[(2) - (3)].command));
			  (yyval.command)->flags |= CMD_WANT_SUBSHELL;
			}
    break;

  case 102:
#line 948 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_coproc_command ("COPROC", (yyvsp[(2) - (2)].command));
			  (yyval.command)->flags |= CMD_WANT_SUBSHELL|CMD_COPROC_SUBSHELL;
			}
    break;

  case 103:
#line 953 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  COMMAND *tc;

			  tc = (yyvsp[(2) - (3)].command);
			  if (tc->redirects)
			    {
			      register REDIRECT *t;
			      for (t = tc->redirects; t->next; t = t->next)
				;
			      t->next = (yyvsp[(3) - (3)].redirect);
			    }
			  else
			    tc->redirects = (yyvsp[(3) - (3)].redirect);
			  (yyval.command) = make_coproc_command ("COPROC", (yyvsp[(2) - (3)].command));
			  (yyval.command)->flags |= CMD_WANT_SUBSHELL|CMD_COPROC_SUBSHELL;
			}
    break;

  case 104:
#line 970 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_coproc_command ((yyvsp[(2) - (3)].word)->word, (yyvsp[(3) - (3)].command));
			  (yyval.command)->flags |= CMD_WANT_SUBSHELL|CMD_COPROC_SUBSHELL;
			}
    break;

  case 105:
#line 975 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  COMMAND *tc;

			  tc = (yyvsp[(3) - (4)].command);
			  if (tc->redirects)
			    {
			      register REDIRECT *t;
			      for (t = tc->redirects; t->next; t = t->next)
				;
			      t->next = (yyvsp[(4) - (4)].redirect);
			    }
			  else
			    tc->redirects = (yyvsp[(4) - (4)].redirect);
			  (yyval.command) = make_coproc_command ((yyvsp[(2) - (4)].word)->word, (yyvsp[(3) - (4)].command));
			  (yyval.command)->flags |= CMD_WANT_SUBSHELL|CMD_COPROC_SUBSHELL;
			}
    break;

  case 106:
#line 992 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = make_coproc_command ("COPROC", clean_simple_command ((yyvsp[(2) - (2)].command)));
			  (yyval.command)->flags |= CMD_WANT_SUBSHELL|CMD_COPROC_SUBSHELL;
			}
    break;

  case 107:
#line 999 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_if_command ((yyvsp[(2) - (5)].command), (yyvsp[(4) - (5)].command), (COMMAND *)NULL); }
    break;

  case 108:
#line 1001 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_if_command ((yyvsp[(2) - (7)].command), (yyvsp[(4) - (7)].command), (yyvsp[(6) - (7)].command)); }
    break;

  case 109:
#line 1003 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_if_command ((yyvsp[(2) - (6)].command), (yyvsp[(4) - (6)].command), (yyvsp[(5) - (6)].command)); }
    break;

  case 110:
#line 1008 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_group_command ((yyvsp[(2) - (3)].command)); }
    break;

  case 111:
#line 1012 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_arith_command ((yyvsp[(1) - (1)].word_list)); }
    break;

  case 112:
#line 1016 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(2) - (3)].command); }
    break;

  case 113:
#line 1020 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_if_command ((yyvsp[(2) - (4)].command), (yyvsp[(4) - (4)].command), (COMMAND *)NULL); }
    break;

  case 114:
#line 1022 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_if_command ((yyvsp[(2) - (6)].command), (yyvsp[(4) - (6)].command), (yyvsp[(6) - (6)].command)); }
    break;

  case 115:
#line 1024 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = make_if_command ((yyvsp[(2) - (5)].command), (yyvsp[(4) - (5)].command), (yyvsp[(5) - (5)].command)); }
    break;

  case 117:
#line 1029 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyvsp[(2) - (2)].pattern)->next = (yyvsp[(1) - (2)].pattern); (yyval.pattern) = (yyvsp[(2) - (2)].pattern); }
    break;

  case 118:
#line 1033 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.pattern) = make_pattern_list ((yyvsp[(2) - (4)].word_list), (yyvsp[(4) - (4)].command)); }
    break;

  case 119:
#line 1035 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.pattern) = make_pattern_list ((yyvsp[(2) - (4)].word_list), (COMMAND *)NULL); }
    break;

  case 120:
#line 1037 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.pattern) = make_pattern_list ((yyvsp[(3) - (5)].word_list), (yyvsp[(5) - (5)].command)); }
    break;

  case 121:
#line 1039 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.pattern) = make_pattern_list ((yyvsp[(3) - (5)].word_list), (COMMAND *)NULL); }
    break;

  case 122:
#line 1043 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.pattern) = (yyvsp[(1) - (2)].pattern); }
    break;

  case 123:
#line 1045 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyvsp[(2) - (3)].pattern)->next = (yyvsp[(1) - (3)].pattern); (yyval.pattern) = (yyvsp[(2) - (3)].pattern); }
    break;

  case 124:
#line 1047 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyvsp[(1) - (2)].pattern)->flags |= CASEPAT_FALLTHROUGH; (yyval.pattern) = (yyvsp[(1) - (2)].pattern); }
    break;

  case 125:
#line 1049 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyvsp[(2) - (3)].pattern)->flags |= CASEPAT_FALLTHROUGH; (yyvsp[(2) - (3)].pattern)->next = (yyvsp[(1) - (3)].pattern); (yyval.pattern) = (yyvsp[(2) - (3)].pattern); }
    break;

  case 126:
#line 1051 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyvsp[(1) - (2)].pattern)->flags |= CASEPAT_TESTNEXT; (yyval.pattern) = (yyvsp[(1) - (2)].pattern); }
    break;

  case 127:
#line 1053 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyvsp[(2) - (3)].pattern)->flags |= CASEPAT_TESTNEXT; (yyvsp[(2) - (3)].pattern)->next = (yyvsp[(1) - (3)].pattern); (yyval.pattern) = (yyvsp[(2) - (3)].pattern); }
    break;

  case 128:
#line 1057 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.word_list) = make_word_list ((yyvsp[(1) - (1)].word), (WORD_LIST *)NULL); }
    break;

  case 129:
#line 1059 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.word_list) = make_word_list ((yyvsp[(3) - (3)].word), (yyvsp[(1) - (3)].word_list)); }
    break;

  case 130:
#line 1068 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = (yyvsp[(2) - (2)].command);
			  if (need_here_doc)
			    gather_here_documents ();
			 }
    break;

  case 132:
#line 1077 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = (yyvsp[(2) - (2)].command);
			}
    break;

  case 134:
#line 1084 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  if ((yyvsp[(1) - (3)].command)->type == cm_connection)
			    (yyval.command) = connect_async_list ((yyvsp[(1) - (3)].command), (COMMAND *)NULL, '&');
			  else
			    (yyval.command) = command_connect ((yyvsp[(1) - (3)].command), (COMMAND *)NULL, '&');
			}
    break;

  case 136:
#line 1095 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = command_connect ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), AND_AND); }
    break;

  case 137:
#line 1097 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = command_connect ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), OR_OR); }
    break;

  case 138:
#line 1099 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  if ((yyvsp[(1) - (4)].command)->type == cm_connection)
			    (yyval.command) = connect_async_list ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), '&');
			  else
			    (yyval.command) = command_connect ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), '&');
			}
    break;

  case 139:
#line 1106 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = command_connect ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), ';'); }
    break;

  case 140:
#line 1108 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = command_connect ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), ';'); }
    break;

  case 141:
#line 1110 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 144:
#line 1118 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.number) = '\n'; }
    break;

  case 145:
#line 1120 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.number) = ';'; }
    break;

  case 146:
#line 1122 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.number) = yacc_EOF; }
    break;

  case 149:
#line 1136 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = (yyvsp[(1) - (1)].command);
			  if (need_here_doc)
			    gather_here_documents ();
			  if ((parser_state & PST_CMDSUBST) && current_token == shell_eof_token)
			    {
			      global_command = (yyvsp[(1) - (1)].command);
			      eof_encountered = 0;
			      rewind_input_string ();
			      YYACCEPT;
			    }
			}
    break;

  case 150:
#line 1149 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  if ((yyvsp[(1) - (2)].command)->type == cm_connection)
			    (yyval.command) = connect_async_list ((yyvsp[(1) - (2)].command), (COMMAND *)NULL, '&');
			  else
			    (yyval.command) = command_connect ((yyvsp[(1) - (2)].command), (COMMAND *)NULL, '&');
			  if (need_here_doc)
			    gather_here_documents ();
			  if ((parser_state & PST_CMDSUBST) && current_token == shell_eof_token)
			    {
			      global_command = (yyvsp[(1) - (2)].command);
			      eof_encountered = 0;
			      rewind_input_string ();
			      YYACCEPT;
			    }
			}
    break;

  case 151:
#line 1165 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  (yyval.command) = (yyvsp[(1) - (2)].command);
			  if (need_here_doc)
			    gather_here_documents ();
			  if ((parser_state & PST_CMDSUBST) && current_token == shell_eof_token)
			    {
			      global_command = (yyvsp[(1) - (2)].command);
			      eof_encountered = 0;
			      rewind_input_string ();
			      YYACCEPT;
			    }
			}
    break;

  case 152:
#line 1180 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = command_connect ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), AND_AND); }
    break;

  case 153:
#line 1182 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = command_connect ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), OR_OR); }
    break;

  case 154:
#line 1184 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  if ((yyvsp[(1) - (3)].command)->type == cm_connection)
			    (yyval.command) = connect_async_list ((yyvsp[(1) - (3)].command), (yyvsp[(3) - (3)].command), '&');
			  else
			    (yyval.command) = command_connect ((yyvsp[(1) - (3)].command), (yyvsp[(3) - (3)].command), '&');
			}
    break;

  case 155:
#line 1191 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = command_connect ((yyvsp[(1) - (3)].command), (yyvsp[(3) - (3)].command), ';'); }
    break;

  case 156:
#line 1194 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 157:
#line 1198 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 158:
#line 1200 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  if ((yyvsp[(2) - (2)].command))
			    (yyvsp[(2) - (2)].command)->flags ^= CMD_INVERT_RETURN;	/* toggle */
			  (yyval.command) = (yyvsp[(2) - (2)].command);
			}
    break;

  case 159:
#line 1206 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  if ((yyvsp[(2) - (2)].command))
			    (yyvsp[(2) - (2)].command)->flags |= (yyvsp[(1) - (2)].number);
			  (yyval.command) = (yyvsp[(2) - (2)].command);
			}
    break;

  case 160:
#line 1212 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  ELEMENT x;

			  /* Boy, this is unclean.  `time' by itself can
			     time a null command.  We cheat and push a
			     newline back if the list_terminator was a newline
			     to avoid the double-newline problem (one to
			     terminate this, one to terminate the command) */
			  x.word = 0;
			  x.redirect = 0;
			  (yyval.command) = make_simple_command (x, (COMMAND *)NULL);
			  (yyval.command)->flags |= (yyvsp[(1) - (2)].number);
			  /* XXX - let's cheat and push a newline back */
			  if ((yyvsp[(2) - (2)].number) == '\n')
			    token_to_read = '\n';
			}
    break;

  case 161:
#line 1229 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  ELEMENT x;

			  /* This is just as unclean.  Posix says that `!'
			     by itself should be equivalent to `false'.
			     We cheat and push a
			     newline back if the list_terminator was a newline
			     to avoid the double-newline problem (one to
			     terminate this, one to terminate the command) */
			  x.word = 0;
			  x.redirect = 0;
			  (yyval.command) = make_simple_command (x, (COMMAND *)NULL);
			  (yyval.command)->flags |= CMD_INVERT_RETURN;
			  /* XXX - let's cheat and push a newline back */
			  if ((yyvsp[(2) - (2)].number) == '\n')
			    token_to_read = '\n';
			}
    break;

  case 162:
#line 1249 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = command_connect ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), '|'); }
    break;

  case 163:
#line 1251 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    {
			  /* Make cmd1 |& cmd2 equivalent to cmd1 2>&1 | cmd2 */
			  COMMAND *tc;
			  REDIRECTEE rd, sd;
			  REDIRECT *r;

			  tc = (yyvsp[(1) - (4)].command)->type == cm_simple ? (COMMAND *)(yyvsp[(1) - (4)].command)->value.Simple : (yyvsp[(1) - (4)].command);
			  sd.dest = 2;
			  rd.dest = 1;
			  r = make_redirection (sd, r_duplicating_output, rd, 0);
			  if (tc->redirects)
			    {
			      register REDIRECT *t;
			      for (t = tc->redirects; t->next; t = t->next)
				;
			      t->next = r;
			    }
			  else
			    tc->redirects = r;

			  (yyval.command) = command_connect ((yyvsp[(1) - (4)].command), (yyvsp[(4) - (4)].command), '|');
			}
    break;

  case 164:
#line 1274 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.command) = (yyvsp[(1) - (1)].command); }
    break;

  case 165:
#line 1278 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.number) = CMD_TIME_PIPELINE; }
    break;

  case 166:
#line 1280 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.number) = CMD_TIME_PIPELINE|CMD_TIME_POSIX; }
    break;

  case 167:
#line 1282 "/usr/src/local/bash/bash-4.3-patched/parse.y"
    { (yyval.number) = CMD_TIME_PIPELINE|CMD_TIME_POSIX; }
    break;


/* Line 1267 of yacc.c.  */
#line 3382 "y.tab.c"
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


#line 1284 "/usr/src/local/bash/bash-4.3-patched/parse.y"


/* Initial size to allocate for tokens, and the
   amount to grow them by. */
#define TOKEN_DEFAULT_INITIAL_SIZE 496
#define TOKEN_DEFAULT_GROW_SIZE 512

/* Should we call prompt_again? */
#define SHOULD_PROMPT() \
  (interactive && (bash_input.type == st_stdin || bash_input.type == st_stream))

#if defined (ALIAS)
#  define expanding_alias() (pushed_string_list && pushed_string_list->expander)
#else
#  define expanding_alias() 0
#endif

/* Global var is non-zero when end of file has been reached. */
int EOF_Reached = 0;

#ifdef DEBUG
static void
debug_parser (i)
     int i;
{
#if YYDEBUG != 0
  yydebug = i;
#endif
}
#endif

/* yy_getc () returns the next available character from input or EOF.
   yy_ungetc (c) makes `c' the next character to read.
   init_yy_io (get, unget, type, location) makes the function GET the
   installed function for getting the next character, makes UNGET the
   installed function for un-getting a character, sets the type of stream
   (either string or file) from TYPE, and makes LOCATION point to where
   the input is coming from. */

/* Unconditionally returns end-of-file. */
int
return_EOF ()
{
  return (EOF);
}

/* Variable containing the current get and unget functions.
   See ./input.h for a clearer description. */
BASH_INPUT bash_input;

/* Set all of the fields in BASH_INPUT to NULL.  Free bash_input.name if it
   is non-null, avoiding a memory leak. */
void
initialize_bash_input ()
{
  bash_input.type = st_none;
  FREE (bash_input.name);
  bash_input.name = (char *)NULL;
  bash_input.location.file = (FILE *)NULL;
  bash_input.location.string = (char *)NULL;
  bash_input.getter = (sh_cget_func_t *)NULL;
  bash_input.ungetter = (sh_cunget_func_t *)NULL;
}

/* Set the contents of the current bash input stream from
   GET, UNGET, TYPE, NAME, and LOCATION. */
void
init_yy_io (get, unget, type, name, location)
     sh_cget_func_t *get;
     sh_cunget_func_t *unget;
     enum stream_type type;
     const char *name;
     INPUT_STREAM location;
{
  bash_input.type = type;
  FREE (bash_input.name);
  bash_input.name = name ? savestring (name) : (char *)NULL;

  /* XXX */
#if defined (CRAY)
  memcpy((char *)&bash_input.location.string, (char *)&location.string, sizeof(location));
#else
  bash_input.location = location;
#endif
  bash_input.getter = get;
  bash_input.ungetter = unget;
}

char *
yy_input_name ()
{
  return (bash_input.name ? bash_input.name : "stdin");
}

/* Call this to get the next character of input. */
static int
yy_getc ()
{
  return (*(bash_input.getter)) ();
}

/* Call this to unget C.  That is, to make C the next character
   to be read. */
static int
yy_ungetc (c)
     int c;
{
  return (*(bash_input.ungetter)) (c);
}

#if defined (BUFFERED_INPUT)
#ifdef INCLUDE_UNUSED
int
input_file_descriptor ()
{
  switch (bash_input.type)
    {
    case st_stream:
      return (fileno (bash_input.location.file));
    case st_bstream:
      return (bash_input.location.buffered_fd);
    case st_stdin:
    default:
      return (fileno (stdin));
    }
}
#endif
#endif /* BUFFERED_INPUT */

/* **************************************************************** */
/*								    */
/*		  Let input be read from readline ().		    */
/*								    */
/* **************************************************************** */

#if defined (READLINE)
char *current_readline_prompt = (char *)NULL;
char *current_readline_line = (char *)NULL;
int current_readline_line_index = 0;

static int
yy_readline_get ()
{
  SigHandler *old_sigint;
  int line_len;
  unsigned char c;

  if (!current_readline_line)
    {
      if (!bash_readline_initialized)
	initialize_readline ();

#if defined (JOB_CONTROL)
      if (job_control)
	give_terminal_to (shell_pgrp, 0);
#endif /* JOB_CONTROL */

      old_sigint = (SigHandler *)IMPOSSIBLE_TRAP_HANDLER;
      if (signal_is_ignored (SIGINT) == 0)
	{
	  /* interrupt_immediately++; */
	  old_sigint = (SigHandler *)set_signal_handler (SIGINT, sigint_sighandler);
	}

      current_readline_line = readline (current_readline_prompt ?
      					  current_readline_prompt : "");

      CHECK_TERMSIG;
      if (signal_is_ignored (SIGINT) == 0)
	{
	  /* interrupt_immediately--; */
	  if (old_sigint != IMPOSSIBLE_TRAP_HANDLER)
	    set_signal_handler (SIGINT, old_sigint);
	}

#if 0
      /* Reset the prompt to the decoded value of prompt_string_pointer. */
      reset_readline_prompt ();
#endif

      if (current_readline_line == 0)
	return (EOF);

      current_readline_line_index = 0;
      line_len = strlen (current_readline_line);

      current_readline_line = (char *)xrealloc (current_readline_line, 2 + line_len);
      current_readline_line[line_len++] = '\n';
      current_readline_line[line_len] = '\0';
    }

  if (current_readline_line[current_readline_line_index] == 0)
    {
      free (current_readline_line);
      current_readline_line = (char *)NULL;
      return (yy_readline_get ());
    }
  else
    {
      c = current_readline_line[current_readline_line_index++];
      return (c);
    }
}

static int
yy_readline_unget (c)
     int c;
{
  if (current_readline_line_index && current_readline_line)
    current_readline_line[--current_readline_line_index] = c;
  return (c);
}

void
with_input_from_stdin ()
{
  INPUT_STREAM location;

  if (bash_input.type != st_stdin && stream_on_stack (st_stdin) == 0)
    {
      location.string = current_readline_line;
      init_yy_io (yy_readline_get, yy_readline_unget,
		  st_stdin, "readline stdin", location);
    }
}

#else  /* !READLINE */

void
with_input_from_stdin ()
{
  with_input_from_stream (stdin, "stdin");
}
#endif	/* !READLINE */

/* **************************************************************** */
/*								    */
/*   Let input come from STRING.  STRING is zero terminated.	    */
/*								    */
/* **************************************************************** */

static int
yy_string_get ()
{
  register char *string;
  register unsigned char c;

  string = bash_input.location.string;

  /* If the string doesn't exist, or is empty, EOF found. */
  if (string && *string)
    {
      c = *string++;
      bash_input.location.string = string;
      return (c);
    }
  else
    return (EOF);
}

static int
yy_string_unget (c)
     int c;
{
  *(--bash_input.location.string) = c;
  return (c);
}

void
with_input_from_string (string, name)
     char *string;
     const char *name;
{
  INPUT_STREAM location;

  location.string = string;
  init_yy_io (yy_string_get, yy_string_unget, st_string, name, location);
}

/* Count the number of characters we've consumed from bash_input.location.string
   and read into shell_input_line, but have not returned from shell_getc.
   That is the true input location.  Rewind bash_input.location.string by
   that number of characters, so it points to the last character actually
   consumed by the parser. */
static void
rewind_input_string ()
{
  int xchars;

  /* number of unconsumed characters in the input -- XXX need to take newlines
     into account, e.g., $(...\n) */
  xchars = shell_input_line_len - shell_input_line_index;
  if (bash_input.location.string[-1] == '\n')
    xchars++;

  /* XXX - how to reflect bash_input.location.string back to string passed to
     parse_and_execute or xparse_dolparen?  xparse_dolparen needs to know how
     far into the string we parsed.  parse_and_execute knows where bash_input.
     location.string is, and how far from orig_string that is -- that's the
     number of characters the command consumed. */

  /* bash_input.location.string - xchars should be where we parsed to */
  /* need to do more validation on xchars value for sanity -- test cases. */
  bash_input.location.string -= xchars;
}

/* **************************************************************** */
/*								    */
/*		     Let input come from STREAM.		    */
/*								    */
/* **************************************************************** */

/* These two functions used to test the value of the HAVE_RESTARTABLE_SYSCALLS
   define, and just use getc/ungetc if it was defined, but since bash
   installs its signal handlers without the SA_RESTART flag, some signals
   (like SIGCHLD, SIGWINCH, etc.) received during a read(2) will not cause
   the read to be restarted.  We need to restart it ourselves. */

static int
yy_stream_get ()
{
  int result;

  result = EOF;
  if (bash_input.location.file)
    {
#if 0
      if (interactive)
	interrupt_immediately++;
#endif

      /* XXX - don't need terminate_immediately; getc_with_restart checks
	 for terminating signals itself if read returns < 0 */
      result = getc_with_restart (bash_input.location.file);

#if 0
      if (interactive)
	interrupt_immediately--;
#endif
    }
  return (result);
}

static int
yy_stream_unget (c)
     int c;
{
  return (ungetc_with_restart (c, bash_input.location.file));
}

void
with_input_from_stream (stream, name)
     FILE *stream;
     const char *name;
{
  INPUT_STREAM location;

  location.file = stream;
  init_yy_io (yy_stream_get, yy_stream_unget, st_stream, name, location);
}

typedef struct stream_saver {
  struct stream_saver *next;
  BASH_INPUT bash_input;
  int line;
#if defined (BUFFERED_INPUT)
  BUFFERED_STREAM *bstream;
#endif /* BUFFERED_INPUT */
} STREAM_SAVER;

/* The globally known line number. */
int line_number = 0;

/* The line number offset set by assigning to LINENO.  Not currently used. */
int line_number_base = 0;

#if defined (COND_COMMAND)
static int cond_lineno;
static int cond_token;
#endif

STREAM_SAVER *stream_list = (STREAM_SAVER *)NULL;

void
push_stream (reset_lineno)
     int reset_lineno;
{
  STREAM_SAVER *saver = (STREAM_SAVER *)xmalloc (sizeof (STREAM_SAVER));

  xbcopy ((char *)&bash_input, (char *)&(saver->bash_input), sizeof (BASH_INPUT));

#if defined (BUFFERED_INPUT)
  saver->bstream = (BUFFERED_STREAM *)NULL;
  /* If we have a buffered stream, clear out buffers[fd]. */
  if (bash_input.type == st_bstream && bash_input.location.buffered_fd >= 0)
    saver->bstream = set_buffered_stream (bash_input.location.buffered_fd,
    					  (BUFFERED_STREAM *)NULL);
#endif /* BUFFERED_INPUT */

  saver->line = line_number;
  bash_input.name = (char *)NULL;
  saver->next = stream_list;
  stream_list = saver;
  EOF_Reached = 0;
  if (reset_lineno)
    line_number = 0;
}

void
pop_stream ()
{
  if (!stream_list)
    EOF_Reached = 1;
  else
    {
      STREAM_SAVER *saver = stream_list;

      EOF_Reached = 0;
      stream_list = stream_list->next;

      init_yy_io (saver->bash_input.getter,
		  saver->bash_input.ungetter,
		  saver->bash_input.type,
		  saver->bash_input.name,
		  saver->bash_input.location);

#if defined (BUFFERED_INPUT)
      /* If we have a buffered stream, restore buffers[fd]. */
      /* If the input file descriptor was changed while this was on the
	 save stack, update the buffered fd to the new file descriptor and
	 re-establish the buffer <-> bash_input fd correspondence. */
      if (bash_input.type == st_bstream && bash_input.location.buffered_fd >= 0)
	{
	  if (bash_input_fd_changed)
	    {
	      bash_input_fd_changed = 0;
	      if (default_buffered_input >= 0)
		{
		  bash_input.location.buffered_fd = default_buffered_input;
		  saver->bstream->b_fd = default_buffered_input;
		  SET_CLOSE_ON_EXEC (default_buffered_input);
		}
	    }
	  /* XXX could free buffered stream returned as result here. */
	  set_buffered_stream (bash_input.location.buffered_fd, saver->bstream);
	}
#endif /* BUFFERED_INPUT */

      line_number = saver->line;

      FREE (saver->bash_input.name);
      free (saver);
    }
}

/* Return 1 if a stream of type TYPE is saved on the stack. */
int
stream_on_stack (type)
     enum stream_type type;
{
  register STREAM_SAVER *s;

  for (s = stream_list; s; s = s->next)
    if (s->bash_input.type == type)
      return 1;
  return 0;
}

/* Save the current token state and return it in a malloced array. */
int *
save_token_state ()
{
  int *ret;

  ret = (int *)xmalloc (4 * sizeof (int));
  ret[0] = last_read_token;
  ret[1] = token_before_that;
  ret[2] = two_tokens_ago;
  ret[3] = current_token;
  return ret;
}

void
restore_token_state (ts)
     int *ts;
{
  if (ts == 0)
    return;
  last_read_token = ts[0];
  token_before_that = ts[1];
  two_tokens_ago = ts[2];
  current_token = ts[3];
}

/*
 * This is used to inhibit alias expansion and reserved word recognition
 * inside case statement pattern lists.  A `case statement pattern list' is:
 *
 *	everything between the `in' in a `case word in' and the next ')'
 *	or `esac'
 *	everything between a `;;' and the next `)' or `esac'
 */

#if defined (ALIAS) || defined (DPAREN_ARITHMETIC)

#define END_OF_ALIAS 0

/*
 * Pseudo-global variables used in implementing token-wise alias expansion.
 */

/*
 * Pushing and popping strings.  This works together with shell_getc to
 * implement alias expansion on a per-token basis.
 */

#define PSH_ALIAS	0x01
#define PSH_DPAREN	0x02
#define PSH_SOURCE	0x04

typedef struct string_saver {
  struct string_saver *next;
  int expand_alias;  /* Value to set expand_alias to when string is popped. */
  char *saved_line;
#if defined (ALIAS)
  alias_t *expander;   /* alias that caused this line to be pushed. */
#endif
  size_t saved_line_size, saved_line_index;
  int saved_line_terminator;
  int flags;
} STRING_SAVER;

STRING_SAVER *pushed_string_list = (STRING_SAVER *)NULL;

/*
 * Push the current shell_input_line onto a stack of such lines and make S
 * the current input.  Used when expanding aliases.  EXPAND is used to set
 * the value of expand_next_token when the string is popped, so that the
 * word after the alias in the original line is handled correctly when the
 * alias expands to multiple words.  TOKEN is the token that was expanded
 * into S; it is saved and used to prevent infinite recursive expansion.
 */
static void
push_string (s, expand, ap)
     char *s;
     int expand;
     alias_t *ap;
{
  STRING_SAVER *temp = (STRING_SAVER *)xmalloc (sizeof (STRING_SAVER));

  temp->expand_alias = expand;
  temp->saved_line = shell_input_line;
  temp->saved_line_size = shell_input_line_size;
  temp->saved_line_index = shell_input_line_index;
  temp->saved_line_terminator = shell_input_line_terminator;
  temp->flags = 0;
#if defined (ALIAS)
  temp->expander = ap;
  if (ap)
    temp->flags = PSH_ALIAS;
#endif
  temp->next = pushed_string_list;
  pushed_string_list = temp;

#if defined (ALIAS)
  if (ap)
    ap->flags |= AL_BEINGEXPANDED;
#endif

  shell_input_line = s;
  shell_input_line_size = STRLEN (s);
  shell_input_line_index = 0;
  shell_input_line_terminator = '\0';
#if 0
  parser_state &= ~PST_ALEXPNEXT;	/* XXX */
#endif

  set_line_mbstate ();
}

/*
 * Make the top of the pushed_string stack be the current shell input.
 * Only called when there is something on the stack.  Called from shell_getc
 * when it thinks it has consumed the string generated by an alias expansion
 * and needs to return to the original input line.
 */
static void
pop_string ()
{
  STRING_SAVER *t;

  FREE (shell_input_line);
  shell_input_line = pushed_string_list->saved_line;
  shell_input_line_index = pushed_string_list->saved_line_index;
  shell_input_line_size = pushed_string_list->saved_line_size;
  shell_input_line_terminator = pushed_string_list->saved_line_terminator;

  if (pushed_string_list->expand_alias)
    parser_state |= PST_ALEXPNEXT;
  else
    parser_state &= ~PST_ALEXPNEXT;

  t = pushed_string_list;
  pushed_string_list = pushed_string_list->next;

#if defined (ALIAS)
  if (t->expander)
    t->expander->flags &= ~AL_BEINGEXPANDED;
#endif

  free ((char *)t);

  set_line_mbstate ();
}

static void
free_string_list ()
{
  register STRING_SAVER *t, *t1;

  for (t = pushed_string_list; t; )
    {
      t1 = t->next;
      FREE (t->saved_line);
#if defined (ALIAS)
      if (t->expander)
	t->expander->flags &= ~AL_BEINGEXPANDED;
#endif
      free ((char *)t);
      t = t1;
    }
  pushed_string_list = (STRING_SAVER *)NULL;
}

#endif /* ALIAS || DPAREN_ARITHMETIC */

void
free_pushed_string_input ()
{
#if defined (ALIAS) || defined (DPAREN_ARITHMETIC)
  free_string_list ();
#endif
}

int
parser_expanding_alias ()
{
  return (expanding_alias ());
}

void
parser_save_alias ()
{
#if defined (ALIAS) || defined (DPAREN_ARITHMETIC)
  push_string ((char *)NULL, 0, (alias_t *)NULL);
  pushed_string_list->flags = PSH_SOURCE;	/* XXX - for now */
#else
  ;
#endif
}

void
parser_restore_alias ()
{
#if defined (ALIAS) || defined (DPAREN_ARITHMETIC)
  if (pushed_string_list)
    pop_string ();
#else
  ;
#endif
}

/* Return a line of text, taken from wherever yylex () reads input.
   If there is no more input, then we return NULL.  If REMOVE_QUOTED_NEWLINE
   is non-zero, we remove unquoted \<newline> pairs.  This is used by
   read_secondary_line to read here documents. */
static char *
read_a_line (remove_quoted_newline)
     int remove_quoted_newline;
{
  static char *line_buffer = (char *)NULL;
  static int buffer_size = 0;
  int indx, c, peekc, pass_next;

#if defined (READLINE)
  if (no_line_editing && SHOULD_PROMPT ())
#else
  if (SHOULD_PROMPT ())
#endif
    print_prompt ();

  pass_next = indx = 0;
  while (1)
    {
      /* Allow immediate exit if interrupted during input. */
      QUIT;

      c = yy_getc ();

      /* Ignore null bytes in input. */
      if (c == 0)
	{
#if 0
	  internal_warning ("read_a_line: ignored null byte in input");
#endif
	  continue;
	}

      /* If there is no more input, then we return NULL. */
      if (c == EOF)
	{
	  if (interactive && bash_input.type == st_stream)
	    clearerr (stdin);
	  if (indx == 0)
	    return ((char *)NULL);
	  c = '\n';
	}

      /* `+2' in case the final character in the buffer is a newline. */
      RESIZE_MALLOCED_BUFFER (line_buffer, indx, 2, buffer_size, 128);

      /* IF REMOVE_QUOTED_NEWLINES is non-zero, we are reading a
	 here document with an unquoted delimiter.  In this case,
	 the line will be expanded as if it were in double quotes.
	 We allow a backslash to escape the next character, but we
	 need to treat the backslash specially only if a backslash
	 quoting a backslash-newline pair appears in the line. */
      if (pass_next)
	{
	  line_buffer[indx++] = c;
	  pass_next = 0;
	}
      else if (c == '\\' && remove_quoted_newline)
	{
	  QUIT;
	  peekc = yy_getc ();
	  if (peekc == '\n')
	    {
	      line_number++;
	      continue;	/* Make the unquoted \<newline> pair disappear. */
	    }
	  else
	    {
	      yy_ungetc (peekc);
	      pass_next = 1;
	      line_buffer[indx++] = c;		/* Preserve the backslash. */
	    }
	}
      else
	line_buffer[indx++] = c;

      if (c == '\n')
	{
	  line_buffer[indx] = '\0';
	  return (line_buffer);
	}
    }
}

/* Return a line as in read_a_line (), but insure that the prompt is
   the secondary prompt.  This is used to read the lines of a here
   document.  REMOVE_QUOTED_NEWLINE is non-zero if we should remove
   newlines quoted with backslashes while reading the line.  It is
   non-zero unless the delimiter of the here document was quoted. */
char *
read_secondary_line (remove_quoted_newline)
     int remove_quoted_newline;
{
  char *ret;
  int n, c;

  prompt_string_pointer = &ps2_prompt;
  if (SHOULD_PROMPT())
    prompt_again ();
  ret = read_a_line (remove_quoted_newline);
#if defined (HISTORY)
  if (ret && remember_on_history && (parser_state & PST_HEREDOC))
    {
      /* To make adding the the here-document body right, we need to rely
	 on history_delimiting_chars() returning \n for the first line of
	 the here-document body and the null string for the second and
	 subsequent lines, so we avoid double newlines.
	 current_command_line_count == 2 for the first line of the body. */

      current_command_line_count++;
      maybe_add_history (ret);
    }
#endif /* HISTORY */
  return ret;
}

/* **************************************************************** */
/*								    */
/*				YYLEX ()			    */
/*								    */
/* **************************************************************** */

/* Reserved words.  These are only recognized as the first word of a
   command. */
STRING_INT_ALIST word_token_alist[] = {
  { "if", IF },
  { "then", THEN },
  { "else", ELSE },
  { "elif", ELIF },
  { "fi", FI },
  { "case", CASE },
  { "esac", ESAC },
  { "for", FOR },
#if defined (SELECT_COMMAND)
  { "select", SELECT },
#endif
  { "while", WHILE },
  { "until", UNTIL },
  { "do", DO },
  { "done", DONE },
  { "in", IN },
  { "function", FUNCTION },
#if defined (COMMAND_TIMING)
  { "time", TIME },
#endif
  { "{", '{' },
  { "}", '}' },
  { "!", BANG },
#if defined (COND_COMMAND)
  { "[[", COND_START },
  { "]]", COND_END },
#endif
#if defined (COPROCESS_SUPPORT)
  { "coproc", COPROC },
#endif
  { (char *)NULL, 0}
};

/* other tokens that can be returned by read_token() */
STRING_INT_ALIST other_token_alist[] = {
  /* Multiple-character tokens with special values */
  { "--", TIMEIGN },
  { "-p", TIMEOPT },
  { "&&", AND_AND },
  { "||", OR_OR },
  { ">>", GREATER_GREATER },
  { "<<", LESS_LESS },
  { "<&", LESS_AND },
  { ">&", GREATER_AND },
  { ";;", SEMI_SEMI },
  { ";&", SEMI_AND },
  { ";;&", SEMI_SEMI_AND },
  { "<<-", LESS_LESS_MINUS },
  { "<<<", LESS_LESS_LESS },
  { "&>", AND_GREATER },
  { "&>>", AND_GREATER_GREATER },
  { "<>", LESS_GREATER },
  { ">|", GREATER_BAR },
  { "|&", BAR_AND },
  { "EOF", yacc_EOF },
  /* Tokens whose value is the character itself */
  { ">", '>' },
  { "<", '<' },
  { "-", '-' },
  { "{", '{' },
  { "}", '}' },
  { ";", ';' },
  { "(", '(' },
  { ")", ')' },
  { "|", '|' },
  { "&", '&' },
  { "newline", '\n' },
  { (char *)NULL, 0}
};

/* others not listed here:
	WORD			look at yylval.word
	ASSIGNMENT_WORD		look at yylval.word
	NUMBER			look at yylval.number
	ARITH_CMD		look at yylval.word_list
	ARITH_FOR_EXPRS		look at yylval.word_list
	COND_CMD		look at yylval.command
*/

/* These are used by read_token_word, but appear up here so that shell_getc
   can use them to decide when to add otherwise blank lines to the history. */

/* The primary delimiter stack. */
struct dstack dstack = {  (char *)NULL, 0, 0 };

/* A temporary delimiter stack to be used when decoding prompt strings.
   This is needed because command substitutions in prompt strings (e.g., PS2)
   can screw up the parser's quoting state. */
static struct dstack temp_dstack = { (char *)NULL, 0, 0 };

/* Macro for accessing the top delimiter on the stack.  Returns the
   delimiter or zero if none. */
#define current_delimiter(ds) \
  (ds.delimiter_depth ? ds.delimiters[ds.delimiter_depth - 1] : 0)

#define push_delimiter(ds, character) \
  do \
    { \
      if (ds.delimiter_depth + 2 > ds.delimiter_space) \
	ds.delimiters = (char *)xrealloc \
	  (ds.delimiters, (ds.delimiter_space += 10) * sizeof (char)); \
      ds.delimiters[ds.delimiter_depth] = character; \
      ds.delimiter_depth++; \
    } \
  while (0)

#define pop_delimiter(ds)	ds.delimiter_depth--

/* Return the next shell input character.  This always reads characters
   from shell_input_line; when that line is exhausted, it is time to
   read the next line.  This is called by read_token when the shell is
   processing normal command input. */

/* This implements one-character lookahead/lookbehind across physical input
   lines, to avoid something being lost because it's pushed back with
   shell_ungetc when we're at the start of a line. */
static int eol_ungetc_lookahead = 0;

static int
shell_getc (remove_quoted_newline)
     int remove_quoted_newline;
{
  register int i;
  int c, truncating;
  unsigned char uc;

  QUIT;

  if (sigwinch_received)
    {
      sigwinch_received = 0;
      get_new_window_size (0, (int *)0, (int *)0);
    }
      
  if (eol_ungetc_lookahead)
    {
      c = eol_ungetc_lookahead;
      eol_ungetc_lookahead = 0;
      return (c);
    }

#if defined (ALIAS) || defined (DPAREN_ARITHMETIC)
  /* If shell_input_line[shell_input_line_index] == 0, but there is
     something on the pushed list of strings, then we don't want to go
     off and get another line.  We let the code down below handle it. */

  if (!shell_input_line || ((!shell_input_line[shell_input_line_index]) &&
			    (pushed_string_list == (STRING_SAVER *)NULL)))
#else /* !ALIAS && !DPAREN_ARITHMETIC */
  if (!shell_input_line || !shell_input_line[shell_input_line_index])
#endif /* !ALIAS && !DPAREN_ARITHMETIC */
    {
      line_number++;

      /* Let's not let one really really long line blow up memory allocation */
      if (shell_input_line && shell_input_line_size >= 32768)
	{
	  free (shell_input_line);
	  shell_input_line = 0;
	  shell_input_line_size = 0;
	}

    restart_read:

      /* Allow immediate exit if interrupted during input. */
      QUIT;

      i = truncating = 0;
      shell_input_line_terminator = 0;

      /* If the shell is interatctive, but not currently printing a prompt
         (interactive_shell && interactive == 0), we don't want to print
         notifies or cleanup the jobs -- we want to defer it until we do
         print the next prompt. */
      if (interactive_shell == 0 || SHOULD_PROMPT())
	{
#if defined (JOB_CONTROL)
      /* This can cause a problem when reading a command as the result
	 of a trap, when the trap is called from flush_child.  This call
	 had better not cause jobs to disappear from the job table in
	 that case, or we will have big trouble. */
	  notify_and_cleanup ();
#else /* !JOB_CONTROL */
	  cleanup_dead_jobs ();
#endif /* !JOB_CONTROL */
	}

#if defined (READLINE)
      if (no_line_editing && SHOULD_PROMPT())
#else
      if (SHOULD_PROMPT())
#endif
	print_prompt ();

      if (bash_input.type == st_stream)
	clearerr (stdin);

      while (1)
	{
	  c = yy_getc ();

	  /* Allow immediate exit if interrupted during input. */
	  QUIT;

	  if (c == '\0')
	    {
#if 0
	      internal_warning ("shell_getc: ignored null byte in input");
#endif
	      continue;
	    }

	  /* Theoretical overflow */
	  /* If we can't put 256 bytes more into the buffer, allocate
	     everything we can and fill it as full as we can. */
	  /* XXX - we ignore rest of line using `truncating' flag */
	  if (shell_input_line_size > (SIZE_MAX - 256))
	    {
	      size_t n;

	      n = SIZE_MAX - i;	/* how much more can we put into the buffer? */
	      if (n <= 2)	/* we have to save 1 for the newline added below */
		{
		  if (truncating == 0)
		    internal_warning("shell_getc: shell_input_line_size (%zu) exceeds SIZE_MAX (%llu): line truncated", shell_input_line_size, SIZE_MAX);
		  shell_input_line[i] = '\0';
		  truncating = 1;
		}
	      if (shell_input_line_size < SIZE_MAX)
		{
		  shell_input_line_size = SIZE_MAX;
		  shell_input_line = xrealloc (shell_input_line, shell_input_line_size);
		}
	    }
	  else
	    RESIZE_MALLOCED_BUFFER (shell_input_line, i, 2, shell_input_line_size, 256);

	  if (c == EOF)
	    {
	      if (bash_input.type == st_stream)
		clearerr (stdin);

	      if (i == 0)
		shell_input_line_terminator = EOF;

	      shell_input_line[i] = '\0';
	      break;
	    }

	  if (truncating == 0 || c == '\n')
	    shell_input_line[i++] = c;

	  if (c == '\n')
	    {
	      shell_input_line[--i] = '\0';
	      current_command_line_count++;
	      break;
	    }
	}

      shell_input_line_index = 0;
      shell_input_line_len = i;		/* == strlen (shell_input_line) */

      set_line_mbstate ();

#if defined (HISTORY)
      if (remember_on_history && shell_input_line && shell_input_line[0])
	{
	  char *expansions;
#  if defined (BANG_HISTORY)
	  int old_hist;

	  /* If the current delimiter is a single quote, we should not be
	     performing history expansion, even if we're on a different
	     line from the original single quote. */
	  old_hist = history_expansion_inhibited;
	  if (current_delimiter (dstack) == '\'')
	    history_expansion_inhibited = 1;
#  endif
	  expansions = pre_process_line (shell_input_line, 1, 1);
#  if defined (BANG_HISTORY)
	  history_expansion_inhibited = old_hist;
#  endif
	  if (expansions != shell_input_line)
	    {
	      free (shell_input_line);
	      shell_input_line = expansions;
	      shell_input_line_len = shell_input_line ?
					strlen (shell_input_line) : 0;
	      if (shell_input_line_len == 0)
		current_command_line_count--;

	      /* We have to force the xrealloc below because we don't know
		 the true allocated size of shell_input_line anymore. */
	      shell_input_line_size = shell_input_line_len;

	      set_line_mbstate ();
	    }
	}
      /* Try to do something intelligent with blank lines encountered while
	 entering multi-line commands.  XXX - this is grotesque */
      else if (remember_on_history && shell_input_line &&
	       shell_input_line[0] == '\0' &&
	       current_command_line_count > 1)
	{
	  if (current_delimiter (dstack))
	    /* We know shell_input_line[0] == 0 and we're reading some sort of
	       quoted string.  This means we've got a line consisting of only
	       a newline in a quoted string.  We want to make sure this line
	       gets added to the history. */
	    maybe_add_history (shell_input_line);
	  else
	    {
	      char *hdcs;
	      hdcs = history_delimiting_chars (shell_input_line);
	      if (hdcs && hdcs[0] == ';')
		maybe_add_history (shell_input_line);
	    }
	}

#endif /* HISTORY */

      if (shell_input_line)
	{
	  /* Lines that signify the end of the shell's input should not be
	     echoed.  We should not echo lines while parsing command
	     substitutions with recursive calls into the parsing engine; those
	     should only be echoed once when we read the word.  That is the
	     reason for the test against shell_eof_token, which is set to a
	     right paren when parsing the contents of command substitutions. */
	  if (echo_input_at_read && (shell_input_line[0] ||
				       shell_input_line_terminator != EOF) &&
				     shell_eof_token == 0)
	    fprintf (stderr, "%s\n", shell_input_line);
	}
      else
	{
	  shell_input_line_size = 0;
	  prompt_string_pointer = &current_prompt_string;
	  if (SHOULD_PROMPT ())
	    prompt_again ();
	  goto restart_read;
	}

      /* Add the newline to the end of this string, iff the string does
	 not already end in an EOF character.  */
      if (shell_input_line_terminator != EOF)
	{
	  if (shell_input_line_size < SIZE_MAX-3 && (shell_input_line_len+3 > shell_input_line_size))
	    shell_input_line = (char *)xrealloc (shell_input_line,
					1 + (shell_input_line_size += 2));

	  shell_input_line[shell_input_line_len] = '\n';
	  shell_input_line[shell_input_line_len + 1] = '\0';

	  set_line_mbstate ();
	}
    }

next_alias_char:
  uc = shell_input_line[shell_input_line_index];

  if (uc)
    shell_input_line_index++;

#if defined (ALIAS) || defined (DPAREN_ARITHMETIC)
  /* If UC is NULL, we have reached the end of the current input string.  If
     pushed_string_list is non-empty, it's time to pop to the previous string
     because we have fully consumed the result of the last alias expansion.
     Do it transparently; just return the next character of the string popped
     to. */
  /* If pushed_string_list != 0 but pushed_string_list->expander == 0 (not
     currently tested) and the flags value is not PSH_SOURCE, we are not
     parsing an alias, we have just saved one (push_string, when called by
     the parse_dparen code) In this case, just go on as well.  The PSH_SOURCE
     case is handled below. */
pop_alias:
  if (uc == 0 && pushed_string_list && pushed_string_list->flags != PSH_SOURCE)
    {
      pop_string ();
      uc = shell_input_line[shell_input_line_index];
      if (uc)
	shell_input_line_index++;
    }
#endif /* ALIAS || DPAREN_ARITHMETIC */

  if MBTEST(uc == '\\' && remove_quoted_newline && shell_input_line[shell_input_line_index] == '\n')
    {
	if (SHOULD_PROMPT ())
	  prompt_again ();
	line_number++;
	/* What do we do here if we're expanding an alias whose definition
	   includes an escaped newline?  If that's the last character in the
	   alias expansion, we just pop the pushed string list (recall that
	   we inhibit the appending of a space in mk_alexpansion() if newline
	   is the last character).  If it's not the last character, we need
	   to consume the quoted newline and move to the next character in
	   the expansion. */
#if defined (ALIAS)
	if (expanding_alias () && shell_input_line[shell_input_line_index+1] == '\0')
	  {
	    uc = 0;
	    goto pop_alias;
	  }
	else if (expanding_alias () && shell_input_line[shell_input_line_index+1] != '\0')
	  {
	    shell_input_line_index++;	/* skip newline */
	    goto next_alias_char;	/* and get next character */
	  }
	else
#endif 
	  goto restart_read;
    }

  if (uc == 0 && shell_input_line_terminator == EOF)
    return ((shell_input_line_index != 0) ? '\n' : EOF);

#if defined (ALIAS) || defined (DPAREN_ARITHMETIC)
  /* We already know that we are not parsing an alias expansion because of the
     check for expanding_alias() above.  This knows how parse_and_execute
     handles switching to st_string input while an alias is being expanded,
     hence the check for pushed_string_list without pushed_string_list->expander
     and the check for PSH_SOURCE as pushed_string_list->flags.
     parse_and_execute and parse_string both change the input type to st_string
     and place the string to be parsed and executed into location.string, so
     we should not stop reading that until the pointer is '\0'.
     The check for shell_input_line_terminator may be superfluous.

     This solves the problem of `.' inside a multi-line alias with embedded
     newlines executing things out of order. */
  if (uc == 0 && bash_input.type == st_string && *bash_input.location.string &&
      pushed_string_list && pushed_string_list->flags == PSH_SOURCE &&
      shell_input_line_terminator == 0)
    {
      shell_input_line_index = 0;
      goto restart_read;
    }
#endif

  return (uc);
}

/* Put C back into the input for the shell.  This might need changes for
   HANDLE_MULTIBYTE around EOLs.  Since we (currently) never push back a
   character different than we read, shell_input_line_property doesn't need
   to change when manipulating shell_input_line.  The define for
   last_shell_getc_is_singlebyte should take care of it, though. */
static void
shell_ungetc (c)
     int c;
{
  if (shell_input_line && shell_input_line_index)
    shell_input_line[--shell_input_line_index] = c;
  else
    eol_ungetc_lookahead = c;
}

char *
parser_remaining_input ()
{
  if (shell_input_line == 0)
    return 0;
  if (shell_input_line_index < 0 || shell_input_line_index >= shell_input_line_len)
    return '\0';	/* XXX */
  return (shell_input_line + shell_input_line_index);
}

#ifdef INCLUDE_UNUSED
/* Back the input pointer up by one, effectively `ungetting' a character. */
static void
shell_ungetchar ()
{
  if (shell_input_line && shell_input_line_index)
    shell_input_line_index--;
}
#endif

/* Discard input until CHARACTER is seen, then push that character back
   onto the input stream. */
static void
discard_until (character)
     int character;
{
  int c;

  while ((c = shell_getc (0)) != EOF && c != character)
    ;

  if (c != EOF)
    shell_ungetc (c);
}

void
execute_variable_command (command, vname)
     char *command, *vname;
{
  char *last_lastarg;
  sh_parser_state_t ps;

  save_parser_state (&ps);
  last_lastarg = get_string_value ("_");
  if (last_lastarg)
    last_lastarg = savestring (last_lastarg);

  parse_and_execute (savestring (command), vname, SEVAL_NONINT|SEVAL_NOHIST);

  restore_parser_state (&ps);
  bind_variable ("_", last_lastarg, 0);
  FREE (last_lastarg);

  if (token_to_read == '\n')	/* reset_parser was called */
    token_to_read = 0;
}

/* Place to remember the token.  We try to keep the buffer
   at a reasonable size, but it can grow. */
static char *token = (char *)NULL;

/* Current size of the token buffer. */
static int token_buffer_size;

/* Command to read_token () explaining what we want it to do. */
#define READ 0
#define RESET 1
#define prompt_is_ps1 \
      (!prompt_string_pointer || prompt_string_pointer == &ps1_prompt)

/* Function for yyparse to call.  yylex keeps track of
   the last two tokens read, and calls read_token.  */
static int
yylex ()
{
  if (interactive && (current_token == 0 || current_token == '\n'))
    {
      /* Before we print a prompt, we might have to check mailboxes.
	 We do this only if it is time to do so. Notice that only here
	 is the mail alarm reset; nothing takes place in check_mail ()
	 except the checking of mail.  Please don't change this. */
      if (prompt_is_ps1 && parse_and_execute_level == 0 && time_to_check_mail ())
	{
	  check_mail ();
	  reset_mail_timer ();
	}

      /* Avoid printing a prompt if we're not going to read anything, e.g.
	 after resetting the parser with read_token (RESET). */
      if (token_to_read == 0 && SHOULD_PROMPT ())
	prompt_again ();
    }

  two_tokens_ago = token_before_that;
  token_before_that = last_read_token;
  last_read_token = current_token;
  current_token = read_token (READ);

  if ((parser_state & PST_EOFTOKEN) && current_token == shell_eof_token)
    {
      current_token = yacc_EOF;
      if (bash_input.type == st_string)
	rewind_input_string ();
    }
  parser_state &= ~PST_EOFTOKEN;

  return (current_token);
}

/* When non-zero, we have read the required tokens
   which allow ESAC to be the next one read. */
static int esacs_needed_count;

static void
push_heredoc (r)
     REDIRECT *r;
{
  if (need_here_doc >= HEREDOC_MAX)
    {
      last_command_exit_value = EX_BADUSAGE;
      need_here_doc = 0;
      report_syntax_error (_("maximum here-document count exceeded"));
      reset_parser ();
      exit_shell (last_command_exit_value);
    }
  redir_stack[need_here_doc++] = r;
}

void
gather_here_documents ()
{
  int r;

  r = 0;
  while (need_here_doc > 0)
    {
      parser_state |= PST_HEREDOC;
      make_here_document (redir_stack[r++], line_number);
      parser_state &= ~PST_HEREDOC;
      need_here_doc--;
    }
}

/* When non-zero, an open-brace used to create a group is awaiting a close
   brace partner. */
static int open_brace_count;

#define command_token_position(token) \
  (((token) == ASSIGNMENT_WORD) || (parser_state&PST_REDIRLIST) || \
   ((token) != SEMI_SEMI && (token) != SEMI_AND && (token) != SEMI_SEMI_AND && reserved_word_acceptable(token)))

#define assignment_acceptable(token) \
  (command_token_position(token) && ((parser_state & PST_CASEPAT) == 0))

/* Check to see if TOKEN is a reserved word and return the token
   value if it is. */
#define CHECK_FOR_RESERVED_WORD(tok) \
  do { \
    if (!dollar_present && !quoted && \
	reserved_word_acceptable (last_read_token)) \
      { \
	int i; \
	for (i = 0; word_token_alist[i].word != (char *)NULL; i++) \
	  if (STREQ (tok, word_token_alist[i].word)) \
	    { \
	      if ((parser_state & PST_CASEPAT) && (word_token_alist[i].token != ESAC)) \
		break; \
	      if (word_token_alist[i].token == TIME && time_command_acceptable () == 0) \
		break; \
	      if (word_token_alist[i].token == ESAC) \
		parser_state &= ~(PST_CASEPAT|PST_CASESTMT); \
	      else if (word_token_alist[i].token == CASE) \
		parser_state |= PST_CASESTMT; \
	      else if (word_token_alist[i].token == COND_END) \
		parser_state &= ~(PST_CONDCMD|PST_CONDEXPR); \
	      else if (word_token_alist[i].token == COND_START) \
		parser_state |= PST_CONDCMD; \
	      else if (word_token_alist[i].token == '{') \
		open_brace_count++; \
	      else if (word_token_alist[i].token == '}' && open_brace_count) \
		open_brace_count--; \
	      return (word_token_alist[i].token); \
	    } \
      } \
  } while (0)

#if defined (ALIAS)

    /* OK, we have a token.  Let's try to alias expand it, if (and only if)
       it's eligible.

       It is eligible for expansion if EXPAND_ALIASES is set, and
       the token is unquoted and the last token read was a command
       separator (or expand_next_token is set), and we are currently
       processing an alias (pushed_string_list is non-empty) and this
       token is not the same as the current or any previously
       processed alias.

       Special cases that disqualify:
	 In a pattern list in a case statement (parser_state & PST_CASEPAT). */

static char *
mk_alexpansion (s)
     char *s;
{
  int l;
  char *r;

  l = strlen (s);
  r = xmalloc (l + 2);
  strcpy (r, s);
  /* If the last character in the alias is a newline, don't add a trailing
     space to the expansion.  Works with shell_getc above. */
  if (r[l - 1] != ' ' && r[l - 1] != '\n')
    r[l++] = ' ';
  r[l] = '\0';
  return r;
}

static int
alias_expand_token (tokstr)
     char *tokstr;
{
  char *expanded;
  alias_t *ap;

  if (((parser_state & PST_ALEXPNEXT) || command_token_position (last_read_token)) &&
	(parser_state & PST_CASEPAT) == 0)
    {
      ap = find_alias (tokstr);

      /* Currently expanding this token. */
      if (ap && (ap->flags & AL_BEINGEXPANDED))
	return (NO_EXPANSION);

      /* mk_alexpansion puts an extra space on the end of the alias expansion,
         so the lookahead by the parser works right.  If this gets changed,
         make sure the code in shell_getc that deals with reaching the end of
         an expanded alias is changed with it. */
      expanded = ap ? mk_alexpansion (ap->value) : (char *)NULL;

      if (expanded)
	{
	  push_string (expanded, ap->flags & AL_EXPANDNEXT, ap);
	  return (RE_READ_TOKEN);
	}
      else
	/* This is an eligible token that does not have an expansion. */
	return (NO_EXPANSION);
    }
  return (NO_EXPANSION);
}
#endif /* ALIAS */

static int
time_command_acceptable ()
{
#if defined (COMMAND_TIMING)
  int i;

  if (posixly_correct && shell_compatibility_level > 41)
    {
      /* Quick check of the rest of the line to find the next token.  If it
	 begins with a `-', Posix says to not return `time' as the token.
	 This was interp 267. */
      i = shell_input_line_index;
      while (i < shell_input_line_len && (shell_input_line[i] == ' ' || shell_input_line[i] == '\t'))
        i++;
      if (shell_input_line[i] == '-')
	return 0;
    }

  switch (last_read_token)
    {
    case 0:
    case ';':
    case '\n':
    case AND_AND:
    case OR_OR:
    case '&':
    case DO:
    case THEN:
    case ELSE:
    case '{':		/* } */
    case '(':		/* ) */
    case BANG:		/* ! time pipeline */
    case TIME:		/* time time pipeline */
    case TIMEOPT:	/* time -p time pipeline */
    case TIMEIGN:	/* time -p -- ... */
      return 1;
    default:
      return 0;
    }
#else
  return 0;
#endif /* COMMAND_TIMING */
}

/* Handle special cases of token recognition:
	IN is recognized if the last token was WORD and the token
	before that was FOR or CASE or SELECT.

	DO is recognized if the last token was WORD and the token
	before that was FOR or SELECT.

	ESAC is recognized if the last token caused `esacs_needed_count'
	to be set

	`{' is recognized if the last token as WORD and the token
	before that was FUNCTION, or if we just parsed an arithmetic
	`for' command.

	`}' is recognized if there is an unclosed `{' present.

	`-p' is returned as TIMEOPT if the last read token was TIME.
	`--' is returned as TIMEIGN if the last read token was TIMEOPT.

	']]' is returned as COND_END if the parser is currently parsing
	a conditional expression ((parser_state & PST_CONDEXPR) != 0)

	`time' is returned as TIME if and only if it is immediately
	preceded by one of `;', `\n', `||', `&&', or `&'.
*/

static int
special_case_tokens (tokstr)
     char *tokstr;
{
  if ((last_read_token == WORD) &&
#if defined (SELECT_COMMAND)
      ((token_before_that == FOR) || (token_before_that == CASE) || (token_before_that == SELECT)) &&
#else
      ((token_before_that == FOR) || (token_before_that == CASE)) &&
#endif
      (tokstr[0] == 'i' && tokstr[1] == 'n' && tokstr[2] == 0))
    {
      if (token_before_that == CASE)
	{
	  parser_state |= PST_CASEPAT;
	  esacs_needed_count++;
	}
      return (IN);
    }

  if (last_read_token == WORD &&
#if defined (SELECT_COMMAND)
      (token_before_that == FOR || token_before_that == SELECT) &&
#else
      (token_before_that == FOR) &&
#endif
      (tokstr[0] == 'd' && tokstr[1] == 'o' && tokstr[2] == '\0'))
    return (DO);

  /* Ditto for ESAC in the CASE case.
     Specifically, this handles "case word in esac", which is a legal
     construct, certainly because someone will pass an empty arg to the
     case construct, and we don't want it to barf.  Of course, we should
     insist that the case construct has at least one pattern in it, but
     the designers disagree. */
  if (esacs_needed_count)
    {
      esacs_needed_count--;
      if (STREQ (tokstr, "esac"))
	{
	  parser_state &= ~PST_CASEPAT;
	  return (ESAC);
	}
    }

  /* The start of a shell function definition. */
  if (parser_state & PST_ALLOWOPNBRC)
    {
      parser_state &= ~PST_ALLOWOPNBRC;
      if (tokstr[0] == '{' && tokstr[1] == '\0')		/* } */
	{
	  open_brace_count++;
	  function_bstart = line_number;
	  return ('{');					/* } */
	}
    }

  /* We allow a `do' after a for ((...)) without an intervening
     list_terminator */
  if (last_read_token == ARITH_FOR_EXPRS && tokstr[0] == 'd' && tokstr[1] == 'o' && !tokstr[2])
    return (DO);
  if (last_read_token == ARITH_FOR_EXPRS && tokstr[0] == '{' && tokstr[1] == '\0')	/* } */
    {
      open_brace_count++;
      return ('{');			/* } */
    }

  if (open_brace_count && reserved_word_acceptable (last_read_token) && tokstr[0] == '}' && !tokstr[1])
    {
      open_brace_count--;		/* { */
      return ('}');
    }

#if defined (COMMAND_TIMING)
  /* Handle -p after `time'. */
  if (last_read_token == TIME && tokstr[0] == '-' && tokstr[1] == 'p' && !tokstr[2])
    return (TIMEOPT);
  /* Handle -- after `time -p'. */
  if (last_read_token == TIMEOPT && tokstr[0] == '-' && tokstr[1] == '-' && !tokstr[2])
    return (TIMEIGN);
#endif

#if defined (COND_COMMAND) /* [[ */
  if ((parser_state & PST_CONDEXPR) && tokstr[0] == ']' && tokstr[1] == ']' && tokstr[2] == '\0')
    return (COND_END);
#endif

  return (-1);
}

/* Called from shell.c when Control-C is typed at top level.  Or
   by the error rule at top level. */
void
reset_parser ()
{
  dstack.delimiter_depth = 0;	/* No delimiters found so far. */
  open_brace_count = 0;

#if defined (EXTENDED_GLOB)
  /* Reset to global value of extended glob */
  if (parser_state & PST_EXTPAT)
    extended_glob = global_extglob;
#endif

  parser_state = 0;

#if defined (ALIAS) || defined (DPAREN_ARITHMETIC)
  if (pushed_string_list)
    free_string_list ();
#endif /* ALIAS || DPAREN_ARITHMETIC */

  if (shell_input_line)
    {
      free (shell_input_line);
      shell_input_line = (char *)NULL;
      shell_input_line_size = shell_input_line_index = 0;
    }

  FREE (word_desc_to_read);
  word_desc_to_read = (WORD_DESC *)NULL;

  eol_ungetc_lookahead = 0;

  current_token = '\n';		/* XXX */
  last_read_token = '\n';
  token_to_read = '\n';
}

/* Read the next token.  Command can be READ (normal operation) or
   RESET (to normalize state). */
static int
read_token (command)
     int command;
{
  int character;		/* Current character. */
  int peek_char;		/* Temporary look-ahead character. */
  int result;			/* The thing to return. */

  if (command == RESET)
    {
      reset_parser ();
      return ('\n');
    }

  if (token_to_read)
    {
      result = token_to_read;
      if (token_to_read == WORD || token_to_read == ASSIGNMENT_WORD)
	{
	  yylval.word = word_desc_to_read;
	  word_desc_to_read = (WORD_DESC *)NULL;
	}
      token_to_read = 0;
      return (result);
    }

#if defined (COND_COMMAND)
  if ((parser_state & (PST_CONDCMD|PST_CONDEXPR)) == PST_CONDCMD)
    {
      cond_lineno = line_number;
      parser_state |= PST_CONDEXPR;
      yylval.command = parse_cond_command ();
      if (cond_token != COND_END)
	{
	  cond_error ();
	  return (-1);
	}
      token_to_read = COND_END;
      parser_state &= ~(PST_CONDEXPR|PST_CONDCMD);
      return (COND_CMD);
    }
#endif

#if defined (ALIAS)
  /* This is a place to jump back to once we have successfully expanded a
     token with an alias and pushed the string with push_string () */
 re_read_token:
#endif /* ALIAS */

  /* Read a single word from input.  Start by skipping blanks. */
  while ((character = shell_getc (1)) != EOF && shellblank (character))
    ;

  if (character == EOF)
    {
      EOF_Reached = 1;
      return (yacc_EOF);
    }

  if MBTEST(character == '#' && (!interactive || interactive_comments))
    {
      /* A comment.  Discard until EOL or EOF, and then return a newline. */
      discard_until ('\n');
      shell_getc (0);
      character = '\n';	/* this will take the next if statement and return. */
    }

  if (character == '\n')
    {
      /* If we're about to return an unquoted newline, we can go and collect
	 the text of any pending here document. */
      if (need_here_doc)
	gather_here_documents ();

#if defined (ALIAS)
      parser_state &= ~PST_ALEXPNEXT;
#endif /* ALIAS */

      parser_state &= ~PST_ASSIGNOK;

      return (character);
    }

  if (parser_state & PST_REGEXP)
    goto tokword;

  /* Shell meta-characters. */
  if MBTEST(shellmeta (character) && ((parser_state & PST_DBLPAREN) == 0))
    {
#if defined (ALIAS)
      /* Turn off alias tokenization iff this character sequence would
	 not leave us ready to read a command. */
      if (character == '<' || character == '>')
	parser_state &= ~PST_ALEXPNEXT;
#endif /* ALIAS */

      parser_state &= ~PST_ASSIGNOK;

      peek_char = shell_getc (1);
      if (character == peek_char)
	{
	  switch (character)
	    {
	    case '<':
	      /* If '<' then we could be at "<<" or at "<<-".  We have to
		 look ahead one more character. */
	      peek_char = shell_getc (1);
	      if MBTEST(peek_char == '-')
		return (LESS_LESS_MINUS);
	      else if MBTEST(peek_char == '<')
		return (LESS_LESS_LESS);
	      else
		{
		  shell_ungetc (peek_char);
		  return (LESS_LESS);
		}

	    case '>':
	      return (GREATER_GREATER);

	    case ';':
	      parser_state |= PST_CASEPAT;
#if defined (ALIAS)
	      parser_state &= ~PST_ALEXPNEXT;
#endif /* ALIAS */

	      peek_char = shell_getc (1);
	      if MBTEST(peek_char == '&')
		return (SEMI_SEMI_AND);
	      else
		{
		  shell_ungetc (peek_char);
		  return (SEMI_SEMI);
		}

	    case '&':
	      return (AND_AND);

	    case '|':
	      return (OR_OR);

#if defined (DPAREN_ARITHMETIC) || defined (ARITH_FOR_COMMAND)
	    case '(':		/* ) */
	      result = parse_dparen (character);
	      if (result == -2)
	        break;
	      else
	        return result;
#endif
	    }
	}
      else if MBTEST(character == '<' && peek_char == '&')
	return (LESS_AND);
      else if MBTEST(character == '>' && peek_char == '&')
	return (GREATER_AND);
      else if MBTEST(character == '<' && peek_char == '>')
	return (LESS_GREATER);
      else if MBTEST(character == '>' && peek_char == '|')
	return (GREATER_BAR);
      else if MBTEST(character == '&' && peek_char == '>')
	{
	  peek_char = shell_getc (1);
	  if MBTEST(peek_char == '>')
	    return (AND_GREATER_GREATER);
	  else
	    {
	      shell_ungetc (peek_char);
	      return (AND_GREATER);
	    }
	}
      else if MBTEST(character == '|' && peek_char == '&')
	return (BAR_AND);
      else if MBTEST(character == ';' && peek_char == '&')
	{
	  parser_state |= PST_CASEPAT;
#if defined (ALIAS)
	  parser_state &= ~PST_ALEXPNEXT;
#endif /* ALIAS */
	  return (SEMI_AND);
	}

      shell_ungetc (peek_char);

      /* If we look like we are reading the start of a function
	 definition, then let the reader know about it so that
	 we will do the right thing with `{'. */
      if MBTEST(character == ')' && last_read_token == '(' && token_before_that == WORD)
	{
	  parser_state |= PST_ALLOWOPNBRC;
#if defined (ALIAS)
	  parser_state &= ~PST_ALEXPNEXT;
#endif /* ALIAS */
	  function_dstart = line_number;
	}

      /* case pattern lists may be preceded by an optional left paren.  If
	 we're not trying to parse a case pattern list, the left paren
	 indicates a subshell. */
      if MBTEST(character == '(' && (parser_state & PST_CASEPAT) == 0) /* ) */
	parser_state |= PST_SUBSHELL;
      /*(*/
      else if MBTEST((parser_state & PST_CASEPAT) && character == ')')
	parser_state &= ~PST_CASEPAT;
      /*(*/
      else if MBTEST((parser_state & PST_SUBSHELL) && character == ')')
	parser_state &= ~PST_SUBSHELL;

#if defined (PROCESS_SUBSTITUTION)
      /* Check for the constructs which introduce process substitution.
	 Shells running in `posix mode' don't do process substitution. */
      if MBTEST(posixly_correct || ((character != '>' && character != '<') || peek_char != '(')) /*)*/
#endif /* PROCESS_SUBSTITUTION */
	return (character);
    }

  /* Hack <&- (close stdin) case.  Also <&N- (dup and close). */
  if MBTEST(character == '-' && (last_read_token == LESS_AND || last_read_token == GREATER_AND))
    return (character);

tokword:
  /* Okay, if we got this far, we have to read a word.  Read one,
     and then check it against the known ones. */
  result = read_token_word (character);
#if defined (ALIAS)
  if (result == RE_READ_TOKEN)
    goto re_read_token;
#endif
  return result;
}

/*
 * Match a $(...) or other grouping construct.  This has to handle embedded
 * quoted strings ('', ``, "") and nested constructs.  It also must handle
 * reprompting the user, if necessary, after reading a newline, and returning
 * correct error values if it reads EOF.
 */
#define P_FIRSTCLOSE	0x0001
#define P_ALLOWESC	0x0002
#define P_DQUOTE	0x0004
#define P_COMMAND	0x0008	/* parsing a command, so look for comments */
#define P_BACKQUOTE	0x0010	/* parsing a backquoted command substitution */
#define P_ARRAYSUB	0x0020	/* parsing a [...] array subscript for assignment */
#define P_DOLBRACE	0x0040	/* parsing a ${...} construct */

/* Lexical state while parsing a grouping construct or $(...). */
#define LEX_WASDOL	0x001
#define LEX_CKCOMMENT	0x002
#define LEX_INCOMMENT	0x004
#define LEX_PASSNEXT	0x008
#define LEX_RESWDOK	0x010
#define LEX_CKCASE	0x020
#define LEX_INCASE	0x040
#define LEX_INHEREDOC	0x080
#define LEX_HEREDELIM	0x100		/* reading here-doc delimiter */
#define LEX_STRIPDOC	0x200		/* <<- strip tabs from here doc delim */
#define LEX_INWORD	0x400

#define COMSUB_META(ch)		((ch) == ';' || (ch) == '&' || (ch) == '|')

#define CHECK_NESTRET_ERROR() \
  do { \
    if (nestret == &matched_pair_error) \
      { \
	free (ret); \
	return &matched_pair_error; \
      } \
  } while (0)

#define APPEND_NESTRET() \
  do { \
    if (nestlen) \
      { \
	RESIZE_MALLOCED_BUFFER (ret, retind, nestlen, retsize, 64); \
	strcpy (ret + retind, nestret); \
	retind += nestlen; \
      } \
  } while (0)

static char matched_pair_error;

static char *
parse_matched_pair (qc, open, close, lenp, flags)
     int qc;	/* `"' if this construct is within double quotes */
     int open, close;
     int *lenp, flags;
{
  int count, ch, tflags;
  int nestlen, ttranslen, start_lineno;
  char *ret, *nestret, *ttrans;
  int retind, retsize, rflags;
  int dolbrace_state;

  dolbrace_state = (flags & P_DOLBRACE) ? DOLBRACE_PARAM : 0;

/*itrace("parse_matched_pair[%d]: open = %c close = %c flags = %d", line_number, open, close, flags);*/
  count = 1;
  tflags = 0;

  if ((flags & P_COMMAND) && qc != '`' && qc != '\'' && qc != '"' && (flags & P_DQUOTE) == 0)
    tflags |= LEX_CKCOMMENT;

  /* RFLAGS is the set of flags we want to pass to recursive calls. */
  rflags = (qc == '"') ? P_DQUOTE : (flags & P_DQUOTE);

  ret = (char *)xmalloc (retsize = 64);
  retind = 0;

  start_lineno = line_number;
  while (count)
    {
      ch = shell_getc (qc != '\'' && (tflags & (LEX_PASSNEXT)) == 0);

      if (ch == EOF)
	{
	  free (ret);
	  parser_error (start_lineno, _("unexpected EOF while looking for matching `%c'"), close);
	  EOF_Reached = 1;	/* XXX */
	  return (&matched_pair_error);
	}

      /* Possible reprompting. */
      if (ch == '\n' && SHOULD_PROMPT ())
	prompt_again ();

      /* Don't bother counting parens or doing anything else if in a comment
	 or part of a case statement */
      if (tflags & LEX_INCOMMENT)
	{
	  /* Add this character. */
	  RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
	  ret[retind++] = ch;

	  if (ch == '\n')
	    tflags &= ~LEX_INCOMMENT;

	  continue;
	}

      /* Not exactly right yet, should handle shell metacharacters, too.  If
	 any changes are made to this test, make analogous changes to subst.c:
	 extract_delimited_string(). */
      else if MBTEST((tflags & LEX_CKCOMMENT) && (tflags & LEX_INCOMMENT) == 0 && ch == '#' && (retind == 0 || ret[retind-1] == '\n' || shellblank (ret[retind - 1])))
	tflags |= LEX_INCOMMENT;

      if (tflags & LEX_PASSNEXT)		/* last char was backslash */
	{
	  tflags &= ~LEX_PASSNEXT;
	  if (qc != '\'' && ch == '\n')	/* double-quoted \<newline> disappears. */
	    {
	      if (retind > 0)
		retind--;	/* swallow previously-added backslash */
	      continue;
	    }

	  RESIZE_MALLOCED_BUFFER (ret, retind, 2, retsize, 64);
	  if MBTEST(ch == CTLESC)
	    ret[retind++] = CTLESC;
	  ret[retind++] = ch;
	  continue;
	}
      /* If we're reparsing the input (e.g., from parse_string_to_word_list),
	 we've already prepended CTLESC to single-quoted results of $'...'.
	 We may want to do this for other CTLESC-quoted characters in
	 reparse, too. */
      else if MBTEST((parser_state & PST_REPARSE) && open == '\'' && (ch == CTLESC || ch == CTLNUL))
	{
	  RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
	  ret[retind++] = ch;
	  continue;
	}
      else if MBTEST(ch == CTLESC || ch == CTLNUL)	/* special shell escapes */
	{
	  RESIZE_MALLOCED_BUFFER (ret, retind, 2, retsize, 64);
	  ret[retind++] = CTLESC;
	  ret[retind++] = ch;
	  continue;
	}
      else if MBTEST(ch == close)		/* ending delimiter */
	count--;
      /* handle nested ${...} specially. */
      else if MBTEST(open != close && (tflags & LEX_WASDOL) && open == '{' && ch == open) /* } */
	count++;
      else if MBTEST(((flags & P_FIRSTCLOSE) == 0) && ch == open)	/* nested begin */
	count++;

      /* Add this character. */
      RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
      ret[retind++] = ch;

      /* If we just read the ending character, don't bother continuing. */
      if (count == 0)
	break;

      if (open == '\'')			/* '' inside grouping construct */
	{
	  if MBTEST((flags & P_ALLOWESC) && ch == '\\')
	    tflags |= LEX_PASSNEXT;
	  continue;
	}

      if MBTEST(ch == '\\')			/* backslashes */
	tflags |= LEX_PASSNEXT;

      /* Based on which dolstate is currently in (param, op, or word),
	 decide what the op is.  We're really only concerned if it's % or
	 #, so we can turn on a flag that says whether or not we should
	 treat single quotes as special when inside a double-quoted
	 ${...}. This logic must agree with subst.c:extract_dollar_brace_string
	 since they share the same defines. */
      /* FLAG POSIX INTERP 221 */
      if (flags & P_DOLBRACE)
        {
          /* ${param%[%]word} */
	  if MBTEST(dolbrace_state == DOLBRACE_PARAM && ch == '%' && retind > 1)
	    dolbrace_state = DOLBRACE_QUOTE;
          /* ${param#[#]word} */
	  else if MBTEST(dolbrace_state == DOLBRACE_PARAM && ch == '#' && retind > 1)
	    dolbrace_state = DOLBRACE_QUOTE;
          /* ${param/[/]pat/rep} */
	  else if MBTEST(dolbrace_state == DOLBRACE_PARAM && ch == '/' && retind > 1)
	    dolbrace_state = DOLBRACE_QUOTE2;	/* XXX */
          /* ${param^[^]pat} */
	  else if MBTEST(dolbrace_state == DOLBRACE_PARAM && ch == '^' && retind > 1)
	    dolbrace_state = DOLBRACE_QUOTE;
          /* ${param,[,]pat} */
	  else if MBTEST(dolbrace_state == DOLBRACE_PARAM && ch == ',' && retind > 1)
	    dolbrace_state = DOLBRACE_QUOTE;
	  else if MBTEST(dolbrace_state == DOLBRACE_PARAM && strchr ("#%^,~:-=?+/", ch) != 0)
	    dolbrace_state = DOLBRACE_OP;
	  else if MBTEST(dolbrace_state == DOLBRACE_OP && strchr ("#%^,~:-=?+/", ch) == 0)
	    dolbrace_state = DOLBRACE_WORD;
        }

      /* The big hammer.  Single quotes aren't special in double quotes.  The
         problem is that Posix used to say the single quotes are semi-special:
         within a double-quoted ${...} construct "an even number of
         unescaped double-quotes or single-quotes, if any, shall occur." */
      /* This was changed in Austin Group Interp 221 */
      if MBTEST(posixly_correct && shell_compatibility_level > 41 && dolbrace_state != DOLBRACE_QUOTE && dolbrace_state != DOLBRACE_QUOTE2 && (flags & P_DQUOTE) && (flags & P_DOLBRACE) && ch == '\'')
	continue;

      /* Could also check open == '`' if we want to parse grouping constructs
	 inside old-style command substitution. */
      if (open != close)		/* a grouping construct */
	{
	  if MBTEST(shellquote (ch))
	    {
	      /* '', ``, or "" inside $(...) or other grouping construct. */
	      push_delimiter (dstack, ch);
	      if MBTEST((tflags & LEX_WASDOL) && ch == '\'')	/* $'...' inside group */
		nestret = parse_matched_pair (ch, ch, ch, &nestlen, P_ALLOWESC|rflags);
	      else
		nestret = parse_matched_pair (ch, ch, ch, &nestlen, rflags);
	      pop_delimiter (dstack);
	      CHECK_NESTRET_ERROR ();

	      if MBTEST((tflags & LEX_WASDOL) && ch == '\'' && (extended_quote || (rflags & P_DQUOTE) == 0))
		{
		  /* Translate $'...' here. */
		  ttrans = ansiexpand (nestret, 0, nestlen - 1, &ttranslen);
		  xfree (nestret);

		  /* If we're parsing a double-quoted brace expansion and we are
		     not in a place where single quotes are treated specially,
		     make sure we single-quote the results of the ansi
		     expansion because quote removal should remove them later */
		  /* FLAG POSIX INTERP 221 */
		  if ((shell_compatibility_level > 42) && (rflags & P_DQUOTE) && (dolbrace_state == DOLBRACE_QUOTE2) && (flags & P_DOLBRACE))
		    {
		      nestret = sh_single_quote (ttrans);
		      free (ttrans);
		      nestlen = strlen (nestret);
		    }
		  else if ((rflags & P_DQUOTE) == 0)
		    {
		      nestret = sh_single_quote (ttrans);
		      free (ttrans);
		      nestlen = strlen (nestret);
		    }
		  else
		    {
		      nestret = ttrans;
		      nestlen = ttranslen;
		    }
		  retind -= 2;		/* back up before the $' */
		}
	      else if MBTEST((tflags & LEX_WASDOL) && ch == '"' && (extended_quote || (rflags & P_DQUOTE) == 0))
		{
		  /* Locale expand $"..." here. */
		  ttrans = localeexpand (nestret, 0, nestlen - 1, start_lineno, &ttranslen);
		  xfree (nestret);

		  nestret = sh_mkdoublequoted (ttrans, ttranslen, 0);
		  free (ttrans);
		  nestlen = ttranslen + 2;
		  retind -= 2;		/* back up before the $" */
		}

	      APPEND_NESTRET ();
	      FREE (nestret);
	    }
	  else if ((flags & P_ARRAYSUB) && (tflags & LEX_WASDOL) && (ch == '(' || ch == '{' || ch == '['))	/* ) } ] */
	    goto parse_dollar_word;
	}
      /* Parse an old-style command substitution within double quotes as a
	 single word. */
      /* XXX - sh and ksh93 don't do this - XXX */
      else if MBTEST(open == '"' && ch == '`')
	{
	  nestret = parse_matched_pair (0, '`', '`', &nestlen, rflags);

	  CHECK_NESTRET_ERROR ();
	  APPEND_NESTRET ();

	  FREE (nestret);
	}
      else if MBTEST(open != '`' && (tflags & LEX_WASDOL) && (ch == '(' || ch == '{' || ch == '['))	/* ) } ] */
	/* check for $(), $[], or ${} inside quoted string. */
	{
parse_dollar_word:
	  if (open == ch)	/* undo previous increment */
	    count--;
	  if (ch == '(')		/* ) */
	    nestret = parse_comsub (0, '(', ')', &nestlen, (rflags|P_COMMAND) & ~P_DQUOTE);
	  else if (ch == '{')		/* } */
	    nestret = parse_matched_pair (0, '{', '}', &nestlen, P_FIRSTCLOSE|P_DOLBRACE|rflags);
	  else if (ch == '[')		/* ] */
	    nestret = parse_matched_pair (0, '[', ']', &nestlen, rflags);

	  CHECK_NESTRET_ERROR ();
	  APPEND_NESTRET ();

	  FREE (nestret);
	}
      if MBTEST(ch == '$')
	tflags |= LEX_WASDOL;
      else
	tflags &= ~LEX_WASDOL;
    }

  ret[retind] = '\0';
  if (lenp)
    *lenp = retind;
/*itrace("parse_matched_pair[%d]: returning %s", line_number, ret);*/
  return ret;
}

/* Parse a $(...) command substitution.  This is messier than I'd like, and
   reproduces a lot more of the token-reading code than I'd like. */
static char *
parse_comsub (qc, open, close, lenp, flags)
     int qc;	/* `"' if this construct is within double quotes */
     int open, close;
     int *lenp, flags;
{
  int count, ch, peekc, tflags, lex_rwlen, lex_wlen, lex_firstind;
  int nestlen, ttranslen, start_lineno;
  char *ret, *nestret, *ttrans, *heredelim;
  int retind, retsize, rflags, hdlen;

  /* Posix interp 217 says arithmetic expressions have precedence, so
     assume $(( introduces arithmetic expansion and parse accordingly. */
  peekc = shell_getc (0);
  shell_ungetc (peekc);
  if (peekc == '(')
    return (parse_matched_pair (qc, open, close, lenp, 0));

/*itrace("parse_comsub: qc = `%c' open = %c close = %c", qc, open, close);*/
  count = 1;
  tflags = LEX_RESWDOK;

  if ((flags & P_COMMAND) && qc != '\'' && qc != '"' && (flags & P_DQUOTE) == 0)
    tflags |= LEX_CKCASE;
  if ((tflags & LEX_CKCASE) && (interactive == 0 || interactive_comments))
    tflags |= LEX_CKCOMMENT;

  /* RFLAGS is the set of flags we want to pass to recursive calls. */
  rflags = (flags & P_DQUOTE);

  ret = (char *)xmalloc (retsize = 64);
  retind = 0;

  start_lineno = line_number;
  lex_rwlen = lex_wlen = 0;

  heredelim = 0;
  lex_firstind = -1;

  while (count)
    {
comsub_readchar:
      ch = shell_getc (qc != '\'' && (tflags & (LEX_INCOMMENT|LEX_PASSNEXT)) == 0);

      if (ch == EOF)
	{
eof_error:
	  free (ret);
	  FREE (heredelim);
	  parser_error (start_lineno, _("unexpected EOF while looking for matching `%c'"), close);
	  EOF_Reached = 1;	/* XXX */
	  return (&matched_pair_error);
	}

      /* If we hit the end of a line and are reading the contents of a here
	 document, and it's not the same line that the document starts on,
	 check for this line being the here doc delimiter.  Otherwise, if
	 we're in a here document, mark the next character as the beginning
	 of a line. */
      if (ch == '\n')
	{
	  if ((tflags & LEX_HEREDELIM) && heredelim)
	    {
	      tflags &= ~LEX_HEREDELIM;
	      tflags |= LEX_INHEREDOC;
	      lex_firstind = retind + 1;
	    }
	  else if (tflags & LEX_INHEREDOC)
	    {
	      int tind;
	      tind = lex_firstind;
	      while ((tflags & LEX_STRIPDOC) && ret[tind] == '\t')
		tind++;
	      if (STREQN (ret + tind, heredelim, hdlen))
		{
		  tflags &= ~(LEX_STRIPDOC|LEX_INHEREDOC);
/*itrace("parse_comsub:%d: found here doc end `%s'", line_number, ret + tind);*/
		  free (heredelim);
		  heredelim = 0;
		  lex_firstind = -1;
		}
	      else
		lex_firstind = retind + 1;
	    }
	}

      /* Possible reprompting. */
      if (ch == '\n' && SHOULD_PROMPT ())
	prompt_again ();

      /* XXX -- possibly allow here doc to be delimited by ending right
	 paren. */
      if ((tflags & LEX_INHEREDOC) && ch == close && count == 1)
	{
	  int tind;
/*itrace("parse_comsub: in here doc, ch == close, retind - firstind = %d hdlen = %d retind = %d", retind-lex_firstind, hdlen, retind);*/
	  tind = lex_firstind;
	  while ((tflags & LEX_STRIPDOC) && ret[tind] == '\t')
	    tind++;
	  if (retind-tind == hdlen && STREQN (ret + tind, heredelim, hdlen))
	    {
	      tflags &= ~(LEX_STRIPDOC|LEX_INHEREDOC);
/*itrace("parse_comsub:%d: found here doc end `%s'", line_number, ret + tind);*/
	      free (heredelim);
	      heredelim = 0;
	      lex_firstind = -1;
	    }
	}

      /* Don't bother counting parens or doing anything else if in a comment */
      if (tflags & (LEX_INCOMMENT|LEX_INHEREDOC))
	{
	  /* Add this character. */
	  RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
	  ret[retind++] = ch;

	  if ((tflags & LEX_INCOMMENT) && ch == '\n')
	    {
/*itrace("parse_comsub:%d: lex_incomment -> 0 ch = `%c'", line_number, ch);*/
	      tflags &= ~LEX_INCOMMENT;
	    }

	  continue;
	}

      if (tflags & LEX_PASSNEXT)		/* last char was backslash */
	{
/*itrace("parse_comsub:%d: lex_passnext -> 0 ch = `%c' (%d)", line_number, ch, __LINE__);*/
	  tflags &= ~LEX_PASSNEXT;
	  if (qc != '\'' && ch == '\n')	/* double-quoted \<newline> disappears. */
	    {
	      if (retind > 0)
		retind--;	/* swallow previously-added backslash */
	      continue;
	    }

	  RESIZE_MALLOCED_BUFFER (ret, retind, 2, retsize, 64);
	  if MBTEST(ch == CTLESC)
	    ret[retind++] = CTLESC;
	  ret[retind++] = ch;
	  continue;
	}

      /* If this is a shell break character, we are not in a word.  If not,
	 we either start or continue a word. */
      if MBTEST(shellbreak (ch))
	{
	  tflags &= ~LEX_INWORD;
/*itrace("parse_comsub:%d: lex_inword -> 0 ch = `%c' (%d)", line_number, ch, __LINE__);*/
	}
      else
	{
	  if (tflags & LEX_INWORD)
	    {
	      lex_wlen++;
/*itrace("parse_comsub:%d: lex_inword == 1 ch = `%c' lex_wlen = %d (%d)", line_number, ch, lex_wlen, __LINE__);*/
	    }	      
	  else
	    {
/*itrace("parse_comsub:%d: lex_inword -> 1 ch = `%c' (%d)", line_number, ch, __LINE__);*/
	      tflags |= LEX_INWORD;
	      lex_wlen = 0;
	    }
	}

      /* Skip whitespace */
      if MBTEST(shellblank (ch) && (tflags & LEX_HEREDELIM) == 0 && lex_rwlen == 0)
        {
	  /* Add this character. */
	  RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
	  ret[retind++] = ch;
	  continue;
        }

      /* Either we are looking for the start of the here-doc delimiter
	 (lex_firstind == -1) or we are reading one (lex_firstind >= 0).
	 If this character is a shell break character and we are reading
	 the delimiter, save it and note that we are now reading a here
	 document.  If we've found the start of the delimiter, note it by
	 setting lex_firstind.  Backslashes can quote shell metacharacters
	 in here-doc delimiters. */
      if (tflags & LEX_HEREDELIM)
	{
	  if (lex_firstind == -1 && shellbreak (ch) == 0)
	    lex_firstind = retind;
#if 0
	  else if (heredelim && (tflags & LEX_PASSNEXT) == 0 && ch == '\n')
	    {
	      tflags |= LEX_INHEREDOC;
	      tflags &= ~LEX_HEREDELIM;
	      lex_firstind = retind + 1;
	    }
#endif
	  else if (lex_firstind >= 0 && (tflags & LEX_PASSNEXT) == 0 && shellbreak (ch))
	    {
	      if (heredelim == 0)
		{
		  nestret = substring (ret, lex_firstind, retind);
		  heredelim = string_quote_removal (nestret, 0);
		  free (nestret);
		  hdlen = STRLEN(heredelim);
/*itrace("parse_comsub:%d: found here doc delimiter `%s' (%d)", line_number, heredelim, hdlen);*/
		}
	      if (ch == '\n')
		{
		  tflags |= LEX_INHEREDOC;
		  tflags &= ~LEX_HEREDELIM;
		  lex_firstind = retind + 1;
		}
	      else
		lex_firstind = -1;
	    }
	}

      /* Meta-characters that can introduce a reserved word.  Not perfect yet. */
      if MBTEST((tflags & LEX_RESWDOK) == 0 && (tflags & LEX_CKCASE) && (tflags & LEX_INCOMMENT) == 0 && (shellmeta(ch) || ch == '\n'))
	{
	  /* Add this character. */
	  RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
	  ret[retind++] = ch;
	  peekc = shell_getc (1);
	  if (ch == peekc && (ch == '&' || ch == '|' || ch == ';'))	/* two-character tokens */
	    {
	      RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
	      ret[retind++] = peekc;
/*itrace("parse_comsub:%d: set lex_reswordok = 1, ch = `%c'", line_number, ch);*/
	      tflags |= LEX_RESWDOK;
	      lex_rwlen = 0;
	      continue;
	    }
	  else if (ch == '\n' || COMSUB_META(ch))
	    {
	      shell_ungetc (peekc);
/*itrace("parse_comsub:%d: set lex_reswordok = 1, ch = `%c'", line_number, ch);*/
	      tflags |= LEX_RESWDOK;
	      lex_rwlen = 0;
	      continue;
	    }
	  else if (ch == EOF)
	    goto eof_error;
	  else
	    {
	      /* `unget' the character we just added and fall through */
	      retind--;
	      shell_ungetc (peekc);
	    }
	}

      /* If we can read a reserved word, try to read one. */
      if (tflags & LEX_RESWDOK)
	{
	  if MBTEST(islower (ch))
	    {
	      /* Add this character. */
	      RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
	      ret[retind++] = ch;
	      lex_rwlen++;
	      continue;
	    }
	  else if MBTEST(lex_rwlen == 4 && shellbreak (ch))
	    {
	      if (STREQN (ret + retind - 4, "case", 4))
		{
		  tflags |= LEX_INCASE;
/*itrace("parse_comsub:%d: found `case', lex_incase -> 1 lex_reswdok -> 0", line_number);*/
		}
	      else if (STREQN (ret + retind - 4, "esac", 4))
		{
		  tflags &= ~LEX_INCASE;
/*itrace("parse_comsub:%d: found `esac', lex_incase -> 0 lex_reswdok -> 0", line_number);*/
		}
	      tflags &= ~LEX_RESWDOK;
	    }
	  else if MBTEST((tflags & LEX_CKCOMMENT) && ch == '#' && (lex_rwlen == 0 || ((tflags & LEX_INWORD) && lex_wlen == 0)))
	    ;	/* don't modify LEX_RESWDOK if we're starting a comment */
	  /* Allow `do' followed by space, tab, or newline to preserve the
	     RESWDOK flag, but reset the reserved word length counter so we
	     can read another one. */
	  else if MBTEST(((tflags & LEX_INCASE) == 0) &&
			  (isblank(ch) || ch == '\n') &&
			  lex_rwlen == 2 &&
			  STREQN (ret + retind - 2, "do", 2))
	    {
/*itrace("parse_comsub:%d: lex_incase == 1 found `%c', found \"do\"", line_number, ch);*/
	      lex_rwlen = 0;
	    }
	  else if MBTEST((tflags & LEX_INCASE) && ch != '\n')
	    /* If we can read a reserved word and we're in case, we're at the
	       point where we can read a new pattern list or an esac.  We
	       handle the esac case above.  If we read a newline, we want to
	       leave LEX_RESWDOK alone.  If we read anything else, we want to
	       turn off LEX_RESWDOK, since we're going to read a pattern list. */
	    {
	      tflags &= ~LEX_RESWDOK;
/*itrace("parse_comsub:%d: lex_incase == 1 found `%c', lex_reswordok -> 0", line_number, ch);*/
	    }
	  else if MBTEST(shellbreak (ch) == 0)
	    {
	      tflags &= ~LEX_RESWDOK;
/*itrace("parse_comsub:%d: found `%c', lex_reswordok -> 0", line_number, ch);*/
	    }
#if 0
	  /* If we find a space or tab but have read something and it's not
	     `do', turn off the reserved-word-ok flag */
	  else if MBTEST(isblank (ch) && lex_rwlen > 0)
	    {
	      tflags &= ~LEX_RESWDOK;
/*itrace("parse_comsub:%d: found `%c', lex_reswordok -> 0", line_number, ch);*/
	    }
#endif
	}

      /* Might be the start of a here-doc delimiter */
      if MBTEST((tflags & LEX_INCOMMENT) == 0 && (tflags & LEX_CKCASE) && ch == '<')
	{
	  /* Add this character. */
	  RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
	  ret[retind++] = ch;
	  peekc = shell_getc (1);
	  if (peekc == EOF)
	    goto eof_error;
	  if (peekc == ch)
	    {
	      RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
	      ret[retind++] = peekc;
	      peekc = shell_getc (1);
	      if (peekc == EOF)
		goto eof_error;
	      if (peekc == '-')
		{
		  RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
		  ret[retind++] = peekc;
		  tflags |= LEX_STRIPDOC;
		}
	      else
		shell_ungetc (peekc);
	      if (peekc != '<')
		{
		  tflags |= LEX_HEREDELIM;
		  lex_firstind = -1;
		}
	      continue;
	    }
	  else
	    ch = peekc;		/* fall through and continue XXX */
	}
      else if MBTEST((tflags & LEX_CKCOMMENT) && (tflags & LEX_INCOMMENT) == 0 && ch == '#' && (((tflags & LEX_RESWDOK) && lex_rwlen == 0) || ((tflags & LEX_INWORD) && lex_wlen == 0)))
	{
/*itrace("parse_comsub:%d: lex_incomment -> 1 (%d)", line_number, __LINE__);*/
	  tflags |= LEX_INCOMMENT;
	}

      if MBTEST(ch == CTLESC || ch == CTLNUL)	/* special shell escapes */
	{
	  RESIZE_MALLOCED_BUFFER (ret, retind, 2, retsize, 64);
	  ret[retind++] = CTLESC;
	  ret[retind++] = ch;
	  continue;
	}
#if 0
      else if MBTEST((tflags & LEX_INCASE) && ch == close && close == ')')
        tflags &= ~LEX_INCASE;		/* XXX */
#endif
      else if MBTEST(ch == close && (tflags & LEX_INCASE) == 0)		/* ending delimiter */
	{
	  count--;
/*itrace("parse_comsub:%d: found close: count = %d", line_number, count);*/
	}
      else if MBTEST(((flags & P_FIRSTCLOSE) == 0) && (tflags & LEX_INCASE) == 0 && ch == open)	/* nested begin */
	{
	  count++;
/*itrace("parse_comsub:%d: found open: count = %d", line_number, count);*/
	}

      /* Add this character. */
      RESIZE_MALLOCED_BUFFER (ret, retind, 1, retsize, 64);
      ret[retind++] = ch;

      /* If we just read the ending character, don't bother continuing. */
      if (count == 0)
	break;

      if MBTEST(ch == '\\')			/* backslashes */
	tflags |= LEX_PASSNEXT;

      if MBTEST(shellquote (ch))
        {
          /* '', ``, or "" inside $(...). */
          push_delimiter (dstack, ch);
          if MBTEST((tflags & LEX_WASDOL) && ch == '\'')	/* $'...' inside group */
	    nestret = parse_matched_pair (ch, ch, ch, &nestlen, P_ALLOWESC|rflags);
	  else
	    nestret = parse_matched_pair (ch, ch, ch, &nestlen, rflags);
	  pop_delimiter (dstack);
	  CHECK_NESTRET_ERROR ();

	  if MBTEST((tflags & LEX_WASDOL) && ch == '\'' && (extended_quote || (rflags & P_DQUOTE) == 0))
	    {
	      /* Translate $'...' here. */
	      ttrans = ansiexpand (nestret, 0, nestlen - 1, &ttranslen);
	      xfree (nestret);

	      if ((rflags & P_DQUOTE) == 0)
		{
		  nestret = sh_single_quote (ttrans);
		  free (ttrans);
		  nestlen = strlen (nestret);
		}
	      else
		{
		  nestret = ttrans;
		  nestlen = ttranslen;
		}
	      retind -= 2;		/* back up before the $' */
	    }
	  else if MBTEST((tflags & LEX_WASDOL) && ch == '"' && (extended_quote || (rflags & P_DQUOTE) == 0))
	    {
	      /* Locale expand $"..." here. */
	      ttrans = localeexpand (nestret, 0, nestlen - 1, start_lineno, &ttranslen);
	      xfree (nestret);

	      nestret = sh_mkdoublequoted (ttrans, ttranslen, 0);
	      free (ttrans);
	      nestlen = ttranslen + 2;
	      retind -= 2;		/* back up before the $" */
	    }

	  APPEND_NESTRET ();
	  FREE (nestret);
	}
      else if MBTEST((tflags & LEX_WASDOL) && (ch == '(' || ch == '{' || ch == '['))	/* ) } ] */
	/* check for $(), $[], or ${} inside command substitution. */
	{
	  if ((tflags & LEX_INCASE) == 0 && open == ch)	/* undo previous increment */
	    count--;
	  if (ch == '(')		/* ) */
	    nestret = parse_comsub (0, '(', ')', &nestlen, (rflags|P_COMMAND) & ~P_DQUOTE);
	  else if (ch == '{')		/* } */
	    nestret = parse_matched_pair (0, '{', '}', &nestlen, P_FIRSTCLOSE|P_DOLBRACE|rflags);
	  else if (ch == '[')		/* ] */
	    nestret = parse_matched_pair (0, '[', ']', &nestlen, rflags);

	  CHECK_NESTRET_ERROR ();
	  APPEND_NESTRET ();

	  FREE (nestret);
	}
      if MBTEST(ch == '$')
	tflags |= LEX_WASDOL;
      else
	tflags &= ~LEX_WASDOL;
    }

  FREE (heredelim);
  ret[retind] = '\0';
  if (lenp)
    *lenp = retind;
/*itrace("parse_comsub:%d: returning `%s'", line_number, ret);*/
  return ret;
}

/* Recursively call the parser to parse a $(...) command substitution. */
char *
xparse_dolparen (base, string, indp, flags)
     char *base;
     char *string;
     int *indp;
     int flags;
{
  sh_parser_state_t ps;
  sh_input_line_state_t ls;
  int orig_ind, nc, sflags, orig_eof_token;
  char *ret, *s, *ep, *ostring;

  /*yydebug = 1;*/
  orig_ind = *indp;
  ostring = string;

/*itrace("xparse_dolparen: size = %d shell_input_line = `%s'", shell_input_line_size, shell_input_line);*/
  sflags = SEVAL_NONINT|SEVAL_NOHIST|SEVAL_NOFREE;
  if (flags & SX_NOLONGJMP)
    sflags |= SEVAL_NOLONGJMP;
  save_parser_state (&ps);
  save_input_line_state (&ls);
  orig_eof_token = shell_eof_token;

  /*(*/
  parser_state |= PST_CMDSUBST|PST_EOFTOKEN;	/* allow instant ')' */ /*(*/
  shell_eof_token = ')';
  parse_string (string, "command substitution", sflags, &ep);

  shell_eof_token = orig_eof_token;
  restore_parser_state (&ps);
  reset_parser ();
  /* reset_parser clears shell_input_line and associated variables */
  restore_input_line_state (&ls);

  token_to_read = 0;

  /* Need to find how many characters parse_and_execute consumed, update
     *indp, if flags != 0, copy the portion of the string parsed into RET
     and return it.  If flags & 1 (EX_NOALLOC) we can return NULL. */

  /*(*/
  if (ep[-1] != ')')
    {
#if DEBUG
      if (ep[-1] != '\n')
	itrace("xparse_dolparen:%d: ep[-1] != RPAREN (%d), ep = `%s'", line_number, ep[-1], ep);
#endif
      while (ep > ostring && ep[-1] == '\n') ep--;
    }

  nc = ep - ostring;
  *indp = ep - base - 1;

  /*(*/
#if DEBUG
  if (base[*indp] != ')')
    itrace("xparse_dolparen:%d: base[%d] != RPAREN (%d), base = `%s'", line_number, *indp, base[*indp], base);
#endif

  if (flags & SX_NOALLOC) 
    return (char *)NULL;

  if (nc == 0)
    {
      ret = xmalloc (1);
      ret[0] = '\0';
    }
  else
    ret = substring (ostring, 0, nc - 1);

  return ret;
}

#if defined (DPAREN_ARITHMETIC) || defined (ARITH_FOR_COMMAND)
/* Parse a double-paren construct.  It can be either an arithmetic
   command, an arithmetic `for' command, or a nested subshell.  Returns
   the parsed token, -1 on error, or -2 if we didn't do anything and
   should just go on. */
static int
parse_dparen (c)
     int c;
{
  int cmdtyp, sline;
  char *wval;
  WORD_DESC *wd;

#if defined (ARITH_FOR_COMMAND)
  if (last_read_token == FOR)
    {
      arith_for_lineno = line_number;
      cmdtyp = parse_arith_cmd (&wval, 0);
      if (cmdtyp == 1)
	{
	  wd = alloc_word_desc ();
	  wd->word = wval;
	  yylval.word_list = make_word_list (wd, (WORD_LIST *)NULL);
	  return (ARITH_FOR_EXPRS);
	}
      else
	return -1;		/* ERROR */
    }
#endif

#if defined (DPAREN_ARITHMETIC)
  if (reserved_word_acceptable (last_read_token))
    {
      sline = line_number;

      cmdtyp = parse_arith_cmd (&wval, 0);
      if (cmdtyp == 1)	/* arithmetic command */
	{
	  wd = alloc_word_desc ();
	  wd->word = wval;
	  wd->flags = W_QUOTED|W_NOSPLIT|W_NOGLOB|W_DQUOTE;
	  yylval.word_list = make_word_list (wd, (WORD_LIST *)NULL);
	  return (ARITH_CMD);
	}
      else if (cmdtyp == 0)	/* nested subshell */
	{
	  push_string (wval, 0, (alias_t *)NULL);
	  pushed_string_list->flags = PSH_DPAREN;
	  if ((parser_state & PST_CASEPAT) == 0)
	    parser_state |= PST_SUBSHELL;
	  return (c);
	}
      else			/* ERROR */
	return -1;
    }
#endif

  return -2;			/* XXX */
}

/* We've seen a `(('.  Look for the matching `))'.  If we get it, return 1.
   If not, assume it's a nested subshell for backwards compatibility and
   return 0.  In any case, put the characters we've consumed into a locally-
   allocated buffer and make *ep point to that buffer.  Return -1 on an
   error, for example EOF. */
static int
parse_arith_cmd (ep, adddq)
     char **ep;
     int adddq;
{
  int exp_lineno, rval, c;
  char *ttok, *tokstr;
  int ttoklen;

  exp_lineno = line_number;
  ttok = parse_matched_pair (0, '(', ')', &ttoklen, 0);
  rval = 1;
  if (ttok == &matched_pair_error)
    return -1;
  /* Check that the next character is the closing right paren.  If
     not, this is a syntax error. ( */
  c = shell_getc (0);
  if MBTEST(c != ')')
    rval = 0;

  tokstr = (char *)xmalloc (ttoklen + 4);

  /* if ADDDQ != 0 then (( ... )) -> "..." */
  if (rval == 1 && adddq)	/* arith cmd, add double quotes */
    {
      tokstr[0] = '"';
      strncpy (tokstr + 1, ttok, ttoklen - 1);
      tokstr[ttoklen] = '"';
      tokstr[ttoklen+1] = '\0';
    }
  else if (rval == 1)		/* arith cmd, don't add double quotes */
    {
      strncpy (tokstr, ttok, ttoklen - 1);
      tokstr[ttoklen-1] = '\0';
    }
  else				/* nested subshell */
    {
      tokstr[0] = '(';
      strncpy (tokstr + 1, ttok, ttoklen - 1);
      tokstr[ttoklen] = ')';
      tokstr[ttoklen+1] = c;
      tokstr[ttoklen+2] = '\0';
    }

  *ep = tokstr;
  FREE (ttok);
  return rval;
}
#endif /* DPAREN_ARITHMETIC || ARITH_FOR_COMMAND */

#if defined (COND_COMMAND)
static void
cond_error ()
{
  char *etext;

  if (EOF_Reached && cond_token != COND_ERROR)		/* [[ */
    parser_error (cond_lineno, _("unexpected EOF while looking for `]]'"));
  else if (cond_token != COND_ERROR)
    {
      if (etext = error_token_from_token (cond_token))
	{
	  parser_error (cond_lineno, _("syntax error in conditional expression: unexpected token `%s'"), etext);
	  free (etext);
	}
      else
	parser_error (cond_lineno, _("syntax error in conditional expression"));
    }
}

static COND_COM *
cond_expr ()
{
  return (cond_or ());  
}

static COND_COM *
cond_or ()
{
  COND_COM *l, *r;

  l = cond_and ();
  if (cond_token == OR_OR)
    {
      r = cond_or ();
      l = make_cond_node (COND_OR, (WORD_DESC *)NULL, l, r);
    }
  return l;
}

static COND_COM *
cond_and ()
{
  COND_COM *l, *r;

  l = cond_term ();
  if (cond_token == AND_AND)
    {
      r = cond_and ();
      l = make_cond_node (COND_AND, (WORD_DESC *)NULL, l, r);
    }
  return l;
}

static int
cond_skip_newlines ()
{
  while ((cond_token = read_token (READ)) == '\n')
    {
      if (SHOULD_PROMPT ())
	prompt_again ();
    }
  return (cond_token);
}

#define COND_RETURN_ERROR() \
  do { cond_token = COND_ERROR; return ((COND_COM *)NULL); } while (0)

static COND_COM *
cond_term ()
{
  WORD_DESC *op;
  COND_COM *term, *tleft, *tright;
  int tok, lineno;
  char *etext;

  /* Read a token.  It can be a left paren, a `!', a unary operator, or a
     word that should be the first argument of a binary operator.  Start by
     skipping newlines, since this is a compound command. */
  tok = cond_skip_newlines ();
  lineno = line_number;
  if (tok == COND_END)
    {
      COND_RETURN_ERROR ();
    }
  else if (tok == '(')
    {
      term = cond_expr ();
      if (cond_token != ')')
	{
	  if (term)
	    dispose_cond_node (term);		/* ( */
	  if (etext = error_token_from_token (cond_token))
	    {
	      parser_error (lineno, _("unexpected token `%s', expected `)'"), etext);
	      free (etext);
	    }
	  else
	    parser_error (lineno, _("expected `)'"));
	  COND_RETURN_ERROR ();
	}
      term = make_cond_node (COND_EXPR, (WORD_DESC *)NULL, term, (COND_COM *)NULL);
      (void)cond_skip_newlines ();
    }
  else if (tok == BANG || (tok == WORD && (yylval.word->word[0] == '!' && yylval.word->word[1] == '\0')))
    {
      if (tok == WORD)
	dispose_word (yylval.word);	/* not needed */
      term = cond_term ();
      if (term)
	term->flags |= CMD_INVERT_RETURN;
    }
  else if (tok == WORD && yylval.word->word[0] == '-' && yylval.word->word[2] == 0 && test_unop (yylval.word->word))
    {
      op = yylval.word;
      tok = read_token (READ);
      if (tok == WORD)
	{
	  tleft = make_cond_node (COND_TERM, yylval.word, (COND_COM *)NULL, (COND_COM *)NULL);
	  term = make_cond_node (COND_UNARY, op, tleft, (COND_COM *)NULL);
	}
      else
	{
	  dispose_word (op);
	  if (etext = error_token_from_token (tok))
	    {
	      parser_error (line_number, _("unexpected argument `%s' to conditional unary operator"), etext);
	      free (etext);
	    }
	  else
	    parser_error (line_number, _("unexpected argument to conditional unary operator"));
	  COND_RETURN_ERROR ();
	}

      (void)cond_skip_newlines ();
    }
  else if (tok == WORD)		/* left argument to binary operator */
    {
      /* lhs */
      tleft = make_cond_node (COND_TERM, yylval.word, (COND_COM *)NULL, (COND_COM *)NULL);

      /* binop */
      tok = read_token (READ);
      if (tok == WORD && test_binop (yylval.word->word))
	{
	  op = yylval.word;
	  if (op->word[0] == '=' && (op->word[1] == '\0' || (op->word[1] == '=' && op->word[2] == '\0')))
	    parser_state |= PST_EXTPAT;
	  else if (op->word[0] == '!' && op->word[1] == '=' && op->word[2] == '\0')
	    parser_state |= PST_EXTPAT;
	}
#if defined (COND_REGEXP)
      else if (tok == WORD && STREQ (yylval.word->word, "=~"))
	{
	  op = yylval.word;
	  parser_state |= PST_REGEXP;
	}
#endif
      else if (tok == '<' || tok == '>')
	op = make_word_from_token (tok);  /* ( */
      /* There should be a check before blindly accepting the `)' that we have
	 seen the opening `('. */
      else if (tok == COND_END || tok == AND_AND || tok == OR_OR || tok == ')')
	{
	  /* Special case.  [[ x ]] is equivalent to [[ -n x ]], just like
	     the test command.  Similarly for [[ x && expr ]] or
	     [[ x || expr ]] or [[ (x) ]]. */
	  op = make_word ("-n");
	  term = make_cond_node (COND_UNARY, op, tleft, (COND_COM *)NULL);
	  cond_token = tok;
	  return (term);
	}
      else
	{
	  if (etext = error_token_from_token (tok))
	    {
	      parser_error (line_number, _("unexpected token `%s', conditional binary operator expected"), etext);
	      free (etext);
	    }
	  else
	    parser_error (line_number, _("conditional binary operator expected"));
	  dispose_cond_node (tleft);
	  COND_RETURN_ERROR ();
	}

      /* rhs */
      if (parser_state & PST_EXTPAT)
	extended_glob = 1;
      tok = read_token (READ);
      if (parser_state & PST_EXTPAT)
	extended_glob = global_extglob;
      parser_state &= ~(PST_REGEXP|PST_EXTPAT);

      if (tok == WORD)
	{
	  tright = make_cond_node (COND_TERM, yylval.word, (COND_COM *)NULL, (COND_COM *)NULL);
	  term = make_cond_node (COND_BINARY, op, tleft, tright);
	}
      else
	{
	  if (etext = error_token_from_token (tok))
	    {
	      parser_error (line_number, _("unexpected argument `%s' to conditional binary operator"), etext);
	      free (etext);
	    }
	  else
	    parser_error (line_number, _("unexpected argument to conditional binary operator"));
	  dispose_cond_node (tleft);
	  dispose_word (op);
	  COND_RETURN_ERROR ();
	}

      (void)cond_skip_newlines ();
    }
  else
    {
      if (tok < 256)
	parser_error (line_number, _("unexpected token `%c' in conditional command"), tok);
      else if (etext = error_token_from_token (tok))
	{
	  parser_error (line_number, _("unexpected token `%s' in conditional command"), etext);
	  free (etext);
	}
      else
	parser_error (line_number, _("unexpected token %d in conditional command"), tok);
      COND_RETURN_ERROR ();
    }
  return (term);
}      

/* This is kind of bogus -- we slip a mini recursive-descent parser in
   here to handle the conditional statement syntax. */
static COMMAND *
parse_cond_command ()
{
  COND_COM *cexp;

  global_extglob = extended_glob;
  cexp = cond_expr ();
  return (make_cond_command (cexp));
}
#endif

#if defined (ARRAY_VARS)
/* When this is called, it's guaranteed that we don't care about anything
   in t beyond i.  We do save and restore the chars, though. */
static int
token_is_assignment (t, i)
     char *t;
     int i;
{
  unsigned char c, c1;
  int r;

  c = t[i]; c1 = t[i+1];
  t[i] = '='; t[i+1] = '\0';
  r = assignment (t, (parser_state & PST_COMPASSIGN) != 0);
  t[i] = c; t[i+1] = c1;
  return r;
}

/* XXX - possible changes here for `+=' */
static int
token_is_ident (t, i)
     char *t;
     int i;
{
  unsigned char c;
  int r;

  c = t[i];
  t[i] = '\0';
  r = legal_identifier (t);
  t[i] = c;
  return r;
}
#endif

static int
read_token_word (character)
     int character;
{
  /* The value for YYLVAL when a WORD is read. */
  WORD_DESC *the_word;

  /* Index into the token that we are building. */
  int token_index;

  /* ALL_DIGITS becomes zero when we see a non-digit. */
  int all_digit_token;

  /* DOLLAR_PRESENT becomes non-zero if we see a `$'. */
  int dollar_present;

  /* COMPOUND_ASSIGNMENT becomes non-zero if we are parsing a compound
     assignment. */
  int compound_assignment;

  /* QUOTED becomes non-zero if we see one of ("), ('), (`), or (\). */
  int quoted;

  /* Non-zero means to ignore the value of the next character, and just
     to add it no matter what. */
 int pass_next_character;

  /* The current delimiting character. */
  int cd;
  int result, peek_char;
  char *ttok, *ttrans;
  int ttoklen, ttranslen;
  intmax_t lvalue;

  if (token_buffer_size < TOKEN_DEFAULT_INITIAL_SIZE)
    token = (char *)xrealloc (token, token_buffer_size = TOKEN_DEFAULT_INITIAL_SIZE);

  token_index = 0;
  all_digit_token = DIGIT (character);
  dollar_present = quoted = pass_next_character = compound_assignment = 0;

  for (;;)
    {
      if (character == EOF)
	goto got_token;

      if (pass_next_character)
	{
	  pass_next_character = 0;
	  goto got_escaped_character;
	}

      cd = current_delimiter (dstack);

      /* Handle backslashes.  Quote lots of things when not inside of
	 double-quotes, quote some things inside of double-quotes. */
      if MBTEST(character == '\\')
	{
	  peek_char = shell_getc (0);

	  /* Backslash-newline is ignored in all cases except
	     when quoted with single quotes. */
	  if (peek_char == '\n')
	    {
	      character = '\n';
	      goto next_character;
	    }
	  else
	    {
	      shell_ungetc (peek_char);

	      /* If the next character is to be quoted, note it now. */
	      if (cd == 0 || cd == '`' ||
		  (cd == '"' && peek_char >= 0 && (sh_syntaxtab[peek_char] & CBSDQUOTE)))
		pass_next_character++;

	      quoted = 1;
	      goto got_character;
	    }
	}

      /* Parse a matched pair of quote characters. */
      if MBTEST(shellquote (character))
	{
	  push_delimiter (dstack, character);
	  ttok = parse_matched_pair (character, character, character, &ttoklen, (character == '`') ? P_COMMAND : 0);
	  pop_delimiter (dstack);
	  if (ttok == &matched_pair_error)
	    return -1;		/* Bail immediately. */
	  RESIZE_MALLOCED_BUFFER (token, token_index, ttoklen + 2,
				  token_buffer_size, TOKEN_DEFAULT_GROW_SIZE);
	  token[token_index++] = character;
	  strcpy (token + token_index, ttok);
	  token_index += ttoklen;
	  all_digit_token = 0;
	  quoted = 1;
	  dollar_present |= (character == '"' && strchr (ttok, '$') != 0);
	  FREE (ttok);
	  goto next_character;
	}

#ifdef COND_REGEXP
      /* When parsing a regexp as a single word inside a conditional command,
	 we need to special-case characters special to both the shell and
	 regular expressions.  Right now, that is only '(' and '|'. */ /*)*/
      if MBTEST((parser_state & PST_REGEXP) && (character == '(' || character == '|'))		/*)*/
	{
	  if (character == '|')
	    goto got_character;

	  push_delimiter (dstack, character);
	  ttok = parse_matched_pair (cd, '(', ')', &ttoklen, 0);
	  pop_delimiter (dstack);
	  if (ttok == &matched_pair_error)
	    return -1;		/* Bail immediately. */
	  RESIZE_MALLOCED_BUFFER (token, token_index, ttoklen + 2,
				  token_buffer_size, TOKEN_DEFAULT_GROW_SIZE);
	  token[token_index++] = character;
	  strcpy (token + token_index, ttok);
	  token_index += ttoklen;
	  FREE (ttok);
	  dollar_present = all_digit_token = 0;
	  goto next_character;
	}
#endif /* COND_REGEXP */

#ifdef EXTENDED_GLOB
      /* Parse a ksh-style extended pattern matching specification. */
      if MBTEST(extended_glob && PATTERN_CHAR (character))
	{
	  peek_char = shell_getc (1);
	  if MBTEST(peek_char == '(')		/* ) */
	    {
	      push_delimiter (dstack, peek_char);
	      ttok = parse_matched_pair (cd, '(', ')', &ttoklen, 0);
	      pop_delimiter (dstack);
	      if (ttok == &matched_pair_error)
		return -1;		/* Bail immediately. */
	      RESIZE_MALLOCED_BUFFER (token, token_index, ttoklen + 3,
				      token_buffer_size,
				      TOKEN_DEFAULT_GROW_SIZE);
	      token[token_index++] = character;
	      token[token_index++] = peek_char;
	      strcpy (token + token_index, ttok);
	      token_index += ttoklen;
	      FREE (ttok);
	      dollar_present = all_digit_token = 0;
	      goto next_character;
	    }
	  else
	    shell_ungetc (peek_char);
	}
#endif /* EXTENDED_GLOB */

      /* If the delimiter character is not single quote, parse some of
	 the shell expansions that must be read as a single word. */
      if (shellexp (character))
	{
	  peek_char = shell_getc (1);
	  /* $(...), <(...), >(...), $((...)), ${...}, and $[...] constructs */
	  if MBTEST(peek_char == '(' ||
		((peek_char == '{' || peek_char == '[') && character == '$'))	/* ) ] } */
	    {
	      if (peek_char == '{')		/* } */
		ttok = parse_matched_pair (cd, '{', '}', &ttoklen, P_FIRSTCLOSE|P_DOLBRACE);
	      else if (peek_char == '(')		/* ) */
		{
		  /* XXX - push and pop the `(' as a delimiter for use by
		     the command-oriented-history code.  This way newlines
		     appearing in the $(...) string get added to the
		     history literally rather than causing a possibly-
		     incorrect `;' to be added. ) */
		  push_delimiter (dstack, peek_char);
		  ttok = parse_comsub (cd, '(', ')', &ttoklen, P_COMMAND);
		  pop_delimiter (dstack);
		}
	      else
		ttok = parse_matched_pair (cd, '[', ']', &ttoklen, 0);
	      if (ttok == &matched_pair_error)
		return -1;		/* Bail immediately. */
	      RESIZE_MALLOCED_BUFFER (token, token_index, ttoklen + 3,
				      token_buffer_size,
				      TOKEN_DEFAULT_GROW_SIZE);
	      token[token_index++] = character;
	      token[token_index++] = peek_char;
	      strcpy (token + token_index, ttok);
	      token_index += ttoklen;
	      FREE (ttok);
	      dollar_present = 1;
	      all_digit_token = 0;
	      goto next_character;
	    }
	  /* This handles $'...' and $"..." new-style quoted strings. */
	  else if MBTEST(character == '$' && (peek_char == '\'' || peek_char == '"'))
	    {
	      int first_line;

	      first_line = line_number;
	      push_delimiter (dstack, peek_char);
	      ttok = parse_matched_pair (peek_char, peek_char, peek_char,
					 &ttoklen,
					 (peek_char == '\'') ? P_ALLOWESC : 0);
	      pop_delimiter (dstack);
	      if (ttok == &matched_pair_error)
		return -1;
	      if (peek_char == '\'')
		{
		  ttrans = ansiexpand (ttok, 0, ttoklen - 1, &ttranslen);
		  free (ttok);

		  /* Insert the single quotes and correctly quote any
		     embedded single quotes (allowed because P_ALLOWESC was
		     passed to parse_matched_pair). */
		  ttok = sh_single_quote (ttrans);
		  free (ttrans);
		  ttranslen = strlen (ttok);
		  ttrans = ttok;
		}
	      else
		{
		  /* Try to locale-expand the converted string. */
		  ttrans = localeexpand (ttok, 0, ttoklen - 1, first_line, &ttranslen);
		  free (ttok);

		  /* Add the double quotes back */
		  ttok = sh_mkdoublequoted (ttrans, ttranslen, 0);
		  free (ttrans);
		  ttranslen += 2;
		  ttrans = ttok;
		}

	      RESIZE_MALLOCED_BUFFER (token, token_index, ttranslen + 1,
				      token_buffer_size,
				      TOKEN_DEFAULT_GROW_SIZE);
	      strcpy (token + token_index, ttrans);
	      token_index += ttranslen;
	      FREE (ttrans);
	      quoted = 1;
	      all_digit_token = 0;
	      goto next_character;
	    }
	  /* This could eventually be extended to recognize all of the
	     shell's single-character parameter expansions, and set flags.*/
	  else if MBTEST(character == '$' && peek_char == '$')
	    {
	      RESIZE_MALLOCED_BUFFER (token, token_index, 3,
				      token_buffer_size,
				      TOKEN_DEFAULT_GROW_SIZE);
	      token[token_index++] = '$';
	      token[token_index++] = peek_char;
	      dollar_present = 1;
	      all_digit_token = 0;
	      goto next_character;
	    }
	  else
	    shell_ungetc (peek_char);
	}

#if defined (ARRAY_VARS)
      /* Identify possible array subscript assignment; match [...].  If
	 parser_state&PST_COMPASSIGN, we need to parse [sub]=words treating
	 `sub' as if it were enclosed in double quotes. */
      else if MBTEST(character == '[' &&		/* ] */
		     ((token_index > 0 && assignment_acceptable (last_read_token) && token_is_ident (token, token_index)) ||
		      (token_index == 0 && (parser_state&PST_COMPASSIGN))))
        {
	  ttok = parse_matched_pair (cd, '[', ']', &ttoklen, P_ARRAYSUB);
	  if (ttok == &matched_pair_error)
	    return -1;		/* Bail immediately. */
	  RESIZE_MALLOCED_BUFFER (token, token_index, ttoklen + 2,
				  token_buffer_size,
				  TOKEN_DEFAULT_GROW_SIZE);
	  token[token_index++] = character;
	  strcpy (token + token_index, ttok);
	  token_index += ttoklen;
	  FREE (ttok);
	  all_digit_token = 0;
	  goto next_character;
        }
      /* Identify possible compound array variable assignment. */
      else if MBTEST(character == '=' && token_index > 0 && (assignment_acceptable (last_read_token) || (parser_state & PST_ASSIGNOK)) && token_is_assignment (token, token_index))
	{
	  peek_char = shell_getc (1);
	  if MBTEST(peek_char == '(')		/* ) */
	    {
	      ttok = parse_compound_assignment (&ttoklen);

	      RESIZE_MALLOCED_BUFFER (token, token_index, ttoklen + 4,
				      token_buffer_size,
				      TOKEN_DEFAULT_GROW_SIZE);

	      token[token_index++] = '=';
	      token[token_index++] = '(';
	      if (ttok)
		{
		  strcpy (token + token_index, ttok);
		  token_index += ttoklen;
		}
	      token[token_index++] = ')';
	      FREE (ttok);
	      all_digit_token = 0;
	      compound_assignment = 1;
#if 1
	      goto next_character;
#else
	      goto got_token;		/* ksh93 seems to do this */
#endif
	    }
	  else
	    shell_ungetc (peek_char);
	}
#endif

      /* When not parsing a multi-character word construct, shell meta-
	 characters break words. */
      if MBTEST(shellbreak (character))
	{
	  shell_ungetc (character);
	  goto got_token;
	}

got_character:

      if (character == CTLESC || character == CTLNUL)
	{
	  RESIZE_MALLOCED_BUFFER (token, token_index, 2, token_buffer_size,
				  TOKEN_DEFAULT_GROW_SIZE);
	  token[token_index++] = CTLESC;
	}
      else
got_escaped_character:
	RESIZE_MALLOCED_BUFFER (token, token_index, 1, token_buffer_size,
				TOKEN_DEFAULT_GROW_SIZE);

      token[token_index++] = character;

      all_digit_token &= DIGIT (character);
      dollar_present |= character == '$';

    next_character:
      if (character == '\n' && SHOULD_PROMPT ())
	prompt_again ();

      /* We want to remove quoted newlines (that is, a \<newline> pair)
	 unless we are within single quotes or pass_next_character is
	 set (the shell equivalent of literal-next). */
      cd = current_delimiter (dstack);
      character = shell_getc (cd != '\'' && pass_next_character == 0);
    }	/* end for (;;) */

got_token:

  /* Calls to RESIZE_MALLOCED_BUFFER ensure there is sufficient room. */
  token[token_index] = '\0';

  /* Check to see what thing we should return.  If the last_read_token
     is a `<', or a `&', or the character which ended this token is
     a '>' or '<', then, and ONLY then, is this input token a NUMBER.
     Otherwise, it is just a word, and should be returned as such. */
  if MBTEST(all_digit_token && (character == '<' || character == '>' ||
		    last_read_token == LESS_AND ||
		    last_read_token == GREATER_AND))
      {
	if (legal_number (token, &lvalue) && (int)lvalue == lvalue)
	  {
	    yylval.number = lvalue;
	    return (NUMBER);
	  }
      }

  /* Check for special case tokens. */
  result = (last_shell_getc_is_singlebyte) ? special_case_tokens (token) : -1;
  if (result >= 0)
    return result;

#if defined (ALIAS)
  /* Posix.2 does not allow reserved words to be aliased, so check for all
     of them, including special cases, before expanding the current token
     as an alias. */
  if MBTEST(posixly_correct)
    CHECK_FOR_RESERVED_WORD (token);

  /* Aliases are expanded iff EXPAND_ALIASES is non-zero, and quoting
     inhibits alias expansion. */
  if (expand_aliases && quoted == 0)
    {
      result = alias_expand_token (token);
      if (result == RE_READ_TOKEN)
	return (RE_READ_TOKEN);
      else if (result == NO_EXPANSION)
	parser_state &= ~PST_ALEXPNEXT;
    }

  /* If not in Posix.2 mode, check for reserved words after alias
     expansion. */
  if MBTEST(posixly_correct == 0)
#endif
    CHECK_FOR_RESERVED_WORD (token);

  the_word = (WORD_DESC *)xmalloc (sizeof (WORD_DESC));
  the_word->word = (char *)xmalloc (1 + token_index);
  the_word->flags = 0;
  strcpy (the_word->word, token);
  if (dollar_present)
    the_word->flags |= W_HASDOLLAR;
  if (quoted)
    the_word->flags |= W_QUOTED;		/*(*/
  if (compound_assignment && token[token_index-1] == ')')
    the_word->flags |= W_COMPASSIGN;
  /* A word is an assignment if it appears at the beginning of a
     simple command, or after another assignment word.  This is
     context-dependent, so it cannot be handled in the grammar. */
  if (assignment (token, (parser_state & PST_COMPASSIGN) != 0))
    {
      the_word->flags |= W_ASSIGNMENT;
      /* Don't perform word splitting on assignment statements. */
      if (assignment_acceptable (last_read_token) || (parser_state & PST_COMPASSIGN) != 0)
	{
	  the_word->flags |= W_NOSPLIT;
	  if (parser_state & PST_COMPASSIGN)
	    the_word->flags |= W_NOGLOB;	/* XXX - W_NOBRACE? */
	}
    }

  if (command_token_position (last_read_token))
    {
      struct builtin *b;
      b = builtin_address_internal (token, 0);
      if (b && (b->flags & ASSIGNMENT_BUILTIN))
	parser_state |= PST_ASSIGNOK;
      else if (STREQ (token, "eval") || STREQ (token, "let"))
	parser_state |= PST_ASSIGNOK;
    }

  yylval.word = the_word;

  if (token[0] == '{' && token[token_index-1] == '}' &&
      (character == '<' || character == '>'))
    {
      /* can use token; already copied to the_word */
      token[token_index-1] = '\0';
#if defined (ARRAY_VARS)
      if (legal_identifier (token+1) || valid_array_reference (token+1))
#else
      if (legal_identifier (token+1))
#endif
	{
	  strcpy (the_word->word, token+1);
/*itrace("read_token_word: returning REDIR_WORD for %s", the_word->word);*/
	  return (REDIR_WORD);
	}
    }

  result = ((the_word->flags & (W_ASSIGNMENT|W_NOSPLIT)) == (W_ASSIGNMENT|W_NOSPLIT))
		? ASSIGNMENT_WORD : WORD;

  switch (last_read_token)
    {
    case FUNCTION:
      parser_state |= PST_ALLOWOPNBRC;
      function_dstart = line_number;
      break;
    case CASE:
    case SELECT:
    case FOR:
      if (word_top < MAX_CASE_NEST)
	word_top++;
      word_lineno[word_top] = line_number;
      break;
    }

  return (result);
}

/* Return 1 if TOKSYM is a token that after being read would allow
   a reserved word to be seen, else 0. */
static int
reserved_word_acceptable (toksym)
     int toksym;
{
  switch (toksym)
    {
    case '\n':
    case ';':
    case '(':
    case ')':
    case '|':
    case '&':
    case '{':
    case '}':		/* XXX */
    case AND_AND:
    case BANG:
    case BAR_AND:
    case DO:
    case DONE:
    case ELIF:
    case ELSE:
    case ESAC:
    case FI:
    case IF:
    case OR_OR:
    case SEMI_SEMI:
    case SEMI_AND:
    case SEMI_SEMI_AND:
    case THEN:
    case TIME:
    case TIMEOPT:
    case TIMEIGN:
    case COPROC:
    case UNTIL:
    case WHILE:
    case 0:
      return 1;
    default:
#if defined (COPROCESS_SUPPORT)
      if (last_read_token == WORD && token_before_that == COPROC)
	return 1;
#endif
      if (last_read_token == WORD && token_before_that == FUNCTION)
	return 1;
      return 0;
    }
}
    
/* Return the index of TOKEN in the alist of reserved words, or -1 if
   TOKEN is not a shell reserved word. */
int
find_reserved_word (tokstr)
     char *tokstr;
{
  int i;
  for (i = 0; word_token_alist[i].word; i++)
    if (STREQ (tokstr, word_token_alist[i].word))
      return i;
  return -1;
}

/* An interface to let the rest of the shell (primarily the completion
   system) know what the parser is expecting. */
int
parser_in_command_position ()
{
  return (command_token_position (last_read_token));
}

#if 0
#if defined (READLINE)
/* Called after each time readline is called.  This insures that whatever
   the new prompt string is gets propagated to readline's local prompt
   variable. */
static void
reset_readline_prompt ()
{
  char *temp_prompt;

  if (prompt_string_pointer)
    {
      temp_prompt = (*prompt_string_pointer)
			? decode_prompt_string (*prompt_string_pointer)
			: (char *)NULL;

      if (temp_prompt == 0)
	{
	  temp_prompt = (char *)xmalloc (1);
	  temp_prompt[0] = '\0';
	}

      FREE (current_readline_prompt);
      current_readline_prompt = temp_prompt;
    }
}
#endif /* READLINE */
#endif /* 0 */

#if defined (HISTORY)
/* A list of tokens which can be followed by newlines, but not by
   semi-colons.  When concatenating multiple lines of history, the
   newline separator for such tokens is replaced with a space. */
static const int no_semi_successors[] = {
  '\n', '{', '(', ')', ';', '&', '|',
  CASE, DO, ELSE, IF, SEMI_SEMI, SEMI_AND, SEMI_SEMI_AND, THEN, UNTIL,
  WHILE, AND_AND, OR_OR, IN,
  0
};

/* If we are not within a delimited expression, try to be smart
   about which separators can be semi-colons and which must be
   newlines.  Returns the string that should be added into the
   history entry.  LINE is the line we're about to add; it helps
   make some more intelligent decisions in certain cases. */
char *
history_delimiting_chars (line)
     const char *line;
{
  static int last_was_heredoc = 0;	/* was the last entry the start of a here document? */
  register int i;

  if ((parser_state & PST_HEREDOC) == 0)
    last_was_heredoc = 0;

  if (dstack.delimiter_depth != 0)
    return ("\n");

  /* We look for current_command_line_count == 2 because we are looking to
     add the first line of the body of the here document (the second line
     of the command).  We also keep LAST_WAS_HEREDOC as a private sentinel
     variable to note when we think we added the first line of a here doc
     (the one with a "<<" somewhere in it) */
  if (parser_state & PST_HEREDOC)
    {
      if (last_was_heredoc)
	{
	  last_was_heredoc = 0;
	  return "\n";
	}
      return (current_command_line_count == 2 ? "\n" : "");
    }

  if (parser_state & PST_COMPASSIGN)
    return (" ");

  /* First, handle some special cases. */
  /*(*/
  /* If we just read `()', assume it's a function definition, and don't
     add a semicolon.  If the token before the `)' was not `(', and we're
     not in the midst of parsing a case statement, assume it's a
     parenthesized command and add the semicolon. */
  /*)(*/
  if (token_before_that == ')')
    {
      if (two_tokens_ago == '(')	/*)*/	/* function def */
	return " ";
      /* This does not work for subshells inside case statement
	 command lists.  It's a suboptimal solution. */
      else if (parser_state & PST_CASESTMT)	/* case statement pattern */
	return " ";
      else	
	return "; ";				/* (...) subshell */
    }
  else if (token_before_that == WORD && two_tokens_ago == FUNCTION)
    return " ";		/* function def using `function name' without `()' */

  /* If we're not in a here document, but we think we're about to parse one,
     and we would otherwise return a `;', return a newline to delimit the
     line with the here-doc delimiter */
  else if ((parser_state & PST_HEREDOC) == 0 && current_command_line_count > 1 && last_read_token == '\n' && strstr (line, "<<"))
    {
      last_was_heredoc = 1;
      return "\n";
    }

  else if (token_before_that == WORD && two_tokens_ago == FOR)
    {
      /* Tricky.  `for i\nin ...' should not have a semicolon, but
	 `for i\ndo ...' should.  We do what we can. */
      for (i = shell_input_line_index; whitespace (shell_input_line[i]); i++)
	;
      if (shell_input_line[i] && shell_input_line[i] == 'i' && shell_input_line[i+1] == 'n')
	return " ";
      return ";";
    }
  else if (two_tokens_ago == CASE && token_before_that == WORD && (parser_state & PST_CASESTMT))
    return " ";

  for (i = 0; no_semi_successors[i]; i++)
    {
      if (token_before_that == no_semi_successors[i])
	return (" ");
    }

  return ("; ");
}
#endif /* HISTORY */

/* Issue a prompt, or prepare to issue a prompt when the next character
   is read. */
static void
prompt_again ()
{
  char *temp_prompt;

  if (interactive == 0 || expanding_alias ())	/* XXX */
    return;

  ps1_prompt = get_string_value ("PS1");
  ps2_prompt = get_string_value ("PS2");

  if (!prompt_string_pointer)
    prompt_string_pointer = &ps1_prompt;

  temp_prompt = *prompt_string_pointer
			? decode_prompt_string (*prompt_string_pointer)
			: (char *)NULL;

  if (temp_prompt == 0)
    {
      temp_prompt = (char *)xmalloc (1);
      temp_prompt[0] = '\0';
    }

  current_prompt_string = *prompt_string_pointer;
  prompt_string_pointer = &ps2_prompt;

#if defined (READLINE)
  if (!no_line_editing)
    {
      FREE (current_readline_prompt);
      current_readline_prompt = temp_prompt;
    }
  else
#endif	/* READLINE */
    {
      FREE (current_decoded_prompt);
      current_decoded_prompt = temp_prompt;
    }
}

int
get_current_prompt_level ()
{
  return ((current_prompt_string && current_prompt_string == ps2_prompt) ? 2 : 1);
}

void
set_current_prompt_level (x)
     int x;
{
  prompt_string_pointer = (x == 2) ? &ps2_prompt : &ps1_prompt;
  current_prompt_string = *prompt_string_pointer;
}
      
static void
print_prompt ()
{
  fprintf (stderr, "%s", current_decoded_prompt);
  fflush (stderr);
}

/* Return a string which will be printed as a prompt.  The string
   may contain special characters which are decoded as follows:

	\a	bell (ascii 07)
	\d	the date in Day Mon Date format
	\e	escape (ascii 033)
	\h	the hostname up to the first `.'
	\H	the hostname
	\j	the number of active jobs
	\l	the basename of the shell's tty device name
	\n	CRLF
	\r	CR
	\s	the name of the shell
	\t	the time in 24-hour hh:mm:ss format
	\T	the time in 12-hour hh:mm:ss format
	\@	the time in 12-hour hh:mm am/pm format
	\A	the time in 24-hour hh:mm format
	\D{fmt}	the result of passing FMT to strftime(3)
	\u	your username
	\v	the version of bash (e.g., 2.00)
	\V	the release of bash, version + patchlevel (e.g., 2.00.0)
	\w	the current working directory
	\W	the last element of $PWD
	\!	the history number of this command
	\#	the command number of this command
	\$	a $ or a # if you are root
	\nnn	character code nnn in octal
	\\	a backslash
	\[	begin a sequence of non-printing chars
	\]	end a sequence of non-printing chars
*/
#define PROMPT_GROWTH 48
char *
decode_prompt_string (string)
     char *string;
{
  WORD_LIST *list;
  char *result, *t;
  struct dstack save_dstack;
  int last_exit_value, last_comsub_pid;
#if defined (PROMPT_STRING_DECODE)
  int result_size, result_index;
  int c, n, i;
  char *temp, octal_string[4];
  struct tm *tm;  
  time_t the_time;
  char timebuf[128];
  char *timefmt;

  result = (char *)xmalloc (result_size = PROMPT_GROWTH);
  result[result_index = 0] = 0;
  temp = (char *)NULL;

  while (c = *string++)
    {
      if (posixly_correct && c == '!')
	{
	  if (*string == '!')
	    {
	      temp = savestring ("!");
	      goto add_string;
	    }
	  else
	    {
#if !defined (HISTORY)
		temp = savestring ("1");
#else /* HISTORY */
		temp = itos (history_number ());
#endif /* HISTORY */
		string--;	/* add_string increments string again. */
		goto add_string;
	    }
	}
      if (c == '\\')
	{
	  c = *string;

	  switch (c)
	    {
	    case '0':
	    case '1':
	    case '2':
	    case '3':
	    case '4':
	    case '5':
	    case '6':
	    case '7':
	      strncpy (octal_string, string, 3);
	      octal_string[3] = '\0';

	      n = read_octal (octal_string);
	      temp = (char *)xmalloc (3);

	      if (n == CTLESC || n == CTLNUL)
		{
		  temp[0] = CTLESC;
		  temp[1] = n;
		  temp[2] = '\0';
		}
	      else if (n == -1)
		{
		  temp[0] = '\\';
		  temp[1] = '\0';
		}
	      else
		{
		  temp[0] = n;
		  temp[1] = '\0';
		}

	      for (c = 0; n != -1 && c < 3 && ISOCTAL (*string); c++)
		string++;

	      c = 0;		/* tested at add_string: */
	      goto add_string;

	    case 'd':
	    case 't':
	    case 'T':
	    case '@':
	    case 'A':
	      /* Make the current time/date into a string. */
	      (void) time (&the_time);
#if defined (HAVE_TZSET)
	      sv_tz ("TZ");		/* XXX -- just make sure */
#endif
	      tm = localtime (&the_time);

	      if (c == 'd')
		n = strftime (timebuf, sizeof (timebuf), "%a %b %d", tm);
	      else if (c == 't')
		n = strftime (timebuf, sizeof (timebuf), "%H:%M:%S", tm);
	      else if (c == 'T')
		n = strftime (timebuf, sizeof (timebuf), "%I:%M:%S", tm);
	      else if (c == '@')
		n = strftime (timebuf, sizeof (timebuf), "%I:%M %p", tm);
	      else if (c == 'A')
		n = strftime (timebuf, sizeof (timebuf), "%H:%M", tm);

	      if (n == 0)
		timebuf[0] = '\0';
	      else
		timebuf[sizeof(timebuf) - 1] = '\0';

	      temp = savestring (timebuf);
	      goto add_string;

	    case 'D':		/* strftime format */
	      if (string[1] != '{')		/* } */
		goto not_escape;

	      (void) time (&the_time);
	      tm = localtime (&the_time);
	      string += 2;			/* skip { */
	      timefmt = xmalloc (strlen (string) + 3);
	      for (t = timefmt; *string && *string != '}'; )
		*t++ = *string++;
	      *t = '\0';
	      c = *string;	/* tested at add_string */
	      if (timefmt[0] == '\0')
		{
		  timefmt[0] = '%';
		  timefmt[1] = 'X';	/* locale-specific current time */
		  timefmt[2] = '\0';
		}
	      n = strftime (timebuf, sizeof (timebuf), timefmt, tm);
	      free (timefmt);

	      if (n == 0)
		timebuf[0] = '\0';
	      else
		timebuf[sizeof(timebuf) - 1] = '\0';

	      if (promptvars || posixly_correct)
		/* Make sure that expand_prompt_string is called with a
		   second argument of Q_DOUBLE_QUOTES if we use this
		   function here. */
		temp = sh_backslash_quote_for_double_quotes (timebuf);
	      else
		temp = savestring (timebuf);
	      goto add_string;
	      
	    case 'n':
	      temp = (char *)xmalloc (3);
	      temp[0] = no_line_editing ? '\n' : '\r';
	      temp[1] = no_line_editing ? '\0' : '\n';
	      temp[2] = '\0';
	      goto add_string;

	    case 's':
	      temp = base_pathname (shell_name);
	      temp = savestring (temp);
	      goto add_string;

	    case 'v':
	    case 'V':
	      temp = (char *)xmalloc (16);
	      if (c == 'v')
		strcpy (temp, dist_version);
	      else
		sprintf (temp, "%s.%d", dist_version, patch_level);
	      goto add_string;

	    case 'w':
	    case 'W':
	      {
		/* Use the value of PWD because it is much more efficient. */
		char t_string[PATH_MAX];
		int tlen;

		temp = get_string_value ("PWD");

		if (temp == 0)
		  {
		    if (getcwd (t_string, sizeof(t_string)) == 0)
		      {
			t_string[0] = '.';
			tlen = 1;
		      }
		    else
		      tlen = strlen (t_string);
		  }
		else
		  {
		    tlen = sizeof (t_string) - 1;
		    strncpy (t_string, temp, tlen);
		  }
		t_string[tlen] = '\0';

#if defined (MACOSX)
		/* Convert from "fs" format to "input" format */
		temp = fnx_fromfs (t_string, strlen (t_string));
		if (temp != t_string)
		  strcpy (t_string, temp);
#endif

#define ROOT_PATH(x)	((x)[0] == '/' && (x)[1] == 0)
#define DOUBLE_SLASH_ROOT(x)	((x)[0] == '/' && (x)[1] == '/' && (x)[2] == 0)
		/* Abbreviate \W as ~ if $PWD == $HOME */
		if (c == 'W' && (((t = get_string_value ("HOME")) == 0) || STREQ (t, t_string) == 0))
		  {
		    if (ROOT_PATH (t_string) == 0 && DOUBLE_SLASH_ROOT (t_string) == 0)
		      {
			t = strrchr (t_string, '/');
			if (t)
			  memmove (t_string, t + 1, strlen (t));	/* strlen(t) to copy NULL */
		      }
		  }
#undef ROOT_PATH
#undef DOUBLE_SLASH_ROOT
		else
		  {
		    /* polite_directory_format is guaranteed to return a string
		       no longer than PATH_MAX - 1 characters. */
		    temp = polite_directory_format (t_string);
		    if (temp != t_string)
		      strcpy (t_string, temp);
		  }

		temp = trim_pathname (t_string, PATH_MAX - 1);
		/* If we're going to be expanding the prompt string later,
		   quote the directory name. */
		if (promptvars || posixly_correct)
		  /* Make sure that expand_prompt_string is called with a
		     second argument of Q_DOUBLE_QUOTES if we use this
		     function here. */
		  temp = sh_backslash_quote_for_double_quotes (t_string);
		else
		  temp = savestring (t_string);

		goto add_string;
	      }

	    case 'u':
	      if (current_user.user_name == 0)
		get_current_user_info ();
	      temp = savestring (current_user.user_name);
	      goto add_string;

	    case 'h':
	    case 'H':
	      temp = savestring (current_host_name);
	      if (c == 'h' && (t = (char *)strchr (temp, '.')))
		*t = '\0';
	      goto add_string;

	    case '#':
	      temp = itos (current_command_number);
	      goto add_string;

	    case '!':
#if !defined (HISTORY)
	      temp = savestring ("1");
#else /* HISTORY */
	      temp = itos (history_number ());
#endif /* HISTORY */
	      goto add_string;

	    case '$':
	      t = temp = (char *)xmalloc (3);
	      if ((promptvars || posixly_correct) && (current_user.euid != 0))
		*t++ = '\\';
	      *t++ = current_user.euid == 0 ? '#' : '$';
	      *t = '\0';
	      goto add_string;

	    case 'j':
	      temp = itos (count_all_jobs ());
	      goto add_string;

	    case 'l':
#if defined (HAVE_TTYNAME)
	      temp = (char *)ttyname (fileno (stdin));
	      t = temp ? base_pathname (temp) : "tty";
	      temp = savestring (t);
#else
	      temp = savestring ("tty");
#endif /* !HAVE_TTYNAME */
	      goto add_string;

#if defined (READLINE)
	    case '[':
	    case ']':
	      if (no_line_editing)
		{
		  string++;
		  break;
		}
	      temp = (char *)xmalloc (3);
	      n = (c == '[') ? RL_PROMPT_START_IGNORE : RL_PROMPT_END_IGNORE;
	      i = 0;
	      if (n == CTLESC || n == CTLNUL)
		temp[i++] = CTLESC;
	      temp[i++] = n;
	      temp[i] = '\0';
	      goto add_string;
#endif /* READLINE */

	    case '\\':
	    case 'a':
	    case 'e':
	    case 'r':
	      temp = (char *)xmalloc (2);
	      if (c == 'a')
		temp[0] = '\07';
	      else if (c == 'e')
		temp[0] = '\033';
	      else if (c == 'r')
		temp[0] = '\r';
	      else			/* (c == '\\') */
	        temp[0] = c;
	      temp[1] = '\0';
	      goto add_string;

	    default:
not_escape:
	      temp = (char *)xmalloc (3);
	      temp[0] = '\\';
	      temp[1] = c;
	      temp[2] = '\0';

	    add_string:
	      if (c)
		string++;
	      result =
		sub_append_string (temp, result, &result_index, &result_size);
	      temp = (char *)NULL; /* Freed in sub_append_string (). */
	      result[result_index] = '\0';
	      break;
	    }
	}
      else
	{
	  RESIZE_MALLOCED_BUFFER (result, result_index, 3, result_size, PROMPT_GROWTH);
	  result[result_index++] = c;
	  result[result_index] = '\0';
	}
    }
#else /* !PROMPT_STRING_DECODE */
  result = savestring (string);
#endif /* !PROMPT_STRING_DECODE */

  /* Save the delimiter stack and point `dstack' to temp space so any
     command substitutions in the prompt string won't result in screwing
     up the parser's quoting state. */
  save_dstack = dstack;
  dstack = temp_dstack;
  dstack.delimiter_depth = 0;

  /* Perform variable and parameter expansion and command substitution on
     the prompt string. */
  if (promptvars || posixly_correct)
    {
      last_exit_value = last_command_exit_value;
      last_comsub_pid = last_command_subst_pid;
      list = expand_prompt_string (result, Q_DOUBLE_QUOTES, 0);
      free (result);
      result = string_list (list);
      dispose_words (list);
      last_command_exit_value = last_exit_value;
      last_command_subst_pid = last_comsub_pid;
    }
  else
    {
      t = dequote_string (result);
      free (result);
      result = t;
    }

  dstack = save_dstack;

  return (result);
}

/************************************************
 *						*
 *		ERROR HANDLING			*
 *						*
 ************************************************/

/* Report a syntax error, and restart the parser.  Call here for fatal
   errors. */
int
yyerror (msg)
     const char *msg;
{
  report_syntax_error ((char *)NULL);
  reset_parser ();
  return (0);
}

static char *
error_token_from_token (tok)
     int tok;
{
  char *t;

  if (t = find_token_in_alist (tok, word_token_alist, 0))
    return t;

  if (t = find_token_in_alist (tok, other_token_alist, 0))
    return t;

  t = (char *)NULL;
  /* This stuff is dicy and needs closer inspection */
  switch (current_token)
    {
    case WORD:
    case ASSIGNMENT_WORD:
      if (yylval.word)
	t = savestring (yylval.word->word);
      break;
    case NUMBER:
      t = itos (yylval.number);
      break;
    case ARITH_CMD:
      if (yylval.word_list)
        t = string_list (yylval.word_list);
      break;
    case ARITH_FOR_EXPRS:
      if (yylval.word_list)
	t = string_list_internal (yylval.word_list, " ; ");
      break;
    case COND_CMD:
      t = (char *)NULL;		/* punt */
      break;
    }

  return t;
}

static char *
error_token_from_text ()
{
  char *msg, *t;
  int token_end, i;

  t = shell_input_line;
  i = shell_input_line_index;
  token_end = 0;
  msg = (char *)NULL;

  if (i && t[i] == '\0')
    i--;

  while (i && (whitespace (t[i]) || t[i] == '\n'))
    i--;

  if (i)
    token_end = i + 1;

  while (i && (member (t[i], " \n\t;|&") == 0))
    i--;

  while (i != token_end && (whitespace (t[i]) || t[i] == '\n'))
    i++;

  /* Return our idea of the offending token. */
  if (token_end || (i == 0 && token_end == 0))
    {
      if (token_end)
	msg = substring (t, i, token_end);
      else	/* one-character token */
	{
	  msg = (char *)xmalloc (2);
	  msg[0] = t[i];
	  msg[1] = '\0';
	}
    }

  return (msg);
}

static void
print_offending_line ()
{
  char *msg;
  int token_end;

  msg = savestring (shell_input_line);
  token_end = strlen (msg);
  while (token_end && msg[token_end - 1] == '\n')
    msg[--token_end] = '\0';

  parser_error (line_number, "`%s'", msg);
  free (msg);
}

/* Report a syntax error with line numbers, etc.
   Call here for recoverable errors.  If you have a message to print,
   then place it in MESSAGE, otherwise pass NULL and this will figure
   out an appropriate message for you. */
static void
report_syntax_error (message)
     char *message;
{
  char *msg, *p;

  if (message)
    {
      parser_error (line_number, "%s", message);
      if (interactive && EOF_Reached)
	EOF_Reached = 0;
      last_command_exit_value = parse_and_execute_level ? EX_BADSYNTAX : EX_BADUSAGE;
      return;
    }

  /* If the line of input we're reading is not null, try to find the
     objectionable token.  First, try to figure out what token the
     parser's complaining about by looking at current_token. */
  if (current_token != 0 && EOF_Reached == 0 && (msg = error_token_from_token (current_token)))
    {
      if (ansic_shouldquote (msg))
	{
	  p = ansic_quote (msg, 0, NULL);
	  free (msg);
	  msg = p;
	}
      parser_error (line_number, _("syntax error near unexpected token `%s'"), msg);
      free (msg);

      if (interactive == 0)
	print_offending_line ();

      last_command_exit_value = parse_and_execute_level ? EX_BADSYNTAX : EX_BADUSAGE;
      return;
    }

  /* If looking at the current token doesn't prove fruitful, try to find the
     offending token by analyzing the text of the input line near the current
     input line index and report what we find. */
  if (shell_input_line && *shell_input_line)
    {
      msg = error_token_from_text ();
      if (msg)
	{
	  parser_error (line_number, _("syntax error near `%s'"), msg);
	  free (msg);
	}

      /* If not interactive, print the line containing the error. */
      if (interactive == 0)
        print_offending_line ();
    }
  else
    {
      msg = EOF_Reached ? _("syntax error: unexpected end of file") : _("syntax error");
      parser_error (line_number, "%s", msg);
      /* When the shell is interactive, this file uses EOF_Reached
	 only for error reporting.  Other mechanisms are used to
	 decide whether or not to exit. */
      if (interactive && EOF_Reached)
	EOF_Reached = 0;
    }

  last_command_exit_value = parse_and_execute_level ? EX_BADSYNTAX : EX_BADUSAGE;
}

/* ??? Needed function. ??? We have to be able to discard the constructs
   created during parsing.  In the case of error, we want to return
   allocated objects to the memory pool.  In the case of no error, we want
   to throw away the information about where the allocated objects live.
   (dispose_command () will actually free the command.) */
static void
discard_parser_constructs (error_p)
     int error_p;
{
}

/************************************************
 *						*
 *		EOF HANDLING			*
 *						*
 ************************************************/

/* Do that silly `type "bye" to exit' stuff.  You know, "ignoreeof". */

/* A flag denoting whether or not ignoreeof is set. */
int ignoreeof = 0;

/* The number of times that we have encountered an EOF character without
   another character intervening.  When this gets above the limit, the
   shell terminates. */
int eof_encountered = 0;

/* The limit for eof_encountered. */
int eof_encountered_limit = 10;

/* If we have EOF as the only input unit, this user wants to leave
   the shell.  If the shell is not interactive, then just leave.
   Otherwise, if ignoreeof is set, and we haven't done this the
   required number of times in a row, print a message. */
static void
handle_eof_input_unit ()
{
  if (interactive)
    {
      /* shell.c may use this to decide whether or not to write out the
	 history, among other things.  We use it only for error reporting
	 in this file. */
      if (EOF_Reached)
	EOF_Reached = 0;

      /* If the user wants to "ignore" eof, then let her do so, kind of. */
      if (ignoreeof)
	{
	  if (eof_encountered < eof_encountered_limit)
	    {
	      fprintf (stderr, _("Use \"%s\" to leave the shell.\n"),
		       login_shell ? "logout" : "exit");
	      eof_encountered++;
	      /* Reset the parsing state. */
	      last_read_token = current_token = '\n';
	      /* Reset the prompt string to be $PS1. */
	      prompt_string_pointer = (char **)NULL;
	      prompt_again ();
	      return;
	    }
	}

      /* In this case EOF should exit the shell.  Do it now. */
      reset_parser ();
      exit_builtin ((WORD_LIST *)NULL);
    }
  else
    {
      /* We don't write history files, etc., for non-interactive shells. */
      EOF_Reached = 1;
    }
}

/************************************************
 *						*
 *	STRING PARSING FUNCTIONS		*
 *						*
 ************************************************/

/* It's very important that these two functions treat the characters
   between ( and ) identically. */

static WORD_LIST parse_string_error;

/* Take a string and run it through the shell parser, returning the
   resultant word list.  Used by compound array assignment. */
WORD_LIST *
parse_string_to_word_list (s, flags, whom)
     char *s;
     int flags;
     const char *whom;
{
  WORD_LIST *wl;
  int tok, orig_current_token, orig_line_number, orig_input_terminator;
  int orig_line_count;
  int old_echo_input, old_expand_aliases;
#if defined (HISTORY)
  int old_remember_on_history, old_history_expansion_inhibited;
#endif

#if defined (HISTORY)
  old_remember_on_history = remember_on_history;
#  if defined (BANG_HISTORY)
  old_history_expansion_inhibited = history_expansion_inhibited;
#  endif
  bash_history_disable ();
#endif

  orig_line_number = line_number;
  orig_line_count = current_command_line_count;
  orig_input_terminator = shell_input_line_terminator;
  old_echo_input = echo_input_at_read;
  old_expand_aliases = expand_aliases;

  push_stream (1);
  last_read_token = WORD;		/* WORD to allow reserved words here */
  current_command_line_count = 0;
  echo_input_at_read = expand_aliases = 0;

  with_input_from_string (s, whom);
  wl = (WORD_LIST *)NULL;

  if (flags & 1)
    parser_state |= PST_COMPASSIGN|PST_REPARSE;

  while ((tok = read_token (READ)) != yacc_EOF)
    {
      if (tok == '\n' && *bash_input.location.string == '\0')
	break;
      if (tok == '\n')		/* Allow newlines in compound assignments */
	continue;
      if (tok != WORD && tok != ASSIGNMENT_WORD)
	{
	  line_number = orig_line_number + line_number - 1;
	  orig_current_token = current_token;
	  current_token = tok;
	  yyerror (NULL);	/* does the right thing */
	  current_token = orig_current_token;
	  if (wl)
	    dispose_words (wl);
	  wl = &parse_string_error;
	  break;
	}
      wl = make_word_list (yylval.word, wl);
    }
  
  last_read_token = '\n';
  pop_stream ();

#if defined (HISTORY)
  remember_on_history = old_remember_on_history;
#  if defined (BANG_HISTORY)
  history_expansion_inhibited = old_history_expansion_inhibited;
#  endif /* BANG_HISTORY */
#endif /* HISTORY */

  echo_input_at_read = old_echo_input;
  expand_aliases = old_expand_aliases;

  current_command_line_count = orig_line_count;
  shell_input_line_terminator = orig_input_terminator;

  if (flags & 1)
    parser_state &= ~(PST_COMPASSIGN|PST_REPARSE);

  if (wl == &parse_string_error)
    {
      last_command_exit_value = EXECUTION_FAILURE;
      if (interactive_shell == 0 && posixly_correct)
	jump_to_top_level (FORCE_EOF);
      else
	jump_to_top_level (DISCARD);
    }

  return (REVERSE_LIST (wl, WORD_LIST *));
}

static char *
parse_compound_assignment (retlenp)
     int *retlenp;
{
  WORD_LIST *wl, *rl;
  int tok, orig_line_number, orig_token_size, orig_last_token, assignok;
  char *saved_token, *ret;

  saved_token = token;
  orig_token_size = token_buffer_size;
  orig_line_number = line_number;
  orig_last_token = last_read_token;

  last_read_token = WORD;	/* WORD to allow reserved words here */

  token = (char *)NULL;
  token_buffer_size = 0;

  assignok = parser_state&PST_ASSIGNOK;		/* XXX */

  wl = (WORD_LIST *)NULL;	/* ( */
  parser_state |= PST_COMPASSIGN;

  while ((tok = read_token (READ)) != ')')
    {
      if (tok == '\n')			/* Allow newlines in compound assignments */
	{
	  if (SHOULD_PROMPT ())
	    prompt_again ();
	  continue;
	}
      if (tok != WORD && tok != ASSIGNMENT_WORD)
	{
	  current_token = tok;	/* for error reporting */
	  if (tok == yacc_EOF)	/* ( */
	    parser_error (orig_line_number, _("unexpected EOF while looking for matching `)'"));
	  else
	    yyerror(NULL);	/* does the right thing */
	  if (wl)
	    dispose_words (wl);
	  wl = &parse_string_error;
	  break;
	}
      wl = make_word_list (yylval.word, wl);
    }

  FREE (token);
  token = saved_token;
  token_buffer_size = orig_token_size;

  parser_state &= ~PST_COMPASSIGN;

  if (wl == &parse_string_error)
    {
      last_command_exit_value = EXECUTION_FAILURE;
      last_read_token = '\n';	/* XXX */
      if (interactive_shell == 0 && posixly_correct)
	jump_to_top_level (FORCE_EOF);
      else
	jump_to_top_level (DISCARD);
    }

  last_read_token = orig_last_token;		/* XXX - was WORD? */

  if (wl)
    {
      rl = REVERSE_LIST (wl, WORD_LIST *);
      ret = string_list (rl);
      dispose_words (rl);
    }
  else
    ret = (char *)NULL;

  if (retlenp)
    *retlenp = (ret && *ret) ? strlen (ret) : 0;

  if (assignok)
    parser_state |= PST_ASSIGNOK;

  return ret;
}

/************************************************
 *						*
 *   SAVING AND RESTORING PARTIAL PARSE STATE   *
 *						*
 ************************************************/

sh_parser_state_t *
save_parser_state (ps)
     sh_parser_state_t *ps;
{
  if (ps == 0)
    ps = (sh_parser_state_t *)xmalloc (sizeof (sh_parser_state_t));
  if (ps == 0)
    return ((sh_parser_state_t *)NULL);

  ps->parser_state = parser_state;
  ps->token_state = save_token_state ();

  ps->input_line_terminator = shell_input_line_terminator;
  ps->eof_encountered = eof_encountered;

  ps->prompt_string_pointer = prompt_string_pointer;

  ps->current_command_line_count = current_command_line_count;

#if defined (HISTORY)
  ps->remember_on_history = remember_on_history;
#  if defined (BANG_HISTORY)
  ps->history_expansion_inhibited = history_expansion_inhibited;
#  endif
#endif

  ps->last_command_exit_value = last_command_exit_value;
#if defined (ARRAY_VARS)
  ps->pipestatus = save_pipestatus_array ();
#endif
    
  ps->last_shell_builtin = last_shell_builtin;
  ps->this_shell_builtin = this_shell_builtin;

  ps->expand_aliases = expand_aliases;
  ps->echo_input_at_read = echo_input_at_read;
  ps->need_here_doc = need_here_doc;

  ps->token = token;
  ps->token_buffer_size = token_buffer_size;
  /* Force reallocation on next call to read_token_word */
  token = 0;
  token_buffer_size = 0;

  return (ps);
}

void
restore_parser_state (ps)
     sh_parser_state_t *ps;
{
  if (ps == 0)
    return;

  parser_state = ps->parser_state;
  if (ps->token_state)
    {
      restore_token_state (ps->token_state);
      free (ps->token_state);
    }

  shell_input_line_terminator = ps->input_line_terminator;
  eof_encountered = ps->eof_encountered;

  prompt_string_pointer = ps->prompt_string_pointer;

  current_command_line_count = ps->current_command_line_count;

#if defined (HISTORY)
  remember_on_history = ps->remember_on_history;
#  if defined (BANG_HISTORY)
  history_expansion_inhibited = ps->history_expansion_inhibited;
#  endif
#endif

  last_command_exit_value = ps->last_command_exit_value;
#if defined (ARRAY_VARS)
  restore_pipestatus_array (ps->pipestatus);
#endif

  last_shell_builtin = ps->last_shell_builtin;
  this_shell_builtin = ps->this_shell_builtin;

  expand_aliases = ps->expand_aliases;
  echo_input_at_read = ps->echo_input_at_read;
  need_here_doc = ps->need_here_doc;

  FREE (token);
  token = ps->token;
  token_buffer_size = ps->token_buffer_size;
}

sh_input_line_state_t *
save_input_line_state (ls)
     sh_input_line_state_t *ls;
{
  if (ls == 0)
    ls = (sh_input_line_state_t *)xmalloc (sizeof (sh_input_line_state_t));
  if (ls == 0)
    return ((sh_input_line_state_t *)NULL);

  ls->input_line = shell_input_line;
  ls->input_line_size = shell_input_line_size;
  ls->input_line_len = shell_input_line_len;
  ls->input_line_index = shell_input_line_index;

  /* force reallocation */
  shell_input_line = 0;
  shell_input_line_size = shell_input_line_len = shell_input_line_index = 0;

  return ls;
}

void
restore_input_line_state (ls)
     sh_input_line_state_t *ls;
{
  FREE (shell_input_line);
  shell_input_line = ls->input_line;
  shell_input_line_size = ls->input_line_size;
  shell_input_line_len = ls->input_line_len;
  shell_input_line_index = ls->input_line_index;

  set_line_mbstate ();
}

/************************************************
 *						*
 *	MULTIBYTE CHARACTER HANDLING		*
 *						*
 ************************************************/

#if defined (HANDLE_MULTIBYTE)
static void
set_line_mbstate ()
{
  int c;
  size_t i, previ, len;
  mbstate_t mbs, prevs;
  size_t mbclen;

  if (shell_input_line == NULL)
    return;
  len = strlen (shell_input_line);	/* XXX - shell_input_line_len ? */
  FREE (shell_input_line_property);
  shell_input_line_property = (char *)xmalloc (len + 1);

  memset (&prevs, '\0', sizeof (mbstate_t));
  for (i = previ = 0; i < len; i++)
    {
      mbs = prevs;

      c = shell_input_line[i];
      if (c == EOF)
	{
	  size_t j;
	  for (j = i; j < len; j++)
	    shell_input_line_property[j] = 1;
	  break;
	}

      mbclen = mbrlen (shell_input_line + previ, i - previ + 1, &mbs);
      if (mbclen == 1 || mbclen == (size_t)-1)
	{
	  mbclen = 1;
	  previ = i + 1;
	}
      else if (mbclen == (size_t)-2)
        mbclen = 0;
      else if (mbclen > 1)
	{
	  mbclen = 0;
	  previ = i + 1;
	  prevs = mbs;
	}
      else
	{
	  /* XXX - what to do if mbrlen returns 0? (null wide character) */
	  size_t j;
	  for (j = i; j < len; j++)
	    shell_input_line_property[j] = 1;
	  break;
	}

      shell_input_line_property[i] = mbclen;
    }
}
#endif /* HANDLE_MULTIBYTE */

