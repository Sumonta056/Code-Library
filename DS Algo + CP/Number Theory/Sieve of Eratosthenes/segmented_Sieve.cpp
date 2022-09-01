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

ll maxSize = 10e6;
vector<ll> primes;

void sieve()
{
    vector<bool> isprime(maxSize, true);

    for (ll i = 3; i * i <= maxSize; i++)
    {
        if (isprime[i] == true)
        {
            for (ll j = i * i; j <= maxSize; j += i)
            {
                isprime[j] = false;
            }
        }
    }

    primes.push_back(2);

    for (ll i = 3; i <= maxSize; i += 2)
    {
        if (isprime[i] == true)
            primes.push_back(i);
    }
}

void segmentedSieve(ll l, ll r)
{
    vector<bool> isPrime(r - l + 1, true);

    if(l == 1) isPrime[0] = false ;

    for (ll i = 0; primes[i] * primes[i] <= r; i++)
    {
        ll currPrime = primes[i];
        ll curBase = (l / currPrime) * currPrime;

        if (curBase < l)
            curBase += currPrime;

        for (ll j = curBase; j <= r; j += currPrime)
        {
            ll currIndex = j - l;

            isPrime[currIndex] = false;
        }

        if (curBase == currPrime)
            isPrime[curBase - l] = true;
    }

    for (ll i = 0; i < (r - l + 1); i++)
    {
        if (isPrime[i])
            cout << i + l << endl;
    }
    cout << endl;
}

int main()
{
    fast;

    ll t;
    cin >> t;

    sieve();

    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        segmentedSieve(l, r);
    }
}
