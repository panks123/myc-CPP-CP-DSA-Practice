#include<stdio.h>
#include<string.h>
void main()
{
    /*char *s;
    scanf("%s",&s);
    printf("%s\n",s);
    char *s1;
    scanf("%s",s1);
    printf("%s\n",s1);*/
    /*char s[20];
    gets(s);
    puts(s);
    char s1[20];
    scanf("%s",s1);
    printf("%s",s1);
    printf("\n");
    puts(s1);*/
    char s2[20];
    scanf("%[^\n]%*c",s2);
    printf("%s",s2);
    printf("\n");
    puts(s2);
}
