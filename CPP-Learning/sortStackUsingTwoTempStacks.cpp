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
    stack<int> temp,ans;
    while(!s.empty())
    {
        int minm=s.top();
        s.pop();
        while(!s.empty())
        {
            if(s.top()<minm)
            {
                temp.push(minm);
                minm=s.top();
                s.pop();
            }
            else
            {
                temp.push(s.top());
                s.pop();
            }
        }
        ans.push(minm);
        while(!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
    }
    cout<<"Sorted stack is: ";
    while(!ans.empty())
    {
        cout<<ans.top()<<" ";
        ans.pop();
    }
    cout<<endl;
}
