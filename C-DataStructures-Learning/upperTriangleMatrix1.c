//row mapping is used to store the matrix in 1D array
#include<stdio.h>
#include<stdlib.h>
typedef struct matrix{
    int n;
    int *M;
}matrix;
void display(matrix m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i<=j)
                printf("%3d  ",m.M[((j*(j-1))/2)+i-1]);
            else
                printf("%3d  ",0);
        }
        printf("\n");
    }
}
void main()
{
    matrix m;
    int ele;
    int row,col;
    m.M=(int *)malloc(m.n*(m.n-1)/2*sizeof(int));
    printf("Enter dimension of the upper triangular matrix:");
    scanf("%d",&m.n);
    for(int j=1;j<=m.n;j++)
    {
        for(int i=1;i<=j;i++)
        {
            printf("Enter element at position (%d,%d)",i,j);
            scanf("%d",&ele);
            m.M[((j*(j-1))/2)+i-1]=ele;
        }
    }
    printf("Matrix is:\n");
    display(m);
}

