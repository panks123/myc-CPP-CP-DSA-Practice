#include<stdio.h>
int fib(int fibTable[],int n)
{
    fibTable[0]=0;
    fibTable[1]=1;
    for(int i=2;i<=n;i++)
        fibTable[i]=fibTable[i-1]+fibTable[i-2];
    return fibTable[n];
}
void main()
{
    int n;
    printf("Enter n value for nth term in fibonacci sequence\n");
    scanf("%d",&n);
    int fibTable[n+1];
    for(int i=0;i<n+1;i++)
        fibTable[i]=0;
    printf("%dth term in fibonacci sequence is: %d\n",n,fib(fibTable,n));

}
