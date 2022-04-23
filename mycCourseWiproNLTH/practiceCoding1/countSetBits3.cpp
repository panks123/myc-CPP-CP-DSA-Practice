#include<iostream>
using namespace std;
unsigned int countSetBits(int n)
{
    unsigned int counts=0;
    while(n>0)
    {
        n=n&(n-1);
        counts++;
    }
    return counts;
}
int main()
{
    cout<<"Enter a no.:";
    int n;
    cin>>n;
    cout<<"No. of set bits:"<<countSetBits(n);
}
//It is more efficient : it runs the loop = no. of 1s in the number
