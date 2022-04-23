//Using loop
#include<stdio.h>
void main()
{
    int m, n;
    printf("Enter two numbers:");
    scanf("%d %d",&m,&n);
    while(m>=n)
    {
        m=m-n;
    }
    printf("%d",m);
}

