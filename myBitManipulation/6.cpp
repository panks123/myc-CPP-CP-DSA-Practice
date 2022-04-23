// << (Left shift operator)operator
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
    printf("a<<1=");
    display(a<<1);
    printf("a<<2=");
    display(a<<2);
    printf("a<<3=");
    display(a<<3);
}
