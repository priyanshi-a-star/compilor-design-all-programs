%{
#include<stdio.h>
int v=0,c=0;
%}
%%
[aeiouAEIOU] {v++;}
[a-zA-Z] {c++;}
%%
int yywrap()
{
return 1;
}
int main()
{
yylex();
printf("No of Vowels are %d\n",v);
printf("No of Consonants %d\n",c);
}