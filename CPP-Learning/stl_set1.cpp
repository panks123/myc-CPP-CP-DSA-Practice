#include<iostream>
#include<set>
using namespace std;
void display(set<int,greater<int>> s)
{
    cout<<"Set is:";
    for(auto& e:s)
    {
        cout<<e<<" ";
    }
    cout<<endl;
}
int main()
{
    set<int,greater<int>> s1={1,2,3,1,2,3,9,8,7};
    display(s1);
    return 0;
}
