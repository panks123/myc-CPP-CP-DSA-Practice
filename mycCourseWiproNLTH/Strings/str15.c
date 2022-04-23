//Ek string me kisi bhi character ka frequency find krne ka program
#include<stdio.h>
#define MAX_SIZE 256
void main()
{
    char s[100];
    printf("Enter your string:");
    fgets(s,100,stdin);
    char c;
    printf("Enter a character to find its frequency:");
    scanf("%c",&c);
    int count_arr[MAX_SIZE];
    for(int i=0;i<MAX_SIZE;i++)
        count_arr[i]=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count_arr[s[i]]++;
    }
    for(int i=0;i<MAX_SIZE;i++)
    {
        if(count_arr[i]>0)
            printf("%c has occurred %d times\n",i,count_arr[i]);
    }

    printf("Count of '%c' is: %d",c,count_arr[c]);
}
