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

int INF = INT_MAX;
// * for printing path
int nextNode[10][10];

// * initialize nextNode
void initialize(vector<vector<int>> adj)
{
    for (int i = 0; i < adj.size(); i++)
    {
        for (int j = 0; j < adj.size(); j++)
        {

            if (adj[i][j] == INF)
                nextNode[i][j] = -1;
            else
                nextNode[i][j] = j;
            // * what is the next child initial
            // * a to b : next[a][b] = b ;
        }
    }
}

vector<int> constructPath(int node1, int node2)
{
    // If there's no path between
    if (nextNode[node1][node2] == -1)
        return {};

    // Storing the path in a vector
    vector<int> path = {node1};
    while (node1 != node2)
    {
        node1 = nextNode[node1][node2];
        path.push_back(node1);
    }
    return path;
}

vector<vector<int>> floydWarshal(vector<vector<int>> graph)
{
    vector<vector<int>> distance(graph);

    int node = graph.size();

    ll highestnode = 1000;
    vector<ll> parent(highestnode, 0);

    // * In First Loop
    // * In Kth phase we include a node between two nodes as intermediate vertices system
    // * And check we can get shortest distances than current distance
    for (int k = 0; k < node; k++)
    {
        // * now iterate over all nodes betwee vectices
        // * Iterate over 2D matrix
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                // * if node k is included , and can we minimize the distance
                // ! can cause over flow : so try to define INF or INT_MAX
                // if (distance[i][j] > distance[i][k] + distance[k][j])
                if (distance[i][j] > (distance[i][k] + distance[k][j]) && (distance[k][j] != INF && distance[i][k] != INF))
                {
                    // * for parent
                    // * next shortest distance node set
                    nextNode[i][j] = nextNode[i][k];
                    distance[i][j] = distance[i][k] + distance[k][j];
                }
            }
        }
    }

    return distance;
}

int main()
{
    fast;
    // * must have to define INF
    // int INF = 100;
    // int INF = INT_MAX;
    vector<vector<int>> graph = {{0, 3, INF, 7},
                                 {8, 0, 2, INF},
                                 {5, INF, 0, 1},
                                 {2, INF, INF, 0}};

    // * initialize next nodes and edges
    
    initialize(graph);

    vector<vector<int>>
        shortest = floydWarshal(graph);

    for (int i = 0; i < shortest.size(); i++)
    {
        for (int j = 0; j < shortest.size(); j++)
        {
            cout << shortest[i][j] << sp;
        }

        cout << endl;
    }

    cout << "PATH" << endl;
    vector<int> path = constructPath(3, 2);
    int n = path.size();
    for (int i = 0; i < n - 1; i++)
        cout << path[i] << " -> ";
    cout << path[n - 1] << endl;
}
