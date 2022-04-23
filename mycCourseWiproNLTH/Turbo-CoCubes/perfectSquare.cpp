#include<iostream>
#include<math.h>
# define ll long long
bool isPerfectSq(ll n)
{
    if (n<0)
        return false;
    ll sqroot=sqrt(n);
    return sqroot*sqroot==n;
}
using namespace std;
int main()
{
    ll n;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Is perfect square? :"<<isPerfectSq(n);
}
