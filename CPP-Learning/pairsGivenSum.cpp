#include<bits/stdc++.h>
using namespace std;
void findPairswithGivenSum(int arr[],int n,int k)
{
    unordered_map<int,int> m;
    int counts=0;
    for(int i=0;i<n;i++)
    {
        if(m.find(k-arr[i])!=m.end())
        {
            int j=m[k-arr[i]];
            while(j--)
                cout<<"("<<arr[i]<<","<<k-arr[i]<<"), ";
            counts+=m[k-arr[i]];
        }
        m[arr[i]]++;
    }
    cout<<endl<<"Total no. of pairs available= "<<counts;
}
int main()
{
    int n;
    cout<<"Enter no. of elements in the array:";
    cin>>n;
    cout<<"Enter array elements:";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the given sum:";
    int k;
    cin>>k;
    findPairswithGivenSum(arr,n,k);
}
