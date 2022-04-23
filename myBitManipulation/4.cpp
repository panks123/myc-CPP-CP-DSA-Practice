// ~ operator
#include<stdio.h>
void display(int n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
    printf("=%d\n",n);
}
int main()
{
    int a=5;
    
    printf("a=");
    display(a);
    printf("~a=");
    display(~a);
}
