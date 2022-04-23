//Maximum occurring character count krne ka program
#include<stdio.h>
#define MAX_SIZE 256
void main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]s",str);
    int count_arr[MAX_SIZE];
    int max=0;
    char result;
    for(int i=0;i<MAX_SIZE;i++)
    {
        count_arr[i]=0;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            count_arr[str[i]]++;
            if(count_arr[str[i]]>max)
            {
                max=count_arr[str[i]];
                result=str[i];
            }
        }
    }
    printf("Maximum occurring character is : %c , which occurs %d times",result,max);
}
