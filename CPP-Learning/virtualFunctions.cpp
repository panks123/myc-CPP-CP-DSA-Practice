#include<iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout<<"print of Base"<<endl;
    }
    void show()
    {
        cout<<"show of Base"<<endl;
    }
};
class Derived:public Base
{
public:
    virtual void print()
    {
        cout<<"print of Derived"<<endl;
    }
    void show()
    {
        cout<<"show of Derived"<<endl;
    }
    void fun()
    {
        cout<<"fun of Derive";
    }
};
int main()
{
    Base *p=new Derived();
    p->print();
    p->show();
    //The below statement will give error as it is not allowed
   // p->fun(); // as we are using base class pointer so we can call only those methods which are available in Base class although we have created a child class object
                // and If the function which is in the base class declared as virtual then it's overridden method of the derived class will be called
                // This is runtime polymorphism
    return 0;
}
