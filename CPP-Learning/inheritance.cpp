#include<iostream>
using namespace std;
class Base
{
public:
    int x;
    Base(int v=0)
    {
        x=v;
    }
    void display()
    {
        cout<<"Display of base "<<x<<endl;
    }
};
class Derived : public Base
{
public:
    int y;
    Derived(int v=0,int d=0)
    {
        x=v;
        y=d;
    }
    void show()
    {
        cout<<"Show of derived "<<y<<endl;
    }
};
int main()
{
    Derived d(5,6);
    d.display();
    d.x=10;
    d.display();
    d.show();
    return 0;
}
