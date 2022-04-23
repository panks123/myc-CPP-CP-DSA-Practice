#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;

    return gcd(b%a,a);
}
int gcdOfArray(int *arr,int n)
{
    int hcf;
    hcf=gcd(arr[0],arr[1]);
    for(int i=2;i<=n-1;i++)
    {
        hcf=gcd(hcf,arr[i]);
        if(hcf==1)
            return 1;
    }
    return hcf;
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"GCD of elements of array is: "<<gcdOfArray(arr,n);
}
