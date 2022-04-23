#include<bits/stdc++.h>
using namespace std;
void display(priority_queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.top()<<" "; q.pop();
    }

    cout<<endl;
}
int main()
{
    priority_queue<int> q;
    q.push(50); q.push(60); q.push(40);
    q.push(20); q.push(10); q.push(90);
    display(q);
    cout<<"Top element: "<<q.top()<<endl;
    cout<<"Size of max heap:"<<q.size()<<endl;

    q.pop();
    display(q);
}
