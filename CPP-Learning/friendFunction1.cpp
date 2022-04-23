#include<iostream>
using namespace std;
class A
{
    int a;
public :
    A()
    {
        a=10;
    }
    void showB();
};
class B
{
    int b;
//public:

    friend void A::showB();
};
void A::showB()
{
    cout<<a<<endl;
    B obj;
    obj.b=100;
    cout<<obj.b<<endl;
}
int main()
{
    A obj;
    obj.showB();
    return 0;
}
