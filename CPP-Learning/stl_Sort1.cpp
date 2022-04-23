#include<iostream>
#include<algorithm>
using namespace std;
class Interval
{
public:

    int first,second;
};
bool compareInterval(Interval i1,Interval i2)
{
    return (i1.first<i2.first);
}
int main()
{
    Interval arr[]={{6,10},{1,3},{4,7},{3,4},{2,4},{9,3},{3,3}};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sorting the intervals in increasing order of 'first'"<<endl;
    std::sort(arr,arr+n,compareInterval);

    cout << "Intervals sorted by 'first' : \n";
    for (int i=0; i<n; i++)
       cout << "[" << arr[i].first << "," << arr[i].second << "] ";
}
