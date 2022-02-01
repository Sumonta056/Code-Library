#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{10, 20, 30, 40, 50};
	
	// Accessing last element
	cout << v.back() << endl;

	// modifying last element
	v.back() = 100;

	cout << v.back() << endl;
	return 0;
}
