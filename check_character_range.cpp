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

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;

        vector<string> s(k);

        for (int i = 0; i < k; i++)
        {
            cin >> s[i];
        }

        int check = 0;

        for (int i = 0; i < k; i++)
        {
            string a = s[i];
            int size = a.length();

            int small = 0, big = 0;

            for (int i = 0; i < size; i++)
            {
                if (a[i] >= 'a' && a[i] <= 'm')
                    small++;

                else if (a[i] >= 'N' && a[i] <= 'Z')
                    big++;
            }

            // cout << small <<" "<< big << endl;

            if( small == size || big == size) continue;

            else
            { 
                check = 1 ;
                break;

            }
            
        }

        if( check == 0 ) Y;
        else No;
    }
}
