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

int N = 100;
int status[100/32];
// * initial all 0
// * status array indexs value indicates one number is prime or not
// * suppose , status array is integer type and it has 32 bit in 1 index
// * all these 32 bits will indicate 32 differents numbers whether they prime or not
// * status[0] = (0 - 31 number)
// * A number's index = i / 32 ;
// * numbers status of prime is at status[i/32] in i%32 bit


// * check the status of a number
bool check(int index, int position)
{
    return (bool)(index & (1 << position));
}

// * set the bit of a non prime number
int setBit(int index, int position)
{
    return index = index | (1 << position);
}

void sieve()
{
    // * we will hunt for all odd numbers : we know in bits even numbers are not prime
    // * 3 5 7 9 11 13 ..
    for (int i = 3; i <= sqrt(N); i += 2)
    {
        if (check(status[i / 32], i % 32) == 0)
        {
            for (int j = i * i; j <= N; j += (2 * i))
            {
                status[j / 32] = setBit(status[j / 32], j % 32);
            }
        }
    }

    // * as 2 is prime
    puts("2");
    int currPN = 1 ;

    for (int i = 3; i <= N; i += 2)
    {
        if (check(status[i / 32], i % 32) == 0)
        {
           cout << i << endl;
        }
           
    }

}

int main()
{
    fast;
    sieve();
}

/*
 * how works

 * Suppose i = 3 now
 ? i /32 = 3/32 = 0      :  status[0] : index = 0
 ? i % 32 = 3 % 32 = 3   : 3rd bit  : pos = 3

 ! check(index = 0 , pos = 3)
 * index = 0 binary = 0
 * 1 << position = 1 * 2^position  = then convert the ans in binary
 * 1 << 3 = 1 * 2^3 = 8  in binary 1000
 * 1 << 3 = 1000
 * index & 1 << 3 = 0 * 1000  = 0 = ans
 * if ans == 0 the digit is prime
 ? now mark the multpies of 3

 * j = 3*3 = 9
 * status [ 9 / 32 ] = set ( status [ 9 / 32 ] , 9 % 32 ) = set (status [0] , 9)
 * index = 0 , position = 9
 * 1 << 9 = 1 * 2^9 = 512 = 1000000000(binary)
 * 0 | 1000000000 = 1000000000 : 9 th bit = 1 means not prime : setted
 * Goes like this



  * Suppose i = 72 now
 ? i /32 = 71/32 = 2     :  status[2] : index = 2
 ? i % 32 = 71 % 32 = 7   : 7th bit  : pos = 7

 ! check(index = 2 , pos = 7)
 * index = 2 ;  binary = 10
 * 1 << position = 1 * 2^position  = then convert the ans in binary
 * 1 << 7 = 1 * 2^7 = 128  in binary 10000000
 * 1 << 7 = 10000000
 * index & 1 << 7 = 10 * 10000000  = 0 = ans
 * if ans == 0 the digit is prime
 ? now mark the multpies of 71





*/
