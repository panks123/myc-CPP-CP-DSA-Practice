#include<stdio.h>
typedef struct matrix
{
    int n;
    int M[10];
}matrix;
int getElement(matrix m,int i,int j)
{
    if(i==j)
        return m.M[i-1];
    else return 0;
}
void display(matrix m)
{
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i==j)
                printf("%d  ",m.M[i]);
            else
                printf("0  ");
        }
        printf("\n");
    }
}
void main()
{
    matrix m;
    int ele;
    int i,j;
    printf("Enter dimension of the diagonal matrix:");
    scanf("%d",&m.n);
    for(int i=0;i<m.n;i++)
    {
        printf("Enter element at position (%dX%d)",i+1,i+1);
        scanf("%d",&ele);
        m.M[i]=ele;
    }
    printf("Matrix is:\n");
    display(m);
    printf("Enter row and column position to get the matrix element:");
    scanf("%d %d",&i,&j);
    ele=getElement(m,i,j);
    printf("M[%d][%d]=%d",i,j,ele);
    printf("Enter row and column position to get the matrix element:");
    scanf("%d %d",&i,&j);
    ele=getElement(m,i,j);
    printf("M[%d][%d]=%d",i,j,ele);
    printf("Enter row and column position to get the matrix element:");
    scanf("%d %d",&i,&j);
    ele=getElement(m,i,j);
    printf("M[%d][%d]=%d\n",i,j,ele);
}
