#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;
int isArmstrong(int n)
{
    int d=0;
    int temp=n;
    while(temp!=0)
    {
         temp=temp/10;
         d++;
    }

    int temp1=n,sum=0;
    while(n!=0)
    {
        int r=n%10;
        sum=sum+pow(r,d);
        n=n/10;
    }
    //cout<<"XXX"<<sum;
    if(sum==temp1)
    {
        //cout<<"XXX"<<d;
        return 1;
    }

    else
        return 0;
}
int main()
{
    int a,b;
    cout<<"Enter the range:";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        isArmstrong(i)?cout<<i:cout<<"";
}
