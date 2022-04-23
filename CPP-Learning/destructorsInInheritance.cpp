#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"Base constructor called\n";
    }
    ~Base()
    {
        cout<<"Base destructor called\n";
    }
};
class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Derived constructor called\n";
    }
    ~Derived()
    {
        cout<<"Derived destructor called\n";
    }
};
int main()
{
    Derived d;
    return 0;
}
