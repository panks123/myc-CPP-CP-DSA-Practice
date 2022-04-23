#include<bits/stdc++.h>
using namespace std;
void findDuplicates(int arr[],int n)
{
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    map<int,int>::iterator it;
    cout<<"Duplicates :"<<endl;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second>1)
            cout<<it->first<<" has occurred "<<it->second<<" times"<<endl;
    }
}
int main()
{
    int arr[]=/*{1,2,2,3,5,5,5,5,5,6,7,8,8,8,8,9,10,10,10}*/{5,2,6,2,6,9,1,5,9,3,8,10,10,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    findDuplicates(arr,n);
}
