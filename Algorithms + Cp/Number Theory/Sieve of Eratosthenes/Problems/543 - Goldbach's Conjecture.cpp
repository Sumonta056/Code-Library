//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp " "
#define enter cout << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define N 1000000

int primesTable[N];

void SieveOfEratosthenes()
{
    int i = 2;
    for (; i <= N; ++i)
        primesTable[i] = 1;

    primesTable[0] = primesTable[1] = 0;

    int len = sqrt(N);

    for (i = 2; i <= len; ++i)
    {
        if (primesTable[i])
        {
            for (int k = i * i; k <= N; k += i)
                primesTable[k] = 0;
        }
    }

    /**
     * 2 is an Even Prime but the question states only odd primes,
     * So 2 should be left out.
     */
    primesTable[2] = 0;
}

int main()
{
    fast;
    SieveOfEratosthenes();

    int n;
    while (scanf("%d", &n) && n)
    {

        /**
         * The bound here does not matter much. a < ( n >> 1 ) will also work.
         * But no need for that, max(n) = b - a will be always found before n / 2 for this problem.
         *
         * Since we are maximizing and starting with the lowest value and
         * generating the larger value from that so a and b will be at most n / 2.
         *
         * If, a + b = n, then if a > n / 2 then, b < n / 2 otherwise a + b != n.
         *
         * Also start from 3 since 2 is an even prime and not allowed in this problem.
         */
        for (int a = 3; a < n; ++a)
        {
            if (primesTable[a])
            {
                /**
                 * Since, n = a + b
                 * Them,  b = n - a
                 */
                int b = n - a;
                /**
                 * Check if the resulting number is prime since a and b both are primes.
                 * A number may be made up of multiple primes but print the first one since
                 * we are asked to maximize b - a.
                 */
                if (primesTable[b])
                {
                    printf("%d = %d + %d\n", n, a, b);
                    break;
                }
            }
        }
    }

    return 0;
}