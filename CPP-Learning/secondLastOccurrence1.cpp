#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int counts=0,ele;
    cout<<"Enter element to check its second last occurrence:";
    cin>>ele;
    int i;
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==ele)
        {
            counts++;
        }
        if(counts==2)
            break;
    }
    if(counts==2)
        cout<<i;
    else
        cout<<-1;
}
