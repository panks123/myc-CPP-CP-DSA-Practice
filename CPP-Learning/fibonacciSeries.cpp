#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of terms";
    cin>>n;
    int prev1=0,prev2=1;
    if(n==1)
        cout<<prev1;
    else if(n==2)
        cout<<prev1<<" "<<prev2<<" ";
    else
    {
        cout<<prev1<<" "<<prev2<<" ";
    }
    for(int i=2;i<n;i++)
    {
        cout<<prev1+prev2<<" ";
        int temp=prev1;
        prev1=prev2;
        prev2=prev2+temp;

    }
}
