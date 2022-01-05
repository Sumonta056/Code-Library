/*
Input  : myvector= {1, 2, 3, 4, 5}, iterator= myvector.begin()+2
         myvector.erase(iterator);
Output : 1, 2, 4, 5
*/

// CPP program to illustrate
// working of erase() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvector{1, 2, 3, 4, 5};
    vector<int>::iterator it;

    // * remove 0 index element
    it = myvector.begin();
    myvector.erase(it);
    // ? myvector.erase(myvector.begin()) ;

    // * remove index = 1 element
    myvector.erase(myvector.begin() + 1);

    // * remove the last element
    myvector.erase(myvector.end() - 1);

    // * remove first three element 
    myvector.erase(myvector.begin() , myvector.begin() + 3) ;
    
    
    
    // Printing the Vector
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    return 0;
}