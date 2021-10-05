//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*     

         ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
        ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
        ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
         ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
              ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
        ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
         ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
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
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'

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

void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    fast;

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // * bubble sort 
    // * compare two nearest element from left to right
    // * then swap numbers
    // * after 1st loop we will found the highest value of array at last
    // * at end our array will be sorted

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n-1-i; j++) // * Last i elements are already in place
        {
            // * swap element if 1st > 2nd
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    
        cout<< endl;
    }

    /*
    * how it works 
    * array  14 33 27 35 10
    ! step 1
    *  14 33 27 35 10
    * 14 27 33 35 10
    * 14 27 33 10 35
    ! step 2
    * 14 27 10 33 35
    ! step 3
    * 14 10 27 33 35
    ! step 2
    * 10 14 27 33 35
    
    */

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
