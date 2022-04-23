#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    int integer=(int)n;
    double fractPart=n-integer;
    cout<<"Integer part: "<<integer<<endl;
    cout<<"Fractional part: "<<fractPart<<endl;
    int counts=0;
    //write code to find no. of digits on the right side of decimal in a floating point number
    double tempFract=fractPart;
    while(tempFract!=0)
    {
        counts++;
        fractPart=fractPart*10;
        tempFract=fractPart-(int)fractPart;
    }
    cout<<counts;
}
