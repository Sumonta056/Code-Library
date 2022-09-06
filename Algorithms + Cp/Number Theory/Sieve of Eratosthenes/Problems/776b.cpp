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

void SieveOfEratosthenes(ll n)
{
    n++;
    vector<bool> is_prime(n + 1, true);

    for (ll p = 2; p <= n; p++)
    {
        if (is_prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }

    if (n - 1 > 2)
        cout << 2 << endl;
    else
        cout << 1 << endl;

    for (ll p = 2; p <= n; p++)
    {
        if (is_prime[p])
            cout << "1 ";
        else
            cout << "2 ";
    }

    cout << endl;
}

// Driver Code
int main()
{
    ll n;
    cin >> n;
    SieveOfEratosthenes(n);
    return 0;
}