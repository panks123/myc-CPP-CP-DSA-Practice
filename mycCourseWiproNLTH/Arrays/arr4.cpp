//Duplicate elements count krne ka  program
#include<bits/stdc++.h>
using namespace std;
int countDuplicates(int *arr,int n)
{
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    map<int,int>::iterator it;
    int counts=0;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second>1)
            counts++;
    }
    return counts;
}
int main()
{
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int duplicatesCount=countDuplicates(arr,n);
    if(duplicatesCount==0)
        cout<<"There are no duplicates"<<endl;
    else
       cout<<"There are "<<duplicatesCount<<" duplicates"<<endl;
}
