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
    v.insert(v.begin(),0);
    display(v);
    v.insert(v.begin()+2,33);
    display(v);
    int x=50;
    v.insert(v.begin()+2,{30,40,x,60});
    display(v);

    v.insert(v.begin(),1,100);
    display(v);
    v.insert(v.begin(),2,200);
    display(v);

    vector<int> v1{1,2,3,4};
    vector<int> v2;
    v2.insert(v2.begin(),v1.begin(),v1.end());
    display(v2);

    vector<int> v3;
    v3.insert(v3.begin(),v1.begin(),v1.begin()+2);
    display(v3);
    return 0;
}
