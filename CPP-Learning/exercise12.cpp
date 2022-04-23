#include<iostream>
using namespace std;
class Shape
{
    public:
        virtual float area()=0;
        virtual float perimeter()=0;
};
class Rectangle:public Shape
{
    float length,breadth;
public:
    Rectangle(float length,float breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};
class Circle:public Shape
{
    float radius;
public:
    Circle(float r)
    {
        radius=r;
    }
    float area()
    {
        return 3.1425*radius*radius;
    }
    float perimeter()
    {
        return 2*3.1425*radius;
    }
};
int main()
{
    Shape *s;
    s=new Rectangle(10,20);
    cout<<"Area of the Rectangle="<<s->area()<<endl;
    cout<<"Perimeter of the Rectangle="<<s->perimeter()<<endl;

    s=new Circle(10);
    cout<<"Area of the Circle="<<s->area()<<endl;
    cout<<"Perimeter of the Circle="<<s->perimeter()<<endl;
    return 0;
}
