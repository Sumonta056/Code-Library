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
int mi = -1;
int high = 0;

int main()
{
    fast;

    int n;
    cin >> n;

    multimap <int, int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        arr.insert(pair <int, int> (x, i));
    }

    //sort(arr.begin()  , arr.end());
    //map auto sorts element

    /*
    for( auto it = arr.begin() ; it!= arr.end() ; it++)
    {
        cout << it->first<<" "<<it->second<<endl;
    }
    */
    
    int ans[n] = {0};
    int i = 0;

    for( auto it = arr.begin() ; it!= arr.end() ; it++)
    {
        int index = it->second;

        ans[index] = max(high , mi - index) -  1; 

        mi = max( mi , index);
       
    }

    for ( i = 0 ; i < n ; i++)
    {
        cout << ans[i] <<" ";
    }

    
}
