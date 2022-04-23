#include<iostream>
using namespace std;
class Complex
{
private:

    int real;
    int img;
public:

    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
    friend Complex operator+(Complex c1,Complex c2);
};
Complex operator + (Complex c1,Complex c2)
{
    Complex result;
    result.real=c1.real+c2.real;
    result.img=c1.img+c2.img;
    return result;
}
int main()
{
    Complex c1(5,10);
    Complex c2(1,2);
    Complex c3=c1+c2;
    c3.display();
    c3=c1+c1;
    c3.display();
    c3=c2+c2;
    c3.display();
    c3=operator +(c2,c2);
    c3.display();
    return 0;
}

