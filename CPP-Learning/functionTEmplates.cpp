#include<iostream>
using namespace std;
template<class T>
T maxim(T a,T b)
{
    return a>b?a:b;
}
int main()
{
    cout<<maxim(2,3)<<endl;
    cout<<maxim(2.3,4.5)<<endl;
    cout<<maxim(2.3f,4.5f)<<endl;
    cout<<maxim('a','b')<<endl;
    cout<<maxim('b','a')<<endl;
    cout<<maxim("abc","ABC")<<endl;
    cout<<maxim("ABC","abc")<<endl;

    return 0;
}
