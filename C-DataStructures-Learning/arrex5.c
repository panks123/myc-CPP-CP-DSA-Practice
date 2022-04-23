#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **A;
    //Creating 2D array
    A=(int**)malloc(3*sizeof(int *));
    for(int i=0;i<3;i++)
    {
        A[i]=(int*)malloc(4*sizeof(int));
        for(int j=0;j<4;j++)
        {
            A[i][j]=i+2;
        }
    }

    //Accessing 2D array
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
