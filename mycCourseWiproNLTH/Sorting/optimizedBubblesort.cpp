#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void bubblesort(int *arr,int n)    //optimized bubble sort
{
    int swapped;
    for(int i=0;i<n;i++)
    {
        swapped=0;                //swapped variable is used to check that if the current pass is already sorted array
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0)
        {
            //cout<<i<<" No more passes , already sorted "<<endl;
            break;
        }
    }
}

//Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
//Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

//Auxiliary Space: O(1)

//Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.


//Sorting In Place: Yes

//Stable: Yes
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
