#include<bits/stdc++.h>
using namespace std;
void display(map<int,int> m)
{
    cout<<"Keys:   ";
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        printf("%3d ",it->first);
    cout<<endl;
    cout<<"Values: ";
    for(it=m.begin();it!=m.end();it++)
        printf("%3d ",it->second);
    cout<<endl<<endl;
}
int main()
{
    map<int,int> m1={{1,11},{2,22},{3,33},{4,44},{5,55}};
    display(m1);
    cout<<"Size of map: "<<m1.size()<<endl;

    if(m1.find(5)!=m1.end())
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;

    if(m1.find(15)!=m1.end())
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;

    m1.erase(4);
    display(m1);

    map<int,int> m2;
    m2.insert(pair<int,int>(6,66));
    m2.insert(pair<int,int>(7,76));
    m2.insert(pair<int,int>(8,86));
    m2.insert(make_pair(9,96));
    m2.insert(make_pair(10,106));
    display(m2);

    m2[11]=116;
    display(m2);
    m2[10]=16;
    display(m2);

}
