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

    void printList()
    {
        // * this kind of print to avoid unknown node starting 1 , 0
        for(auto it : l)
        {
            cout << "Node" <<it.first<<"->" ;
            list<int> neighbours = it.second;

            for(auto p : neighbours) cout <<p<<sp;

            enter;
        }
    }
};
    

int main()
{
    fast;

    ll node , edge ;
    cin >> node >> edge ;
   
    // * create class object
    // * node can start from anywhere
    Graph g;
   

    // * take graph edges
    for(ll i = 0 ; i < edge ;i++)
    {
        ll x , y ; // * x = node1 , y = node2
        cin >> x >> y ;

        g.addEdge(x,y);
    }
    g.printList(); 
    
}
