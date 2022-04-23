#include<iostream>
using namespace std;
void fun()
{
    cout<<"This is fun()"<<endl;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{
    void (*fp)();//declaration of function pointer
    fp=fun;//initialisation
    (*fp)();//function call

    int (*fp1)(int,int);
    fp1=max;
    int x=(*fp1)(10,5);
    cout<<"max="<<x<<endl;
    fp1=min;
    int a=(*fp1)(10,5);
    cout<<"min="<<a<<endl;

    return 0;
}
