#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);

    v.pop_back();
    v.pop_back();
    display(v);

    return 0;
}
