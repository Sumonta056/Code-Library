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

#define mod 1000003

ll Factorial(ll n)
{
    ll temp = 1;
    for (ll i = 2; i <= n; i++)
        temp = ((temp ) * (i)) % mod;
    return temp;
}

int main()
{
    fast;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, r;
        cin >> n >> r;

        ll temp = ((Factorial(r)) * (Factorial(n - r) )) % mod;
        cout << temp << endl;
        ll ans = Factorial(n) / temp;

        cout << ans << endl;
    }
}
