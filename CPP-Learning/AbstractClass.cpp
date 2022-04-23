#include<iostream>
using namespace std;
class Base
{
public:
    virtual void fun()=0;
};
class Derived:public Base
{
public:
    void fun()
    {
        cout<<"fun in derived"<<endl;
    }
};
int main()
{
    //Base b; we cannot create object of abstract class
    Base *b;//But we can have pointer of the abstract class
    Derived d;
    b=&d;
    b->fun();
    return 0;
}
