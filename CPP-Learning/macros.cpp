#include<iostream>
using namespace std;
#define PI 3.14
#ifndef PI
    #define PI 3
#endif
#define C cout
#define max(x,y) (x>y?x:y)
#define msg(x) #x
int main()
{
    cout<<PI<<endl;
    C<<PI<<endl;
    C<<max(5,7)<<endl;
    C<<msg(hello);
    return 0;
}
