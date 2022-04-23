//Changing lowercase letters to uppercase letters
#include<stdio.h>
void main()
{
    char s[]="PanKaj KuMar";
    printf("%s\n",s);
    for(int i=0;s[i]!='\0';i++)
        if(s[i]>=97&&s[i]<=122)
            s[i]=s[i]-32;
    printf("%s\n",s);
    char s1[]="pankaj kumar";
    printf("%s\n",s1);
    for(int i=0;s1[i]!='\0';i++)
        if(s1[i]>=97&&s1[i]<=122)
            s1[i]=s1[i]-32;
    printf("%s\n",s1);
}

