#include<iostream>
using namespace std;
// Given array is sorted
void findDuplicates(int arr[],int n)
{
    int lastduplicate=0;
    cout<<"Duplicates are: ";
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1]&&arr[i]!=lastduplicate)
        {
            cout<<arr[i]<<" ";
            lastduplicate=arr[i];
        }
    }
}
int main()
{
    int arr[]={1,2,2,3,5,5,5,5,5,6,7,8,8,8,8,9,10,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    findDuplicates(arr,n);
}

