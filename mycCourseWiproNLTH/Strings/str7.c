//Program to copy a string to another string
#include<stdio.h>
void main()
{
    char str1[100];
    printf("String daal tu apna:");
    scanf("%[^\n]s",str1);
    char str2[100];
    int i;
    for(i=0;str1[i]!='\0';i++)
        str2[i]=str1[i];
    str2[i]='\0';
    printf("Tera copied string:%s",str2);  //Ye cheez hum strcpy() function ki madad se bhi kar sakte hain jo <string.h> header file me hota hai
                                            // Agla program jaake dekh leo
}
