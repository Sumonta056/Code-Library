// Log based C++ program to count number of 
// digits in a number 
#include <bits/stdc++.h> 
using namespace std; 
  
int countDigit(long long n) 
{ 
    return floor(log10(n) + 1); 
} 
  
// Driver code 
int main(void) 
{ 
    long long n = 345289467; 
    cout << "Number of digits : " << countDigit(n); 
    return 0; 
} 
  