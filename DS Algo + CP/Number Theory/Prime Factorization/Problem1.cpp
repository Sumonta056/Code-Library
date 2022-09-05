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

ll x = 2000000;
vector<pair<ll, ll>> ans;

ll primeFactors(ll n)
{
    ll count = 0;
    for(ll currDivisor = 2 ; currDivisor * currDivisor <= n  ; )
    {
        if (n % currDivisor == 0)
        {
            // cout << currDivisor << " ";
            n /= currDivisor;
            count++;
        }
        else
            currDivisor++;
    }

    if( n > 1) count++ ;

    return count;
}
bool sorting(const pair<ll, ll> &a,
             const pair<ll, ll> &b)
{
    if (a.second == b.second)
        return (a.first < b.first);

    return (a.second < b.second);
}

int main()
{
    
    ll i = 1;
    ans.push_back(make_pair(i, 0));
    for (ll i = 2; i <= x; i++)
    {
        ll count = primeFactors(i);
        ans.push_back(make_pair(i, count));
    }

    sort(ans.begin(), ans.end(), sorting);

    // for (int i = 0; i < x; i++)
    // {
    //     cout << ans[i].first << " " << ans[i].second << endl;
    // }
    ll j = 1;
    while (1)
    {
        ll t;
        cin >> t;
        if (t == 0)
            break;
        ll value = ans[t - 1].first ;

        cout << "Case "<<j<<": "<<value << endl;
        j++;
    }
}
