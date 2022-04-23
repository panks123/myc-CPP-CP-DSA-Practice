/* Enter
1. a string , then
2. an integer*/
#include<stdio.h>
void main()
{
    int a;
    char arr[100],newline;
    scanf("%[^\n]s",arr);
    scanf("%d",&a);
    printf("%d  %s", a , arr);
}
