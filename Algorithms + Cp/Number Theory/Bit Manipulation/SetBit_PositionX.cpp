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
    Given a value N, set / turn the bit at position X of N to 1.
    For example, N=12=1100 and X=0, then N will become 13=1101.
*/

int main()
{
    fast;
    // ! if u want to set the bit 0 to 1

    int n = 12;       // * binary = 1100
    int position = 1; // * 0 based index

    // * here at 12 : 1st bit is 0
    // * I want to set it as 1

    // left shift
    // * use bracket notation
    int mask = (1 << position); // 1 << 1  = 10 = 2

    // * seting the bit at position
    n = n | mask;
    // * add operation
    // * 12 | 2 = 1100 + 10 =  1110 =14
    cout << n << endl;




    // ! if u want to set the bit 1 to  0
    n = 12;       // * binary = 1100
    position = 3; // * 0 based index

    // * here at 12 : 3rd bit is 1
    // * I want to set it as 0

    // left shift
    // * use bracket notation
    mask = (1 << position); // 1 << 3  = 1000 = 8

    // * make all 1 bits = 0
    // * make all 0 bits = 1
    // ? ~ (bitwise NOT) 
    mask =~mask;   // 1000 = 0111 = 7
    cout << mask << endl; // Different value cause compiler working with 8 bit
                            // But same resul so chill

    // * seting the bit at position
    n = n & mask;
    // * multipication operation
    // * 12 & 2 = 1100 * 0111 =  0100 = 4
    cout << n << endl;
}
