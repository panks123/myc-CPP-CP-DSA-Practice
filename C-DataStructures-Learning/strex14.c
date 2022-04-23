//checking two strings if they are anagram or not using hash table(reducing the time complexity)
#include<stdio.h>
void main()
{
    //char s1[]="listen";
    //char s2[]="silent";
    //char s1[]="medical";
    //char s2[]="decimal";
    //char s1[]="triangle";
    //char s2[]="integral";
    char s1[]="verbose";
    char s2[]="observe";
    int i,j;
    for(i=0;s1[i]!='\0';i++){}
    for(j=0;s2[j]!='\0';j++){}
    if(i!=j)
        printf("not anagram\n");
    else
    {
        int H[26]={0};
        for(i=0;s1[i]!='\0';i++)
        {
            H[s1[i]-97]++;
        }
        for(j=0;s2[j]!='\0';j++)
        {
            H[s2[j]-97]--;
            if(H[s2[j]-97]<0)
            {
                printf("Not anagram\n");
                break;
            }
        }
        if(s2[j]=='\0')
            printf("Anagram\n");
    }
}
