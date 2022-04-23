//finding and counting duplicates in a string given the string only contains lower case letters
#include<stdio.h>
void main()
{
    char s[]="pankajpankaj";
    int H[26]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        H[s[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(H[i]>1)
            printf("%c is present %d times\n",i+97,H[i]);
    }
    printf("\n");
}
