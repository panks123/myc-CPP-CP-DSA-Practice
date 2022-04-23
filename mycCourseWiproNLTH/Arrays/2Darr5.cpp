//Matrix ko lower triangular matrix me convert krne ka program

#include<iostream>
using namespace std;
void display(int **arr,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cout<<arr[i][j]<<" ";
            cout<<"\n";
    }
    cout<<endl<<endl;
}
void convertToLowerTriangular(int **arr,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j)
                arr[i][j]=0;
        }
    }
}
int main()
{
    int n;
    printf("Enter no. of order: ");
    scanf("%d",&n);
    int **arr=(int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
        arr[i]=(int*)malloc(n*sizeof(int));
    printf("Enter elements of matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    convertToLowerTriangular(arr,n,n);
    display(arr,n,n);
}
