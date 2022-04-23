#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v{1,2,3,4,5};
    cout<<"Before clearing  "<<" Size:"<<v.size()<<" Capacity:"<<v.capacity()<<endl;
    v.clear();
    cout<<"Before clearing  "<<" Size:"<<v.size()<<" Capacity:"<<v.capacity()<<endl;
    return 0;
}
