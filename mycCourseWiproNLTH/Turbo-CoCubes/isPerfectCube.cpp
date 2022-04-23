#include<iostream>
#include<math.h>
# define ll long long
using namespace std;
bool isPerfectCube(ll n)
{
    ll cuberoot=cbrt(n);
    return cuberoot*cuberoot*cuberoot==n;
}

int main()
{
    ll n;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Is perfect cube? :"<<isPerfectCube(n);
}

