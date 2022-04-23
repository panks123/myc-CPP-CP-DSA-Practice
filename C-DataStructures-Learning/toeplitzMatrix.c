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
                printf("%3d  ",m.M[j-i]);
            else
                printf("%3d  ",m.M[m.n+i-j-1]);
        }
        printf("\n\n");
    }
}
void main()
{
    matrix m;
    int ele;
    int row,col;
    m.M=(int *)malloc(((2*m.n)-1)*sizeof(int));
    printf("Enter dimension of the lower triangular matrix:");
    scanf("%d",&m.n);
    for(int i=1,j=1;j<=m.n;j++)
    {
        printf("Enter element at position (%d,%d):",i,j);
        scanf("%d",&ele);
        m.M[j-i]=ele;
    }
    for(int i=2,j=1;i<=m.n;i++)
    {
        printf("Enter element at position (%d,%d):",i,j);
        scanf("%d",&ele);
        m.M[m.n+i-j-1]=ele;
    }
    printf("Matrix is:\n");
    display(m);
}

