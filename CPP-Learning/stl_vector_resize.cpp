#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1{1,2,3,4,5};
    vector <int> v2{1,2,3,4,5};
    cout<<"Vector v1 before resizing:";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1.resize(3);
    cout<<"Vector v1 after resizing:";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"Vector v2 before resizing:";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    v2.resize(8);
    cout<<"Vector v2 after resizing:";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
}
