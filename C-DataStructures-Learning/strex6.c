//counting no. of words in a string
#include<stdio.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]%*c",s);
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '&&s[i-1]!=' ')
            count++;
    }
    printf("No. of words in the string: %d\n",count+1);//no. of words = no. of spaces +1
}
