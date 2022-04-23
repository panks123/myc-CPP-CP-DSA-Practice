//Count no. of set bits in a given number
#include<iostream>
using namespace std;
unsigned int countSetBits(int n)
{
    unsigned int counts=0;
    while(n>0)
    {
        int r=n%2;
        if(r==1)
            counts++;
        n=n/2;
    }
    return counts;
}
int main()
{
    int n;
    cout<<"Enter a no.:";
    cin>>n;
    cout<<"No.of set bits="<<countSetBits(n);
}
