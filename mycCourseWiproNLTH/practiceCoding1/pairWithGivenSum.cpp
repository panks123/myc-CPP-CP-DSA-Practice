#include<bits/stdc++.h>
using namespace std;
int pairExists(int *arr,int n,int sum)
{
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        if(m.find(sum-arr[i])!=m.end())
            return 1;
        m[arr[i]]++;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int *arr=(int *)malloc(n*sizeof(int));
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum;
    cout<<"Enter sum:";
    cin>>sum;
    if(pairExists(arr,n,sum))
        cout<<"Yes";
    else
        cout<<"No";
}
