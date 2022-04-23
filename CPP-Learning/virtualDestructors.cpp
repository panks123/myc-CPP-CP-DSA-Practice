#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"Base constructor called\n";
    }
    virtual ~Base()
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
    Base *p=new Derived();
    delete p;
    return 0;
}

