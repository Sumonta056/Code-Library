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
// * for [a]

vector<vector<int>> floydWarshal(vector<vector<int>> graph)
{
    vector<vector<int>> distance(graph);

    int node = graph.size();

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
    vector<vector<int>> graph = {{0, 5, INF, 10},
                                 {INF, 0, 3, INF},
                                 {INF, INF, 0, 1},
                                 {INF, INF, INF, 0}};

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
}
