// No. of upper case , lower case ,digits, and special characters count krne ka program
#include<stdio.h>
int main()
{
    char str[100];
    int count1=0,count2=0,count3=0,count4=0;
    printf("String daal apna:");
    scanf("%[^\n]s",str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)    //ASCII value of A-65 Z-90
            count1++;
        else if(str[i]>=97&&str[i]<=122) //ASCII value of a-97 Z-122
            count2++;
        else if(str[i]>=48&&str[i]<=57)  //ASCII value of 0-48 9-57
            count3++;
        else
            count4++;

    }
    printf("Upper case:%d\nLower case:%d\nDigits:%d\nSpecial characters:%d\n",count1,count2,count3,count4);
    return 0;
}
