/*Maximum difference between two elements such that larger element appears after the smaller number
Given an array arr[] of integers, find out the difference between any two elements such that larger element appears after the smaller number in arr[].

Examples: If array is [2, 3, 10, 6, 4, 8, 1] then returned value should be 8 (Difference between 10 and 2).
If array is [ 7, 9, 5, 6, 3, 2 ]then returned value should be 2 (Diff between 7 and 9)*/

#include <iostream>
#include<limits.h>
using namespace std;
int maxDifference(int *arr,int n)
{
    int maxdiff=INT_MIN;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j])
            {
                int diff=arr[i]-arr[j];
                if(diff>maxdiff)
                {
                    maxdiff=diff;
                }
            }
        }
    }
    return maxdiff;
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Maximum difference: "<<maxDifference(arr,n);

    return 0;
}

