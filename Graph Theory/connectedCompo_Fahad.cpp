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
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
//
vll adj[mx], visited(mx, 0);
ll node, edge, cnt;
set<ll> nodeSet;

void dfs(ll sNode) {
    cnt++;
    visited[sNode] = 1;
    for (ll i = 0; i < adj[sNode].size(); i++) {
        if (!visited[adj[sNode][i]]) dfs(adj[sNode][i]);
    }
}
int main() {
    cin >> node >> edge;
    for (ll i = 0; i < edge; i++) {
        ll a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
        nodeSet.insert(a);
        nodeSet.insert(b);
    }

    for (auto it = nodeSet.begin(); it != nodeSet.end(); it++) {
        if (!visited[*it]) {
            cnt = 0;
            dfs(*it);
            cout << cnt << endl;
        }
    }
}