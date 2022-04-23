#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int n)
{
    int counts=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            counts++;
    }
    if(counts==1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n==1)
        cout<<n<<" is neither a Prime nor a composite number";
    else if(isPrime(n))
        cout<<n<<" is a Prime number";
    else
        cout<<n<<" is not a Prime number";
}

