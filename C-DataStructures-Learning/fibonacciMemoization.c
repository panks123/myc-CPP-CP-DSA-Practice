#include<stdio.h>
int fib(int fibTable[],int n)
{
    if(fibTable[n]!=0)
        return fibTable[n];
    if(n==0||n==1)
        return n;
    else
    {
        int value=fib(fibTable,n-1)+fib(fibTable,n-2);
        fibTable[n]=value;
        return value;
    }
}
void main()
{
    int n;
    printf("Enter the n value\n");
    scanf("%d",&n);
    int fibTable[n+1];
    for(int i=0;i<=n;i++)
    {
        fibTable[i]=0;
    }
    int result=fib(fibTable,n);
    printf("%dth term in fibonacci sequence is : %d",n,result);
}
