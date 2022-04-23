#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void selectionSort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
                min_index=j;
        }
        swap(arr[i],arr[min_index]);
    }
}
/*
The algorithm maintains two subarrays in a given array at any instant.

1) The subarray which is already sorted.(here left side)
2) Remaining subarray which is unsorted.(here right side)

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
*/
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter the array elements: ";
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Sorted array: ";
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
/*
Time complexity:

for i=0: n-1 comparison + 1 swap
    i=1: n-2 comparison + 1 swap
    i=2: n-3 comparison + 1 swap
    ......
    ......
    ......
    i=n-2: 1 comparison + 1 swap
    i=n-1: 0 comparison + 1 swap


So Total=n*(n-1)/2 comparison + n swap
 So time complexity=O(n^2+n)=O(n^2) : in all best, worst and average case

 So, The good thing about selection sort is it never makes more than O(n) swaps(in total) and can be useful when memory write is a costly operation.

 Sorting In place: Yes
 Stable: No, The default implementation is not stable. However it can be made stable by using shifting instead of swapping.

*/
