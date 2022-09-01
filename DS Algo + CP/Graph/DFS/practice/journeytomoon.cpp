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

// * question link :  https://www.hackerrank.com/challenges/journey-to-the-moon/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define sp " "
#define enter cout << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

ll NCR(ll n, ll r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            long long m = __gcd(p, k);

            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
 
    else
        p = 1;
 
    return p ;
}
 

class Graph
{
    // * change type if needed
    map<ll, list<ll>> l;

    // * store dfs traversal node track
    vector<ll> traverse;
    ll parts = 0;

public:
    void addEdge(ll node1, ll node2)
    {
        // * undirected graph
        l[node1].push_back(node2);
        l[node2].push_back(node1);
    }

    // ? using "&" cause we want map remains for all function calls
    // * recursive function to traverse the graph
    void dfs_traverse(ll currNode, map<ll, bool> &visited)
    {
        //cout << currNode << sp;
        parts++;
        traverse.push_back(currNode);

        // * make the node visited
        visited[currNode] = true;

        // * go to all neigbours node that is not visited
        for (auto neighbour : l[currNode])
        {
            if (!visited[neighbour])
            {
                // * visit that neighbour if not visited
                // * and also visits the neighbour's neigbour node like recursive function
                dfs_traverse(neighbour, visited);
            }
        }
    }

    void dfs(ll n)
    {
        map<ll, bool> visited; // * map <node , state > visited
                                // * if state = 0 ; node not visited - either visited
                                // * initial all state = 0

        // * initial make all nodes not visited
        for (auto it : l)
        {
            ll node = it.first;
            visited[node] = false; // * make node not visited by false
        }

        // * traverse the graph every compo nodes
        // * find all nodes of graph are connected or not
        ll compo = 0 ;
        ll ans = NCR(n ,2);
        for (auto it : l)
        {
            ll node = it.first;

            if (!visited[node])
            {
                
                dfs_traverse(node, visited);
                ans = ans - NCR(parts , 2);
                compo++;
                parts = 0 ;
            }
        }

        cout << ans << endl;
    }
};

int main()
{
    fast;

    ll node, edge;
    cin >> node >> edge;

    Graph g;

    // * take graph edges
    for (ll i = 0; i < edge; i++)
    {
        ll x, y; // * x = node1 , y = node2
        cin >> x >> y;

        g.addEdge(x, y);
    }

    // * start DFS(start node)
    g.dfs(node);
}
