%{
int num = 0,r=0,s=0,p=1;

%}
%%
[0-9]* {
num = atoi(yytext);
while(num!=0){
r = num%2;
s = s +r*p;
p=p*10;
num = num/2;
}
}
\n {
printf("\nThe binary equivalent is %d",s);
return;

}

%%
int main(void){
printf("Enter a decimal number\n");
yylex();
return 0;
}
int yywrap(void){return 1;}
