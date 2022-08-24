#include <bits/stdc++.h>
using namespace std;

#define ll long long int
 
void SieveOfEratosthenes(ll n)
{
    n++;

    //* iniial all true and prime
    vector<bool> is_prime(n+1, true);
    
    //* 0 , 1 is not prime
    is_prime[0] = is_prime[1] = false;
 
    for (ll p = 2; p <= n; p++) 
    {   
        if (is_prime[p] == true) 
        {
            for (ll i = p * p; i <= n; i += p)
               is_prime[i] = false;
        }
    }
    
    if(n-1 > 2) cout << 2 << endl;
    else cout << 1 << endl;

    // Print all prime numbers
    ll countPrime = 0 ;
    for (ll p = 2; p <= n; p++)
       {
         if (is_prime[p]) cout << "1 ";
         else cout << "2 ";
       } 
            

    cout << endl ;
}
 
// Driver Code
int main()
{
    ll n ;
    cin >> n ;
    SieveOfEratosthenes(n);
    return 0;
}