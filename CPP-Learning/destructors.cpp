#include<iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout<<"Constructor called\n";
    }
    ~Test()
    {
        cout<<"Destructor called\n";
    }
};
void fun()
{
    Test *p=new Test();
}
int main()
{
    fun();
    Test t;
    return 0;
}
