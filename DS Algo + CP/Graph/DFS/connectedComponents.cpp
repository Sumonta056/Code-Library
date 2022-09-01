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

    // * store dfs traversal node track
    vector<int> traverse;

public:
    void addEdge(int node1, int node2)
    {
        // * undirected graph
        l[node1].push_back(node2);
        l[node2].push_back(node1);
    }

    // ? using "&" cause we want map remains for all function calls
    // * recursive function to traverse the graph
    void dfs_traverse(int currNode, map<int, bool> &visited)
    {
        cout << currNode << sp;
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

    void dfs()
    {
        map<int, bool> visited; // * map <node , state > visited
                                // * if state = 0 ; node not visited - either visited
                                // * initial all state = 0

        // * initial make all nodes not visited
        for (auto it : l)
        {
            int node = it.first;
            visited[node] = false; // * make node not visited by false
        }

        // * traverse the graph every compo nodes
        // * find all nodes of graph are connected or not
        int compo = 0;
        for (auto it : l)
        {
            int node = it.first;

            if (!visited[node])
            {
                cout << "component:" << compo << "-> ";
                dfs_traverse(node, visited);
                
                compo++;
                enter;

            }
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

    // * start DFS(start node)
    g.dfs();
}
/*
9 8
0 1 
0 3
0 4
1 2
2 3
5 6
6 7
8 8
 * 8 8     single node declare like this otherwise not work cause using map
*/