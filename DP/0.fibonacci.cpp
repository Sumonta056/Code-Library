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
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define Mi map<int, int>
#define mii map<pii, int>
#define all(a) (a).begin(), (a).end()
#define f first
#define se second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'
#define Y    cout << "YES\n"
#define No    cout << "NO\n"

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;

// ! past code with recursion

// int fib( int n )
// {
//     if( n == 0  || n == 1 ) return 1 ;

//     return fib( n-1) + fib( n-2) ;

// }
// * time complexitiy more

// ! DP code
// * goal is saving the data which is done already before and save time

int fib( int n , int *arr)
{
    if( n == 0 || n == 1) return 1;

    if( arr[i] >  0) return arr[i];

    int output = fib ( n-1 , arr) + fib( n-2 , arr) ;

    arr[n] = output ;
    return output ;
}

// ? how it works ( n == 5)
//*              5
//*       4              3
//*   3      2        2      1
//* 2   1  0   1    0   1
//*0 1

// * this code will just do for full left tree and save it ( 4,3,2)
// * for right ; it was already done , so we no need to do it again
// * we will just take the save data from array



int main()
{
    fast; 


}
