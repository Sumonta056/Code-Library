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
    ll node ;
                        // * list of integer
                        // * list <ll > l[node];
    list <ll > *l;      // ? why pointer cause we dont know the node size while compile time

    public: // * must needed
    // * initialize class
    Graph(ll node)
    {
        this->node = node ;

        l = new list<ll>[node];  // * initializing array list
    }

    void addEdge(ll node1 , ll node2)
    {
        // * if undirected edge , use both

        l[node1].push_back(node2);
        //l[node2].push_back(node1);
        // ? now directed edge
    }

    void printAdjList()
    {
        // * iterate over all vertices
        // ? if node starts from 1 use this
        // ? for(ll i = 1 ; i <= node ; i++)
        for(ll i = 0 ; i < node ; i++)
        {
            cout << "Node :"<<i<<" -> " ;

            for(ll neighbours : l[i])
            {
                cout<<neighbours<<" ";
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
    // * node starts from 0
    Graph g(node);
    // ? Graph(node+1)
    // ? if node starts from 1

    // * take graph edges
    for(ll i = 0 ; i < edge ;i++)
    {
        ll x , y ; // * x = node1 , y = node2
        cin >> x >> y ;

        g.addEdge(x,y);
    }
    g.printAdjList();   
     
}
/*
* node starts from 0
4 6
0 1
0 2
1 2
2 1
2 3
3 2

* node starts from 1
4 5
1 2
3 2
4 2
3 4
1 4

*/
