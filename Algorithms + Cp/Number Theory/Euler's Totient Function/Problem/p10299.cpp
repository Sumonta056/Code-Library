
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
    cout.tie(NULL)

// * Euler's totient function, also known as phi-function
// * counts the number of integers between 1 and inclusive, which are coprime to n

// * Time Complexity: O(nloglog(n)))

int totient(int n)
{
    int i, ans = n;
    if (n == 1)
        return 0;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            ans -= ans / i;

        while (n % i == 0)
            n /= i;
    }

    if (n != 1)
        ans -= ans / n;
    return ans;
}

int main()
{
    int n;
    while (scanf("%d", &n) && n != 0)
    {
        printf("%d\n", totient(n));
    }
    return 0;
}
