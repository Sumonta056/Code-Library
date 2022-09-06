//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp " "
#define enter cout << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
    
void SieveOfEratosthenes(ll n, ll k)
{

    //* iniial all true and prime
    vector<bool> is_prime(n + 1, true);

    //* 0 , 1 is not prime
    is_prime[0] = is_prime[1] = false;

    for (ll p = 2; p * p <= n; p++)
    {
        if (is_prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }

    vector<ll> primes;
    for (ll p = 2; p <= n; p++)
        if (is_prime[p])
            primes.push_back(p);

    ll count = 0;

    for (ll i = 0; i < primes.size(); i++)
    {
        ll index = 1 + primes[i] + primes[i + 1] ;
        if (  index <= n && is_prime[index] == true )
            count++;
    }

    //cout << count << endl;

    if (count >= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// Driver Code
int main()
{
    ll n, k;
    cin >> n>> k;
    SieveOfEratosthenes(n, k);
    return 0;
}