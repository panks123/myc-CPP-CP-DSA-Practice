#include<iostream>
using namespace std;
void insertionSort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
/*
    for each pass left side elements are shifted to right side if they are greater than
    the ith element and finally a place is created for ith element where that ellement is inserted
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
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
/*
Time complexity:

for i=1: 1 comparison + 1 move =2(1)
    i=2: 2 comparison + 2 move =2(2)
    i=3: 3 comparison + 3 move =2(3)
    .....
    .....
    .....
    i=n-1: n-1 comparison+n move =2(n-1)
    So Total=2*n*(n-1)/2=O(n^2)
    So,
    Worst case : O(n^2)
    Average case: O(n^2)
    Best case: O(n), because for each value of i we have to perform just only one comparison and 0 move

    In-place: Yes

    Stable: Yes


*/
