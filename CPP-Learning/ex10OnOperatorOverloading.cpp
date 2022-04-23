#include<iostream>
using namespace std;
class rational
{
    int p;
    int q;
public:
    rational(int p=1,int q=1)
    {
        this->p=p;
        this->q=q;
    }
    friend ostream& operator<<(ostream&,rational&);
    friend rational operator+(rational&,rational&);
};
ostream& operator<<(ostream& out,rational &r)
{
    out<<r.p<<"/"<<r.q;
    return out;
}
rational operator+(rational& r1,rational& r2)
{
    rational r;
    r.p=r1.p*r2.q+r1.q*r2.p;
    r.q=r1.q*r2.q;
    return r;
}
int main()
{
    rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
    rational r4(5,7),r5(1,2),r6;
    r6=r4+r5;
    cout<<"Sum of "<<r4<<" and "<<r5<<" is "<<r6<<endl;
    return 0;
}
