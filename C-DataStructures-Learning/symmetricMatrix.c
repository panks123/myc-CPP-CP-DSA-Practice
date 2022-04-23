#include<stdio.h>
#include<stdlib.h>
typedef struct matrix{
    int n;
    int M[100];
}matrix;
void display(matrix m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i>=j)
                printf("%5d",m.M[((i*(i-1))/2)+j-1]);
            else
            {
                printf("%5d",m.M[((j*(j-1))/2)+i-1]);
            }
        }
        printf("\n\n");
    }
}
void main()
{
    matrix m;
    int ele,k;
    int row,col;
    printf("Enter dimension of the symmetric matrix:");
    scanf("%d",&k);
    m.n=k;
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("Enter element at position (%d,%d):",i,j);
            scanf("%d",&ele);
            m.M[((i*(i-1))/2)+j-1]=ele;
        }
    }
    printf("Matrix is:\n");
    display(m);
}

