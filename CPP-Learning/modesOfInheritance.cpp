#include<iostream>
using namespace std;
class A
{
public:
    int a;
protected:
    int b;
private:
    int c;
};
class B:public A
{
    //a is public
    //b is protected
    //c is not accessible from B
    //c=10; //so c is not accessible
};
class C:protected A
{
    //a is protected
    //b is protected
    //c is not accessible from C
    //c=10; //so c is not accessible
};
class D:public C
{
    setA(int k)
    {
        a=k;
    }
    setB(int k)
    {
        b=k;
    }
};
class E:private A
{
    //a is private
    //b is private
    //c is private
};
class F:public E
{
    /*setB(int k)
    {
        b=k;
    }*///because a,b,c has been derived as private in E from A
};
int main()
{
    B b;
    b.a=100;
    cout<<b.a<<endl;
    //b.b=10;//b has been derived as protected from the base class
    //cout<<b.b<<endl;

    C c;
    //c.a=10;
    //cout<<c.a<<endl;c.a=10;

    //c.b=12;
    //cout<<c.b<<endl;

     //E e;
     //e.a=90;

    return 0;
}
