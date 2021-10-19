#include <bits/stdc++.h>
// *https://www.geeksforgeeks.org/multiply-large-integers-under-large-modulo/#

Time complexity: O(log b) 
Auxiliary space: O(1)

Note: Above approach will only work if 2 * m can be represent in standard data type otherwise it will lead to overflow. 

using namespace std;

Efficient solution : Since a and b may be very large numbers, if we try to multiply directly then it will definitely overflow. Therefore we use the basic approach of multiplication i.e.,
a * b = a + a + … + a (b times) 
So we can easily compute the value of addition (under modulo m) without any 
overflow in the calculation. But if we try to add the value of a repeatedly up to b times then it will definitely timeout for the large value of b, since the time complexity of this approach would become O(b).

So we divide the above repeated steps of a in simpler way i.e.,
// *    If b is even then
//  *   a * b = 2 * a * (b / 2),
// *   otherwise
//  *  a * b = a + a * (b - 1)
long long moduloMultiplication(long long a,
                               long long b,
                               long long mod)
{
    long long res = 0; // Initialize result

    // Update a if it is more than
    // or equal to mod
    a %= mod;

    while (b)
    {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % mod;

        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % mod;

        b >>= 1; // b = b / 2
    }

    return res;
}

// Driver program
int main()
{
    long long a = 426;
    long long b = 964;
    long long m = 235;
    cout << moduloMultiplication(a, b, m);
    return 0;
}

// This code is contributed
// by Akanksha Rai
