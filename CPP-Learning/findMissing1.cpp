#include<iostream>
using namespace std;
// Given array is not sorted
int findMissing(int arr[],int n)
{
    int sum=(10*11)/2;
    int tempSum=0;
    for(int i=0;i<n;i++)
    {
        tempSum+=arr[i];
    }
    return sum-tempSum;
}
int main()
{
    int arr[]={1,2,3,4,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Missing element is: "<<findMissing(arr,n);
}
