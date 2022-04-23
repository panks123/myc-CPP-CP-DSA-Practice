#include<iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main()
{
    int n,ele;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr,n);
    cout<<"Reversed array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " " ;
    }
}
