// CPP program to create an empty vector
// and push values one by one.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Create an empty vector
    vector<int> vect;
 
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
 
    for (auto x : vect)
        cout << x << " ";
 
    return 0;
}