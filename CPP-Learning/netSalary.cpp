#include<iostream>
using namespace std;
int main()
{
    float basicSal;
    float percAllow,percDeduct;
    cout<<"Enter basic salary:";
    cin>>basicSal;
    cout<<"Enter percentage of allowance:";
    cin>>percAllow;
    cout<<"Enter percentage of deduction:";
    cin>>percDeduct;
    float netSal=basicSal+percAllow*basicSal/100-(percDeduct*basicSal/100);
    cout<<"Net Salary="<<netSal<<endl;
    return 0;
}
