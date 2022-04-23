#include<iostream>
#include<math.h>
using namespace std;
int isArmstrong(int n)
{
    int num=n,a=n;
    int sum=0;
    int d=0;
    //finding no. of digits
    while(a>0)
    {
        d++;
        a=a/10;
    }
    while(n>0)
    {
        int r=n%10;
        sum=sum+pow(r,d);
        n=n/10;
    }
    cout<<num<<endl;
    cout<<sum<<endl;
    if(sum==num)
        return 1;
    return 0;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(isArmstrong(n))
        cout<<n<< " is a Armstrong number";
    else
        cout<<n<< " is not a Armstrong number";
}
