//Upper to lower aur lower to upper case convert krne ka program
#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter yr name:");
    scanf("%[^\n]s",str);    ///Ye space separated string input lene ke kaabil hai
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
        else if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("%s ",str);
}

