#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Hello world";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    s="";
    cout<<s.length()<<endl;
    /*s=NULL;     //this gives error
    cout<<s.length()<<endl;*/

    cout<<s.size()<<endl;

    cout<<s.capacity()<<endl;
    s="Hello World How are you";
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;

    s.resize(50);
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    cout<<s.capacity()<<endl;

    cout<<s.max_size()<<endl;

    s.clear();
    cout<<"s="<<s<<endl;

    cout<<s.empty()<<endl;
    s="Hello World";
    cout<<s.empty()<<endl;
    return 0;
}
