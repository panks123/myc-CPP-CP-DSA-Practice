#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int *arr,int n,int key)
{
    int l=0;
    int r=n-1;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(key==arr[mid])
            return mid;
        else if(key<arr[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Array must be sorted
    sort(arr,arr+n);
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    int i=binarySearch(arr,n,key);
    if(i!=-1)
        cout<<"Found";
    else
        cout<<"Not Found";
}
