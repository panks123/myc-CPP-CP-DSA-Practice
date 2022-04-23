//Reversing a string in the same array
#include<stdio.h>
void main()
{
    //char s[]="Pankaj";
    char s[]="Pankaj Kumar";
    int i;
    for(i=0;s[i]!='\0';i++){}
    i=i-1;
    char temp;
    for(int j=0;j<i;i--,j++)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    for(int j=0;s[j]!='\0';j++)
        printf("%c",s[j]);
    printf("\n");
}
