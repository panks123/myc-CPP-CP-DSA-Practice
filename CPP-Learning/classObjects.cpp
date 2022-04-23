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
    rectangle r1,r2;
    cout<<sizeof(r1)<<" bytes "<<sizeof(r2)<<" bytes"<<endl;
    r1.length=10;
    r1.breadth=20;
    int area=r1.computeArea();
    cout<<area<<endl;

    r2.length=10;
    r2.breadth=2;
    area=r2.computeArea();
    cout<<area<<endl;
    cout<<sizeof(r1)<<" bytes "<<sizeof(r2)<<" bytes"<<endl;
    cout<<&r1<<" " <<&r2;
    return 0;
}
