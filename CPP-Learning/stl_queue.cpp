#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> q)
{
    cout<<"Queue is:";
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
    q.empty()?cout<<"Queue is empty\n":cout<<"Queue is not empty\n";
    cout<<q.size()<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    display(q);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;


    q.pop();
    display(q);
    q.pop();
    display(q);
    return 0;
}
