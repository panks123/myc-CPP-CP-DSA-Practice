#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Programming";
    s1.replace(3,5,"KK");
    cout<<s1<<endl;
    s1.erase();
    cout<<"s1="<<s1<<endl;
    s1="Programming";
    s1.push_back('Z');
    cout<<s1<<endl;

    s1="Programming";
    string s2="Language";
    cout<<"s1="<<s1<<" s2="<<s2<<endl;
    s1.swap(s2);
    cout<<"s1="<<s1<<" s2="<<s2<<endl;
    return 0;
}
