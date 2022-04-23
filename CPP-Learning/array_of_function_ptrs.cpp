#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"Addition:"<<a+b<<endl;
}
void sub(int a,int b)
{
    cout<<"Subtraction:"<<a-b<<endl;
}
void mul(int a,int b)
{
    cout<<"Multiplication:"<<a*b<<endl;
}

int main()
{
    void (*fp[])(int,int)={add,sub,mul};
    int a=10,b=20,ch;
    cout<<"Enter your choice:(0.Add 1.Subtract 2.Multiply)";
    cin>>ch;
    if(ch>2) return 0;

    (*fp[ch])(a,b);
}
