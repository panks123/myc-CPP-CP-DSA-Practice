#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,no;
    cout<<"Enter the binary no.:";
    cin>>n;
    no=n;
    int i=0;
    int dec=0;
    while(n>0)
    {
        dec=dec+(n%10)*pow(2,i);
        i++;
        n=n/10;
    }
    cout<<"Decimal equivalent of : "<<no<<" is "<<dec;
}
