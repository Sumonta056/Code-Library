
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
// it will calculate factorial for n
ll Factorial(ll n)
{
	ll temp = 1;
	for (ll i = 2; i <= n; i++)
		temp = temp * i;
	return temp;
}
// function to calculate ncr
ll nCr(ll n, ll r)
{
	return Factorial(n) / (Factorial(r) * Factorial(n - r));
}
int main()
{
	ll n = 12, r = 4;
	cout << "value of " << n << "c" << r << " is :" << nCr(n, r);
	return 0;
}