// * Given two integers ‘a’ and ‘m’, find modular multiplicative inverse of ‘a’ under modulo ‘m’.
// *A modular multiplicative inverse of an integer a is an integer x such that a⋅x is congruent to 1 modular some modulus m. To write it in a formal way: we want to find an integer x so that

//  ! a⋅x mod m≡ 1 .     ( a * a^-1 = 1)
// *We will also denote x simply with a^−1.

// C++ program to find modular
// inverse of a under modulo m
#include <iostream>
using namespace std;
// *  Time Complexity: O(m).
// A naive method to find modular
// multiplicative inverse of 'a'
// under modulo 'm'
int modInverse(int a, int m)
{
    for (int x = 1; x < m; x++)
        if (((a % m) * (x % m)) % m == 1)
            return x;
}

// Driver code
int main()
{
    int a = 3, m = 11;

    // Function call
    cout << modInverse(a, m);
    return 0;
}