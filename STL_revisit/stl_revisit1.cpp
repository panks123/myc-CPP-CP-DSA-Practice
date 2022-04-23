#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    cout<<"Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={2,6,10,3,6,5,7,8,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    sort(arr,arr+n);
    cout<<"After sorting in Ascending order"<<endl;
    display(arr,n);
    int arr1[]={2,6,10,3,6,5,7,8,1,4};
    display(arr1,n);
    sort(arr1,arr1+n,greater<int>());
    cout<<"After sorting in Ascending order"<<endl;
    display(arr1,n);

    int maxm=*max_element(arr,arr+n);
    cout<<"Maximum element in the array: "<<maxm<<endl;
    int minm=*min_element(arr,arr+n);
    cout<<"Minimum element in the array: "<<minm<<endl;

    int totalSum=accumulate(arr,arr+n,0);
    cout<<"Sum of all the elements of the array: "<<totalSum<<endl;

    int arr2[]={2,6,10,3,6,5,7,8,1,4};
    display(arr2,n);
    cout<<"Before applying binary search it is necessary to Sort the array"<<endl;
    sort(arr2,arr2+n,less<int>());
    cout<<"After sorting"<<endl;
    cout<<binary_search(arr2,arr2+n,6)<<endl;
    cout<<binary_search(arr2,arr2+n,16)<<endl;
    display(arr2,n);
    reverse(arr2,arr2+n);
    cout<<"After reversing the array: "<<endl;
    display(arr2,n);

    cout<<"No. of times 6 is present in the array: "<<count(arr,arr+n,6)<<endl;
    cout<<"No. of times 6 is present in the array: "<<count(arr,arr+n,2)<<endl;
    cout<<"No. of times 6 is present in the array: "<<count(arr,arr+n,16)<<endl;

    if(find(arr,arr+n,6)!=&arr[n])
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;

    if(find(arr,arr+n,16)!=arr+n)
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;
}
