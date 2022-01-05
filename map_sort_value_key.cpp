#include <bits/stdc++.h>
using namespace std;
//
#define ll long long
#define ull unsigned long long
#define mx 100010
#define mod 1000000007
#define inf INT_MAX
#define pi acos(-1.0)
#define endl '\n'
#define pb push_back
#define pll pair<ll, ll>
#define vll vector<ll>
#define vpll vector<pll>
#define Fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
//
int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll ar[n];
        for (ll i = 0; i < n; i++) cin >> ar[i];

        char ch;
        ll likeCount = 0;
        map<ll, ll> liked, disliked;
        for (ll i = 0; i < n; i++) {
            cin >> ch;
            if (ch == '0') disliked.insert({ ar[i], i });    // * insert element like this
            else {
                liked.insert({ ar[i], i });   // * map sort key auto , so try to put ar value on key and key on value for free sort
                likeCount++;
            }
        }

        ll temp = 1;
        ll res[n];
        for (auto it = disliked.begin(); it != disliked.end(); it++) {
            res[it->second] = temp++;
        }
        for (auto it = liked.begin(); it != liked.end(); it++) {
            res[it->second] = temp++;
        }

        for (ll i = 0; i < n; i++) cout << res[i] << " ";
        cout << endl;
    }
}