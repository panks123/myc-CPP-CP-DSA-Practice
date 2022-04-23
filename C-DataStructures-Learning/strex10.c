//checking for palindrome strings
#include<stdio.h>
void main()
{
    //char s1[]="pankaj";
    //char s1[]="madam";
    char s1[]="liril";
    int i;
    for(i=0;s1[i]!='\0';i++){}
    char s2[i+1];
    s2[i]='\0';
    i=i-1;
    for(int j=0;i>=0;j++,i--)
    {
        s2[j]=s1[i];
    }
    int k,j;
    for(k=0,j=0;s1[k]!='\0'||s2[j]!='\0';k++,j++)
    {
        if(s1[k]!=s2[j])
            break;
    }
    if(s1[k]==s2[j])
        printf("palindrome\n");
    else
        printf("not palindrome\n");
}
