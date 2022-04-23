#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<int> v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
using namespace std;
int main()
{
    vector<int> v1;//blank vector
    vector<int> v2(5);
    vector<int> v3(3,5);
    vector<char> v4(5,'a');
    vector<int> v5{2,4,5,7,8,3};
    vector<string> v6{"Pankaj","Loves","you","so","much"};
    cout<<v1.capacity()<<endl;
    cout<<v2.capacity()<<endl;
    cout<<v3.capacity()<<endl;
    cout<<v4.capacity()<<endl;
    cout<<v5.capacity()<<endl;
    cout<<v6.capacity()<<endl;
    cout<<v2[0]<<v2[4]<<endl;
    sort(v3.begin(),v3.end());
    cout<<"xxx";
    display(v3);
    return 0;
}
