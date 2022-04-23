#include<iostream>
using namespace  std;
int main()
{
    int i=5,j;
    i++;

    cout<<i<<endl;
    j=i++;
    cout<<j <<" "<<i<<endl;
    j=++i;
    cout<<j <<" "<<i<<endl;
    i=5;
    j=2* ++i + 2* i++;
    cout<<j <<" "<<i<<endl;
    i=5;
    j=2* i++ + 2* i++;
    cout<<j <<" "<<i<<endl;

    i=5;
    j=2* ++i + 2* ++i;
    cout<<j <<" "<<i<<endl;
    return 0;
}
