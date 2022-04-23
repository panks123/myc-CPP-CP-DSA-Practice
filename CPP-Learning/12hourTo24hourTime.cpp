#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter time in 12 hour format(HH:MM:SS AM/PM):";
    getline(cin,s);
    string hh="";
    hh=hh+s[0];
    hh=hh+s[1];
    string mm="";
    mm=mm+s[3];
    mm=mm+s[4];
    string ss="";
    ss=ss+s[6];
    ss=ss+s[7];
    string am_pm="";
    am_pm=am_pm+s[9];
    am_pm=am_pm+s[10];
    cout<<"Time entered in 12 hours format is: "<<hh<<":"<<mm<<":"<<ss<<" "<<am_pm<<endl;
    int hour=stoi(hh);
    if(am_pm=="PM"&&(hour>=1&&hour<=11))
    {
        hour=hour+12;
        hh=to_string(hour);
    }
    else if(am_pm=="PM"&&hour==12)
        hh="12";
    else if(am_pm=="AM"&&hour==12)
        hh="00";

    cout<<"Time in 24 hours format is:"<<hh<<":"<<mm<<":"<<ss<<" "<<am_pm<<endl;

}
