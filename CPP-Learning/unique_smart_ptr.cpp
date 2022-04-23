#include<iostream>
#include<memory>
using namespace std;
class Rectangle
{
    int length,breadth;
public:
    Rectangle(int l,int b)
    {
        length=l;breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    unique_ptr<Rectangle> p(new Rectangle(5,10));
    cout<<p->area()<<endl;
    return 0;
}
