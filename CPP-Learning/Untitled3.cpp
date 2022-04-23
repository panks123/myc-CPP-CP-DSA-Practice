#include <bits/stdc++.h>
#include<typeinfo>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int C(int n,int r)
{
    int t0=factorial(n);
    int t1=factorial(r);
    int t2=factorial(n-r);
    return t0/(t1*t2);
}
int main()
{
    char c='a';
    const type_info& t2=typeid('a');
    cout<< t2.name()<<endl;
    const type_info& t1=typeid('a');
    cout<< t1.name();
}
