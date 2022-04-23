#include <iostream>

using namespace std;
int BinaryToDecimal(int n)
{
    int decimal=0;
    int base=1;
    while(n>0)
    {
        int r=n%10;
        decimal=decimal+base*r;
        base=base*2;
        n=n/10;
    }
    return decimal;
}
int main()
{
    int n;
    cout<<"Enter a binary number:";
    cin>>n;
    cout<<BinaryToDecimal(n);
    return 0;
}
