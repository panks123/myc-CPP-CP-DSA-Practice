#include<iostream>
using namespace std;
int countSetBits(int n)
{
    int counts=0;
    while(n>0)
    {
        counts+=(n&1);//Counts no. of 1s in the number
        n=n>>1;//Right shift by 1 means divide the no. by 2
    }
    return counts;
}
int main()
{
    int n;
    cout<<"Enter a no.";
    cin>>n;
    cout<<"No. of set bits="<<countSetBits(n);
}
//Its time complexity is log(n)
