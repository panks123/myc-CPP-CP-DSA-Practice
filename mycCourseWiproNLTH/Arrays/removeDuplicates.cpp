// For sorted array only

#include<iostream>
using namespace std;
void removeDuplicates(int *arr,int n)
{
    int j=0;
    if(n==0)
    {
        return;
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]!=arr[i+1])
            {
                cout<<arr[i]<<" ";
                j++;
            }
        }
    }
    cout<<arr[n-1]<<endl;// print the last element for sure
    cout<<"Size:"<<j+1;
}
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter a sorted array:";
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"After removing the duplicates:";
    removeDuplicates(arr,n);
}
