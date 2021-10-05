// C++ program to print the sum 
// of all numbers in range L and R 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return the sum of 
// all natural numbers 
int sumNatural(int n) 
{ 
    int sum = (n * (n + 1)) / 2; 
    return sum; 
} 
  
// Function to return the sum 
// of all numbers in range L and R 
int suminRange(int l, int r) 
{ 
    return sumNatural(r) - sumNatural(l - 1); 
} 
  
// Driver Code 
int main() 
{ 
    int l = 2, r = 5; 
    cout << "Sum of Natural numbers from L to R is "
         << suminRange(l, r); 
  
    return 0; 
} 