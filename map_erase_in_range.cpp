// C++ program to illustrate
// map::erase(iteratorposition1, iteratorposition2)
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // initialize container
    map<int, int> mp;
    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 2, 20 });
    mp.insert({ 5, 50 });
 
    // prints the elements
    cout << "The map before using erase() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
 
    // function to erase in a given range
    // find() returns the iterator reference to
    // the position where the element is
    auto it1 = mp.find(2);
    auto it2 = mp.find(5);
    mp.erase(it1, it2);
 
    // prints the elements
    cout << "\nThe map after applying erase() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    return 0;
}