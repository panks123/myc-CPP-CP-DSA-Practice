#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<char> b,g;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        b.push(x);
    }
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        g.push(x);
    }
    long unsigned int i;
    while(!b.empty())
    {
        i=1;
        while(i<=g.size())
        {
            if(b.front()==g.front())
            {
                b.pop();
                g.pop();
                i--;
                break;
            }
            else
            {
                char x=g.front();
                g.pop();
                g.push(x);
                i++;
            }

        }
        if(i>b.size())
            break;
    }
    cout<<b.size();
}

/*
#include<bits/stdc++.h>
using namespace std;
#define l long unsigned int
/*
void display(vector<pair<int,int>> v2)
{
    for(int i=0;i<v2.size();i++)
        cout<<v2[i].first<<v2[i].second<<" ";
    cout<<endl;
}
void display(map<int,int> m)
{
    map<int,int>:: iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<pair<int,int>> v2;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        int a=arr[i];
        while(a>0)
        {
            int r=a%10;
            v.push_back(r);
            a=a/10;
        }
        int max_digit=*max_element(v.begin(),v.end());
        int min_digit=*min_element(v.begin(),v.end());
        int result=max_digit*11+min_digit*7;
        int f,s;
        f=result%10;
        result=result/10;
        s=result%10;
        //cout<<s<<f<<" ";

        v2.push_back({s,f});

    }
    map<int,int> mo,me;
    for(l i=0;i<v2.size();i=i+2)
    {
        mo[v2[i].first]++;
    }
    for(l i=1;i<v2.size();i=i+2)
    {
        me[v2[i].first]++;
    }
    int ans=0;
    map<int,int>:: iterator it;
    for(it=mo.begin();it!=mo.end();it++)
    {
        if(it->second==2)
            ans++;
        if(it->second>2)
            ans=ans+2;
    }
    for(it=me.begin();it!=me.end();it++)
    {
        if(it->second==2)
            ans++;
        if(it->second>2)
            ans=ans+2;
    }
    cout<<ans;

}

8
234 567 321 345 123 110 767 111

*/
