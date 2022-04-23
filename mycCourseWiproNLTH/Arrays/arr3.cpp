//Program to remove duplicates in an array
//Program to print distinct elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter "<<n<<" elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }
        }
        if(i==j)
            cout<<arr[i]<<" ";
    }
}
