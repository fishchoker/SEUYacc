%token c d

%start S
%%

S
	: C C
	;

C
	: c C
	| d
	;



%%
#include <stdio.h>

extern char yytext[];
extern int column;

void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
