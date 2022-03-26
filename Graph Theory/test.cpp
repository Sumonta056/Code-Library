/* Topological order may not exist if the graph contains cycle.
And may have multiple solutions of topological sort in one graph */
//! it is for directed acyclic graph
// Time Complexity: O (V + E)
// Tutorial: https://cp-algorithms.com/graph/topological-sort.html

#include <bits/stdc++.h>
using namespace std;
//
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mx 100010
#define mod 1000000007
#define inf INT_MAX
#define pi acos(-1)
#define endl '\n'
#define fin freopen("input", "r", stdin)
#define Fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
//
ll node, edge;
vector<bool> visited(mx, 0);
vector<vector<ll>> adj(mx);
stack<ll> tSort;

void dfs(ll cNode) {
    visited[cNode] = 1;
    for (ll i : adj[cNode]) {
        if (!visited[i]) dfs(i);
    }

    tSort.push(cNode); // after visiting a node pushing it into the stack
}
void dfsVisit() {
    // should start dfs from every node which is not visited yet.
    for (ll i = 0; i < node; i++) {
        if (!visited[i]) dfs(i);
    }
}

int main() {
    cin >> node >> edge;
    for (ll i = 0; i < edge; i++) {
        ll eFrom, eTo;
        cin >> eFrom >> eTo;
        adj[eFrom].pb(eTo); // directed edge
    }

    dfsVisit();

    // printing topological sort
    cout << "\nTopological sort: ";
    while(!tSort.empty()) {
        cout << tSort.top() << " ";
        tSort.pop();
    }
}