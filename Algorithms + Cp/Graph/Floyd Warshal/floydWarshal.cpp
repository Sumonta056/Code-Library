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
    * All pair shortest paths provides
    * Shortest path from any source node to other nodes
    * Works with negative edges
    * can detect negative cycle

    ! Time complexity : O(n^3)
*/

ll N = 4;
int main()
{
    fast;

    // * initialize the graph with all edges INI_MAX
    // ! 0 nodes counts careful
    vector<int> init(N, INT_MAX);
    vector<vector<int>> adj(N, init);

    ll node, edge;
    cin >> node >> edge;

    for (int i = 0; i < edge; i++)
    {
        ll node1, node2, weight;
        cin >> node1 >> node2 >> weight;

        adj[node1][node2] = weight;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}
