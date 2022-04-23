#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    cout<<"Enter size of stack:";
    cin>>n;
    cout<<"Enter "<<n<< " elements of the stack:";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    stack<int> sortedStack;
    while(!s.empty())
    {
        int k=s.top();
        s.pop();
        while(!sortedStack.empty()&&k<sortedStack.top())
        {
            s.push(sortedStack.top());
            sortedStack.pop();
        }
        sortedStack.push(k);
    }
    cout<<"Sorted stack is: ";
    while(!sortedStack.empty())
    {
        cout<<sortedStack.top()<<" ";
        sortedStack.pop();
    }

}
