#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Welcome";
    char str[10];
    s1.copy(str,s1.length());
    str[s1.length()]='\0';
    cout<<str<<endl;
    char str1[10];
    s1.copy(str1,3);
    str1[3]='\0';
    cout<<str1<<endl;
    string s2="How are you";;
    cout<<s2.find("are")<<endl;//will give the index of first occurrence of "are"
    cout<<s2.find("dare")<<endl;
    cout<<s2.find('o')<<endl;
    cout<<s2.rfind("are")<<endl;
    cout<<s2.rfind('o')<<endl;
    cout<<s2.find_first_of('o')<<endl;
    cout<<s2.find_last_of("are")<<endl;
    string str2="Programming";
    cout<<str2.substr(3)<<endl;
    cout<<str2.substr(3,4)<<endl;

    string s3="Hello";
    string s4="Hello";
    string s5="hello";
    cout<<s3.compare(s5)<<endl;
    cout<<s3.compare(s4)<<endl;
    cout<<s5.compare(s3)<<endl;
    return 0;
}
