#include<iostream>
using namespace std;
void fun(...)
{
    cout<<"Ellipsis"<<endl;
}
int main()
{
    fun();
    fun(1);
    fun("A","BC");
    fun('a',1,3.7,"Hello");
    return 0;
}
