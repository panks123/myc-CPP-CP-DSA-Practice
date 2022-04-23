#include<bits/stdc++.h>
int gcdOfTwo(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else
    {
        return gcdOfTwo(b%a,a);
    }
}
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"GCD("<<a<<","<<b<<","<<c<<")= "<<gcdOfTwo(gcdOfTwo(a,b),c);
}
