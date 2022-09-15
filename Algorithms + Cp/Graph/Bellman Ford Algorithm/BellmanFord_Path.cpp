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

vector<ll> bellman_ford(ll node, ll source, vector<vector<ll>> adj)
{
    // * Parent track
    ll highestnode = 1000;
    vector<ll> parent(highestnode, 0); // * initial all nodes parent is 0

    // Distance for nodes
    // * Initial all distance set to INT_MAX or infinity
    vector<ll> distance(node + 1, INT_MAX);

    distance[source] = 0; // * Initial source node distance set to 0

    // * Relax all edge (node - 1) times
    for (int i = 0; i < node - 1; i++)
    {
        for (auto edge : adj)
        {
            ll node1 = edge[0];
            ll node2 = edge[1];
            ll weight = edge[2];

            // * To avoid overflow of INT_MAX SUM
            if (distance[node1] != INT_MAX)
            {
                // * if current distance is greater than present distance
                if (distance[node1] + weight < distance[node2])
                {
                    distance[node2] = distance[node1] + weight;
                    parent[node2] = node1; // * assinging child to parent if value change
                }
            }
        }
    }

    // * check negative weight cycle
    // * values of distance will change like continous loop if negtive cyle
    // * if we go more one iteration loop
    // * and value changes it means there is negative cycle
    for (auto edge : adj)
    {
        ll node1 = edge[0];
        ll node2 = edge[1];
        ll weight = edge[2];
        // ! checking if value is changing again for
        // * To avoid overflow of INT_MAX SUM
        if (distance[node1] != INT_MAX)
        {
            // * if current distance is greater than present distance
            if (distance[node1] + weight < distance[node2])
            {
                cout << "Negative weight cycle detection " << endl;
                exit(0);
            }
        }
    }

    // for (int i = 1; i <= node; i++)
    // {
    //     cout << "Parent " << i << " Child " << parent[i] << endl;
    // }
    // * printing Path
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


    // * return distance
    return distance;
}

// * negative weight
int main()
{
    fast;

    ll node, edge;
    cin >> node >> edge;

    // * Adjacency List with weighted
    vector<vector<ll>> adj;

    for (int i = 0; i < edge; i++)
    {
        ll node1, node2, weight;
        cin >> node1 >> node2 >> weight;

        adj.push_back({node1, node2, weight});
    }

    // * Bellman Ford ALgorithm
    vector<ll> dist = bellman_ford(node, 1, adj);

    for (int i = 1; i <= node; i++)
    {
        cout << "Node " << i << sp << " Distance " << dist[i] << endl;
    }

    return 0;
}
/*
 * PesuCode
 * Step 1:
 * Initita all Distance[Vectex] = INT_MAX
 * Execpt Source vertex : Distance[vertex] = 0
 * Step 2:
 * Relax All edgees (node - 1)time
 * for(node -1) { for (egde)}
 * (Relax){u to v} [ if dis[v] > dis[u] + weight]
 * [Dis[v] = dis[u] + weight]
 * Step 3:
 *

*/

/*
 * Negative weight cycle
3 3
1 2 3
2 3 4
3 1 -10
*/

/*
4 4
1 2 2 
2 4 -2
1 3 -10
3 4 9
*/