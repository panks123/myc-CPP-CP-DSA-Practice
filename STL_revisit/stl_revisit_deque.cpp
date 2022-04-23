#include<bits/stdc++.h>
using namespace std;
void display(deque<int> q)
{
    deque<int>:: iterator it;
    for(it=q.begin();it!=q.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    deque<int> q;
    q.push_back(2);
    display(q);
    q.push_back(3);
    display(q);
    q.push_back(4);
    display(q);

    q.push_front(12);
    display(q);
    q.push_front(13);
    display(q);
    q.push_front(14);
    display(q);
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Back element: "<<q.back()<<endl;

    for(int i=0;i<q.size();i++)
    {
        cout<<q[i]<<" "; // So we can index in deque
    }
    cout<<endl;

    q.pop_back();
    display(q);
    q.pop_front();
    display(q);
}
