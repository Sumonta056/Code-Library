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

#define max3(a,b,c) max(max((a),(b)),(c))
#define min3(a,b,c) min(min((a),(b)),(c))

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

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

#define N 10000
int node, edge;

// * track time
int Time = 1;
int stime[N] ;
int ftime[N] ;


int adj[N][N];
int color[N];
// * 0 = white - visitable
// * 1 = not visitable - black
// * 2 = gray

void dfsVisit(int x) // * x = node
{
   // * color[x] = gray , on working

   stime[x] = Time ;
   ++Time ;
   //cout << Time ;

   // * find neighbour node
   for(int i = 0 ; i < node ; i++)
   {
       if( adj[x][i] == 1)
       {
           if(color[i] == 0 )  // * check neighbour is visitable or not
           {
               dfsVisit(i) ;
           }
       }

   }

   color[x] = 1 ; // * node is no more visitable

   ftime[x] = Time ;
   ++Time;
}

void dfs()
{
    // * initally all node color = 0 means white
    // * cz global array = 0

    for(int i = 0 ; i < node ; i++)
    {
        if(color[i] == 0) // * check the node is visitable or not
        {
            dfsVisit(i) ;
        }
    }


}

int main()
{
    fast;

    cin >> node >> edge;

    int nodeA, nodeB;   
    for (int i = 0; i < edge; i++)
    {
        cin >> nodeA >> nodeB;
        
        adj[nodeA][nodeB] = 1;
        //* adj[nodeB][nodeA] = 1;
    }

    dfs();

    cout << endl;

    for(int i = 0 ; i < node ; i++)
    {
        cout << "Node " << (char)('A'+i) << " " <<stime[i] <<sp<< ftime[i] <<endl;
    }


    
}

// 5 7
// 0 1
// 0 3
// 1 2
// 1 3
// 2 4
// 3 4
// 3 2
