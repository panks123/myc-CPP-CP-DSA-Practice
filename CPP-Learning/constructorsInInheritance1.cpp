#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"Non-parameterized constructor in Base class"<<endl;
    }
    Base(int k)
    {
        cout<<"Parameterized constructor in Base class "<<k<<endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout<<"Non-parameterized constructor in Derived class"<<endl;
    }
    Derived(int x,int y):Base(x)
    {
        cout<<"Parameterized constructor in Derived class "<<y<<endl;
    }
};
int main()
{
    Derived d;
    cout<<endl;
    Derived d1(1,2);
    return 0;
}

