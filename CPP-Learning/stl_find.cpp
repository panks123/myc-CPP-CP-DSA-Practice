#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,3,1,5,6,7,2,4,9,5,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    find(arr,arr+n,5) != &arr[n]? cout << "Element found": cout << "\nElement not found";
    find(arr,arr+n,12) != &arr[n]? cout << "Element found": cout << "\nElement not found";
    return 0;
}
