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

// * SOLVES this equation: Ax + By = GCD( A , B)

ll x, y, GCD;

void extendedEuclidean(ll a, ll b)
{
    // * base case
    if (b == 0)
    {
        x = 1;
        y = 0;
        GCD = a;
        return;
    }

    // * recursive calls
    extendedEuclidean(b, a % b);
 
    ll cx = y ;
    ll cy = x - (a/b) * y ;

    x = cx ;
    y = cy ;
}

int main()
{
    fast;
    extendedEuclidean(4 , 6);

    cout << x << sp << y << endl;
}
