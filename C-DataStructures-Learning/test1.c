#include<stdio.h>
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        int m=n;
        for(int j=n;j>0;j--)
        {
            for(int k=i;k>0;k--)
                printf("%d ",j);

        }
        printf("\n");
    }
}
