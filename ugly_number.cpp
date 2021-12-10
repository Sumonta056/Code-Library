// CPP program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Print nth Ugly number
int nthUglyNumber(int n)
{

int pow[40] = { 1 };

// stored powers of 2 from
// pow(2,0) to pow(2,30)
for (int i = 1; i <= 30; ++i)
	pow[i] = pow[i - 1] * 2;

// Initialized low and high
int l = 1, r = 2147483647;

int ans = -1;

// Applying Binary Search
while (l <= r) {

	// Found mid
	int mid = l + ((r - l) / 2);

	// cnt stores total numbers of ugly
	// number less than mid
	int cnt = 0;

	// Iterate from 1 to mid
	for (long long i = 1; i <= mid; i *= 5)

	{
	// Possible powers of i less than mid is i
	for (long long j = 1; j * i <= mid; j *= 3)

	{
		// possible powers of 3 and 5 such that
		// their product is less than mid

		// using the power array of 2 (pow) we are
		// trying to find the max power of 2 such
		// that i*J*power of 2 is less than mid

		cnt += upper_bound(pow, pow + 31,
						mid / (i * j)) - pow;
	}
	}

	// If total numbers of ugly number
	// less than equal
	// to mid is less than n we update l
	if (cnt < n)
	l = mid + 1;

	// If total numbers of ugly number
	// less than qual to
	// mid is greater than n we update
	// r and ans simultaneously.
	else
	r = mid - 1, ans = mid;
}

return ans;
}

// Driver Code
int main()
{
	
	int n = 1500;

	// Function Call
	cout << nthUglyNumber(n);
	return 0;
}
