/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int countPairSum(int *arr,int n,int sum)
{
    int counts=0;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        if(m.find(sum-arr[i])!=m.end())
        {
            for(int j=1;j<=m[sum-arr[i]];j++)
            {
                cout<<arr[i]<<","<<sum-arr[i]<<endl;
                counts++;
            }
        }
        m[arr[i]]++;
    }
    return counts;
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<< " elements of array: ";
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the sum value";
    cin>>sum;
    int counts=countPairSum(arr,n,sum);
    cout<<"\nTotal pairs: "<<counts;
    return 0;
}
