#include<stdio.h>
void main()
{
    int n=6;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("x");
        }
        printf("\n");
    }
}

