#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int first=arr[0],second=INT_MIN,third=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third)
            third=arr[i];
    }
    cout<<first<< " "<<second<<" "<<third;
}
