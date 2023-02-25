%{
#include<stdio.h>
%}
%%
[0-9]{10} {printf("\nMobile Number Valid\n");}
.+ {printf("\nMobile Number Invalid\n");}
%%
int yywrap()
{
return 1;
}
int main()
{
printf("\nEnter Mobile Number : ");
yylex();
printf("\n");
}



