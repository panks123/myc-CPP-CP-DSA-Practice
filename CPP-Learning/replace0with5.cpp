#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    if(n==0)
    {
        cout<<5;
        return 0;
    }
    int r,sum=0,base=1;
    while(n>0)
    {
        int r=n%10;
        if(r==0)
            r=5;
        sum=sum+(r*base);
        base=base*10;
        n=n/10;
    }
    cout<<sum;
}
