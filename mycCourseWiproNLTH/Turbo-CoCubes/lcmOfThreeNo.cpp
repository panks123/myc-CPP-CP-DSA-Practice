
#include <bits/stdc++.h>
using namespace std;
int hcf(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    return hcf(b%a,a);
}
int lcm(int a,int b)
{
    return (a*b)/hcf(a,b);
}
int lcmOfThree(int a,int b,int c)
{
    return lcm(lcm(a,b),c);
}
// Driver code
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<lcmOfThree(a,b,c);
    return 0;
}
