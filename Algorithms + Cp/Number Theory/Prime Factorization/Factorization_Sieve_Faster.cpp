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

#define MAX 10000000

bool is_prime[MAX];
vector<ll> primes;
vector<int> factors;

void sieve()
{
    for (ll i = 3; i * i < MAX; i += 2)
    {
        if (is_prime[i] == false)
        {
            for (ll j = i * i; j < MAX; j += (i + i))
            {
                is_prime[j] = true;
            }
        }
    }

    primes.push_back(2);
    for (int i = 3; i < MAX; i += 2)
    {
        if (is_prime[i] == false)
            primes.push_back(i);
    }
}

void factorize(int n)
{
    int sqrtn = sqrt(n);
    for (int i = 0; i < primes.size() && primes[i] <= sqrtn; i++)
    {
        if (n % primes[i] == 0)
        {
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                factors.push_back(primes[i]);
            }
            sqrtn = sqrt(n);
        }
    }
    if (n != 1)
    {
        factors.push_back(n);
    }
}

int main()
{
    fast;
    sieve();
    factorize(100000);

    cout << factors.size() << endl;
    for (auto it : factors)
    {
        cout << it << " ";
    }
    return 0;
}