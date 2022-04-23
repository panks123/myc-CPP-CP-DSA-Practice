#include<iostream>
#include<stdio.h>
using namespace std;
void display(int **arr,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%3d ",arr[i][j]);
        cout<<endl;
    }
    cout<<endl;
}
void spiralPrint(int **arr,int m,int n)
{
    int first_row=0,first_col=0,last_row=m-1,last_col=n-1;

    while(first_row<=last_row&&first_col<=last_col)
    {
        //Printing the first row
        for(int i=first_col;i<=last_col;i++)
            cout<<arr[first_row][i]<<" ";
        //After printing the first row increment the first_row to reduce the matrix size by one row from top
        first_row++;

        //Printing the last column
        for(int i=first_row;i<=last_row;i++)
            cout<<arr[i][last_col]<<" ";
        //After printing the first row decrement the last_col to reduce the matrix size by one column from right side
        last_col--;
        //Printing the last row
        if(first_row<=last_row)
        {
            for(int i=last_col;i>=first_col;i--)
                cout<<arr[last_row][i]<<" ";
            //After printing the last row decrement the last_row to reduce the matrix size by one row from bottom
            last_row--;
        }

        //printing the first column
        if(first_col<=last_col)
        {
            for(int i=last_row;i>=first_row;i--)
                cout<<arr[i][first_col]<<" ";
            //After printing the first column increment the first_col to reduce the matrix size by one column from left side
            first_col++;
        }

    }
    cout<<endl;
}
int main()
{
    int m,n;
    cout<<"Enter no. of rows and cols in the matrix:";
    cin>>m>>n;
    int** arr=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<n;i++)
        arr[i]=(int*)malloc(n*sizeof(int));
    cout<<"Enter "<<m*n <<" elements :"<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    cout<<"Matrix is:"<<endl;
    display(arr,m,n);
    cout<<"Spiral matrix: ";
    spiralPrint(arr,m,n);
}
