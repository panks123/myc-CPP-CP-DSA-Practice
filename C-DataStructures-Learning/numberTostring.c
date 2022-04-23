
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    char buffer[20];
    itoa(a,buffer,2);   // here 2 means binary
    printf("Binary value = %s\n", buffer);

    itoa(a,buffer,10);   // here 10 means decimal
    printf("Decimal value = %s\n", buffer);

    itoa(a,buffer,8);   // here 16 means Hexadecimal
    printf("Octal value = %s\n", buffer);

    itoa(a,buffer,16);   // here 16 means Hexadecimal
    printf("Hexadecimal value = %s\n", buffer);
    return 0;
}
