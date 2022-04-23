#include<stdio.h>
int power(int m,int n)
{
    if(m==0)
        return 0;

    if(n==0)
        return 1;
    else if(n%2==0)
        return power(m*m,n/2);
    else
        return m*power(m*m,(n-1)/2);

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
