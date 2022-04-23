/*
Find the number closest to n and divisible by m
Given two integers n and m. The problem is to find the number closest to n and divisible by m. If there are more than one such number,
then output the one having maximum absolute value. If n is completely divisible by m, then output n only. Time complexity of O(1) is required.
*/

#include<bits/stdc++.h>
using namespace std;
int closestNumber(int n,int m)
{
    int n1,n2;
    int q=n/m;
    n1=q*m;
    n2=(q+1)*m;
    int closest;
    if((n-n1)<(n2-n))
    {
        closest=n1;
    }
    else
    {
        closest=n2;
    }
    return closest;
}
int main()
{
    int n,m;
    cout<<"Enter values of n and m: "<<endl;
    cin>>n>>m;
    cout<<"Closest number: "<<closestNumber(n,m);
    return 0;
}
