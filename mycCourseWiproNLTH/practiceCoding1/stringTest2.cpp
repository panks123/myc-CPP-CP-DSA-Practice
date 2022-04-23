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
    scanf("%[^\n]s",arr); // It does not waits for string input , as here the problem creator is scanf("%[^\n]s",arr);
    cout<<a<<" "<<arr;
}
