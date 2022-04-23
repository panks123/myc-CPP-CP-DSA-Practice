#include<iostream>
using namespace std;
class StackOverFlow:exception{
public:
    void message()
    {
        cout<<"Stack over flow\n";
    }
};
class StackUnderFlow:exception{
public:
    void message()
    {
        cout<<"Stack under flow\n";
    }
};
class Stack {
    private:
        int *stk;
        int size;
        int top;
    public:
        Stack(int sz)
        {
            top=-1;
            size=sz;
            stk=new int[size];
        }
        void push(int x)
        {
            if(top==size-1)
                throw StackOverFlow();
            top++;
            stk[top]=x;
        }
        int pop()
        {
            if(top==-1)
                throw StackUnderFlow();
            return stk[top--];
        }
        void display()
        {
            for(int i=top;i>=0;i--)
                cout<<stk[i]<<"\n";
        }
};
int main()
{
    Stack s(5);
    try
    {
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.display();
    s.push(8);
    //s.push(100);
    }
    catch(StackOverFlow s)
    {
        s.message();
    }
    try
    {
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    }
    catch(StackUnderFlow s)
    {
        s.message();
    }

}
