////With given denominations and given amount no. of ways to give the change of that amount

#include<iostream>
#include<algorithm>
using namespace std;
int countWays(int *coins,int w,int n)
{
    int *table=(int*)malloc((w+1)*sizeof(int));
    for(int i=0;i<w+1;i++)
        table[i]=0;
    table[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=coins[i];j<=w;j++)
        {
            table[j]=table[j]+table[j-coins[i]];
        }
    }
    return table[w];
}
int main()
{
    int n;
    cout<<"Enter no. of different denominations:";
    cin>>n;
    int *coins=(int *)malloc(n*sizeof(int));
    cout<<"Enter "<<n<<" different denominations:";
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    sort(coins,coins+n);
    cout<<"Enter amount:";
    int w;
    cin>>w;
    cout<<"Number of ways in which change can be given: "<<countWays(coins,w,n);
}
