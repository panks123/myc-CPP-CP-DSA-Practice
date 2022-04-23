#include<iostream>
using namespace std;
int main()
{
    int x=10,y=100;
    const int * const ptr=&x;
    //ptr=&y;
    ++*ptr;
    //*ptr=100;
    cout<<x<<endl;
    return 0;
}
