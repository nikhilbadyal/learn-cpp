#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{10, 20, 30, 40, 50};

	// Accessing last element
	int n = v.size();
//	cout << v[n - 1] << endl;

	// modifying last element
	v[0] = 100;

	cout << v[0] << endl;
	return 0;
}
