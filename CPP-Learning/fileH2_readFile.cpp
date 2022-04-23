#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("new.txt");
    if(ifs.is_open())
    {
        cout<<"File is open"<<endl;
        string str,str1;
        int x;
        ifs>>str;
        ifs>>x;
        ifs>>str1;
        ifs>>x;
        cout<<str<<" "<<x<<" "<<str1<<endl;
    }
    else
        cout<<"File is not open"<<endl;
    if(ifs.eof())
        cout<<"End of file reached";
    else
        cout<<"End of file is not reached";
    return 0;
}
