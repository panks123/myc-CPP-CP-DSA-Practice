#include<bits/stdc++.h>
using namespace std;
void display(queue<int> q)
{
    queue<int> temp=q;
    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int> q;
    q.push(2); q.push(4);
    display(q);
    q.push(12); q.push(14); q.push(2); q.push(4);
    display(q);
    cout<<"Front element:"<<q.front()<<endl;
    cout<<"Back element:"<<q.back()<<endl;
    q.pop();
    display(q);
    q.pop();
    display(q);
    cout<<"Size of queue:"<<q.size()<<endl;
}
