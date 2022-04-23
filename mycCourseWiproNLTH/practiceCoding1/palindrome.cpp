#include<iostream>
using namespace std;
int isPalindrome(int n)
{
    int num=n;
    int sum=0;
    while(n>0)
    {
        int r;
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==num)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(isPalindrome(n))
        cout<<n<<" is a Palindrome";
    else
        cout<<n<<" is not a Palindrome";
}

