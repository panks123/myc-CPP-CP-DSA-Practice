//Program to return the position of rightmost  bit among two nos  e.g. 4=100 and 5=101 so right most different bit is at position 1

#include<iostream>
#include<math.h>
using namespace std;
int rightmostSetbit(int n)
{
    if(n==0)
        return 0;
    else
        return log2(n&-n)+1;
}
int rightmostDiffBit(int n1,int n2)
{
    return rightmostSetbit(n1^n2);
}
int main()
{
    int n1,n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    cout<<rightmostDiffBit(n1,n2);
}
