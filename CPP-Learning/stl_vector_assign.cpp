#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{1,2,3};
    v1=v2;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    /*vector <float> v3{1.6,8.9};
    v3=v1;//cannot assign due different data type vectors*/

    for(int i=0;i<v1.size();i++)
        cout<<v1.at(i)<<" ";
    cout<<endl;
    return 0;
}
