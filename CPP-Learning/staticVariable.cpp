#include<iostream>
using namespace std;
void fun()
{
    static int a=10;
    a++;
    cout<<a<<endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
