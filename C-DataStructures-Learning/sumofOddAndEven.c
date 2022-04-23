#include<iostream>
using namespace std;
int main()
{
    int n;
    if(n%2==0)
    {
        int n1=n/2;
        cout<<"Sum of odds from 1 to "<<n<<" is "<<n1*n1<<endl;
        cout<<"Sum of evens from 1 to "<<n<<" is "<<n1*(n1+1)<<endl;
    }
    else
    {
        int n1=(n+1)/2;
        int n2=n/2;
        cout<<"Sum of odds from 1 to "<<n<<" is "<<n1*n1<<endl;
        cout<<"Sum of evens from 1 to "<<n<<" is "<<n1*(n1+1)<<endl;
    }
}
