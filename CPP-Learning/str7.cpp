#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Hello";
    s1.append("World");
    cout<<s1<<endl;
    s1="Hello";
    s1.insert(2,"kk");//2-index at which it is to be inserted
    cout<<s1<<endl;
    s1="Hello";
    s1.insert(2,"Apple",3);//2-index at which it is to be inserted 3-no. of characters from "Apple" to be inserted
    cout<<s1<<endl;

    return 0;
}
