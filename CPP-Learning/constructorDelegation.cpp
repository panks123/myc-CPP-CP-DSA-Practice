#include<iostream>
using namespace std;
class Test
{
    int x,y,z;
public:
    Test()
    {
        x=0;
        y=0;
        z=0;
    }
    Test(int z):Test()
    {
        this->z=z;
    }
    Test(int y,int z):Test()
    {
        this->y=y;
        this->z=z;
    }
    void show()
    {
        cout<<x<< " "<<y<<" "<<z<<endl;
    }
};
int main()
{
    Test t(3);
    t.show();
    Test t1(5,6);
    t1.show();
    return 0;
}
