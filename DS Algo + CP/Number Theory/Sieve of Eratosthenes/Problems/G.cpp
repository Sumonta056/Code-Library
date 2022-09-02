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
vector<bool> isprime(maxSize, true);

void sieve()
{
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

int main()
{
    fast;
    sieve();

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll choice = 0;
        ll gfLikes = 0;
        
        for (int i = 0; i < n; i++)
        {
            ll temp = primes[i] * primes[i];
            if (temp > n)
                break;
            else
            {
                choice++;
                if (temp > k)
                    gfLikes++;
            }
        }

        cout << choice << sp << gfLikes << endl;
    }

    return 0;
}