//Vowels remove krne ka program
#include<string.h>
#include<stdio.h>
void main()
{
    char str[100];
    printf("string daal :");
    scanf("%[^\n]",str);
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++)
    {

        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            for(int j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
        }

    }
    printf("Vowels remove krne ke baad string :%s",str);
}
