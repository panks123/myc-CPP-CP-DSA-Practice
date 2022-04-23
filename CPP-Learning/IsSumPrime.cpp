#include<iostream>
using namespace std;
int isPrime(int n)
{
    int flag=1;
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
    {

        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                    flag=0;
                    break;
            }
        }
        return flag;
    }
}
int main()
{
    string s;
    cin>>s;
    int sum=0;
    cout<<s.length()<<endl;
    for(int i=0;i<s.length();i++)
    {
        sum=sum+s[i];
    }
    cout<<sum<<endl;
    cout<<isPrime(sum);

}
