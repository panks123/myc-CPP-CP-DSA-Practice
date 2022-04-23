#include<bits/stdc++.h>
using namespace std;
long decimalToBinary(int n)
{
    long base=1,res=0;
    while(n>0)
    {
        int r=n%2;
        res=res+r*base;
        base=base*10;
        n=n/2;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Binary: "<<decimalToBinary(n);
}
