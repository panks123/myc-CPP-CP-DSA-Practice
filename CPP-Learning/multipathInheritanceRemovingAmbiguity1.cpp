#include<iostream>
using namespace std;
class A
{
public:
    int a;
};
class B:virtual public A
{
public :
    int b;
};
class C:virtual public A
{
public :
    int c;
};
class D:public B,public C
{
public:
    int d;
};
int main()
{
    D d;
    d.a=100;
    cout<<d.a<<endl;
    d.a=10;
    cout<<d.a<<endl;
    return 0;
}
