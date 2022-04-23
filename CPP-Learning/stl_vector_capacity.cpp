#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
    {
		v.push_back(i * 10);
        cout << "size of vector:" << v.size()<<" ";
	    cout << "max capacity:" << v.capacity()<<endl;
	}
	return 0;
}

