#include<bits/stdc++.h>
using namespace std;
void display(unordered_set<int> s)
{
    unordered_set<int>:: iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
unordered_set<int> convertToUnorderedSet(vector<int> v)
{
    unordered_set<int> s(v.begin(),v.end());
    return s;
}
int main()
{
    unordered_set<int> s{3,1,5,7,1,5,6};
    display(s);
    s.insert(8);
    s.insert(9);
    s.insert(8);
    display(s);
    cout<<"Count of 8 in the set: "<<s.count(8)<<endl;
    cout<<"Count of 10 in the set: "<<s.count(10)<<endl;
    cout<<"Size of the set: "<<s.size()<<endl;
    if(s.find(5)!=s.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    if(s.find(15)!=s.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }

    if(s.empty())
        cout<<"Set is empty"<<endl;
    else
        cout<<"Set is not empty"<<endl;

    s.erase(7);
    display(s);
    s.clear();
    if(s.empty())
        cout<<"Set is empty"<<endl;
    else
        cout<<"Set is not empty"<<endl;
    vector<int> v={3,1,5,7,3,6,5};
    cout<<"converting vector to set:"<<endl;
    unordered_set<int> s1=convertToUnorderedSet(v);
    display(s1);
}

