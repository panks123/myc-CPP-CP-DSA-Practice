#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of elements in the array:"<<accumulate(arr,arr+n,0);
    return 0;
}


