#include<iostream>
#include<math.h>
int count1stPosofSetbit(int n)
{
    if(n==0)
        return 0;
    else
        return log2(n&-n)+1;
}
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<count1stPosofSetbit(n);
}
