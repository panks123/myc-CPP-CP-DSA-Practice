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
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<rightmostSetbit(n);
}
