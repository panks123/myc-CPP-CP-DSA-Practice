#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    return a+b+c;
}
int max(int a=0,int b=0,int c=0)
{
    return a>b&&a>c?a:(b>c?b:c);
}
int main()
{
    cout<<add(2,3)<<endl;
    cout<<add(2,3,4)<<endl;
    cout<<max(2,3)<<endl;
    cout<<max(4,2,5)<<endl;
    cout<<max(4)<<endl;
    cout<<max()<<endl;
    return 0;
}
