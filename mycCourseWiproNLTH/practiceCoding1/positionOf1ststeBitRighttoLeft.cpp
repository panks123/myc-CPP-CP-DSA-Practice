#include<iostream>
using namespace std;
unsigned int count1stPosofSetbit(int n)
{
    unsigned int counts=0;
    while(n>0)
    {
        counts++;
        if(n%2==1)
            break;
        else
        {
            n=n>>1;
        }
    }
    return counts;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<count1stPosofSetbit(n);
}
