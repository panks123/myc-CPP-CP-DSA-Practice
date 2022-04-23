#include<bits/stdc++.h>
using namespace std;
void display(list<int> l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<"  ";
    cout<<endl;
}
int main()
{
    list<int> l1;
    cout<<"Size of list: "<<l1.size()<<endl;
    l1.push_front(2);
    display(l1);
    l1.push_front(4);
    display(l1);

    l1.push_back(3);
    display(l1);
    l1.push_back(5);
    display(l1);
    cout<<"First element:"<<l1.front()<<endl;
    cout<<"Last element:" <<l1.back()<<endl;

    l1.insert(l1.begin(),5);
    display(l1);
    //l1.insert(l1.begin()+3,15); // cannot be done like this (not allowed)

    //for inserting in the list we must know the pointer
    list <int> ::iterator it=l1.begin();
    l1.insert(it,30);
    display(l1);
    cout<<*it<<endl;
    advance(it,2);
    l1.insert(it,33);
    display(l1);

    l1.pop_back();
    display(l1);
    l1.pop_back();
    display(l1);

    l1.push_back(30);
    display(l1);

    l1.remove(30);
    display(l1);

    cout<<"After reversing"<<endl;
    l1.reverse();
    display(l1);

    cout<<"After sorting"<<endl;
    l1.sort();
    display(l1);

    list<int> l2;
    l2.push_back(100);l2.push_back(200);l2.push_back(300);
    cout<<"Before swapping:"<<endl;
    cout<<"l1"<<endl;
    display(l1);
    cout<<"l2"<<endl;
    display(l2);
    l1.swap(l2);

    cout<<"After swapping:"<<endl;
    cout<<"l1"<<endl;
    display(l1);
    cout<<"l2"<<endl;
    display(l2);
}
