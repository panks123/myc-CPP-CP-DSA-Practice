#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;

    return gcd(b%a,a);
}
int main()
{
    int m,n;
    cout<<"Enter two numbers:";
    cin>>m>>n;
    cout<<"GCD: "<<gcd(m,n);
}
