#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myvector{ 1, 2, 3, 4, 5 };
	cout << myvector.size()<<endl;
	if(myvector.empty())
    {
        cout<<"Vector is empty"<<endl;
    }
    else
        cout<<"Vector is not empty"<<endl;

    vector<int> v;
    if(v.empty())
    {
        cout<<"Vector is empty"<<endl;
    }
    else
        cout<<"Vector is not empty"<<endl;


    vector<string> v1(5);
    if(v1.empty())
    {
        cout<<"Vector is empty"<<endl;
    }
    else
        cout<<"Vector is not empty"<<endl;

    cout<<"x"<<v1[0]<<v1[1]<<endl;
    vector<int> v2{};
    if(v2.empty())
    {
        cout<<"Vector is empty"<<endl;
    }
    else
        cout<<"Vector is not empty"<<endl;
	return 0;
}
