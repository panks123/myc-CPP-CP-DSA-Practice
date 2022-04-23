#include<stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
void main()
{
    int n;
    printf("Finding factorial of a no.\nEnter a no.\n");
    scanf("%d",&n);
    printf("%d! =%d",n,factorial(n));
}
