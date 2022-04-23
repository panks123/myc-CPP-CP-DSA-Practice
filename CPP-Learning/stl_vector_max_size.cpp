#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    vector<char> v1;
    vector<string> v2;
    cout<<"Maximum capacity of vector v:"<<v.max_size()<<endl;
    cout<<"Maximum capacity of vector v1:"<<v1.max_size()<<endl;
    cout<<"Maximum capacity of vector v2:"<<v2.max_size()<<endl;
    return 0;
}
