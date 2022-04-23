#include<iostream>
using namespace std;
class Base
{
private:
    int x;
protected:
    int y;
public:
    int z;
    void setXYZ(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
};
class Derived:public Base
{
    void setZ(int a)//public data member of base class can be accessed inside derived class
    {
        z=a;
    }
    void setY(int l)//protected data member of base class can be accessed inside derived class  //But private member of base class cannot be accessed inside derived class
    {
        y=l;
    }
};
int main()
{
    Base b;
    //b.x=9;   //private  member of a class can not be accessed by an object of the class using . operator
    //b.y=9;   //protected member of a class can not be accessed by an object of the class using . operator
    b.z=9;     //public member of a class can be accessed by an object of the class using . operator
    Derived d;
    //d.x=9;     //private member of a class can not be accessed by an object of its derived class using . operator
    //d.y=9;     //protected member of a class can not be accessed by an object of its derived class using . operator
    d.z=9;     //public member of a class can be accessed by an object of its derived class using . operator
    return 0;
}
