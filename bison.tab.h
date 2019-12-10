
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

/* Line 1676 of yacc.c  */
#line 68 "bison.y"

  char text[1000];
  int val;



/* Line 1676 of yacc.c  */
#line 118 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


