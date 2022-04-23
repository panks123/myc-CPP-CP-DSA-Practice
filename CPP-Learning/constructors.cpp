#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
    public:
        rectangle()
        {
            length=0;
            breadth=0;
            cout<<"Unparametrized constructor called"<<endl;
        }
        rectangle(int l,int b)
        {
            setLength(l);
            setBreadth(b);
            cout<<"Parametrized constructor called"<<endl;
        }
    void setLength(int l)
    {
        if(l<=0)
        {
            length=0;
            cout<<"Length is invalid so set to 0"<<endl;
        }
        else
            length=l;
    }
    void setBreadth(int b)
    {
        if(b<=0)
        {
            breadth=0;
            cout<<"Breadth is invalid so set to 0"<<endl;
        }
        else
            breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};
int main()
{
    rectangle r;
    rectangle r1(10,5);
    cout<<r1.area()<<endl;
}
