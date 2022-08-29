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
    map<int , list<int>> l;

    public:
    void addEdge(int node1 , int node2)
    {
        // * undirected graph
        l[node1].push_back(node2);
        l[node2].push_back(node1);
    }

    void bfs(int source)
    {
        map<int,bool>visited ;                    
        queue <int > q ;

        // * start from source node
        q.push(source) ;                
        visited[source] = true;

        // * traversal
        while( !q.empty())
        {
            int currNode = q.front();
            q.pop();

            cout << currNode << sp ;

            for(int neighbour : l[currNode])
            {
                if(visited[neighbour] == false)
                {
                    q.push(neighbour);
                    visited[neighbour] = true ;
                }
            }
        }

    }
};
    

int main()
{
    fast;

    ll node , edge ;
    cin >> node >> edge ;
   
    Graph g;
    
    // * take graph edges
    for(ll i = 0 ; i < edge ;i++)
    {
        ll x , y ; // * x = node1 , y = node2
        cin >> x >> y ;

        g.addEdge(x,y);
    }

    // * start BFS(start node)
    g.bfs(0);    
    
}
