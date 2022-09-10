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

void primefactorization(ll n, ll k)
{
    vector<ll> factors;
    bool track = false;

    for (ll i = 2; i * i <= n;)
    {
        if (factors.size() == k - 1)
        {
            track = true;
            factors.push_back(n);
            break;
        }
        if (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }

        else
        {
            i++;
        }
    }

    if (n > 1 && !track)
    {
        factors.push_back(n);
    }

    // * print
    if (factors.size() == k)
    {
        for(auto it : factors)
        {
            cout << it << " ";
        }
    }
    else
        cout << -1 << endl;
}

int main()
{
    fast;

    ll n, k;
    cin >> n >> k;

    primefactorization(n, k);
}

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;
//* char a = '8';   int num = a - '0' ;  (  s[i]-'0' == 8 )
