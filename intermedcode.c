#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char op[2],arg1[20],arg2[20],result[20];
int main()
{
    
    FILE *f1,*f2;
    f1=fopen("input.txt","r");
    f2=fopen("output.txt","w");
    while(!feof(f1))
    {
    fscanf(f1,"%s%s%s%s",op,arg1,arg2,result);
    if(strcmp(op,"+")==0)
    {
        fprintf(f2,"MOV R0,%s\n",arg1);
        fprintf(f2,"ADD R0,%s\n",arg2);
        fprintf(f2,"MOV %s,R0\n",result);
    }
    if(strcmp(op,"*")==0)
    {
        fprintf(f2,"MOV R0,%s\n",arg1);
        fprintf(f2,"MUL R0,%s\n",arg2);
        fprintf(f2,"MOV %s,R0\n",result);
    }
    if(strcmp(op,"-")==0)
    {
        fprintf(f2,"MOV R0,%s\n",arg1);
        fprintf(f2,"SUB R0,%s\n",arg2);
        fprintf(f2,"MOV %s,R0\n",result);
    }
    if(strcmp(op,"/")==0)
    {
        fprintf(f2,"MOV R0,%s\n",arg1);
        fprintf(f2,"DIV R0,%s\n",arg2);
        fprintf(f2,"MOV %s,R0\n",result);
    }
    if(strcmp(op,"=")==0)
    {
        fprintf(f2,"MOV R0,%s\n",arg1);
        
        fprintf(f2,"MOV %s,R0\n",result);
    }
    }
    fclose(f1);
    fclose(f2);
}
