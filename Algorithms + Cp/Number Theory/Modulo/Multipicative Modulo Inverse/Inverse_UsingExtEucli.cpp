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
/*
    Given input : a , mod
    * Find such : (a *b) % mod = 1
    * where b is multipicative modulo inverse of a with respect to mod
    * Example : a = 6 , mod = 7
    * (6 * b ) % mod = 1
    * For which value of b we get ans = 1
    ! b = 6
*/

/*

    ? This method apply only if gcd(a,m) = 1 or both are co prime

    * (a *b) % mod = 1
    * (a *b) % mod - 1 = 0 ;
    * (a*b) - km - 1 = 0
    * (a*b) -km = 1
    * (a*b) + m(-k) = 1
    *
    ! ax + by = gcd(a,b)
*/

ll x, y, GCD;

void extendedEuclidean(ll a, ll b)
{
    // * base case
    if (b == 0)
    {
        x = 1;
        y = 0;
        GCD = a;
        return;
    }

    // * recursive calls
    extendedEuclidean(b, a % b);

    ll cx = y;
    ll cy = x - (a / b) * y;

    x = cx;
    y = cy;
}

ll moduloInverse(ll a, ll mod)
{
    ll ans;
    extendedEuclidean(a, mod);
    ans = x;

    // * to avoid negative values of x and make x positive
    return (ans + mod) % mod;
}

int main()
{
    fast;

    cout << moduloInverse(6, 7) << endl;
}
/*
Time Complexity: O(log m)

Auxiliary Space: O(log m)   because of the internal recursion stack.
*/