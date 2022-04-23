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
    rectangle r;
    r.length=10;//accessing the object using object variable
    rectangle *p;
    p=&r;
    cout<<&r<<" "<<p<<endl;
    cout<<p->length<<endl;////accessing the object using pointer to the object
    p->breadth=5;
    cout<<p->computeArea()<<endl;
    return 0;
}
