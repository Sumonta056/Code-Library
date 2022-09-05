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

ll primeFactors(ll n)
{
    ll count = 0;
    for (ll currDivisor = 2; currDivisor * currDivisor <= n;)
    {
        if (n % currDivisor == 0)
        {
            cout << currDivisor << " ";
            n /= currDivisor;
            count++;
        }
        else
            currDivisor++;
    }

    if (n > 1)
    {
        count++;
        cout << n << endl;
    }

    return count;
}

int main()
{
    ll n;
    cin >> n;
    
    ll ans = primeFactors(n);
    cout << "Number of primes : " << ans << endl;
}
