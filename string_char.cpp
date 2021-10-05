// C++ program to implement
// the above approach
  
#include <bits/stdc++.h>
using namespace std;
  
// Function to traverse the string and
// print the elements of the string
void TraverseString(string str, int N)
{
    // Traverse the string
    for (auto ch : str) {
  
        // Print current character
        cout<< ch<< " ";
    }
}
// Driver Code
int main()
{
    string str = "GeeksforGeeks";
  
    // Stores length of the string
    int N = str.length();
  
    TraverseString(str, N);
}