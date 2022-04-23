#include<iostream>
#include<queue>
using namespace std;
void display(priority_queue <int> gq)
{
    cout<<"Priority queue is:";
    priority_queue <int> g = gq;
    while (!g.empty())
    {
        cout <<g.top()<<" ";
        g.pop();
    }
    cout << '\n';
}
int main()
{
    priority_queue<int> p1;//this will create a max heap
    p1.push(10);
    p1.push(30);
    p1.push(10);
    p1.push(20);
    p1.push(60);
    p1.push(50);
    display(p1);

    cout<<p1.size()<<endl;
    cout<<p1.top()<<endl;
    p1.pop();
    display(p1);

    priority_queue<int> p2;
    p2.push(2);
    p2.push(4);
    p2.push(1);
    p2.push(3);
    p2.push(5);
    p2.push(3);
    display(p2);
    p1.swap(p2);
    display(p1);
    display(p2);


    return 0;
}
