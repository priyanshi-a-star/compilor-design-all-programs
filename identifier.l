%{
#include<stdio.h>
%}
%%
[a-zA-Z]+  {printf("Valid Identifier");}
.+ {printf("Invalid Identifier");}
%%
int yywrap()
{
return 1;
}
int main()
{
yylex();
}
