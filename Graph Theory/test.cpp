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
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
//
const ll node = 101;
ll adj[node][node], weight = 0;
vll visited(node, 0), adj1[node];

void dfs(ll cNode, ll prv)
{
    if (visited[cNode])
        return;
    visited[cNode] = 1;
    ll child = adj1[cNode][0] == prv ? adj1[cNode][1] : adj1[cNode][0];
    weight += adj[cNode][child];
    dfs(child, cNode);
}
int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        // adj[a][b] = w;
        adj[b][a] = w;
        adj1[a].pb(b);
        adj1[b].pb(a);
    }
    ll res = inf;
    dfs(1, adj1[1][1]);
    res = weight;
    weight = 0;
    visited.clear();
    visited.assign(node, 0);
    dfs(1, adj1[1][0]);
    res = min(res, weight);
    cout << res << endl;
}