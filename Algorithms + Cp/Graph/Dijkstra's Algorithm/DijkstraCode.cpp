//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      # #      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll int
#define endl '\n'
#define sp " "
#define enter cout << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

class Graph
{
    // * 0 -> (1 , 20)
    // ? node1 -> (node2 , weight)
    unordered_map<ll, list<pair<ll, ll>>> l;

    // ! if you want to get sorted order of key use "map"
    // * map<ll, list<pair<ll, ll>>> l;

public:
    void addEdge(ll node1, ll node2, ll weight)
    {
        // * directed graph
        l[node1].push_back(make_pair(node2, weight));

        // * for undirected graph
        l[node2].push_back(make_pair(node1, weight));
    }

    void printList()
    {
        //* (pair it : l)
        for (auto it : l)
        {
            ll node = it.first;
            list<pair<ll, ll>> neighbour = it.second;

            cout << "Node :" << node << "->";
            for (auto i : neighbour)
            {
                ll node2 = i.first;
                ll weight = i.second;

                cout << "(" << node2 << "," << weight << ") ";
            }
            cout << endl;
        }
    }

    void dijkstra(ll source)
    {
        //? < node , distance >
        unordered_map<ll, ll> dis;

        // * initial set all distance inifinity
        for (auto its : l)
        {
            ll node = its.first;
            dis[node] = INT_MAX;
        }

        // * Make a set to find out minimum distance
        // ? <distance , node>
        // * cause auto sort of distance
        set< pair<ll, ll> > s;

        dis[source] = 0;     // make source node to source node distance 0
        s.insert(make_pair(0, source)); // inserting source node in set with distance

        // * traverse untill set empty
        while (!s.empty())
        {
            // * using pointer to get the pair at front
            auto p = *(s.begin());

            ll currNode = p.second;
            ll nodeDist = p.first;
            // * remove current node from set
            s.erase(s.begin());

            // * iterate over all neighbors of current node
            for (auto neighbor : l[currNode])
            {
                // * parent node distance + weight to partent to child < child node initial shortest distance
                if (nodeDist + neighbor.second < dis[neighbor.first])
                {
                    // * updating

                    // * check if node is already in set
                    ll destination = neighbor.first;
                    // < distance , node >
                    auto f = s.find(make_pair(dis[destination], destination));

                    if (f != s.end())
                    {
                        s.erase(f);
                    }

                    // * insert new pair
                    dis[destination] = nodeDist + neighbor.second;
                    s.insert(make_pair(dis[destination], destination));
                }
            }
        }

        // * lets print distance to all node from source

        for (auto i : dis)
        {
            //  * distance from source
            cout << "dis From " << source << " to " << i.first << " = " << i.second << endl;
        }
    }
};

// * weighted Graph
// * non negative edge
// * Directed and undirected graphs
int main()
{
    fast;

    ll node, edge;
    cin >> node >> edge;

    // * create class object
    // ? node can start form 0 or 1 doesn't matter
    Graph g;

    // * take graph edges
    for (ll i = 0; i < edge; i++)
    {
        ll x, y; // * x = node1 , y = node2
        ll z;    // * z = weight
        cin >> x >> y >> z;

        g.addEdge(x, y, z);
    }

    g.printList();
    cout << endl;

    g.dijkstra(1);

    return 0;
}

/*
6 7
1 2 4
1 3 1
2 3 2
2 4 8
3 6 1
4 5 3
5 6 2
*/
