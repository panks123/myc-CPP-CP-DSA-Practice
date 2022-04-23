#include<iostream>
using namespace std;
class Your;
class My
{

    int a;
    friend Your;
};
class Your
{
public:
    My m;
    void fun()
    {
        m.a=10;
        cout<<m.a<<endl;
    }
};
int main()
{
    Your y ;
    y.fun();
    return 0;
}
