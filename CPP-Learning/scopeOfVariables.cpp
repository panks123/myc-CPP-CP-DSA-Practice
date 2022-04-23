#include<iostream>
using namespace std;
int x=10;
int main()
{
    cout<<x<<endl;
    int x=20;
    cout<<x<<endl;
    {
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;
    return 0;
}
