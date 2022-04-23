#include<stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int C(int n,int r)
{
    int t0=factorial(n);
    int t1=factorial(r);
    int t2=factorial(n-r);
    return t0/(t1*t2);
}
void main()
{
    int n,r;
    printf("Enter values of n and r to find nCr:\n");
    scanf("%d %d",&n,&r);
    if(n<=0||r<0)
        printf("Invalid input(n and r should be positive)\n");
    if(n>0&&r>n)
        printf("Invalid input(r should be less than or equal to n)");
    else
    {
        int result=C(n,r);
        printf("%dC%d= %d",n,r,result);
    }

}
