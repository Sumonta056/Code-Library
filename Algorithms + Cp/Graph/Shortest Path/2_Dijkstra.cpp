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
#define endl '\n'
#define sp " "
#define enter cout << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const ll maxSize = 1e5 + 123;

// * initial all value 0
ll Distance[maxSize];
vector<pair<ll, ll>> adj[maxSize];
ll parent[maxSize];

ll inf = 9000000000000000000 ;

void dijkstra(ll source, ll nodes)
{
    // * make all distance inital inifinity
    for (ll i = 1; i <= nodes; i++)
    {
        Distance[i] = inf;
    }

    set<pair<ll, ll>> s;

    Distance[source] = 0;
    s.insert(make_pair(0, source));

    while (!s.empty())
    {
        // * using pointer to get the pair at front
        auto p = *(s.begin());

        ll currNode = p.second;
        ll nodeDist = p.first;
        // * remove current node from set
        s.erase(s.begin());

        // * iterate over all neighbors of current node
        for (auto neighbor : adj[currNode])
        {
            // * parent node distance + weight to partent to child < child node initial shortest distance
            if (nodeDist + neighbor.second < Distance[neighbor.first])
            {
                // * updating

                // * check if node is already in set
                ll destination = neighbor.first;
                // < distance , node >
                auto f = s.find(make_pair(Distance[destination], destination));

                if (f != s.end())
                {
                    s.erase(f);
                }

                // * insert new pair
                Distance[destination] = nodeDist + neighbor.second;
                s.insert(make_pair(Distance[destination], destination));

                parent[destination] = currNode;
                // * set the parent node of child
                // * for which node this child came from
            }
        }
    }
}

int main()
{
    fast;

    int node, edge;
    cin >> node >> edge;

    for (int i = 0; i < edge; i++)
    {
        ll node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        // make_pair(node1, node2); = {node1, node2}
        adj[node1].push_back({node2, weight});
        adj[node2].push_back({node1, weight});
    }

    dijkstra(1, node);

    if (Distance[node] == inf)
    {
        cout << -1 << endl;
        return 0;
    }

    ll presentNode = node;
    vector<ll> path;
    path.push_back(presentNode); // * pushing the destination node

    // * traverse untill parent node 0 found cz for source node parent is set 0 which never gonna change
    while (parent[presentNode] != 0)
    {
        path.push_back(parent[presentNode]); // * pushing the parent of current node
        presentNode = parent[presentNode];   // * set the parent node as current node
    }

    reverse(path.begin(), path.end()); // * reverse the path for better understand

    for (auto node : path)
        cout << node << sp;

    cout << endl;
}
