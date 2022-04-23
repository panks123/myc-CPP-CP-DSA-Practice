#include<iostream>
using namespace std;
class Complex
{
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
    Complex operator + (Complex c)
    {
        Complex result;
        result.real=real+c.real;
        result.img=img+c.img;
        return result;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
};
int main()
{
    Complex c1(5,10);
    Complex c2(1,2);
    Complex c3=c1+c1;
    c3.display();
    c3=c2+c1;
    c3.display();
    c3=c1.operator + (c2);
    c3.display();
    c3=c2.operator+ (c2);
    c3.display();

    return 0;
}
