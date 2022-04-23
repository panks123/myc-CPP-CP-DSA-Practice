#include<iostream>
#include<list>
using namespace std;
void display(list<int> l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> l1,l2;
    cout<<"Size :"<<l1.size()<<endl;
    cout<<"Max size of l1:"<<l1.max_size()<<endl;
    for(int i=0;i<=10;i++)
    {
        l1.push_back(i*2);
        l2.push_front(i*3);
    }
    display(l1);
    display(l2);

    cout<<l1.front()<<" "<<l1.back()<<endl;
    cout<<l2.front()<<" "<<l2.back()<<endl;

    l1.pop_back();
    l1.pop_back();
    display(l1);


    l2.pop_front();
    l2.pop_front();
    display(l2);

    l1.reverse();
    display(l1);

    list<int> l3{3,1,13,5,7,2,8,9,4,10};
    sort(l3.begin(),l3.end());
    display(l3);
    for(auto it1=l3.rbegin();it1!=l3.rend();it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<endl;

    if(l3.empty())
        cout<<"List is empty"<<endl;
    else
        cout<<"List is not empty"<<endl;
    l3.clear();
    if(l3.empty())
        cout<<"List is empty"<<endl;
    else
        cout<<"List is not empty"<<endl;

    l3.assign(5,100);
    display(l3);

    list<int>::iterator it=l3.begin();
    advance(it,2);//it moves the pointer to 3rd element of the list
    l3.insert(it,2);
    advance(it,2);
    l3.insert(it,{30,40,50});
    display(l3);

    l3.remove(100);
    display(l3);

    l1.swap(l3);
    cout<<endl;
    display(l1);
    display(l3);

    l3=l2;
    display(l3);
    return 0;
}
