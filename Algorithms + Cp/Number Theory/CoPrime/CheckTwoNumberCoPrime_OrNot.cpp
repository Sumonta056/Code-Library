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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;

    else
        return gcd(b, a % b);
}

void coPrime(ll a, ll b)
{
    if (gcd(a, b) == 1)
    {
        cout << "Co-Prime" << endl;
    }

    else
        cout << "Not Co-Prime" << endl;
}

int main()
{
    fast;

    ll a = 99999999;
    ll b = 3;
    coPrime(a, b);
}

/*
 * Time Complexity: O(log(max(a,b)))

Auxiliary Space: O(1)
*/
