#include<bits/stdc++.h>
using namespace std;
int decimalValue(string s,int n)
{
    int sum=0;
    int base=1;
    for(int i=0;i<n;i++)
    {
        int val;
        if(s[i]>='A'&&s[i]<='G')
        {
            val=s[i]-55;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            val=s[i]-48;
        }
        sum=sum+val*base;
        base=base*17;
    }
    return sum;
}
int main()
{
    string s;

    cin>>s;
    reverse(s.begin(),s.end());
    int decimal=decimalValue(s,s.length());
    cout<<"Decimal value: "<<decimal<<endl;
}
