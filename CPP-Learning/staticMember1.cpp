#include<iostream>
using namespace std;
class Test
{
public:
    int x;
    static int y;
    Test()
    {
        x=20;
        y++;
    }
    void display()//A non-static member function can access both non-static and static data members
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
    static void display1()//A static member function can access only static data member
    {
        //cout<<x<<endl;
        cout<<y<<endl;
    }
};
int Test::y;
int main()
{
    Test t;
    t.display();
    t.display1();
    return 0;
}
