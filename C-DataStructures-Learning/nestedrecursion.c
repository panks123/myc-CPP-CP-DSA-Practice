#include<stdio.h>
int f(int n)
{
    if(n>100)
        return n-10;
    else
        return f(f(n+11));
}
void main()
{
    printf("%d\n", f(30));
    printf("%d\n", f(36));
    printf("%d\n", f(59));
    printf("%d\n", f(95));
    printf("%d\n", f(99));
    printf("%d\n", f(300));
    printf("%d\n", f(200));
    printf("%d\n", f(311));
    printf("%d\n", f(502));
    printf("%d\n", f(399));
}
