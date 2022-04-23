//substring of given length and position extract krne ka program
#include<string.h>
#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    int i,l;
    printf("Enter the starting position of the substring to extract:");
    scanf("%d",&i);
    printf("Enter the length of the substring to extract:");
    scanf("%d",&l);
    char substr[100];
    int j,k;
    if((i-1)+l-1<strlen(str))
    {
        for(j=i-1,k=0;j<=(i-1)+l-1;j++,k++)
        {
            substr[k]=str[j];
        }
    }
    substr[j]='\0';
    printf("Substring: %s",substr);
}

/*
c++me
string str="";
str+='a';
str+='b';
ye kiya jaa sakta hai par

C me
char arr[]="";
arr+='a';
arr+='b';
Ni allowed h

char *arr="";
arr+='a';
arr+='b';
Ni allowed h
*/
