// C++ program to demonstrate the use
// of string::npos
#include <bits/stdc++.h>
using namespace std;

// Function that using string::npos
// to find the index of the occurrence
// of any string in the given string
void fun(string s1, string s2)
{
	// Find position of string s2
	int found = s1.find(s2);

	// Check if position is -1 or not
    //* if found == string::pos == -1 data not found
	if (found != string::npos) {

		cout << "first " << s2
			<< " found at: "
			<< (found) << endl;
	}

	else
		cout << s2 << " is not in"
			<< "the string" << endl;
}

// Driver Code
int main()
{
	// Given strings
	string s1 = "geeksforgeeks";
	string s2 = "for";
	string s3 = "no";

	// Function Call
	fun(s1, s2);

	return 0;
}
