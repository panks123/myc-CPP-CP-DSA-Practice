#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void primeFactors(int n)
{
    int num=n;
    if(n==1||n==0)
    {
        cout<<"Invalid input";
    }
    else if(n==2||isPrime(n))
        cout<<n;
    else
    {
        for(int i=2;i<=sqrt(num/2);i++)
        {
            if(isPrime(i))
            {
                while(n%i==0)
                {
                    cout<<i<<" ";
                    n=n/i;
                }
            }
        }
        if(n>2)
            cout<<n<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter a no:";
    cin>>n;
    cout<<"Prime factors of "<<n<<" :";
    primeFactors(n);
}

