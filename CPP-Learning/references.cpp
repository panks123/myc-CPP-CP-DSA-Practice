#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int &y=x;

    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    y++;x++;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"address(x)="<<&x<<endl;
    cout<<"address(y)="<<&y<<endl;
    int b=9;
    y=b;
    x++;
    y++;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"address(x)="<<&x<<endl;
    cout<<"address(y)="<<&y<<endl;
    cout<<"address(b)="<<&b<<endl;
    return 1;
}
