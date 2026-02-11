%{
#include <stdio.h>
%}
%%
boolean|int|char|float|double|long   { printf("keyword\n"); }
[+-]?[0-9]+                          { printf("constant\n"); }
[a-zA-Z][a-zA-Z0-9]*                 { printf("identifier\n"); }
"=="|"!="|"<="|">="|"="|"+"|"-"|"*"|"/"|"%"|"<"|">"   { printf("OPERATOR\n"); }
%%
int main() {
    yylex();
    return 0;
}
int yywrap() {
    return 1;
}