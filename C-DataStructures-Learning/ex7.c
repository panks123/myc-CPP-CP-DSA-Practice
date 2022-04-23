/*#include <stdlib.h>
#include<stdio.h>
#define MAX_LEN 100
int main()
{

    ///* Enter your code here. Read input from STDIN. Print output to STDOUT
    char c;
    char s[MAX_LEN];
    char sen[MAX_LEN];
    scanf("%c",&c);
    scanf("%s",s);
    //scanf("%s",sen);
    gets(sen);
    printf("%c\n",c);
    printf("%s\n",s);
    puts(sen);
    //printf("%s",sen);
    return 0;
}*/
#include<stdio.h>
void main(){
	char str[100];
	scanf("%[^\n]*c",&str);
	printf("%s\n",str);
}
