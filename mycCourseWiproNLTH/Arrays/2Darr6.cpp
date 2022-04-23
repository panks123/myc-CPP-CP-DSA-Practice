//Program to check if two matrices are equal
#include<iostream>
using namespace std;
int isEqual(int **A,int **B,int m1,int n1,int m2,int n2)
{
    if(m1!=m2||n1!=n2)
        return 0;
    else
    {
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++)
            {
                if(A[i][j]!=B[i][j])
                    return 0;
            }
        }
        return 1;
    }
}
void display(int **arr,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int m1,n1,m2,n2;
    cout<<"Enter no. of rows in first matrix: ";
    cin>>m1;
    cout<<"Enter no. of columns in first matrix: ";
    cin>>n1;
    int **A=(int**)malloc(m1*sizeof(int*));
    for(int i=0;i<m1;i++)
        A[i]=(int*)malloc(n1*sizeof(int));
    cout<<"Enter "<<m1*n1<<" elements:"<<endl;
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
            cin>>A[i][j];
    }
    cout<<"Enter no. of rows in second matrix: ";
    cin>>m2;
    cout<<"Enter no. of columns in second matrix: ";
    cin>>n2;
    int **B=(int**)malloc(m2*sizeof(int*));
    for(int i=0;i<m2;i++)
        B[i]=(int*)malloc(n2*sizeof(int));
    cout<<"Enter "<<m2*n2<<" elements:"<<endl;
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
            cin>>B[i][j];
    }
    cout<<"First matrix:"<<endl;
    display(A,m1,n1);
    cout<<"Second matrix:"<<endl;
    display(B,m2,n2);
    if(isEqual(A,B,m1,n1,m2,n2))
        cout<<"Equal";
    else
        cout<<"Not equal";
}
