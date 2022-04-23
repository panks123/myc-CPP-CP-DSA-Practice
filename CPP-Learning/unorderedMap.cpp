#include<bits/stdc++.h>
using namespace std;
void display(unordered_map<int,int> m)
{
    unordered_map<int,int>::iterator it,it1;
    cout<<"Key:  ";
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" ";
    cout<<endl;
    cout<<"Values:";
    for(it1=m.begin();it1!=m.end();it1++)
    {
        cout<<it1->second<<" ";
    }
    cout<<endl;
}
int main()
{
    unordered_map<int,int> m;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    display(m);
    m[7]=9;
    display(m);
    cout<<m[7]<<endl;
    cout<<m[12];
}

