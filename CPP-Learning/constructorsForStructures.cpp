#include<iostream>
using namespace std;
struct rectangle
{
private:
    int length,breadth;
public:
    rectangle()
    {
        length=0;breadth=0;
        cout<<"Non-parameterized constructor called"<<endl;
    }
    rectangle(int l,int b)
    {
        length=l;breadth=b;
        cout<<"parameterized constructor called"<<endl;
    }
    rectangle(rectangle &r)
    {
        cout<<"copy constructor called"<<endl;
        length=r.length;
        breadth=r.breadth;
    }

    int getLength()
    {
        return length;
    }
    int getBreadth();
    /*{
        return breadth;
    }*/
    inline int area()
    {
        return length*breadth;
    }
};
int rectangle::getBreadth()
{
    return breadth;
}
int main()
{
    struct rectangle r;
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;
    cout<<r.area()<<endl;

    struct rectangle r1(10,5);
    cout<<r1.getLength()<<endl;
    cout<<r1.getBreadth()<<endl;
    cout<<r1.area()<<endl;

    struct rectangle r2(r1);
    cout<<r2.getLength()<<endl;
    cout<<r2.getBreadth()<<endl;
    cout<<r2.area()<<endl;
    return 0;
}

