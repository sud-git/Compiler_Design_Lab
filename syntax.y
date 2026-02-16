%{
#include <stdio.h>
%}
%token NUMBER
%%
input : expr '\n'        { printf("Parsing Complete\n"); }
      ;
expr  : expr '+' term    { printf("Addition\n"); }
      | term
      ;
term  : term '*' factor  { printf("Multiplication\n"); }
      | factor
      ;
factor: NUMBER           { printf("Number\n"); }
      ;
%%
int main() {
    printf("Enter expression:\n");
    yyparse();
    return 0;
}
int yyerror(char *s) {
    printf("Invalid Expression\n");
    return 0;
}