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

ll n = 9999999;
set<ll> ans;
vector<bool> is_prime(n + 1, true);

void Sieve()
{
    
    is_prime[0] = is_prime[1] = false;

    for (ll p = 2; p * p <= n; p++)
    {
        if (is_prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }

    for (ll i = 1; i * i <= n; i++)
    {
        for (ll j = 1; (j * j) * (j * j) <= n; j++)
        {
            ll value = (i * i) + ((j * j) * (j * j));

            if( value > n) break;

            if (is_prime[value] == true)
            {
                ans.insert(value);
                //cout << value << sp << i << sp << j << endl;
            }
            
        }
    }

}

int main()
{
    fast;
    Sieve();

    int t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;

        ll count = 0 ;
        for(ll p : ans)
        {
            if( p > x) break;

            count++;
        }

        cout << count << endl;
    }
}
