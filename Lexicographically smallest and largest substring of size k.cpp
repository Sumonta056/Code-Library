// CPP program to find lexicographically
// largest and smallest substrings of size k.
#include<bits/stdc++.h>

using namespace std;

	void getSmallestAndLargest(string s, int k)
	{
		
		// Initialize min and max as
		// first substring of size k
		string currStr = s.substr(0, k);
		string lexMin = currStr;
		string lexMax = currStr;

		// Consider all remaining substrings. We consider
		// every substring ending with index i.
		for (int i = k; i < s.length(); i++)
		{
			currStr = currStr.substr(1, k) + s[i];
			if (lexMax < currStr)	
				lexMax = currStr;
			if (lexMin >currStr)
				lexMin = currStr;	
		}

		// Print result.
		cout << (lexMin) << endl;
		cout << (lexMax) << endl;
	}

	// Driver Code
	int main()
	{
		string str = "GeeksForGeeks";
		int k = 3;
		getSmallestAndLargest(str, k);
	}

// This code is contributed by
// Sanjit_Prasad
