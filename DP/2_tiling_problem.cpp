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
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define Mi map<int, int>
#define mii map<pii, int>
#define all(a) (a).begin(), (a).end()
#define f first
#define se second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'
#define Y cout << "YES\n"
#define No cout << "NO\n"

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();


//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;

const ll N = 1e12+1;
vector<ll> dp(N);
ll mod = 1e9 + 7;


void init()
{
    dp[1] = 1;
    dp[2] = 2;

    for (ll i = 3; i <= N; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % mod;

        // * i - 2 for vertical
        // * i - 1 for horizontal
    }
}
int main()
{
    fast;
    // * tiling 2*n

    fast;
    int t;
    cin >> t;

    init();

    while (t--)
    {
        int n;
        cin >> n;

        cout << dp[n] << endl;
    }
}
