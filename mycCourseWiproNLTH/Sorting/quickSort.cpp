#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int partition(int *arr,int p,int r)
{
     /*  last element is taken as pivot  */   //purpose of i variable is to always maintain a boundary such that left
    int pivot=arr[r],i=p-1;     //side elements of i till i are all less than the pivot and right side from i+1 to j-1 are all greater than the pivot element
    for(int j=p;j<=r-1;j++)       //the purpose of variable j is to scan all the elements from p to r-1
    {                              //such that whenever an element at j is found smaller than the pivot element then that is moved to the left side
        if(arr[j]<=pivot)
        {
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);//the element which was taken as pivot is finally swapped to occupy the correct position
    return i+1;             //that position is returned
}
void quickSort(int *arr,int p,int r)
{
    if(p<r)
    {
        int q=partition(arr,p,r);
        quickSort(arr,p,q-1);
        quickSort(arr,q+1,r);
    }
}
int main()
{
    cout<<"Enter the array size: ";
    int n;
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quickSort(arr,0,n-1);
    cout<<"After sorting :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
/*
Time complexity : partitioning algorithm takes O(n) time
Best case :best case occurs when the partition algorithm divides the array into two equal sub-arrays i.e in the case when pivot
            becomes the middle element element after partitioning
    In this case Recurrence relation: T(n)=2T(n/2)+O(n)
    So time complexity=O(n log n)

Worst case: Worst case occurs when the array is sorted in reverse order or the array is always sorted or when all elements are same
            Then the partition algorithm divides the array each time into sizes of n-1 and 1
            So the recurrence relation becomes: T(n)=T(n-1)+n
    So, Time complexity=O(n^2) in worst case

Note: Most practical implementation of quick sort is randomized quick sort as a particular type of worst case (i.e. sorted array) is removed in this version
      but in randomized quick sort  also we may get the worst case (O(n^2))

      So most efficient implementation of the quick sort is by finding the median element (which takes O(n)) time . So in this case we find the median first
      then partition the array around the median element. This ensures O(n log n) time complexity in all cases.

Average case: O(n log n)

Stable: The default implementation is not stable. However any sorting algorithm can be made stable by considering indexes as comparison parameter.

In-place: Yes , as no extra space is required ,extra space is required only for recursive stack

Q Why Quick Sort is preferred over MergeSort for sorting Arrays

Q Why MergeSort is preferred over QuickSort for Linked Lists?

Ans:  Unlike array, in linked list, we can insert items in the middle in O(1) extra space and O(1) time if we are given reference/pointer to the previous node.
Therefore merge operation of merge sort can be implemented without extra space for linked lists.

*/
