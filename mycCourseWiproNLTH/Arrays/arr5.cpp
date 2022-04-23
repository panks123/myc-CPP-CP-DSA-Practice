//frequency of each elements count krne ka  program
#include<bits/stdc++.h>
using namespace std;
void countElements(int *arr,int n)
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
        cout<<it->first<<" has occurred "<<it->second<<" times\n";
    }

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
    countElements(arr,n);
}
