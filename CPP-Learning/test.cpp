#include<iostream>
using namespace std;
int main()
{
    int n;
    string s="";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        if(c=='a'||c=='A'|| c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
            s=s+c;
    }
    if (s.length()==0)
        cout<<"No vowels"<<endl;
    else
        cout<<s<<" " <<s.length()<<endl;
}
