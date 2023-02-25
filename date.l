%{
#include<stdio.h>
%}
digit[0-9]
%%
[0-9][0-9][/-][0-9][0-9][-/][0-9][0-9][0-9][0-9] {printf("\n  date recognized");}
.+ {printf("\n  enter input  is not a date");}
%%
int yywrap()
{
return 1;
}
void main()
{
printf("\n enter input to recognize the date");
yylex();
}
