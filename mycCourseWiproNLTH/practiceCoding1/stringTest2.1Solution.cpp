
/* Enter
1. an integer , then
2. a string*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char arr[100],newline;
    cin>>a;
    scanf("%c",&newline); // scanf solves the problem
    scanf("%[^\n]s",arr);
    cout<<a<<" "<<arr;
}
