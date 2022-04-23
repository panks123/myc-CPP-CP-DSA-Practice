#include<iostream>
using namespace std;
class rectangle
{
public:

    int length;
    int breadth;
    int computeArea()
    {
        return length*breadth;
    }
};
int main()
{
    rectangle r;//here the object is created in stack
    rectangle *p;
    p=new rectangle();//here the object is created inside heap area
    p->breadth=10;
    p->length=5;
    cout<<p->length<<" "<<p->breadth<<endl;
    cout<<p->computeArea()<<endl;
    cout<<p<<" "<<&p<<endl;
    return 0;
}
