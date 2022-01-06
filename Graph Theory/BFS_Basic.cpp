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

// * n = number of vertices
// * e = number of edges
// ! undirected and unweighted graph
// * o = connection no
// * 1 = connection or edge yes

// * if u declare an array globally it is initally zero
// ? int adj[100][100] = {0} ;
// * we dont know number of node
// * array size can based of number node
#define N 10000
int node, edge;

int adj[N][N];
int color[N];
// * 0 = white - visitable
// * 1 = not visitable - black

int parent[N];   // * keep track of every parent of current node
int distan[N]; // * distan between parent and current node index

void bfs(int startingNode)
{
    // * initializing
    for (int i = 0; i < node; i++)
    {
        color[i] = 0;
        distan[i] = INT_MIN;
        parent[i] = -1;
    }

    distan[startingNode] = 0;
    parent[startingNode] = -1;

    queue<int> q;
    q.push(startingNode);

    while (!q.empty())
    {
        int x = q.front(); // * x = current node
        q.pop();

        cout << x <<sp ;

        for (int i = 0; i < node; i++)
        {
            // * x to i node --- edge
            if (adj[x][i] == 1)
            {
                // * check visitable
                if (color[i] == 0)
                {
                    q.push(i); // * x er neighboor i

                    parent[i] = x; // * x node is parent of i cz we can go x to i
                    distan[i] = distan[x] + 1;
                }
            }
        }

        color[x] = 1 ; // * visited
    }
}

int main()
{
    fast;

    // cout << "Number of node and Edges : " ;
    cin >> node >> edge;

    int nodeA, nodeB;

    // * loop based of number edge
    for (int i = 0; i < edge; i++)
    {
        cin >> nodeA >> nodeB;

        // * input in array if there is connection
        adj[nodeA][nodeB] = 1;

        // ! only because it's a undirected graph
        // ! then this part is not needed
        adj[nodeB][nodeA] = 1;
    }

    // * printing
    // for(int i = 0 ; i < node ; i++)
    // {
    //     for(int j = 0 ; j < node ; j++)
    //     {
    //         cout << adj[i][j] <<" " ;
    //     }
    //     cout <<endl;
    // }

    bfs(0) ;
}

/*
8 7
0 1
0 2
1 3
2 4
2 5
3 6
3 7
*/
