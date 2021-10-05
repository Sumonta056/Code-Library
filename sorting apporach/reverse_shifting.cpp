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
#define Y cout << "YES\n"
#define No cout << "NO\n"

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

int main()
{
    fast;

    int n;
    cin >> n;

    int arr[n];
    int sortedarray[n];

    // * taking array's value

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sortedarray[i] = arr[i];
    }

    // * sort the array
    sort(sortedarray, sortedarray + n);

    // * check array is already sorted ?
    int startpoint = -1;
    int check = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != sortedarray[i])
        {
            startpoint = i;
            check = 1;
            break;
        }
    }

    if (check == 0)
    {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }

    // * find the endpoint where the array unsorted
    int endpoint = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != sortedarray[i])
        {
            endpoint = i;
            break;
        }
    }

    // * reverse segement
    for (int i = 0; startpoint+i <= endpoint-i; i++)
    {
        swap(arr[startpoint + i], arr[endpoint - i]);
    }

    // * check array is sorted now?
    int checking = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != sortedarray[i])
        {
            checking = 1;
            break;
        }
    }

    //cout << checking << endl;

    if (checking == 1)
        cout << "no" << endl;
    else
    {
        cout << "yes" << endl;
        cout << startpoint + 1 << " " << endpoint + 1 << endl;
    }
}
