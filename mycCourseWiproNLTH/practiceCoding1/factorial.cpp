#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cout<<"Enter a no.:";
    cin>>n;
    ll num = n;
    ll f=1;
    while(n>0)
    {
        f=f*n;
        n=n-1;
    }
    cout<<num<<"!="<<f;
}
