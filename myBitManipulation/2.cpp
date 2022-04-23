// | operator
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
    int a=4;
    int b=5;
    int c=7;
    printf("a=");
    display(4);
    printf("b=");
    display(5);
    printf("c=");
    display(5);
    printf("a | b=");
    display(a | b);
    printf("a | b | c=");
    display(a | b | c);
}
