%{
#include "y.tab.h"
%}
%%
[0-9]+    { return NUMBER; }
"+"       { return '+'; }
"*"       { return '*'; }
\n        { return '\n'; }
[ \t]     { }
.         { return yytext[0]; }
%%
int yywrap() {
    return 1;
}