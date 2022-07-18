#include<stdio.h>
#include<string.h>

#include<unistd.h>
#include<ctype.h>
/*This program reads the contents of File SampleInput.txt and classifies the tokens*/
int main(int argc, char *argv[])
{
int i;
int i2;
int c;
char c1;
char c2,str[20];
char buff[20];
char

*KeyList[]={"int","main","stdio.h","include","string","float","printf","scanf","while","if","for"
};

char *OpList[]={"+","-","*","!=","=","==","<",">","."};
char *SymbList[]={"(",")",",",";","#","{","}","%","&"};
int lineNo;
lineNo=1;
int tokenNo;
tokenNo=0;
FILE *fp1,*fp2;
fp1=fopen("Sample.txt","r");
fp2=fopen("SampleOutput2.txt","w");
int f=0;
fprintf(fp2,"TokenNo \t \t LineNo \t\t Lexeme \t \t Token \n");
while(!feof(fp1))
{
i=fscanf(fp1,"%c",&c1);
if(c1=='\n')

lineNo++;
c=fscanf(fp1,"%s",buff);
tokenNo++;
f=0;
for(i=0;i<11;i++)
{
if(strcmp(KeyList[i],buff)==0)
{

fprintf(fp2,"%d \t \t %d \t \t %s \t \t KeyWord \n",tokenNo,lineNo,buff);
f=1;
}
}

for(i=0;i<9;i++)
{
if (strcmp(OpList[i],buff)==0)
{

fprintf(fp2,"%d \t \t %d \t \t %s \t \t Operator \n",tokenNo,lineNo,buff); f=1;
}
}

for(i=0;i<9;i++)
{
if(strcmp(SymbList[i],buff)==0)
{
fprintf(fp2,"%d \t \t %d \t \t %s \t \t Special Symbol\n",tokenNo,lineNo,buff);

f=1;
}
}
if((isalpha(buff[0]))&&(f==0))
{
fprintf(fp2,"%d \t \t %d \t \t %s \t \t Identifier \n",tokenNo,lineNo,buff);
}
if(isdigit(buff[0]))

fprintf(fp2,"%d \t \t %d \t \t %s \t \t Constant \n",tokenNo,lineNo,buff);

}
}


File : Sample.txt

int main ( )

{

int a1 = 10 ;

printf (" a = %d " , a );

}
