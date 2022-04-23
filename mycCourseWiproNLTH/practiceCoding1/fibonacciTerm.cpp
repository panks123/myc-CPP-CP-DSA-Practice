#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    int a=0;
    int b=1;
    int c;
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;
    cout<<"Enter no. of terms:";
    cin>>n;
    cout<<n<<"th term of the fibonacci sequence: "<<fib(n);

}
