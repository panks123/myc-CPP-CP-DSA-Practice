//Reversing a string using an extra array
#include<stdio.h>
void main()
{
    //char s[]="Pankaj";
    char s[]="Pankaj Kumar";
    int i;
    for(i=0;s[i]!='\0';i++){}
    char s1[i+1];
    s1[i]='\0';
    i=i-1;
    for(int j=0;i>=0;i--,j++)
    {
        s1[j]=s[i];
    }
    for(int j=0;s1[j]!='\0';j++)
        printf("%c",s1[j]);
    printf("\n");
}
