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
/*
    Given input : a , mod
    * Find such : (a *b) % mod = 1
    * where b is multipicative modulo inverse of a with respect to mod
    * Example : a = 6 , mod = 7
    * (6 * b ) % mod = 1
    * For which value of b we get ans = 1
    ! b = 6
*/

int modInverse(int a, int m)
{
    for (int x = 1; x < m; x++)
    {
        if (((a % m) * (x % m)) % m == 1)
        {
            return x;
        }
    }

    return 0;
}

int main()
{
    int a = 6, m = 7;

    // Function call
    cout << "Modulo inverse : " << endl;
    cout << modInverse(a, m) << endl;

    return 0;
}
