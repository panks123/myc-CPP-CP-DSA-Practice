//Program to calculate the gcd of all the elements of array
#include<bits/stdc++.h>
using namespace std;
int gcdOfTwo(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else
        return gcdOfTwo(b%a,a);
}
int gcdOfArr(int *arr,int n)
{
    int gcd=gcdOfTwo(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        gcd=gcdOfTwo(gcd,arr[i]);
    }
    return gcd;
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"GCD of all the elements of the array: "<<gcdOfArr(arr,n);
}
