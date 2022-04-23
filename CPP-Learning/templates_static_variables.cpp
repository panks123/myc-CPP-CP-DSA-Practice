#include<iostream>
using namespace std;
template <class T>
void fun(T x)
{
    static int i=10;
    i++;
    cout<<i<<endl;
}
int main()
{
    fun(1);
    fun(2);
    fun(4.5);
    return 0;
}
