#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,3,1,5,6,7,2,4,9,5,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Occurrences of 1: "<<count(arr,arr+n,1)<<endl;
    cout<<"Occurrences of 5: "<<count(arr,arr+n,5)<<endl;
    cout<<"Occurrences of 11 : "<<count(arr,arr+n,11)<<endl;
    return 0;
}
