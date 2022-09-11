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

int bigMod(ll value, ll power, ll mod)
{
    if (power == 0)
        return 1 % mod;

    if (power % 2 == 0)
    {
        // *  B^P = B^P/2 × B^P/2
        ll halfValue = bigMod(value, power / 2, mod);
        return (halfValue * halfValue) % mod;
    }

    else
    {
        // * b^p = b * b^(p-1)
        return (value * bigMod(value, power - 1, mod)) % mod;
    }
}

int main()
{
    fast;

    // 2^7 mod 7

    ll ans = bigMod(2, 5, 7) ;
    cout << ans << endl;
}
