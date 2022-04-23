#include<iostream>
using namespace std;
class Outer
{
public:
    class Inner
    {
        int num;
    public:
        void getData(int n)
        {
            num=n;
        }
        void putData(){cout<<num<<endl;}
    };
};
int main()
{
    Outer::Inner obj;
    obj.getData(100);
    obj.putData();
    return 0;
}
