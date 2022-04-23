#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v{1,2,3,4,5};
    display(v);
    v.erase(v.begin()+2);
    display(v);
    v.erase(v.begin()+1,v.end());
    display(v);
    return 0;
}
