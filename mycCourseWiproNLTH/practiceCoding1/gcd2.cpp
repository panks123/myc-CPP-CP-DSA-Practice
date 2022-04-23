#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else if(a>b)
    {
        return gcd(a-b,b);
    }
    else
    {
        return gcd(a,b-a);
    }
}
int main()
{
    int m,n;
    cout<<"Enter two numbers:";
    cin>>m>>n;
    cout<<"GCD: "<<gcd(m,n);
}
