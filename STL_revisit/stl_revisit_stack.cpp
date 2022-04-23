#include<bits/stdc++.h>
using namespace std;
void display(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" "; s.pop();
    }
    cout<<endl;
}

using namespace std;
int main()
{
    stack<int> s;
    s.push(3); s.push(13); s.push(4);
    s.push(2); s.push(23); s.push(13);
    cout<<"Top of the stack: "<<s.top()<<endl;
    display(s);

    s.pop();
    display(s);
    s.pop();
    display(s);
    cout<<"Size of stack: "<<s.size()<<endl;
}
