#include<iostream>
#include<set>
using namespace std;
void display(multiset<int> s)
{
    cout<<"Multiset is:";
    multiset<int> ::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    multiset<int> s1={1,7,3,8,2,3,7,5,6,7,3};
    display(s1);
    cout<<"Size:"<<s1.size()<<endl;
    cout<<"Max size:"<<s1.max_size()<<endl;
    s1.empty()?cout<<"Set is empty\n":cout<<"Set is not empty\n";
    s1.insert(13);
    s1.insert(14);
    s1.insert(15);
    s1.insert(s1.begin(),14);
    display(s1);
    cout<<s1.count(7)<<endl;
    cout<<s1.count(17)<<endl;
    cout<<" before erasing 7"<<endl;
    display(s1);
    s1.erase(7);
    cout<<"After erasing 7"<<endl;
    display(s1);
    s1.erase(s1.begin());
    display(s1);

    multiset<int> s2={1,2,3,4,1,2,3,4};
    s1.swap(s2);
    display(s1);
    display(s2);
}
