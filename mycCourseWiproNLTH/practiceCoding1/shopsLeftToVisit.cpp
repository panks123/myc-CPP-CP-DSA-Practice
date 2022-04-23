#include<iostream>
using namespace std;
int shopsLeft(int i,int l)
{
    return (2<<l-1)-i; // same as (2<<(l-1))-i;
}
int main()
{
    int i,l;
    cin>>i>>l;
    cout<<shopsLeft(i,l);
}
/*
    Note: number<<i is same as number*pow(2,i) and,
          number>>i is same as number/pow(2,i)
*/
