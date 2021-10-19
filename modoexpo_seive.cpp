#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int MAXN = 2e5 + 10;
bool isPrime[MAXN + 10];
vector<int> primes;
void seive()
{
	for (int i = 0; i <= MAXN; ++i)
		isPrime[i] = true;
	for (int i = 2; i * i <= MAXN; ++i)
	{
		for (int j = i * i; j <= MAXN; j += i)
		{
			isPrime[j] = false;
		}
	}
	for (int i = 2; i <= MAXN; ++i)
	{
		if (isPrime[i])
			primes.push_back(i);
	}
 
 
}
int modular_expo(int a, int b)
{
	if (b == 0)return 1;
	int result = modular_expo(a, b / 2);
	result = (result * result) ;
	if (b % 2 == 1)result = (result * a) ;
	return result;
 
}