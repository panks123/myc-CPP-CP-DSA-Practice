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
    void operator - ()
    {
        cout<<(-1)*this->n<<endl;
    }
};
int main()
{
    num n1(7);
    -n1;
    return 0;
}
