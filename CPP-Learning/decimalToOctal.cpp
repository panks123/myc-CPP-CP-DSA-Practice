#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no. to convert:";
    cin>>n;
    int i=1,oct=0,no=n;
    while(n>0)
    {
        oct =oct+(n%8)*i;
        i=i*10;
        n=n/8;
    }
    cout<<"Octal equivalent of "<<no<<" is "<<oct;

}
