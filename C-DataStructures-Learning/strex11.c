//checking for palindrome strings the other way(the better way)
#include<stdio.h>
void main()
{
    //char s1[]="pankaj";
    //char s1[]="madam";
    char s1[]="liril";
    //char s1[]="jaaj";
    //char s1[]="paan";
    int i;
    for(i=0;s1[i]!='\0';i++){}
    int j;
    for(j=i-1,i=0;i<j;i++,j--)
    {
        if(s1[i]!=s1[j])
        {
            printf("Not palindrome");
            break;
        }
    }
    if(i>=j)
        printf("palindrome");
}
