%{
#include "y.tab.h"
%}
%%
[0-9]+ {yylval=atoi(yytext);
return digit;
}
[\t] ;
\n return 0;
. return yytext[0];
%%