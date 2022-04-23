//Program to print distinct elements of the sorted array OR Program to remove duplicates in sorted array

#include<iostream>
using namespace std;
void printDistinct(int *arr,int n)
{
    int last=arr[0];
    cout<<arr[0]<<" ";
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=last)
        {
            last=arr[i];
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter sorted array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    printDistinct(arr,n);
}
