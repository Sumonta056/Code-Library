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

#define f first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back

#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define sll set<ll>
#define qll queue<ll>
#define stll stack<ll>
#define Mi map<int, int>
#define mii map<pii, int>
#define alls(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()

#define Size(s) s.length()
#define all(v) (v.begin, v.end)
#define rev(v) reverse(v.begin, v.end)
#define srt(v) sort(v.begin, v.end)

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define pv(v)             \
    for (ll i : v)        \
        cout << i << " "; \
    cout << endl;

#define max3(a, b, c) max(max((a), (b)), (c))
#define min3(a, b, c) min(min((a), (b)), (c))

#define cin(n) cin >> n
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define printE(str) cout << str << endl
#define print(str) cout << str << endl
#define endl '\n'
#define Y cout << "YES\n"
#define No cout << "NO\n"
#define ye cout << "Yes\n"
#define no cout << "No\n"

#define sp " "
#define enter cout << endl;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define inf 1000000000000000005
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

#define foi(i, a, b) for (int i = a; i < b; i++)
#define foI(i, a, b) for (int i = a; i <= b; i++)
#define fol(i, a, b) for (ll i = a; i < b; i++)
#define foL(i, a, b) for (ll i = a; i <= b; i++)

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;

ll mod_mul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll mod_add(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}

vector<pair<int, int>> arr;

void countDivisors(int n)
{
    ll count = 0;
    ll p = n;

    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;
            else
            {
                count = count + 2;
            }
        }
    }

    arr.push_back({p, count});
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        // if (a.first < b.first)
        //     return a.second > b.second;
        // else
        //     return a.second < b.second;

        return a.first > b.first;
    }

    else
        return a.second < b.second;
}

int main()
{
    fast;
    int t;
    cin >> t;

    for (int i = 1; i <= 1000; i++)
    {
        countDivisors(i);
    }

    sort(arr.begin(), arr.end(), cmp);

    int j = 1;

    while (t--)
    {
        int k;
        cin >> k;

        cout << "Case " << j << ": ";
        cout << arr[k - 1].first << endl;
        j++;
    }
}
