#include <bits/stdc++.h>
using namespace std;
// function that accepts the array and it's size and returns
// the number of distince elements
int distinct(int* arr, int len)
{
	set<int> S; // declaring a set container using STL
	for (int i = 0; i < len; i++) {
		S.insert(arr[i]); // inserting all elements of the
						// array into set
	}
	int ans = S.size(); // calculating the size of the set
	return ans;
}
int main()
{
	int arr[] = { 12, 10, 9, 45, 2, 10, 10, 45};
	int l = sizeof(arr)
			/ sizeof(
				int); // calculating the size of the array
	int dis_elements
		= distinct(arr, l); // calling the function on array
	cout << dis_elements << endl;
	return 0;
}
