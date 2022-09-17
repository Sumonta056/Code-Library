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
    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;

    // * and
    // The result is 00000001
    cout << "a = " << a << ","
         << " b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;

    // * or
    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;

    // * xor
    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;

    // * not
    // The result is 11111010
    cout << "~a = " << (~a) << endl;

    // * Left Shift
    // The result is 00010010
    cout << "b << 1"
         << " = " << (b << 1) << endl;

    // * Right Shift
    // The result is 00000100
    cout << "b >> 1 "
         << "= " << (b >> 1) << endl;

    return 0;
}
