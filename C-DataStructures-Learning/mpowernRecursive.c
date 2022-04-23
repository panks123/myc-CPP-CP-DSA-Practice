#include<stdio.h>
int power(int m,int n)
{

    if(n==0)
        return 1;
    return m*power(m,n-1);
}
void main()
{
    int m,n;
    printf("Calculating m power n\nEnter values of m and n\n");
    scanf("%d %d",&m,&n);

    if(m==0&&n==0)
        printf("indeterminate form\n");
    if(m!=0)
       printf("%d power %d = %d ",m,n,power(m,n));
}

