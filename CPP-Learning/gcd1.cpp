#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);

}
int main()
{
    int a,b;
    cout<<"Enter two numbers->";
    cin>>a>>b;
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
}
