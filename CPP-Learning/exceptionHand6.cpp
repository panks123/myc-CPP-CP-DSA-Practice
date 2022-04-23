#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 10;
    }
    catch(char *exce)
    {
        cout<<"Caught\n";
    }
    catch(...)
    {
        cout<<"Default exception\n";
    }
}
