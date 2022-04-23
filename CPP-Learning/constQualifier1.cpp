#include<iostream>
using namespace std;
class Test
{
public:
    int x=10,y=20;
    void display()const
    {
        x++;
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    Test t;
    t.display();
}
