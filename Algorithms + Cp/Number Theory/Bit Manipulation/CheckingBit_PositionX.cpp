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
Given a number N, find the value of its bit at position X.
For example,
if N=12=(1100)2 and X=2, then value of bit is 1.
*/
int main()
{
    fast;

    int n = 12;
    int position = 2; // * 0 based index

    // * 12 bits represents = 1100
    // * now i want to get the 2nd bit

    int mask = 1 << position; // * left shift the position
                              // * 1 << 2 = 100 = 4
    int check = (n & mask);
    // * multipication operations
    // * 1100 & 100 = 100 = 4
    cout << check << endl;

    if (check == 0)
        cout << "The bit at position is 0" << endl;
    else
        cout << "The bit at position is 1" << endl;





    // * now i want to get the 1st bit
    position = 1; // * 0 based index

    mask = 1 << position; // 1 << 1 = 10 = 2

    check = (n & mask); // 1100 & 10 = 0 = 0
    if (check == 0)
        cout << "The bit at position is 0" << endl;
    else
        cout << "The bit at position is 1" << endl;
}
