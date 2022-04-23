#include<iostream>
using namespace std;
class Rectangle
{
    int length,breadth;
public:
    Rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBreadth(b);
    }
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
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
};
class Cuboid : public Rectangle
{
    int height;
public:

    Cuboid(int l=0,int b=0,int h=0)
    {
        setLength(l);
        setBreadth(b);
        setHeight(h);
    }
    void setHeight(int h)
    {
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};
int main()
{
    Cuboid c(2,3,4);
    cout<<c.volume()<<endl;
    cout<<c.getLength()<<" "<<c.getBreadth()<<" "<<c.getHeight()<<endl;
}
