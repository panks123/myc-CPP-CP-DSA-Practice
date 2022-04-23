//Given an array , find all pairs of the array elements whose sum is equal to a given no.
//this solution can work well only with array containing distinct elements
//complexity:   O( nlog(n))

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    printf("Enter value of sum: ");
    int sum;
    scanf("%d",&sum);
    int l=0,r=n-1;
    int counts=0;
    while(l<r)
    {
        if(arr[l]+arr[r]<sum)
        {
            l++;
        }
        else if(arr[l]+arr[r]>sum)
        {
            r--;
        }
        else
        {
            counts++;
            l++;
        }
    }
    cout<<counts;
}
