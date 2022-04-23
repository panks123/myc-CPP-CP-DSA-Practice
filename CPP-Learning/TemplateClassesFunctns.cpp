#include<iostream>
using namespace std;
template <class T>
class Stack
{
private :
    T *stk;
    int size;
    int top;
public:
    Stack(int sz)
    {
        size=sz;
        top=-1;
        stk=new T[size];
    }
    void push(T);
    T pop();
    void display()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<stk[i]<<endl;
        }
        cout<<endl;
    }
};
template <class T>
void Stack<T>::push(T x)
{
    if(top==size-1)
        cout<<"Stack overflow\n";
    else
    {
        top++;
        stk[top]=x;
    }
}
template <class T>
T Stack<T>::pop()
{
    T x=0;
    if(top==-1)
    {
        cout<<"Stack underflow\n";
    }
    else
    {
        x=stk[top--];
    }
    return x;
}
int main()
{
    //Stack<int> s(5);
    Stack<float> s(5);
    s.push(1.9);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.display();
    return 0;
}
