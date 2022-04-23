#include<iostream>
using namespace std;
class Base
{

};
class Derived:public Base
{

};
int main()
{
    Derived d;
    Base b;
    try
    {
        throw d;
    }
    catch(Derived d)
    {
        cout<<"Caught Derived exception";
    }
    catch(Base b)
    {
        cout<<"Caught Base exception";
    }
    //So, catch block of derived class should appear first then catch block of base class should appear
    return 0;
}
