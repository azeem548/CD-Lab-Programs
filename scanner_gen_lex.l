%%
int|float|while|for|if printf("\n %s is a keyword",yytext); 

[a-zA-Z][a-zA-Z0-9]* printf("\n %s is an identifier",yytext); 

[+|-|*|/] printf("\n %s is an operator",yytext);

[0-9] printf("\n %s is a number",yytext);

[%|@|#|&] printf("\n %s is a special symbol",yytext);

%%

main()
{

yylex(); 
}


int yywrap() 
{
}