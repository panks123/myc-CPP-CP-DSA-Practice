#include<iostream>
#include<algorithm>
using namespace std;
void display(int arr[])
{
    for(int i = 0; i < 10; ++i)
		cout << arr[i] << " ";
    cout<<endl;
}
int main()
{
    int arr[]={2,10,3,7,9,13,15,4,6,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Array before sorting: ";
    display(arr);
    //sort(&arr[0],&arr[n]);
    sort(arr,arr+n);
    cout<<"Array after sorting: ";
    display(arr);

    sort(arr,arr+n,greater<int>());
    cout<<"Array after sorting: ";
    display(arr);

    sort(arr,arr+n,less<int>());
    cout<<"Array after sorting: ";
    display(arr);
    return 0;
}
