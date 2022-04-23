#include<stdio.h>
void main()
{
    printf("Enter two numbers:");
    int m,n;
    scanf("%d %d",&m,&n);
    int q=m/n;
    int d=q*n;
    int remainder=m-d;
    printf("%d",remainder);
}
