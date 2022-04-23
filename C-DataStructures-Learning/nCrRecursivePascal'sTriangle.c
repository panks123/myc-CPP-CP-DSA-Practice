#include<stdio.h>
int C(int n,int r)
{
    if(r==0||n==r)
        return 1;
    return C(n-1,r-1)+C(n-1,r);
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
