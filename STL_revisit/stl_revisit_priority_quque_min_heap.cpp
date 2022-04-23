#include<bits/stdc++.h>
using namespace std;
void display(priority_queue<int,vector<int>,greater<int>> q)
{
    while(!q.empty())
    {
        cout<<q.top()<<" "; q.pop();
    }
    cout<<endl;
}
int main()
{
    priority_queue<int,vector<int>,greater<int>> q;
    q.push(50); q.push(60); q.push(50);
    q.push(20); q.push(70); q.push(10);
    display(q);
    cout<<"Top element of min heap: "<<q.top()<<endl;
    q.pop();
    display(q);
    q.pop();
    display(q);
    cout<<"Size of min heap:"<<q.size()<<endl;
}
