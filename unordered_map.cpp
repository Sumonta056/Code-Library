/*
unordered_map vs map : 
map (like set) is an ordered sequence of unique keys whereas in unordered_map key can be stored in any order, 
so unordered. 
Map is implemented as balanced tree structure that is 
why it is possible to maintain an order between the elements (by specific tree traversal).
 Time complexity of map operations is O(Log n) while for unordered_map, it is O(1) on average. 
*/

// C++ program to demonstrate functionality of unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	// Declaring umap to be of <string, int> type
	// key will be of string type and mapped value will
	// be of int type
	unordered_map<string, int> umap;

	// inserting values by using [] operator
	umap["GeeksforGeeks"] = 10;
	umap["Practice"] = 20;
	umap["Contribute"] = 30;

	// Traversing an unordered map
	for (auto x : umap)
	cout << x.first << " " << x.second << endl;

}
