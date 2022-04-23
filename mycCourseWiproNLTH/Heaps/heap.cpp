#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void max_heapify(int *arr,int i,int n)
{
    int l=2*i+1;
    int r=2*i+2;
    int largest=i;
    if(l<n&&arr[l]>arr[largest])
        largest=l;
    if(r<n&&arr[r]>arr[largest])
        largest=r;
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        max_heapify(arr,largest,n);
    }
}
void build_max_heap(int *arr,int n)
{
    for(int i=(n/2)-1;i>=0;i--)
        max_heapify(arr,i,n);
}
void display_heap(int *arr,int n)
{
    cout<<"Heap is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=(int *)malloc(sizeof(int*));
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    build_max_heap(arr,n);
    display_heap(arr,n);
}
