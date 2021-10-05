// A O(sqrt(n)) program that prints all divisors
// in sorted order
#include <bits/stdc++.h>
using namespace std;
 
// function to print the divisors
void printDivisors(int n)
{
    // Vector to store half of the divisors
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
 
            // check if divisors are equal
            if (n / i == i)
                printf("%d ", i);
            else {
                printf("%d ", i);
 
                // push the second divisor in the vector
                v.push_back(n / i);
            }
        }
    }
 
    // The vector will be printed in reverse
    for (int i = v.size() - 1; i >= 0; i--)
        printf("%d ", v[i]);
}
 
/* Driver program to test above function */
int main()
{
    printf("The divisors of 100 are: n");
    printDivisors(100);
    return 0;
}