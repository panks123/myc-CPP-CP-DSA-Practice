#include<iostream>
using namespace std;
struct rectangle
{
private:
    int length,breadth;
public:
    void setLengthAndBreadth(int l,int b)
    {
        length=l;
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
int main()
{
    struct rectangle r;
    r.setLengthAndBreadth(10,5);
    cout<<r.getLength()<<" "<<endl;
    cout<<r.getBreadth()<<" "<<endl;
    cout<<r.area()<<endl;
    return 0;
}
