#include<iostream>
#include<deque>
using namespace std;
void display(deque<int> d)
{
    deque <int>::iterator it;
    for(it=d.begin();it!=d.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    deque<int> d{};
    cout<<"Size:"<<d.size()<<endl;
    cout<<"Max size:"<<d.max_size()<<endl;
    for(int i=0;i<3;i++)
        d.push_back(i*2);
    display(d);
    for(int i=0;i<3;i++)
        d.push_front((i+1)*3);
    display(d);
    d.pop_back();
    display(d);
    d.pop_front();
    display(d);

    deque<int> d1;
    d1.assign(4,100);
    display(d1);
    d1.insert(d1.begin()+2,200);
    display(d1);
    d1.clear();
    cout<<d1.size()<<endl;
    d1=d;
    display(d1);
    for(int i=0;i<d1.size();i++)
        cout<<d1[i]<<" ";
    cout<<endl;

    cout<<d1.at(1)<<endl;

    for(auto it1=d1.rbegin();it1!=d1.rend();it1++)
        cout<<*it1<<" ";
    cout<<endl;
    return 0;
}
