#include<iostream>
using namespace std;
class Complex
{
    int real,img;
public:
    Complex(int r=0,int i=0)
    {
        real=r;img=i;
    }

    friend ostream& operator<<(ostream&,Complex &c);
    friend istream & operator>>(istream &in,Complex &c);
};
ostream& operator<<(ostream &out ,Complex &c)
{
    out<<c.real<<" + i"<<c.img<<endl;
    return out;
}
istream & operator>>(istream &in,Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.img;
    return in;
}
int main()
{
    Complex c1(10,5);
    cout<<c1;
    Complex c2(1,-5);
    cout<<c2;
    Complex c3(1,15);
    operator<<(cout,c3);//like function call
    Complex c4;
    cin>>c4;
    cout<<c4;
    return 0;
}
