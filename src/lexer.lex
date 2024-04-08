%{
#include <stdio.h>
#include <string.h>
#include "TeaplAst.h"
#include "y.tab.hpp"
extern int line, col;
int c;
int calc(char *s, int len);
%}


%start COMMENT1 COMMENT2
%%

<INITIAL>{
"//" {BEGIN COMMENT1;}
"/*" {BEGIN COMMENT2;}
[\n\r] {line=line+1;col=0;}
"+" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return ADD;}
"-" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return SUB;}
"*" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return MUL;}
"/" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return DIV;}
";" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return SEMICOLON;}
"(" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return LEFT_PARENT;}
")" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return RIGHT_PARENT;} 
"[" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return LEFT_SQUARE_BRACKET;}
"]" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return RIGHT_SQUARE_BRACKET;}
"{" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return LEFT_BRACE;}
"}" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return RIGHT_BRACE;}
">=" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return NOT_LESS_THEN;}
">" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return GREATER;}
"<=" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return NOT_GREATER_THEN;}
"<" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return LESS;} 
"!=" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return NOT_EQUAL;}
"==" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return EQUAL;}
"=" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return ASSIGN;}
"," {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return COMMA;}
":" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return COLON;}
"let" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return LET;}
"." {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return POINT;}
"ret" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return RET;}
"&&" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return AND;}
"||" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return OR;}
"!" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return NOT;}
"fn" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return FN;}
"if" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return IF;}
"else" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return ELSE;}
"while" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return WHILE;}
"break" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return BREAK;}
"continue" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return CONTINUE;}
"->" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return RIGHT_ARROW;}
"int" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return INT;}
"struct" {yylval.pos=A_Pos(line,col);col+=strlen(yytext);return STRUCT;}
" " {col+=1;}
"\t" {col+=4;}
[a-zA-Z_]+([a-zA-Z0-9_]*) 	{ 
    int len = strlen(yytext);
    char* new_text = (char*)malloc((len+1)*sizeof(char));
    strcpy(new_text, yytext);
    new_text[len]='\0';
    yylval.tokenId = A_TokenId(A_Pos(line, col), new_text); col+=strlen(yytext); return Id; 
}
([1-9]+[0-9]*)|[0]	{ yylval.tokenNum = A_TokenNum(A_Pos(line, col),atoi(yytext)); col+=strlen(yytext); return Num; }
.	{ printf("Illegal Character:%s\n",yytext); }
}
<COMMENT1>{
[\n\r] {  BEGIN INITIAL; line=line+1; col=0; }
. {/*comment*/}
}

<COMMENT2>{
"*/" {  BEGIN INITIAL;  }
[\n\r] { line=line+1; col=0;  }
. {/*comment*/}
}
%%


// This function takes a string of digits and its length as input, and returns the integer value of the string.
int calc(char *s, int len) {
    int ret = 0;
    for(int i = 0; i < len; i++)
        ret = ret * 10 + (s[i] - '0');
    return ret;
}