//here column mapping is used to store the elements of the matrix in 1D array
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
            if(i>=j)
                printf("%3d  ",m.M[m.n*(j-1)-(j-2)*(j-1)/2+(i-j)]);
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
    printf("Enter dimension of the lower triangular matrix:");
    scanf("%d",&m.n);
    for(int j=1;j<=m.n;j++)//col
    {
        for(int i=j;i<=m.n;i++)//row
        {
            printf("Enter element at position (%d,%d):",i,j);
            scanf("%d",&ele);
            m.M[m.n*(j-1)-(j-2)*(j-1)/2+(i-j)]=ele;
        }
    }
    printf("Matrix is:\n");
    display(m);
}

