#include<iostream>
using namespace std;
class Table
{
public:
    void findTableOf(int n)
    {
        for(int i=1;i<=10;i++)
        {
            cout<<" "<<n<<" X "<<i<< " = "<<n*i<<endl<<endl;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter no. for Table:"<<endl;
    cin>>n;
    Table t;
    cout<<endl;
    t.findTableOf(n);
    return 0;
}
