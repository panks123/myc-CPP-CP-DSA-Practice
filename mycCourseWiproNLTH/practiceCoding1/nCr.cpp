#include<iostream>
#define ll long long
using namespace std;
ll fact(int n)
{
    if(n==0)
        return 1;
    ll f=1;
    for(int i=n;i>0;i--)
        f=f*i;
    return f;
}
ll nCr(int n,int r)
{
    if(n==0&&r==0)
        return -1;
    else if(n<r)
        return -1;
    else
    {
        ll t1=fact(n);
        ll t2=fact(r);
        ll t3=fact(n-r);
        return t1/(t2*t3);
    }
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int r;
    cout<<"Enter r:";
    cin>>r;
    cout<<"C("<<n<<","<<r<<")= "<<nCr(n,r);
}
