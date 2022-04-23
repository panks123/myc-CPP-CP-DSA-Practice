#include<iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            //throw 'a';
            throw 10;
        }
        catch(int x)
        {
            cout<<"Inner catch\n";
        }
    }
    catch(...)
    {
        cout<<"Outer catch\n";
    }
    cout<<"Bye\n";
    return 0;
}
