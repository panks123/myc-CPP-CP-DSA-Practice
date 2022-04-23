#include<iostream>
#include<forward_list>
using namespace std;
void display(forward_list<int> f)
{
    forward_list<int> ::iterator it;
    for(it=f.begin();it!=f.end();it++)
       cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    forward_list<int> l1;
    forward_list<int> l2{1,2,3,4,5,5};
    l1.assign(5,10);
    display(l1);
    display(l2);
    //cout<<"Size: "<<l1.size()<<endl;------forward list has no member as size()
    cout<<"Max size: "<<l2.max_size()<<endl;
    cout<<"First element:"<<l2.front()<<endl;
    //cout<<"Last element:"<<l2.back()<<endl;------forward list has no member as back()
    l1.push_front(100);
    display(l1);

    l1.pop_front();
    display(l1);

    l1.insert_after(l1.begin(),200);
    display(l1);

    l1.reverse();
    display(l1);

    l1.sort();
    display(l1);

    l1.swap(l2);
    display(l1);
    display(l2);

    l1.unique();
    display(l1);

    forward_list<int> l3{11,22,33};
    l1.splice_after(l1.begin(),l3);
    display(l1);

    l1.empty()?cout<<"l1 is empty\n":cout<<"l1 is not empty\n";

    l1.remove(22);
    display(l1);

    l1.remove_if([](int x){return x>3;});
    display(l1);
    l1.erase_after(l1.begin());
    display(l1);
    return 0;
}
