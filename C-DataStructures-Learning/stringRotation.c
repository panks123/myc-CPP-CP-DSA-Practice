#include<stdio.h>
#include<string.h>
int isSubstring(char *s1,char *s2)
{
    if(strlen(s1)<strlen(s2))
        return 0;
    int i,j;
    j=0;
    for(i=0;i<=strlen(s1)-strlen(s2);i++)
    {
        if(s1[i]==s2[0])
        {
            for(j=0;s2[j]!='\0';j++)
            {
                if(s1[i]!=s2[j])
                    break;
            }
            if(j==strlen(s2))
                return 1;
        }
    }
    return 0;
}
void main()
{
    char s1[100];
    char s2[100];
    printf("%d",isSubstring("Pankaj","an"));
}
