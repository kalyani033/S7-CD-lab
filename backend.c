#include<stdio.h>
#include<string.h>
char code[30][20],str[30],opr[30];
int main()
{
    int i=0;
    printf("Enter the intermediate code terminated by exit\n");
    do
    {
        scanf("%s",code[i]);
    }while(strcmp(code[i++],"exit")!=0);
    
    printf("Target Code generation\n");
    i=0;
    do
    {
        
        strcpy(str,code[i]);
        switch(str[3])
        {
            case '+':
                     strcpy(opr,"ADD");
                     break;
            case '-':
                     strcpy(opr,"SUB");
                     break;
            case '*':
                     strcpy(opr,"MUL");
                     break;
            case '/':
                     strcpy(opr,"DIV");
                     break;
            
        }
        printf("MOV %c,R%d\n",str[2],i);
        printf("%s%c, ,R%d\n",opr,str[4],i);
        printf("MOV R%d,%s\n",i,str[0]);
    }while(strcmp(code[++i],"exit")!=0);
    
    
}
