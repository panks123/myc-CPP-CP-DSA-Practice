#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
float add(int a,float b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}

/*float add(int a,int b)
{
    return (float)a+b;
}*/ //This will give error
int main()
{
    int a=add(2,7);
    cout<<a<<endl;
    a=add(2,7,8);
    cout<<a<<endl;
    float b=add(2,9.7f);
    cout<<b<<endl;
    b=add(2.3f,1.7f);
    cout<<b<<endl;
    return 0;
}
