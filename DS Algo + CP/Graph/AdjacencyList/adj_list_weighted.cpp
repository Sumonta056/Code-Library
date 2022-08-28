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
#include <list>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define ll long long int

class Graph
{
    // * 0 -> (1 , 20)
    // ? node1 -> (node2 , weight)
    unordered_map<ll, list<pair<ll, ll>>> l;

    // ! if you want to get sorted order use "map"

public:
    void addEdge(ll node1, ll node2, ll weight)
    {
        l[node1].push_back(make_pair(node2, weight));
    }

    void printList()
    {
        //* (pair it : l)
        for (auto it : l)
        {
            ll node = it.first;
            list<pair<ll, ll>> neighbour = it.second;

            cout << "Node :" << node << "->";
            for(auto i : neighbour)
            {
                ll node2 = i.first;
                ll weight = i.second;
                
                cout<<"("<<node2<<","<<weight<<") ";
            }
            cout << endl;
        }
    }
};

int main()
{
    fast;

      ll node , edge ;
    cin >> node >> edge ;

    // * create class object
    Graph g;

    // * take graph edges
    for(ll i = 0 ; i < edge ;i++)
    {
        ll x , y ; // * x = node1 , y = node2
        ll z ;     // * z = weight
        cin >> x >> y >> z;

        g.addEdge(x,y,z);
    }

    g.printList(); 
}

/*

4 9
0 1 20
1 0 20
1 3 30
3 1 30
0 2 10
2 0 10
2 3 40
3 2 40
0 3 50

*/