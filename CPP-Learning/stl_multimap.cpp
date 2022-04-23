
#include<iostream>
#include<map>

using namespace std;
void display(multimap<int,int> m)
{
    cout<<"Key:  ";
    multimap<int,int>::iterator it,itr;
    for(it=m.begin();it!=m.end();it++)
        cout<<" "<<it->first<<" ";
    cout<<endl;
    cout<<"Value:";
    for(it=m.begin();it!=m.end();it++)
        cout<<it->second<<" ";
    cout<<endl;
    cout<<endl;
}
int main()
{
    multimap<int,int> m1{{5,50},{1,10},{3,30},{2,20},{2,40},{2,40}};
    display(m1);
    multimap<int,int> m2;
    m2.insert(pair<int,int>(6,60));
    m2.insert(pair<int,int>(7,70));
    m2.insert(pair<int,int>(8,80));
    m2.insert(pair<int,int>(9,90));
    m2.insert(pair<int,int>(10,100));
    display(m2);

    display(m2);
    multimap<int,int> m3(m1.begin(),m1.end());
    display(m3);

    m3.erase(4);
    display(m3);

    m3.erase(m3.begin(),m3.find(3));
    display(m3);
    cout<<"Size:"<<m3.size()<<endl;
    cout<<"Max size:"<<m3.max_size()<<endl;
    m3.clear();
    m3.empty()?cout<<"m3 map is empty\n":cout<<"m3 map is not empty\n";

    m1.swap(m2);
    display(m1);
    display(m2);
    return 0;
}
