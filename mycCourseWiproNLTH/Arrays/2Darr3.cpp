//kisi bhi matrix ke each row ka sum nikalna aur ssath hi unme se kaun sa row ka sum maximum h wo batane ka program
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
int rowsMaxSum(int **arr,int m,int n)
{
    int sum=0;
    int maxSum=0;
    for(int i=0;i<m;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"Sum of elements of row "<<i+1<<" is: "<<sum<<endl;
        if(sum>maxSum)
            maxSum=sum;
    }
    return maxSum;
}
int main()
{
    int m,n;
    cout<<"Enter no. of rows and columns of the matrix: ";
    cin>>m>>n;
    int **arr=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
    {
        arr[i]=(int*)malloc(n*sizeof(int));
    }
    cout<<"Enter elements of the matrix: ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is: \n";
    display(arr,m,n);
    int maxSum=rowsMaxSum(arr,m,n);
    cout<<"Maximum row sum is: "<<maxSum<<endl;
}
