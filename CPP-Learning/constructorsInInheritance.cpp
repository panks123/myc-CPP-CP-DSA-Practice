#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"Non-parameterized constructor in Base class"<<endl;
    }
    Base(int x)
    {
        cout<<"Parameterized constructor in Base class"<<endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout<<"Non-parameterized constructor in Derived class"<<endl;
    }
    Derived(int x)
    {
        cout<<"Parameterized constructor in Derived class"<<endl;
    }
};
int main()
{
    Derived d;
    cout<<endl;
    Derived d1(1);
    return 0;
}
