#include<iostream>
using namespace std;
#define ll unsigned long long
ll fact(ll n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    ll n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<n<<"!="<<fact(n);
}
