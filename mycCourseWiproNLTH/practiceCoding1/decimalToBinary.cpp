#include <iostream>

using namespace std;
int decimalToBinary(int n)
{
    int bin=0,base=1;
    while(n>0)
    {
        int r=n%2;
        bin=bin+r*base;
        base=base*10;
        n=n/2;
    }
    return bin;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<decimalToBinary(n);
    return 0;
}

