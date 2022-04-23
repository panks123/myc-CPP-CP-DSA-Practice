//Program to find the row with maximum no. of zeros in the given matrix of order n containing only 0's and 1's
#include<iostream>
using namespace std;
int maxRow(int **arr,int n)
{
    int zeroCount=0;
    int maxZero=0;
    int maxRow=0;
    for(int i=0;i<n;i++)
    {
        zeroCount=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
                zeroCount++;
        }
        if(zeroCount>maxZero)
        {
            maxZero=zeroCount;
            maxRow=i;
        }
    }
    return maxRow+1;
}
int main()
{
    int n;
    cout<<"Enter the order of the matrix:";
    cin>>n;
    int** arr=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
        arr[i]=(int*)malloc(n*sizeof(int));
    cout<<"Enter "<<n*n<<" elements of the matrix:"<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    cout<<"Row with the maximum no. of zeros is: "<<maxRow(arr,n);
}
