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
    //Sorting the array before applying binary search
    sort(arr,arr+n);
    cout<<"Sorted array: ";
    display(arr,n);

    //searching for 10 in the array
    cout<<binary_search(arr,arr+n,10)<<endl;
    if(binary_search(arr,arr+n,10))
        cout<<"Found\n";
    else
        cout<<"Not found\n";

    //Searching for 11 in the array
    cout<<binary_search(arr,arr+n,11)<<endl;
    if(binary_search(arr,arr+n,11))
        cout<<"Found\n";
    else
        cout<<"Not found\n";

    //searching for 0 in the array from arr+2 to arr+n-2

    if(binary_search(arr+2,arr+n-2,0))
        cout<<"Found\n";
    else
        cout<<"Not found\n";
    return 0;
}
