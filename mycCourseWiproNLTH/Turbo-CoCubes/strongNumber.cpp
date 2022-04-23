#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
bool isStrong(int n)
{
    int sum=0,num=n;
    while(n>0)
    {
        int r=n%10;
        sum=sum+factorial(r);
        n=n/10;
    }
    if(sum==num)
            return true;
    else
            return false;
}
int main()
{
    cout<<"Enter a number: ";
    int n;cin>>n;
    cout<<"Is " <<n<<" strong number? :"<<isStrong(n);
}
