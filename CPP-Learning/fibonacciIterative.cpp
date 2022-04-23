#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n th value:";
    cin>>n;
    int fib;
    if(n==1)
        fib=0;
    else if(n==2)
        fib=1;
    else
    {
        int f=0;
        int s=1;
        for(int i=3;i<=n;i++)
        {
            fib=f+s;
            f=s;
            s=fib;
        }
    }
    cout<<fib;
}
