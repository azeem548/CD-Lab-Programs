%{ 
    int lineno;
%}
%%
^(.*)\n printf("%d \t %s",++lineno,yytext);
%% 
int main(int argc,char *argv[])
{
     yyin = fopen(argv[1],"r");
    yylex(); 
    fclose(yyin); 
}
    int yywrap(void) { return 1;} 