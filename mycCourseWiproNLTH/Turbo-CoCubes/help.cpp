#include<iostream>
using namespace std;
int MakeOne(int n)
{
    int counts=0;
    while(n!=1)
    {
        if(n%2==1)
        {
            n+=1;
        }
        else
        {
            n/=2;
        }
        counts++;
    }
    return counts;
}
int main()
{
    int n;
    cin>>n;
    cout<<MakeOne(n);
}
