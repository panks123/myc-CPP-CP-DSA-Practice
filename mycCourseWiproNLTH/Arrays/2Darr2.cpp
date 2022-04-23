//Do matrix ko multiply krne ka program
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
int ** AmultiplyB(int **A,int **B,int m,int n,int M,int N)
{
    int **result=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
        result[i]=(int*)malloc(N*sizeof(int));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<N;j++)
        {
            result[i][j]=0;
        }
    }
    //Logic of matrix multiplication
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<N;j++)
        {
            for(int k=0;k<n;k++)
            {
                result[i][j]=result[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    return result;
}
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter no. of rows and cols of first matrix: ";
    cin>>m>>n;
    int **A=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
    {
        A[i]=(int*)malloc(n*sizeof(int));
    }
    printf("Enter elements of first matrix:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    int M,N;
    cout<<"Enter no. of rows and cols of second matrix (Note: No. of rows in this matrix must be equal to the no. of columns in First matrix): ";
    cin>>M>>N;
    int **B=(int**)malloc(M*sizeof(int*));
    for(int i=0;i<M;i++)
    {
        B[i]=(int*)malloc(N*sizeof(int));
    }
    printf("Enter elements of second matrix:");
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<"First matrix is: \n";
    display(A,m,n);
    cout<<"First matrix is: \n";
    display(B,M,N);
    if(n==M)
    {
        printf("After multiplication , resultant matrix: \n");
        int **result=(int**)malloc(m*sizeof(int*));
        for(int i=0;i<m;i++)
            result[i]=(int*)malloc(N*sizeof(int));
        result=AmultiplyB(A,B,m,n,M,N);
        display(result,m,N);
    }
}
