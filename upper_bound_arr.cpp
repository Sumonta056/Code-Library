/*
Input : 10 20 30 30 40 50
Output : upper_bound for element 30 is at index 4

Input : 10 20 30 40 50
Output : upper_bound for element 45 is at index 4

Input : 10 20 30 40 50
Output : upper_bound for element 60 is at index 5
*/

// CPP program to illustrate using 
// std :: upper_bound with vectors
#include <bits/stdc++.h>
  
// Driver code
int main()
{
    std::vector<int> v{ 10, 20, 30, 40, 50 };
  
    // Print vector
    std::cout << "Vector contains :";
    for (int i = 0; i < v.size(); i++)
        std::cout << " " << v[i];
    std::cout << "\n";
  
    std::vector<int>::iterator upper1, upper2;
  
    // std :: upper_bound
    upper1 = std::upper_bound(v.begin(), v.end(), 35);
    upper2 = std::upper_bound(v.begin(), v.end(), 45);
  
    std::cout << "\nupper_bound for element 35 is at position : " 
              << (upper1 - v.begin());
    std::cout << "\nupper_bound for element 45 is at position : "
              << (upper2 - v.begin());
  
    return 0;
}
/*
   // using upper_bound
    int upper1 = upper_bound(arr, arr+5, 35) - arr;
    int upper2 = upper_bound(arr, arr+5, 45) - arr;
*/