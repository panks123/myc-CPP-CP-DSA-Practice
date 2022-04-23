#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,3,5};

    remove(arr,arr+5,3);
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v={1,2,3,4,4,5,4,6};
    remove(v.begin(),v.end(),1);
    remove(v.begin(),v.end(),4);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
