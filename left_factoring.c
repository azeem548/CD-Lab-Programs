#include<stdio.h>  
#include<string.h>  
  int main()  
  {  
       char gram[20],part1[20],part2[20],modifiedGram[20],newGram[20];  
       int i,j=0,k=0,l=0,pos;  
       printf("Enter Production : A->");  
       scanf("%s",gram);  
       for(i=0;gram[i]!='|';i++,j++)  
            part1[j]=gram[i];  
       i++;  
       for(j=i,i=0;gram[j]!='\0';j++,i++)  
            part2[i]=gram[j];  
     
       for(i=0;i<strlen(part1)||i<strlen(part2);i++)  
       {  
            if(part1[i]==part2[i])  
            {  
                 modifiedGram[k]=part1[i];  
                 k++;  
                 pos=i+1;  
            }  
       }  
       modifiedGram[k]='X'; 
       for(i=pos,j=0;part1[i]!='\0';i++,j++){  
            newGram[j]=part1[i];  
       }  
       newGram[j]='|';
       j++;
       for(i=pos;part2[i]!='\0';i++,j++){  
            newGram[j]=part2[i];  
       }  
        
       modifiedGram[++k]='\0';  
       newGram[j]='\0';  
       printf("\n A->%s",modifiedGram);  
       printf("\n X->%s\n",newGram);  
  }