#include <iostream>

using namespace std;
int decimalToOctal(int n)
{
    int octal=0,base=1;
    while(n>0)
    {
        int r=n%8;
        octal=octal+r*base;
        base=base*10;
        n=n/8;
    }
    return octal;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<decimalToOctal(n);
    return 0;
}


