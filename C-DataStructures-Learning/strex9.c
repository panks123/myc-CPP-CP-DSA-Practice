//comparing two strings
#include<stdio.h>
void main()
{
    //char s1[]="pankaj";
    //char s2[]="pankaj";
    //char s1[]="Pankaj";
    //char s2[]="ankaj";
    char s1[]="pankaj";
    char s2[]="pamyra";
    int i,j;
    for(i=0,j=0;s1[i]!='\0'||s2[j]!='\0';i++,j++)
    {
        if(s1[i]!=s2[j])
            break;
    }
    if(s1[i]==s2[j])
        printf("s1=s2\n");
    else if(s1[i]<s2[j])
        printf("s1<s2");
    else
        printf("s1>s2");
}
