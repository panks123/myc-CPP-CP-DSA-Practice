#include<stdio.h>
int length(char* s)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {

    }
    return i;
}
void main()
{
    char *s="Pankaj";
    printf("%d\n",length(s));
    char *s1="Pankaj Kumar";
    printf("%d\n",length(s1));
}
