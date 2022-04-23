//Program to return the position of rightmost set bit among two nos  e.g. 4=100 and 5=101 so right most different bit is at position 1

#include<iostream>
using namespace std;
unsigned int rightmostDiffBit(int n1,int n2)
{
    unsigned int counts=0;
    while(n1!=0||n2!=0)
    {
        counts++;
        int r1,r2;
        if(n1!=0)
        {
            r1=n1%2;
            n1=n1>>1;
        }
        else
        {
            r1=0;
        }

        if(n2!=0)
        {
            r2=n2%2;
            n2=n2>>1;
        }
        else
        {
            r2=0;
        }

        if(r1!=r2)
        {
            break;
        }
    }
    return counts;
}
int main()
{
    int n1,n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    cout<<rightmostDiffBit(n1,n2);
}
