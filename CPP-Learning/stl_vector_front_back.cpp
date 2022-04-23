#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5};
    cout<<"First element:"<<v.front()<<endl;
    cout<<"Last element:"<<v.back()<<endl;
    return 0;
}
