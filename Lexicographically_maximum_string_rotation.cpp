/*
 * Bidhan Roy
 * University of Dhaka
 */

using namespace std;
#include <bits/stdc++.h>

#define sgn(x, y) ((x) + eps < (y) ? -1 : ((x) > eps + (y) ? 1 : 0))
#define rep(i, n) for (int i = 0; i < (n); i++)
#define mem(x, val) memset((x), (val), sizeof(x));
#define rite(x) freopen(x, "w", stdout);
#define read(x) freopen(x, "r", stdin);
#define all(x) x.begin(), x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x) * (x))
#define pb push_back
#define clr clear()
#define inf (1 << 28)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9

typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int, int> mii;
typedef map<st, int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define mx 0
// * https://www.hackerrank.com/contests/csindia14-qr2/challenges/largest-lexicographical-rotation/editorial
int main()
{
    ios_base::sync_with_stdio(0);
    int test;
    cin >> test;
    while (test--)
    {
        string inp;
        cin >> inp;

        string ans = inp;
        int cnt = 1;

        for( int i = 0; i < inp.length() ;i++)
        {
            if (!i)
                continue;
            ans = max(ans, inp.substr(i) + inp.substr(0, cnt));
            cnt++;
        }
        cout << ans << endl;
    }
    return 0;
}