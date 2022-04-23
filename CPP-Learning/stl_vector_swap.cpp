#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1{1,3,5,7,9};
    vector<int> v2{2,4,6,8,10,12};
    cout<<"v1 before swapping:";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"v2 before swapping:";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    v1.swap(v2);
    cout<<"v1 after swapping:";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"v2 after swapping:";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
}
