#include<iostream>
using namespace std;
int divide(int a,int b)
{
    if(b==0)
        throw string("Div by zero");
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
    catch(string e)
    {
        cout<<"Divide by zero "<<e<<endl;
    }
    cout<<"Bye "<<endl;
}
