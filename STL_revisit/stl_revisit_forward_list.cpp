#include<bits/stdc++.h>
using namespace std;

void display(forward_list<int> l)
{
    forward_list<int>::iterator it=l.begin();
    for(;it!=l.end();it++)
        cout<<*it<<"->";
    cout<<endl;
}
int main()
{
    forward_list<int> l{3,1,6,4,8};
    display(l);
    //cout<<"Size of forward_list"<<l.size()<<endl; // size() function is not available in forward_list
    cout<<"Front element: "<<l.front()<<endl;
    //cout<<l.back()<<endl;  //Not available in forward_list

    l.push_front(12);
    display(l);
    l.push_front(22);
    display(l);
    //l.push_back(12); // Not available in forward_list

    l.pop_front();
    display(l);

    l.reverse();
    display(l);
    l.sort();
    display(l);

    l.insert_after(l.begin(),8);
    display(l);
    forward_list<int>::iterator it=l.begin();
    l.insert_after(it,18);
    display(l);
    cout<<*it<<endl;
    advance(it,2);
    cout<<*it<<endl;
    l.insert_after(it,18);

    display(l);
    l.insert_after(it,18);

    display(l);
    l.erase_after(l.begin());
    display(l);
    l.remove(18);
    display(l);
}
