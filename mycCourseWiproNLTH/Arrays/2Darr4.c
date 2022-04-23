//Matrix ke each row aur each column ke sum ka program
#include<stdio.h>
#include<stdlib.h>
void rowsColsSum(int **arr,int m,int n)
{
    int sum1=0,maxSum1=0;
    for(int i=0;i<m;i++)
    {
        sum1=0;
        for(int j=0;j<n;j++)
        {
            sum1=sum1+arr[i][j];
        }
        printf("Sum of elements of row %d : %d\n",i+1,sum1);
        if(sum1>maxSum1)
            maxSum1=sum1;
    }
    printf("Maximum row sum: %d\n\n",maxSum1);

    int sum2=0,maxSum2=0;
    for(int i=0;i<n;i++)
    {
        sum2=0;
        for(int j=0;j<m;j++)
        {
            sum2=sum2+arr[j][i];
        }
        printf("Sum of elements of column %d : %d\n",i+1,sum2);
        if(sum2>maxSum2)
            maxSum2=sum2;
    }
    printf("Maximum column sum: %d\n",maxSum2);
}
int main()
{
    int m,n;
    printf("Enter no. of rows and cols: ");
    scanf("%d %d",&m,&n);
    int **arr=(int **)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
        arr[i]=(int*)malloc(n*sizeof(int));
    printf("Enter elements of matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    rowsColsSum(arr,m,n);
}
