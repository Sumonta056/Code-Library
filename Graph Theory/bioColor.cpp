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

#define size(s) s.length()
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

#define fo(i, a, b) for (int i = a; i <= b; i++)

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

#define N 202
int node, edge;

int adj[N][N];
int color[N];

int bfs(int startingNode)
{
    // * initializing
    for (int i = 0; i < node; i++)
    {
        color[i] = 0;
    }

    queue<int> q;
    q.push(startingNode);

    color[0] = 2;

    while (!q.empty())
    {
        int x = q.front(); // * x = current node
        q.pop();

        // cout << x <<sp ;

        for (int i = 0; i < node; i++)
        {
            if (adj[x][i] == 1)
            {
                if (color[i] == 0)
                {
                    q.push(i); // * x er neighboor i

                    color[i] = 1 - color[x];
                }

                else if (color[x] == color[i])
                {
                     return 1;
                }
            }      
        }
    }

    return 0;
}

int main()
{
    fast;

    int t;

    while (cin >> t)
    {
        if (t == 0)
            break;

        node = t;
        cin >> edge;

        for (int i = 0; i < edge; i++)
        {
            int nodeA, nodeB;

            cin >> nodeA >> nodeB;

            adj[nodeA][nodeB] = 1;
            adj[nodeB][nodeA] = 1;
        }

        int p = bfs(0);

        if (p == 0)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");


        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
               adj[i][j] = 0 ;
            }
        }
    }
}
