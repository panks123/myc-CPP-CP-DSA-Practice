#include<iostream>
using namespace std;
enum day {mon=1,tue,wed,thu,fri,sat,sun};
enum dept {cs=1,it,ece,civil=10,mech,prod,eee,chem,metal};
int main()
{
    day d;
    d=mon;
    cout<<d<<endl;
    d=tue;
    cout<<d<<endl;
    d=wed;
    cout<<d<<endl;
    d=thu;
    cout<<d<<endl;
    d=fri;
    cout<<d<<endl;
    d=sat;
    cout<<d<<endl;
    d=sun;
    cout<<d<<endl;
    dept dt=cs;
    cout<<dt<<endl;
    dt=it;
    cout<<dt<<endl;
    dt=ece;
    cout<<dt<<endl;
    dt=civil;
    cout<<dt<<endl;
    dt=mech;
    cout<<dt<<endl;
    dt=prod;
    cout<<dt<<endl;
    dt=chem;
    cout<<dt<<endl;
    dt=metal;
    cout<<dt<<endl;
    return 0;
}
