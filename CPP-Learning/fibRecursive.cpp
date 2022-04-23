#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
        return fib(n-2)+fib(n-1);
}
int main()
{
    int n;
    cout<<"Enter no. of terms";
    cin>>n;
    cout<<fib(n);

}
