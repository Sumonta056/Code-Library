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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    fast;

    ll n;
    cin >> n;

    vector<ll> arr(n);
    vector<ll> ans;

    ll change = 0;

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll i;
    for (i = 0; i < n - 1; i++)
    {
        if (gcd(arr[i], arr[i + 1]) != 1)
        {
            change++;

            ans.push_back(arr[i]);
            ans.push_back(1);
        }

        else
        {
            ans.push_back(arr[i]);
        }
    }
    ans.push_back(arr[i]);
    
    cout << change << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
