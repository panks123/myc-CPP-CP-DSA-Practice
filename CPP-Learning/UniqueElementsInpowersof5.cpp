#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter value of n";
    int n;
    cin>>n;
    int bin=0,base=1;
    while(n>0)
    {
        bin=bin+(n%2)*base;
        base=base*10;
        n=n/2;
    }
    cout<<bin<<endl;
    int sum=0,base1=5;
    while(bin>0)
    {
        sum=sum+(bin%10)*base1;
        base1=base1*5;
        bin=bin/10;
    }
    cout<<sum;
}
