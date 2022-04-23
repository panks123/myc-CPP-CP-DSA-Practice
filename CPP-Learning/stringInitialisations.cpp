#include<iostream>
#include<string>
using namespace std;
int main()
{
    //various custructors of string class
    //Initialisation by raw string
    string str1("Hello World");
    cout<<str1<<endl;
    //initialisation by another string
    string str2(str1);
    cout<<str2<<endl;
    //initialisation by characters with no. of characters
    string str3(5,'#');
    cout<<str3<<endl;
    //initialisation by part of another string
    string str4(str1,2,6);//2-from 2nd index, 6-include 6 characters
    cout<<str4<<endl;
    //initialisation by part of another string :iterator version
    string str5(str1.begin(),str1.begin()+7);
    cout<<str5<<endl;
    return 0;
}







