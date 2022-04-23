//finding no. of permutations of the word
#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
void main()
{
    char s[20];
    printf("Enter a word\n");
    scanf("%s",s);
    int i;
    for(i=0;s[i]!='\0';i++){}
    int numeratot=fact(i);
    int H[26]={0};
    for(i=0;s[i]!='\0';i++)
    {
        H[s[i]-97]++;
    }
    int denominator=1;
    for(int i=0;i<26;i++)
    {
        if(H[i]>1)
            denominator=denominator*fact(H[i]);
    }
    int result=numeratot/denominator;
    printf("No. of permutations of the word %s= %d",s,result);
}
