#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;

    else
    {
        int r;
        while(b%a!=0)
        {
            r=b%a;
            b=a;
            a=r;
        }

    }
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers->";
    cin>>a>>b;
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
}
