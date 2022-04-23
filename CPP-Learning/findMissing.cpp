#include<iostream>
using namespace std;
// Given array is sorted
int findMissing(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]!=1)
            return arr[i]-1;
    }
}
int main()
{
    int arr[]={1,2,3,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Missing element is: "<<findMissing(arr,n);
}
