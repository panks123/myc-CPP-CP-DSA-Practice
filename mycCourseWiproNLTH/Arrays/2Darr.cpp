//Ek matrix ka transpose nikalne ka program
#include<iostream>
using namespace std;
void display(int *arr[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int ** transpose(int **arr,int m,int n)
{
    int **transpose=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        transpose[i]=(int*)malloc(m*sizeof(int));
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    return transpose;
}
int main()
{
    int m,n;
    cout<<"Enter no. of rows and columns: ";
    cin>>m>>n;
    int** arr =(int **)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
    {
        arr[i]=(int*)malloc(n*sizeof(int));
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    display(arr,m,n);
    cout<<"Transpose: \n";
    int **trans=transpose(arr,m,n);
    printf("\n\n");
    display(trans,n,m);
}
