#include<iostream>
using namespace std;
void swap(int a,int b)
{
    cout<<"Call by value"<<endl;
    cout<<a<<" "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
void swap(int *a,int *b)
{
    cout<<"call by address"<<endl;
    cout<<*a<<" "<<*b<<endl;
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<endl;
}
int main()
{
    int x=10,y=20;
    swap(x,y);
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
