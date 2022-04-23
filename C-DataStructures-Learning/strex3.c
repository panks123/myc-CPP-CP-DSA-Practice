//Changing uppercase letters to lowercase letters
#include<stdio.h>
void main()
{
    char s[]="PanKaj KuMar";
    printf("%s\n",s);
    for(int i=0;s[i]!='\0';i++)
        if(s[i]>=65&&s[i]<=90)
            s[i]=s[i]+32;
    printf("%s\n",s);
    char s1[]="PANKAJ KUMAR";
    printf("%s\n",s1);
    for(int i=0;s1[i]!='\0';i++)
        if(s1[i]>=65&&s1[i]<=90)
            s1[i]=s1[i]+32;
    printf("%s\n",s1);
}

