/* Enter
string <space> string
 */
#include<stdio.h>
void main()
{
    int a;
    char arr[100],str[100],newline;
    //scanf("%s %s ", str, arr); // It does not work
    // following works

    scanf("%s", str);
    scanf("%s", arr);
    printf("%s  %s", str , arr);
}
