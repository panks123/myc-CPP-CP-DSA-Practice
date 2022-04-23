//checking two strings if they are anagram or not(may not work if duplicate is present)
#include<stdio.h>
void main()
{
    //char s1[]="medical";
    //char s2[]="decimal";
    //char s1[]="triangle";
    //char s2[]="integral";
    char s1[]="listen";
    char s2[]="silent";
    int i,j;
    for(i=0;s1[i]!='\0';i++){}
    for(j=0;s2[j]!='\0';j++){}
    if(i!=j)
        printf("not anagrams\n");
    else
    {
        int flag;
        for(i=0;s1[i]!='\0';i++)
        {
            flag=0;
            for(j=0;s2[j]!='\0';j++)
            {
                if(s1[i]==s2[j])
                    flag=1;
            }
            if(flag==0)
            {
                printf("Not anagram\n");
                break;
            }
        }
        if(flag==1)
            printf("Anagram\n");
    }
}
