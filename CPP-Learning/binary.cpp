#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a no.:";
    int n;
    cin>>n;
    int i=1,bin=0,binn=n;
    while(n>0)
    {
        bin=bin+(n%2)*i;
        i=i*10;
        n=n/2;
    }
    cout<<"Binary no. of "<<binn<< " is "<<bin;
}
