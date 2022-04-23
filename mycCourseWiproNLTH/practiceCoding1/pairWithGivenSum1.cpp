// Array must be sorted and must contain no duplicate
#include<iostream>
#include<algorithm>
using namespace std;
int pairExists(int *arr,int n,int sum)
{
    sort(arr,arr+n);
    for(int i=0,j=n-1;i<j;)
    {
        if(arr[i]+arr[j]==sum)
            return 1;
        else if(arr[i]+arr[j]>sum)
            j--;
        else
            i++;
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
