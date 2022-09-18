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

ll N = 1000;
vector<bool> isPrime(N, true);
vector<ll> prime;

void seive()
{
    for (ll i = 2; i * i <= N; i++)
    {
        if (isPrime[i] == true)
        {
            prime.push_back(i);
            for (ll j = i * 2; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    // for(auto it : prime) cout << it << sp ;
}

ll sumDivisor(ll n)
{
    ll sum = 1;
    for (ll i = 0; i < prime.size() && prime[i] <= sqrt(n); i++)
    {
        if (n % prime[i] == 0)
        {
            ll tempSum = 1;
            ll p = 1;

            while (n % prime[i] == 0)
            {
                n /= prime[i];
                p *= prime[i];
                tempSum += p;

                cout << n << sp << p << sp << tempSum << endl;
            }
            sum *= tempSum;
        }
    }

    if (n != 1)
    {
        cout << n << endl;
        sum *= (n + 1);
    }

    return sum;
}

int main()
{
    fast;
    seive();
    cout << sumDivisor(20) << endl;
}
