#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return (fibonacci(n-2)+fibonacci(n-1));
}
void main()
{
    int n;
    printf("Enter value of n to get nth term in the Fibonacci series:");
    scanf("%d",&n);
    int value=fibonacci(n-1);
    printf("%d",value);
}

