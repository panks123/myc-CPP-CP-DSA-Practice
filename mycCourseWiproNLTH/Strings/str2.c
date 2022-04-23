#include<stdio.h>
void main()
{
    char str[10];
    printf("Enter yr name:");
    scanf("%[^\n]s",str);    ///Ye space separated string input lene ke kaabil hai
    printf("%s",str);
}
