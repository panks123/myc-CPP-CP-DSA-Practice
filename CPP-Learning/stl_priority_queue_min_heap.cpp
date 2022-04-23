#include<iostream>
#include<queue>
using namespace std;
void display(priority_queue <int, vector<int>, greater<int>> gq)
{
    priority_queue <int, vector<int>, greater<int>> g = gq;
    while (!g.empty())
    {
        cout <<g.top()<<" ";
        g.pop();
    }
    cout << '\n';
}
int main()
{
    priority_queue<int,vector<int>,greater<int>> p;
    p.push(2);
    p.push(3);
    p.push(1);
    p.push(3);
    p.push(6);
    p.push(5);
    display(p);
    p.pop();
    p.pop();
    display(p);
    return 0;
}
