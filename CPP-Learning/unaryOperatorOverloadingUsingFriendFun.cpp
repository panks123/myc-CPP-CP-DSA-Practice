#include<iostream>
using namespace std;
class num
{
    int n;
public:
    num(int n=0)
    {
        this->n=n;
    }
    friend void operator-(num &);
};
void operator-(num &n1)
{
    cout<<(-1)*n1.n<<endl;
}
int main()
{
    num n1(7);
    -n1;
    return 0;
}
