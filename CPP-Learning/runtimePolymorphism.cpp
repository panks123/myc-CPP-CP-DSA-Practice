#include<iostream>
using namespace std;
class Car
{
public:
    virtual void start()
    {
        cout<<"Car started"<<endl;
    }
};
class Swift:public Car
{
public:
    void start()
    {
        cout<<"Swift started"<<endl;
    }
};
class Innova:public Car
{
public:
    void start()
    {
        cout<<"Innova Started"<<endl;
    }
};
int main()
{
    Car *c;
    c=new Swift();
    c->start();
    c=new Innova();
    c->start();
    return 0;
}
