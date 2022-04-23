//With given denominations and given amount no. of ways to give the change of that amount
#include<iostream>
using namespace std;
int countWays(int n)
{
    int *table=(int*)malloc((n+1)*sizeof(int));
    for(int i=0;i<n+1;i++)
        table[i]=0;

    table[0]=1;
    // for denomination 3
    for(int i=3;i<=n;i++)
    {
        table[i]=table[i]+table[i-3];
    }
    for(int i=0;i<n+1;i++)
        cout<<table[i]<<" ";
    cout<<endl;
    for(int i=5;i<=n;i++)
    {
        table[i]=table[i]+table[i-5];
    }
    for(int i=0;i<n+1;i++)
        cout<<table[i]<<" ";
    cout<<endl;
    for(int i=10;i<=n;i++)
    {
        table[i]=table[i]+table[i-10];
    }
    for(int i=0;i<n+1;i++)
        cout<<table[i]<<" ";
    cout<<endl;
    return table[n];
}
int main()
{
    //Given three denominations of 3,5,10
    int w;
    cout<<"Enter amount:";
    cin>>w;
    cout<<"Number of ways: "<<countWays(w);
}
