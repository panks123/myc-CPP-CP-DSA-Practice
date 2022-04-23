#include<iostream>
using namespace std;
int main()
{
    char s[100]="x=10;y=20;z=30";
    char s1[100]="x=10?y=20?z=30";

    char *token=strtok(s,"=;");
    cout<<token<<endl;
    return 0;
}
