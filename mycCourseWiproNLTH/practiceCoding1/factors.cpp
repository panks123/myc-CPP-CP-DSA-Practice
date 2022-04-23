#include<iostream>
using namespace std;
void factors(int n)
{
    int counts=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            counts++;
            cout<<i<<" ";
        }
    }
    cout<<"\nTotal number of factors: "<<counts;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Factors of "<<n<<" :";
    factors(n);
}
