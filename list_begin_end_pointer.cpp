// CPP program to illustrate
// Implementation of end() function
#include <iostream>
#include <list>
using namespace std;

int main()
{
    // declaration of list container
    list<int> mylist{1, 2, 3, 4, 5};

    // using end() to print list
    for (auto it = mylist.begin(); it !=
                                   mylist.end();
         ++it)
        cout << ' ' << *it;
    return 0;
}

// * pointer
ll p1_top = *p1.begin();
ll p2_top = *p2.begin();

if (p1_top > p2_top)
{
    p1.pop_front();
    p2.pop_front();

    p1.push_back(p2_top);
    p1.push_back(p1_top);
}