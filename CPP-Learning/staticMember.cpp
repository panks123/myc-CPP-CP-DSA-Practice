#include<iostream>
using namespace std;
class Test
{
public:
    int a;
    static int count;
    Test()
    {
        a=10;
        count++;
    }
};
int Test::count;
int main()
{
    Test t;
    Test t1;
    cout<<t.count<<endl;
    cout<<t1.count<<endl;
    cout<<Test::count<<endl;
    t.count=25;
    cout<<t1.count<<endl;
    return 0;
}
