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

ll N = 150000000;
vector<ll> status(N / 32);
vector<ll> prime;
ll countOne = 0;

vector<char> countB;

// * check the status of a number
bool check(ll index, ll position)
{
    return (bool)(index & (1 << position));
}

// * set the bit of a non prime number
ll setBit(ll index, ll position)
{
    return index = index | (1 << position);
}

void binary(int n)
{
    ;
    int i = 0;
    while (n > 0)
    {
        int temp;
        temp = n % 2;
        countB.push_back((char)(temp + 48));
        n = n / 2;
        i++;
    }
}

void sieve()
{

    for (ll i = 3; i <= sqrt(N); i += 2)
    {
        if (check(status[i / 32], i % 32) == 0)
        {
            for (ll j = i * i; j <= N; j += (2 * i))
            {
                status[j / 32] = setBit(status[j / 32], j % 32);
            }
        }
    }

    prime.push_back(2);

    for (ll i = 3; i <= N; i += 2)
    {
        if (check(status[i / 32], i % 32) == 0)
            prime.push_back(i);
    }

    for (int i = 0; i < prime.size(); i++)
    {
        binary(prime[i]);
    }
}

int main()
{
    fast;
    sieve();

    int t;
    cin >> t;

    while (t--)
    {
        int value;
        cin >> value;
        ll ans = 0;

        for (int i = 0; i < value; i++)
        {
            if (countB[i] == '1')
                ans++;
        }

        cout << ans << endl;
    }
}
