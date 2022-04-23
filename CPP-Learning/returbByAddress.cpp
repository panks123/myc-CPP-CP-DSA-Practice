#include<iostream>
using namespace std;
int* fun(int size)
{
    int *x=new int[size];
    for(int i=0;i<size;i++)
    {
        x[i]=i*5;
    }
    cout<<x<<endl;
    return x;
}
int main()
{
    int *x=fun(5);
    cout<<x<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
