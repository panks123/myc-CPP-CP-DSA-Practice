#include<iostream>
using namespace std;
class basicCar
{
public:
    void start()
    {
        cout<<"Car Started"<<endl;
    }
};
class modifiedCar:public basicCar
{
public:
    void playMusic()
    {
        cout<<"Music playing"<<endl;
    }
};
int main()
{
    basicCar *c=new modifiedCar();
    //modifiedCar m;
    //c=&m;
    c->start();
    //c->playMusic(); //error:class basicCar has no member named 'playMusic'
    return 0;
}
