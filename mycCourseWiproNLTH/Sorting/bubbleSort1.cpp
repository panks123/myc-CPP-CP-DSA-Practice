//bubble sort is based on repeatedly swapping the adjacent elements if they are in wrong order.
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void bubblesort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)     //After every ith pass i elements become in position i.e. why we have used j<n-i-1
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
// Worst case time complexity : O(n^2)
 //O(n^2) time even if the array is sorted
 // So we have another optimized code which takes only O(n) time if the array is already sorted
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
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
