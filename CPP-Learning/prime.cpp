#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int counts=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
            counts++;
    }
    if(counts==1)
        cout<<"Prime";
    else
        cout<<"Not prime";

}
