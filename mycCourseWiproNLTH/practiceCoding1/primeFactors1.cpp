#include<iostream>
#include<math.h>
using namespace std;
void primeFactors(int n)
{
    if(n==1||n==0)
    {
        cout<<"Invalid input";
    }
    else
    {
        while(n%2==0)
        {
            cout<<2<<" ";
            n=n/2;
        }
        for(int i=3;i<=sqrt(n);i+=2)
        {
            while(n%i==0)
            {
                cout<<i<<" ";
                n=n/i;
            }
        }
    }
    if(n>2)                  //If the no. is prime other than 2 then it will print that
        cout<<n;
}
int main()
{
    int n;
    cout<<"Enter a no:";
    cin>>n;
    cout<<"Prime factors of "<<n<<" :";
    primeFactors(n);
}
