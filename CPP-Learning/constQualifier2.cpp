#include<iostream>
using namespace std;
void fun(const int &a,int &b)
{
    cout<<a<<" "<<b<<endl;
    //a++;//Error:increment of read only reference
}
int main()
{
    int x=10,y=20;
    fun(x,y);
    cout<<"Main:"<<x<<" "<<y;
    return 0;
}
