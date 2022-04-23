/* Enter
1. a space separated string , then
2. a space separated string*/
#include<stdio.h>
void main()
{
    int a;
    char arr[100],str[100],newline;
    scanf("%[^\n]s", str);
    scanf("%c",&newline); // this statement is must , otherwise it will create problem
    scanf("%[^\n]s", arr);
    printf("%s  %s", str , arr);
}
