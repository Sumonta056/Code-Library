// C++ program to find the lexicographically
// maximum substring.
#include <bits/stdc++.h>
using namespace std;

string LexicographicalMaxString(string str)
{
	char maxchar = 'a';
	vector<int> index;

	// We store all the indexes of maximum
	// characters we have in the string
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= maxchar) {
			maxchar = str[i];
			index.push_back(i);
		}
	}
	string maxstring = "";

	// We form a substring from that maximum
	// character index till end and check if
	// its greater that maxstring
	for (int i = 0; i < index.size(); i++) {
		if (str.substr(index[i], str.length()) > maxstring) {
			maxstring = str.substr(index[i], str.length());
		}
	}
	return maxstring;
}

// Driver code
int main()
{
	string str = "acbacbc";
	cout << LexicographicalMaxString(str);
	return 0;
}
