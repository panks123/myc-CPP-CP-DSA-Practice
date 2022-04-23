#include<iostream>
using namespace std;
class Test
{
    int a;
protected:
    int c;
public:
    int b;
    friend void fun();
};
void fun()
{
    Test t;
    t.a=100;
    t.b=200;
    t.c=300;
    cout<<t.a<<endl;
    cout<<t.b<<endl;
    cout<<t.c<<endl;
}
int main()
{
    Test t;
    fun();
    return 0;
}
