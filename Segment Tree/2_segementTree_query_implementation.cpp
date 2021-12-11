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

// ! initially variable callings
#define mx 100001
int arr[mx];
int tree[mx * 3]; // ? safety =  mx * 4

// * initially node == 1 || begin ==1
void init_tree(int node, int begin, int end)
{
    // * check leaf node or not
    if (begin == end)
    {
        tree[node] = arr[begin];
        // * inserting the leaf node into tree
        // * arr[begin] == first leaf node initally
        return;
    }

    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (begin + end) / 2;

    // * divide
    init_tree(left, begin, mid);    // ? left part
    init_tree(right, mid + 1, end); // ? right part

    // * after completing both part , insert it in parent node
    tree[node] = tree[left] + tree[right];
}

// * query in i to j 
int query(int node , int begin , int end , int range_i , int range_j)
{
    // * out of range checking
    if( range_i > end || range_j < begin)
    {
        return 0 ;
    }

    // * totally query is in range
    if(begin >= range_i && end <= range_j)
    {
        return tree[node];
    }

    // ? combination of in - out range
    int left = node * 2 ;
    int right = node * 2 + 1;
    int mid = (begin+end) / 2 ;

    // * query divide
    int p1 = query(left , begin , mid , range_i , range_j);
    int p2 = query(right , mid+1 , end , range_i , range_j);

    // * query u want to do
    // * current query is find sum in range
    return p1 + p2 ;

}

int main()
{
    fast;

    // * number of index in array
    int n;
    cin >> n;

    // * insert array elements
    // * start index with 1
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    // * insert array into tree
    init_tree(1, 1, n);

}
