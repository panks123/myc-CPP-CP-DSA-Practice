#include<iostream>
using namespace std;
class rectangle
{
private:

    int length;
    int breadth;

public:
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
    r.setLength(10);
    r.setBreadth(2);
    cout<<r.getLength()<<" "<<r.getBreadth()<<endl;
    cout<<r.area()<<" "<<r.perimeter()<<endl;
    return 0;
}
