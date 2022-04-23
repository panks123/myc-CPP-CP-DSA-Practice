//Vowels aur consonant count krne ka program
#include<stdio.h>
void main()
{
    char str[100];
    printf("String daal");
    scanf("%[^\n]s",str);
    int count1=0,count2=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                count1++;
            else
                count2++;
        }
    }
    printf("Vowels:%d\nConsonants:%d",count1,count2);

}
