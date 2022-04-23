#include<iostream>
#include<algorithm>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]={3,0,1,7,9,6,10,15,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array:";
    display(arr,n);
    reverse(arr,arr+n);
    cout<<"Reversed array: ";
    display(arr,n);
    return 0;
}
