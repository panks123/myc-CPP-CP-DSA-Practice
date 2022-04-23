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
            if(i-j==1)
                printf("%3d  ",m.M[i-2]);
            else if(i-j==0)
                printf("%3d  ",m.M[m.n-1+i-1]);
            else if(i-j==-1)
                printf("%3d  ",m.M[(2*m.n)-1+i-1]);
            else
                printf("%3d  ",0);
        }
        printf("\n\n");
    }
}
void main()
{
    matrix m;
    int ele;
    int row,col;
    m.M=(int *)malloc((3*m.n-2)*sizeof(int));
    printf("Enter dimension of the lower triangular matrix:");
    scanf("%d",&m.n);
    printf("Enter elements of main diagonal:\n");
    for(int i=1;i<=m.n;i++)
    {
            printf("Enter element at position (%d,%d):",i,i);
            scanf("%d",&ele);
            m.M[m.n-1+i-1]=ele;
    }
    printf("Enter elements of lower diagonal:\n");
    for(int i=2;i<=m.n;i++)
    {
        printf("Enter element at position (%d,%d):",i,i-1);
        scanf("%d",&ele);
        m.M[i-2]=ele;
    }
    printf("Enter elements of upper diagonal:\n");
    for(int i=1;i<=m.n-1;i++)
    {
            printf("Enter element at position (%d,%d):",i,i+1);
            scanf("%d",&ele);
            m.M[(2*m.n)-1+i-1]=ele;
    }
    printf("Matrix is:\n");
    display(m);
}

