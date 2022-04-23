// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value
#include <bits/stdc++.h>

using namespace std;

string printPairs(int arr[], int arr_size, int sum)
{
	unordered_set<int> s;
	for (int i = 0; i < arr_size; i++) {
		int temp = sum - arr[i];

		if (s.find(temp) != s.end())
			return "YES";

		s.insert(arr[i]);
	}
    return "NO";
}

/* Driver program to test above function */
int main()
{
    int n,k;
	cin>>n;
    cin>>k;
    int arr[n];
	for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

	// Function calling
	string ans=printPairs(arr, n, k);
    cout<<ans;
	return 0;
}
