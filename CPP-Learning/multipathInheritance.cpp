#include<iostream>
using namespace std;
class A
{
public:
    int a;
};
class B:public A
{
public:
    int b;
};
class C:public A
{
public:
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
    //d.a=100;     // This will give  error:request for member 'a' is ambiguous
    d.B::a=100;
    cout<<d.B::a<<endl;//accessing via class B

    d.C::a=10;
    cout<<d.C::a<<endl;//accessing via class C
                                     //So we can note that we have two copies of class A member i.e. 'a' available to class D object

    return 0;
}
