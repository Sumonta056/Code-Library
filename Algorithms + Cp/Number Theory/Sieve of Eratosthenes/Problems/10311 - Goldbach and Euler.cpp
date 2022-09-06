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

#define ll long long int
#define endl '\n'
#define sp " "
#define enter cout << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define N 100000000 // * 10e8
ll number[N];

void prime()
{
    ll i, j, sq;
    sq = sqrt(N);
    // * making all even numbers not prim
    for (i = 4; i <= N; i += 2)
    {
        number[i] = 1;
    }
    // * marking the odd numbers that are not prime
    for (i = 3; i <= sq; i += 2)
    {
        for (j = i * i; j <= N; j += i)
            number[j] = 1;
    }
    // * as 1 is not prime
    number[1] = 1;
}

int main()
{
    prime();
    unsigned long long int i, a, x, y, pk = 0;

    while (scanf("%llu", &a) == 1)
    {

        if (a == 1)
            printf("%llu is not the sum of two primes!\n", a);

        else if (a % 2 == 1)
        {
            if (number[a - 2] == 0)
                printf("%llu is the sum of 2 and %llu.\n", a, a - 2);
            else
                printf("%llu is not the sum of two primes!\n", a);
        }

        else
        {
            x = 0;
            y = 0;

            for (i = a / 2; i < a; i++)
            {

                if (number[(a / 2) - x] == 0 && number[i] == 0 && ((a / 2) - x) != i)
                {
                    y = 1;
                    printf("%llu is the sum of %llu and %llu.\n", a, a - i, i);
                    break;
                }
                x++;
            }
            if (y == 0)
                printf("%llu is not the sum of two primes!\n", a);
        }
    }
    return 0;
}