// A simple C++ program to find lexicographically minimum rotation
// of a given string
#include <iostream>
#include <algorithm>
using namespace std;

// This functionr return lexicographically minimum
// rotation of str
string minLexRotation(string str)
{
	// Find length of given string
	int n = str.length();

	// Create an array of strings to store all rotations
	string arr[n];

	// Create a concatenation of string with itself
	string concat = str + str;

	// One by one store all rotations of str in array.
	// A rotation is obtained by getting a substring of concat
	for (int i = 0; i < n; i++)
		arr[i] = concat.substr(i, n);

	// Sort all rotations
	sort(arr, arr+n);

	// Return the first rotation from the sorted array
	return arr[0];
}

// Driver program to test above function
int main()
{
	cout << minLexRotation("GEEKSFORGEEKS") << endl;
	cout << minLexRotation("GEEKSQUIZ") << endl;
	cout << minLexRotation("BCABDADAB") << endl;
}
