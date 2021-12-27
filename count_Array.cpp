// C++ program for count in C++ STL for
// array
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 3, 2, 1, 3, 3, 5, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Number of times 3 appears : "
		<< count(arr, arr + n, 3);

	return 0;
}
