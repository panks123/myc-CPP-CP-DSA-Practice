#include<iostream>
using namespace std;
void fibonacci(int n)
{
    if(n==1)
    {
        cout<<0;
        return;
    }
    if(n==2)
    {
        cout<<0<<" "<<1;
        return;
    }
    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=3;i<=n;i++)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cout<<"Enter number of terms:";
    cin>>n;
    cout<<"Fibonacci sequence: ";
    fibonacci(n);
}
