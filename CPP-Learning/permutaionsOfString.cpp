#include<iostream>
using namespace std;
void swap(char *x,char *y)
{
    char temp=*x;
    *x=*y;
    *y=temp;
}
void permute(string s,int i,int n)
{
    static int counts;
    if(i==n)
    {
        counts++;
        cout<<"("<<counts<<")"<<s<<"\t";
    }
    else
    {
        for(int j=i;j<=n;j++)
        {
            swap(&s[i],&s[j]);
            permute(s,i+1,n);
            swap(&s[i],&s[j]);
        }
    }
}
int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    permute(s,0,s.length()-1);
}
