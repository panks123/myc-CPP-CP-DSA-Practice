//Program to swap two numbers without using the third variable
#include<iostream>
using namespace std;
void swapNumbers(int &a,int &b)   //Here call by reference is used ->>> You can use call by address also using pointers
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    swapNumbers(a,b);
    cout<<"After swapping: a="<<a<<" b="<<b<<endl;
}

