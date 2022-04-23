#include<iostream>
using namespace std;
template <class T,class U>
class A
{
public:
    T x;
    U y;
    A()
    {
        cout<<"Constructor called\n";
    }
};
int main()
{
    A<char,char> a;
    A<int,float> b;
    return 0;
}
