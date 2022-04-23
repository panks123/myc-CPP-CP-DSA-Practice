// No. of words count krne ka program
#include<stdio.h>
void main()
{
    char str[100];
    printf("String daal:");
    scanf("%[^\n]s",str);
    int count;
    if(str[0]==' ')
        count=0;
    else
        count=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&&str[i+1]!=' '&&str[i+1]!='\0')
            count++;
    }
    printf("No. of words: %d",count);

}
