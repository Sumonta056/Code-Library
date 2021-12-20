// C++ program to minimise the
// median between partition array

#include "bits/stdc++.h"
using namespace std;

// Function to find minimise the
// median between partition array
int minimiseMedian(int arr[], int n)
{
	// Sort the given array arr[]
	sort(arr, arr + n);

	// Return the difference of two
	// middle element of the arr[]
	return abs(arr[n / 2] - arr[(n / 2) - 1]);
}

// Driver Code
int main()
{
	int arr[] = {1,2,3};

	// Size of arr[]
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function that returns the minimum
	// the absolute difference between
	// median of partition array
	cout << minimiseMedian(arr, n);
	return 0;
}
