// Find the next lexicographically
// greater permutation of a word

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string s = { "gfg" };
	bool val
		= next_permutation(s.begin(),
						s.end());
	if (val == false)
		cout << "No Word Possible"
			<< endl;
	else
		cout << s << endl;
	return 0;
}
