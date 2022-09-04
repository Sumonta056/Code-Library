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

/*
 * How to detection cycles
 * Do a traversal in graph : if there exists a node that we are visiting in traversal ,
 * That is already visited
 ! Condition checking : parent node != neighbor node in visited
 * Cycle means if there is more than one way to visit a node
 ? True for only directed graph

 * for example : 1 - 2 - 3 - 4 - 5 - 6 - 7 - 1
 * its a cycle
 * again if we see 1 - 2 - 3 - 4 - 5
 * it is not a cycle but at node 3 we can see - we can go in either node 2 or 4
 * if you go 2 which is visited ; it will show cycle according to our algorithm
 * So for avoiding this : we use a condition that that between if there doesnot exits any parent meta
 * example : 2 is node 3 parent but 4 is not node 3 parent
 * so we have to check this condition also
*/

class Graph
{
    // * change type if needed
    map<int, list<int>> l;

    // * store dfs traversal node track
    vector<int> traverse;

public:
    void addEdge(int node1, int node2)
    {
        // * directed graph
        l[node1].push_back(node2);
        // l[node2].push_back(node1);
    }

    // ? using "&" cause we want map remains for all function calls
    // * recursive function to traverse the graph
    bool dfs_traverse(int currNode, map<int, bool> &visited, int parent)
    {
        // cout << currNode << sp;
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
                bool found = dfs_traverse(neighbour, visited, currNode);
                if (found)
                    return true;
            }

            // * node visited but should not equal to parent node
            else if (neighbour != parent)
            {
                cout << "cycle found " << currNode << sp << neighbour << endl;
                return true ;
            }
        }

        return false ;
    }

    void dfs(int source)
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

        // * traverse the graph
        int parent = -1; // * initial parent = -1
        bool check = dfs_traverse(source, visited, parent);

        if (check == true)
            cout << "Cycle Found" << endl;
        else
            cout << "Cycle Not Found" << endl;

        // * print the traversal
        // enter;
        for (auto node : traverse)
        {
            cout << node << sp;
        }
        enter;
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
    g.dfs(1);
}
