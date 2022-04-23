#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int,int> p1;
    cout<<"p1: "<<p1.first<<" "<<p1.second<<endl;
    p1.first=10;
    p1.second=20;
    cout<<"p1: "<<p1.first<<" "<<p1.second<<endl;
    pair<int,int> p2=make_pair(3,4);
    cout<<"p2: "<<p2.first<<" "<<p2.second<<endl;
    pair<string,char> p3;
    cout<<"p3: "<<p3.first<<" "<<p3.second<<endl;
    p3=make_pair("Renu",'P');
    cout<<"p3: "<<p3.first<<" "<<p3.second<<endl;

    pair<int,float> p4;
    cout<<"p4: "<<p4.first<<" "<<p4.second<<endl;
    p4.first=10;
    p4.second=20.3f;
    cout<<"p4: "<<p4.first<<" "<<p4.second<<endl;
}
