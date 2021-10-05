// CPP program to initialize a vector from
// an array.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = { 10, 20, 30 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    vector<int> vect(arr, arr + n);
 
    for (int x : vect)
        cout << x << " ";
 
    return 0;
}