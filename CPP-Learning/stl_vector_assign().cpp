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
    vector <int> v;

    int a[]={1,2,3};
    v.assign(a,a+2);
    display(v);
    v.assign(a,a+3);
    display(v);

    v.assign(7,100);
    display(v);

    v.assign(v.begin(),v.begin()+3);
    display(v);
    return 0;
}
