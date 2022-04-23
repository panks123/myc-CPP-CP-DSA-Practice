#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
    if(argc>2)
    {
        int sum=0;
        for(int i=1;i<argc;i++)
        {
            sum=sum+stoi(argv[i]);
        }
        cout<<"Sum -> "<< sum;
    }
    else
        cout<<"Insufficient input...";
}
