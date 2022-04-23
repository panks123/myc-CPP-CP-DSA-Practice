//special stack in which getMin() is implemented with O(1) time and O(1) space complexity
#include<bits/stdc++.h>
using namespace std;
class SpecialStack {
    stack<int> s;
    int minEle;

public:
    int pop();
    void push(int x);
    int getMin();
};
void SpecialStack::push(int x)
{
    if(s.empty())
    {
        s.push(x);
        minEle=x;
    }
    else
    {
        if(x>=minEle)
            s.push(x);
        else
        {
            s.push(2*x-minEle);
            minEle=x;
        }
    }
}
int SpecialStack::pop()
{
    if(s.empty())
    {
        cout<<"Underflow"<<endl;
        return INT_MIN;
    }
    else
    {
        int y=s.top();
        s.pop();
        if(y>=minEle)
        {
            return y;
        }
        else
        {
            int x=minEle;
            minEle=2*minEle-y;
            return x;
        }
    }
}
int SpecialStack::getMin()
{
    if(s.empty())
    {
        cout<<"Underflow"<<endl;
        return INT_MIN;
    }
    else
        return minEle;
}
int main()
{
    SpecialStack s1;
    s1.push(3);
    int minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    s1.push(5);
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    s1.push(2);
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    s1.push(1);
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    s1.push(1);
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    s1.push(-1);
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;

    int popped=s1.pop();
    cout<<"Popped :"<<popped<<endl;
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    popped=s1.pop();
    cout<<"Popped :"<<popped<<endl;
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    popped=s1.pop();
    cout<<"Popped :"<<popped<<endl;
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    popped=s1.pop();
    cout<<"Popped :"<<popped<<endl;
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    popped=s1.pop();
    cout<<"Popped :"<<popped<<endl;
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    popped=s1.pop();
    cout<<"Popped :"<<popped<<endl;
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
    popped=s1.pop();
    cout<<"Popped :"<<popped<<endl;
    minm=s1.getMin();
    cout<<"Min element : "<<minm<<endl;
}
