#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    static int count;
    Test()
    {
        a=10;b=20;
        count++;
    }
    static int getCount()
    {
        //a++; can't access static non-static members inside static function
        return count;
    }
};
int Test::count;
int main()
{
    Test t;
    cout<<t.count<<endl;
    Test t1;
    cout<<t1.count<<endl;
    cout<<Test::count<<endl<<endl;
    cout<<t.getCount()<<endl;
    cout<<t1.getCount()<<endl;
    cout<<Test::getCount()<<endl;
    return 0;
}
