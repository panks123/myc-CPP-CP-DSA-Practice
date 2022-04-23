/* Enter
1. an integer , then
2. a string*/
#include<stdio.h>
void main()
{
    int a;
    char arr[100],newline;
    scanf("%d",&a);
    scanf("%c",&newline);
    scanf("%[^\n]s", arr);
    printf("%d  %s", a , arr);
}
