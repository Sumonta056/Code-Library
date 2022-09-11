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

ll bigMod(ll value, ll power, ll mod)
{
    ll result = 1;

    // * iterate of every binary bit of power

    while (power > 0)
    {
        // * geting the last bit
        // * check if last bit is 0 or 1 : here is 1
        if (power & 1)
        {
            result = (result * value) % mod;
        }

        value = (value * value) % mod;
        power = power >> 1; // * for going to next last bit
        /*
            a = 5(00000101)
            * right shift
            a = a >> 1
            a = 00000010 = 2
        */
    }

    return result;
}

int main()
{
    fast;

    cout << bigMod(2, 5, 7) << endl;
}
