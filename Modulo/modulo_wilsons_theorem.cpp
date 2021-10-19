// Note that n! % p is 0 if n >= p. This method is mainly useful when p is close to input number n. 
// For example (25! % 29). From Wilson’s theorem, we know that 28! is -1.
//  So we basically need to find [ (-1) * inverse(28, 29) * inverse(27, 29) * inverse(26) ] % 29. 
//  The inverse function inverse(x, p) returns inverse of x under modulo 

// C++ program to comput n! % p using Wilson's Theorem
#include <bits/stdc++.h>
using namespace std;
 
// Utility function to do modular exponentiation.
// It returns (x^y) % p
int power(int x, unsigned int y, int p)
{
    int res = 1; // Initialize result
    x = x % p; // Update x if it is more than or
    // equal to p
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Function to find modular inverse of a under modulo p
// using Fermat's method. Assumption: p is prime
int modInverse(int a, int p)
{
    return power(a, p - 2, p);
}
 
// Returns n! % p using Wilson's Theorem
int modFact(int n, int p)
{
    // n! % p is 0 if n >= p
    if (p <= n)
        return 0;
 
    // Initialize result as (p-1)! which is -1 or (p-1)
    int res = (p - 1);
 
    // Multiply modulo inverse of all numbers from (n+1)
    // to p
    for (int i = n + 1; i < p; i++)
        res = (res * modInverse(i, p)) % p;
    return res;
}
 
// Driver method
int main()
{
    int n = 25, p = 29;
    cout << modFact(n, p);
    return 0;
}