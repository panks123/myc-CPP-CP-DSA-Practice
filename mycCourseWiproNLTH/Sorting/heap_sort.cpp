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
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
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
void heap_sort(int *arr,int heap_size)
{
    //First build heap
    for(int i=(heap_size/2)-1;i>=0;i--)
        max_heapify(arr,i,heap_size);


    for(int i=heap_size-1;i>=1;i--)
    {
        swap(arr[i],arr[0]);
        heap_size=heap_size-1;
        max_heapify(arr,0,heap_size);
    }
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
    heap_sort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
/*
Time complexity: In the first loop we are just building the heap which takes O(n) time
                 In the 2nd loop for n-1 elements we are applying max_heapify(O(log n)) so the 2nd loop overall takes (n-1)log n time
    So, Overall time complexity of heap sort= O(n log n)

In-place : Yes
Stable: No, but can be made stable
