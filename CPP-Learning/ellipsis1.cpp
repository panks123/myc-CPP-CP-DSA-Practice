#include<iostream>
#include<cstdarg>
using namespace std;
int fun(int n,...)
{
    va_list list;
    va_start(list,n);
    int x;
    /*for(int i=0;i<n;i++)
    {
        cout<<va_arg(list,int)<<endl;
    }*/
    int s=0;
    for(int i=0;i<n;i++)
    {
        x=va_arg(list,int);
        cout<<x<<endl;
        s+=x;
    }
    return s;
}
int main()
{
    int s=fun(3,10,20,30);
    cout<<"Sum of args:"<<s<<endl;
    s=fun(9,1,2,3,4,5,6,7,8,9);
    cout<<"Sum of args:"<<s<<endl;
    return 0;
}
