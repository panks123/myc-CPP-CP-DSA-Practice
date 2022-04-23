#include<iostream>
using namespace std;
class Outer
{
public:

    int a=10;//non-static member of the outer class
    static int b;//static member of the outer class
    void fun()
    {
        i.show();
        cout<<i.x<<endl;//using the object of the inner class we can access the members of the inner class in outside class
    }
public:
    class Inner
    {
    public:
        int x=25;
        void show()
        {
            //cout<<a<<endl;//Inner class cannot access the non static members of the outer class
            cout<<b<<endl;//Inner class can only access the static members of the outer class
            cout<<"show inside Inner"<<endl;
        }
    };
    Inner i;//object of the inner class is also the member of the outer class -using this object we can access the members of the inner class members in the outer class

};
int Outer::b=200;
int main()
{
    Outer obj;
    obj.fun();
    return 0;
}
