#include<bits/stdc++.h>
 
using namespace std;
#define ll unsigned long long
#define lin "\n"
#define pb push_back
ll nCr(ll n, ll r){
	ll p = 1, k = 1;
	if(n - r < r){
		r = n - 11;
	}
 
	while(r){
		p *= n;
		k *= r;
		ll m = __gcd(p, k);
		p /= m;
		k /= m;
		n--, r--;
	}
	return p;
}
 
int main(){
	ll n;
	cin >> n;
	n--;
	cout << nCr(n, 11) << lin;
	return 0;
}