#include<iostream>
using namespace std;
int main()
{
    int x=11,y=7,z;
    z=x&y;
    cout<<z<<endl;
    z=x|y;
    cout<<z<<endl;
    z=x^y;
    cout<<z<<endl;
    cout<<~x<<endl;
    x=5;
    y=x<<1;
    cout<<y<<endl;
    y=y>>1;
    cout<<y<<endl;
    y=y<<2;
    cout<<y<<endl;
}

