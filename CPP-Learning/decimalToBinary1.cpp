#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no.:";
    cin>>n;
    int i=1,bin=0;
    while(n!=0)
    {
        bin=bin+(n%2)*i;
        i=i*10;
        n=n/2;
    }
    cout<<bin;
}
