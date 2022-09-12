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

class Graph
{
    // * change type if needed
    map<int, list<int>> l;

public:
    void addEdge(int node1, int node2)
    {
        // * undirected graph
        l[node1].push_back(node2);
        l[node2].push_back(node1);
    }

    void bfs(int source)
    {
        map<int, int> distance;
        queue<int> q;

        // * making all nodes distance infinity
        for (auto it : l)
        {
            int node = it.first;
            distance[node] = INT_MAX;
        }

        // * start from source node
        q.push(source);
        distance[source] = 0;

        // * traversal
        while (!q.empty())
        {
            int currNode = q.front();
            q.pop();

            cout << currNode << sp;

            for (int neighbour : l[currNode])
            {
                if (distance[neighbour] == INT_MAX) // * if distance change node is visited
                {
                    q.push(neighbour);
                    distance[neighbour] = distance[currNode] + 1; // * dis[child] = dis[parent]+1 ;
                }
            }
        }

        cout << endl;

        for (auto it : distance)
        {
            int node = it.first;
            int dis = distance[node];

            cout << "Node : " << node << sp << "Distance from source node " << source << " : " << dis << sp << endl;
        }
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

    // * start BFS(start node)
    g.bfs(0);
}
/*
6 6
0 1 
0 3
1 2
2 3 
3 4
4 5

* try source node = 0 , 2 
*/