#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s=" bulbulbulbulbulbulbulbulbulbulbulb";
    string substring="ul";
    int counts=0;
    for(int i=0;i<s.size();i++)
    {

        if(s[i]==substring[0])
        {

            int k=i+1;
            int flag=1;
            for(int j=1;j<substring.size();j++)
            {
                cout<<"no"<<endl;
                if(s[k++]!=substring[j])
                {
                    flag=0;

                    break;
                }
            }
            if(flag==1)
                counts++;
        }
    }
    cout<<counts;

}
