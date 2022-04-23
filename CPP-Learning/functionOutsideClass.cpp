#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
public:
    rectangle();
    rectangle(int l,int b);
    rectangle(const rectangle &r);

    void setLength(int l);
    void setBreadth(int b);

    int getLength();
    int getBreadth();

    int area();

    bool isSquare();

    ~rectangle();
};
rectangle::rectangle()
{
    length=0;
    breadth=0;
    cout<<"non-parametrized constructor called"<<endl;
}
rectangle::rectangle(int l,int b)
{
    setLength(l);
    setBreadth(b);
    cout<<"parametrized constructor called"<<endl;
}
rectangle::rectangle(const rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void rectangle::setLength(int l)
{
    if(l<=0)
    {
        length=0;
        cout<<"Invalid length, length set to 0"<<endl;
    }
    else
        length=l;
}
void rectangle::setBreadth(int breadth)
{
    if(breadth<=0)
    {
        this->breadth=0;
        cout<<"Invalid breadth, breadth set to 0"<<endl;
    }
    else
        this->breadth=breadth;
}
int rectangle::getLength()
{
    return length;
}
int rectangle::getBreadth()
{
    return breadth;
}
int rectangle::area()
{
    return length*breadth;
}
bool rectangle::isSquare()
{
    if(length==breadth)
        return 1;
    else
        return 0;
}
rectangle::~rectangle()
{
    cout<<"rectangle destroyed"<<" "<<length<<endl;
}
int main()
{
    rectangle r1;
    cout<<r1.area()<<endl;

    rectangle r2(10,10);
    cout<<r2.getLength()<<" "<<r2.getBreadth()<<endl;
    cout<<r2.area()<<endl;
    cout<<r2.isSquare()<<endl;

    rectangle r3=rectangle(r2);
    cout<<r3.getLength()<<" "<<r3.getBreadth()<<endl;
    cout<<r3.area()<<endl;
    cout<<r3.isSquare()<<endl;
    rectangle r4(5,7);
    rectangle r5(7,7);
    return 0;

}
