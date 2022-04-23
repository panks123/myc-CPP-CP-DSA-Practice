#include<iostream>
#include<stack>
using namespace std;
void display(stack <int> s)
{
    while (!s.empty())
    {
        cout <<s.top()<<" ";
        s.pop();
    }
    cout << '\n';
}
int main()
{
    stack<int> s1;
    s1.empty()?cout<<"Stack is empty\n":cout<<"Stack is not empty\n";
    cout<<s1.size()<<endl;
    s1.push(10);s1.push(20);s1.push(30);
    s1.push(40);s1.push(50);s1.push(60);
    display(s1);
    s1.pop();
    s1.pop();
    display(s1);
    stack<int> s2;
    s2.push(100);s2.push(200);s2.push(300);
    s2.push(400);s2.push(500);
    s1.swap(s2);
    display(s1);
    display(s2);
    return 0;
}
