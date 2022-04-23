#include<iostream>
using namespace std;
class Myexception:public exception
{

};
int divide(int a,int b)throw(Myexception)
{
    if(b==0)
        throw Myexception();
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
    catch(Myexception e)
    {
        cout<<"Divide by zero "<<endl;
    }
    cout<<"Bye "<<endl;
}

