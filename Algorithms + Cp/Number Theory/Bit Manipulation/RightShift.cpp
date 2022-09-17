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
    

int main()
{
    fast;

    // * binary of 1 is 1
    cout << (1 >> 1) << endl ;
    // * after this binary removes last bit in end
    // * nothing  = 0  : ans
    // * a >> b  = a / 2^b

      // * binary of 4 is 100
    cout << (4 >> 1) << endl ;
    // * last bits get removed in end
    // * 10 = 2 : ans
    // * a >> b  = a / 2^b
    // * 5 >> 2 =  5 / 2^2 ;
    cout << (5 >> 2 ) << endl;

    
}
