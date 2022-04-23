// Unique elements print krne ka efficient (O(n)) program
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
    cout<<"Unique elements:";
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    unordered_map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second==1)
        {
            cout<<it->first<<" ";
        }
    }
}
