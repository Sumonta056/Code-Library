// * Use std::unordered_map when 

You need to keep count of some data (Example – strings) and no ordering is required.
You need single element access i.e. no traversal.

// CPP program to demonstrate use of
// std::unordered_map
#include <bits/stdc++.h>
 
int main()
{
    // Unordered map
    std::unordered_map<int, int> order;
 
    // Mapping values to keys
    order[5] = 10;
    order[3] = 5;
    order[20] = 100;
    order[1] = 1;
 
    // Iterating the map and
    // printing unordered values
    for (auto i = order.begin();
         i != order.end(); i++)
    {
        std::cout << i->first
                  << " : "
                  << i->second << '\n';
    }
}
Output
1 : 1
20 : 100
5 : 10
3 : 5