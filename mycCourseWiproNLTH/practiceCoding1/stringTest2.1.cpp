
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
    cin>>newline; // here it will solve the previous problem but a new problem comes that when we enter the string it does not count the first character of the string entered
    scanf("%[^\n]s",arr);
    cout<<a<<" "<<arr;
}
