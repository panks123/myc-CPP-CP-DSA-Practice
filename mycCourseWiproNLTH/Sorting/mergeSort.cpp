#include<iostream>
using namespace std;
void merge(int *arr,int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int *L=(int*)malloc(n1*sizeof(int));
    int *R=(int*)malloc(n2*sizeof(int));
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++)
        R[j]=arr[q+1+j];

    int i=0,j=0,k=p;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            k++;i++;
        }
        else
        {
            arr[k]=R[j];
            k++;j++;
        }
    }
    while(i<n1)
    {
        arr[k]=L[i];
        k++;i++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        k++;j++;
    }
}
void mergeSort(int *arr,int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}
/*
    Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.
    The merge() function is used for merging two halves.
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
    mergeSort(arr,0,n-1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
/*
Time Complexity: Merge Sort is a recursive algorithm
                 And the recurrence relation is: T(n)=2T(n/2)+n
                 So, Time complexity=O(n log(n)) (In all case i.e best case worst case and average case) as merge sort always divides the array into
                                                                two halves and takes linear time to merge two halves.

In Place: No (It uses an auxiliary space of O(n))
Stable: Yes

Applications: Merge Sort is useful for sorting linked lists in O(n Log n) time. Unlike an array, in the linked list, we can insert
items in the middle in O(1) extra space and O(1) time. Therefore, the merge operation of merge sort can be implemented without extra space for linked lists.
*/
