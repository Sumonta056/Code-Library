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
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[n];
        ll sortarr[n];

        // * 2d vector array for answers
        vector<vector<ll>> v;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sortarr[i] = arr[i];
        }

        sort(sortarr, sortarr + n);

        for (int i = n - 1; i > 0; i--)
        {
            for (int j = i; j >= 0; j--)
            {
                if (sortarr[i] == arr[j])
                {
                    if (j < i)
                    {
                        ll tempv = arr[j];

                        // * rotate
                        for (int k = j; k <= i - 1; k++)
                        {
                            arr[k] = arr[k + 1];
                        }

                        arr[i] = tempv;

                        // * save ans
                        vector<ll> temp;
                        temp.push_back(j + 1);
                        temp.push_back(i + 1);
                        temp.push_back(1);

                        v.push_back(temp);
                        arr[i] = mod;
                    }

                    else
                    {
                        arr[i] = mod;
                    }

                    goto nextloop;
                }
            }
            nextloop:;
        }

        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << endl;
        }
    }
}
