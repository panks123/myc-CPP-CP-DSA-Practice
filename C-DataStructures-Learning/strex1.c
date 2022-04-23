#include<stdio.h>
#include<string.h>
void main()
{
    char *s="Pankaj";
    printf("%s\n",s);
    char *s1="Pankaj Kumar";
    printf("%s\n",s1);
    char *s2="Pankaj Kumar xyz";
    printf("%s\n",s2);
    for(int i=0;s1[i]!='\0';i++)
        printf("%c",s1[i]);
    printf("\n");
    puts(s2);
}

