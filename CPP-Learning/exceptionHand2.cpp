#include<iostream>
using namespace std;
int divide(int a,int b)throw(int)
{
    if(b==0)
        throw 1;
    return a/b;
}
int main()
{
    int a=10,b=0;
    //b=1;
    try
    {
        int c=divide(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Divide by zero "<<e<<endl;
    }
    cout<<"Bye "<<endl;
}
