#include<iostream>
using namespace std;
class Test
{
    int a;
    int *p;
public:
    Test(int x)
    {
        a=x;
        p=new int[a];
    }
    Test(Test &t)
    {
        a=t.a;
        p=t.p;
    }
    int geta()
    {
        return a;
    }
    int* getp()
    {
        return p;
    }
};
int main()
{
    Test t(5);
    Test t1(t);
    cout<<t.geta()<<endl;
    int *p=t.getp();
    for(int i=0;i<t.geta();i++)
    {
        p[i]=i*5;
    }
    for(int i=0;i<t.geta();i++)
        cout<<p[i]<<" ";
    cout<<endl;
    cout<<t1.geta()<<endl;
    int *p1=t1.getp();
    for(int i=0;i<t1.geta();i++)
        cout<<p1[i]<<" ";
    cout<<endl;
    cout<<t.getp()<<" "<<t1.getp()<<endl;
    return 0;
}
