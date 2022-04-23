//Given an array , find all pairs of the array elements whose sum is equal to a given no.
//complexity:   O(n)  ---using hashing
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
    int sum;
    printf("Enter value of sum: ");
    cin>>sum;
    unordered_map<int,int> m;
    int counts=0;
    for(int i=0;i<n;i++)
    {
        if(m.find(sum-arr[i])!=m.end())
        {
            counts+=m[sum-arr[i]];
        }
        m[arr[i]]++;
    }
    cout<<counts;
}
