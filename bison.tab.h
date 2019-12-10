
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     lcm1 = 274,
     cos1 = 275,
     asin1 = 276,
     acos1 = 277,
     Cir_area = 278,
     STAR = 279,
     CHAR = 280,
     SORT = 281,
     Prime = 282,
     Print = 283,
     MAIN = 284,
     PB = 285,
     CMP = 286,
     REV = 287,
     FACT = 288,
     CUM = 289,
     CMP1 = 290,
     MINI = 291,
     PE = 292,
     BB = 293,
     BE = 294,
     SM = 295,
     CM = 296,
     ASGN = 297,
     PRINTVAR = 298,
     MAXI = 299,
     PRINTSTR = 300,
     PRINTLN = 301,
     IF = 302,
     ELSE = 303,
     ELSEIF = 304,
     FOR = 305,
     INC = 306,
     TO = 307,
     SWITCH = 308,
     DEFAULT = 309,
     COL = 310,
     FUNCTION = 311,
     IFX = 312,
     SH = 313
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 68 "bison.y"

  char text[1000];
  int val;



/* Line 1676 of yacc.c  */
#line 117 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


