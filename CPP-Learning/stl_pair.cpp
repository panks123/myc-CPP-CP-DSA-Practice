#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int,int> p1;
    cout<<p1.first<<" "<<p1.second<<endl;
    p1.first=1;p1.second=7;
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<string,int> p2("Pankaj",1);
    pair<string,char> p3;
    cout<<"p3:"<<p3.first<<" "<<p3.second<<endl;
    p3=make_pair("Pankaj",'R');
    cout<<"p3:"<<p3.first<<" "<<p3.second<<endl;
    p3=make_pair("Renu",'p');
    cout<<"p3:"<<p3.first<<" "<<p3.second<<endl;
    pair<int,int> p4=make_pair(2,3);
    p1.swap(p4);
    cout<<"p1:"<<p1.first<<" "<<p1.second<<endl;
    cout<<"p4:"<<p4.first<<" "<<p4.second<<endl;
    pair<string,int> p5(p2);
    cout<<"p5:"<<p5.first<<" "<<p5.second<<endl;
    return 0;
}
