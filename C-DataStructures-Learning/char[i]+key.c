#include<stdio.h>
#include<string.h>
char fun(char x,int n)
{
    char result;
    if(x+n>122)
        result=(x+n)-26;
    else if(x+n>=97&&x+n<=122)
        result=x+n;
    else if(x+n>90)
        result=(x+n)-26;
    else
        result=x+n;
    return result;
}
void main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    int key;
    printf("Enter an integer(1-25):");
    scanf("%d",&key);
    for(int i=0;str[i];i++)
    {
        char res;
        if(str[i]=='-'||str[i]==' ')
            res=str[i];
        else
            res=fun(str[i],key);
        printf("%c",res);
    }
}

