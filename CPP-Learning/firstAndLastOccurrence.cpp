#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements in the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int f,l,j;
    cout<<"Enter the element to check its occurrence:";
    int x;
    cin>>x;
    for(j=0;j<n;j++)
    {
        if(arr[j]==x)
            break;
    }
    if(j==n)
        cout<<x<<" does not exists in the array";
    else
    {
        f=j;
        cout<<"First occurrence of "<<x<<" is at index "<<f<<endl;
        while(arr[j]==x&&j<n)
            j++;
        l=j-1;
        cout<<"Last occurrence of "<<x<<" is at index "<<l;
    }
}
