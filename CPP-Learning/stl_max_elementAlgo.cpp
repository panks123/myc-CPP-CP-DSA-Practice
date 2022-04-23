#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={3,0,1,7,900,6,10,15,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Max element in the array:"<<*max_element(arr,arr+n);
    return 0;
}

