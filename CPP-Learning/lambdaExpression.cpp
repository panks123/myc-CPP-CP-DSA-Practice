#include<iostream>
using namespace std;
int main()
{
    [](){cout<<"Hello"<<endl;}();
    [](int x,int y){cout<<"Sum is:"<<x+y<<endl;}(3,8);
    cout<<([](int x,int y){return x+y;}(13,8))<<endl;
    int x=[](int x,int y)->int{return x+y;}(23,8);
    cout<<x<<endl;
    int a=10,b=20;
    auto f=[a](){cout<<a<<endl;};
    f();
    return 0;
}
