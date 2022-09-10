
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

// * Euler's totient function, also known as phi-function
// * counts the number of integers between 1 and inclusive, which are coprime to n

// * Time Complexity: O(nloglog(n)))

const int MAXN = 1e7;
vector<int> primes;
int isPrime[MAXN + 1]; // isPrime[i] = 0 indicates i is prime.
void sieve()
{
    // if even check itself while calling. This function will only tells wether a number is prime or not(not for even numbers).
    isPrime[0] = isPrime[1] = 1;
    primes.push_back(2);
    for (int i = 3; i <= MAXN; i += 2)
    {
        if (isPrime[i] == 0)
        {
            primes.push_back(i);
            if (i * (ll)1 * i <= MAXN)
            {
                for (int j = i * i; j <= MAXN; j += (2 * i))
                {
                    isPrime[j] = 1;
                }
            }
        }
    }
}

const int SIZE = (int)1e5 + 1; // define size to be max(B-A+1)
ll r[SIZE];
ll phi[SIZE];
void segmentedSieve(ll a, ll b)
{
    for (int i = 0; i < SIZE; i++)
    {
        r[i] = a + i;
        phi[i] = a + i;
    }
    // if(a == 1)    a++;
    // int sqrtn = sqrt(b);
    // arr[0] represents a
    for (int i = 0; i < primes.size(); i++)
    {
        int p = primes[i];
        ll j = p;
        if (j < a)
            j = ((a + p - 1) / p) * p; // j = ceil(a/p)*p
        for (; j <= b; j += p)
        { // j is the smallest multiple of p
            phi[j - a] /= p;
            phi[j - a] *= (p - 1);
            while (r[j - a] % p == 0)
            {
                r[j - a] /= p;
            }
        }
    }
    // int res = 0;
    for (ll i = a; i <= b; i++)
    {
        if (r[i - a] > 1)
        {
            phi[i - a] /= r[i - a];
            phi[i - a] *= (r[i - a] - 1);
        }
    }
    for (ll i = a; i <= b; i++)
    {
        // cout<<"AR"<<endl;
        if (i != b)
            printf("%lld\n", phi[i - a]);
        else
            printf("%lld", phi[i - a]);
    }
    return;
}

int main()
{
    fast;
    sieve();
    ll a, b;
    cin >> a >> b;
    // cout<<a<<b<<endl;
    segmentedSieve(a, b);
    return 0;
}